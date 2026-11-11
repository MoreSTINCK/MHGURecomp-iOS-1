#pragma once
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// Exact 8-Piece HUD Remap & Drag/Pinch Editor (Decompiled from gu-native APK)
// Reference Tables in libmain.so:
// - 0x0020a5f4: 8 HUD bounding boxes on 1280x720 guest canvas
// - 0x001dde90: 8 HUD pivot centers (cx, cy)
// - 0x001dde10: Default touch-mode avoidance shifts (dx, dy, scale)
// ============================================================================

#define MHGU_HUD_PIECE_COUNT 8

typedef struct MhguHudPieceDef {
    int32_t     index;
    const char* id;            // "items", "arts", "target", "clock", "bars", "gauges", "party", "map"
    const char* name_zh;       // Simplified Chinese display name
    float       x0, y0;        // 1280x720 reference top-left
    float       x1, y1;        // 1280x720 reference bottom-right
    float       pivot_x;       // 1280x720 reference pivot X
    float       pivot_y;       // 1280x720 reference pivot Y
    float       touch_dx;      // APK default touch avoidance shift X (in 1280 units)
    float       touch_dy;      // APK default touch avoidance shift Y (in 720 units)
    float       touch_scale;   // APK default touch avoidance scale
} MhguHudPieceDef;

typedef struct MhguHudPieceState {
    float dx;                  // User custom offset X (in 1280x720 canvas units)
    float dy;                  // User custom offset Y (in 1280x720 canvas units)
    float scale;               // User custom scale (0.35 .. 2.50, default 1.0)
    bool  hidden;              // Individual piece hide toggle
} MhguHudPieceState;

void hud_ios_init(const char* docs_dir);
bool hud_ios_load_layout(const char* path);
bool hud_ios_save_layout(const char* path);
void hud_ios_reset_layout(void);

const MhguHudPieceDef* hud_ios_get_defs(int* out_count);
MhguHudPieceState*     hud_ios_get_states(int* out_count);

bool  hud_ios_is_edit_mode(void);
void  hud_ios_set_edit_mode(bool enabled);
int   hud_ios_get_selected(void);
void  hud_ios_set_selected(int idx);

// Resolve piece bounding box in screen points for overlay editor & viewport remap
void hud_ios_get_screen_box(int idx, float screen_w, float screen_h,
                            float* out_x, float* out_y, float* out_w, float* out_h,
                            bool* out_hidden);

// Editor touch handlers (1-finger drag, 2-finger pinch scale, double-tap toggle hide)
bool hud_ios_editor_finger_down(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h);
bool hud_ios_editor_finger_move(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h);
bool hud_ios_editor_finger_up(intptr_t finger_id, float x_pt, float y_pt, float screen_w, float screen_h);

// Transform a 1280x720 2D HUD vertex (x, y) according to the matching HUD piece
bool hud_ios_transform_720p_vertex(float in_x, float in_y, float* out_x, float* out_y);

#ifdef __cplusplus
}
#endif
