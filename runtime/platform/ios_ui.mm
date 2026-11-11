// The iOS screens of this port, in UIKit so their material is the system's own - the glass iOS draws, in the light or
// dark the phone is set to (nxnative's launcher and its UIMenu are native for the same reason: a port cannot paint that
// material itself).
//
//   plat_show_launcher()  the start screen: the icon, the name and Play on the left third, restart-only settings,
//                         Mods, Cheats, and nxnative actions (Paste cheat codes, Reset to defaults) on the right,
//                         an insetGrouped list as Launcher.swift has it. It blocks until Play.
//   plat_menu_show()      the menu over the game: an iOS 26 Liquid Glass card (UIGlassEffect / UIVisualEffectView)
//                         of the settings that take effect at once, including the 38-button & 8-piece HUD layout
//                         editor entry, all 22 screen button toggles, Combo 1..6, and live Cheats.
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <SDL3/SDL.h>
#include <objc/message.h>

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

#include "cheats.h"
#include "config.h"
#include "modorder.h"
#include "platform.h"
#include "settings_locale.h"
#include "touch.h"

extern "C" SDL_Window *ui_window(void);  // (runtime/ui.c)
extern "C" void plat_menu_closed(void);

namespace {

// Build an iOS 26 Liquid Glass visual effect view (uses native UIGlassEffect on iOS 26+,
// with UltraThinMaterial + specular refraction rim fallback on iOS 15-25)
UIVisualEffectView *make_liquid_glass_card(CGFloat radius) {
    UIVisualEffect *effect = nil;
    Class glassCls = NSClassFromString(@"UIGlassEffect");
    if (glassCls && [glassCls respondsToSelector:@selector(effectWithStyle:)]) {
        effect = ((UIVisualEffect *(*)(id, SEL, NSInteger))objc_msgSend)(glassCls, @selector(effectWithStyle:), 0);
    }
    if (!effect) {
        effect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterial];
    }
    UIVisualEffectView *card = [[UIVisualEffectView alloc] initWithEffect:effect];
    card.layer.cornerRadius = radius;
    card.layer.cornerCurve = kCACornerCurveContinuous;
    card.layer.borderWidth = 1.0;
    card.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.28].CGColor;
    card.clipsToBounds = YES;
    return card;
}

// label (English: the locale table translates it), the ini key, the section it is filed under there, and whether it
// takes effect at the next start only (restart == true -> start screen only; restart == false -> in-game menu only)
struct Row {
    const char *label, *key, *section;
    bool restart;
};
const Row ROWS[] = {
    // the touch controls (live in-game)
    {"Touch controls", "Controls", "Touch", false},
    {"Lock-on", "LockOn", "Touch", false},
    {"Vibrate on touch", "Vibration", "Touch", false},
    {"Move the HUD for touch", "MoveHUD", "Touch", false},
    {"Touch camera speed", "CameraSpeed", "Touch", false},
    {"Touch controls opacity", "Opacity", "Touch", false},
    // Buttons on the screen (all 22 Show* switches & Combo 1..6 from gu-native APK)
    {"Attack  A / X", "ShowAttacks", "Screen buttons", false},
    {"Dodge  B", "ShowDodge", "Screen buttons", false},
    {"Guard  R", "ShowGuard", "Screen buttons", false},
    {"Sheathe  Y", "ShowSheathe", "Screen buttons", false},
    {"Menu  +", "ShowPlus", "Screen buttons", false},
    {"Minus  -", "ShowMinus", "Screen buttons", false},
    {"D-pad", "ShowDpad", "Screen buttons", false},
    {"Camera  L", "ShowL", "Screen buttons", false},
    {"Target  ZL", "ShowZL", "Screen buttons", false},
    {"Special  ZR", "ShowZR", "Screen buttons", false},
    {"Menu ZL", "ShowMenuZL", "Screen buttons", false},
    {"Menu ZR", "ShowMenuZR", "Screen buttons", false},
    {"Left stick click", "ShowL3", "Screen buttons", false},
    {"Right stick click", "ShowR3", "Screen buttons", false},
    {"Movement", "ShowStick", "Screen buttons", false},
    {"Ranged layout", "ShowRanged", "Screen buttons", false},
    {"Fire / shoot", "ShowFire", "Screen buttons", false},
    {"Reload / melee", "ShowSecond", "Screen buttons", false},
    {"Aim", "ShowAim", "Screen buttons", false},
    {"Crouching fire / coating", "ShowRangedSpecial", "Screen buttons", false},
    {"Ammo arrows", "ShowAmmo", "Screen buttons", false},
    {"Item arrows", "ShowItemArrows", "Screen buttons", false},
    {"Combo 1", "Combo1", "Screen buttons", false},
    {"Combo 2", "Combo2", "Screen buttons", false},
    {"Combo 3", "Combo3", "Screen buttons", false},
    {"Combo 4", "Combo4", "Screen buttons", false},
    {"Combo 5", "Combo5", "Screen buttons", false},
    {"Combo 6", "Combo6", "Screen buttons", false},
    // the picture
    {"Window mode", "Mode", "Display", true},
    {"Aspect ratio", "AspectRatio", "Display", true},
    {"Field of view", "FOV", "Display", false},
    {"HUD anchor", "UIAnchor", "Display", true},
    {"Frame rate limit", "FPS", "Performance", false},
    {"VSync", "VSync", "Performance", false},
    {"Anti-aliasing", "MSAA", "Anti-aliasing", false},
    {"FXAA", "FXAA", "Anti-aliasing", false},
    {"FXAA mode", "FXAAMode", "Anti-aliasing", false},
    {"Smooth gradients", "SmoothGradients", "Graphics", false},
    {"Fix kerning", "FixKerning", "Graphics", false},
    {"Bold text", "BoldText", "Graphics", false},
    {"Draw distance", "DrawDistance", "Graphics", false},
    {"FSR", "FSR", "Upscaler", true},
    {"FSR quality", "FSRQuality", "Upscaler", true},
    {"FSR sharpness", "Sharpness", "Upscaler", false},
    {"FSR reactive mask", "Reactive", "Upscaler", false},
    {"FSR object motion", "ObjectMotion", "Upscaler", true},
    {"FSR animated surfaces", "AnimSurf", "Upscaler", true},
    // HDR
    {"HDR", "HDR", "HDR", false},
    {"Peak brightness", "PeakBrightness", "HDR", false},
    {"Game brightness", "GameBrightness", "HDR", false},
    {"UI brightness", "UIBrightness", "HDR", false},
    {"Tone mapper", "ToneMapper", "HDR", false},
    {"Gamma correction", "GammaCorrection", "HDR", false},
    {"Exposure", "Exposure", "HDR", false},
    {"Highlights", "Highlights", "HDR", false},
    {"Shadows", "Shadows", "HDR", false},
    {"Contrast", "Contrast", "HDR", false},
    {"Saturation", "Saturation", "HDR", false},
    {"Highlight saturation", "HighlightSaturation", "HDR", false},
    {"Flare", "Flare", "HDR", false},
    {"Bloom", "Bloom", "HDR", false},
    {"Unclamped scene", "UnclampedScene", "HDR", false},
    {"HDR analysis", "Analysis", "HDR", false},
    // sound
    {"Volume", "Volume", "Audio", false},
    {"Mute in background", "MuteInBackground", "Audio", false},
    // the controller and the menu
    {"Face buttons", "FaceButtons", "Controls", false},
    {"Menu confirm", "MenuConfirm", "Controls", false},
    {"Background input", "BackgroundInput", "Controls", false},
    {"Combo input window", "ComboInputWindow", "Controls", false},
    {"Menu chord", "MenuChord", "Controls", false},
    {"Mouse sensitivity", "MouseSensitivity", "Mouse", false},
    // together
    {"Port (TCP / UDP)", "Port", "Multiplayer", true},
    {"Join addresses", "Join", "Multiplayer", true},
    {"Lobby server", "Server", "Multiplayer", true},
    {"Matchmaking key", "Key", "Multiplayer", true},
    {"Sync small monsters", "SyncSmallMonsters", "Multiplayer", false},
    {"Share urgent quest credit", "ShareUrgentCredit", "Multiplayer", false},
    {"Ryujinx servers", "RyuServers", "Multiplayer", true},
    {"Ryujinx host", "RyuHost", "Multiplayer", true},
    {"Ryujinx passphrase", "RyuPassphrase", "Multiplayer", true},
    {"Room server", "RoomServer", "Multiplayer", true},
    {"Room name", "RoomName", "Multiplayer", true},
    {"Host in the room", "RoomHost", "Multiplayer", true},
    // the port's own
    {"Language", "Language", "Application", false},
    {"Menu theme", "Theme", "Application", false},
    {"Button icons", "ButtonIcons", "Application", false},
    {"Menu scale", "MenuScale", "Application", false},
    {"Confirm before closing", "ConfirmExit", "Application", false},
    {"Bonus content", "BonusContent", "Application", true},
    {"Updates", "Updates", "Application", true},
    {"Shader prewarm", "ShaderPrewarm", "Performance", true},
    {"Show FPS", "ShowFPS", "Performance", false},
    {"Show battery", "ShowBattery", "Performance", false},
};
constexpr int NROWS = (int)(sizeof ROWS / sizeof *ROWS);

enum { SEC_ACTIONS, SEC_SETTINGS, SEC_MODS, SEC_CHEATS };
enum { ACT_EDIT_LAYOUT = 1, ACT_PASTE_CHEAT = 2, ACT_RESET_DEFAULTS = 3 };

const char *tr(const char *english) { return settings_text(config_language(), english); }
const ConfigSetting *setting_of(const Row &r) { return config_setting(r.key); }
Config config_now(void) { return config_editable(); }
int read_int(const ConfigSetting *s) {
    Config c = config_now();
    return *(const int *)((const char *)&c + s->field);
}
float read_float(const ConfigSetting *s) {
    Config c = config_now();
    return *(const float *)((const char *)&c + s->field);
}
bool is_number(const ConfigSetting *s) { return s && (s->kind == SET_FLOAT || s->kind == SET_FACTOR || s->kind == SET_INT); }
bool is_typed_number(const ConfigSetting *s) { return s && s->kind == SET_INT && (s->max - s->min) > 300; }
bool is_text(const ConfigSetting *s) { return s && s->kind == SET_TEXT; }

std::vector<std::string> choice_names(const ConfigSetting *s) {
    std::vector<std::string> out;
    if (!s || !s->choices) return out;
    const char *p = s->choices;
    while (*p) {
        size_t n = strcspn(p, ",");
        std::string one(p, n);
        size_t bar = one.find('|');
        if (bar != std::string::npos) one.resize(bar);
        if (!one.empty() && one.back() == '*') one.pop_back();
        out.push_back(one);
        p += n;
        if (*p == ',') p++;
    }
    return out;
}
std::vector<int> choice_values(const ConfigSetting *s) {
    std::vector<int> v;
    std::vector<std::string> names = choice_names(s);
    for (size_t i = 0; i < names.size(); i++) v.push_back(s->values ? s->values[i] : (int)i);
    return v;
}
int choice_index(const ConfigSetting *s) {
    if (!s) return -1;
    int now = read_int(s);
    std::vector<int> v = choice_values(s);
    for (size_t i = 0; i < v.size(); i++)
        if (v[i] == now) return (int)i;
    return -1;
}
std::string value_text(const ConfigSetting *s) {
    char buffer[256] = "";
    if (!s) return "";
    if (s->kind == SET_CHOICE) {
        std::vector<std::string> names = choice_names(s);
        int k = choice_index(s);
        return k >= 0 && k < (int)names.size() ? settings_text(config_language(), names[k].c_str()) : "";
    }
    if (s->kind == SET_TEXT) {
        Config c = config_now();
        return std::string((const char *)&c + s->field);
    }
    if (s->kind == SET_INT) {
        snprintf(buffer, sizeof buffer, "%d", read_int(s));
        return buffer;
    }
    if (s->kind == SET_FLOAT || s->kind == SET_FACTOR) {
        snprintf(buffer, sizeof buffer, "%.2f", (double)read_float(s));
        return buffer;
    }
    return "";
}
void write_value(const ConfigSetting *s, int v) {
    Config c = config_now();
    *(int *)((char *)&c + s->field) = v;
    char error[192];
    if (!config_save(&c, error, sizeof error)) fprintf(stderr, "[ios] %s\n", error);
}
void write_value(const ConfigSetting *s, float v) {
    Config c = config_now();
    *(float *)((char *)&c + s->field) = v;
    char error[192];
    if (!config_save(&c, error, sizeof error)) fprintf(stderr, "[ios] %s\n", error);
}
void write_text(const ConfigSetting *s, const char *text) {
    Config c = config_now();
    if (!config_parse(s, text, &c)) return;
    char error[192];
    if (!config_save(&c, error, sizeof error)) fprintf(stderr, "[ios] %s\n", error);
}

UIWindow *game_window(void) {
    SDL_Window *w = ui_window();
    if (!w) return nil;
    return (__bridge UIWindow *)SDL_GetPointerProperty(SDL_GetWindowProperties(w), SDL_PROP_WINDOW_UIKIT_WINDOW_POINTER, NULL);
}

// Start screen (live_only == false): ONLY settings that require a restart (ROWS[i].restart == true)
// In-game menu (live_only == true):  ONLY settings that take effect immediately (ROWS[i].restart == false)
NSArray<NSNumber *> *rows_for(bool live_only) {
    NSMutableArray<NSNumber *> *out = [NSMutableArray array];
    for (int i = 0; i < NROWS; i++) {
        if (live_only && ROWS[i].restart) continue;
        if (!live_only && !ROWS[i].restart) continue;
        const ConfigSetting *s = setting_of(ROWS[i]);
        if (!s) continue;
        if (s->kind == SET_KEYS || s->kind == SET_SIZE || s->kind == SET_ASPECT) continue;
        [out addObject:@(i)];
    }
    return out;
}

NSArray<NSMutableDictionary *> *sections_for(bool live_only) {
    NSMutableArray<NSMutableDictionary *> *out = [NSMutableArray array];
    if (live_only) {
        // In-game quick actions: Customize Touch & 8-Piece HUD Layout + Paste Cheat Codes
        NSMutableDictionary *act = [@{
            @"kind" : @(SEC_ACTIONS),
            @"name" : @(tr("Controls and HUD")),
            @"rows" : [@[ @(ACT_EDIT_LAYOUT), @(ACT_PASTE_CHEAT) ] mutableCopy]
        } mutableCopy];
        [out addObject:act];
    } else {
        // Launcher nxnative quick actions: Paste Cheat Codes + Reset to Tested Defaults
        NSMutableDictionary *act = [@{
            @"kind" : @(SEC_ACTIONS),
            @"name" : @(tr("General")),
            @"rows" : [@[ @(ACT_PASTE_CHEAT), @(ACT_RESET_DEFAULTS) ] mutableCopy]
        } mutableCopy];
        [out addObject:act];
    }

    NSMutableDictionary *cur = nil;
    for (NSNumber *n in rows_for(live_only)) {
        NSString *name = @(tr(ROWS[n.intValue].section));
        if (!cur || ![cur[@"name"] isEqualToString:name]) {
            cur = [@{@"kind" : @(SEC_SETTINGS), @"name" : name, @"rows" : [NSMutableArray array]} mutableCopy];
            [out addObject:cur];
        }
        [cur[@"rows"] addObject:n];
    }
    if (!live_only) {
        static ModEntry mods[MODS_MAX];
        int nmods = mods_installed(mods, MODS_MAX);
        if (nmods > 0) {
            NSMutableDictionary *sec = [@{@"kind" : @(SEC_MODS), @"name" : @(tr("Mods")), @"rows" : [NSMutableArray array]} mutableCopy];
            for (int i = 0; i < nmods; i++) [sec[@"rows"] addObject:@(i)];
            [out addObject:sec];
        }
    }
    cheats_rescan();
    int ncheats = cheats_count();
    if (ncheats > 0) {
        NSMutableDictionary *sec = [@{@"kind" : @(SEC_CHEATS), @"name" : @(tr("Cheats")), @"rows" : [NSMutableArray array]} mutableCopy];
        for (int i = 0; i < ncheats; i++) [sec[@"rows"] addObject:@(i)];
        [out addObject:sec];
    }
    return out;
}

void configure_action(UITableViewCell *cell, int act) {
    cell.accessoryView = nil;
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    cell.selectionStyle = UITableViewCellSelectionStyleDefault;
    UIListContentConfiguration *cfg = [UIListContentConfiguration cellConfiguration];
    if (act == ACT_EDIT_LAYOUT) {
        cfg.text = @(tr("Customize touch controls"));
        cfg.textProperties.color = UIColor.systemOrangeColor;
    } else if (act == ACT_PASTE_CHEAT) {
        cfg.text = @(tr("Add a cheat"));
        cfg.textProperties.color = UIColor.systemBlueColor;
    } else if (act == ACT_RESET_DEFAULTS) {
        cfg.text = @(tr("Defaults"));
        cfg.textProperties.color = UIColor.systemRedColor;
    }
    cell.contentConfiguration = cfg;
}

void configure(UITableViewCell *cell, int idx, id target) {
    const Row &r = ROWS[idx];
    const ConfigSetting *s = setting_of(r);
    cell.accessoryView = nil;
    cell.accessoryType = UITableViewCellAccessoryNone;
    cell.selectionStyle = UITableViewCellSelectionStyleDefault;
    UIListContentConfiguration *cfg = [UIListContentConfiguration valueCellConfiguration];
    cfg.text = @(tr(r.label));
    if (s && s->kind == SET_BOOL) {
        cell.contentConfiguration = cfg;
        UISwitch *sw = [[UISwitch alloc] init];
        sw.on = read_int(s) != 0;
        sw.tag = idx;
        [sw addTarget:target action:@selector(toggled:) forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = sw;
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
    } else if (s && (s->kind == SET_CHOICE || is_text(s) || is_typed_number(s))) {
        cfg.secondaryText = @(value_text(s).c_str());
        cell.contentConfiguration = cfg;
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    } else if (is_number(s)) {
        cell.contentConfiguration = cfg;
        UISlider *sl = [[UISlider alloc] initWithFrame:CGRectMake(0, 0, 148, 32)];
        sl.minimumValue = s->min;
        sl.maximumValue = s->max;
        sl.value = s->kind == SET_INT ? (float)read_int(s) : read_float(s);
        sl.tag = idx;
        sl.continuous = NO;
        [sl addTarget:target action:@selector(slid:) forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = sl;
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
    } else {
        cell.contentConfiguration = cfg;
    }
}

void present_choices(UIViewController *from, UITableView *tv, NSIndexPath *ip, int idx) {
    const ConfigSetting *s = setting_of(ROWS[idx]);
    if (!s) return;
    UIAlertController *sheet = [UIAlertController alertControllerWithTitle:@(tr(ROWS[idx].label)) message:nil
                                                            preferredStyle:UIAlertControllerStyleActionSheet];
    std::vector<std::string> names = choice_names(s);
    std::vector<int> values = choice_values(s);
    for (size_t k = 0; k < names.size() && k < values.size(); k++) {
        std::string one = settings_text(config_language(), names[k].c_str());
        int value = values[k];
        [sheet addAction:[UIAlertAction actionWithTitle:@(one.c_str()) style:UIAlertActionStyleDefault
                                               handler:^(UIAlertAction *a) {
                                                 (void)a;
                                                 write_value(s, value);
                                                 [tv reloadRowsAtIndexPaths:@[ ip ] withRowAnimation:UITableViewRowAnimationNone];
                                               }]];
    }
    [sheet addAction:[UIAlertAction actionWithTitle:@(tr("Cancel")) style:UIAlertActionStyleCancel handler:nil]];
    sheet.popoverPresentationController.sourceView = tv;
    sheet.popoverPresentationController.sourceRect = [tv rectForRowAtIndexPath:ip];
    [from presentViewController:sheet animated:YES completion:nil];
}

void present_text(UIViewController *from, UITableView *tv, NSIndexPath *ip, int idx) {
    const ConfigSetting *s = setting_of(ROWS[idx]);
    if (!s) return;
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@(tr(ROWS[idx].label)) message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
      tf.text = @(value_text(s).c_str());
      if (is_typed_number(s)) tf.keyboardType = UIKeyboardTypeNumberPad;
      tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@(tr("Cancel")) style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@(tr("Save")) style:UIAlertActionStyleDefault
                                           handler:^(UIAlertAction *a) {
                                             (void)a;
                                             NSString *v = alert.textFields.firstObject.text ?: @"";
                                             if (is_typed_number(s)) write_value(s, (int)v.intValue);
                                             else write_text(s, v.UTF8String);
                                             [tv reloadRowsAtIndexPaths:@[ ip ] withRowAnimation:UITableViewRowAnimationNone];
                                           }]];
    [from presentViewController:alert animated:YES completion:nil];
}

void paste_cheat_from_clipboard(UIViewController *from, void (^onDone)(void)) {
    NSString *clip = [UIPasteboard generalPasteboard].string ?: @"";
    char err[256] = "";
    bool ok = false;
    if (clip.length > 0) {
        ok = cheats_add(clip.UTF8String, err, sizeof err);
    } else {
        snprintf(err, sizeof err, "%s", tr("Copy a cheat (its [Name] line and its codes), then Paste and Add."));
    }
    NSString *title = ok ? @(tr("Cheats")) : @(tr("Add a cheat"));
    NSString *msg = ok ? @(tr("Saved")) : @(err);
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@(tr("Confirm")) style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        (void)a;
        if (onDone) onDone();
    }]];
    [from presentViewController:alert animated:YES completion:nil];
}

}  // namespace

// =====================================================================================================================
// The menu over the game: the settings that take effect at once, on an iOS 26 Liquid Glass card
// =====================================================================================================================
@interface MHGUMenuVC : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) NSArray<NSMutableDictionary *> *sections;
@property (nonatomic) NSInteger level;  // 0: the rows, 1: the values of ROWS[parent]
@property (nonatomic) NSInteger parent;
@end

@implementation MHGUMenuVC
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = UIColor.clearColor;
    self.sections = sections_for(true);
    self.level = 0;

    UIView *scrim = [[UIView alloc] initWithFrame:self.view.bounds];
    scrim.backgroundColor = [UIColor colorWithWhite:0 alpha:0.22];
    scrim.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:scrim];
    [scrim addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(outside:)]];

    UIVisualEffectView *card = make_liquid_glass_card(18.0);
    card.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:card];

    self.table = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStyleInsetGrouped];
    self.table.dataSource = self;
    self.table.delegate = self;
    self.table.backgroundColor = UIColor.clearColor;
    self.table.rowHeight = 44;
    self.table.translatesAutoresizingMaskIntoConstraints = NO;
    [card.contentView addSubview:self.table];

    CGFloat w = MIN(420, self.view.bounds.size.width - 40);
    CGFloat h = MIN(560, self.view.bounds.size.height - 48);
    [NSLayoutConstraint activateConstraints:@[
        [card.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [card.centerYAnchor constraintEqualToAnchor:self.view.centerYAnchor],
        [card.widthAnchor constraintEqualToConstant:w],
        [card.heightAnchor constraintEqualToConstant:h],
        [self.table.topAnchor constraintEqualToAnchor:card.contentView.topAnchor],
        [self.table.leadingAnchor constraintEqualToAnchor:card.contentView.leadingAnchor],
        [self.table.trailingAnchor constraintEqualToAnchor:card.contentView.trailingAnchor],
        [self.table.bottomAnchor constraintEqualToAnchor:card.contentView.bottomAnchor],
    ]];
}
- (void)closeMenu {
    [self.view removeFromSuperview];
    [self removeFromParentViewController];
    plat_menu_closed();
}
- (void)outside:(UITapGestureRecognizer *)g {
    (void)g;
    if (self.level > 0) {
        self.level = 0;
        [self.table reloadData];
        return;
    }
    [self closeMenu];
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tv {
    (void)tv;
    return self.level > 0 ? 1 : (NSInteger)self.sections.count;
}
- (NSString *)tableView:(UITableView *)tv titleForHeaderInSection:(NSInteger)s {
    (void)tv;
    return self.level > 0 ? nil : self.sections[s][@"name"];
}
- (NSInteger)tableView:(UITableView *)tv numberOfRowsInSection:(NSInteger)s {
    (void)tv;
    if (self.level > 0) return (NSInteger)choice_names(setting_of(ROWS[self.parent])).size();
    return [self.sections[s][@"rows"] count];
}
- (UITableViewCell *)tableView:(UITableView *)tv cellForRowAtIndexPath:(NSIndexPath *)ip {
    UITableViewCell *cell = [tv dequeueReusableCellWithIdentifier:@"c"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"c"];
    if (self.level > 0) {
        const ConfigSetting *s = setting_of(ROWS[self.parent]);
        std::vector<std::string> names = choice_names(s);
        cell.accessoryView = nil;
        UIListContentConfiguration *cfg = [UIListContentConfiguration cellConfiguration];
        cfg.text = ip.row < (NSInteger)names.size() ? @(settings_text(config_language(), names[ip.row].c_str())) : @"";
        cell.contentConfiguration = cfg;
        cell.accessoryType = choice_index(s) == (int)ip.row ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
        return cell;
    }
    NSMutableDictionary *sec = self.sections[ip.section];
    int kind = [sec[@"kind"] intValue];
    int idx = [sec[@"rows"][ip.row] intValue];
    if (kind == SEC_ACTIONS) {
        configure_action(cell, idx);
        return cell;
    }
    if (kind == SEC_CHEATS) {
        cell.accessoryView = nil;
        cell.accessoryType = UITableViewCellAccessoryNone;
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        UIListContentConfiguration *cfg = [UIListContentConfiguration cellConfiguration];
        int n = cheats_count();
        cfg.text = idx < n ? @(cheats_name(idx)) : @"";
        cfg.secondaryText = idx < n && cheats_master(idx) ? @(tr("Always on")) : @"";
        cell.contentConfiguration = cfg;
        if (idx < n && !cheats_master(idx)) {
            UISwitch *sw = [[UISwitch alloc] init];
            sw.on = cheats_on(idx);
            sw.tag = idx;
            [sw addTarget:self action:@selector(cheatToggled:) forControlEvents:UIControlEventValueChanged];
            cell.accessoryView = sw;
        }
        return cell;
    }
    configure(cell, idx, self);
    return cell;
}
- (void)tableView:(UITableView *)tv didSelectRowAtIndexPath:(NSIndexPath *)ip {
    [tv deselectRowAtIndexPath:ip animated:YES];
    if (self.level > 0) {
        const ConfigSetting *s = setting_of(ROWS[self.parent]);
        std::vector<int> values = choice_values(s);
        if ((size_t)ip.row < values.size()) write_value(s, values[ip.row]);
        self.level = 0;
        self.sections = sections_for(true);
        [tv reloadData];
        return;
    }
    NSMutableDictionary *sec = self.sections[ip.section];
    int kind = [sec[@"kind"] intValue];
    int idx = [sec[@"rows"][ip.row] intValue];
    if (kind == SEC_ACTIONS) {
        if (idx == ACT_EDIT_LAYOUT) {
            touch_edit_begin();
            [self closeMenu];
        } else if (idx == ACT_PASTE_CHEAT) {
            __weak __typeof__(self) weakSelf = self;
            paste_cheat_from_clipboard(self, ^{
                __strong __typeof__(weakSelf) strongSelf = weakSelf;
                if (!strongSelf) return;
                strongSelf.sections = sections_for(true);
                [strongSelf.table reloadData];
            });
        }
        return;
    }
    if (kind != SEC_SETTINGS) return;
    const ConfigSetting *s = setting_of(ROWS[idx]);
    if (!s) return;
    if (s->kind == SET_CHOICE) {
        self.parent = idx;
        self.level = 1;
        [tv reloadData];
    } else if (is_text(s) || is_typed_number(s)) {
        present_text(self, tv, ip, idx);
    }
}
- (void)toggled:(UISwitch *)sw { write_value(setting_of(ROWS[sw.tag]), sw.isOn ? 1 : 0); }
- (void)slid:(UISlider *)sl {
    const ConfigSetting *s = setting_of(ROWS[sl.tag]);
    if (s && s->kind == SET_INT) write_value(s, (int)(sl.value + 0.5f));
    else write_value(s, sl.value);
}
- (void)cheatToggled:(UISwitch *)sw {
    int n = cheats_count();
    std::vector<char> on((size_t)n, 0);
    for (int i = 0; i < n; i++) on[(size_t)i] = (i == sw.tag ? sw.isOn : cheats_on(i)) ? 1 : 0;
    char error[192] = "";
    if (!cheats_set((const bool *)on.data(), n, error, sizeof error)) fprintf(stderr, "[ios] %s\n", error);
}
@end

// =====================================================================================================================
// The start screen: the icon and Play on the left third, restart-only settings + Mods + Cheats on the right (nxnative)
// =====================================================================================================================
@interface MHGULauncherVC : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic) BOOL played;
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) NSArray<NSMutableDictionary *> *sections;
@end

@implementation MHGULauncherVC
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];
    self.sections = sections_for(false);

    UIView *left = [[UIView alloc] initWithFrame:CGRectZero];
    left.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:left];
    UIStackView *stack = [[UIStackView alloc] initWithFrame:CGRectZero];
    stack.axis = UILayoutConstraintAxisVertical;
    stack.alignment = UIStackViewAlignmentCenter;
    stack.spacing = 16;
    stack.translatesAutoresizingMaskIntoConstraints = NO;
    [left addSubview:stack];

    UIImage *icon = [UIImage imageNamed:@"AppIcon"];
    if (!icon) {
        NSDictionary *icons = [[NSBundle mainBundle] infoDictionary][@"CFBundleIcons"];
        NSArray *files = icons[@"CFBundlePrimaryIcon"][@"CFBundleIconFiles"];
        if (files.count) icon = [UIImage imageNamed:files.lastObject];
    }
    if (icon) {
        UIImageView *iv = [[UIImageView alloc] initWithImage:icon];
        iv.layer.cornerRadius = 22;
        iv.layer.cornerCurve = kCACornerCurveContinuous;
        iv.clipsToBounds = YES;
        [iv.widthAnchor constraintEqualToConstant:96].active = YES;
        [iv.heightAnchor constraintEqualToConstant:96].active = YES;
        [stack addArrangedSubview:iv];
    }
    UILabel *name = [[UILabel alloc] init];
    name.text = [[NSBundle mainBundle] infoDictionary][@"CFBundleDisplayName"] ?: @"怪物猎人GU";
    name.font = [UIFont boldSystemFontOfSize:26];
    name.numberOfLines = 0;
    name.textAlignment = NSTextAlignmentCenter;
    [stack addArrangedSubview:name];
    UILabel *version = [[UILabel alloc] init];
    version.text = [NSString stringWithFormat:@"%s %@", tr("Version"),
                    [[NSBundle mainBundle] infoDictionary][@"CFBundleShortVersionString"] ?: @"1.4.0"];
    version.font = [UIFont preferredFontForTextStyle:UIFontTextStyleCallout];
    version.textColor = UIColor.secondaryLabelColor;
    [stack addArrangedSubview:version];

    UIButton *play = [UIButton buttonWithType:UIButtonTypeSystem];
    UIButtonConfiguration *pcfg = [UIButtonConfiguration filledButtonConfiguration];
    pcfg.title = @(tr("Play"));
    pcfg.cornerStyle = UIButtonConfigurationCornerStyleCapsule;
    pcfg.buttonSize = UIButtonConfigurationSizeLarge;
    play.configuration = pcfg;
    [play.widthAnchor constraintEqualToConstant:220].active = YES;
    [play.heightAnchor constraintEqualToConstant:50].active = YES;
    [play addTarget:self action:@selector(playPressed) forControlEvents:UIControlEventTouchUpInside];
    [stack addArrangedSubview:play];

    self.table = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStyleInsetGrouped];
    self.table.dataSource = self;
    self.table.delegate = self;
    self.table.backgroundColor = [UIColor systemGroupedBackgroundColor];
    self.table.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:self.table];

    [NSLayoutConstraint activateConstraints:@[
        [left.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [left.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [left.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],
        [left.widthAnchor constraintEqualToAnchor:self.view.widthAnchor multiplier:1.0 / 3.0],
        [stack.centerXAnchor constraintEqualToAnchor:left.centerXAnchor],
        [stack.centerYAnchor constraintEqualToAnchor:left.centerYAnchor],
        [stack.leadingAnchor constraintGreaterThanOrEqualToAnchor:left.leadingAnchor constant:16],
        [stack.trailingAnchor constraintLessThanOrEqualToAnchor:left.trailingAnchor constant:-16],
        [self.table.leadingAnchor constraintEqualToAnchor:left.trailingAnchor],
        [self.table.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [self.table.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],
        [self.table.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
    ]];
}
- (void)playPressed { self.played = YES; }
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tv {
    (void)tv;
    return (NSInteger)self.sections.count;
}
- (NSString *)tableView:(UITableView *)tv titleForHeaderInSection:(NSInteger)s {
    (void)tv;
    return self.sections[s][@"name"];
}
- (NSInteger)tableView:(UITableView *)tv numberOfRowsInSection:(NSInteger)s {
    (void)tv;
    return [self.sections[s][@"rows"] count];
}
- (UITableViewCell *)tableView:(UITableView *)tv cellForRowAtIndexPath:(NSIndexPath *)ip {
    UITableViewCell *cell = [tv dequeueReusableCellWithIdentifier:@"c"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"c"];
    NSMutableDictionary *sec = self.sections[ip.section];
    int kind = [sec[@"kind"] intValue];
    int idx = [sec[@"rows"][ip.row] intValue];
    if (kind == SEC_ACTIONS) {
        configure_action(cell, idx);
        return cell;
    }
    if (kind == SEC_SETTINGS) {
        configure(cell, idx, self);
        return cell;
    }
    cell.accessoryView = nil;
    cell.accessoryType = UITableViewCellAccessoryNone;
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    UIListContentConfiguration *cfg = [UIListContentConfiguration cellConfiguration];
    if (kind == SEC_MODS) {
        static ModEntry mods[MODS_MAX];
        int n = mods_installed(mods, MODS_MAX);
        cfg.text = idx < n ? @(mods[idx].name) : @"";
        cell.contentConfiguration = cfg;
        UISwitch *sw = [[UISwitch alloc] init];
        sw.on = idx < n && mods[idx].on;
        sw.tag = idx;
        [sw addTarget:self action:@selector(modToggled:) forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = sw;
    } else {
        int n = cheats_count();
        cfg.text = idx < n ? @(cheats_name(idx)) : @"";
        cfg.secondaryText = idx < n && cheats_master(idx) ? @(tr("Always on")) : @"";
        cell.contentConfiguration = cfg;
        if (idx < n && !cheats_master(idx)) {
            UISwitch *sw = [[UISwitch alloc] init];
            sw.on = cheats_on(idx);
            sw.tag = idx;
            [sw addTarget:self action:@selector(cheatToggled:) forControlEvents:UIControlEventValueChanged];
            cell.accessoryView = sw;
        }
    }
    return cell;
}
- (void)tableView:(UITableView *)tv didSelectRowAtIndexPath:(NSIndexPath *)ip {
    [tv deselectRowAtIndexPath:ip animated:YES];
    NSMutableDictionary *sec = self.sections[ip.section];
    int kind = [sec[@"kind"] intValue];
    int idx = [sec[@"rows"][ip.row] intValue];
    if (kind == SEC_ACTIONS) {
        if (idx == ACT_PASTE_CHEAT) {
            __weak __typeof__(self) weakSelf = self;
            paste_cheat_from_clipboard(self, ^{
                __strong __typeof__(weakSelf) strongSelf = weakSelf;
                if (!strongSelf) return;
                strongSelf.sections = sections_for(false);
                [strongSelf.table reloadData];
            });
        } else if (idx == ACT_RESET_DEFAULTS) {
            Config d = config_defaults();
            char err[192] = "";
            config_save(&d, err, sizeof err);
            self.sections = sections_for(false);
            [tv reloadData];
        }
        return;
    }
    if (kind != SEC_SETTINGS) return;
    const ConfigSetting *s = setting_of(ROWS[idx]);
    if (!s) return;
    if (s->kind == SET_CHOICE) present_choices(self, tv, ip, idx);
    else if (is_text(s) || is_typed_number(s)) present_text(self, tv, ip, idx);
}
- (void)toggled:(UISwitch *)sw { write_value(setting_of(ROWS[sw.tag]), sw.isOn ? 1 : 0); }
- (void)slid:(UISlider *)sl {
    const ConfigSetting *s = setting_of(ROWS[sl.tag]);
    if (s && s->kind == SET_INT) write_value(s, (int)(sl.value + 0.5f));
    else write_value(s, sl.value);
}
- (void)modToggled:(UISwitch *)sw {
    static ModEntry mods[MODS_MAX];
    int n = mods_installed(mods, MODS_MAX);
    if (sw.tag < n) mods[sw.tag].on = sw.isOn;
    char error[192] = "";
    if (!mods_save_order(mods, n, error, sizeof error)) fprintf(stderr, "[ios] %s\n", error);
}
- (void)cheatToggled:(UISwitch *)sw {
    int n = cheats_count();
    std::vector<char> on((size_t)n, 0);
    for (int i = 0; i < n; i++) on[(size_t)i] = (i == sw.tag ? sw.isOn : cheats_on(i)) ? 1 : 0;
    char error[192] = "";
    if (!cheats_set((const bool *)on.data(), n, error, sizeof error)) fprintf(stderr, "[ios] %s\n", error);
}
@end

// =====================================================================================================================
// Public
// =====================================================================================================================
static MHGUMenuVC *g_menu;
static bool g_menu_visible;

extern "C" void plat_menu_closed(void) {
    g_menu = nil;
    g_menu_visible = false;
}

extern "C" bool plat_menu_visible(void) { return g_menu_visible; }

extern "C" bool plat_show_launcher(void) {
    UIWindow *w = game_window();
    if (!w || !w.rootViewController) return false;
    MHGULauncherVC *vc = [[MHGULauncherVC alloc] init];
    vc.view.frame = w.bounds;
    vc.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [w.rootViewController addChildViewController:vc];
    [w.rootViewController.view addSubview:vc.view];
    [vc didMoveToParentViewController:w.rootViewController];
    while (!vc.played) {
        SDL_Event e;
        while (SDL_PollEvent(&e))
            if (e.type == SDL_EVENT_QUIT) return false;
        [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:0.02]];
    }
    [vc willMoveToParentViewController:nil];
    [vc.view removeFromSuperview];
    [vc removeFromParentViewController];
    return true;
}

extern "C" void plat_menu_show(void) {
    if (g_menu) return;
    UIWindow *w = game_window();
    if (!w || !w.rootViewController) return;
    MHGUMenuVC *vc = [[MHGUMenuVC alloc] init];
    vc.view.frame = w.bounds;
    vc.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [w.rootViewController addChildViewController:vc];
    [w.rootViewController.view addSubview:vc.view];
    [vc didMoveToParentViewController:w.rootViewController];
    g_menu = vc;
    g_menu_visible = true;
}
