#import "NxLauncherViewController.h"
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#import <QuartzCore/QuartzCore.h>
#include "../../runtime/config/config_ios.h"
#include <cstdio>
#include <cstring>
#include <objc/message.h>

// ============================================================================
// Shared iOS 26 UIGlassEffect + Specular Refraction Rim Card Builder
// Automatically uses native iOS 26 `UIGlassEffect` when available at runtime,
// and falls back to UltraThinMaterialDark + specular CAGradientLayer on iOS 15-25.
// ============================================================================
UIView *NxCreateLiquidGlassCard(CGRect frame, CGFloat cornerRadius) {
    UIVisualEffect *effect = nil;
    Class glassCls = NSClassFromString(@"UIGlassEffect");
    if (glassCls && [glassCls respondsToSelector:@selector(effectWithStyle:)]) {
        effect = ((UIVisualEffect *(*)(id, SEL, NSInteger))objc_msgSend)(glassCls, @selector(effectWithStyle:), 0);
    }
    if (!effect) {
        effect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark];
    }

    UIVisualEffectView *glassView = [[UIVisualEffectView alloc] initWithEffect:effect];
    glassView.frame = frame;
    glassView.layer.cornerRadius = cornerRadius;
    glassView.layer.masksToBounds = YES;
    glassView.layer.borderWidth = 1.15;
    glassView.layer.borderColor = [UIColor colorWithRed:1.0 green:0.96 blue:0.86 alpha:0.32].CGColor;

    // Top-left to bottom-right liquid specular sheen
    CAGradientLayer *sheen = [CAGradientLayer layer];
    sheen.frame = CGRectMake(0, 0, 1400, 900);
    sheen.colors = @[
        (id)[UIColor colorWithWhite:1.0 alpha:0.16].CGColor,
        (id)[UIColor colorWithWhite:1.0 alpha:0.03].CGColor,
        (id)[UIColor colorWithRed:0.85 green:0.72 blue:0.42 alpha:0.08].CGColor
    ];
    sheen.startPoint = CGPointMake(0.0, 0.0);
    sheen.endPoint = CGPointMake(1.0, 1.0);
    [glassView.contentView.layer insertSublayer:sheen atIndex:0];

    return glassView;
}

@interface NxLauncherViewController () <UIDocumentPickerDelegate>
@property (nonatomic, copy) NSString *docsPath;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UILabel *statusLabel;
@end

@implementation NxLauncherViewController

- (instancetype)initWithDocumentsPath:(NSString *)docsPath {
    self = [super initWithNibName:nil bundle:nil];
    if (self) {
        _docsPath = [docsPath copy];
        self.modalPresentationStyle = UIModalPresentationFullScreen;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    port_config_load(nullptr);
    self.view.backgroundColor = [UIColor colorWithRed:0.05 green:0.06 blue:0.09 alpha:1.0];
    [self buildNxNativeLauncherUI];
}

- (void)buildNxNativeLauncherUI {
    for (UIView *sub in self.view.subviews) [sub removeFromSuperview];

    CGFloat W = self.view.bounds.size.width;
    CGFloat H = self.view.bounds.size.height;
    CGFloat pad = 20.0;

    // Outer nxnative Liquid Glass container card
    UIView *card = NxCreateLiquidGlassCard(CGRectMake(pad, pad, W - pad * 2.0, H - pad * 2.0), 24.0);
    card.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:card];

    UIView *content = [(UIVisualEffectView *)card contentView];

    // Header bar (nxnative style: Game Icon + Title + Subtitle + Launch Button)
    UILabel *titleLbl = [[UILabel alloc] initWithFrame:CGRectMake(24, 18, W - 320, 28)];
    titleLbl.text = @"怪物猎人GU · MHGURecomp (nxnative 启动器)";
    titleLbl.font = [UIFont boldSystemFontOfSize:20.0];
    titleLbl.textColor = [UIColor colorWithRed:0.98 green:0.93 blue:0.80 alpha:1.0];
    [content addSubview:titleLbl];

    self.statusLabel = [[UILabel alloc] initWithFrame:CGRectMake(24, 46, W - 320, 18)];
    self.statusLabel.text = @"仅展示需重启生效的底层引擎配置（实时热更新项请于游戏内点击左上角齿轮开启液态玻璃浮层）";
    self.statusLabel.font = [UIFont systemFontOfSize:12.0];
    self.statusLabel.textColor = [UIColor colorWithWhite:0.78 alpha:1.0];
    [content addSubview:self.statusLabel];

    UIButton *launchBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    launchBtn.frame = CGRectMake(card.bounds.size.width - 176, 18, 152, 44);
    launchBtn.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin;
    launchBtn.backgroundColor = [UIColor colorWithRed:0.84 green:0.64 blue:0.24 alpha:0.92];
    launchBtn.layer.cornerRadius = 14.0;
    [launchBtn setTitle:@"启动狩猎 ▶" forState:UIControlStateNormal];
    [launchBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    launchBtn.titleLabel.font = [UIFont boldSystemFontOfSize:16.0];
    [launchBtn addTarget:self action:@selector(handleLaunchTapped) forControlEvents:UIControlEventTouchUpInside];
    [content addSubview:launchBtn];

    // Scrollable settings list (mirrors nxnative dm/launcher.json rows)
    self.scrollView = [[UIScrollView alloc] initWithFrame:CGRectMake(18, 74, card.bounds.size.width - 36, card.bounds.size.height - 88)];
    self.scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [content addSubview:self.scrollView];

    CGFloat y = 6.0;
    CGFloat rowW = self.scrollView.bounds.size.width;
    __weak __typeof__(self) weakSelf = self;

    y = [self addSectionHeader:@"一、渲染与超宽屏引擎参数 (需重启生效)" atY:y width:rowW];

    y = [self addSegmentRow:@"内部分辨率 (RenderResolution)"
                      items:@[@"720p", @"1080p", @"1440p", @"4K"]
                   selected:g_port_config.render_resolution
                        atY:y width:rowW
                  onChanged:^(NSInteger idx) {
        g_port_config.render_resolution = (int32_t)idx;
        g_port_config.resolution = (int32_t)idx;
        port_config_save(nullptr);
    }];

    y = [self addSegmentRow:@"画面宽高比 (AspectRatio)"
                      items:@[@"16:9 标准", @"21:9 超宽", @"32:9 极宽", @"自适应全屏"]
                   selected:g_port_config.aspect_ratio
                        atY:y width:rowW
                  onChanged:^(NSInteger idx) {
        g_port_config.aspect_ratio = (int32_t)idx;
        port_config_save(nullptr);
    }];

    y = [self addSegmentRow:@"2D HUD 停靠基准 (UIAnchor)"
                      items:@[@"16:9 居中安全区", @"贴合屏幕物理边缘"]
                   selected:g_port_config.ui_anchor
                        atY:y width:rowW
                  onChanged:^(NSInteger idx) {
        g_port_config.ui_anchor = (int32_t)idx;
        port_config_save(nullptr);
    }];

    y = [self addSegmentRow:@"多重采样抗锯齿 (MSAA)"
                      items:@[@"关闭 (0x)", @"2x MSAA", @"4x MSAA"]
                   selected:(g_port_config.msaa == 4 ? 2 : (g_port_config.msaa == 2 ? 1 : 0))
                        atY:y width:rowW
                  onChanged:^(NSInteger idx) {
        g_port_config.msaa = (idx == 2) ? 4 : ((idx == 1) ? 2 : 0);
        port_config_save(nullptr);
    }];

    y = [self addSegmentRow:@"FSR 超分辨率模式 (FsrMode)"
                      items:@[@"关闭", @"FSR 1.0", @"FSR 3.1 质量", @"FSR 3.1 平衡", @"FSR 3.1 性能"]
                   selected:g_port_config.FsrMode
                        atY:y width:rowW
                  onChanged:^(NSInteger idx) {
        g_port_config.FsrMode = (int32_t)idx;
        port_config_save(nullptr);
    }];

    y = [self addToggleRow:@"超宽屏 2D 界面自适应修正 (UltrawideUI)"
                     value:g_port_config.UltrawideUI
                       atY:y width:rowW
                 onChanged:^(BOOL on) {
        g_port_config.UltrawideUI = on;
        port_config_save(nullptr);
    }];

    y = [self addToggleRow:@"低配设备省电与减负模式 (LowEndMode)"
                     value:g_port_config.LowEndMode
                       atY:y width:rowW
                 onChanged:^(BOOL on) {
        g_port_config.LowEndMode = on;
        port_config_save(nullptr);
    }];

    y = [self addToggleRow:@"拉伸画面填满全屏视口 (Stretch)"
                     value:g_port_config.stretch
                       atY:y width:rowW
                 onChanged:^(BOOL on) {
        g_port_config.stretch = on;
        port_config_save(nullptr);
    }];

    y = [self addSectionHeader:@"二、任务系统、DLC 特典与联机房间初始化 (需重启生效)" atY:y + 8.0 width:rowW];

    y = [self addToggleRow:@"解锁全部配信特典内容 (BonusContent)"
                     value:g_port_config.BonusContent
                       atY:y width:rowW
                 onChanged:^(BOOL on) {
        g_port_config.BonusContent = on;
        port_config_save(nullptr);
    }];

    y = [self addToggleRow:@"集会所柜台显示村任务 (VillageQuestsInHub)"
                     value:g_port_config.VillageQuestsInHub
                       atY:y width:rowW
                 onChanged:^(BOOL on) {
        g_port_config.VillageQuestsInHub = on;
        port_config_save(nullptr);
    }];

    y = [self addSegmentRow:@"集会所怪物血量缩放基准 (HubHP)"
                      items:@[@"原版 4人", @"单人 1P", @"双人 2P", @"三人 3P", @"按人数动态"]
                   selected:g_port_config.HubHP
                        atY:y width:rowW
                  onChanged:^(NSInteger idx) {
        g_port_config.HubHP = (int32_t)idx;
        port_config_save(nullptr);
    }];

    y = [self addToggleRow:@"联机同步小型怪物位置 (SyncSmallMonsters)"
                     value:g_port_config.SyncSmallMonsters
                       atY:y width:rowW
                 onChanged:^(BOOL on) {
        g_port_config.SyncSmallMonsters = on;
        port_config_save(nullptr);
    }];

    y = [self addSectionHeader:@"三、nxnative 金手指粘贴、数据包导入与默认重置" atY:y + 8.0 width:rowW];

    // Action buttons row (1:1 with seedds/nxnative Launcher.m: Paste cheat codes & Reset to tested defaults)
    UIView *actionRow = [[UIView alloc] initWithFrame:CGRectMake(0, y, rowW, 46)];
    CGFloat btnW = (rowW - 24.0) / 3.0;

    UIButton *pasteCheatBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    pasteCheatBtn.frame = CGRectMake(0, 2, btnW, 40);
    pasteCheatBtn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
    pasteCheatBtn.layer.cornerRadius = 10.0;
    [pasteCheatBtn setTitle:@"粘贴金手指代码 (Paste Cheats)" forState:UIControlStateNormal];
    [pasteCheatBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    pasteCheatBtn.titleLabel.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    [pasteCheatBtn addTarget:self action:@selector(handlePasteCheatCodes) forControlEvents:UIControlEventTouchUpInside];
    [actionRow addSubview:pasteCheatBtn];

    UIButton *importBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    importBtn.frame = CGRectMake(btnW + 12.0, 2, btnW, 40);
    importBtn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12];
    importBtn.layer.cornerRadius = 10.0;
    [importBtn setTitle:@"导入数据包 / Mod / 存档" forState:UIControlStateNormal];
    [importBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    importBtn.titleLabel.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    [importBtn addTarget:self action:@selector(handleImportArchive) forControlEvents:UIControlEventTouchUpInside];
    [actionRow addSubview:importBtn];

    UIButton *resetBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    resetBtn.frame = CGRectMake((btnW + 12.0) * 2.0, 2, btnW, 40);
    resetBtn.backgroundColor = [UIColor colorWithRed:0.75 green:0.26 blue:0.24 alpha:0.35];
    resetBtn.layer.cornerRadius = 10.0;
    [resetBtn setTitle:@"恢复测试默认值 (Reset Defaults)" forState:UIControlStateNormal];
    [resetBtn setTitleColor:[UIColor colorWithRed:1.0 green:0.82 blue:0.80 alpha:1.0] forState:UIControlStateNormal];
    resetBtn.titleLabel.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    [resetBtn addTarget:self action:@selector(handleResetDefaults) forControlEvents:UIControlEventTouchUpInside];
    [actionRow addSubview:resetBtn];

    [self.scrollView addSubview:actionRow];
    y += 56.0;
    (void)weakSelf;

    self.scrollView.contentSize = CGSizeMake(rowW, y + 20.0);
}

- (CGFloat)addSectionHeader:(NSString *)title atY:(CGFloat)y width:(CGFloat)w {
    UILabel *lbl = [[UILabel alloc] initWithFrame:CGRectMake(4, y, w - 8, 26)];
    lbl.text = title;
    lbl.font = [UIFont boldSystemFontOfSize:14.0];
    lbl.textColor = [UIColor colorWithRed:0.95 green:0.78 blue:0.42 alpha:1.0];
    [self.scrollView addSubview:lbl];
    return y + 30.0;
}

- (CGFloat)addToggleRow:(NSString *)title value:(BOOL)val atY:(CGFloat)y width:(CGFloat)w onChanged:(void (^)(BOOL))cb {
    UIView *row = [[UIView alloc] initWithFrame:CGRectMake(0, y, w, 40)];
    row.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.05];
    row.layer.cornerRadius = 10.0;

    UILabel *lbl = [[UILabel alloc] initWithFrame:CGRectMake(14, 0, w - 90, 40)];
    lbl.text = title;
    lbl.font = [UIFont systemFontOfSize:13.5];
    lbl.textColor = [UIColor whiteColor];
    [row addSubview:lbl];

    UISwitch *sw = [[UISwitch alloc] initWithFrame:CGRectMake(w - 68, 4.5, 51, 31)];
    sw.on = val;
    sw.onTintColor = [UIColor colorWithRed:0.86 green:0.66 blue:0.24 alpha:1.0];
    [sw addAction:[UIAction actionWithHandler:^(__kindof UIAction * _Nonnull action) {
        UISwitch *s = (UISwitch *)action.sender;
        if (cb) cb(s.isOn);
    }] forControlEvents:UIControlEventValueChanged];
    [row addSubview:sw];

    [self.scrollView addSubview:row];
    return y + 46.0;
}

- (CGFloat)addSegmentRow:(NSString *)title items:(NSArray<NSString *> *)items selected:(NSInteger)sel atY:(CGFloat)y width:(CGFloat)w onChanged:(void (^)(NSInteger))cb {
    UIView *row = [[UIView alloc] initWithFrame:CGRectMake(0, y, w, 44)];
    row.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.05];
    row.layer.cornerRadius = 10.0;

    UILabel *lbl = [[UILabel alloc] initWithFrame:CGRectMake(14, 0, w * 0.42, 44)];
    lbl.text = title;
    lbl.font = [UIFont systemFontOfSize:13.5];
    lbl.textColor = [UIColor whiteColor];
    [row addSubview:lbl];

    UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:items];
    seg.frame = CGRectMake(w * 0.44, 6, w * 0.54, 32);
    seg.selectedSegmentIndex = (sel >= 0 && sel < (NSInteger)items.count) ? sel : 0;
    [seg addAction:[UIAction actionWithHandler:^(__kindof UIAction * _Nonnull action) {
        UISegmentedControl *sc = (UISegmentedControl *)action.sender;
        if (cb) cb(sc.selectedSegmentIndex);
    }] forControlEvents:UIControlEventValueChanged];
    [row addSubview:seg];

    [self.scrollView addSubview:row];
    return y + 50.0;
}

// 1:1 with seedds/nxnative Launcher.m: writes clipboard cheats to Documents/cheats/FB08F1D20FD1204F.txt
- (void)handlePasteCheatCodes {
    NSString *clip = [UIPasteboard generalPasteboard].string;
    if (!clip || clip.length == 0) {
        self.statusLabel.text = @"剪贴板为空：请先复制 [金手指名称] 与 8位十六进制金手指代码";
        return;
    }
    NSString *cheatsDir = [self.docsPath stringByAppendingPathComponent:@"cheats"];
    [[NSFileManager defaultManager] createDirectoryAtPath:cheatsDir withIntermediateDirectories:YES attributes:nil error:nil];
    NSString *cheatFile = [cheatsDir stringByAppendingPathComponent:@"FB08F1D20FD1204F.txt"];
    NSError *err = nil;
    [clip writeToFile:cheatFile atomically:YES encoding:NSUTF8StringEncoding error:&err];
    if (!err) {
        self.statusLabel.text = [NSString stringWithFormat:@"已写入金手指文件：%@", cheatFile.lastPathComponent];
    }
}

- (void)handleImportArchive {
    NSArray<UTType *> *types = @[UTTypeArchive, UTTypeData, UTTypeFolder];
    UIDocumentPickerViewController *picker = [[UIDocumentPickerViewController alloc] initForOpeningContentTypes:types asCopy:YES];
    picker.delegate = self;
    [self presentViewController:picker animated:YES completion:nil];
}

- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    (void)controller;
    NSURL *url = urls.firstObject;
    if (!url) return;
    NSString *dest = [self.docsPath stringByAppendingPathComponent:url.lastPathComponent];
    [[NSFileManager defaultManager] removeItemAtPath:dest error:nil];
    [[NSFileManager defaultManager] copyItemAtURL:url toURL:[NSURL fileURLWithPath:dest] error:nil];
    self.statusLabel.text = [NSString stringWithFormat:@"已导入文件至 Documents/%@", url.lastPathComponent];
}

- (void)handleResetDefaults {
    port_config_defaults();
    port_config_save(nullptr);
    [self buildNxNativeLauncherUI];
    self.statusLabel.text = @"已恢复经测试的默认配置并同步至 mhgurecomp.ini";
}

- (void)handleLaunchTapped {
    port_config_save(nullptr);
    if (self.onLaunchGame) {
        self.onLaunchGame();
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
