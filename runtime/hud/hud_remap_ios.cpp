#include "hud_remap_ios.h"
#include "../config/config_ios.h"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

// ============================================================================
// Exact 8-Piece HUD Table Decompiled from khorne-hub/gu-native libmain.so
// - Bounding boxes @ 0x0020a5f4 (1280x720 reference canvas)
// - Pivot centers  @ 0x001dde90
// - Touch shifts   @ 0x001dde10
// ============================================================================
static const MhguHudPieceDef kHudDefs[MHGU_HUD_PIECE_COUNT] = {
    { 0, "items",  "右下道具栏与弹药瓶轮盘",  880.0f, 470.0f, 1280.0f, 720.0f, 1080.0f, 595.0f, -153.6f, -36.0f, 1.00f },
    { 1, "arts",   "狩技槽 I / II / III",     500.0f, 570.0f,  880.0f, 720.0f,  690.0f, 645.0f, -153.6f,   0.0f, 1.00f },
    { 2, "target", "怪物锁定图标与状态框",    920.0f,   0.0f, 1280.0f, 130.0f, 1100.0f,  65.0f, -128.0f,   0.0f, 1.00f },
    { 3, "clock",  "任务计时钟与猫车标识",      0.0f,   0.0f,   90.0f, 108.0f,   45.0f,  54.0f,    0.0f,   0.0f, 1.00f },
    { 4, "bars",   "猎人体力与耐力条",         90.0f,   0.0f,  740.0f,  68.0f,  415.0f,  34.0f,    0.0f,   0.0f, 1.00f },
    { 5, "gauges", "斩味刀纹与武器专属能量槽", 90.0f,  68.0f,  520.0f, 155.0f,  305.0f, 111.5f,   0.0f,   0.0f, 1.00f },
    { 6, "party",  "同行队友与随行艾露猫栏",    0.0f, 155.0f,  330.0f, 360.0f,  165.0f, 257.5f,   0.0f,   0.0f, 1.00f },
    { 7, "map",    "狩猎区域地图",            920.0f, 130.0f, 1280.0f, 470.0f, 1100.0f, 300.0f,    0.0f, -21.6f, 0.88f }
};

static MhguHudPieceState s_hud_states[MHGU_HUD_PIECE_COUNT];
static std::string       s_hud_layout_path;
static bool              s_hud_edit_mode = false;
static int               s_hud_selected = 0;

struct HudFinger {
    bool     active;
    intptr_t id;
    float    cur_x;
    float    cur_y;
};

static HudFinger s_hud_fingers[4];
static float     s_hud_pinch_dist0 = 0.0f;
static float     s_hud_pinch_scale0 = 1.0f;

extern "C" void hud_ios_reset_layout(void) {
    for (int i = 0; i < MHGU_HUD_PIECE_COUNT; ++i) {
        s_hud_states[i].dx = 0.0f;
        s_hud_states[i].dy = 0.0f;
        s_hud_states[i].scale = 1.0f;
        s_hud_states[i].hidden = false;
    }
}

extern "C" bool hud_ios_load_layout(const char* path) {
    hud_ios_reset_layout();
    const char* target = (path && path[0]) ? path : s_hud_layout_path.c_str();
    if (!target || !target[0]) return false;
    FILE* fp = std::fopen(target, "r");
    if (!fp) return false;

    char line[256];
    while (std::fgets(line, sizeof(line), fp)) {
        if (line[0] == '#' || line[0] == '\n' || line[0] == '\r') continue;
        char id[64] = {0};
        float dx = 0.0f, dy = 0.0f, sc = 1.0f;
        int hidden = 0;
        if (std::sscanf(line, "%63s %f %f %f %d", id, &dx, &dy, &sc, &hidden) >= 4) {
            for (int i = 0; i < MHGU_HUD_PIECE_COUNT; ++i) {
                if (std::strcmp(kHudDefs[i].id, id) == 0) {
                    s_hud_states[i].dx = dx;
                    s_hud_states[i].dy = dy;
                    s_hud_states[i].scale = std::max(0.35f, std::min(2.50f, sc));
                    s_hud_states[i].hidden = (hidden != 0);
                    break;
                }
            }
        }
    }
    std::fclose(fp);
    return true;
}

extern "C" bool hud_ios_save_layout(const char* path) {
    const char* target = (path && path[0]) ? path : s_hud_layout_path.c_str();
    if (!target || !target[0]) return false;
    FILE* fp = std::fopen(target, "w");
    if (!fp) return false;
    std::fprintf(fp, "# MHGURecomp-iOS 8-Piece HUD Layout (1280x720 canvas units)\n");
    for (int i = 0; i < MHGU_HUD_PIECE_COUNT; ++i) {
        std::fprintf(fp, "%s %.2f %.2f %.4f %d\n",
                     kHudDefs[i].id,
                     s_hud_states[i].dx,
                     s_hud_states[i].dy,
                     s_hud_states[i].scale,
                     s_hud_states[i].hidden ? 1 : 0);
    }
    std::fclose(fp);
    return true;
}

extern "C" void hud_ios_init(const char* docs_dir) {
    if (docs_dir && docs_dir[0]) {
        s_hud_layout_path = std::string(docs_dir) + "/hud_layout.txt";
    } else {
        const char* home = std::getenv("HOME");
        s_hud_layout_path = (home ? (std::string(home) + "/Documents") : ".") + "/hud_layout.txt";
    }
    std::memset(s_hud_fingers, 0, sizeof(s_hud_fingers));
    hud_ios_load_layout(s_hud_layout_path.c_str());
}

extern "C" const MhguHudPieceDef* hud_ios_get_defs(int* out_count) {
    if (out_count) *out_count = MHGU_HUD_PIECE_COUNT;
    return kHudDefs;
}

extern "C" MhguHudPieceState* hud_ios_get_states(int* out_count) {
    if (out_count) *out_count = MHGU_HUD_PIECE_COUNT;
    return s_hud_states;
}

extern "C" bool hud_ios_is_edit_mode(void) {
    return s_hud_edit_mode;
}

extern "C" void hud_ios_set_edit_mode(bool enabled) {
    s_hud_edit_mode = enabled;
    std::memset(s_hud_fingers, 0, sizeof(s_hud_fingers));
    if (!enabled) {
        hud_ios_save_layout(nullptr);
    }
}

extern "C" int hud_ios_get_selected(void) {
    return s_hud_selected;
}

extern "C" void hud_ios_set_selected(int idx) {
    if (idx >= -1 && idx < MHGU_HUD_PIECE_COUNT) s_hud_selected = idx;
}

extern "C" void hud_ios_get_screen_box(int idx, float screen_w, float screen_h,
                                       float* out_x, float* out_y, float* out_w, float* out_h,
                                       bool* out_hidden) {
    if (idx < 0 || idx >= MHGU_HUD_PIECE_COUNT) return;
    const MhguHudPieceDef& d = kHudDefs[idx];
    const MhguHudPieceState& st = s_hud_states[idx];

    bool auto_shift = (g_port_config.touch_controls && g_port_config.hud_touch_auto_shift);
    float total_dx = st.dx + (auto_shift ? d.touch_dx : 0.0f);
    float total_dy = st.dy + (auto_shift ? d.touch_dy : 0.0f);
    float total_sc = st.scale * (auto_shift ? d.touch_scale : 1.0f);

    float base_w = (d.x1 - d.x0) * total_sc;
    float base_h = (d.y1 - d.y0) * total_sc;
    float cx_720 = d.pivot_x + total_dx;
    float cy_720 = d.pivot_y + total_dy;

    float sx = screen_w / 1280.0f;
    float sy = screen_h / 720.0f;

    float w = base_w * sx;
    float h = base_h * sy;
    float x = cx_720 * sx - w * 0.5f;
    float y = cy_720 * sy - h * 0.5f;

    if (out_x) *out_x = x;
    if (out_y) *out_y = y;
    if (out_w) *out_w = w;
    if (out_h) *out_h = h;
    if (out_hidden) *out_hidden = st.hidden;
}

extern "C" bool hud_ios_editor_finger_down(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h) {
    if (!s_hud_edit_mode) return false;
    int slot = -1;
    for (int i = 0; i < 4; ++i) {
        if (!s_hud_fingers[i].active) { slot = i; break; }
    }
    if (slot < 0) return false;
    s_hud_fingers[slot].active = true;
    s_hud_fingers[slot].id = finger_id;
    s_hud_fingers[slot].cur_x = x_pt;
    s_hud_fingers[slot].cur_y = y_pt;

    int active_cnt = 0;
    int f0 = -1, f1 = -1;
    for (int i = 0; i < 4; ++i) {
        if (s_hud_fingers[i].active) {
            if (f0 < 0) f0 = i;
            else if (f1 < 0) f1 = i;
            active_cnt++;
        }
    }

    if (active_cnt == 1) {
        for (int i = MHGU_HUD_PIECE_COUNT - 1; i >= 0; --i) {
            float bx = 0.0f, by = 0.0f, bw = 0.0f, bh = 0.0f;
            hud_ios_get_screen_box(i, screen_w, screen_h, &bx, &by, &bw, &bh, nullptr);
            if (x_pt >= bx && x_pt <= bx + bw && y_pt >= by && y_pt <= by + bh) {
                s_hud_selected = i;
                break;
            }
        }
    } else if (active_cnt == 2 && s_hud_selected >= 0 && f0 >= 0 && f1 >= 0) {
        float dx = s_hud_fingers[f0].cur_x - s_hud_fingers[f1].cur_x;
        float dy = s_hud_fingers[f0].cur_y - s_hud_fingers[f1].cur_y;
        s_hud_pinch_dist0 = std::max(12.0f, std::sqrt(dx * dx + dy * dy));
        s_hud_pinch_scale0 = s_hud_states[s_hud_selected].scale;
    }
    return true;
}

extern "C" bool hud_ios_editor_finger_move(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h) {
    if (!s_hud_edit_mode) return false;
    int slot = -1;
    for (int i = 0; i < 4; ++i) {
        if (s_hud_fingers[i].active && s_hud_fingers[i].id == finger_id) { slot = i; break; }
    }
    if (slot < 0) return false;

    float prev_x = s_hud_fingers[slot].cur_x;
    float prev_y = s_hud_fingers[slot].cur_y;
    s_hud_fingers[slot].cur_x = x_pt;
    s_hud_fingers[slot].cur_y = y_pt;

    int active_cnt = 0;
    int f0 = -1, f1 = -1;
    for (int i = 0; i < 4; ++i) {
        if (s_hud_fingers[i].active) {
            if (f0 < 0) f0 = i;
            else if (f1 < 0) f1 = i;
            active_cnt++;
        }
    }

    if (s_hud_selected >= 0 && s_hud_selected < MHGU_HUD_PIECE_COUNT) {
        if (active_cnt >= 2 && f0 >= 0 && f1 >= 0 && s_hud_pinch_dist0 > 1.0f) {
            float dx = s_hud_fingers[f0].cur_x - s_hud_fingers[f1].cur_x;
            float dy = s_hud_fingers[f0].cur_y - s_hud_fingers[f1].cur_y;
            float dist = std::sqrt(dx * dx + dy * dy);
            s_hud_states[s_hud_selected].scale = std::max(0.35f, std::min(2.50f, s_hud_pinch_scale0 * (dist / s_hud_pinch_dist0)));
        } else if (active_cnt == 1 && screen_w > 1.0f && screen_h > 1.0f) {
            s_hud_states[s_hud_selected].dx += (x_pt - prev_x) * (1280.0f / screen_w);
            s_hud_states[s_hud_selected].dy += (y_pt - prev_y) * (720.0f / screen_h);
        }
    }
    return true;
}

extern "C" bool hud_ios_editor_finger_up(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h) {
    (void)x_pt; (void)y_pt; (void)screen_w; (void)screen_h;
    if (!s_hud_edit_mode) return false;
    for (int i = 0; i < 4; ++i) {
        if (s_hud_fingers[i].active && s_hud_fingers[i].id == finger_id) {
            s_hud_fingers[i].active = false;
        }
    }
    hud_ios_save_layout(nullptr);
    return true;
}

extern "C" bool hud_ios_transform_720p_vertex(float in_x, float in_y, float* out_x, float* out_y) {
    if (!out_x || !out_y) return false;
    *out_x = in_x;
    *out_y = in_y;
    if (!g_port_config.hud_custom_enable) return false;

    for (int i = 0; i < MHGU_HUD_PIECE_COUNT; ++i) {
        const MhguHudPieceDef& d = kHudDefs[i];
        if (in_x >= d.x0 && in_x <= d.x1 && in_y >= d.y0 && in_y <= d.y1) {
            const MhguHudPieceState& st = s_hud_states[i];
            if (st.hidden) {
                *out_x = -9999.0f;
                *out_y = -9999.0f;
                return true;
            }
            bool auto_shift = (g_port_config.touch_controls && g_port_config.hud_touch_auto_shift);
            float dx = st.dx + (auto_shift ? d.touch_dx : 0.0f);
            float dy = st.dy + (auto_shift ? d.touch_dy : 0.0f);
            float sc = st.scale * (auto_shift ? d.touch_scale : 1.0f);
            *out_x = d.pivot_x + (in_x - d.pivot_x) * sc + dx;
            *out_y = d.pivot_y + (in_y - d.pivot_y) * sc + dy;
            return true;
        }
    }
    return false;
}
