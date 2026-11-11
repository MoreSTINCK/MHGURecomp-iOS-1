#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_742f7c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af6e4(Cpu *c);
void f_9bb638(Cpu *c);
void f_9c5858(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a855c0(Cpu *c);
void f_a85688(Cpu *c);
void f_a857b4(Cpu *c);
void f_a86bb4(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87958(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a87a24(Cpu *c);
void f_a93ca8(Cpu *c);
void f_b0bf78(Cpu *c);
void f_b0c170(Cpu *c);
void f_b0c2d0(Cpu *c);
void f_b0c508(Cpu *c);
void f_b0dcdc(Cpu *c);
void f_b0e2f4(Cpu *c);
void f_b0e58c(Cpu *c);
void f_b0eac4(Cpu *c);
void f_b0f8d8(Cpu *c);
void f_b4cf88(Cpu *c);
void f_bdcc28(Cpu *c);
void f_d42788(Cpu *c);
void f_d437b4(Cpu *c);
void f_d43e64(Cpu *c);
void f_d43f68(Cpu *c);
void f_d444d0(Cpu *c);
void f_d9ee20(Cpu *c);
void f_d9ef2c(Cpu *c);
void f_d9f01c(Cpu *c);
void f_d9f190(Cpu *c);
void f_d9f23c(Cpu *c);
void f_dd3f10(Cpu *c);
void f_dd4aa0(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_b09120(Cpu *restrict c) {
    FN_ENTER(0xb09120u);
L_b09120:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2820u;
    c->r[1] = 0x62a0u;
    c->r[8] = 0x105cu;
    c->r[2] = 0x68d0u;
    c->r[6] = 0x3f800000u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2824u;
    c->r[1] = 0x62a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2828u;
    c->r[1] = 0x62a8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x282cu;
    c->r[1] = 0x62acu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2830u;
    c->r[1] = 0x62b0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2834u;
    c->r[1] = 0x62b4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2838u;
    c->r[1] = 0x62b8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x283cu;
    c->r[1] = 0x62bcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2840u;
    c->r[1] = 0x62c0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2844u;
    c->r[1] = 0x62c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2848u;
    c->r[1] = 0x62c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x284cu;
    c->r[1] = 0x62ccu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2850u;
    c->r[1] = 0x62d0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2854u;
    c->r[1] = 0x62d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2858u;
    c->r[1] = 0x62d8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x285cu;
    c->r[1] = 0x62dcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1020u;
    c->r[1] = 0x6350u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1024u;
    c->r[1] = 0x6354u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1028u;
    c->r[1] = 0x6358u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x102cu;
    c->r[1] = 0x635cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1030u;
    c->r[1] = 0x6360u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1034u;
    c->r[1] = 0x6364u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1038u;
    c->r[1] = 0x6368u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x103cu;
    c->r[1] = 0x636cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1040u;
    c->r[1] = 0x6370u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1044u;
    c->r[1] = 0x6374u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1048u;
    c->r[1] = 0x6378u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x104cu;
    c->r[1] = 0x637cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1050u;
    c->r[1] = 0x6380u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    c->r[1] = 0x6384u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1058u;
    c->r[1] = 0x6388u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x638cu;
    { uint32_t ea = c->r[4] + c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2620u;
    c->r[1] = 0x6400u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2624u;
    c->r[1] = 0x6404u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2628u;
    c->r[1] = 0x6408u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x262cu;
    c->r[1] = 0x640cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2630u;
    c->r[1] = 0x6410u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2634u;
    c->r[1] = 0x6414u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2638u;
    c->r[1] = 0x6418u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x263cu;
    c->r[1] = 0x641cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2640u;
    c->r[1] = 0x6420u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2644u;
    c->r[1] = 0x6424u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2648u;
    c->r[1] = 0x6428u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x264cu;
    c->r[1] = 0x642cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2650u;
    c->r[1] = 0x6430u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2654u;
    c->r[1] = 0x6434u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2658u;
    c->r[1] = 0x6438u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x265cu;
    c->r[1] = 0x643cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2720u;
    c->r[1] = 0x64b0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2724u;
    c->r[1] = 0x64b4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    c->r[1] = 0x64b8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x272cu;
    c->r[1] = 0x64bcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2730u;
    c->r[1] = 0x64c0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2734u;
    c->r[1] = 0x64c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2738u;
    c->r[1] = 0x64c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x273cu;
    c->r[1] = 0x64ccu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2740u;
    c->r[1] = 0x64d0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2744u;
    c->r[1] = 0x64d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2748u;
    c->r[1] = 0x64d8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x274cu;
    c->r[1] = 0x64dcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2750u;
    c->r[1] = 0x64e0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2754u;
    c->r[1] = 0x64e4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2758u;
    c->r[1] = 0x64e8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x275cu;
    c->r[1] = 0x64ecu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f20u;
    c->r[1] = 0x6b90u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f24u;
    c->r[1] = 0x6b94u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f28u;
    c->r[1] = 0x6b98u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f2cu;
    c->r[1] = 0x6b9cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f30u;
    c->r[1] = 0x6ba0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f34u;
    c->r[1] = 0x6ba4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f38u;
    c->r[1] = 0x6ba8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f3cu;
    c->r[1] = 0x6bacu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f40u;
    c->r[1] = 0x6bb0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f44u;
    c->r[1] = 0x6bb4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f48u;
    c->r[1] = 0x6bb8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f4cu;
    c->r[1] = 0x6bbcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f50u;
    c->r[1] = 0x6bc0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f54u;
    c->r[1] = 0x6bc4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f58u;
    c->r[1] = 0x6bc8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f5cu;
    c->r[1] = 0x6bccu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2020u;
    c->r[1] = 0x6c40u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2024u;
    c->r[1] = 0x6c44u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2028u;
    c->r[1] = 0x6c48u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x202cu;
    c->r[1] = 0x6c4cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2030u;
    c->r[1] = 0x6c50u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2034u;
    c->r[1] = 0x6c54u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2038u;
    c->r[1] = 0x6c58u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x203cu;
    c->r[1] = 0x6c5cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2040u;
    c->r[1] = 0x6c60u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2044u;
    c->r[1] = 0x6c64u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2048u;
    c->r[1] = 0x6c68u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x204cu;
    c->r[1] = 0x6c6cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2050u;
    c->r[1] = 0x6c70u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2054u;
    c->r[1] = 0x6c74u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2058u;
    c->r[1] = 0x6c78u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x205cu;
    c->r[1] = 0x6c7cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2120u;
    c->r[1] = 0x6560u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2124u;
    c->r[1] = 0x6564u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2128u;
    c->r[1] = 0x6568u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x212cu;
    c->r[1] = 0x656cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2130u;
    c->r[1] = 0x6570u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2134u;
    c->r[1] = 0x6574u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2138u;
    c->r[1] = 0x6578u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x213cu;
    c->r[1] = 0x657cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2140u;
    c->r[1] = 0x6580u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2144u;
    c->r[1] = 0x6584u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2148u;
    c->r[1] = 0x6588u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x214cu;
    c->r[1] = 0x658cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2150u;
    c->r[1] = 0x6590u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2154u;
    c->r[1] = 0x6594u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2158u;
    c->r[1] = 0x6598u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x215cu;
    c->r[1] = 0x659cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2220u;
    c->r[1] = 0x6610u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2224u;
    c->r[1] = 0x6614u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2228u;
    c->r[1] = 0x6618u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x222cu;
    c->r[1] = 0x661cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2230u;
    c->r[1] = 0x6620u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2234u;
    c->r[1] = 0x6624u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2238u;
    c->r[1] = 0x6628u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x223cu;
    c->r[1] = 0x662cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2240u;
    c->r[1] = 0x6630u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2244u;
    c->r[1] = 0x6634u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2248u;
    c->r[1] = 0x6638u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x224cu;
    c->r[1] = 0x663cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2250u;
    c->r[1] = 0x6640u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2254u;
    c->r[1] = 0x6644u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2258u;
    c->r[1] = 0x6648u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x225cu;
    c->r[1] = 0x664cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2320u;
    c->r[1] = 0x66c0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2324u;
    c->r[1] = 0x66c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2328u;
    c->r[1] = 0x66c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x232cu;
    c->r[1] = 0x66ccu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2330u;
    c->r[1] = 0x66d0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2334u;
    c->r[1] = 0x66d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2338u;
    c->r[1] = 0x66d8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x233cu;
    c->r[1] = 0x66dcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2340u;
    c->r[1] = 0x66e0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2344u;
    c->r[1] = 0x66e4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2348u;
    c->r[1] = 0x66e8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x234cu;
    c->r[1] = 0x66ecu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2350u;
    c->r[1] = 0x66f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2354u;
    c->r[1] = 0x66f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2358u;
    c->r[1] = 0x66f8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x235cu;
    c->r[1] = 0x66fcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2420u;
    c->r[1] = 0x6770u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2424u;
    c->r[1] = 0x6774u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2428u;
    c->r[1] = 0x6778u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x242cu;
    c->r[1] = 0x677cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2430u;
    c->r[1] = 0x6780u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2434u;
    c->r[1] = 0x6784u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2438u;
    c->r[1] = 0x6788u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x243cu;
    c->r[1] = 0x678cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2440u;
    c->r[1] = 0x6790u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2444u;
    c->r[1] = 0x6794u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2448u;
    c->r[1] = 0x6798u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x244cu;
    c->r[1] = 0x679cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2450u;
    c->r[1] = 0x67a0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2454u;
    c->r[1] = 0x67a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2458u;
    c->r[1] = 0x67a8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x245cu;
    c->r[1] = 0x67acu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2520u;
    c->r[1] = 0x6820u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2524u;
    c->r[1] = 0x6824u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2528u;
    c->r[1] = 0x6828u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x252cu;
    c->r[1] = 0x682cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2530u;
    c->r[1] = 0x6830u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2534u;
    c->r[1] = 0x6834u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2538u;
    c->r[1] = 0x6838u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x253cu;
    c->r[1] = 0x683cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2540u;
    c->r[1] = 0x6840u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2544u;
    c->r[1] = 0x6844u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2548u;
    c->r[1] = 0x6848u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x254cu;
    c->r[1] = 0x684cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2550u;
    c->r[1] = 0x6850u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2554u;
    c->r[1] = 0x6854u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2558u;
    c->r[1] = 0x6858u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x255cu;
    c->r[1] = 0x685cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2b31u;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x3891u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x45f1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x5351u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1320u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1324u;
    c->r[2] = 0x68d4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1328u;
    c->r[2] = 0x68d8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x132cu;
    c->r[2] = 0x68dcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1330u;
    c->r[2] = 0x68e0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1334u;
    c->r[2] = 0x68e4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1338u;
    c->r[2] = 0x68e8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x133cu;
    c->r[2] = 0x68ecu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1340u;
    c->r[2] = 0x68f0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1344u;
    c->r[2] = 0x68f4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1348u;
    c->r[2] = 0x68f8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x134cu;
    c->r[2] = 0x68fcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1350u;
    c->r[2] = 0x6900u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1354u;
    c->r[2] = 0x6904u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1358u;
    c->r[2] = 0x6908u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x135cu;
    c->r[2] = 0x690cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x13bdu;
    c->r[2] = 0x68c3u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x12d4u;
    c->r[2] = 0x68bcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x68b8u;
    c->r[2] = 0x6980u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x68c1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1620u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1624u;
    c->r[2] = 0x6984u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1628u;
    c->r[2] = 0x6988u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x162cu;
    c->r[2] = 0x698cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1630u;
    c->r[2] = 0x6990u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1634u;
    c->r[2] = 0x6994u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1638u;
    c->r[2] = 0x6998u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x163cu;
    c->r[2] = 0x699cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1640u;
    c->r[2] = 0x69a0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1644u;
    c->r[2] = 0x69a4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1648u;
    c->r[2] = 0x69a8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x164cu;
    c->r[2] = 0x69acu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1650u;
    c->r[2] = 0x69b0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1654u;
    c->r[2] = 0x69b4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1658u;
    c->r[2] = 0x69b8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x165cu;
    c->r[2] = 0x69bcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x16bdu;
    c->r[2] = 0x6973u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x15d4u;
    c->r[2] = 0x696cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6968u;
    c->r[2] = 0x6a30u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x6971u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1920u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1924u;
    c->r[2] = 0x6a34u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1928u;
    c->r[2] = 0x6a38u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x192cu;
    c->r[2] = 0x6a3cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1930u;
    c->r[2] = 0x6a40u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1934u;
    c->r[2] = 0x6a44u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1938u;
    c->r[2] = 0x6a48u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x193cu;
    c->r[2] = 0x6a4cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1940u;
    c->r[2] = 0x6a50u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1944u;
    c->r[2] = 0x6a54u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1948u;
    c->r[2] = 0x6a58u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x194cu;
    c->r[2] = 0x6a5cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1950u;
    c->r[2] = 0x6a60u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1954u;
    c->r[2] = 0x6a64u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1958u;
    c->r[2] = 0x6a68u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x195cu;
    c->r[2] = 0x6a6cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x19bdu;
    c->r[2] = 0x6a23u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x18d4u;
    c->r[2] = 0x6a1cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6a18u;
    c->r[2] = 0x6ae0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x6a21u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1c20u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c24u;
    c->r[2] = 0x6ae4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c28u;
    c->r[2] = 0x6ae8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c2cu;
    c->r[2] = 0x6aecu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c30u;
    c->r[2] = 0x6af0u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c34u;
    c->r[2] = 0x6af4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c38u;
    c->r[2] = 0x6af8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c3cu;
    c->r[2] = 0x6afcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c40u;
    c->r[2] = 0x6b00u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c44u;
    c->r[2] = 0x6b04u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c48u;
    c->r[2] = 0x6b08u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c4cu;
    c->r[2] = 0x6b0cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c50u;
    c->r[2] = 0x6b10u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c54u;
    c->r[2] = 0x6b14u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c58u;
    c->r[2] = 0x6b18u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c5cu;
    c->r[2] = 0x6b1cu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1cbdu;
    c->r[2] = 0x6ad3u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[1] = 0x1bd4u;
    c->r[2] = 0x6accu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6ac8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = 0x6ad1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x29bcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_b0a190; }
    c->r[0] = 0x2950u;
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2954u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2958u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x295cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6c80u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0a174u; f_bdcc28(c);
    c->r[0] = 0x6d44u;
    c->r[1] = 0x6cdcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6cd8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x1u;
L_b0a190:;
    c->r[1] = 0x6ce1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xb0a1a8u; rt_dispatch(c);
    c->r[0] = 0xd66f48u;
    c->r[12] = 0x1020u;
    c->r[14] = 0x1024u;
    c->r[10] = 0x1028u;
    c->r[5] = 0x102cu;
    c->r[9] = 0x1030u;
    c->r[0] = 0xb0a1c8u + c->r[0];
L_b0a1c4:;
    c->r[1] = c->r[7];
    c->r[7] = 0x1au;
    (void)f_subs(c, c->r[1], 0x19u);
    if (COND_EQ) { goto L_b0a1c4; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_b0a2a8; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[3] + (c->r[2] << 5);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b0a2a8; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[4] + (c->r[1] << 8);
    c->r[6] = 0x1034u;
    { uint32_t ea = c->r[3] + c->r[12]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[14]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[10]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[9]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1038u;
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x103cu;
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1040u;
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1044u;
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1048u;
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x104cu;
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1050u;
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1054u;
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x1058u;
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + c->r[8]; ST32(ea, c->r[2]); }
L_b0a2a8:;
    c->r[7] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[7], 0x1bu);
    if (COND_NE) { goto L_b0a1c4; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0a2c0(Cpu *restrict c) {
    FN_ENTER(0xb0a2c0u);
L_b0a2c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x60u;
    c->r[5] = c->r[0] + (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10bfu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0a688; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x6d54u;
    c->r[0] = 0x10c0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x498u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 5);
    c->v.s[24] = LD32(c->r[0] + 20u);
    c->v.s[28] = LD32(c->r[0] + 16u);
    c->v.s[20] = LD32(c->r[0] + 24u);
    c->v.s[16] = LD32(c->r[0] + 28u);
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[30] = LD32(c->r[0] + 32u);
    c->v.s[26] = LD32(c->r[0] + 36u);
    c->v.s[22] = LD32(c->r[0] + 40u);
    c->v.s[18] = LD32(c->r[0] + 44u);
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->v.s[23] = LD32(c->r[0] + 48u);
    c->v.s[21] = LD32(c->r[0] + 52u);
    c->v.s[19] = LD32(c->r[0] + 56u);
    c->v.s[17] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[4] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0a380; }
    c->r[14] = 0xb0a37cu; f_15efddc(c);
    c->v.s[4] = c->v.s[0];
L_b0a380:;
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.s[25] = 0x3f800000u;
    c->v.f[27] = c->v.f[25] / c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0a3b0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb0a3b0u; f_15efddc(c);
L_b0a3b0:;
    c->v.f[0] = c->v.f[25] / c->v.f[0];
    c->v.f[2] = c->v.f[21] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[16] = c->v.f[16] * c->v.f[27];
    c->v.f[20] = c->v.f[20] * c->v.f[27];
    c->v.f[24] = c->v.f[24] * c->v.f[27];
    c->v.f[28] = c->v.f[28] * c->v.f[27];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0a3fc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb0a3fcu; f_15efddc(c);
L_b0a3fc:;
    c->v.f[6] = c->v.f[25] / c->v.f[0];
    c->r[0] = 0x1060u;
    c->r[1] = 0x1088u;
    c->r[12] = c->r[4];
    c->r[0] = c->r[5] + c->r[0];
    c->r[1] = c->r[5] + c->r[1];
    ST32(c->r[0], c->v.s[28]);
    c->r[0] = 0x1064u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[24]);
    c->r[0] = 0x1068u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[20]);
    c->r[0] = 0x106cu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[16]);
    c->r[0] = 0x1070u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[30]);
    c->r[0] = 0x1074u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[26]);
    c->r[0] = 0x1078u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[22]);
    c->r[0] = 0x107cu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[18]);
    c->r[0] = c->r[5] + 0x1080u;
    c->v.f[0] = c->v.f[23] * c->v.f[6];
    c->v.f[2] = c->v.f[21] * c->v.f[6];
    c->v.f[4] = c->v.f[19] * c->v.f[6];
    c->v.f[6] = c->v.f[17] * c->v.f[6];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1084u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x108cu;
    ST32(c->r[1], c->v.s[4]);
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[6]);
    c->r[0] = 0x1090u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1094u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x1098u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x109cu;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = 0x1020u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[28]);
    c->r[0] = 0x104cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[11] = c->r[5] + c->r[0];
    c->r[0] = 0x1048u;
    c->r[7] = c->r[5] + c->r[0];
    c->r[0] = 0x1044u;
    c->r[2] = c->r[5] + c->r[0];
    c->r[0] = 0x103cu;
    c->r[14] = c->r[5] + c->r[0];
    c->r[0] = 0x1038u;
    c->r[3] = c->r[5] + c->r[0];
    c->r[0] = 0x1034u;
    c->r[9] = c->r[5] + c->r[0];
    c->r[0] = 0x1030u;
    c->r[10] = c->r[5] + c->r[0];
    c->r[0] = 0x102cu;
    c->r[4] = c->r[5] + c->r[0];
    c->r[0] = 0x1028u;
    c->r[1] = c->r[5] + c->r[0];
    c->r[0] = 0x1024u;
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[24]);
    c->r[0] = c->r[5] + 0x1040u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    ST32(c->r[1], c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    ST32(c->r[4], c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    ST32(c->r[10], c->v.s[30]);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    ST32(c->r[9], c->v.s[26]);
    ST32(c->r[3], c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[14]); }
    ST32(c->r[14], c->v.s[18]);
    c->r[4] = c->r[12];
    c->r[1] = c->r[5];
    c->r[9] = c->r[3];
    c->r[3] = c->v.s[28];
    c->r[12] = c->r[7];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    ST32(c->r[2], c->v.s[2]);
    ST32(c->r[7], c->v.s[4]);
    c->r[0] = 0x1050u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[11], c->v.s[6]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[4]); c->r[1] = ea; }
    c->r[0] = 0x1054u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = 0x1058u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x105cu;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[8]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b0a81c; }
    c->r[0] = c->r[5] + 0xfe0u;
    ST32(c->r[0], c->v.s[28]);
    c->r[0] = 0xfe4u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[24]);
    c->r[0] = 0xfe8u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[20]);
    c->r[0] = 0xfecu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[16]);
    c->r[0] = c->r[5] + 0xff0u;
    ST32(c->r[0], c->v.s[30]);
    c->r[0] = 0xff4u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[26]);
    c->r[0] = 0xff8u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[22]);
    c->r[0] = 0xffcu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[18]);
    c->r[0] = c->r[5] + 0x1000u;
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x1004u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x1008u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[4]);
    c->r[0] = 0x100cu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[6]);
    c->r[0] = 0x1010u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1014u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1018u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x101cu;
    c->r[0] = c->r[5] + c->r[0];
    goto L_b0a814;
L_b0a688:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xfd0u;
    c->r[6] = c->r[0] + (c->r[1] << 8);
    c->r[1] = c->r[0] + (c->r[2] << 8);
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = c->r[1];
    c->r[8] = c->r[1];
    c->r[12] = c->r[1];
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[6] + 0x90u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[6] + 0x94u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x98u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xa0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xa4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xacu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[12] + 0x78u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[11] = v; }
    { uint32_t ea = c->r[6] + 0xb8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xbcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] + 0x80u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[6] + 0xc0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[3] + 0x84u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[6] + 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x88u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xccu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x84u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x88u; ST32(ea, c->r[0]); }
    c->r[9] = c->r[8];
    c->r[0] = c->r[6] + 0x8cu;
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b0a814:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_b0a81c:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x10c4u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x494u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] + (c->r[0] << 5);
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0a8fc(Cpu *restrict c) {
    FN_ENTER(0xb0a8fcu);
L_b0a8fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0a990; }
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0aa58; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_b0aa58; }
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_b0aa60; }
    { uint32_t ea = c->r[4] + 0xeeu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0xe4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0xecu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0abbc; }
    c->v.s[25] = LD32(c->r[0] + 176u);
    c->v.s[17] = LD32(c->r[0] + 180u);
    c->v.s[19] = LD32(c->r[0] + 184u);
    c->v.s[23] = LD32(c->r[0] + 188u);
    c->v.s[24] = LD32(c->r[0] + 192u);
    c->v.s[26] = LD32(c->r[0] + 196u);
    c->v.s[28] = LD32(c->r[0] + 200u);
    c->v.s[30] = LD32(c->r[0] + 204u);
    c->v.s[22] = LD32(c->r[0] + 208u);
    c->v.s[20] = LD32(c->r[0] + 212u);
    c->v.s[18] = LD32(c->r[0] + 216u);
    c->v.s[16] = LD32(c->r[0] + 220u);
    goto L_b0aad4;
L_b0a990:;
    c->v.s[2] = LD32(c->r[4] + 208u);
    c->v.s[6] = LD32(c->r[4] + 212u);
    c->v.s[8] = LD32(c->r[4] + 108u);
    c->v.s[4] = LD32(c->r[4] + 92u);
    c->v.s[0] = LD32(c->r[4] + 216u);
    c->v.s[10] = LD32(c->r[4] + 124u);
    c->v.s[12] = LD32(c->r[4] + 140u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[4] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b0a9d4; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[4] = c->v.f[8] / c->v.f[4];
    goto L_b0a9d8;
L_b0a9d4:;
    c->v.s[4] = 0x0u;
L_b0a9d8:;
    c->v.s[14] = LD32(c->r[4] + 100u);
    c->v.s[3] = LD32(c->r[4] + 96u);
    c->v.s[8] = LD32(c->r[4] + 84u);
    c->v.s[10] = LD32(c->r[4] + 88u);
    c->v.s[12] = LD32(c->r[4] + 80u);
    c->v.s[1] = LD32(c->r[4] + 104u);
    c->v.s[5] = LD32(c->r[4] + 116u);
    c->v.s[7] = LD32(c->r[4] + 120u);
    c->v.s[9] = LD32(c->r[4] + 112u);
    c->v.s[11] = LD32(c->r[4] + 136u);
    c->r[0] = 0x3f800000u;
    c->v.f[3] = c->v.f[6] * c->v.f[3];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[12] = LD32(c->r[4] + 128u);
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[1] = LD32(c->r[4] + 132u);
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[2] = c->v.f[12] + c->v.f[3];
    c->v.f[0] = c->v.f[1] + c->v.f[14];
    c->v.f[6] = c->v.f[11] + c->v.f[6];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    ST32(c->r[4] + 64u, c->v.s[2]);
    ST32(c->r[4] + 68u, c->v.s[0]);
    ST32(c->r[4] + 72u, c->v.s[4]);
L_b0aa58:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_b0aa60:;
    { uint32_t ea = c->r[0] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_b0aa58; }
    { uint32_t ea = c->r[0] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 5);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0aa58; }
    { uint32_t ea = c->r[4] + 0xeeu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0abbc; }
    c->v.s[25] = LD32(c->r[0] + 16u);
    c->v.s[17] = LD32(c->r[0] + 20u);
    c->v.s[19] = LD32(c->r[0] + 24u);
    c->v.s[23] = LD32(c->r[0] + 28u);
    c->v.s[24] = LD32(c->r[0] + 32u);
    c->v.s[26] = LD32(c->r[0] + 36u);
    c->v.s[28] = LD32(c->r[0] + 40u);
    c->v.s[30] = LD32(c->r[0] + 44u);
    c->v.s[22] = LD32(c->r[0] + 48u);
    c->v.s[20] = LD32(c->r[0] + 52u);
    c->v.s[18] = LD32(c->r[0] + 56u);
    c->v.s[16] = LD32(c->r[0] + 60u);
L_b0aad4:;
    c->v.f[0] = c->v.f[25] * c->v.f[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0aafc; }
    c->r[14] = 0xb0aaf8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0aafc:;
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.s[21] = 0x3f800000u;
    c->v.f[27] = c->v.f[21] / c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0ab2c; }
    c->r[14] = 0xb0ab28u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0ab2c:;
    c->v.f[2] = c->v.f[21] / c->v.f[2];
    c->v.f[0] = c->v.f[22] * c->v.f[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[23] = c->v.f[23] * c->v.f[27];
    c->v.f[19] = c->v.f[19] * c->v.f[27];
    c->v.f[17] = c->v.f[17] * c->v.f[27];
    c->v.f[25] = c->v.f[25] * c->v.f[27];
    c->v.f[30] = c->v.f[30] * c->v.f[2];
    c->v.f[28] = c->v.f[28] * c->v.f[2];
    c->v.f[26] = c->v.f[26] * c->v.f[2];
    c->v.f[24] = c->v.f[24] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0ab78; }
    c->r[14] = 0xb0ab74u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0ab78:;
    c->v.f[0] = c->v.f[21] / c->v.f[2];
    ST32(c->r[4] + 16u, c->v.s[25]);
    ST32(c->r[4] + 20u, c->v.s[17]);
    ST32(c->r[4] + 24u, c->v.s[19]);
    ST32(c->r[4] + 28u, c->v.s[23]);
    ST32(c->r[4] + 32u, c->v.s[24]);
    ST32(c->r[4] + 36u, c->v.s[26]);
    ST32(c->r[4] + 40u, c->v.s[28]);
    ST32(c->r[4] + 44u, c->v.s[30]);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    ST32(c->r[4] + 48u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[4] + 52u, c->v.s[4]);
    ST32(c->r[4] + 56u, c->v.s[2]);
    ST32(c->r[4] + 60u, c->v.s[0]);
L_b0abbc:;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b0abd8(Cpu *restrict c) {
    FN_ENTER(0xb0abd8u);
L_b0abd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[6] = c->r[2];
    c->v.s[16] = c->v.s[0];
    c->r[5] = c->r[3];
    c->r[4] = c->r[0];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0ac20; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb0ac20u; f_15efddc(c);
L_b0ac20:;
    c->v.s[18] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[5] + 4u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 8u);
    c->v.s[8] = LD32(c->r[6]);
    c->v.s[10] = LD32(c->r[6] + 4u);
    c->v.s[12] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[20] = c->v.f[0] * c->v.f[12];
    c->v.f[22] = c->v.f[0] * c->v.f[10];
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0ac70; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb0ac70u; f_15efddc(c);
L_b0ac70:;
    c->v.f[4] = c->v.f[22] * c->v.f[22];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.s[2] = 0x34000000u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b0acc0; }
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.f[26] = c->v.f[0] * c->v.f[6];
    c->v.f[30] = c->v.f[4] * c->v.f[0];
    c->v.f[28] = c->v.f[0] * c->v.f[8];
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b0ace8; }
L_b0acc0:;
    c->r[0] = 0xf2eee0u;
    { uint32_t ea = 0xb0acccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    goto L_b0af50;
L_b0ace8:;
    c->v.f[0] = c->v.f[22] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[30]);
    c->v.s[2] = 0xbf7fbe77u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b0ad2c; }
    c->v.s[0] = 0x3c23d70au;
    c->v.f[2] = fabsf(c->v.f[24]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b0ad80; }
    c->r[0] = 0xf2e4e4u;
    { uint32_t ea = 0xb0ad24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[2] = c->r[0] + 0x4u;
    goto L_b0adbc;
L_b0ad2c:;
    c->v.f[0] = c->v.f[0] + c->v.f[18];
    c->v.f[2] = c->v.f[0] + c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0ad4c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb0ad4cu; f_15efddc(c);
L_b0ad4c:;
    c->v.f[10] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[24] * c->v.f[26];
    c->v.f[4] = c->v.f[20] * c->v.f[30];
    c->v.f[6] = c->v.f[22] * c->v.f[28];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[22] * c->v.f[30]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[24] * c->v.f[28]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[20] * c->v.f[26]);
    c->v.s[8] = 0x3f000000u;
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    goto L_b0ae18;
L_b0ad80:;
    c->r[0] = 0xf2e470u;
    c->v.f[2] = fabsf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xb0ad94u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xf2e4b4u;
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    { uint32_t ea = 0xb0ada4u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + 0x8u;
    c->r[0] = c->r[2];
    c->r[2] = c->r[2] + 0x4u;
    if (COND_MI) { c->r[0] = c->r[3]; }
    if (COND_MI) { c->r[1] = c->r[3] + 0x8u; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = c->r[3] + 0x4u; }
L_b0adbc:;
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[2]);
    c->v.f[28] = c->v.f[20] * c->v.f[2];
    c->v.f[26] = c->v.f[22] * c->v.f[0];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] * c->v.f[4];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0ae04; }
    c->r[14] = 0xb0ae00u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0ae04:;
    c->v.f[6] = c->v.f[18] / c->v.f[2];
    c->v.s[0] = 0xb33bbd2eu;
    c->v.f[2] = c->v.f[24] * c->v.f[6];
    c->v.f[4] = c->v.f[6] * c->v.f[28];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
L_b0ae18:;
    c->r[0] = 0xf2ed5cu;
    c->v.s[3] = 0x0u;
    c->v.s[11] = 0xbc6bd4b8u;
    c->v.s[13] = 0x3ddd0956u;
    c->v.s[7] = 0x3bbfa681u;
    c->v.s[9] = 0xbc80625au;
    c->v.s[15] = 0xbd0dee73u;
    c->v.s[20] = 0x3db056e5u;
    c->v.s[24] = 0xbe31325eu;
    c->v.s[22] = 0x3c687b9cu;
    c->v.s[26] = 0xbe36a584u;
    c->v.s[28] = 0xbb8eacddu;
    { uint32_t ea = 0xb0ae50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[14] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[0] + 12u);
    c->v.f[1] = c->v.f[4] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[8]);
    vfp_cmp_f(c, c->v.f[3], c->v.f[1]);
    c->v.s[5] = c->v.s[1] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[5] = COND_GT ? c->v.s[5] : c->v.s[1];
    vfp_cmp_f(c, c->v.f[3], c->v.f[1]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[5] * c->v.f[15]);
    c->v.s[11] = 0x3f183577u;
    c->v.s[7] = 0x3d30f1f4u;
    c->v.s[15] = 0x3da2cff9u;
    vfp_mrs_flags(c);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.s[7] = 0xbf256968u;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[5] * c->v.f[13]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[5] * c->v.f[20]);
    c->v.s[9] = 0x3f107581u;
    c->v.f[20] = c->v.f[16] * c->v.f[16];
    c->v.s[13] = 0x3fc91658u;
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[26]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[5] * c->v.f[24]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[5] * c->v.f[22]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.f[22] = c->v.f[18] - c->v.f[16];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[11] = c->v.s[15];
    c->v.s[9] = c->v.s[7];
    c->v.f[5] = c->v.f[5] + c->v.f[18];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[20] * c->v.f[28]);
    c->v.s[24] = c->v.s[13];
    c->v.f[5] = c->v.f[18] / c->v.f[5];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[20] * c->v.f[11]);
    c->v.f[11] = c->v.f[22] * c->v.f[22];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[28]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[20] * c->v.f[9]);
    c->v.s[9] = 0xbf800000u;
    c->v.s[1] = COND_GT ? c->v.s[9] : c->v.s[18];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[11] * c->v.f[15]);
    c->v.f[15] = c->v.f[24] * c->v.f[16];
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[11] * c->v.f[7]);
    c->v.f[3] = c->v.f[5] * c->v.f[15];
    c->v.f[7] = c->v.f[22] * c->v.f[13];
    c->v.f[1] = c->v.f[1] * c->v.f[3];
    c->v.f[3] = c->v.f[5] * c->v.f[7];
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[3]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[3]);
    c->r[0] = c->v.s[0];
    ST32(c->r[4], c->v.s[6]);
    ST32(c->r[4] + 4u, c->v.s[4]);
    ST32(c->r[4] + 8u, c->v.s[2]);
L_b0af50:;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0afc4(Cpu *restrict c) {
    FN_ENTER(0xb0afc4u);
L_b0afc4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x7291u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[4] + c->r[0];
    if (COND_EQ) { goto L_b0b1a8; }
    c->r[0] = 0x1u;
    c->r[1] = 0x7361u;
    c->r[3] = c->r[4];
    c->r[9] = c->r[4];
    c->r[11] = c->r[4];
    c->r[10] = c->r[4];
    c->r[6] = c->r[4];
    c->r[8] = c->r[4];
    c->r[7] = c->r[4];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7431u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7501u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x75d1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x76a1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7771u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7841u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7911u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x79e1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7ab1u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7b81u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7c51u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7d21u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7df1u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7ec1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x7f91u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x8061u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x8131u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x8201u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[1]; ST8(ea, c->r[0]); c->r[3] = ea; }
    c->r[1] = 0x82d1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + c->r[1]; ST8(ea, c->r[0]); c->r[9] = ea; }
    c->r[1] = 0x83a1u;
    { uint32_t ea = c->r[11] + c->r[1]; ST8(ea, c->r[0]); c->r[11] = ea; }
    c->r[1] = 0x8471u;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); c->r[10] = ea; }
    c->r[1] = 0x8541u;
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[0]); c->r[6] = ea; }
    c->r[1] = 0x8611u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[0]); c->r[8] = ea; }
    c->r[1] = 0x86e1u;
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[0]); c->r[7] = ea; }
    c->r[1] = 0x87b1u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); c->r[4] = ea; }
    c->r[0] = 0xe5a3u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb0b184u; rt_dispatch(c);
    c->r[12] = c->r[9];
    c->r[2] = c->r[5];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_b0b2b0;
L_b0b1a8:;
    c->r[1] = 0x86e1u;
    c->r[0] = 0x87b1u;
    c->r[7] = c->r[4] + c->r[1];
    c->r[1] = 0x8611u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[8] = c->r[4] + c->r[1];
    c->r[1] = 0x8541u;
    c->r[6] = c->r[4] + c->r[1];
    c->r[1] = 0x8471u;
    c->r[10] = c->r[4] + c->r[1];
    c->r[1] = 0x83a1u;
    c->r[11] = c->r[4] + c->r[1];
    c->r[1] = 0x82d1u;
    c->r[12] = c->r[4] + c->r[1];
    c->r[1] = 0x8201u;
    c->r[9] = c->r[4] + c->r[1];
    c->r[1] = 0x8131u;
    c->r[14] = c->r[4] + c->r[1];
    c->r[1] = 0x8061u;
    c->r[3] = c->r[4] + c->r[1];
    c->r[1] = 0x7f91u;
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x7ec1u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7df1u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7d21u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7c51u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x7b81u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7ab1u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x79e1u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7911u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x7841u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7771u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x76a1u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x75d1u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x7501u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7431u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7361u;
    c->r[4] = c->r[4] + c->r[1];
L_b0b2b0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0b360(Cpu *restrict c) {
    FN_ENTER(0xb0b360u);
L_b0b360:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xd8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x490u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_b0b7f4; }
    c->v.s[16] = 0x3f800000u;
    c->r[5] = 0x20u;
    c->r[7] = c->r[10];
L_b0b394:;
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + c->r[5];
    c->v.s[0] = LD32(c->r[6] - 12u);
    c->v.s[2] = LD32(c->r[6] - 16u);
    c->v.s[4] = LD32(c->r[6] - 8u);
    c->v.s[6] = LD32(c->r[6] - 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0b3d4; }
    c->r[14] = 0xb0b3d0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0b3d4:;
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    c->v.s[0] = LD32(c->r[6] - 16u);
    c->v.s[4] = LD32(c->r[6] - 12u);
    c->v.s[6] = LD32(c->r[6] - 8u);
    c->v.s[8] = LD32(c->r[6] - 4u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[6] - 16u, c->v.s[0]);
    ST32(c->r[6] - 12u, c->v.s[4]);
    ST32(c->r[6] - 8u, c->v.s[6]);
    ST32(c->r[6] - 4u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[6] = LD32(c->r[6] + 12u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0b440; }
    c->r[14] = 0xb0b43cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0b440:;
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6] + 12u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[6], c->v.s[0]);
    ST32(c->r[6] + 4u, c->v.s[4]);
    ST32(c->r[6] + 8u, c->v.s[6]);
    ST32(c->r[6] + 12u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[6] + 20u);
    c->v.s[2] = LD32(c->r[6] + 16u);
    c->v.s[4] = LD32(c->r[6] + 24u);
    c->v.s[6] = LD32(c->r[6] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0b4ac; }
    c->r[14] = 0xb0b4a8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0b4ac:;
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    c->v.s[0] = LD32(c->r[6] + 16u);
    c->v.s[4] = LD32(c->r[6] + 20u);
    c->v.s[6] = LD32(c->r[6] + 24u);
    c->v.s[8] = LD32(c->r[6] + 28u);
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[5] = c->r[5] + 0xa0u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    ST32(c->r[6] + 16u, c->v.s[0]);
    ST32(c->r[6] + 20u, c->v.s[4]);
    ST32(c->r[6] + 24u, c->v.s[6]);
    ST32(c->r[6] + 28u, c->v.s[2]);
    if (COND_NE) { goto L_b0b394; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_b0b7f4; }
    c->r[5] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
L_b0b500:;
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + c->r[8];
    c->r[0] = c->r[9];
    c->r[14] = 0xb0b510u; f_b4cf88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0b5d8; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    c->v.s[10] = c->r[14];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->v.s[6] = c->r[2];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    c->v.s[1] = c->r[12];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->v.s[14] = c->r[6];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    c->v.s[12] = c->r[3];
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->v.s[2] = LD32(c->r[0] + 68u);
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.s[10] = c->r[5];
    c->v.f[8] = c->v.f[8] * c->v.f[2];
    c->v.f[2] = c->v.f[12] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.s[12] = c->r[4];
    c->v.s[14] = c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[0] = c->v.s[6] ^ 0x80000000u;
    c->v.s[4] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 68u, c->v.s[4]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    goto L_b0b71c;
L_b0b5d8:;
    c->v.s[21] = LD32(c->r[4] + 180u);
    c->v.s[25] = LD32(c->r[4] + 176u);
    c->v.s[23] = LD32(c->r[4] + 184u);
    c->v.s[2] = LD32(c->r[4] + 188u);
    c->v.s[30] = LD32(c->r[4] + 192u);
    c->v.s[17] = LD32(c->r[4] + 196u);
    c->v.s[19] = LD32(c->r[4] + 200u);
    c->v.s[29] = LD32(c->r[4] + 204u);
    c->v.s[28] = LD32(c->r[4] + 208u);
    c->v.s[26] = LD32(c->r[4] + 212u);
    c->v.s[22] = LD32(c->r[4] + 216u);
    c->v.s[27] = LD32(c->r[4] + 220u);
    c->v.s[20] = LD32(c->r[4] + 224u);
    c->v.s[24] = LD32(c->r[4] + 228u);
    c->v.s[18] = LD32(c->r[4] + 232u);
    c->v.f[0] = c->v.f[21] * c->v.f[21];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0b63c; }
    c->r[14] = 0xb0b638u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0b63c:;
    c->v.f[0] = c->v.f[17] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[31] = c->v.f[16] / c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0b668; }
    c->r[14] = 0xb0b664u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0b668:;
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[29] = c->v.f[21] * c->v.f[31];
    c->v.f[23] = c->v.f[23] * c->v.f[31];
    c->v.f[21] = c->v.f[25] * c->v.f[31];
    c->v.f[19] = c->v.f[19] * c->v.f[2];
    c->v.f[17] = c->v.f[17] * c->v.f[2];
    c->v.f[30] = c->v.f[30] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0b6ac; }
    c->r[14] = 0xb0b6a8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0b6ac:;
    c->v.f[0] = c->v.f[16] / c->v.f[2];
    c->v.f[2] = c->v.f[24] * c->v.f[29];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[21]);
    ST32(c->r[13] + 16u, c->v.s[21]);
    c->v.f[8] = c->v.f[24] * c->v.f[17];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[30]);
    ST32(c->r[13] + 32u, c->v.s[29]);
    ST32(c->r[13] + 48u, c->v.s[23]);
    ST32(c->r[13] + 20u, c->v.s[30]);
    ST32(c->r[13] + 36u, c->v.s[17]);
    ST32(c->r[13] + 52u, c->v.s[19]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[23]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[19]);
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[4] = c->v.f[28] * c->v.f[0];
    c->v.f[6] = c->v.f[26] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[10] = c->v.f[24] * c->v.f[6];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[20] * c->v.f[4]);
    ST32(c->r[13] + 24u, c->v.s[4]);
    ST32(c->r[13] + 40u, c->v.s[6]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.s[0] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[2] = c->v.s[10] ^ 0x80000000u;
    ST32(c->r[13] + 72u, c->v.s[2]);
L_b0b71c:;
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[9] + 0x10u;
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x50u;
    c->r[14] = 0xb0b740u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x60u;
    c->r[14] = 0xb0b7ccu; f_272ea8(c);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0xa0u;
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[9] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8cu; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_b0b500; }
L_b0b7f4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0b804(Cpu *restrict c) {
    FN_ENTER(0xb0b804u);
L_b0b804:;
    c->v.s[0] = LD32(c->r[0] + 64u);
    c->v.s[2] = LD32(c->r[1]);
    c->r[2] = 0x101cu;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 68u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 72u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 72u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 224u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 224u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 228u);
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[0] + 228u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 232u);
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    ST32(c->r[0] + 232u, c->v.s[0]);
    c->v.s[0] = 0x0u;
    c->v.s[2] = LD32(c->r[0] + 236u);
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0] + 236u, c->v.s[2]);
    c->r[0] = c->r[0] + c->r[2];
    c->r[2] = 0x1bu;
L_b0b880:;
    c->v.s[2] = LD32(c->r[0] - 12u);
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] + 4u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->v.f[2] = c->v.f[4] + c->v.f[2];
    ST32(c->r[0] - 12u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] - 8u);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0] - 8u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] - 4u);
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[0] - 4u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = c->r[0] + 0x100u;
    if (COND_NE) { goto L_b0b880; }
    return;
}
void f_b0b8d0(Cpu *restrict c) {
    FN_ENTER(0xb0b8d0u);
L_b0b8d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x7230u;
    c->r[5] = 0x1bu;
    c->r[0] = c->r[4] + c->r[0];
L_b0b8e4:;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0xd0u; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xb0b8f4u; rt_dispatch(c);
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[0] = c->r[6];
    if (COND_NE) { goto L_b0b8e4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = c->r[0] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LS) { c->r[1] = 0x3u; }
    if (COND_LS) { c->r[0] = (c->r[0] & 0xfffffff8u) | ((c->r[1] << 0) & 0x7u); }
    if (COND_LS) { { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0b928(Cpu *restrict c) {
    FN_ENTER(0xb0b928u);
L_b0b928:;
    return;
}
void f_b0b92c(Cpu *restrict c) {
    FN_ENTER(0xb0b92cu);
L_b0b92c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b0b930(Cpu *restrict c) {
    FN_ENTER(0xb0b930u);
L_b0b930:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b0b934(Cpu *restrict c) {
    FN_ENTER(0xb0b934u);
L_b0b934:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf367f8u;
    { uint32_t ea = 0xb0b948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0b948u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b0b960(Cpu *restrict c) {
    FN_ENTER(0xb0b960u);
L_b0b960:;
    c->r[0] = 0xf367d4u;
    { uint32_t ea = 0xb0b96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b0b970(Cpu *restrict c) {
    FN_ENTER(0xb0b970u);
L_b0b970:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b0b974(Cpu *restrict c) {
    FN_ENTER(0xb0b974u);
L_b0b974:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b0b978(Cpu *restrict c) {
    FN_ENTER(0xb0b978u);
L_b0b978:;
    c->r[0] = 0xf367c4u;
    { uint32_t ea = 0xb0b984u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b0b988(Cpu *restrict c) {
    FN_ENTER(0xb0b988u);
L_b0b988:;
    c->r[0] = 0x0u;
    return;
}
void f_b0b990(Cpu *restrict c) {
    FN_ENTER(0xb0b990u);
L_b0b990:;
    c->r[0] = 0xf367bcu;
    { uint32_t ea = 0xb0b99cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b0b9a0(Cpu *restrict c) {
    FN_ENTER(0xb0b9a0u);
L_b0b9a0:;
    c->r[0] = 0x0u;
    return;
}
void f_b0b9a8(Cpu *restrict c) {
    FN_ENTER(0xb0b9a8u);
L_b0b9a8:;
    c->r[0] = 0xf367b4u;
    { uint32_t ea = 0xb0b9b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b0b9b8(Cpu *restrict c) {
    FN_ENTER(0xb0b9b8u);
L_b0b9b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1815560u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[6] = 0x2u;
    c->r[2] = 0x6u;
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[0] = 0xb0b9ecu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf2d130u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[0] = 0xf36704u;
    { uint32_t ea = 0xb0ba34u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xc67fa7u;
    { uint32_t ea = 0xb0ba3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb0ba40u + c->r[1];
    c->r[14] = 0xb0ba40u; f_9aedcc(c);
    c->r[1] = 0xf36750u;
    c->r[3] = 0xd0u;
    { uint32_t ea = 0xb0ba50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf363a8u;
    c->r[0] = 0xf366d4u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb0ba6cu + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xc67ffau;
    { uint32_t ea = 0xb0ba74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb0ba78u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0xb0ba7cu; f_9aedcc(c);
    c->r[1] = 0xf36714u;
    c->r[2] = c->r[4];
    c->r[3] = 0x78u;
    { uint32_t ea = 0xb0ba90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf366acu;
    c->r[1] = 0xc67ff0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb0baacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb0bab0u + c->r[1];
    c->r[14] = 0xb0bab0u; f_9aedcc(c);
    c->r[1] = 0xf366dcu;
    c->r[3] = 0x8830u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb0baccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf2d250u;
    c->r[0] = 0xf36680u;
    { uint32_t ea = 0xb0bae0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xc67fd8u;
    { uint32_t ea = 0xb0bae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb0baecu + c->r[1];
    c->r[14] = 0xb0baecu; f_9aedcc(c);
    c->r[1] = 0xf366b4u;
    { uint32_t ea = 0xb0baf8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0bb44(Cpu *restrict c) {
    FN_ENTER(0xb0bb44u);
L_b0bb44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf3665cu;
    { uint32_t ea = 0xb0bb54u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb0bb58u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[4]; c->r[14] = 0xb0bb70u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xb0bb78u; f_a87958(c);
    c->r[0] = 0xf36624u;
    c->r[1] = 0x1u;
    c->r[2] = 0xc6183au;
    c->r[3] = 0x1u;
    { uint32_t ea = 0xb0bb90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xb0bb94u + c->r[2];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d894u;
    { uint32_t ea = 0xb0bbbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0xf365e8u;
    { uint32_t ea = 0xb0bbd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0xb0bbd0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b0bbf0(Cpu *restrict c) {
    FN_ENTER(0xb0bbf0u);
L_b0bbf0:;
    return;
}
void f_b0bbf4(Cpu *restrict c) {
    FN_ENTER(0xb0bbf4u);
L_b0bbf4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf365acu;
    { uint32_t ea = 0xb0bc08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0bc24; }
    c->r[14] = 0xb0bc1cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_b0bc24:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_b0bc34(Cpu *restrict c) {
    FN_ENTER(0xb0bc34u);
L_b0bc34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf3656cu;
    { uint32_t ea = 0xb0bc48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0bc64; }
    c->r[14] = 0xb0bc5cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_b0bc64:;
    c->r[0] = c->r[4];
    c->r[14] = 0xb0bc6cu; f_a879b4(c);
    c->r[0] = 0xf36538u;
    { uint32_t ea = 0xb0bc78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0bc78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b0bc94(Cpu *restrict c) {
    FN_ENTER(0xb0bc94u);
L_b0bc94:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b0bce0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    c->r[1] = 0xf2d0c0u;
    c->v.s[0] = 0x42700000u;
    { uint32_t ea = 0xb0bcc4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[4] = LD32(c->r[1] + 104u);
    c->v.s[2] = LD32(c->r[1] + 56u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_b0bce0:;
    return;
}
void f_b0bcec(Cpu *restrict c) {
    FN_ENTER(0xb0bcecu);
L_b0bcec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_b0bd5c; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0xb0bd1cu; f_a7ff38(c);
    c->r[3] = c->r[4] + 0x164u;
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    c->r[1] = c->r[4] + 0x164u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_b0bd5c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0bd60(Cpu *restrict c) {
    FN_ENTER(0xb0bd60u);
L_b0bd60:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b0bd64(Cpu *restrict c) {
    FN_ENTER(0xb0bd64u);
L_b0bd64:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xb0bd78u; f_a87a24(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0bda0u; f_9bb638(c);
    c->r[1] = 0xc66a22u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xb0bdb8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x34u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0be18u; f_9bb638(c);
    c->r[1] = 0xc46407u;
    c->r[1] = 0xb0be24u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x38u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0be74(Cpu *restrict c) {
    FN_ENTER(0xb0be74u);
L_b0be74:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_b0be78(Cpu *restrict c) {
    FN_ENTER(0xb0be78u);
L_b0be78:;
    c->r[0] = 0xf3632cu;
    { uint32_t ea = 0xb0be84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b0be88(Cpu *restrict c) {
    FN_ENTER(0xb0be88u);
L_b0be88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1815140u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0xb0beb4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0xf2d400u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[0] = 0xf362a4u;
    { uint32_t ea = 0xb0bf00u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xc67e40u;
    c->r[3] = 0x40u;
    { uint32_t ea = 0xb0bf0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb0bf10u + c->r[1];
    c->r[14] = 0xb0bf10u; f_9aedcc(c);
    c->r[1] = 0xf362a0u;
    { uint32_t ea = 0xb0bf1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_b0bf3c(Cpu *restrict c) {
    FN_ENTER(0xb0bf3cu);
L_b0bf3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf36274u;
    { uint32_t ea = 0xb0bf4cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb0bf50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x9dd0u;
    c->pc = c->r[4]; c->r[14] = 0xb0bf68u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_b0bf78(c);
}
void f_b0bf74(Cpu *restrict c) {
    FN_ENTER(0xb0bf74u);
L_b0bf74:;
    return;
}
void f_b0bf78(Cpu *restrict c) {
    FN_ENTER(0xb0bf78u);
L_b0bf78:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xb0bf84u; f_a87958(c);
    c->r[0] = 0xf36230u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xb0bf94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xf0u;
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[7]); }
    c->r[14] = 0xb0bfa4u; f_b0c170(c);
    c->r[2] = 0xf30be8u;
    c->r[1] = 0x5000u;
    c->r[0] = 0x1u;
    c->r[8] = 0x3f800000u;
    c->r[3] = 0x6u;
    c->r[10] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x48c30000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x64u;
    { uint32_t ea = 0xb0bfd4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x38u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x341u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x0u;
    if (COND_NE) { c->r[3] = 0x9u; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x341u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = 0xb0c028u + 0x134u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x4000u;
    if (COND_NE) { c->r[3] = c->r[3] + 0x4u; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x471c0000u;
    c->v.s[0] = LD32(c->r[3]);
    ST32(c->r[4] + 64u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x44u; ST32(ea, c->r[2]); c->r[10] = ea; }
    { uint32_t ea = c->r[4] + 0x3bu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e800000u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[7]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x341u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xf2cac0u;
    if (COND_NE) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xb0c08cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf34db0u;
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xb0c0b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x90u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf34d54u;
    { uint32_t ea = 0xb0c0dcu + c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[0] = 0x9d60u;
    c->r[1] = 0x60u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c100u; f_15efdc4(c);
    { uint32_t ea = c->r[9] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + 0x50u;
    c->v.s[4] = 0x3f800000u;
    c->v.s[8] = 0x3f000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x9dc0u;
    if (COND_EQ) { c->r[1] = c->r[4] + 0x40u; }
    if (COND_NE) { c->r[10] = c->r[9] + 0x54u; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[10]);
    c->v.f[6] = c->v.f[2] - c->v.f[0];
    c->v.f[4] = c->v.f[4] / c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[4] + 112u, c->v.s[8]);
    ST32(c->r[4] + 116u, c->v.s[4]);
    ST32(c->r[4] + 120u, c->v.s[0]);
    ST32(c->r[4] + 124u, c->v.s[2]);
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b0c170(Cpu *restrict c) {
    FN_ENTER(0xb0c170u);
L_b0c170:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = c->r[5] + 0x10u;
    c->r[14] = 0xb0c180u; f_d43e64(c);
    c->r[0] = c->r[5] + 0x690u;
    c->r[14] = 0xb0c188u; f_d43e64(c);
    c->r[0] = c->r[5] + 0xd10u;
    c->r[14] = 0xb0c190u; f_d43e64(c);
    c->r[0] = 0x1390u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c19cu; f_d43e64(c);
    c->r[0] = 0x1a10u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1a8u; f_d43e64(c);
    c->r[0] = 0x2090u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1b4u; f_d43e64(c);
    c->r[0] = 0x2710u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1c0u; f_d43e64(c);
    c->r[0] = 0x2d90u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1ccu; f_d43e64(c);
    c->r[0] = 0x3410u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1d8u; f_d43e64(c);
    c->r[0] = 0x3a90u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1e4u; f_d43e64(c);
    c->r[0] = 0x4110u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1f0u; f_d43e64(c);
    c->r[0] = 0x4790u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c1fcu; f_d43e64(c);
    c->r[0] = 0x4e10u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c208u; f_d43e64(c);
    c->r[0] = 0x5490u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c214u; f_d43e64(c);
    c->r[0] = 0x5b10u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c220u; f_d43e64(c);
    c->r[0] = 0x6190u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c22cu; f_d43e64(c);
    c->r[0] = 0x6810u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c238u; f_d43e64(c);
    c->r[0] = 0x6e90u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c244u; f_d43e64(c);
    c->r[0] = 0x7510u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c250u; f_d43e64(c);
    c->r[0] = 0x7b90u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c25cu; f_d43e64(c);
    c->r[0] = 0x8210u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c268u; f_d43e64(c);
    c->r[0] = 0x8890u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c274u; f_d43e64(c);
    c->r[0] = 0x8f10u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c280u; f_d43e64(c);
    c->r[0] = 0x9590u;
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0xb0c28cu; f_d43e64(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x9c10u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_b0c2a0:;
    c->r[3] = c->r[5] + c->r[2];
    c->r[2] = c->r[2] + 0x680u;
    c->r[4] = c->r[3] + 0x10u;
    (void)f_subs(c, c->r[2], 0x9c00u);
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + 0x680u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[3] + 0x674u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_b0c2a0; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0c2d0(Cpu *restrict c) {
    FN_ENTER(0xb0c2d0u);
L_b0c2d0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[0] = 0xf35edcu;
    { uint32_t ea = 0xb0c2e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c308; }
    c->r[0] = 0xf308b8u;
    { uint32_t ea = 0xb0c304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0c308u; f_d9f190(c);
L_b0c308:;
    c->r[0] = 0x9d70u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[10] = 0x0u;
    c->r[9] = c->r[4] + c->r[0];
    c->r[0] = 0xf35e9cu;
    { uint32_t ea = 0xb0c324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf35e90u;
    { uint32_t ea = 0xb0c330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf35e84u;
    { uint32_t ea = 0xb0c33cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf35e78u;
    { uint32_t ea = 0xb0c348u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0xf35e70u;
    { uint32_t ea = 0xb0c350u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0xf35e68u;
    { uint32_t ea = 0xb0c358u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0xf35e60u;
    { uint32_t ea = 0xb0c360u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0xf35e58u;
    { uint32_t ea = 0xb0c368u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_b0c364:;
    c->r[11] = c->r[9] + c->r[10];
    { uint32_t ea = c->r[11] - 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c38c; }
    c->r[0] = c->r[8];
    c->r[14] = 0xb0c37cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c38cu; rt_dispatch(c);
L_b0c38c:;
    { uint32_t ea = c->r[11] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c3b0; }
    c->r[0] = c->r[7];
    c->r[14] = 0xb0c3a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c3b0u; rt_dispatch(c);
L_b0c3b0:;
    { uint32_t ea = c->r[11] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c3d4; }
    c->r[0] = c->r[6];
    c->r[14] = 0xb0c3c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c3d4u; rt_dispatch(c);
L_b0c3d4:;
    { uint32_t ea = c->r[11] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c3f8; }
    c->r[0] = c->r[5];
    c->r[14] = 0xb0c3e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c3f8u; rt_dispatch(c);
L_b0c3f8:;
    { uint32_t ea = c->r[9] + c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c41c; }
    c->r[0] = c->r[4];
    c->r[14] = 0xb0c40cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c41cu; rt_dispatch(c);
L_b0c41c:;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c440; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0c430u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c440u; rt_dispatch(c);
L_b0c440:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c464; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0c454u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c464u; rt_dispatch(c);
L_b0c464:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c488; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0c478u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0c488u; rt_dispatch(c);
L_b0c488:;
    c->r[10] = c->r[10] + 0x20u;
    (void)f_subs(c, c->r[10], 0x60u);
    if (COND_NE) { goto L_b0c364; }
    c->r[0] = 0xf30718u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0xb0c4a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0c4acu; f_d9ef2c(c);
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c4c4; }
    c->r[14] = 0xb0c4bcu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
L_b0c4c4:;
    c->r[0] = c->r[4] + 0xf0u;
    c->r[14] = 0xb0c4ccu; f_b0c508(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_b0c508(Cpu *restrict c) {
    FN_ENTER(0xb0c508u);
L_b0c508:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_b0c518:;
    c->r[7] = c->r[4] + c->r[6];
    c->r[0] = c->r[7] + 0x10u;
    c->r[14] = 0xb0c524u; f_d437b4(c);
    c->r[6] = c->r[6] + 0x680u;
    { uint32_t ea = c->r[7] + 0x680u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x684u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[6], 0x9c00u);
    if (COND_NE) { goto L_b0c518; }
    c->r[0] = 0x9590u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c544u; f_d43f68(c);
    c->r[0] = 0x8f10u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c550u; f_d43f68(c);
    c->r[0] = 0x8890u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c55cu; f_d43f68(c);
    c->r[0] = 0x8210u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c568u; f_d43f68(c);
    c->r[0] = 0x7b90u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c574u; f_d43f68(c);
    c->r[0] = 0x7510u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c580u; f_d43f68(c);
    c->r[0] = 0x6e90u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c58cu; f_d43f68(c);
    c->r[0] = 0x6810u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c598u; f_d43f68(c);
    c->r[0] = 0x6190u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5a4u; f_d43f68(c);
    c->r[0] = 0x5b10u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5b0u; f_d43f68(c);
    c->r[0] = 0x5490u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5bcu; f_d43f68(c);
    c->r[0] = 0x4e10u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5c8u; f_d43f68(c);
    c->r[0] = 0x4790u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5d4u; f_d43f68(c);
    c->r[0] = 0x4110u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5e0u; f_d43f68(c);
    c->r[0] = 0x3a90u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5ecu; f_d43f68(c);
    c->r[0] = 0x3410u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c5f8u; f_d43f68(c);
    c->r[0] = 0x2d90u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c604u; f_d43f68(c);
    c->r[0] = 0x2710u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c610u; f_d43f68(c);
    c->r[0] = 0x2090u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c61cu; f_d43f68(c);
    c->r[0] = 0x1a10u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c628u; f_d43f68(c);
    c->r[0] = 0x1390u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0xb0c634u; f_d43f68(c);
    c->r[0] = c->r[4] + 0xd10u;
    c->r[14] = 0xb0c63cu; f_d43f68(c);
    c->r[0] = c->r[4] + 0x690u;
    c->r[14] = 0xb0c644u; f_d43f68(c);
    c->r[0] = c->r[4] + 0x10u;
    c->r[14] = 0xb0c64cu; f_d43f68(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b0c654(Cpu *restrict c) {
    FN_ENTER(0xb0c654u);
L_b0c654:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xb0c660u; f_b0c2d0(c);
    c->r[0] = 0xf35b54u;
    { uint32_t ea = 0xb0c66cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0c66cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_b0c684(Cpu *restrict c) {
    FN_ENTER(0xb0c684u);
L_b0c684:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xb0c698u; f_a87a24(c);
    c->r[0] = 0xf35afcu;
    c->r[8] = 0x0u;
    c->r[9] = c->r[13] + 0x28u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xb0c6ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf35af4u;
    { uint32_t ea = 0xb0c6d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xc57999u;
    c->r[2] = 0xb0c6e4u + c->r[0];
    c->r[0] = 0xc51321u;
    c->r[3] = 0xb0c6ecu + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xb0c6f0u; f_9af6e4(c);
    c->r[0] = c->r[11];
    c->r[14] = 0xb0c6f8u; f_9bb638(c);
    c->r[12] = c->r[9];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3047cu;
    { uint32_t ea = 0xb0c740u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x341u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0c868; }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c770u; f_9bb638(c);
    c->r[1] = 0xc675e0u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0c784u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x40u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c7e4u; f_9bb638(c);
    c->r[1] = 0xc6757fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0c7f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x44u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c85cu; f_9bb638(c);
    c->r[1] = 0xc67520u;
    c->r[1] = 0xb0c868u + c->r[1];
    goto L_b0c980;
L_b0c868:;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c88cu; f_9bb638(c);
    c->r[1] = 0xc674fau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0c8a0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x40u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c900u; f_9bb638(c);
    c->r[1] = 0xc67499u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0c914u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x44u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c978u; f_9bb638(c);
    c->r[1] = 0xc6743au;
    c->r[1] = 0xb0c984u + c->r[1];
L_b0c980:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x5cu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0c9f4u; f_9bb638(c);
    c->r[1] = 0xc673c8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0ca08u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0ca68u; f_9bb638(c);
    c->r[1] = 0xc6735fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0ca7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3bu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf300f4u;
    { uint32_t ea = 0xb0cac8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x341u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0cb04; }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0caf8u; f_9bb638(c);
    c->r[1] = 0xc672e3u;
    c->r[1] = 0xb0cb04u + c->r[1];
    goto L_b0cb30;
L_b0cb04:;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cb28u; f_9bb638(c);
    c->r[1] = 0xc672c3u;
    c->r[1] = 0xb0cb34u + c->r[1];
L_b0cb30:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x58u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cba4u; f_9bb638(c);
    c->r[1] = 0xc6724fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0cbb8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x39u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ffb8u;
    { uint32_t ea = 0xb0cc04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x341u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0cda0; }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cc34u; f_9bb638(c);
    c->r[1] = 0xc671c8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0cc48u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cca8u; f_9bb638(c);
    c->r[1] = 0xc67160u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0ccbcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x54u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cd20u; f_9bb638(c);
    c->r[1] = 0xc670f8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0cd34u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cd94u; f_9bb638(c);
    c->r[1] = 0xc67095u;
    c->r[1] = 0xb0cda0u + c->r[1];
    goto L_b0cf2c;
L_b0cda0:;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cdc4u; f_9bb638(c);
    c->r[1] = 0xc6706du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0cdd8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0ce38u; f_9bb638(c);
    c->r[1] = 0xc67005u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0ce4cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x54u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0ceb0u; f_9bb638(c);
    c->r[1] = 0xc66f9du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0cec4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xd4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cf24u; f_9bb638(c);
    c->r[1] = 0xc66f3au;
    c->r[1] = 0xb0cf30u + c->r[1];
L_b0cf2c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x3eu;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0cfa0u; f_9bb638(c);
    c->r[1] = 0xc66ecau;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0cfb0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3du;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d010u; f_9bb638(c);
    c->r[1] = 0xc66e61u;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d028u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d088u; f_9bb638(c);
    c->r[1] = 0xc66e03u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d09cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[10] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d0f4u; f_9bb638(c);
    c->r[1] = 0xc66daau;
    c->r[9] = 0xcu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d10cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x68u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d16cu; f_9bb638(c);
    c->r[1] = 0xc66d48u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d17cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[10] + 0x6cu;
    c->r[9] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d1dcu; f_9bb638(c);
    c->r[1] = 0xc66cdfu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[9] = 0x0u;
    c->r[1] = 0xb0d1f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x9dc0u;
    c->r[1] = c->r[10] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xb0d258u; f_9bb638(c);
    c->r[1] = 0xc66c79u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d26cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x15u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x80u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xb0d2ccu; f_9bb638(c);
    c->r[1] = 0xc64cdcu;
    c->r[8] = 0x6u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x8000000u;
    c->r[1] = 0xb0d2e8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x4cu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xb0d348u; f_9bb638(c);
    c->r[1] = 0xc64d4cu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d35cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x48u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xb0d3bcu; f_9bb638(c);
    c->r[1] = 0xc66b21u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d3d0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xb0d434u; f_9bb638(c);
    c->r[1] = 0xc66aadu;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xb0d448u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); }
    c->r[1] = c->r[10] + 0x50u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    c->r[14] = 0xb0d4a0u; f_9bb638(c);
    c->r[1] = 0xc66a48u;
    c->r[2] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[8] = 0x0u;
    c->r[1] = 0xb0d4b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x30u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d518u; f_9bb638(c);
    c->r[1] = 0xc669dfu;
    c->r[9] = c->r[13] + 0x28u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xb0d530u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x34u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xb0d590u; f_9bb638(c);
    c->r[1] = 0xc66987u;
    c->r[1] = 0xb0d59cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x38u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0d684(Cpu *restrict c) {
    FN_ENTER(0xb0d684u);
L_b0d684:;
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_b0d68c(Cpu *restrict c) {
    FN_ENTER(0xb0d68cu);
L_b0d68c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[1];
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_b0d6ac; }
    c->r[0] = c->r[5];
    c->r[14] = 0xb0d6acu; f_a87648(c);
L_b0d6ac:;
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d6c4; }
    c->r[14] = 0xb0d6bcu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0xd8u; ST32(ea, c->r[0]); }
L_b0d6c4:;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[10] + 0xd8u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_b0d8f8; }
    c->r[0] = 0xf344a4u;
    c->r[6] = 0xfffcu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = 0xb0d6e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbf0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d79c; }
    c->r[0] = 0x9d60u;
    c->r[5] = 0x0u;
    c->r[9] = 0x0u;
    c->r[4] = c->r[10] + c->r[0];
    c->r[0] = 0xf34aacu;
    { uint32_t ea = 0xb0d714u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0xf34aa4u;
    { uint32_t ea = 0xb0d71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_b0d71c:;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d750; }
    c->r[0] = c->r[10] + (c->r[9] << 2);
    c->r[1] = 0x9d60u;
    c->r[8] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0d73cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0d74cu; rt_dispatch(c);
    goto L_b0d754;
L_b0d750:;
    c->r[8] = c->r[4] + c->r[5];
L_b0d754:;
    c->r[0] = c->r[11];
    c->r[14] = 0xb0d75cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] & (c->r[1] << 2);
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xb0d774u; rt_dispatch(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] & (c->r[2] << 2);
    c->r[14] = 0xb0d788u; f_15efe30(c);
    c->r[5] = c->r[5] + 0x4u;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_NE) { goto L_b0d71c; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b0d79c:;
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d84c; }
    c->r[0] = 0x9d80u;
    c->r[5] = 0x0u;
    c->r[9] = 0x0u;
    c->r[4] = c->r[10] + c->r[0];
    c->r[0] = 0xf349fcu;
    { uint32_t ea = 0xb0d7c4u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0xf349f4u;
    { uint32_t ea = 0xb0d7ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_b0d7cc:;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d800; }
    c->r[0] = c->r[10] + (c->r[9] << 2);
    c->r[1] = 0x9d80u;
    c->r[8] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0d7ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0d7fcu; rt_dispatch(c);
    goto L_b0d804;
L_b0d800:;
    c->r[8] = c->r[4] + c->r[5];
L_b0d804:;
    c->r[0] = c->r[11];
    c->r[14] = 0xb0d80cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] & (c->r[1] << 2);
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xb0d824u; rt_dispatch(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] & (c->r[2] << 2);
    c->r[14] = 0xb0d838u; f_15efe30(c);
    c->r[5] = c->r[5] + 0x4u;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_NE) { goto L_b0d7cc; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b0d84c:;
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d8f8; }
    c->r[0] = 0x9da0u;
    c->r[5] = 0x0u;
    c->r[9] = 0x0u;
    c->r[4] = c->r[10] + c->r[0];
    c->r[0] = 0xf3494cu;
    { uint32_t ea = 0xb0d874u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0xf34944u;
    { uint32_t ea = 0xb0d87cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_b0d87c:;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0d8b0; }
    c->r[0] = c->r[10] + (c->r[9] << 2);
    c->r[1] = 0x9da0u;
    c->r[8] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0d89cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xb0d8acu; rt_dispatch(c);
    goto L_b0d8b4;
L_b0d8b0:;
    c->r[8] = c->r[4] + c->r[5];
L_b0d8b4:;
    c->r[0] = c->r[11];
    c->r[14] = 0xb0d8bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] & (c->r[1] << 2);
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xb0d8d4u; rt_dispatch(c);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] & (c->r[2] << 2);
    c->r[14] = 0xb0d8e8u; f_15efe30(c);
    c->r[5] = c->r[5] + 0x4u;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_NE) { goto L_b0d87c; }
L_b0d8f8:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0d91c(Cpu *restrict c) {
    FN_ENTER(0xb0d91cu);
L_b0d91c:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_b0d920(Cpu *restrict c) {
    FN_ENTER(0xb0d920u);
L_b0d920:;
    c->r[1] = c->r[0];
    c->r[0] = 0xf2f28cu;
    { uint32_t ea = 0xb0d930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_d9ee20(c);
}
void f_b0d938(Cpu *restrict c) {
    FN_ENTER(0xb0d938u);
L_b0d938:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_b0dc10; }
    c->r[0] = 0xf2f24cu;
    { uint32_t ea = c->r[10] + 0x3bu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0xb0d970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_b0d984; }
L_b0d978:;
    c->r[1] = c->r[10] + 0x44u;
    c->r[2] = c->r[10] + 0x40u;
    goto L_b0d998;
L_b0d984:;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0d978; }
    c->r[2] = c->r[0] + 0x50u;
    c->r[1] = c->r[0] + 0x54u;
L_b0d998:;
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[0] = 0x3f800000u;
    c->v.s[8] = 0x3f000000u;
    c->v.f[6] = c->v.f[4] - c->v.f[2];
    c->v.f[6] = c->v.f[0] / c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[10] + 112u, c->v.s[8]);
    ST32(c->r[10] + 116u, c->v.s[6]);
    ST32(c->r[10] + 120u, c->v.s[2]);
    ST32(c->r[10] + 124u, c->v.s[4]);
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b0db2c; }
    c->v.s[2] = 0x34000000u;
    c->r[0] = 0x9d60u;
    c->r[8] = 0x0u;
    c->r[12] = 0x59cu;
    c->r[14] = c->r[10] + c->r[0];
    goto L_b0da00;
L_b0d9ec:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_EQ) { goto L_b0db20; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[14] + 0x20u;
L_b0da00:;
    c->r[0] = c->r[2] + (c->r[8] << 2);
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[11] = v; }
    (void)f_subs(c, c->r[11], 0x0u);
    if (COND_EQ) { goto L_b0d9ec; }
    c->r[9] = c->r[11] + c->r[12];
    c->r[0] = 0x0u;
    c->r[5] = c->r[14];
L_b0da1c:;
    c->r[7] = c->r[11] + c->r[0];
    c->v.s[4] = LD32(c->r[7] + 116u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b0db0c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b0db0c; }
    c->v.s[10] = LD32(c->r[10] + 140u);
    c->v.s[4] = LD32(c->r[10] + 128u);
    c->v.s[6] = LD32(c->r[10] + 132u);
    c->r[2] = c->r[9] + c->r[0];
    c->r[4] = c->r[7] + 0x580u;
    c->r[3] = c->r[7] + 0x590u;
    c->v.s[8] = LD32(c->r[10] + 136u);
    { uint32_t ea = c->r[7] + 0x54cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[12] = LD32(c->r[2] - 8u);
    c->v.s[3] = LD32(c->r[2] - 24u);
    c->v.s[9] = LD32(c->r[3]);
    c->v.s[11] = LD32(c->r[4]);
    c->v.s[14] = LD32(c->r[2] - 4u);
    c->v.s[5] = LD32(c->r[2] - 20u);
    c->v.s[1] = LD32(c->r[2]);
    c->v.s[7] = LD32(c->r[2] - 16u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    c->v.f[13] = c->v.f[0] - c->v.f[10];
    { uint32_t ea = c->r[7] + 0x550u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[9] = c->v.f[11] + c->v.f[9];
    c->v.f[12] = c->v.f[3] + c->v.f[12];
    c->v.f[14] = c->v.f[5] + c->v.f[14];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->v.f[4] = c->v.f[13] * c->v.f[4];
    c->v.f[6] = c->v.f[13] * c->v.f[6];
    c->v.f[8] = c->v.f[13] * c->v.f[8];
    c->v.s[15] = c->v.s[4];
    c->v.s[16] = c->v.s[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[9] * c->v.f[10]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[10] * c->v.f[11]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[11] = c->v.f[13] * c->v.f[10];
    c->v.f[12] = c->v.f[7] + c->v.f[1];
    c->v.s[13] = c->v.s[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[3] = c->v.s[11];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[12] * c->v.f[10]);
    ST32(c->r[6] + 16u, c->v.s[15]);
    c->v.f[4] = c->v.f[4] - c->v.f[15];
    c->v.f[6] = c->v.f[6] - c->v.f[16];
    ST32(c->r[6] + 20u, c->v.s[16]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[7]);
    ST32(c->r[6] + 24u, c->v.s[13]);
    ST32(c->r[6] + 28u, c->v.s[3]);
    ST32(c->r[6] + 32u, c->v.s[4]);
    ST32(c->r[6] + 36u, c->v.s[6]);
    c->v.f[4] = c->v.f[8] - c->v.f[13];
    c->v.f[6] = c->v.f[11] - c->v.f[3];
    ST32(c->r[6] + 40u, c->v.s[4]);
    ST32(c->r[6] + 44u, c->v.s[6]);
L_b0db0c:;
    c->r[0] = c->r[0] + 0x530u;
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[0], 0x2980u);
    if (COND_NE) { goto L_b0da1c; }
    goto L_b0d9ec;
L_b0db20:;
    c->r[0] = 0xf2f090u;
    { uint32_t ea = 0xb0db2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0db2c:;
    { uint32_t ea = c->r[0] + 0x320u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0db64; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_b0db40:;
    c->r[4] = c->r[10] + c->r[6];
    c->r[0] = c->r[4] + 0x100u;
    c->r[14] = 0xb0db4cu; f_d437b4(c);
    c->r[6] = c->r[6] + 0x680u;
    { uint32_t ea = c->r[4] + 0x770u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x774u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[6], 0x9c00u);
    if (COND_NE) { goto L_b0db40; }
    goto L_b0dc10;
L_b0db64:;
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0dc10; }
    c->r[0] = 0x9d04u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[10] + c->r[0];
L_b0db7c:;
    c->r[2] = c->r[1];
    c->r[1] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[1], 0x17u);
    if (COND_HI) { goto L_b0dbbc; }
    c->r[3] = c->r[10] + (c->r[2] << 2);
    c->r[3] = c->r[3] + 0x9d00u;
L_b0db94:;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x674u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x674u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_CC) { { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); } }
    if (COND_CC) { { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[6]); } }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x17u);
    if (COND_NE) { goto L_b0db94; }
L_b0dbbc:;
    (void)f_subs(c, c->r[1], 0x18u);
    if (COND_NE) { goto L_b0db7c; }
    c->r[0] = 0x17u;
    c->r[5] = c->r[10] + 0x9d00u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[10] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0xf4u; ST32(ea, c->r[0]); }
L_b0dbe4:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x670u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0dc04; }
    { uint32_t ea = c->r[10] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xb0dc04u; f_d42788(c);
L_b0dc04:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x18u);
    if (COND_NE) { goto L_b0dbe4; }
L_b0dc10:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0dc2c(Cpu *restrict c) {
    FN_ENTER(0xb0dc2cu);
L_b0dc2c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x104u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0dc7c; }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x4u;
    c->r[0] = 0x1u;
    c->r[5] = c->r[0] ^ (c->r[1] >> 2);
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_b0dca0; }
    c->r[0] = 0xf2ef50u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = 0xb0dc6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_b0dca4; }
    c->r[14] = 0xb0dc74u; f_d9f01c(c);
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b0dc7c:;
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0xf2ef28u;
    { uint32_t ea = 0xb0dc94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0dc98u; f_d9f190(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
L_b0dca0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b0dca4:;
    c->r[14] = 0xb0dca8u; f_d9f190(c);
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0dcb8(Cpu *restrict c) {
    FN_ENTER(0xb0dcb8u);
L_b0dcb8:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[1]); }
    return;
}
void f_b0dcdc(Cpu *restrict c) {
    FN_ENTER(0xb0dcdcu);
L_b0dcdc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x88u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[6] = c->r[0];
    c->r[5] = c->r[2];
    c->r[0] = c->r[4];
    c->r[14] = 0xb0dd08u; f_a857b4(c);
    { uint32_t ea = c->r[6] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[1] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_b0e2d8; }
    c->r[2] = 0xf2ee90u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xb0dd2cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6] + 0x90u;
    { uint32_t ea = c->r[3] + 0x58u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x9cu; uint32_t v = LD8(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { c->r[2] = c->r[3] + 0x5cu; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x58u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_NE) { c->r[2] = c->r[3] + 0xa0u; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0e2d8; }
    c->v.s[22] = LD32(c->r[0]);
    c->v.s[24] = LD32(c->r[0] + 4u);
    c->v.s[26] = LD32(c->r[0] + 8u);
    c->r[0] = 0xf2ee14u;
    c->v.s[28] = LD32(c->r[2]);
    c->v.s[19] = 0x34000000u;
    c->v.s[21] = 0x0u;
    c->v.s[23] = 0x45800000u;
    c->v.s[30] = 0x3f000000u;
    c->v.s[17] = 0x3f800000u;
    c->r[9] = c->r[6] + 0xf0u;
    c->r[10] = c->r[7] + 0x50u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[8] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = 0xb0dda8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_b0dda8:;
    c->v.s[2] = LD32(c->r[7] + 36u);
    c->v.s[6] = LD32(c->r[7] + 20u);
    c->v.s[0] = LD32(c->r[7] + 32u);
    c->v.s[10] = LD32(c->r[7] + 16u);
    c->v.s[4] = LD32(c->r[7] + 40u);
    c->v.s[8] = LD32(c->r[7] + 24u);
    c->v.s[12] = LD32(c->r[6] + 228u);
    c->v.s[14] = LD32(c->r[6] + 232u);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    c->v.s[10] = c->v.s[24];
    c->v.s[6] = LD32(c->r[6] + 224u);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[2] * c->v.f[30]);
    c->v.f[2] = c->v.f[8] + c->v.f[4];
    c->v.s[4] = c->v.s[22];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[0] * c->v.f[30]);
    c->v.s[0] = c->v.s[26];
    c->v.f[27] = c->v.f[10] + c->v.f[12];
    c->v.f[0] = -c->v.f[0] + (float)(c->v.f[2] * c->v.f[30]);
    c->v.f[29] = c->v.f[4] + c->v.f[6];
    c->v.f[18] = c->v.f[27] * c->v.f[27];
    c->v.f[25] = c->v.f[0] + c->v.f[14];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[20] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    c->v.s[16] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0de2c; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xb0de24u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
    c->r[1] = c->r[13] + 0x60u;
L_b0de2c:;
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0de48; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xb0de40u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
    c->r[1] = c->r[13] + 0x60u;
L_b0de48:;
    c->v.f[0] = c->v.f[17] / c->v.f[20];
    c->v.s[4] = LD32(c->r[7] + 36u);
    c->v.s[8] = LD32(c->r[7] + 20u);
    c->v.s[2] = LD32(c->r[7] + 32u);
    c->v.s[12] = LD32(c->r[7] + 16u);
    c->v.s[6] = LD32(c->r[7] + 40u);
    c->v.s[10] = LD32(c->r[7] + 24u);
    c->v.f[8] = c->v.f[8] + c->v.f[4];
    c->v.f[12] = c->v.f[12] + c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[8] * c->v.f[30]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[30]);
    c->v.s[12] = LD32(c->r[6] + 52u);
    c->v.f[8] = c->v.f[10] + c->v.f[6];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[8] * c->v.f[30]);
    c->v.f[14] = c->v.f[27] * c->v.f[0];
    c->v.f[1] = c->v.f[29] * c->v.f[0];
    c->v.f[0] = c->v.f[25] * c->v.f[0];
    c->v.f[14] = fabsf(c->v.f[14]);
    c->v.f[10] = fabsf(c->v.f[1]);
    c->v.f[0] = fabsf(c->v.f[0]);
    c->v.f[4] = c->v.f[14] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[0] = c->v.f[16] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_b0e2bc; }
    { uint32_t ea = c->r[6] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0ded8; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[14] = 0xb0ded0u; f_b0e2f4(c);
    c->r[1] = c->r[13] + 0x60u;
    goto L_b0dee8;
L_b0ded8:;
    { uint32_t ea = c->r[7] + 0x690u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0e2bc; }
    { uint32_t ea = c->r[7] + 0x690u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0dee8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b0e2bc; }
    { uint32_t ea = c->r[0] + 0x664u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_b0e2bc; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b0df20; }
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    goto L_b0e2bc;
L_b0df20:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[0] = 0x0u;
    c->r[8] = c->r[1];
    c->v.s[0] = LD32(c->r[7] + 16u);
    c->v.s[2] = LD32(c->r[7] + 20u);
    c->v.s[4] = LD32(c->r[7] + 24u);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.s[6] = LD32(c->r[7] + 32u);
    c->v.s[8] = LD32(c->r[7] + 36u);
    c->v.s[10] = LD32(c->r[7] + 40u);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[12] = LD32(c->r[6] + 224u);
    c->v.f[0] = c->v.f[12] + c->v.f[0];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 228u);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    ST32(c->r[13] + 100u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[6] + 232u);
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 104u, c->v.s[4]);
    ST32(c->r[13] + 112u, c->v.s[6]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    ST32(c->r[13] + 120u, c->v.s[2]);
    c->r[14] = 0xb0df98u; f_a855c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    if (COND_LT) { goto L_b0e2a8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0xb0dfb0u; f_a85688(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[8];
    if (COND_NE) { goto L_b0e2ac; }
    c->r[0] = 0x0u;
    c->r[8] = c->r[10];
L_b0dfc4:;
    c->r[9] = 0x5u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
L_b0dfd0:;
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3] + c->r[0];
    (void)f_adds(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_b0e280; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = LD32(c->r[8] + 4u);
    c->v.s[4] = LD32(c->r[8] + 8u);
    c->r[10] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    c->v.s[6] = LD32(c->r[8] + 16u);
    c->v.s[8] = LD32(c->r[8] + 20u);
    c->v.s[10] = LD32(c->r[8] + 24u);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->v.s[12] = LD32(c->r[6] + 224u);
    c->v.f[0] = c->v.f[12] + c->v.f[0];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 228u);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    ST32(c->r[13] + 68u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[6] + 232u);
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 72u, c->v.s[4]);
    ST32(c->r[13] + 80u, c->v.s[6]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    ST32(c->r[13] + 88u, c->v.s[2]);
    c->r[14] = 0xb0e058u; f_a855c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_b0e27c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[5] = c->r[4];
    c->r[14] = 0xb0e070u; f_a85688(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0e090; }
    c->r[1] = c->r[13] + 0x60u;
    c->r[4] = c->r[5];
    goto L_b0e280;
L_b0e090:;
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 68u);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->v.s[8] = LD32(c->r[13] + 80u);
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->v.s[10] = LD32(c->r[13] + 88u);
    c->v.s[29] = c->v.s[24];
    c->v.s[27] = c->v.s[22];
    c->v.s[25] = c->v.s[26];
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[29] = -c->v.f[29] + (float)(c->v.f[0] * c->v.f[30]);
    c->v.f[27] = -c->v.f[27] + (float)(c->v.f[2] * c->v.f[30]);
    c->v.f[0] = c->v.f[6] + c->v.f[10];
    c->v.f[25] = -c->v.f[25] + (float)(c->v.f[0] * c->v.f[30]);
    c->v.f[20] = c->v.f[29] * c->v.f[29];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[18] = sqrtf(c->v.f[20]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    c->v.s[16] = c->v.s[18];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0e0f8; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xb0e0f4u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_b0e0f8:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    c->r[4] = c->r[5];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0e114; }
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0xb0e110u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_b0e114:;
    c->v.f[10] = c->v.f[17] / c->v.f[18];
    c->v.s[0] = LD32(c->r[13] + 84u);
    c->v.s[4] = LD32(c->r[13] + 68u);
    c->v.s[2] = LD32(c->r[13] + 64u);
    c->v.s[8] = LD32(c->r[13] + 80u);
    c->v.s[6] = LD32(c->r[13] + 72u);
    c->v.s[14] = LD32(c->r[13] + 88u);
    c->v.f[4] = c->v.f[4] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[6] = c->v.f[6] + c->v.f[14];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[4] * c->v.f[30]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[30]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[6] * c->v.f[30]);
    c->v.s[2] = LD32(c->r[6] + 120u);
    c->v.f[12] = c->v.f[29] * c->v.f[10];
    c->v.f[1] = c->v.f[27] * c->v.f[10];
    c->v.f[4] = c->v.f[10] * c->v.f[25];
    c->v.f[12] = fabsf(c->v.f[12]);
    c->v.f[10] = fabsf(c->v.f[1]);
    c->v.f[4] = fabsf(c->v.f[4]);
    c->v.f[0] = c->v.f[12] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.s[12] = LD32(c->r[6] + 124u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[16] = c->v.f[16] - c->v.f[0];
    c->v.f[0] = c->v.f[12] - c->v.f[2];
    c->v.f[2] = c->v.f[16] - c->v.f[2];
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[17] - c->v.f[0];
    c->v.f[0] = vminnm_f(c->v.f[0], c->v.f[17]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[19]);
    ST32(c->r[13] + 60u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b0e27c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0e1a4u; f_9c5858(c);
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x38u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x3cu;
    c->r[2] = c->r[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    ST32(c->r[13] + 60u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b0e210; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_b0e210:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb0e220u; f_d9f23c(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[2] = vmaxnm_f(c->v.f[16], c->v.f[21]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0xfffffffcu) | ((c->r[0] << 0) & 0x3u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[6] + 52u);
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[23];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x664u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[8]); }
    c->r[2] = c->r[2] + 0x14u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_b0e27c:;
    c->r[1] = c->r[13] + 0x60u;
L_b0e280:;
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    c->r[8] = c->r[8] + 0x40u;
    if (COND_NE) { goto L_b0dfd0; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[8] = c->r[8] + 0x140u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_b0dfc4; }
    goto L_b0e2ac;
L_b0e2a8:;
    c->r[1] = c->r[8];
L_b0e2ac:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b0e2bc:;
    { uint32_t ea = c->r[6] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[10] = c->r[10] + 0x6a0u;
    c->r[7] = c->r[7] + 0x6a0u;
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_b0dda8; }
L_b0e2d8:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0e2f4(Cpu *restrict c) {
    FN_ENTER(0xb0e2f4u);
L_b0e2f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[1] = 0x9c10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c14u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c18u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c1cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c20u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c24u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c28u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c2cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c30u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c34u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c38u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c3cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c40u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c44u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c48u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c4cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c50u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c54u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c58u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c5cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c60u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c64u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c68u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    c->r[1] = 0x9c6cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x670u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { goto L_b0e578; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[2] = 0x9c10u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[6] + 0x670u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x674u; ST32(ea, c->r[1]); }
    c->r[14] = 0xb0e55cu; f_d437b4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xb0e570u; f_d444d0(c);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_b0e578:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x674u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_b0e58c(Cpu *restrict c) {
    FN_ENTER(0xb0e58cu);
L_b0e58c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    c->r[0] = 0x6059u;
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xe8a80000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b0e62c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0e614; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_b0e614:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_b0e62c:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_b0e654; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_b0e654:;
    c->r[1] = 0x108cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x4de8u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x4fe4u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xb02cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0e730; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0e700; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x9bcu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b0e700:;
    c->r[2] = 0x4de8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x19bdu;
    c->r[0] = 0x4fe8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x93200000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_b0e730:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b0e7a4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2fbu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19dcu;
    c->r[2] = 0x19e0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b0e7a4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbecu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xb0e7b8u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0xfffcu;
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x30000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = c->r[8] & (c->r[7] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b0e80c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xb0e808u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b0e80c:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[7] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x19dcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_b0e8c4; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xb0e84cu; f_15efe30(c);
    c->r[0] = 0xf2e364u;
    { uint32_t ea = 0xb0e858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x9dc0u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    goto L_b0e8c8;
L_b0e8c4:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0e8c8:;
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b0e938; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x302u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x1a14u;
    c->r[2] = 0x1a18u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b0e938:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc08u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb0e94cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[8] & (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b0e998; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xb0e994u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0e998:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1a14u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_b0eab4; }
    c->r[1] = 0xf2e1f0u;
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = 0xb0e9ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] + (c->r[3] << 6);
    { uint32_t ea = c->r[3] + 0x120u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x124u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x128u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x12cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x130u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x134u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x138u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x13cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x140u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x144u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x148u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x14cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x150u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x158u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xf0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x104u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_b0eab4:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b0eac4(Cpu *restrict c) {
    FN_ENTER(0xb0eac4u);
L_b0eac4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    c->r[14] = 0xb0ead4u; f_b0e58c(c);
    c->r[5] = c->r[4];
    c->r[0] = 0xfff8u;
    c->r[2] = 0x38u;
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    c->r[3] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0eb24; }
    c->r[3] = 0x6u;
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_b0eb24:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0eb4c; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_b0eb4c:;
    c->r[0] = 0xf2e060u;
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb0eb5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b0eb94; }
    c->r[1] = 0xf30440u;
    c->r[2] = 0xf30440u;
    { uint32_t ea = 0xb0eb78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb0eb7cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_b0eb94:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b0ec08; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2fbu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19dcu;
    c->r[2] = 0x19e0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_b0ec08:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbecu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xb0ec1cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0xfffcu;
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x30000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = c->r[10] & (c->r[7] << 2);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b0ec70; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xb0ec6cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b0ec70:;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x19dcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_b0ecd4; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[10] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xb0eca8u; f_15efe30(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_b0ecd4:;
    c->r[0] = 0x506cu;
    c->r[1] = c->r[4];
    c->r[3] = 0x4e68u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xafa4u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0ed84; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0ed60; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9cdu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0ed60:;
    c->r[2] = 0x4e68u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5070u;
    c->r[2] = 0x9cdu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0ed84:;
    c->r[3] = 0x3650u;
    c->r[2] = 0x3854u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0ee28; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0ee04; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x6cau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0ee04:;
    c->r[2] = 0x3650u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x3858u;
    c->r[2] = 0x6cau;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0ee28:;
    c->r[3] = 0x4f58u;
    c->r[2] = 0x5154u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0eed0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0eea8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9eau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0eea8:;
    c->r[2] = 0x4f58u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x29ebu;
    c->r[0] = 0x5158u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb890000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b0eed0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_b0eee0(Cpu *restrict c) {
    FN_ENTER(0xb0eee0u);
L_b0eee0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 56u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); c->r[13] = c->r[13] - 56u; }
    c->r[13] = c->r[13] - 0x8a0u;
    c->r[13] = c->r[13] - 0x2000u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0f8b0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0xb0ef1cu; f_b0eac4(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xb0ef24u; f_a857b4(c);
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0f8b0; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x2800u;
    c->r[2] = c->r[13] + 0x98u;
    c->r[1] = c->r[5] + 0x98u;
    c->r[6] = c->r[0] & 0x4u;
    c->r[0] = c->r[0] & 0x100u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0xb0ef60u; f_b0dcdc(c);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x38e0u;
    c->v.s[16] = 0x34000000u;
    c->r[12] = 0x0u;
    c->r[10] = 0x530u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x38dcu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1a0cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14ecu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x154u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x164u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf29da4u;
    { uint32_t ea = 0xb0efc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xc887f0u;
    c->r[0] = 0xb0efccu + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2a53cu;
    { uint32_t ea = 0xb0efd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xc915b4u;
    c->r[0] = 0xb0efe4u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ffc8u;
    { uint32_t ea = 0xb0eff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ffc0u;
    { uint32_t ea = 0xb0effcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_b0f05c; }
L_b0f018:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_b0f044; }
    goto L_b0f8b0;
L_b0f02c:;
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x3b1fu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x172f0000u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_b0f474; }
    goto L_b0f4c0;
L_b0f044:;
    c->r[14] = c->r[13] + 0x2800u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[14] + 0x98u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b0f018; }
L_b0f05c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[14] = 0xb0f074u; f_dd3f10(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b0f0bc; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_b0f0d4; }
L_b0f0bc:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_b0f0d4:;
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x0u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_b0f440; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xb0f0f4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xb0f10cu: goto L_b0f10c; case 0xb0f1acu: goto L_b0f1ac; case 0xb0f24cu: goto L_b0f24c; case 0xb0f2f0u: goto L_b0f2f0; case 0xb0f390u: goto L_b0f390; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_b0f10c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x36e8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b0f440; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f18c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x6dbu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0f18c:;
    c->r[1] = 0x36e8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xa6ddu;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd48b0000u;
    goto L_b0f42c;
L_b0f1ac:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3700u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b0f440; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f22c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x6dbu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0f22c:;
    c->r[1] = 0x3700u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xb6e0u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x81210000u;
    goto L_b0f42c;
L_b0f24c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4e98u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b0f440; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f2cc; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x6dbu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0f2cc:;
    c->r[1] = 0x4e98u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xe9d3u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x533c0000u;
    goto L_b0f42c;
L_b0f2f0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4ea8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b0f440; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f370; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x6dbu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0f370:;
    c->r[1] = 0x4ea8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xc9d5u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf8680000u;
    goto L_b0f42c;
L_b0f390:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4eb8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b0f440; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f410; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x6dbu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0f410:;
    c->r[1] = 0x4eb8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x19d7u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x98680000u;
L_b0f42c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b0f440:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x7b1cu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc5350000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { c->r[7] = (c->r[3] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[7], c->r[0]); }
    if (COND_EQ) { goto L_b0f02c; }
L_b0f474:;
    c->r[7] = 0x7b1cu;
    c->r[3] = c->r[3] & 0xffff00ffu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc5350000u;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[7] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x3b1fu;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x172f0000u;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xb1cu;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
L_b0f4c0:;
    c->r[1] = 0x0u;
L_b0f4c4:;
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b0f8a0; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x98u;
    c->r[7] = c->r[0];
L_b0f4f8:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + (c->r[1] << 3);
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0f880; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[12]); }
    c->v.s[12] = LD32(c->r[4] + 224u);
    c->v.f[18] = c->v.f[12] + c->v.f[0];
    c->v.f[24] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 112u, c->v.s[18]);
    c->v.s[0] = LD32(c->r[4] + 228u);
    c->v.f[20] = c->v.f[0] + c->v.f[2];
    c->v.f[26] = c->v.f[0] + c->v.f[8];
    ST32(c->r[13] + 116u, c->v.s[20]);
    c->v.s[2] = LD32(c->r[4] + 232u);
    c->v.f[22] = c->v.f[2] + c->v.f[4];
    c->v.f[28] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 120u, c->v.s[22]);
    ST32(c->r[13] + 128u, c->v.s[24]);
    ST32(c->r[13] + 132u, c->v.s[26]);
    ST32(c->r[13] + 136u, c->v.s[28]);
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b0f5d8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x301u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_b0f5d8:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc04u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb0f5ecu; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b0f640; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xb0f63cu; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0f640:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_b0f6d0; }
    c->v.f[0] = c->v.f[24] - c->v.f[18];
    c->v.f[2] = c->v.f[26] - c->v.f[20];
    c->v.f[4] = c->v.f[28] - c->v.f[22];
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
L_b0f6d0:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_b0f718; }
    { uint32_t ea = c->r[8] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_b0f718; }
    { uint32_t ea = c->r[8] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_EQ) { goto L_b0f750; }
L_b0f718:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b0f738; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b0f738:;
    { uint32_t ea = c->r[8] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[8] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x138u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[0]); }
L_b0f750:;
    c->r[0] = c->r[9] + 0x20u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
L_b0f75c:;
    { uint32_t r = c->r[9] * c->r[10] + c->r[5]; c->r[0] = r; }
    c->v.s[0] = LD32(c->r[0] + 116u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b0f86c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + 0x560u;
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[18] = (float)c->v.s[0];
    c->v.f[0] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[4] = c->v.s[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_b0f86c; }
    c->r[1] = 0x55cu;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[20] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0xb0f7bcu; f_a826fc(c);
    c->v.f[0] = c->v.f[18] * c->v.f[20];
    c->r[10] = 0x0u;
    c->r[7] = c->r[8];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[0] = c->v.s[0];
    c->r[0] = c->r[0] + c->r[5];
    c->r[6] = (c->r[0] << 3);
    c->r[0] = 0xe38u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_b0f834; }
    c->r[1] = 0x4025u;
    c->r[0] = (c->r[4] >> 3);
    c->r[5] = 0x0u;
    c->r[10] = 0x0u;
    c->r[4] = 0x71c0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x24020000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[8] = (c->r[1] >> 6);
L_b0f808:;
    c->r[0] = c->r[7];
    c->r[1] = 0xe38u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[6];
    c->r[14] = 0xb0f81cu; f_a93ca8(c);
    c->r[0] = 0xe38u;
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] + c->r[4];
    c->r[10] = c->r[10] + c->r[0];
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_CC) { goto L_b0f808; }
L_b0f834:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[7];
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LS) { goto L_b0f858; }
    c->r[1] = c->r[0] - c->r[10];
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = c->r[6];
    c->r[14] = 0xb0f858u; f_a93ca8(c);
L_b0f858:;
    c->r[0] = c->r[8];
    c->r[14] = 0xb0f860u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = 0x530u;
L_b0f86c:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x8u);
    if (COND_NE) { goto L_b0f75c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = 0x0u;
L_b0f880:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x14u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_b0f4f8; }
L_b0f8a0:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_b0f4c4; }
    goto L_b0f018;
L_b0f8b0:;
    c->r[13] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->r[13] = c->r[13] + 56u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_b0f8d8(Cpu *restrict c) {
    FN_ENTER(0xb0f8d8u);
L_b0f8d8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    c->r[14] = 0xb0f8e8u; f_b0e58c(c);
    c->r[0] = 0xf2d2c8u;
    { uint32_t ea = 0xb0f8f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x8185u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x4d2c0000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b0f918; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[1] & 0x104u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0xf30bu; }
    if (COND_EQ) { c->r[0] = (c->r[0] & 0xFFFFu) | 0x430e0000u; }
L_b0f918:;
    c->r[1] = 0x38fu;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & c->r[1];
    c->r[1] = 0xf29bdcu;
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb0f938u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_b0f94c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_b0f964; }
L_b0f94c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_b0f964:;
    c->r[6] = c->r[4];
    c->r[1] = 0xfff8u;
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[1];
    c->r[1] = 0xf830u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1b0000u;
    { uint32_t r = c->r[2] ^ c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f9b0; }
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = 0x0u;
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b0f9b0:;
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[14] = 0xb0f9bcu; f_a86bb4(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1fe00000u;
    c->r[1] = c->r[0] & c->r[1];
    { uint32_t sc = 0; uint32_t r = c->r[1] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0f9f0; }
    c->r[2] = 0xfffeu;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[0] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x600000u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b0f9f0:;
    c->r[0] = 0xf2d1bcu;
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb0fa00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b0fa38; }
    c->r[1] = 0xf2f59cu;
    c->r[2] = 0xf2f59cu;
    { uint32_t ea = 0xb0fa1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb0fa20u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_b0fa38:;
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = 0x506cu;
    c->r[1] = c->r[4];
    c->r[2] = 0x19ceu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[5] = v; }
    c->r[0] = 0xafa4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xce870000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x9cfu;
    if (COND_NE) { c->r[2] = 0x79cdu; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0xb9280000u; }
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_b0fb10; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fae8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[12] = c->r[7] + (c->r[7] << 1);
    c->r[7] = 0x9cdu;
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[12] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fae8:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x7000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb9280000u;
    c->r[1] = c->r[2] ^ c->r[1];
    c->r[2] = 0x5070u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fb10:;
    c->r[3] = 0x4fb0u;
    c->r[2] = 0x51b4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0fbb4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fb90; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9f6u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fb90:;
    c->r[2] = 0x4fb0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x51b8u;
    c->r[2] = 0x9f6u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fbb4:;
    c->r[3] = 0x4fc8u;
    c->r[2] = 0x51ccu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0fc58; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fc34; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9f9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fc34:;
    c->r[2] = 0x4fc8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x51d0u;
    c->r[2] = 0x9f9u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fc58:;
    c->r[3] = 0x4f58u;
    c->r[2] = 0x5154u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0fd00; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fcd8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9eau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fcd8:;
    c->r[2] = 0x4f58u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x29ebu;
    c->r[1] = 0x5158u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xb890000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fd00:;
    c->r[3] = 0x4e18u;
    c->r[2] = 0x500cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0fda8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fd80; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9c1u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fd80:;
    c->r[2] = 0x4e18u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x19c3u;
    c->r[1] = 0x5010u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x52da0000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fda8:;
    c->r[3] = 0x4e00u;
    c->r[2] = 0x4ff4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0fe50; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fe28; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9beu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fe28:;
    c->r[2] = 0x4e00u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x59c0u;
    c->r[1] = 0x4ff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42e30000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fe50:;
    c->r[3] = 0x4ee8u;
    c->r[2] = 0x50ecu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0fef4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0fed0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9ddu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0fed0:;
    c->r[2] = 0x4ee8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x50f0u;
    c->r[2] = 0x9ddu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0fef4:;
    { uint32_t ea = c->r[8] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x5024u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x9u);
    if (COND_NE) { goto L_b1003c; }
    c->r[3] = 0x4e20u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b0ffa4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b0ff80; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9c4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0ff80:;
    c->r[2] = 0x4e20u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5028u;
    c->r[2] = 0x9c4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b0ffa4:;
    c->r[3] = 0x4e38u;
    c->r[2] = 0x503cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b10180; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b10024; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9c7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b10024:;
    c->r[2] = 0x4e38u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5040u;
    c->r[2] = 0x9c7u;
    goto L_b10170;
L_b1003c:;
    c->r[3] = 0x4e30u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b100d8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b100b0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9c4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b100b0:;
    c->r[2] = 0x4e30u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x39c6u;
    c->r[1] = 0x5028u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40dd0000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b100d8:;
    c->r[3] = 0x4e48u;
    c->r[2] = 0x503cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b10180; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b10158; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9c7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b10158:;
    c->r[2] = 0x4e48u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x39c9u;
    c->r[1] = 0x5040u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xed760000u;
L_b10170:;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b10180:;
    c->r[3] = 0x4e58u;
    c->r[2] = 0x5054u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b10228; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b10200; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x9cau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b10200:;
    c->r[2] = 0x4e58u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x89cbu;
    c->r[1] = 0x5058u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x76050000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b10228:;
    c->r[3] = 0x2690u;
    c->r[2] = 0x2894u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b102cc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b102a8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x4d2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b102a8:;
    c->r[2] = 0x2690u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2898u;
    c->r[2] = 0x4d2u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b102cc:;
    c->r[2] = 0xd60ebcu;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xb102dcu + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x19d4u;
    c->r[1] = c->r[1] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x19d8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_b10314(Cpu *restrict c) {
    FN_ENTER(0xb10314u);
L_b10314:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0xc8u;
    c->r[13] = c->r[13] - 0x2800u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[14] = 0xb1033cu; f_b0f8d8(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb1034cu; f_a7ff38(c);
    c->r[1] = c->r[9];
    c->r[6] = 0x7b1cu;
    c->r[7] = 0x3b1fu;
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc5350000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x172f0000u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = (c->r[4] >> 18) & 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[3] = 0x4u - c->r[3];
    if (COND_EQ) { c->r[5] = (c->r[4] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[5], c->r[3]); }
    if (COND_NE) { goto L_b10398; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { goto L_b103d4; }
L_b10398:;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4];
    c->r[6] = c->r[0] | (c->r[3] >> 24);
    c->r[1] = c->r[1] & 0xffff00ffu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 8);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[7]); }
    c->r[1] = 0xb1cu;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[9] + 0x158u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[9] + 0x154u; ST32(ea, c->r[1]); }
L_b103d4:;
    c->r[2] = 0x14ecu;
    c->r[3] = 0xc873c4u;
    c->r[1] = (c->r[4] >> 18);
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | (c->r[0] << 14);
    c->r[0] = 0x1u;
    c->r[1] = c->r[0] & ~c->r[1];
    c->r[3] = 0xb103f8u + c->r[3];
    c->r[2] = c->r[2] & 0xfffffff0u;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + (c->r[2] << 3);
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xf290fcu;
    c->r[1] = c->r[1] & 0xfffu;
    { uint32_t ea = 0xb10418u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_b10434; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b10448; }
L_b10434:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[0] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_b10448:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xc8u;
    c->r[1] = c->r[9];
    c->r[14] = 0xb10458u; f_b0dcdc(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1a0cu;
    c->v.s[18] = 0x34000000u;
    c->v.s[16] = 0x3f800000u;
    c->r[8] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20a8u;
    c->r[10] = c->r[9] + c->r[0];
    c->r[0] = 0x20a4u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x154u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf288c0u;
    { uint32_t ea = 0xb104a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2c700u;
    { uint32_t ea = 0xb104bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2eaf0u;
    { uint32_t ea = 0xb104c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2eae8u;
    { uint32_t ea = 0xb104d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2c6dcu;
    { uint32_t ea = 0xb104e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2eaccu;
    { uint32_t ea = 0xb104ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2eac4u;
    { uint32_t ea = 0xb104f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2c6b8u;
    { uint32_t ea = 0xb10504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2eaa8u;
    { uint32_t ea = 0xb10510u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2eaa0u;
    { uint32_t ea = 0xb1051cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ea90u;
    { uint32_t ea = 0xb10528u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ea88u;
    { uint32_t ea = 0xb10534u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ea78u;
    { uint32_t ea = 0xb10540u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ea70u;
    { uint32_t ea = 0xb1054cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    goto L_b10554;
L_b10554:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b10c44; }
    c->r[0] = c->r[13] + 0xc8u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[7]); }
    c->r[5] = c->r[0];
L_b10588:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[0] + (c->r[2] << 3);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b10c30; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[8]); }
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[8]); }
    c->v.s[12] = LD32(c->r[0] + 224u);
    c->v.f[0] = c->v.f[12] + c->v.f[0];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 160u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 228u);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    ST32(c->r[13] + 164u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[0] + 232u);
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 168u, c->v.s[4]);
    ST32(c->r[13] + 176u, c->v.s[6]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b10678; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x301u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_b10678:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc04u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0xb1068cu; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[5];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b106e0; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xb106dcu; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_b106e0:;
    c->r[0] = c->r[7] + c->r[5];
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_b107a4; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xb10728u; f_15efe30(c);
    c->v.s[0] = LD32(c->r[13] + 160u);
    c->v.s[6] = LD32(c->r[13] + 176u);
    c->v.s[2] = LD32(c->r[13] + 164u);
    c->v.s[8] = LD32(c->r[13] + 180u);
    c->v.s[4] = LD32(c->r[13] + 168u);
    c->v.s[10] = LD32(c->r[13] + 184u);
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    ST32(c->r[13] + 144u, c->v.s[0]);
    ST32(c->r[13] + 148u, c->v.s[2]);
    ST32(c->r[13] + 152u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[8]); }
    ST32(c->r[7], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
L_b107a4:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[16];
    c->v.s[2] = c->v.s[16];
    c->r[2] = ~0x0u;
    c->r[3] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    c->r[14] = 0xb107dcu; f_dd4aa0(c);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[3] = 0x530u;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
L_b10810:;
    { uint32_t r = c->r[4] * c->r[3] + c->r[7]; c->r[0] = r; }
    c->v.s[0] = LD32(c->r[0] + 116u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b10c1c; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x560u;
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = 0x55cu;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[6] = LD32(c->r[1]);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[2] = c->v.s[2];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b10c1c; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x540u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b10934; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b10a10; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b108f8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x3d4u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[6] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[6] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[2]); }
L_b108f8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b109c0; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x3000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x29f20000u;
    c->r[1] = c->r[1] | c->r[2];
    goto L_b109cc;
L_b10934:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b10a10; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b109a4; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x3d4u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
L_b109a4:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b109d8; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[8]); }
    goto L_b109ec;
L_b109c0:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_b109cc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b109e8; }
L_b109d8:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b10a04;
L_b109e8:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
L_b109ec:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
L_b10a04:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
L_b10a10:;
    c->r[1] = 0x1u;
    c->r[2] = c->r[0] + 0x80u;
    c->r[0] = c->r[9];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->r[6] = c->v.s[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0xb2fdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6de10000u;
    c->r[14] = 0xb10a38u; f_742f7c(c);
    { uint32_t ea = c->r[9] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_b10a60; }
    { uint32_t ea = c->r[9] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_b10a60; }
    { uint32_t ea = c->r[9] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_EQ) { goto L_b10a98; }
L_b10a60:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b10a80; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b10a80:;
    { uint32_t ea = c->r[9] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[9] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x138u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x150u; ST32(ea, c->r[0]); }
L_b10a98:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6] + c->r[7];
    c->r[1] = c->r[1] & 0x3u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_b10b04; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_b10b34; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0xfff6u;
    c->r[6] = 0x6u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b10af8; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x150u; ST32(ea, c->r[1]); }
L_b10af8:;
    c->r[10] = 0x5548u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x10000u;
    goto L_b10b7c;
L_b10b04:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0xaaa0u;
    c->r[7] = 0xfff0u;
    c->r[6] = 0xcu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b10b7c; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_b10b60;
L_b10b34:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0x71c0u;
    c->r[7] = 0xfff0u;
    c->r[6] = 0x12u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b10b7c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b10b60:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x150u; ST32(ea, c->r[1]); }
L_b10b7c:;
    c->r[8] = (c->r[0] << 3);
    c->r[0] = c->r[9];
    c->r[14] = 0xb10b88u; f_a826fc(c);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[5] = c->r[9];
    { uint32_t r = c->r[6] * c->r[0]; c->r[0] = r; }
    (void)f_subs(c, c->r[7], c->r[0]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    if (COND_HI) { goto L_b10bd8; }
    c->r[9] = udiv32(c->r[0], c->r[7]);
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
L_b10bb0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    c->r[3] = c->r[8];
    c->r[14] = 0xb10bc4u; f_a93ca8(c);
    c->r[6] = c->r[6] + 0x1u;
    c->r[4] = c->r[4] + c->r[7];
    c->r[8] = c->r[8] + c->r[10];
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_CC) { goto L_b10bb0; }
L_b10bd8:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[5];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_b10bfc; }
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = c->r[8];
    c->r[14] = 0xb10bfcu; f_a93ca8(c);
L_b10bfc:;
    c->r[0] = c->r[9];
    c->r[14] = 0xb10c04u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = 0x0u;
    c->r[3] = 0x530u;
L_b10c1c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_NE) { goto L_b10810; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_b10c30:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[5] = c->r[5] + 0x14u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_b10588; }
L_b10c44:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_NE) { goto L_b10554; }
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
