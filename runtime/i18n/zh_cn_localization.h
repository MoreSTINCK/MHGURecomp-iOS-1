#pragma once
// ============================================================================
// zh_cn_localization.h
// Complete Simplified Chinese Localization Dictionary for MHGURecomp-iOS
// Covers all 136 settings, 38 touch controls, 8 HUD parts, launcher & overlays
// ============================================================================

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MhguI18nEntry {
    const char* en;
    const char* zh;
} MhguI18nEntry;

// 全量中英对照字典（覆盖 APK 原生 UI、编辑器、提示词与 iOS 整合模块）
static const MhguI18nEntry kMhguZhCnDict[] = {
    // === 顶层导航与分类 ===
    {"SETTINGS", "游戏设置"},
    {"Settings", "设置"},
    {"Sections", "功能分区"},
    {"Display", "显示设置"},
    {"Graphics & Audio", "画面与音频"},
    {"Controls", "操控与按键"},
    {"Controls and HUD", "虚拟按键与 HUD 布局"},
    {"Network", "联机网络"},
    {"Misc", "任务与杂项"},
    {"Menu Options", "系统与数据"},
    {"Mods", "模组管理 (Mods)"},
    {"Cheats", "金手指与插件"},
    {"Forge menu", "Forge 插件中心"},

    // === 38 个屏幕虚拟按键名称汉化 ===
    {"Attack  X / A", "攻击  X / A"},
    {"Attack  A / X", "攻击  A / X"},
    {"Heavy attack  A", "重攻击  A"},
    {"Light attack  X", "轻攻击  X"},
    {"Attack and guard", "角落攻击与防御弧带"},
    {"Attacks: pill", "攻击键样式：斜切胶囊"},
    {"Attacks: buttons", "攻击键样式：独立双键"},
    {"Attacks: corner", "攻击键样式：角落弧带"},
    {"Dodge  B", "翻滚回避  B"},
    {"Dodge (B)", "翻滚回避 (B)"},
    {"Guard  R", "防御 / 奔跑  R"},
    {"Guard (R)", "防御 / 奔跑 (R)"},
    {"Sheathe  Y", "收刀 / 纳刀  Y"},
    {"Sheathe (Y)", "收刀 / 纳刀 (Y)"},
    {"Special  ZR", "特殊攻击 / 狩技  ZR"},
    {"Target  ZL", "目标锁定  ZL"},
    {"Camera  L", "重置视角 / 物品栏  L"},
    {"Menu  +", "游戏菜单  +"},
    {"Game menu (+)", "游戏菜单 (+)"},
    {"Map  -", "地图 / 菜单  -"},
    {"Minus  -", "减号键  -"},
    {"Minus (-)", "减号键 (-)"},
    {"Map  L3", "缩放地图  L3"},
    {"Left stick click", "左摇杆按压 (L3)"},
    {"Left stick click (L3)", "左摇杆按压 (L3)"},
    {"Right stick click", "右摇杆按压 / 锁定 (R3)"},
    {"Right stick click (R3)", "右摇杆按压 (R3)"},
    {"Run", "奔跑键"},
    {"D-pad", "十字方向键"},
    {"Movement", "左摇杆 (移动)"},
    {"Movement stick", "移动摇杆"},
    {"Menu pad", "菜单光标方向盘"},
    {"Fire / shoot", "射击 / 蓄力 (按住拖动瞄准)"},
    {"Reload / melee", "装填弹药 / 弓近战"},
    {"Aim", "开镜 (点按) / 快瞄 (长按)"},
    {"Crouching fire / coating", "蹲射 (弩) / 装填瓶 (弓)"},
    {"Next ammo", "下一弹药 / 瓶"},
    {"Previous ammo", "上一弹药 / 瓶"},
    {"Ammo arrows", "弹药切换箭头"},
    {"Item arrows", "道具栏左右切换箭头"},
    {"ZL in menus", "菜单内显示 ZL 键"},
    {"ZR in menus", "菜单内显示 ZR 键"},
    {"Combined buttons", "自定义组合键"},
    {"Combined button", "组合键"},
    {"Combined button 1", "组合键 1"},
    {"Combined button 2", "组合键 2"},
    {"Combined button 3", "组合键 3"},
    {"Combined button 4", "组合键 4"},
    {"Combined button 5", "组合键 5"},
    {"Combined button 6", "组合键 6"},

    // === 8 大游戏内 HUD 部件汉化 ===
    {"Item bar", "底部道具栏"},
    {"Hunter Arts", "狩技面板"},
    {"Target camera", "目标锁定图标"},
    {"Clock", "任务时钟"},
    {"Health and stamina", "体力与耐力槽"},
    {"Sharpness and gauges", "斩味与武器计量表"},
    {"Party", "同行队友状态"},
    {"Map", "区域地图"},

    // === 虚拟按键与 HUD 布局编辑器汉化 ===
    {"Customize controls and HUD", "自定义虚拟按键与 HUD 布局"},
    {"Move and resize each button on the screen and each part of the game's HUD: drag it, pinch or use - / +.", "自由拖拽移动并双指缩放屏幕上的每个虚拟按键与游戏 HUD 部件。"},
    {"Tap a control or a part of the game's screen to pick it, drag it to move it", "点击任意虚拟按键或 HUD 框体即可选中，拖拽可自由移动位置"},
    {"Drag to move  -  pinch or use - / + for its size", "单指拖拽移动位置 · 双指捏合或点击 - / + 调整大小"},
    {"Shows while a menu of the game's is open - drag to move, pinch or use - / + for its size", "仅在打开游戏内菜单时浮现 · 支持拖拽移动与缩放大小"},
    {"Outside a hunt the frames show where each part goes", "非狩猎场景下将以虚线框预览各 HUD 部件在狩猎中的位置"},
    {"The item bar picks and uses items with the touch controls: it can't be hidden here", "触控模式下需通过底部道具栏点击使用和滑动切换道具，因此不可隐藏"},
    {"Hidden: Show brings it back", "已隐藏：点击「显示」可恢复该部件"},
    {"Hidden: no tap performs the Hunter Arts - the D-pad button or a controller does", "已隐藏：触屏点击将不再触发狩技，可通过十字键或外接手柄释放"},
    {"Hidden: no tap turns the lock-on on or off - the Right stick click button or a controller does", "已隐藏：触屏点击将不再切换锁定，可通过 R3 键或外接手柄切换"},
    {"Layout: melee", "当前预览：近战武器布局"},
    {"Layout: ranged", "当前预览：弓 / 弩远程布局"},
    {"HUD: touch", "当前编辑：触控模式 HUD"},
    {"HUD: controller", "当前编辑：手柄模式 HUD"},
    {"Defaults", "恢复默认"},
    {"Reset", "重置此项"},
    {"Hide", "隐藏"},
    {"Show", "显示"},
    {"Cancel", "取消"},
    {"Save", "保存布局"},

    // === 画面、音频与性能选项汉化 ===
    {"3D resolution", "3D 渲染分辨率比例"},
    {"Render resolution", "3D 渲染分辨率"},
    {"Screen resolution", "屏幕输出分辨率"},
    {"Aspect ratio", "画面宽高比"},
    {"Automatic aspect ratio", "自动适配屏幕宽高比"},
    {"HUD placement", "超宽屏 HUD 停靠位置"},
    {"HUD anchor", "超宽屏 HUD 锚点"},
    {"Fill the screen", "过场动画与菜单背景铺满全屏"},
    {"Frame rate limit", "帧率上限 (FPS)"},
    {"VSync", "垂直同步 (VSync)"},
    {"Shader prewarm", "启动时后台预编译着色器"},
    {"Low-end mode", "低配与省电优化模式"},
    {"Toaster", "极致省电模式 (Toaster)"},
    {"Shadows", "实时阴影渲染"},
    {"Grass", "地图高草与地面植被"},
    {"Bloom and depth of field", "环境泛光与远景景深 (Bloom & DoF)"},
    {"Draw distance", "村庄与集会所 NPC 绘制距离"},
    {"Smooth gradients", "16-bit 高精度色彩平滑渐变"},
    {"Show FPS and temperature", "显示 FPS、帧耗时、内存与设备温度"},
    {"Upscaler", "超分辨率重建算法"},
    {"FSR quality", "FSR 超分质量档位"},
    {"Native AA", "原生抗锯齿 (Native AA)"},
    {"Quality", "质量优先 (Quality)"},
    {"Balanced", "平衡模式 (Balanced)"},
    {"Performance", "性能优先 (Performance)"},
    {"Ultra performance", "极限性能 (Ultra Performance)"},
    {"Sharpness", "画面锐化强度"},
    {"Object motion", "动态物体抗涂抹掩码"},
    {"Reactive mask", "反应式抗鬼影掩码"},
    {"Animated surfaces", "动态水面/流光纹理保护"},
    {"Master volume", "游戏主音量"},
    {"Volume (%)", "主音量 (%)"},
    {"Reverb", "洞穴与室内混响音效 (关闭可降低 CPU 负载)"},
    {"Mute in background", "切入后台时静音"},
    {"Pause in the background", "切入后台时自动暂停游戏 (零耗电)"},

    // === 操控与体感反馈汉化 ===
    {"Touch controls", "屏幕虚拟按键显示模式"},
    {"Move the HUD for touch", "触控模式下自动重排 HUD (避开拇指遮挡)"},
    {"Buttons on the screen", "屏幕虚拟按键开关定制"},
    {"Layout for bows and bowguns", "手持弓/弩时自动切换远程专属布局"},
    {"Lock-on", "现代怪猎持续锁定追踪 (镜头跟随+远程瞄准躯干)"},
    {"Touch camera speed", "划屏旋转镜头灵敏度"},
    {"Touch controls opacity", "虚拟按键不透明度"},
    {"Vibrate on touch", "点击虚拟按键时触感短震动"},
    {"Game rumble on the phone", "游戏内咆哮/受击震动传递至机身马达"},
    {"Face buttons", "手柄按键读取方式"},
    {"Position", "按 Switch 物理位置 (右A 下B 上X 左Y)"},
    {"Label", "按手柄印字标签 (Xbox 布局)"},
    {"Map a controller", "自定义手柄按键映射向导"},

    // === 联机、任务、金手指与模组汉化 ===
    {"Search hosts", "局域网 / VPN 主机直连 IP"},
    {"Hub server", "远程集会所联机服务器"},
    {"Matchmaking key", "房间匹配密钥 (相同密钥可见)"},
    {"Check hub server", "检测联机服务器连通性与延迟"},
    {"Sync small monsters", "多人联机同步小型怪物位置 (实验性)"},
    {"Village quests at the Hub counter", "在集会所任务柜台接取村任务 (按 L/R 切换)"},
    {"Village quests in Hub", "集会所开放单人村任务多人共斗"},
    {"Village quest HP in Hub", "集会所村任务基础血量倍率"},
    {"Monster HP Scaling", "集会所大型怪物血量倍率 (1~4人)"},
    {"Bonus content", "自动注入全配信任务、特典猫与道具包"},
    {"Comer rapido siempre (beber x1.7, carne x1.8)", "快速饮药与进食 (喝药 1.7倍速 / 吃肉 1.8倍速)"},
    {"Beber muy rapido (x2.5)", "极速饮药与进食 (2.5倍速，立即回血)"},
    {"Add cheats", "导入金手指文件 (.txt)"},
    {"Add a mod", "导入模组包 (.zip / .7z)"},
    {"Add DLC", "导入 DLC 扩展包 (.dlcp)"},
    {"Import save", "导入外部存档 (自动备份原存档)"},
    {"Export save", "导出当前存档备份"},
    {"Share log", "导出并分享运行日志 (log.txt)"},
};

static inline const char* mhgu_tr(const char* en_text) {
    if (!en_text || !en_text[0]) return "";
    for (size_t i = 0; i < sizeof(kMhguZhCnDict) / sizeof(kMhguZhCnDict[0]); ++i) {
        if (strcmp(kMhguZhCnDict[i].en, en_text) == 0) {
            return kMhguZhCnDict[i].zh;
        }
    }
    return en_text;
}

#ifdef __cplusplus
}
#endif
