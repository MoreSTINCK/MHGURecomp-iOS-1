# Touch controls (phones and tablets)

The on-screen stick, the buttons around the right thumb, the camera drag and the menus by finger
came from [khorne-hub/gu-native](https://github.com/khorne-hub/gu-native) (MIT), the Android port of
this recomp. They are SDL3 finger events and ImGui drawing, so they run on iOS/iPadOS unchanged:
`SDL_HINT_TOUCH_MOUSE_EVENTS` is 0 here (runtime/ui.c), so nothing else was reading touch anyway.

## Where it lives

| File | What it does |
| --- | --- |
| `runtime/touch.cpp` `.h` | the controls, the layout editor, the item bar / Hunter Arts / target camera zones, the lock-on |
| `runtime/hle/weapon.c` | whether the local hunter's weapon is out (a run with the thumb past the stick's rim is R: only sheathed) |
| `runtime/haptics.c` `.h` | a tick when a button is pressed; `ios_haptics_tap()` in `runtime/platform/darwin.c` (UIImpactFeedbackGenerator) |
| `runtime/nvn/vulkan/exec.c` | in a hunt: the item bar to the bottom middle, the Hunter Arts and the target camera to the top right (`[Touch] MoveHUD`), and where those moved parts are drawn, so a finger on them works them |
| `runtime/nvn/vulkan/device.c` | `touch_hud_frame()`, once a presented frame |

Threads: fingers arrive on the host's main thread (`host_input.c`: `touch_event`, then `touch_input`
into the pad state), the controls are drawn on the game's thread over the game and under the
port's menus (`overlay.cpp`: `touch_draw`), and the HUD zones are filled by the graphics thread
(`exec.c`) and read by the main thread under a lock.

## Settings (`mhgurecomp.ini`, `[Touch]`)

`Controls` (Auto / On / Off), `MoveHUD`, `CameraSpeed`, `Opacity`, `Vibration`, `Show*` for each of
the game's buttons, and `Combo1..6` / `Combo1Pad..6Pad` for buttons of your own. Most are also on the
settings menu's Controls page; the layout editor opens from **Customize touch controls** there.

## The in-game menu

The gear (and the menu key) opens a short menu in the iOS UIMenu's shape - a 44 point row list over the game, a choice
opening a submenu with the current one ticked - because a phone screen has no room for the whole panel over a hunt. It
holds the settings that take effect at once (touch controls, lock-on, vibration, the HUD move, the frame rate, smooth
gradients, kerning, small monster sync); "More settings…" and F1 open the full panel, where the rest and the sliders are.
Its colours follow the phone's appearance, dark or light (SDL_GetSystemTheme).

## The port's own menus

While the settings (or Forge's window) is open, the controls are a small pad of their own, drawn over it: a d-pad
at the left and A / B at the right, fed to the menu as the controller's buttons are (`overlay_pad`). It shows with
`[Touch] Controls = Off` too: a phone with no controller could not reach its own settings otherwise. Fingers away
from the pad are still the menu's mouse.

## Known gaps against the Android port

- The **Buttons on the screen** page (the `Show*` toggles and the combined buttons, in the menu) is
  not ported: the ini keys work, the menu page does not exist yet.
- `haptics_rumble` (the game's rumble on the phone's motor) does nothing; a controller still rumbles.
- In town, a drag does not turn the camera (the hunt's camera is hooked through
  `hle/mousecam.c`; a town has no stick handler of its own to feed).
