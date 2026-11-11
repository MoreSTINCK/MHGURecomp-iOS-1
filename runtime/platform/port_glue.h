#pragma once
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// Host Integration Glue for WiseManChris/MHGURecomp-iOS (`runtime/ui.c`)
// - Call `mhgu_port_attach(g_window)` once after `SDL_CreateWindow(...)`
// - Call `mhgu_port_tick()` once per frame inside `ui_pump_events()` / main loop
// ============================================================================

void mhgu_port_attach(void* sdl_window);
void mhgu_port_tick(void);
void mhgu_port_open_overlay_settings(void);
void mhgu_ios_trigger_haptic(float intensity);

#ifdef __cplusplus
}
#endif
