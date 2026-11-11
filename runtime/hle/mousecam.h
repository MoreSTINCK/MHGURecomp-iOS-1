// Mouse look on the hunt camera's own angles (runtime/hle/mousecam.c) and what the local hunter holds (hle/weapon.c)
#pragma once
#include <stdbool.h>
#include <stdint.h>

enum { WEAPON_BOW = 1, WEAPON_BOWGUN };  // (runtime/hle/weapon.c)
uint32_t weapon_hunter(void);
int weapon_ranged(uint32_t hunter);
bool weapon_aiming(uint32_t hunter);
bool weapon_moving(uint32_t hunter);
unsigned weapon_action(uint32_t hunter);  // st << 16 | no
int weapon_bow_type(void);
int weapon_drawn(void);         // 1 the weapon out, 0 sheathed, -1 not known (runtime/hle/weapon.c)

void mousecam_init(void);              // hooks the quest camera's stick handler
bool mousecam_active(void);            // the hunt camera takes the mouse now (its stick handler ran just now)
void mousecam_add(float dx, float dy);  // counts the mouse moved (x right, y down; any thread)
