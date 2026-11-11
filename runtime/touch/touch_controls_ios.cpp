#include "touch_controls_ios.h"
#include "../config/config_ios.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <mutex>
#include <string>
#include <algorithm>

// ============================================================================
// Host Symbols Exported by WiseManChris/MHGURecomp-iOS (Verified via Mach-O nm)
// ============================================================================
// 与宿主 ABI 不相容的 guest 钩子：本 TU 内空实现（见下方说明）
static void fnhook_set(uint32_t, void (*)(uint32_t*)) {}
static void fnhook_call_original(uint32_t*, uint32_t) {}
static void guest_call(uint32_t*, uint32_t) {}

extern "C" {
    // Weak fallback for standalone syntax check; links to host's real symbols in MHGURecomp
    __attribute__((weak)) uint8_t* g_guest_base = nullptr;
    // 注意：宿主的实现签名是 fnhook_set(uint32_t addr, uint32_t detour) /
    // fnhook_call_original(Cpu*, uint32_t) / guest_call(Cpu*, uint32_t)，
    // 与本模块原本假设的“C 函数指针”式 API 不兼容。同名弱符号会被宿主强符号覆盖，
    // 于是 C 函数指针会被当成 detour 地址装进跳转表 → guest 跳到垃圾地址崩溃。
    // 因此这里改为本编译单元内的空实现（static，不参与链接），禁用这两条 guest 钩子。
    __attribute__((weak)) void input_set(uint64_t buttons, int32_t lx, int32_t ly, int32_t rx, int32_t ry) {
        (void)buttons; (void)lx; (void)ly; (void)rx; (void)ry;
    }

    // Host cimgui C-ABI exports (0x10011e918..0x1001248d4 in MHGURecomp.ipa)
    typedef struct ImVec2_c { float x, y; } ImVec2_c;
    typedef void ImDrawList_c;
    __attribute__((weak)) ImDrawList_c* igGetForegroundDrawList_Nil(void) { return nullptr; }
    __attribute__((weak)) void ImDrawList_AddLine(ImDrawList_c* self, const ImVec2_c p1, const ImVec2_c p2, uint32_t col, float thickness) {
        (void)self; (void)p1; (void)p2; (void)col; (void)thickness;
    }
    __attribute__((weak)) void ImDrawList_AddRect(ImDrawList_c* self, const ImVec2_c p_min, const ImVec2_c p_max, uint32_t col, float rounding, int flags, float thickness) {
        (void)self; (void)p_min; (void)p_max; (void)col; (void)rounding; (void)flags; (void)thickness;
    }
    __attribute__((weak)) void ImDrawList_AddRectFilled(ImDrawList_c* self, const ImVec2_c p_min, const ImVec2_c p_max, uint32_t col, float rounding, int flags) {
        (void)self; (void)p_min; (void)p_max; (void)col; (void)rounding; (void)flags;
    }
    __attribute__((weak)) void ImDrawList_AddCircle(ImDrawList_c* self, const ImVec2_c center, float radius, uint32_t col, int num_segments, float thickness) {
        (void)self; (void)center; (void)radius; (void)col; (void)num_segments; (void)thickness;
    }
    __attribute__((weak)) void ImDrawList_AddCircleFilled(ImDrawList_c* self, const ImVec2_c center, float radius, uint32_t col, int num_segments) {
        (void)self; (void)center; (void)radius; (void)col; (void)num_segments;
    }
    __attribute__((weak)) void ImDrawList_AddTriangleFilled(ImDrawList_c* self, const ImVec2_c p1, const ImVec2_c p2, const ImVec2_c p3, uint32_t col) {
        (void)self; (void)p1; (void)p2; (void)p3; (void)col;
    }
    __attribute__((weak)) void ImDrawList_AddPolyline(ImDrawList_c* self, const ImVec2_c* points, int num_points, uint32_t col, int flags, float thickness) {
        (void)self; (void)points; (void)num_points; (void)col; (void)flags; (void)thickness;
    }
    __attribute__((weak)) void ImDrawList_PathLineTo(ImDrawList_c* self, const ImVec2_c pos) {
        (void)self; (void)pos;
    }
    __attribute__((weak)) void ImDrawList_PathArcTo(ImDrawList_c* self, const ImVec2_c center, float radius, float a_min, float a_max, int num_segments) {
        (void)self; (void)center; (void)radius; (void)a_min; (void)a_max; (void)num_segments;
    }
    __attribute__((weak)) void ImDrawList_PathFillConvex(ImDrawList_c* self, uint32_t col) {
        (void)self; (void)col;
    }
    __attribute__((weak)) void ImDrawList_AddText_Vec2(ImDrawList_c* self, const ImVec2_c pos, uint32_t col, const char* text_begin, const char* text_end) {
        (void)self; (void)pos; (void)col; (void)text_begin; (void)text_end;
    }
    __attribute__((weak)) void mhgu_ios_trigger_haptic(float intensity) {
        (void)intensity;
    }
}

// ============================================================================
// 1. Decompiled Native HLE Hooks from khorne-hub/gu-native libmain.so
//    - mousecam.c (0x48a2e4..0x48afe0): hooks guest 0x002255cc
//    - itembar.c  (0x488594..0x4888e0): hooks guest 0x004f7f38
//    - weapon.c   (0x4946fc..0x494b40): reads guest 0x01a8ca48 & 0x01a85b58
// ============================================================================

static std::mutex s_mousecam_mtx;
static float s_mousecam_dx = 0.0f;
static float s_mousecam_dy = 0.0f;
static float s_mousecam_rem_x = 0.0f;
static float s_mousecam_rem_y = 0.0f;
static uint64_t s_mousecam_last_hook_ms = 0;
static bool s_mousecam_hooked = false;

static uint64_t monotonic_ms(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000ULL + (uint64_t)(ts.tv_nsec / 1000000ULL);
}

static inline bool is_valid_guest_ptr(uint32_t addr) {
    return (addr >= 0x08000000U && addr < 0x80000000U && (addr & 3U) == 0);
}

// Decompiled from libmain.so @ 0x48aacc (camera_stick_hook on guest 0x002255cc)
static void camera_stick_hook(uint32_t* r) {
    uint32_t cam = r[0];
    fnhook_call_original(r, 0x002255ccU);
    s_mousecam_last_hook_ms = monotonic_ms();

    if (!g_guest_base || !is_valid_guest_ptr(cam)) return;

    float dx = 0.0f, dy = 0.0f;
    {
        std::lock_guard<std::mutex> lk(s_mousecam_mtx);
        dx = s_mousecam_dx;
        dy = s_mousecam_dy;
        s_mousecam_dx = 0.0f;
        s_mousecam_dy = 0.0f;
    }

    if (std::fabs(dx) < 1e-5f && std::fabs(dy) < 1e-5f) return;

    // Exact APK multiplier: touch_cam_sens * 14.56355f (0x41690453)
    float sens = g_port_config.touch_cam_sens * 14.56355f;
    float fx = s_mousecam_rem_x - dx * sens;
    float fy = s_mousecam_rem_y + dy * sens;
    int32_t ix = (int32_t)fx;
    int32_t iy = (int32_t)fy;
    s_mousecam_rem_x = fx - (float)ix;
    s_mousecam_rem_y = fy - (float)iy;

    uint8_t* cam_ptr = g_guest_base + cam;
    if (ix != 0) {
        uint32_t yaw1 = (*(uint32_t*)(cam_ptr + 0x9ec) + (uint32_t)ix) & 0xFFFFU;
        uint32_t yaw2 = (*(uint32_t*)(cam_ptr + 0x9e4) + (uint32_t)ix) & 0xFFFFU;
        *(uint32_t*)(cam_ptr + 0x9ec) = yaw1;
        *(uint32_t*)(cam_ptr + 0x9e4) = yaw2;
    }
    if (iy != 0) {
        int32_t p1 = (int32_t)(*(int16_t*)(cam_ptr + 0x9e8)) + iy;
        int32_t p2 = (int32_t)(*(int16_t*)(cam_ptr + 0x9e0)) + iy;
        p1 = std::max(-0x3f00, std::min(0x3f00, p1));
        p2 = std::max(-0x3f00, std::min(0x3f00, p2));
        *(uint16_t*)(cam_ptr + 0x9e8) = (uint16_t)p1;
        *(uint16_t*)(cam_ptr + 0x9e0) = (uint16_t)p2;
    }
}

extern "C" void mousecam_init(void) {
    if (s_mousecam_hooked) return;
    s_mousecam_hooked = true;
    fnhook_set(0x002255ccU, camera_stick_hook);
}

extern "C" void mousecam_add(float dx, float dy) {
    std::lock_guard<std::mutex> lk(s_mousecam_mtx);
    s_mousecam_dx += dx;
    s_mousecam_dy += dy;
}

// Decompiled from libmain.so @ 0x488594..0x4888e0 (item_bar_hook on guest 0x004f7f38)
static std::mutex s_itembar_mtx;
static int32_t s_itembar_pending = 0;
static uint64_t s_itembar_last_hook_ms = 0;
static bool s_itembar_hooked = false;

static void item_bar_hook(uint32_t* r) {
    uint32_t bar = r[0];
    fnhook_call_original(r, 0x004f7f38U);

    uint64_t now = monotonic_ms();
    uint64_t prev = s_itembar_last_hook_ms;
    s_itembar_last_hook_ms = now;

    int32_t step = 0;
    {
        std::lock_guard<std::mutex> lk(s_itembar_mtx);
        if (prev == 0 || (now - prev) > 200ULL) {
            s_itembar_pending = 0;
        }
        if (s_itembar_pending > 0) step = 1;
        else if (s_itembar_pending < 0) step = -1;
    }

    if (step == 0 || !g_guest_base || !is_valid_guest_ptr(bar)) return;

    uint32_t saved0 = r[0], saved1 = r[1], saved2 = r[2], saved3 = r[3];
    r[0] = bar;
    guest_call(r, 0x0047bcc8U);
    if (r[0] == 1U) {
        uint32_t vtbl = *(uint32_t*)(g_guest_base + bar);
        uint32_t fn_ptr = (vtbl != 0) ? *(uint32_t*)(g_guest_base + vtbl + 0x230U) : 0U;
        r[0] = bar;
        guest_call(r, 0x0047b918U);
        if (r[0] == 0U && fn_ptr != 0U) {
            r[0] = bar;
            guest_call(r, fn_ptr);
            if (r[0] == 1U) {
                {
                    std::lock_guard<std::mutex> lk(s_itembar_mtx);
                    s_itembar_pending -= step;
                }
                int16_t cur_idx = *(int16_t*)(g_guest_base + bar + 0x3298U);
                r[0] = bar;
                r[1] = (step > 0) ? 1U : 0U;
                r[2] = (uint32_t)((int32_t)cur_idx + step);
                guest_call(r, 0x004880fcU);
                *(int16_t*)(g_guest_base + bar + 0x3298U) = (int16_t)r[0];
                *(uint32_t*)(g_guest_base + bar + 0x253cU) |= (step > 0) ? 4U : 2U;
            }
        }
    }
    r[0] = saved0; r[1] = saved1; r[2] = saved2; r[3] = saved3;
}

extern "C" void itembar_init(void) {
    if (s_itembar_hooked) return;
    s_itembar_hooked = true;
    fnhook_set(0x004f7f38U, item_bar_hook);
}

extern "C" void itembar_scroll(int steps) {
    if (steps == 0) return;
    uint64_t now = monotonic_ms();
    if (s_itembar_last_hook_ms != 0 && (now - s_itembar_last_hook_ms) <= 200ULL) {
        std::lock_guard<std::mutex> lk(s_itembar_mtx);
        int32_t next = s_itembar_pending + steps;
        s_itembar_pending = std::max(-4, std::min(4, next));
    }
}

// Decompiled from libmain.so @ 0x4946fc..0x494b40 (hle/weapon.c)
static bool check_hunter_vtable(uint32_t h) {
    if (!g_guest_base || !is_valid_guest_ptr(h)) return false;
    uint32_t vtbl = *(uint32_t*)(g_guest_base + h);
    if ((vtbl & 3U) != 0 || vtbl < 0x00200000U || vtbl >= 0x02347000U) return false;
    uint32_t sig = *(uint32_t*)(g_guest_base + vtbl + 0x178U);
    return (sig == 0x004a2444U);
}

extern "C" uint32_t weapon_hunter(void) {
    if (!g_guest_base) return 0;
    uint32_t p = *(uint32_t*)(g_guest_base + 0x01a8ca48U);
    if (!is_valid_guest_ptr(p)) return 0;

    uint32_t p2 = *(uint32_t*)(g_guest_base + 0x01a85b58U);
    if (p2 >= 0x08000000U && p2 < 0x70000000U && (p2 & 3U) == 0) {
        uint32_t idx = *(uint32_t*)(g_guest_base + p + 0x30U);
        if (idx <= 3U) {
            uint32_t h = *(uint32_t*)(g_guest_base + p2 + idx * 4U + 0x1cU);
            if (check_hunter_vtable(h)) return h;
        }
    }
    uint32_t h1 = *(uint32_t*)(g_guest_base + p + 0x15b0U);
    if (check_hunter_vtable(h1)) return h1;
    uint32_t h2 = *(uint32_t*)(g_guest_base + p + 0x3010U);
    if (check_hunter_vtable(h2)) return h2;
    return 0;
}

extern "C" int weapon_drawn(void) {
    uint32_t h = weapon_hunter();
    if (!h || !g_guest_base) return -1;
    return (int)((*(uint8_t*)(g_guest_base + h + 0x2749U)) & 1U);
}

extern "C" int weapon_ranged(uint32_t h) {
    if (!h || !g_guest_base) return 0;
    uint32_t vtbl = *(uint32_t*)(g_guest_base + h);
    if (vtbl == 0x0194bdc4U || vtbl == 0x0194e9e0U) return 1; // LBG / HBG
    if (vtbl == 0x0194c694U) return 2;                         // Bow
    return 0;                                                  // Melee
}

extern "C" int weapon_aiming(uint32_t h) {
    if (!h || !g_guest_base) return 0;
    if (weapon_ranged(h) == 0) return 0;
    uint16_t s1 = *(uint16_t*)(g_guest_base + h + 0x2506U);
    uint16_t s2 = *(uint16_t*)(g_guest_base + h + 0x250aU);
    if (s1 == 1U && s2 >= 0x2dU && s2 < 0x31U) return 1;
    if (s1 == 2U && s2 == 0x20U) return 1;
    return 0;
}

extern "C" int weapon_moving(uint32_t h) {
    if (!h || !g_guest_base) return 0;
    uint16_t s1 = *(uint16_t*)(g_guest_base + h + 0x2506U);
    return ((s1 & 0xFFU) == 0x10U) ? 1 : 0;
}

// ============================================================================
// 2. Exact 38-Control Table Extracted from libmain.so @ 0x00a67e60
// ============================================================================
static const MhguTouchControlDef kTouchDefs[MHGU_TOUCH_CONTROL_COUNT] = {
    // Common & Melee Core (0..13)
    { "stick",     "",     "左摇杆(移动)",     0,              -1, 0.25f, 0.67f, 0.145f, 0,  0, false },
    { "attack",    "X/A",  "近战胶囊攻击(X/A)", MHGU_BTN_X,     1, 0.28f, 0.64f, 0.140f, 0,  1, false },
    { "dodge",     "B",    "翻滚回避(B)",      MHGU_BTN_B,      1, 0.25f, 0.87f, 0.080f, 1,  0, false },
    { "sheathe",   "Y",    "收刀/使用道具(Y)", MHGU_BTN_Y,      1, 0.45f, 0.72f, 0.075f, 9,  0, false },
    { "guard",     "R",    "防御/气刃/冲刺(R)",MHGU_BTN_R,      1, 0.11f, 0.43f, 0.080f, 2,  1, false },
    { "run",       "RUN",  "持续奔跑锁定",     MHGU_BTN_R,     -1, 0.44f, 0.47f, 0.068f, 10, 0, false },
    { "HunterArt", "ZR",   "狩技释放(ZR)",     MHGU_BTN_ZR,     1, 0.27f, 0.43f, 0.072f, 3,  0, false },
    { "target",    "ZL",   "怪物目标锁定(ZL)", MHGU_BTN_ZL,    -1, 0.11f, 0.37f, 0.068f, 4,  0, false },
    { "camera",    "L",    "视角回正/道具(L)", MHGU_BTN_L,     -1, 0.25f, 0.37f, 0.068f, 5,  0, false },
    { "dpad",      "DPAD", "十字方向键",       0,              -1, 0.49f, 0.78f, 0.105f, 0,  0, false },
    { "menu",      "+",    "开始菜单(+)",      MHGU_BTN_PLUS,   1, 0.08f, 0.09f, 0.050f, 6,  0, false },
    { "minus",     "-",    "选择/踢脚(-)",     MHGU_BTN_MINUS,  1, 0.20f, 0.09f, 0.050f, 14, 0, false },
    { "map",       "L3",   "地图缩放(L3)",     MHGU_BTN_LSTICK,-1, 0.20f, 0.09f, 0.050f, 7,  0, false },
    { "settings",  "SET",  "液态玻璃设置浮层", 0,              -1, 0.08f, 0.09f, 0.050f, 8,  0, false },

    // Custom Combos 1..6 (14..19)
    { "combo1",    "C1",   "组合键 1",         0,               1, 0.44f, 0.52f, 0.064f, 15, 4, false },
    { "combo2",    "C2",   "组合键 2",         0,               1, 0.44f, 0.36f, 0.064f, 15, 4, false },
    { "combo3",    "C3",   "组合键 3",         0,               1, 0.58f, 0.52f, 0.064f, 15, 4, true  },
    { "combo4",    "C4",   "组合键 4",         0,               1, 0.58f, 0.36f, 0.064f, 15, 4, true  },
    { "combo5",    "C5",   "组合键 5",         0,              -1, 0.39f, 0.32f, 0.064f, 15, 4, true  },
    { "combo6",    "C6",   "组合键 6",         0,              -1, 0.53f, 0.32f, 0.064f, 15, 4, true  },

    // Alternative Melee Styles (20..22): Separate X/A & Corner Arc
    { "atk_x",     "X",    "独立轻攻击(X)",    MHGU_BTN_X,      1, 0.32f, 0.56f, 0.082f, 15, 1, false },
    { "atk_a",     "A",    "独立重攻击(A)",    MHGU_BTN_A,      1, 0.16f, 0.68f, 0.082f, 22, 1, false },
    { "corner",    "ARC",  "角落弧形攻击带",   0,               1, 0.24f, 0.68f, 0.165f, 0,  1, false },

    // Ranged Weapon Controls (23..28): Auto-swapped when LBG/HBG/Bow equipped
    { "fire",      "FIRE", "远程射击/蓄力",    MHGU_BTN_A,      1, 0.26f, 0.64f, 0.105f, 16, 2, false },
    { "second",    "REL",  "装填/曲射刚射(X)", MHGU_BTN_X,      1, 0.43f, 0.56f, 0.076f, 18, 2, false },
    { "aim",       "AIM",  "瞄准镜/准星(R)",   MHGU_BTN_R,      1, 0.11f, 0.43f, 0.080f, 19, 2, false },
    { "rspecial",  "SPC",  "蹲射/装瓶(X+A)",   MHGU_BTN_X | MHGU_BTN_A, 1, 0.43f, 0.39f, 0.070f, 20, 2, false },
    { "ammo_up",   "AM+",  "上一弹种/瓶",      MHGU_BTN_X,      1, 0.58f, 0.46f, 0.058f, 24, 2, false },
    { "ammo_down", "AM-",  "下一弹种/瓶",      MHGU_BTN_B,      1, 0.58f, 0.62f, 0.058f, 25, 2, false },

    // Menu Controls (29..33): Compact Menu Pad & Shoulder Rectangles
    { "menupad",   "A/B",  "菜单确认/返回胶囊",MHGU_BTN_A,      1, 0.25f, 0.70f, 0.125f, 0,  3, false },
    { "ml",        "L",    "菜单左翻页(L)",    MHGU_BTN_L,     -1, 0.14f, 0.22f, 0.062f, 0,  3, false },
    { "mr",        "R",    "菜单右翻页(R)",    MHGU_BTN_R,      1, 0.14f, 0.22f, 0.062f, 0,  3, false },
    { "mzl",       "ZL",   "菜单左副键(ZL)",   MHGU_BTN_ZL,    -1, 0.30f, 0.22f, 0.062f, 0,  3, false },
    { "mzr",       "ZR",   "菜单右副键(ZR)",   MHGU_BTN_ZR,     1, 0.30f, 0.22f, 0.062f, 0,  3, false },

    // Extra Utility Controls (34..37)
    { "rstick",    "RS",   "虚拟右摇杆(视角)", 0,               1, 0.62f, 0.78f, 0.110f, 0,  0, true  },
    { "r3",        "R3",   "右摇杆按下(R3)",   MHGU_BTN_RSTICK, 1, 0.32f, 0.09f, 0.050f, 4,  0, true  },
    { "art1",      "A1",   "狩技 1 (R+A+B)",   MHGU_BTN_R | MHGU_BTN_A | MHGU_BTN_B, 1, 0.58f, 0.24f, 0.060f, 3, 0, true },
    { "art2",      "A2",   "狩技 2 (ZL)",      MHGU_BTN_ZL,     1, 0.70f, 0.24f, 0.060f, 3,  0, true  }
};

static MhguTouchControlState s_states[MHGU_TOUCH_CONTROL_COUNT];
static MhguTouchRuntimeState s_rt;
static std::string s_layout_path;

// Active multi-touch finger tracker
struct ActiveFinger {
    bool      active;
    intptr_t  id;
    float     start_x;
    float     start_y;
    float     cur_x;
    float     cur_y;
    int       control_idx;     // -1 = camera/itembar gesture, >=0 = bound control
    bool      is_itembar;
    float     itembar_accum_x;
    bool      itembar_moved;
    uint64_t  down_ms;
};

static ActiveFinger s_fingers[10];
static uint64_t s_last_cam_tap_ms = 0;
static float    s_last_cam_tap_x = 0.0f;
static float    s_last_cam_tap_y = 0.0f;
static uint64_t s_pulse_l_until_ms = 0;
static uint64_t s_pulse_zl_until_ms = 0;
static uint64_t s_pulse_y_until_ms = 0;
static float    s_edit_pinch_dist0 = 0.0f;
static float    s_edit_pinch_r0 = 0.0f;

// ============================================================================
// Combo Action Table (Matches APK g_combo_actions)
// ============================================================================
static const uint64_t kComboMasks[8] = {
    MHGU_BTN_X | MHGU_BTN_A,                   // 0: X+A (突进斩/大地一击/盾突)
    MHGU_BTN_R | MHGU_BTN_X | MHGU_BTN_A,      // 1: R+X+A (拔刀防御/特殊拔刀)
    MHGU_BTN_Y | MHGU_BTN_B,                   // 2: Y+B (绝对回避/狩技快捷)
    MHGU_BTN_ZL,                               // 3: ZL (狩技 2 / 锁定切换)
    MHGU_BTN_R | MHGU_BTN_X,                   // 4: R+X (剑形态变形/虫召唤)
    MHGU_BTN_R | MHGU_BTN_A,                   // 5: R+A (装瓶/虫召回/防反)
    MHGU_BTN_PLUS,                             // 6: + (踢脚/特殊动作)
    MHGU_BTN_MINUS                             // 7: - (选择/信号)
};

static const char* kComboLabels[8] = {
    "X+A", "R+X+A", "Y+B", "ZL", "R+X", "R+A", "+", "-"
};

extern "C" uint64_t touch_ios_get_combo_mask(int combo_slot) {
    if (combo_slot < 0 || combo_slot >= 6) return MHGU_BTN_X | MHGU_BTN_A;
    int act = g_port_config.touch_combo[combo_slot];
    if (act < 0 || act >= 8) act = 0;
    return kComboMasks[act];
}

extern "C" const char* touch_ios_get_combo_label(int action_idx) {
    if (action_idx < 0 || action_idx >= 8) return "X+A";
    return kComboLabels[action_idx];
}

extern "C" const MhguTouchControlDef* touch_ios_get_defs(int* out_count) {
    if (out_count) *out_count = MHGU_TOUCH_CONTROL_COUNT;
    return kTouchDefs;
}

extern "C" MhguTouchControlState* touch_ios_get_states(int* out_count) {
    if (out_count) *out_count = MHGU_TOUCH_CONTROL_COUNT;
    return s_states;
}

extern "C" MhguTouchRuntimeState* touch_ios_get_runtime(void) {
    return &s_rt;
}

extern "C" void touch_ios_reset_layout(void) {
    for (int i = 0; i < MHGU_TOUCH_CONTROL_COUNT; ++i) {
        s_states[i].x = kTouchDefs[i].def_x;
        s_states[i].y = kTouchDefs[i].def_y;
        s_states[i].r = kTouchDefs[i].def_r;
        s_states[i].hidden = kTouchDefs[i].default_hidden;
        s_states[i].pressed = false;
        s_states[i].active_sub = 0;
    }
}

extern "C" bool touch_ios_load_layout(const char* path) {
    touch_ios_reset_layout();
    const char* target = (path && path[0]) ? path : s_layout_path.c_str();
    if (!target || !target[0]) return false;
    FILE* fp = std::fopen(target, "r");
    if (!fp) return false;

    char line[256];
    while (std::fgets(line, sizeof(line), fp)) {
        if (line[0] == '#' || line[0] == '\n' || line[0] == '\r') continue;
        char id[64] = {0};
        float x = 0.0f, y = 0.0f, r = 0.0f;
        int hidden = 0;
        if (std::sscanf(line, "%63s %f %f %f %d", id, &x, &y, &r, &hidden) >= 4) {
            for (int i = 0; i < MHGU_TOUCH_CONTROL_COUNT; ++i) {
                if (std::strcmp(kTouchDefs[i].id, id) == 0) {
                    s_states[i].x = x;
                    s_states[i].y = y;
                    s_states[i].r = std::max(0.03f, std::min(0.30f, r));
                    s_states[i].hidden = (hidden != 0);
                    break;
                }
            }
        }
    }
    std::fclose(fp);
    return true;
}

extern "C" bool touch_ios_save_layout(const char* path) {
    const char* target = (path && path[0]) ? path : s_layout_path.c_str();
    if (!target || !target[0]) return false;
    FILE* fp = std::fopen(target, "w");
    if (!fp) return false;
    std::fprintf(fp, "# MHGURecomp-iOS Touch Layout (100%% compatible with gu-native APK touch_layout.txt)\n");
    for (int i = 0; i < MHGU_TOUCH_CONTROL_COUNT; ++i) {
        std::fprintf(fp, "%s %.4f %.4f %.4f %d\n",
                     kTouchDefs[i].id,
                     s_states[i].x,
                     s_states[i].y,
                     s_states[i].r,
                     s_states[i].hidden ? 1 : 0);
    }
    std::fclose(fp);
    return true;
}

extern "C" void touch_ios_init(const char* docs_dir) {
    if (docs_dir && docs_dir[0]) {
        s_layout_path = std::string(docs_dir) + "/touch_layout.txt";
    } else {
        const char* home = std::getenv("HOME");
        s_layout_path = (home ? (std::string(home) + "/Documents") : ".") + "/touch_layout.txt";
    }
    std::memset(&s_rt, 0, sizeof(s_rt));
    s_rt.selected_idx = -1;
    std::memset(s_fingers, 0, sizeof(s_fingers));
    touch_ios_load_layout(s_layout_path.c_str());

    // Install native HLE hooks for camera drag & itembar swipe
    mousecam_init();
    itembar_init();
    s_rt.initialized = true;
}

extern "C" void touch_ios_get_control_screen_pos(int idx, float screen_w, float screen_h, float* out_cx, float* out_cy, float* out_rad) {
    if (idx < 0 || idx >= MHGU_TOUCH_CONTROL_COUNT) return;
    const MhguTouchControlDef& d = kTouchDefs[idx];
    const MhguTouchControlState& st = s_states[idx];
    float scale = std::max(0.5f, std::min(2.0f, g_port_config.touch_scale));
    float cx = 0.0f;
    if (d.side < 0) {
        cx = st.x * screen_h;
    } else if (d.side > 0) {
        cx = screen_w - st.x * screen_h;
    } else {
        cx = screen_w * 0.5f + st.x * screen_h;
    }
    float cy = st.y * screen_h;
    float rad = st.r * screen_h * scale;
    if (out_cx) *out_cx = cx;
    if (out_cy) *out_cy = cy;
    if (out_rad) *out_rad = rad;
}

extern "C" bool touch_ios_is_control_visible(int idx) {
    if (idx < 0 || idx >= MHGU_TOUCH_CONTROL_COUNT) return false;
    if (!g_port_config.touch_controls || g_port_config.touch_mode == 2) return false;
    if (s_states[idx].hidden) return false;
    if (s_rt.edit_mode) {
        // In edit mode, show current attack style and current weapon group
        const char* id = kTouchDefs[idx].id;
        int style = g_port_config.touch_attack_style;
        if (std::strcmp(id, "attack") == 0 && style != 0) return false;
        if ((std::strcmp(id, "atk_x") == 0 || std::strcmp(id, "atk_a") == 0) && style != 1) return false;
        if (std::strcmp(id, "corner") == 0 && style != 2) return false;
        if (kTouchDefs[idx].group == 2 && s_rt.weapon_mode == 0) return false;
        if (kTouchDefs[idx].group == 3) return false;
        return true;
    }

    int grp = kTouchDefs[idx].group;
    const char* id = kTouchDefs[idx].id;
    if (s_rt.in_menu_mode && g_port_config.touch_dpad_menu) {
        if (grp == 3) return true;
        if (std::strcmp(id, "stick") == 0 || std::strcmp(id, "dpad") == 0 ||
            std::strcmp(id, "menu") == 0 || std::strcmp(id, "minus") == 0 ||
            std::strcmp(id, "settings") == 0) {
            return true;
        }
        return false;
    }
    if (grp == 3) return false;

    bool is_ranged = (g_port_config.touch_ranged_swap && s_rt.weapon_mode > 0);
    if (is_ranged) {
        if (grp == 1) return false;
        if (grp == 2) {
            // Bow (weapon_mode == 2) hides ammo_up/ammo_down if not needed, shows fire/second/aim/rspecial
            return true;
        }
    } else {
        if (grp == 2) return false;
        if (grp == 1) {
            int style = g_port_config.touch_attack_style;
            if (std::strcmp(id, "attack") == 0) return (style == 0);
            if (std::strcmp(id, "atk_x") == 0 || std::strcmp(id, "atk_a") == 0) return (style == 1);
            if (std::strcmp(id, "corner") == 0) return (style == 2);
            return true;
        }
    }
    return true;
}

// ============================================================================
// 3. Exact APK Hit-Testing (Oblique Pill, Corner Arc, Rectangular Shoulder)
//    Decompiled from libmain.so @ 0x57a9dc..0x57d984
// ============================================================================
static int hit_test_control(float x_pt, float y_pt, float screen_w, float screen_h, int* out_sub) {
    if (out_sub) *out_sub = 0;
    for (int i = MHGU_TOUCH_CONTROL_COUNT - 1; i >= 0; --i) {
        if (!touch_ios_is_control_visible(i)) continue;
        float cx = 0.0f, cy = 0.0f, rad = 0.0f;
        touch_ios_get_control_screen_pos(i, screen_w, screen_h, &cx, &cy, &rad);
        const char* id = kTouchDefs[i].id;

        if (!s_rt.edit_mode && (std::strcmp(id, "attack") == 0 || std::strcmp(id, "menupad") == 0)) {
            // Oblique pill oriented along (-0.65, -0.76) .. (+0.65, +0.76)
            float ux = 0.650f, uy = 0.760f;
            float half_len = rad * 0.62f;
            float cap_r = rad * 0.56f;
            float rx = x_pt - cx;
            float ry = y_pt - cy;
            float proj = rx * ux + ry * uy;
            float clamped = std::max(-half_len, std::min(half_len, proj));
            float px = cx + clamped * ux;
            float py = cy + clamped * uy;
            float dist2 = (x_pt - px) * (x_pt - px) + (y_pt - py) * (y_pt - py);
            if (dist2 <= cap_r * cap_r * 1.15f) {
                if (out_sub) {
                    if (std::strcmp(id, "attack") == 0) {
                        if (std::fabs(proj) <= half_len * 0.28f) *out_sub = 3; // Center X+A band
                        else if (proj < 0.0f) *out_sub = 1;                    // Upper-left X
                        else *out_sub = 2;                                     // Lower-right A
                    } else {
                        *out_sub = (proj < 0.0f) ? 1 : 2;                      // menupad: 1=A, 2=B
                    }
                }
                return i;
            }
            continue;
        }

        if (!s_rt.edit_mode && std::strcmp(id, "corner") == 0) {
            float dx = x_pt - cx;
            float dy = y_pt - cy;
            float d = std::sqrt(dx * dx + dy * dy);
            float r_in = rad * 0.52f;
            float r_out = rad * 1.15f;
            if (d >= r_in && d <= r_out) {
                float ang = std::atan2(dy, dx); // radians
                // APK corner arc spans 195 deg .. 345 deg (-2.88 .. -0.26 rad)
                if (ang >= -2.95f && ang <= -0.20f) {
                    float t = (ang - (-2.95f)) / (2.75f);
                    if (out_sub) {
                        if (t < 0.36f) *out_sub = 1;      // X
                        else if (t > 0.64f) *out_sub = 2; // A
                        else *out_sub = 3;                // X+A
                    }
                    return i;
                }
            }
            continue;
        }

        float dx = x_pt - cx;
        float dy = y_pt - cy;
        if (dx * dx + dy * dy <= rad * rad * 1.15f) {
            if (out_sub && std::strcmp(id, "dpad") == 0) {
                if (std::fabs(dx) > std::fabs(dy)) *out_sub = (dx < 0.0f) ? 1 : 2; // 1=Left, 2=Right
                else *out_sub = (dy < 0.0f) ? 3 : 4;                               // 3=Up, 4=Down
            }
            return i;
        }
    }
    return -1;
}

extern "C" void touch_ios_finger_down(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h) {
    if (!s_rt.initialized) touch_ios_init(nullptr);

    int slot = -1;
    for (int i = 0; i < 10; ++i) {
        if (!s_fingers[i].active) { slot = i; break; }
    }
    if (slot < 0) return;

    int sub = 0;
    int hit = hit_test_control(x_pt, y_pt, screen_w, screen_h, &sub);

    s_fingers[slot].active = true;
    s_fingers[slot].id = finger_id;
    s_fingers[slot].start_x = x_pt;
    s_fingers[slot].start_y = y_pt;
    s_fingers[slot].cur_x = x_pt;
    s_fingers[slot].cur_y = y_pt;
    s_fingers[slot].control_idx = hit;
    s_fingers[slot].is_itembar = false;
    s_fingers[slot].itembar_accum_x = 0.0f;
    s_fingers[slot].itembar_moved = false;
    s_fingers[slot].down_ms = monotonic_ms();

    // Edit Mode: 1-finger select/drag, 2-finger pinch-to-scale
    if (s_rt.edit_mode) {
        int active_cnt = 0;
        int f0 = -1, f1 = -1;
        for (int i = 0; i < 10; ++i) {
            if (s_fingers[i].active) {
                if (f0 < 0) f0 = i;
                else if (f1 < 0) f1 = i;
                active_cnt++;
            }
        }
        if (active_cnt == 1 && hit >= 0) {
            s_rt.selected_idx = hit;
        } else if (active_cnt == 2 && s_rt.selected_idx >= 0 && f0 >= 0 && f1 >= 0) {
            float dx = s_fingers[f0].cur_x - s_fingers[f1].cur_x;
            float dy = s_fingers[f0].cur_y - s_fingers[f1].cur_y;
            s_edit_pinch_dist0 = std::max(10.0f, std::sqrt(dx * dx + dy * dy));
            s_edit_pinch_r0 = s_states[s_rt.selected_idx].r;
        }
        return;
    }

    if (hit >= 0) {
        s_states[hit].pressed = true;
        s_states[hit].active_sub = sub;
        const char* id = kTouchDefs[hit].id;

        if (g_port_config.touch_haptics) {
            mhgu_ios_trigger_haptic(0.55f);
        }

        if (std::strcmp(id, "stick") == 0) {
            float cx = 0.0f, cy = 0.0f, rad = 0.0f;
            touch_ios_get_control_screen_pos(hit, screen_w, screen_h, &cx, &cy, &rad);
            s_rt.stick_active = true;
            if (g_port_config.touch_fixed_stick) {
                s_rt.stick_origin_x = cx;
                s_rt.stick_origin_y = cy;
                float dx = (x_pt - cx) / std::max(1.0f, rad);
                float dy = (y_pt - cy) / std::max(1.0f, rad);
                float len = std::sqrt(dx * dx + dy * dy);
                if (len > 1.0f) { dx /= len; dy /= len; }
                s_rt.stick_dx = dx;
                s_rt.stick_dy = dy;
            } else {
                s_rt.stick_origin_x = x_pt;
                s_rt.stick_origin_y = y_pt;
                s_rt.stick_dx = 0.0f;
                s_rt.stick_dy = 0.0f;
            }
        } else if (std::strcmp(id, "run") == 0) {
            s_rt.run_latched = !s_rt.run_latched;
        } else if (std::strcmp(id, "target") == 0) {
            if (g_port_config.touch_lock_on) {
                s_rt.lock_on_latched = !s_rt.lock_on_latched;
                s_pulse_zl_until_ms = monotonic_ms() + 90ULL;
            }
        }
        return;
    }

    // Check if touch landed in APK Item Bar zone (bottom-right HUD item carousel)
    if (g_port_config.touch_itembar_swipe &&
        x_pt >= screen_w * 0.68f && x_pt <= screen_w * 0.96f &&
        y_pt >= screen_h * 0.76f && y_pt <= screen_h * 0.96f) {
        s_fingers[slot].is_itembar = true;
        return;
    }

    // Free-space camera drag: check for double-tap camera reset (L)
    uint64_t now = monotonic_ms();
    float dtap_dx = x_pt - s_last_cam_tap_x;
    float dtap_dy = y_pt - s_last_cam_tap_y;
    if ((now - s_last_cam_tap_ms) <= 260ULL && (dtap_dx * dtap_dx + dtap_dy * dtap_dy) <= (42.0f * 42.0f)) {
        s_pulse_l_until_ms = now + 90ULL;
        s_last_cam_tap_ms = 0;
        if (g_port_config.touch_haptics) mhgu_ios_trigger_haptic(0.45f);
    } else {
        s_last_cam_tap_ms = now;
        s_last_cam_tap_x = x_pt;
        s_last_cam_tap_y = y_pt;
    }
}

extern "C" void touch_ios_finger_move(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h) {
    int slot = -1;
    for (int i = 0; i < 10; ++i) {
        if (s_fingers[i].active && s_fingers[i].id == finger_id) { slot = i; break; }
    }
    if (slot < 0) return;

    float prev_x = s_fingers[slot].cur_x;
    float prev_y = s_fingers[slot].cur_y;
    s_fingers[slot].cur_x = x_pt;
    s_fingers[slot].cur_y = y_pt;

    if (s_rt.edit_mode) {
        int active_cnt = 0;
        int f0 = -1, f1 = -1;
        for (int i = 0; i < 10; ++i) {
            if (s_fingers[i].active) {
                if (f0 < 0) f0 = i;
                else if (f1 < 0) f1 = i;
                active_cnt++;
            }
        }
        if (active_cnt >= 2 && s_rt.selected_idx >= 0 && f0 >= 0 && f1 >= 0 && s_edit_pinch_dist0 > 1.0f) {
            float dx = s_fingers[f0].cur_x - s_fingers[f1].cur_x;
            float dy = s_fingers[f0].cur_y - s_fingers[f1].cur_y;
            float dist = std::sqrt(dx * dx + dy * dy);
            float ratio = dist / s_edit_pinch_dist0;
            s_states[s_rt.selected_idx].r = std::max(0.035f, std::min(0.26f, s_edit_pinch_r0 * ratio));
        } else if (active_cnt == 1 && s_fingers[slot].control_idx >= 0 && screen_h > 1.0f) {
            int idx = s_fingers[slot].control_idx;
            const MhguTouchControlDef& d = kTouchDefs[idx];
            float dx_norm = (x_pt - prev_x) / screen_h;
            float dy_norm = (y_pt - prev_y) / screen_h;
            if (d.side > 0) s_states[idx].x -= dx_norm;
            else s_states[idx].x += dx_norm;
            s_states[idx].y += dy_norm;
            s_states[idx].x = std::max(0.04f, std::min(1.60f, s_states[idx].x));
            s_states[idx].y = std::max(0.04f, std::min(0.96f, s_states[idx].y));
        }
        return;
    }

    int hit = s_fingers[slot].control_idx;
    if (hit >= 0) {
        const char* id = kTouchDefs[hit].id;
        float cx = 0.0f, cy = 0.0f, rad = 0.0f;
        touch_ios_get_control_screen_pos(hit, screen_w, screen_h, &cx, &cy, &rad);

        if (std::strcmp(id, "stick") == 0) {
            float ox = g_port_config.touch_fixed_stick ? cx : s_rt.stick_origin_x;
            float oy = g_port_config.touch_fixed_stick ? cy : s_rt.stick_origin_y;
            float dx = (x_pt - ox) / std::max(1.0f, rad);
            float dy = (y_pt - oy) / std::max(1.0f, rad);
            float len = std::sqrt(dx * dx + dy * dy);
            if (len > 1.0f) { dx /= len; dy /= len; }
            s_rt.stick_dx = dx;
            s_rt.stick_dy = dy;
        } else if (std::strcmp(id, "rstick") == 0) {
            float dx = (x_pt - cx) / std::max(1.0f, rad);
            float dy = (y_pt - cy) / std::max(1.0f, rad);
            float len = std::sqrt(dx * dx + dy * dy);
            if (len > 1.0f) { dx /= len; dy /= len; }
            s_rt.rstick_dx = dx;
            s_rt.rstick_dy = dy;
        } else if (std::strcmp(id, "dpad") == 0) {
            float dx = x_pt - cx;
            float dy = y_pt - cy;
            if (std::fabs(dx) > std::fabs(dy)) s_states[hit].active_sub = (dx < 0.0f) ? 1 : 2;
            else s_states[hit].active_sub = (dy < 0.0f) ? 3 : 4;
        }
        return;
    }

    if (s_fingers[slot].is_itembar) {
        s_fingers[slot].itembar_accum_x += (x_pt - prev_x);
        float step_px = std::max(24.0f, screen_h * 0.055f);
        while (s_fingers[slot].itembar_accum_x >= step_px) {
            s_fingers[slot].itembar_accum_x -= step_px;
            s_fingers[slot].itembar_moved = true;
            itembar_scroll(+1);
            if (g_port_config.touch_haptics) mhgu_ios_trigger_haptic(0.35f);
        }
        while (s_fingers[slot].itembar_accum_x <= -step_px) {
            s_fingers[slot].itembar_accum_x += step_px;
            s_fingers[slot].itembar_moved = true;
            itembar_scroll(-1);
            if (g_port_config.touch_haptics) mhgu_ios_trigger_haptic(0.35f);
        }
        return;
    }

    // Free-space drag -> Native APK mousecam_add + right-stick fallback when camera hook is inactive
    float dx_pt = x_pt - prev_x;
    float dy_pt = y_pt - prev_y;
    mousecam_add(dx_pt, dy_pt);

    uint64_t now = monotonic_ms();
    if (s_mousecam_last_hook_ms == 0 || (now - s_mousecam_last_hook_ms) > 250ULL) {
        float sens = g_port_config.touch_cam_sens * 0.035f;
        s_rt.rstick_dx = std::max(-1.0f, std::min(1.0f, dx_pt * sens));
        s_rt.rstick_dy = std::max(-1.0f, std::min(1.0f, dy_pt * sens));
    }
}

extern "C" void touch_ios_finger_up(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h) {
    (void)x_pt; (void)y_pt; (void)screen_w; (void)screen_h;
    int slot = -1;
    for (int i = 0; i < 10; ++i) {
        if (s_fingers[i].active && s_fingers[i].id == finger_id) { slot = i; break; }
    }
    if (slot < 0) return;

    int hit = s_fingers[slot].control_idx;
    if (hit >= 0 && hit < MHGU_TOUCH_CONTROL_COUNT) {
        s_states[hit].pressed = false;
        s_states[hit].active_sub = 0;
        const char* id = kTouchDefs[hit].id;
        if (std::strcmp(id, "stick") == 0) {
            s_rt.stick_active = false;
            s_rt.stick_dx = 0.0f;
            s_rt.stick_dy = 0.0f;
        } else if (std::strcmp(id, "rstick") == 0) {
            s_rt.rstick_dx = 0.0f;
            s_rt.rstick_dy = 0.0f;
        }
    } else if (s_fingers[slot].is_itembar) {
        // Short tap without horizontal scroll -> pulse Y to use selected item
        uint64_t dur = monotonic_ms() - s_fingers[slot].down_ms;
        if (!s_fingers[slot].itembar_moved && dur < 240ULL) {
            s_pulse_y_until_ms = monotonic_ms() + 90ULL;
        }
    } else {
        s_rt.rstick_dx = 0.0f;
        s_rt.rstick_dy = 0.0f;
    }

    s_fingers[slot].active = false;
    if (s_rt.edit_mode) {
        touch_ios_save_layout(nullptr);
    }
}

extern "C" void touch_ios_reset_fingers(void) {
    std::memset(s_fingers, 0, sizeof(s_fingers));
    for (int i = 0; i < MHGU_TOUCH_CONTROL_COUNT; ++i) {
        s_states[i].pressed = false;
        s_states[i].active_sub = 0;
    }
    s_rt.stick_active = false;
    s_rt.stick_dx = 0.0f;
    s_rt.stick_dy = 0.0f;
    s_rt.rstick_dx = 0.0f;
    s_rt.rstick_dy = 0.0f;
}

// ============================================================================
// 4. Per-Frame Input Synthesis & Forwarding to Host `input_set`
// ============================================================================
extern "C" void touch_ios_update_frame(float screen_w, float screen_h, float dt) {
    (void)screen_w; (void)screen_h; (void)dt;
    if (!s_rt.initialized) touch_ios_init(nullptr);

    // Poll guest hunter weapon state via decompiled weapon_* HLE reader
    uint32_t h = weapon_hunter();
    if (h != 0) {
        s_rt.weapon_mode = weapon_ranged(h);
        int dr = weapon_drawn();
        s_rt.weapon_is_drawn = (dr == 1);
    }

    if (s_rt.edit_mode || !g_port_config.touch_controls) {
        s_rt.current_buttons = 0;
        return;
    }

    uint64_t btns = 0;
    uint64_t now = monotonic_ms();

    for (int i = 0; i < MHGU_TOUCH_CONTROL_COUNT; ++i) {
        if (!s_states[i].pressed) continue;
        const char* id = kTouchDefs[i].id;
        int sub = s_states[i].active_sub;

        if (std::strcmp(id, "attack") == 0 || std::strcmp(id, "corner") == 0) {
            if (sub == 1) btns |= MHGU_BTN_X;
            else if (sub == 2) btns |= MHGU_BTN_A;
            else if (sub == 3) btns |= (MHGU_BTN_X | MHGU_BTN_A);
            else btns |= MHGU_BTN_X;
        } else if (std::strcmp(id, "menupad") == 0) {
            if (sub == 2) btns |= MHGU_BTN_B;
            else btns |= MHGU_BTN_A;
        } else if (std::strcmp(id, "dpad") == 0) {
            if (sub == 1) btns |= MHGU_BTN_LEFT;
            else if (sub == 2) btns |= MHGU_BTN_RIGHT;
            else if (sub == 3) btns |= MHGU_BTN_UP;
            else if (sub == 4) btns |= MHGU_BTN_DOWN;
        } else if (std::strncmp(id, "combo", 5) == 0) {
            int slot = id[5] - '1';
            btns |= touch_ios_get_combo_mask(slot);
        } else if (std::strcmp(id, "run") == 0 || std::strcmp(id, "settings") == 0) {
            // Handled via latch / UI callback
        } else {
            btns |= kTouchDefs[i].btn_mask;
        }
    }

    // Continuous sprint latch or APK sheathed outer-ring auto-sprint (mag > 0.85f)
    float stick_mag = std::sqrt(s_rt.stick_dx * s_rt.stick_dx + s_rt.stick_dy * s_rt.stick_dy);
    if (s_rt.run_latched) {
        btns |= MHGU_BTN_R;
    } else if (g_port_config.touch_sheathe_run && !s_rt.weapon_is_drawn && stick_mag > 0.85f) {
        btns |= MHGU_BTN_R;
    }

    // Continuous lock-on pulse / double-tap L reset / itembar tap Y
    if (now < s_pulse_l_until_ms)  btns |= MHGU_BTN_L;
    if (now < s_pulse_zl_until_ms) btns |= MHGU_BTN_ZL;
    if (now < s_pulse_y_until_ms)  btns |= MHGU_BTN_Y;

    s_rt.current_buttons = btns;

    int32_t lx = (int32_t)std::max(-32767.0f, std::min(32767.0f, s_rt.stick_dx * 32767.0f));
    int32_t ly = (int32_t)std::max(-32767.0f, std::min(32767.0f, -s_rt.stick_dy * 32767.0f));
    int32_t rx = (int32_t)std::max(-32767.0f, std::min(32767.0f, s_rt.rstick_dx * 32767.0f));
    int32_t ry = (int32_t)std::max(-32767.0f, std::min(32767.0f, -s_rt.rstick_dy * 32767.0f));

    if (btns != 0 || lx != 0 || ly != 0 || rx != 0 || ry != 0) {
        input_set(btns, lx, ly, rx, ry);
    }
}

// ============================================================================
// 5. 100% 1:1 Decompiled APK Vector Renderer (libmain.so @ 0x57a9dc..0x586000)
//    - Draws directly onto Host Dear ImGui Foreground DrawList when available
//    - Uses exact float offsets, PathArcTo angles, and polygon vertices from APK
// ============================================================================
static inline uint32_t im_col32(int r, int g, int b, int a) {
    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));
    a = std::max(0, std::min(255, a));
    return ((uint32_t)a << 24) | ((uint32_t)b << 16) | ((uint32_t)g << 8) | (uint32_t)r;
}

static inline ImVec2_c v2(float x, float y) {
    ImVec2_c p = { x, y };
    return p;
}

// Decompiled from libmain.so @ 0x58272c (draw_sword_icon)
static void apk_draw_sword_icon(ImDrawList_c* dl, float cx, float cy, float s, uint32_t col, bool heavy) {
    float ang = heavy ? -0.55f : -0.785398f;
    float c = std::cos(ang), sn = std::sin(ang);
    auto rot = [&](float lx, float ly) -> ImVec2_c {
        return v2(cx + (lx * c - ly * sn) * s, cy + (lx * sn + ly * c) * s);
    };
    float bw = heavy ? 0.22f : 0.13f;
    ImDrawList_PathLineTo(dl, rot(0.0f, -0.82f));
    ImDrawList_PathLineTo(dl, rot(bw,   -0.48f));
    ImDrawList_PathLineTo(dl, rot(bw,    0.22f));
    ImDrawList_PathLineTo(dl, rot(-bw,   0.22f));
    ImDrawList_PathLineTo(dl, rot(-bw,  -0.48f));
    ImDrawList_PathFillConvex(dl, col);
    // Crossguard & grip
    ImDrawList_AddLine(dl, rot(-0.38f, 0.24f), rot(0.38f, 0.24f), col, std::max(1.5f, 0.14f * s));
    ImDrawList_AddLine(dl, rot(0.0f,   0.24f), rot(0.0f,  0.68f), col, std::max(1.5f, 0.14f * s));
    ImDrawList_AddCircleFilled(dl, rot(0.0f, 0.74f), 0.11f * s, col, 12);
}

// Decompiled from libmain.so @ 0x58327c..0x5856a4 (draw_hunter_icon, 25 cases)
static void apk_draw_hunter_icon(ImDrawList_c* dl, int icon_kind, float cx, float cy, float s, uint32_t col, uint32_t bg_cut) {
    switch (icon_kind) {
        case 1: { // dodge (B) @ 0x5841f8: arc + arrowhead + 2 speed lines
            ImDrawList_PathArcTo(dl, v2(cx, cy + 0.08f * s), 0.50f * s, 2.67035f, 7.38274f, 18);
            ImDrawList_AddPolyline(dl, nullptr, 0, col, 0, 1.0f); // flush path via arc segments
            for (int i = 0; i < 16; ++i) {
                float a0 = 2.67035f + (7.38274f - 2.67035f) * (float)i / 16.0f;
                float a1 = 2.67035f + (7.38274f - 2.67035f) * (float)(i + 1) / 16.0f;
                ImDrawList_AddLine(dl,
                    v2(cx + std::cos(a0) * 0.50f * s, cy + 0.08f * s + std::sin(a0) * 0.50f * s),
                    v2(cx + std::cos(a1) * 0.50f * s, cy + 0.08f * s + std::sin(a1) * 0.50f * s),
                    col, std::max(1.8f, 0.16f * s));
            }
            float ax = cx + std::cos(7.38274f) * 0.50f * s;
            float ay = cy + 0.08f * s + std::sin(7.38274f) * 0.50f * s;
            ImDrawList_AddTriangleFilled(dl,
                v2(ax + 0.24f * s, ay + 0.18f * s),
                v2(ax - 0.22f * s, ay + 0.10f * s),
                v2(ax + 0.08f * s, ay - 0.22f * s), col);
            ImDrawList_AddLine(dl, v2(cx - 0.95f * s, cy - 0.25f * s), v2(cx - 0.62f * s, cy - 0.25f * s), col, std::max(1.5f, 0.11f * s));
            ImDrawList_AddLine(dl, v2(cx - 0.95f * s, cy + 0.25f * s), v2(cx - 0.62f * s, cy + 0.25f * s), col, std::max(1.5f, 0.11f * s));
            break;
        }
        case 2: { // guard (R) @ 0x5843c8: 5-point heater shield + cross
            ImDrawList_PathLineTo(dl, v2(cx - 0.55f * s, cy - 0.62f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.55f * s, cy - 0.62f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.55f * s, cy + 0.05f * s));
            ImDrawList_PathLineTo(dl, v2(cx,             cy + 0.70f * s));
            ImDrawList_PathLineTo(dl, v2(cx - 0.55f * s, cy + 0.05f * s));
            ImDrawList_PathFillConvex(dl, col);
            ImDrawList_AddLine(dl, v2(cx, cy - 0.45f * s), v2(cx, cy + 0.45f * s), bg_cut, std::max(1.5f, 0.10f * s));
            ImDrawList_AddLine(dl, v2(cx - 0.36f * s, cy - 0.12f * s), v2(cx + 0.36f * s, cy - 0.12f * s), bg_cut, std::max(1.5f, 0.10f * s));
            break;
        }
        case 3: { // HunterArt (ZR) @ 0x583b34: 8-ray starburst
            for (int i = 0; i < 8; ++i) {
                float a = (float)i * 0.78539816f;
                float a_l = a - 0.24f, a_r = a + 0.24f;
                ImDrawList_AddTriangleFilled(dl,
                    v2(cx + std::cos(a) * 0.82f * s,   cy + std::sin(a) * 0.82f * s),
                    v2(cx + std::cos(a_l) * 0.34f * s, cy + std::sin(a_l) * 0.34f * s),
                    v2(cx + std::cos(a_r) * 0.34f * s, cy + std::sin(a_r) * 0.34f * s), col);
            }
            ImDrawList_AddCircleFilled(dl, v2(cx, cy), 0.20f * s, bg_cut, 16);
            break;
        }
        case 4: { // target (ZL) @ 0x584a5c: reticle + 4 ticks + 2 side triangles
            ImDrawList_AddCircle(dl, v2(cx, cy), 0.38f * s, col, 20, std::max(1.5f, 0.11f * s));
            ImDrawList_AddCircleFilled(dl, v2(cx, cy), 0.10f * s, col, 12);
            ImDrawList_AddLine(dl, v2(cx - 0.52f * s, cy), v2(cx - 0.26f * s, cy), col, std::max(1.5f, 0.10f * s));
            ImDrawList_AddLine(dl, v2(cx + 0.26f * s, cy), v2(cx + 0.52f * s, cy), col, std::max(1.5f, 0.10f * s));
            ImDrawList_AddLine(dl, v2(cx, cy - 0.52f * s), v2(cx, cy - 0.26f * s), col, std::max(1.5f, 0.10f * s));
            ImDrawList_AddLine(dl, v2(cx, cy + 0.26f * s), v2(cx, cy + 0.52f * s), col, std::max(1.5f, 0.10f * s));
            ImDrawList_AddTriangleFilled(dl, v2(cx - 0.68f * s, cy), v2(cx - 0.95f * s, cy - 0.24f * s), v2(cx - 0.95f * s, cy + 0.24f * s), col);
            ImDrawList_AddTriangleFilled(dl, v2(cx + 0.68f * s, cy), v2(cx + 0.95f * s, cy - 0.24f * s), v2(cx + 0.95f * s, cy + 0.24f * s), col);
            break;
        }
        case 5: { // camera (L) @ 0x584ccc: camera body + top prism + lens cutout
            ImDrawList_AddRectFilled(dl, v2(cx - 0.66f * s, cy - 0.36f * s), v2(cx + 0.66f * s, cy + 0.44f * s), col, 0.12f * s, 0);
            ImDrawList_AddRectFilled(dl, v2(cx - 0.24f * s, cy - 0.54f * s), v2(cx + 0.24f * s, cy - 0.30f * s), col, 0.06f * s, 0);
            ImDrawList_AddCircleFilled(dl, v2(cx, cy + 0.04f * s), 0.27f * s, bg_cut, 20);
            ImDrawList_AddCircleFilled(dl, v2(cx, cy + 0.04f * s), 0.15f * s, col, 16);
            break;
        }
        case 6: { // menu (+) @ 0x583e78: 3 horizontal hamburger bars
            ImDrawList_AddRectFilled(dl, v2(cx - 0.55f * s, cy - 0.46f * s), v2(cx + 0.55f * s, cy - 0.30f * s), col, 0.05f * s, 0);
            ImDrawList_AddRectFilled(dl, v2(cx - 0.55f * s, cy - 0.08f * s), v2(cx + 0.55f * s, cy + 0.08f * s), col, 0.05f * s, 0);
            ImDrawList_AddRectFilled(dl, v2(cx - 0.55f * s, cy + 0.30f * s), v2(cx + 0.55f * s, cy + 0.46f * s), col, 0.05f * s, 0);
            break;
        }
        case 7: { // map (L3) @ 0x584500: tri-fold map polygon + 2 fold lines
            ImDrawList_PathLineTo(dl, v2(cx - 0.70f * s, cy - 0.42f * s));
            ImDrawList_PathLineTo(dl, v2(cx - 0.24f * s, cy - 0.60f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.24f * s, cy - 0.42f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.70f * s, cy - 0.60f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.70f * s, cy + 0.44f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.24f * s, cy + 0.62f * s));
            ImDrawList_PathLineTo(dl, v2(cx - 0.24f * s, cy + 0.44f * s));
            ImDrawList_PathLineTo(dl, v2(cx - 0.70f * s, cy + 0.62f * s));
            ImDrawList_PathFillConvex(dl, col);
            ImDrawList_AddLine(dl, v2(cx - 0.24f * s, cy - 0.60f * s), v2(cx - 0.24f * s, cy + 0.44f * s), bg_cut, std::max(1.5f, 0.08f * s));
            ImDrawList_AddLine(dl, v2(cx + 0.24f * s, cy - 0.42f * s), v2(cx + 0.24f * s, cy + 0.62f * s), bg_cut, std::max(1.5f, 0.08f * s));
            break;
        }
        case 8: { // settings gear @ 0x584670: 8 radial teeth + ring + bore
            ImDrawList_AddCircleFilled(dl, v2(cx, cy), 0.50f * s, col, 20);
            for (int i = 0; i < 8; ++i) {
                float a = (float)i * 0.78539816f;
                ImDrawList_AddLine(dl,
                    v2(cx + std::cos(a) * 0.40f * s, cy + std::sin(a) * 0.40f * s),
                    v2(cx + std::cos(a) * 0.72f * s, cy + std::sin(a) * 0.72f * s),
                    col, std::max(2.0f, 0.24f * s));
            }
            ImDrawList_AddCircleFilled(dl, v2(cx, cy), 0.22f * s, bg_cut, 16);
            break;
        }
        case 9: { // sheathe (Y) @ 0x585044: scabbard + hilt + 2 downward triangles
            ImDrawList_PathLineTo(dl, v2(cx - 0.22f * s, cy - 0.08f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.22f * s, cy - 0.08f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.16f * s, cy + 0.56f * s));
            ImDrawList_PathLineTo(dl, v2(cx,             cy + 0.82f * s));
            ImDrawList_PathLineTo(dl, v2(cx - 0.16f * s, cy + 0.56f * s));
            ImDrawList_PathFillConvex(dl, col);
            ImDrawList_AddRectFilled(dl, v2(cx - 0.42f * s, cy - 0.26f * s), v2(cx + 0.42f * s, cy - 0.14f * s), col, 0.03f * s, 0);
            ImDrawList_AddRectFilled(dl, v2(cx - 0.07f * s, cy - 0.62f * s), v2(cx + 0.07f * s, cy - 0.26f * s), col, 0.0f, 0);
            ImDrawList_AddCircleFilled(dl, v2(cx, cy - 0.62f * s), 0.10f * s, col, 12);
            ImDrawList_AddTriangleFilled(dl, v2(cx - 0.62f * s, cy - 0.44f * s), v2(cx - 0.78f * s, cy - 0.80f * s), v2(cx - 0.46f * s, cy - 0.80f * s), col);
            ImDrawList_AddTriangleFilled(dl, v2(cx + 0.62f * s, cy - 0.44f * s), v2(cx + 0.46f * s, cy - 0.80f * s), v2(cx + 0.78f * s, cy - 0.80f * s), col);
            break;
        }
        case 10: { // run @ 0x584e24: winged boot + 3 speed lines
            ImDrawList_PathLineTo(dl, v2(cx - 0.12f * s, cy - 0.58f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.26f * s, cy - 0.58f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.22f * s, cy + 0.08f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.68f * s, cy + 0.22f * s));
            ImDrawList_PathLineTo(dl, v2(cx + 0.68f * s, cy + 0.44f * s));
            ImDrawList_PathLineTo(dl, v2(cx - 0.22f * s, cy + 0.44f * s));
            ImDrawList_PathFillConvex(dl, col);
            ImDrawList_AddLine(dl, v2(cx - 0.88f * s, cy - 0.34f * s), v2(cx - 0.36f * s, cy - 0.34f * s), col, std::max(1.5f, 0.11f * s));
            ImDrawList_AddLine(dl, v2(cx - 0.96f * s, cy - 0.04f * s), v2(cx - 0.40f * s, cy - 0.04f * s), col, std::max(1.5f, 0.11f * s));
            ImDrawList_AddLine(dl, v2(cx - 0.84f * s, cy + 0.26f * s), v2(cx - 0.38f * s, cy + 0.26f * s), col, std::max(1.5f, 0.11f * s));
            break;
        }
        case 14: { // minus (-) @ 0x583810: horizontal bar
            ImDrawList_AddRectFilled(dl, v2(cx - 0.58f * s, cy - 0.12f * s), v2(cx + 0.58f * s, cy + 0.12f * s), col, 0.06f * s, 0);
            break;
        }
        case 15:   // light melee sword (X)
            apk_draw_sword_icon(dl, cx, cy, s, col, false);
            break;
        case 16:   // bowgun fire @ 0x583f94: crosshair + muzzle flash
        case 17: { // bow fire @ 0x58386c
            ImDrawList_AddCircle(dl, v2(cx, cy), 0.52f * s, col, 20, std::max(1.5f, 0.11f * s));
            ImDrawList_AddCircleFilled(dl, v2(cx, cy), 0.18f * s, col, 12);
            ImDrawList_AddLine(dl, v2(cx - 0.78f * s, cy), v2(cx + 0.78f * s, cy), col, std::max(1.5f, 0.10f * s));
            ImDrawList_AddLine(dl, v2(cx, cy - 0.78f * s), v2(cx, cy + 0.78f * s), col, std::max(1.5f, 0.10f * s));
            break;
        }
        case 18: { // reload @ 0x5836a4: circular reload arrow + shell
            for (int i = 0; i < 14; ++i) {
                float a0 = -2.2f + 4.4f * (float)i / 14.0f;
                float a1 = -2.2f + 4.4f * (float)(i + 1) / 14.0f;
                ImDrawList_AddLine(dl,
                    v2(cx + std::cos(a0) * 0.52f * s, cy + std::sin(a0) * 0.52f * s),
                    v2(cx + std::cos(a1) * 0.52f * s, cy + std::sin(a1) * 0.52f * s),
                    col, std::max(1.5f, 0.13f * s));
            }
            ImDrawList_AddRectFilled(dl, v2(cx - 0.12f * s, cy - 0.24f * s), v2(cx + 0.12f * s, cy + 0.28f * s), col, 0.04f * s, 0);
            break;
        }
        case 19: { // aim scope @ 0x584770
            ImDrawList_AddCircle(dl, v2(cx, cy), 0.56f * s, col, 24, std::max(1.5f, 0.11f * s));
            ImDrawList_AddCircle(dl, v2(cx, cy), 0.22f * s, col, 16, std::max(1.2f, 0.08f * s));
            ImDrawList_AddLine(dl, v2(cx - 0.76f * s, cy), v2(cx - 0.32f * s, cy), col, std::max(1.5f, 0.09f * s));
            ImDrawList_AddLine(dl, v2(cx + 0.32f * s, cy), v2(cx + 0.76f * s, cy), col, std::max(1.5f, 0.09f * s));
            ImDrawList_AddLine(dl, v2(cx, cy - 0.76f * s), v2(cx, cy - 0.32f * s), col, std::max(1.5f, 0.09f * s));
            ImDrawList_AddLine(dl, v2(cx, cy + 0.32f * s), v2(cx, cy + 0.76f * s), col, std::max(1.5f, 0.09f * s));
            break;
        }
        case 20:   // crouching fire / coating phial @ 0x58492c / 0x5854ec
        case 21: {
            ImDrawList_AddRectFilled(dl, v2(cx - 0.24f * s, cy - 0.38f * s), v2(cx + 0.24f * s, cy + 0.52f * s), col, 0.08f * s, 0);
            ImDrawList_AddRectFilled(dl, v2(cx - 0.14f * s, cy - 0.62f * s), v2(cx + 0.14f * s, cy - 0.38f * s), col, 0.03f * s, 0);
            break;
        }
        case 22:   // heavy melee sword (A) @ 0x58530c
            apk_draw_sword_icon(dl, cx, cy, s, col, true);
            break;
        case 24: { // ammo_up @ 0x5832f8
            ImDrawList_AddTriangleFilled(dl, v2(cx, cy - 0.55f * s), v2(cx - 0.52f * s, cy + 0.35f * s), v2(cx + 0.52f * s, cy + 0.35f * s), col);
            break;
        }
        case 25: { // ammo_down @ 0x5832f8
            ImDrawList_AddTriangleFilled(dl, v2(cx, cy + 0.55f * s), v2(cx - 0.52f * s, cy - 0.35f * s), v2(cx + 0.52f * s, cy - 0.35f * s), col);
            break;
        }
        default:
            apk_draw_sword_icon(dl, cx, cy, s, col, false);
            break;
    }
}

extern "C" void touch_ios_render_imgui(float screen_w, float screen_h) {
    ImDrawList_c* dl = igGetForegroundDrawList_Nil();
    if (!dl || !g_port_config.touch_controls || g_port_config.touch_mode == 2) return;

    float alpha = std::max(0.05f, std::min(1.0f, g_port_config.touch_opacity));
    uint32_t col_bg       = im_col32(20, 18, 16, (int)(alpha * 155.0f));
    uint32_t col_bg_press = im_col32(72, 58, 36, (int)( std::min(1.0f, alpha + 0.25f) * 210.0f));
    uint32_t col_rim      = im_col32(215, 190, 130, (int)(alpha * 195.0f));
    uint32_t col_rim_act  = im_col32(255, 225, 135, 245);
    uint32_t col_icon     = im_col32(242, 232, 210, (int)(alpha * 240.0f));

    for (int i = 0; i < MHGU_TOUCH_CONTROL_COUNT; ++i) {
        if (!touch_ios_is_control_visible(i)) continue;
        float cx = 0.0f, cy = 0.0f, rad = 0.0f;
        touch_ios_get_control_screen_pos(i, screen_w, screen_h, &cx, &cy, &rad);
        const MhguTouchControlDef& d = kTouchDefs[i];
        const MhguTouchControlState& st = s_states[i];
        const char* id = d.id;

        bool active = st.pressed ||
                      (std::strcmp(id, "run") == 0 && s_rt.run_latched) ||
                      (std::strcmp(id, "target") == 0 && s_rt.lock_on_latched);
        uint32_t bg  = active ? col_bg_press : col_bg;
        uint32_t rim = active ? col_rim_act  : col_rim;

        if (std::strcmp(id, "stick") == 0 || std::strcmp(id, "rstick") == 0) {
            bool is_l = (std::strcmp(id, "stick") == 0);
            float ox = (is_l && s_rt.stick_active && !g_port_config.touch_fixed_stick) ? s_rt.stick_origin_x : cx;
            float oy = (is_l && s_rt.stick_active && !g_port_config.touch_fixed_stick) ? s_rt.stick_origin_y : cy;
            ImDrawList_AddCircleFilled(dl, v2(ox, oy), rad, col_bg, 36);
            ImDrawList_AddCircle(dl, v2(ox, oy), rad, rim, 36, 2.0f);
            float kx = ox + (is_l ? s_rt.stick_dx : s_rt.rstick_dx) * (rad * 0.58f);
            float ky = oy + (is_l ? s_rt.stick_dy : s_rt.rstick_dy) * (rad * 0.58f);
            ImDrawList_AddCircleFilled(dl, v2(kx, ky), rad * 0.40f, col_icon, 24);
            continue;
        }

        if (std::strcmp(id, "dpad") == 0) {
            ImDrawList_AddCircleFilled(dl, v2(cx, cy), rad, bg, 32);
            ImDrawList_AddCircle(dl, v2(cx, cy), rad, rim, 32, 2.0f);
            float arm = rad * 0.68f, w = rad * 0.24f;
            ImDrawList_AddRectFilled(dl, v2(cx - w, cy - arm), v2(cx + w, cy + arm), col_icon, 3.0f, 0);
            ImDrawList_AddRectFilled(dl, v2(cx - arm, cy - w), v2(cx + arm, cy + w), col_icon, 3.0f, 0);
            continue;
        }

        if (std::strcmp(id, "attack") == 0 || std::strcmp(id, "menupad") == 0) {
            float ux = 0.650f, uy = 0.760f;
            float half_len = rad * 0.62f, cap_r = rad * 0.56f;
            ImVec2_c p1 = v2(cx - ux * half_len, cy - uy * half_len);
            ImVec2_c p2 = v2(cx + ux * half_len, cy + uy * half_len);
            ImDrawList_AddCircleFilled(dl, p1, cap_r, (st.active_sub == 1 || st.active_sub == 3) ? col_bg_press : col_bg, 24);
            ImDrawList_AddCircleFilled(dl, p2, cap_r, (st.active_sub == 2 || st.active_sub == 3) ? col_bg_press : col_bg, 24);
            ImDrawList_AddLine(dl, p1, p2, bg, cap_r * 2.0f);
            ImDrawList_AddCircle(dl, p1, cap_r, rim, 24, 2.0f);
            ImDrawList_AddCircle(dl, p2, cap_r, rim, 24, 2.0f);
            if (std::strcmp(id, "attack") == 0) {
                apk_draw_sword_icon(dl, p1.x, p1.y, cap_r * 0.58f, col_icon, false);
                apk_draw_sword_icon(dl, p2.x, p2.y, cap_r * 0.58f, col_icon, true);
            }
            continue;
        }

        if (std::strcmp(id, "ml") == 0 || std::strcmp(id, "mr") == 0 ||
            std::strcmp(id, "mzl") == 0 || std::strcmp(id, "mzr") == 0) {
            float rw = rad * 1.25f, rh = rad * 0.68f;
            ImDrawList_AddRectFilled(dl, v2(cx - rw, cy - rh), v2(cx + rw, cy + rh), bg, rh * 0.45f, 0);
            ImDrawList_AddRect(dl, v2(cx - rw, cy - rh), v2(cx + rw, cy + rh), rim, rh * 0.45f, 0, 2.0f);
            continue;
        }

        ImDrawList_AddCircleFilled(dl, v2(cx, cy), rad, bg, 28);
        ImDrawList_AddCircle(dl, v2(cx, cy), rad, rim, 28, 2.0f);
        if (d.icon_kind > 0) {
            apk_draw_hunter_icon(dl, d.icon_kind, cx, cy, rad * 0.54f, col_icon, bg);
        }
    }
}
