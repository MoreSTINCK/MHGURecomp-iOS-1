#pragma once
// ============================================================================
// MHGURecomp-iOS — Forge Plugin & Built-in Cheats Manager (Collision-Free)
// Uses `port_forge_*` symbol names so it links cleanly alongside upstream
// `runtime/forge.c` (`forge_imgui_init`, `forge_imgui_run(void*, int)`).
// ============================================================================

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char name[128];
    char path[512];
    bool enabled;
    bool loaded;
} MhguForgePluginEntry;

void port_forge_init(const char* docs_dir);
void port_forge_run_frame(void* guest_base);
void port_forge_shutdown(void);

int  port_forge_get_plugin_count(void);
const MhguForgePluginEntry* port_forge_get_plugin(int idx);
void port_forge_set_plugin_enabled(int idx, bool enabled);

#ifdef __cplusplus
}
#endif
