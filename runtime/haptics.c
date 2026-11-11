// The phone's vibration, on the touch controls' buttons ([Touch] Vibration: runtime/touch.cpp, haptics_tap).
//   iOS:  runtime/platform/darwin.c's ios_haptics_tap (UIImpactFeedbackGenerator: a light tick, main thread)
//   Elsewhere: nothing
// The game's own rumble (haptics_rumble) stays with the controller: the phone's motor is not used for it here.
#include "haptics.h"

#include <stdbool.h>
#include <stdint.h>

#include "config.h"
#include "platform.h"

#define TAP_NS 25000000ull  // clicks closer together than this are one

#if defined(__APPLE__)
static uint64_t tap_ns;  // the last click
void ios_haptics_tap(void);  // (runtime/platform/darwin.c: UIKit, the host's main thread)

void haptics_tap(void) {
    if (!config_live_touch_vibration()) return;
    uint64_t now = plat_now_ns();
    if (tap_ns && now - tap_ns < TAP_NS) return;
    tap_ns = now;
    ios_haptics_tap();
}
#else
void haptics_tap(void) {}
#endif

void haptics_rumble(uint32_t v) { (void)v; }

void haptics_stop(void) {}
