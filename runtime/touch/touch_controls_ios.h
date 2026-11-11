#pragma once
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// Switch Controller Bitmask (Exact match with khorne-hub/gu-native & host hle/input.h)
// ============================================================================
enum MhguSwitchBtnMask : uint64_t {
    MHGU_BTN_A       = (1ULL << 0),   // 0x0001
    MHGU_BTN_B       = (1ULL << 1),   // 0x0002
    MHGU_BTN_X       = (1ULL << 2),   // 0x0004
    MHGU_BTN_Y       = (1ULL << 3),   // 0x0008
    MHGU_BTN_LSTICK  = (1ULL << 4),   // 0x0010 (L3)
    MHGU_BTN_RSTICK  = (1ULL << 5),   // 0x0020 (R3)
    MHGU_BTN_L       = (1ULL << 6),   // 0x0040
    MHGU_BTN_R       = (1ULL << 7),   // 0x0080
    MHGU_BTN_ZL      = (1ULL << 8),   // 0x0100
    MHGU_BTN_ZR      = (1ULL << 9),   // 0x0200
    MHGU_BTN_PLUS    = (1ULL << 10),  // 0x0400 (+)
    MHGU_BTN_MINUS   = (1ULL << 11),  // 0x0800 (-)
    MHGU_BTN_LEFT    = (1ULL << 12),  // 0x1000
    MHGU_BTN_UP      = (1ULL << 13),  // 0x2000
    MHGU_BTN_RIGHT   = (1ULL << 14),  // 0x4000
    MHGU_BTN_DOWN    = (1ULL << 15),  // 0x8000
};

#define MHGU_TOUCH_CONTROL_COUNT 38

// Exact 56-byte APK Control Definition (libmain.so @ 0x00a67e60)
typedef struct MhguTouchControlDef {
    const char* id;            // Internal control ID ("stick", "attack", "dodge", ...)
    const char* label;         // Display badge ("B", "R", "ZL", "+", ...)
    const char* title_zh;      // Simplified Chinese title for layout editor
    uint64_t    btn_mask;      // Primary Switch button bitmask
    int32_t     side;          // -1 = Left edge dock, 0 = Center, +1 = Right edge dock
    float       def_x;         // Default normalized X (in 16:9 height units from edge)
    float       def_y;         // Default normalized Y (0.0..1.0 of screen height)
    float       def_r;         // Default radius (in screen height units)
    int32_t     icon_kind;     // APK icon_kind (1..25)
    int32_t     group;         // 0=Common, 1=Melee, 2=Ranged, 3=Menu, 4=Combo
    bool        default_hidden;
} MhguTouchControlDef;

// Runtime mutable state per control (persisted to Documents/touch_layout.txt)
typedef struct MhguTouchControlState {
    float x;
    float y;
    float r;
    bool  hidden;
    bool  pressed;
    int   active_sub;          // For attack pill (1=X, 2=A, 3=X+A), corner arc, dpad, menupad
} MhguTouchControlState;

typedef struct MhguTouchRuntimeState {
    bool     initialized;
    bool     edit_mode;
    int32_t  selected_idx;
    float    stick_dx;         // -1.0 .. +1.0
    float    stick_dy;         // -1.0 .. +1.0
    bool     stick_active;
    float    stick_origin_x;   // In screen points
    float    stick_origin_y;
    float    rstick_dx;        // -1.0 .. +1.0
    float    rstick_dy;        // -1.0 .. +1.0
    bool     lock_on_latched;  // Continuous monster lock-on state
    bool     run_latched;      // Continuous sprint toggle state
    int32_t  weapon_mode;      // 0=Melee, 1=Bowgun(LBG/HBG), 2=Bow
    bool     weapon_is_drawn;  // True when hunter weapon is unsheathed
    bool     in_menu_mode;     // True when game is in menu / village / quest board
    uint64_t current_buttons;
} MhguTouchRuntimeState;

// Core lifecycle & per-frame tick
void touch_ios_init(const char* docs_dir);
void touch_ios_update_frame(float screen_w, float screen_h, float dt);
void touch_ios_render_imgui(float screen_w, float screen_h);

// Multi-touch finger events (normalized 0..1 or points with screen_w/screen_h)
void touch_ios_finger_down(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h);
void touch_ios_finger_move(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h);
void touch_ios_finger_up(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h);
void touch_ios_reset_fingers(void);

// Layout persistence (Documents/touch_layout.txt, 100% compatible with APK format)
bool touch_ios_load_layout(const char* path);
bool touch_ios_save_layout(const char* path);
void touch_ios_reset_layout(void);

// Accessors for UI & CoreGraphics / ImGui renderer
const MhguTouchControlDef*   touch_ios_get_defs(int* out_count);
MhguTouchControlState*       touch_ios_get_states(int* out_count);
MhguTouchRuntimeState*       touch_ios_get_runtime(void);
void                         touch_ios_get_control_screen_pos(int idx, float screen_w, float screen_h, float* out_cx, float* out_cy, float* out_rad);
bool                         touch_ios_is_control_visible(int idx);
uint64_t                     touch_ios_get_combo_mask(int combo_slot);
const char*                  touch_ios_get_combo_label(int action_idx);

// Native HLE Hooks decompiled from khorne-hub/gu-native libmain.so
void mousecam_init(void);
void mousecam_add(float dx, float dy);
void itembar_init(void);
void itembar_scroll(int steps);
uint32_t weapon_hunter(void);
int      weapon_drawn(void);
int      weapon_ranged(uint32_t hunter_addr);
int      weapon_aiming(uint32_t hunter_addr);
int      weapon_moving(uint32_t hunter_addr);

// Host input_set declaration (MUST be int32_t to match WiseManChris/MHGURecomp-iOS hle/input.h)
void input_set(uint64_t buttons, int32_t lx, int32_t ly, int32_t rx, int32_t ry);

#ifdef __cplusplus
}
#endif
