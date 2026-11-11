#include "cpu.h"
#include "neon_rt.h"
void f_251d6d4(Cpu *c);
void f_283aa78(Cpu *c);
void f_283aad8(Cpu *c);
void f_283ab44(Cpu *c);
void f_283abec(Cpu *c);
void f_283ac04(Cpu *c);
void f_283ac28(Cpu *c);
void f_283adc0(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283f1ac(Cpu *c);
void f_284286c(Cpu *c);
void f_2842914(Cpu *c);
void f_284292c(Cpu *c);
void f_284295c(Cpu *c);
void f_2842974(Cpu *c);
void f_2842980(Cpu *c);
void f_28429c8(Cpu *c);
void f_28429ec(Cpu *c);
void f_2842a64(Cpu *c);
void f_2842a94(Cpu *c);
void f_2842b24(Cpu *c);
void f_2842b90(Cpu *c);
void f_2842b9c(Cpu *c);
void f_2842ba8(Cpu *c);
void f_2842bcc(Cpu *c);
void f_2842bd8(Cpu *c);
void f_2842c2c(Cpu *c);
void f_2842c38(Cpu *c);
void f_2842c44(Cpu *c);
void f_2842c5c(Cpu *c);
void f_2842d28(Cpu *c);
void f_2842da0(Cpu *c);
void f_2842dac(Cpu *c);
void f_2842df4(Cpu *c);
void f_2842e00(Cpu *c);
void f_2842e0c(Cpu *c);
void f_2842e18(Cpu *c);
void f_2842e24(Cpu *c);
void f_2842e30(Cpu *c);
void f_2842e3c(Cpu *c);
void f_2842e48(Cpu *c);
void f_2842e54(Cpu *c);
void f_2842e60(Cpu *c);
void f_2842e6c(Cpu *c);
void f_2842e78(Cpu *c);
void f_2842e84(Cpu *c);
void f_2842e90(Cpu *c);
void f_2842e9c(Cpu *c);
void f_2842ea8(Cpu *c);
void f_2842eb4(Cpu *c);
void f_2842ec0(Cpu *c);
void f_2842ecc(Cpu *c);
void f_2842ed8(Cpu *c);
void f_2842ee4(Cpu *c);
void f_2842ef0(Cpu *c);
void f_2842efc(Cpu *c);
void f_2842f08(Cpu *c);
void f_2842f14(Cpu *c);
void f_2842f20(Cpu *c);
void f_2842f2c(Cpu *c);
void f_2842f38(Cpu *c);
void f_2842f44(Cpu *c);
void f_2842f50(Cpu *c);
void f_2842f5c(Cpu *c);
void f_2842f68(Cpu *c);
void f_2842f74(Cpu *c);
void f_2842f80(Cpu *c);
void f_2842f8c(Cpu *c);
void f_2842f98(Cpu *c);
void f_2842fa4(Cpu *c);
void f_2842fb0(Cpu *c);
void f_2842fbc(Cpu *c);
void f_2842fc8(Cpu *c);
void f_2842fd4(Cpu *c);
void f_2842fe0(Cpu *c);
void f_2842fec(Cpu *c);
void f_2842ff8(Cpu *c);
void f_2843004(Cpu *c);
void f_2843010(Cpu *c);
void f_284301c(Cpu *c);
void f_2843028(Cpu *c);
void f_2843034(Cpu *c);
void f_2843040(Cpu *c);
void f_284304c(Cpu *c);
void f_2843058(Cpu *c);
void f_2843064(Cpu *c);
void f_2843070(Cpu *c);
void f_284307c(Cpu *c);
void f_2843088(Cpu *c);
void f_2843094(Cpu *c);
void f_28430a0(Cpu *c);
void f_28430ac(Cpu *c);
void f_28430b8(Cpu *c);
void f_28430c4(Cpu *c);
void f_28430d0(Cpu *c);
void f_28430dc(Cpu *c);
void f_28430e8(Cpu *c);
void f_28430f4(Cpu *c);
void f_2843100(Cpu *c);
void f_284310c(Cpu *c);
void f_2843118(Cpu *c);
void f_2843124(Cpu *c);
void f_2843130(Cpu *c);
void f_284313c(Cpu *c);
void f_2843148(Cpu *c);
void f_2843154(Cpu *c);
void f_2843160(Cpu *c);
void f_284316c(Cpu *c);
void f_2843178(Cpu *c);
void f_2843184(Cpu *c);
void f_250dc3c(Cpu *restrict c) {
    FN_ENTER(0x250dc3cu);
L_250dc3c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x44u;
    c->r[6] = c->r[0];
    c->r[0] = 0x12a0u;
    c->r[8] = c->r[1];
    c->r[1] = 0x17f4u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[6] + c->r[0];
    c->r[0] = c->r[2] + (c->r[2] << 3);
    c->r[0] = c->r[6] + (c->r[0] << 2);
    if (COND_NE) { c->r[7] = c->r[0] + c->r[1]; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[7] + 0x1du; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1eu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 1);
    if (COND_NE) { goto L_250dc98; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_GE) { goto L_250dc98; }
    c->r[0] = 0x74e300u;
    { uint32_t ea = 0x250dc98u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_250dca4;
L_250dc98:;
    c->r[0] = 0x74e2ecu;
    c->r[1] = c->r[1] - 0x2u;
    { uint32_t ea = 0x250dca8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_250dca4:;
    c->r[0] = c->r[8];
    c->r[3] = 0x8u;
    c->r[14] = 0x250dcb0u; f_2842a94(c);
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_250dcc8; }
    c->r[0] = 0x74e2d8u;
    { uint32_t ea = 0x250dcc8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_250dcf8;
L_250dcc8:;
    c->r[2] = 0x74e2bcu;
    { uint32_t ea = c->r[7] + 0x1du; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[3] = 0x8u;
    { uint32_t ea = 0x250dce0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 3);
    c->r[0] = c->r[8];
    c->r[14] = 0x250dce8u; f_2842a94(c);
    c->r[0] = 0x74e298u;
    { uint32_t ea = 0x250dcf4u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x7u;
L_250dcf8:;
    c->r[0] = c->r[8];
    c->r[3] = 0x8u;
    c->r[14] = 0x250dd04u; f_2842a94(c);
    c->r[0] = 0x11fcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_250dd50; }
    c->r[0] = 0x74e274u;
    c->r[6] = 0x1u;
    { uint32_t ea = 0x250dd2cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
L_250dd28:;
    c->r[0] = c->r[7] + c->r[6];
    c->r[2] = c->r[5];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x250dd40u; f_2842a94(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_250dd28; }
L_250dd50:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1274u;
    c->r[3] = 0x8u;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[7] + 0x1du; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x250dd88u; f_2842a94(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[6] = c->r[13] + 0x24u;
    c->r[1] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x250dda4u; f_2842bcc(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_250de84; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x0u;
    c->r[9] = c->r[1] + 0x9u;
    c->r[1] = 0x74e1d8u;
    { uint32_t ea = 0x250ddccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x74e1ccu;
    { uint32_t ea = 0x250ddd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
L_250ddd8:;
    c->r[5] = c->r[9] + c->r[8];
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_LT) { goto L_250de20; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[4];
    c->r[3] = 0x8u;
    c->r[2] = c->r[0] + c->r[1];
    c->r[0] = c->r[7];
    c->r[1] = 0x8u;
    c->r[14] = 0x250de0cu; f_2842a94(c);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x4u;
    c->r[0] = c->r[7];
    goto L_250de68;
L_250de20:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[1], 0x4u);
    c->r[2] = c->r[0] + c->r[2];
    if (COND_GT) { goto L_250de60; }
    c->r[7] = c->r[4];
    c->r[1] = 0x0u;
    c->r[3] = 0x8u;
    c->r[0] = c->r[7];
    c->r[14] = 0x250de48u; f_2842a94(c);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x3u;
    c->r[1] = c->r[1] - c->r[0];
    c->r[0] = c->r[7];
    goto L_250de68;
L_250de60:;
    c->r[1] = c->r[1] + 0x4u;
    c->r[0] = c->r[4];
L_250de68:;
    c->r[3] = 0x8u;
    c->r[14] = 0x250de70u; f_2842a94(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_LT) { goto L_250ddd8; }
L_250de84:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_250deb4; }
    c->r[0] = 0x74e0f8u;
    { uint32_t ea = c->r[9] + 0x1fu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = 0x250deb0u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x250deb4u; f_2842a94(c);
L_250deb4:;
    { uint32_t ea = c->r[9] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_250e038; }
    (void)f_subs(c, c->r[10], 0x2u);
    c->r[8] = c->r[6];
    if (COND_NE) { goto L_250df28; }
    c->r[0] = 0x16a8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_250df28; }
    c->r[0] = 0x16acu;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[9] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[6] = c->r[0] + 0x8u;
    c->r[1] = c->r[0] + 0x9u;
    c->r[0] = 0x74e094u;
    (void)f_subs(c, c->r[6], 0x13u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = 0x250df18u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x250df1cu; f_2842a94(c);
    (void)f_subs(c, c->r[6], 0x14u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_CC) { goto L_250df84; }
L_250df28:;
    c->r[0] = 0x11f8u;
    { uint32_t ea = c->r[9] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    c->r[7] = c->r[4];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[5] = sdiv32(c->r[10], c->r[0]);
    c->r[0] = 0x74e060u;
    { uint32_t ea = 0x250df50u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[14] = 0x250df58u; f_2842a94(c);
    c->r[0] = (uint32_t)(((int32_t)(c->r[6] << 15)) >> 16);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[6] = c->r[8];
    c->r[3] = 0x8u;
    c->r[1] = c->r[10] - c->r[1] * c->r[0];
    c->r[0] = 0x126cu;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x250df7cu; f_2842a94(c);
    c->r[0] = 0x16acu;
    c->r[5] = c->r[6] + c->r[0];
L_250df84:;
    { uint32_t ea = c->r[9] + 0x1au; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[10] = c->r[4];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1270u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x250dfa8u; f_2842a94(c);
    c->r[0] = 0x74dff8u;
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = 0x250dfbcu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x250dfc0u; f_2842a94(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_250e00c; }
    c->r[0] = 0x74dfd4u;
    c->r[5] = c->r[9] + 0x4u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x250dfe4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_250dfe0:;
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x250dffcu; f_2842a94(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_250dfe0; }
L_250e00c:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[8];
    c->r[5] = c->r[10];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_250e038; }
    c->r[0] = 0x74df88u;
    { uint32_t ea = c->r[9] + 0x21u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = 0x250e034u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x250e038u; f_2842a94(c);
L_250e038:;
    { uint32_t ea = c->r[9] + 0x1du; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = 0x16a8u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x74df2cu;
    { uint32_t ea = c->r[9] + 0x22u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x250e058u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x250e05cu; f_2842a94(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250e0a0(Cpu *restrict c) {
    FN_ENTER(0x250e0a0u);
L_250e0a0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x6cu;
    c->r[12] = c->r[0];
    c->r[0] = 0x74de74u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x250e0c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[6] = (uint32_t)((int32_t)c->r[7] >> 4);
    c->r[1] = c->r[1] & 0xfffffff0u;
    (void)f_subs(c, c->r[1], c->r[7]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_GE) { goto L_250e164; }
    c->r[1] = c->r[3];
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[7]; ST8(ea, c->r[0]); c->r[1] = ea; }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[1] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x9u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0xcu; ST8(ea, c->r[0]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[0]); }
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + 0x8u; ST8(ea, c->r[0]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x74dddcu;
    { uint32_t ea = 0x250e160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_250e168;
L_250e164:;
    c->r[0] = c->r[2];
L_250e168:;
    c->r[1] = 0x0u - c->r[0];
    c->r[7] = c->r[6];
    c->r[1] = c->r[1] & 0x3u;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[4] = c->r[0] + c->r[1];
    c->r[1] = 0x74ddacu;
    c->r[0] = c->r[4] + (c->r[7] << 6);
    { uint32_t ea = 0x250e190u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_250e208; }
    c->r[0] = (c->r[7] << 4);
    c->r[1] = c->r[4] + 0xcu;
    c->r[2] = 0x0u;
L_250e1a0:;
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_MI) { c->r[7] = 0x0u - c->r[7]; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_MI) { c->r[7] = 0x0u - c->r[7]; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x10u;
    if (COND_LT) { goto L_250e1a0; }
    c->r[0] = 0x74dd34u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x250e208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_250e208:;
    c->r[1] = 0x0u - c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[1] & 0x3u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[7] << 2);
    c->r[1] = 0x0u - c->r[0];
    c->r[3] = c->r[1] & 0x3u;
    c->r[1] = 0x74dcf8u;
    c->r[2] = c->r[0] + c->r[3];
    c->r[0] = c->r[2] + (c->r[7] << 2);
    { uint32_t ea = 0x250e244u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_250e820; }
    c->r[0] = (c->r[7] << 2);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[10] = 0x0u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x74dd74u;
    { uint32_t ea = 0x250e270u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
L_250e28c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    goto L_250e368;
L_250e29c:;
    { uint32_t ea = c->r[2] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + (c->r[10] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[7] + 0x3cu; ST32(ea, c->r[3]); }
L_250e368:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[6] + c->r[1];
    (void)f_subs(c, c->r[8], c->r[14]);
    if (COND_LE) { goto L_250e384; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[12] = 0x1u;
    goto L_250e434;
L_250e384:;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[8]); }
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[6] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { goto L_250e434; }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { goto L_250e434; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { goto L_250e434; }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { goto L_250e434; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { goto L_250e434; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { goto L_250e434; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_LE) { { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); } }
    if (COND_LE) { c->r[12] = 0x0u; }
L_250e434:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1u;
    c->r[14] = c->r[4] + c->r[8];
    (void)f_subs(c, c->r[14], c->r[2]);
    if (COND_LE) { goto L_250e454; }
    c->r[9] = c->r[4];
    c->r[14] = c->r[8];
    goto L_250e4a4;
L_250e454:;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[9] = c->r[6] + c->r[5];
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_LE) { goto L_250e474; }
    c->r[9] = c->r[4];
    goto L_250e4a4;
L_250e474:;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + c->r[3];
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_GT) { goto L_250e4a4; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + c->r[3];
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_LE) { goto L_250e520; }
L_250e4a4:;
    c->r[5] = 0x1u;
L_250e4a8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + c->r[14];
    c->r[6] = c->r[5] + c->r[12];
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LE) { goto L_250e4c8; }
    c->r[5] = c->r[9];
    c->r[4] = c->r[14];
    goto L_250e4e8;
L_250e4c8:;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + c->r[5];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_GT) { c->r[5] = c->r[9]; }
    if (COND_LE) { c->r[1] = 0x0u; }
    if (COND_LE) { { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[5]); } }
L_250e4e8:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = c->r[5] + c->r[4];
    c->r[1] = c->r[6] + c->r[1];
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_GT) { goto L_250e514; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[3] + (c->r[10] << 2); ST32(ea, c->r[5]); }
L_250e514:;
    (void)f_adds(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_250e29c; }
    goto L_250e52c;
L_250e520:;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[4]); }
    c->r[5] = 0x0u;
    goto L_250e4a8;
L_250e52c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[7] = c->r[7] + 0x40u;
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_NE) { goto L_250e28c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_250e82c; }
    c->r[2] = 0x74da6cu;
    c->r[12] = c->r[7] + (c->r[7] << 3);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[9] = ~0x80000000u;
    c->r[3] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x250e57cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[14] = c->r[2] + c->r[12];
    c->r[2] = 0x74da60u;
    { uint32_t ea = 0x250e58cu + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
L_250e588:;
    { uint32_t ea = c->r[14] + c->r[3]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
L_250e594:;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x11u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[3] + (c->r[3] << 3);
    if (COND_LE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; } }
    c->r[2] = c->r[2] + 0x4u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[1] = c->r[5] + (c->r[1] << 1);
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + c->r[6];
    if (COND_NE) { goto L_250e594; }
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_LT) { c->r[8] = c->r[3]; }
    c->r[3] = c->r[3] + 0x1u;
    if (COND_LT) { c->r[9] = c->r[6]; }
    (void)f_subs(c, c->r[3], 0x9u);
    if (COND_NE) { goto L_250e588; }
    c->r[0] = 0x74d9ecu;
    c->r[1] = c->r[8];
    c->r[3] = 0x8u;
    { uint32_t ea = 0x250e5ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + c->r[12];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x250e5f4u; f_2842a94(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_250e8e0; }
    c->r[0] = 0x74d9c0u;
    c->r[1] = c->r[8] + (c->r[8] << 3);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = 0x250e61cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[1] << 1);
    c->r[0] = 0x74d9b4u;
    { uint32_t ea = 0x250e628u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + 0xa2u;
    c->r[0] = 0x74d9a8u;
    { uint32_t ea = 0x250e634u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xa2u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_250e638:;
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_250e69c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x11u;
    c->r[2] = c->r[8];
    c->r[3] = 0x8u;
    c->r[14] = 0x250e658u; f_2842a94(c);
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_250e690; }
    c->r[6] = 0x0u;
L_250e668:;
    c->r[0] = c->r[4];
    c->r[1] = 0x11u;
    c->r[2] = c->r[5];
    c->r[3] = 0x8u;
    c->r[14] = 0x250e67cu; f_2842a94(c);
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_250e668; }
L_250e690:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_250e6a4;
L_250e69c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
L_250e6a4:;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[3] = 0x8u;
    c->r[14] = 0x250e6b4u; f_2842a94(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_250e638; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_250e8e0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
L_250e6d8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_250e6f4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[14] = 0x250e6f4u; f_2842df4(c);
L_250e6f4:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[10] = c->r[10] + 0x40u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_250e6d8; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_250e8e0; }
    c->r[0] = 0x74d8bcu;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x250e724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x74d8b0u;
    { uint32_t ea = 0x250e730u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x74d8a8u;
    { uint32_t ea = 0x250e738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_250e740:;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_250e7f8; }
    if (COND_NE) { goto L_250e788; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x10u;
L_250e75c:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = c->r[7] + 0x1u; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    c->r[1] = c->r[1] & 0x1u;
    c->r[14] = 0x250e77cu; f_2842a94(c);
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_250e75c; }
    goto L_250e7f8;
L_250e788:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_250e79c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[8];
    c->r[0] = c->r[0] + c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    c->r[6] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
L_250e7b8:;
    c->r[7] = c->r[7] - 0x1u;
    c->r[0] = c->r[10];
    c->r[2] = c->r[4];
    c->r[3] = 0x8u;
    c->r[1] = c->r[5] & sh_lsr(c->r[6], c->r[7]);
    c->r[14] = 0x250e7d0u; f_2842a94(c);
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_GT) { goto L_250e7b8; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] & 0x1u;
    c->r[0] = c->r[10];
    c->r[3] = 0x8u;
    c->r[14] = 0x250e7ecu; f_2842a94(c);
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x10u);
    if (COND_NE) { goto L_250e79c; }
L_250e7f8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_250e740; }
    goto L_250e8e0;
L_250e820:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 1);
    goto L_250e830;
L_250e82c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
L_250e830:;
    c->r[0] = 0x74d7a8u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x250e840u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7] + (c->r[7] << 3);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[7]; }
    if (COND_CC) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[6]; }
    if (COND_CC) { c->r[1] = 0x2u; }
    { uint32_t ea = c->r[2] + 0x7u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[5]; }
    if (COND_CC) { c->r[1] = 0x3u; }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[4]; }
    if (COND_CC) { c->r[1] = 0x4u; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[7]; }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD8(ea); c->r[7] = v; }
    if (COND_CC) { c->r[1] = 0x5u; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[7]; }
    if (COND_CC) { c->r[1] = 0x6u; }
    c->r[7] = (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_CC) { c->r[3] = c->r[6]; }
    if (COND_CC) { c->r[1] = 0x7u; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[3]);
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x74d700u;
    c->r[3] = 0x8u;
    if (COND_CC) { c->r[1] = 0x8u; }
    { uint32_t ea = 0x250e8d8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[0];
    c->r[0] = c->r[12];
    c->r[14] = 0x250e8e0u; f_2842a94(c);
L_250e8e0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x250e904u; f_2842e00(c);
    c->r[0] = 0x74d628u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x250e914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250e964(Cpu *restrict c) {
    FN_ENTER(0x250e964u);
L_250e964:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_250eafc; }
    c->r[9] = 0xf7fu;
    c->r[10] = 0x0u;
L_250e994:;
    { uint32_t ea = c->r[6] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x250e99cu; f_2842ba8(c);
    { uint32_t ea = c->r[6] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x250e9a4u; f_2842ba8(c);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf7d60000u;
    c->r[0] = c->r[1] + (c->r[0] << 16);
    c->r[1] = 0x8cbu;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[0]); }
    c->r[1] = (uint32_t)(((int32_t)(c->r[1] << 8)) >> 24);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_LT) { c->r[0] = c->r[0] + 0x1u; }
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    if (COND_LT) { { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[0]); } }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[0] = c->r[2]; }
    (void)f_subs(c, c->r[1], 0x3fu);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    if (COND_GT) { c->r[0] = 0x3fu; }
    { uint32_t r = c->r[10] | c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_250ea7c; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[1] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[1]); }
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_250ea38; }
    c->r[1] = ~0x7u;
    c->r[1] = c->r[1] - c->r[3];
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] + 0x1u;
    c->r[1] = c->r[0] + (c->r[1] >> 1);
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[1]); }
L_250ea38:;
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    (void)f_adds(c, c->r[2], 0x4u);
    if (COND_LE) { c->r[1] = ~0x3u; }
    (void)f_subs(c, c->r[2], 0x24u);
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    if (COND_GT) { c->r[1] = 0x24u; }
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[1] = (c->r[1] << 1) - c->r[0]; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_250eac0;
L_250ea7c:;
    c->r[2] = c->r[1] - 0x4u;
    (void)f_subs(c, c->r[2], 0x40u);
    if (COND_LT) { goto L_250eaa0; }
    (void)f_subs(c, c->r[0], c->r[2]);
    c->r[1] = c->r[2];
    if (COND_GT) { goto L_250eab8; }
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_LS) { c->r[0] = 0x3fu; }
    goto L_250eab4;
L_250eaa0:;
    c->r[1] = 0x3fu;
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_HI) { goto L_250eab8; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { c->r[0] = c->r[2]; }
L_250eab4:;
    c->r[1] = c->r[0];
L_250eab8:;
    { uint32_t ea = c->r[7] + c->r[10]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
L_250eac0:;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[1] = 0x1c71u;
    c->r[2] = 0x1du;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = 0x82au;
    c->r[0] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_GE) { c->r[0] = c->r[9]; }
    c->r[14] = 0x250eaecu; f_2842e0c(c);
    { uint32_t ea = c->r[6] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_NE) { goto L_250e994; }
L_250eafc:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250eb04(Cpu *restrict c) {
    FN_ENTER(0x250eb04u);
L_250eb04:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[3];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_250ebcc; }
    c->r[4] = 0x0u;
    c->r[10] = 0x82au;
    c->r[8] = 0xf7fu;
L_250eb38:;
    { uint32_t r = c->r[4] | c->r[9]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[0] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_250eb68; }
    c->r[0] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[2] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { c->r[0] = (c->r[0] << 1) - c->r[2]; }
    c->r[0] = c->r[0] + c->r[1];
    goto L_250eb78;
L_250eb68:;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x10u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[1]; }
L_250eb78:;
    c->r[1] = (c->r[0] << 24);
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[2] = 0x1du;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[1], 0x3f000000u);
    c->r[1] = 0x1c71u;
    if (COND_GT) { c->r[0] = 0x3fu; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GE) { c->r[0] = c->r[8]; }
    c->r[14] = 0x250ebb8u; f_2842e0c(c);
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { goto L_250eb38; }
L_250ebcc:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250ebd4(Cpu *restrict c) {
    FN_ENTER(0x250ebd4u);
L_250ebd4:;
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[2] = c->r[0];
    if (COND_LT) { c->r[0] = 0x0u; }
    if (COND_LT) { return; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_250ebf8; }
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    goto L_250ec00;
L_250ebf8:;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
L_250ec00:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { return; }
    c->r[2] = c->r[2] + c->r[3];
    c->r[1] = c->r[1] - c->r[3];
    c->r[2] = c->r[2] + 0x1u;
L_250ec14:;
    { uint32_t ea = c->r[2] - 0x1u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[0] = c->r[3] + (c->r[0] << 8);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x2u;
    c->r[0] = c->r[3] + (c->r[0] << 8);
    if (COND_NE) { goto L_250ec14; }
    return;
}
void f_250ec34(Cpu *restrict c) {
    FN_ENTER(0x250ec34u);
L_250ec34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[1] = 0x10a0u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x250ec4cu; f_283abec(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x948u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x250ec64u; f_2842e18(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x250ec6cu; f_2842e24(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_250ec74(Cpu *restrict c) {
    FN_ENTER(0x250ec74u);
L_250ec74:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[1];
    c->r[1] = 0x2630u;
    c->r[5] = c->r[0];
    c->r[14] = 0x250ec8cu; f_283abec(c);
    c->r[0] = 0x1404u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x3c0000u;
    c->r[14] = 0x250ec9cu; f_2842ba8(c);
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfff80000u;
    c->r[0] = c->r[1] + (c->r[0] << 8);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1258u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_2842e30(c);
}
void f_250ecc8(Cpu *restrict c) {
    FN_ENTER(0x250ecc8u);
L_250ecc8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[12] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_250ecf8; }
L_250ece0:;
    { uint32_t ea = c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = c->r[12] + 0x2u; c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[4] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[0] = c->r[0] + sh_asr(c->r[4], c->r[2]);
    if (COND_NE) { goto L_250ece0; }
L_250ecf8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_250ecfc(Cpu *restrict c) {
    FN_ENTER(0x250ecfcu);
L_250ecfc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[14] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
L_250ed14:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[4] = v; }
    c->r[12] = f_subs(c, c->r[12], 0x1u);
    c->r[4] = c->r[4] - c->r[3];
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[3] = c->r[3] + (c->r[4] >> 2);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_NE) { goto L_250ed14; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_250ed3c(Cpu *restrict c) {
    FN_ENTER(0x250ed3cu);
L_250ed3c:;
    c->r[1] = clz32(c->r[0]);
    c->r[2] = 0x18u - c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_250ed68; }
    if (COND_LT) { goto L_250ed58; }
    c->r[0] = sh_ror(c->r[0], c->r[2]);
    goto L_250ed68;
L_250ed58:;
    c->r[3] = 0x0u - c->r[2];
    c->r[2] = c->r[2] + 0x20u;
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
    c->r[0] = c->r[2] | sh_lsl(c->r[0], c->r[3]);
L_250ed68:;
    c->r[0] = c->r[0] & 0x7fu;
    c->r[1] = 0x1fu - c->r[1];
    c->r[2] = 0x80u - c->r[0];
    c->r[1] = c->r[0] | (c->r[1] << 7);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = 0xb3u;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[0] = c->r[1] + (c->r[0] >> 16);
    return;
}
void f_250ed8c(Cpu *restrict c) {
    FN_ENTER(0x250ed8cu);
L_250ed8c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[1] = 0x0u; }
    if (COND_LT) { c->r[0] = c->r[1]; }
    if (COND_LT) { return; }
    c->r[2] = 0xf7eu;
    c->r[1] = ~0x80000000u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { goto L_250ee04; }
    c->r[3] = (c->r[0] >> 7);
    c->r[1] = 0x1u;
    c->r[2] = c->r[0] & 0x7fu;
    (void)f_subs(c, c->r[0], 0x800u);
    c->r[1] = sh_lsl(c->r[1], c->r[3]);
    if (COND_GE) { goto L_250ede4; }
    c->r[0] = 0x80u - c->r[2];
    c->r[12] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[0] = ~0xadu;
    { uint32_t r = c->r[12] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = sh_lsl(c->r[0], c->r[3]);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 7);
    goto L_250ee00;
L_250ede4:;
    c->r[0] = 0x80u - c->r[2];
    c->r[3] = ~0xadu;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 7);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
L_250ee00:;
    c->r[1] = c->r[0] + c->r[1];
L_250ee04:;
    c->r[0] = c->r[1];
    return;
}
void f_250ee0c(Cpu *restrict c) {
    FN_ENTER(0x250ee0cu);
L_250ee0c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x7cu;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[0] = 0x1238u;
    c->r[3] = c->r[2];
    c->r[6] = c->r[13] + 0x3cu;
    c->r[9] = c->r[1];
    c->r[7] = c->r[10];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[7] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] - 0x6cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    c->r[14] = 0x250ee50u; f_2842bd8(c);
    c->r[0] = 0xe76eu;
    c->r[1] = c->r[5] + (c->r[5] << 2);
    (void)f_subs(c, c->r[4], 0x2u);
    c->r[12] = 0x0u;
    { uint32_t r = c->r[5] * c->r[0]; c->r[0] = r; }
    c->r[1] = 0x0u - c->r[1];
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0xc4au;
    c->r[8] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    if (COND_EQ) { c->r[8] = c->r[8] + (uint32_t)((int32_t)c->r[8] >> 1); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_250ef14; }
    c->r[0] = 0x12bfu;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[9] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_GT) { goto L_250ef14; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[11] - 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x250eeb8u; f_2842e3c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[13] + 0x1cu;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4];
    c->r[14] = 0x250eeccu; f_2842bd8(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_250ef14; }
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[1] = (c->r[1] << 27);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
L_250eef0:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = c->r[4] + 0x2u; c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[3] = (c->r[3] >> 16);
    c->r[3] = c->r[3] + (c->r[5] >> 1);
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); c->r[6] = c->r[6] + 0x2u; }
    if (COND_LT) { goto L_250eef0; }
L_250ef14:;
    c->r[0] = 0x1274u;
    c->r[1] = 0x12bdu;
    c->r[3] = c->r[13] + 0x3cu;
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1254u;
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x12a8u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[10] + c->r[0];
    c->r[1] = c->r[6];
    c->r[14] = 0x250ef50u; f_2842e48(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[4] = c->r[8] + 0x20u;
    c->r[0] = c->r[4];
    c->r[14] = 0x250ef68u; f_2842b9c(c);
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_250efac; }
    c->r[0] = 0x12bfu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[11] - 0x3cu;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x250ef94u; f_2842e3c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0x250efa4u; f_2842b9c(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_250efac:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = (c->r[0] << 1);
    c->r[0] = c->r[8];
    c->r[14] = 0x250efc0u; f_283aa78(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250efc8(Cpu *restrict c) {
    FN_ENTER(0x250efc8u);
L_250efc8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x6cu;
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[3];
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_250f268; }
    c->r[0] = 0x74cfe4u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x250f00cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x80000000u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cfd0u;
    { uint32_t ea = 0x250f024u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cf90u;
    { uint32_t ea = 0x250f030u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cfbcu;
    { uint32_t ea = 0x250f03cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cfb4u;
    { uint32_t ea = 0x250f048u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_250f050:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
L_250f09c:;
    c->r[0] = 0x1855u;
    c->r[0] = c->r[0] - c->r[7];
    c->r[14] = 0x250f0a8u; f_2842e0c(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] - 0x33u;
    c->r[2] = c->r[11] - 0x28u;
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x20u;
    c->r[0] = c->r[0] + c->r[5];
    c->r[14] = 0x250f0f4u; f_2842e54(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + 0x33u;
    c->r[14] = 0x250f104u; f_2842ba8(c);
    c->r[10] = c->r[4] + c->r[10];
    c->r[0] = c->r[0] + c->r[7];
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { c->r[10] = ~0x80000000u; }
    (void)f_subs(c, c->r[0], 0x380u);
    if (COND_LT) { goto L_250f134; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x33u;
    c->r[14] = 0x250f12cu; f_2842ba8(c);
    c->r[0] = c->r[7] + c->r[0];
    c->r[8] = c->r[0] - 0x380u;
L_250f134:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[6] + 0x64u;
    c->r[9] = c->r[9] + 0xau;
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_NE) { goto L_250f09c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[10], 0x80000001u);
    if (COND_EQ) { c->r[10] = ~0x80000001u; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_GE) { goto L_250f18c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x250f180u; f_283aa78(c);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
L_250f18c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_GE) { goto L_250f1a8; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_250f1b4; }
L_250f1a8:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_LT) { goto L_250f050; }
L_250f1b4:;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_250f260; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x74cdecu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x250f1d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x4u;
L_250f1dc:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] << 7);
    { uint32_t ea = c->r[1] - 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] << 7);
    { uint32_t ea = c->r[1] - 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] << 7);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] << 7);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = c->r[7] + 0x1u; c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] << 7);
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0xau;
    if (COND_NE) { goto L_250f1dc; }
L_250f260:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_250f280;
L_250f268:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[3];
    c->r[14] = 0x250f280u; f_283aa78(c);
L_250f280:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250f2a4(Cpu *restrict c) {
    FN_ENTER(0x250f2a4u);
L_250f2a4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[6] = c->r[1];
    c->r[1] = 0x12cu;
    c->r[7] = c->r[3];
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    c->r[14] = 0x250f2c4u; f_283abec(c);
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_250f2f4; }
    (void)f_subs(c, c->r[6], 0x3e80u);
    if (COND_LT) { goto L_250f330; }
    if (COND_NE) { c->r[1] = 0xbb80u; }
    if (COND_NE) { (void)f_subs(c, c->r[6], c->r[1]); }
    if (COND_EQ) { goto L_250f344; }
    c->r[1] = 0x5dc0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_250f344; }
    goto L_250f5a8;
L_250f2f4:;
    (void)f_subs(c, c->r[6], 0x1f40u);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x3e80u); }
    if (COND_EQ) { goto L_250f30c; }
    c->r[1] = 0x2ee0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_250f5a8; }
L_250f30c:;
    (void)f_subs(c, c->r[5], 0x3e80u);
    if (COND_LT) { goto L_250f3a0; }
    if (COND_NE) { c->r[1] = 0xbb80u; }
    if (COND_NE) { (void)f_subs(c, c->r[5], c->r[1]); }
    if (COND_EQ) { goto L_250f3b4; }
    c->r[1] = 0x5dc0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_250f3b4; }
    goto L_250f5a8;
L_250f330:;
    (void)f_subs(c, c->r[6], 0x1f40u);
    if (COND_EQ) { goto L_250f344; }
    c->r[1] = 0x2ee0u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_250f5a8; }
L_250f344:;
    (void)f_subs(c, c->r[5], 0x1f40u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x3e80u); }
    if (COND_EQ) { goto L_250f35c; }
    c->r[1] = 0x2ee0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_250f5a8; }
L_250f35c:;
    c->r[0] = 0x5dc0u;
    c->r[1] = 0x0u;
    c->r[2] = (c->r[6] >> 12);
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = ~0x0u;
    if (COND_GT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x3e80u);
    if (COND_GT) { c->r[2] = c->r[0] + (c->r[6] >> 12); }
    c->r[0] = sh_asr(c->r[2], c->r[1]);
    c->r[0] = (c->r[0] << 1);
    c->r[0] = c->r[0] + sh_asr(c->r[2], c->r[1]);
    c->r[1] = 0x65e951u;
    c->r[1] = 0x250f394u + c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + (c->r[5] >> 12);
    c->r[0] = c->r[0] - 0x4u;
    goto L_250f3f0;
L_250f3a0:;
    (void)f_subs(c, c->r[5], 0x1f40u);
    if (COND_EQ) { goto L_250f3b4; }
    c->r[1] = 0x2ee0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_250f5a8; }
L_250f3b4:;
    c->r[0] = 0x5dc0u;
    c->r[3] = 0x65e90cu;
    c->r[1] = 0x0u;
    c->r[2] = (c->r[5] >> 12);
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = ~0x0u;
    if (COND_GT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x3e80u);
    if (COND_GT) { c->r[2] = c->r[0] + (c->r[5] >> 12); }
    c->r[0] = (c->r[6] >> 12);
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[3] = 0x250f3e8u + c->r[3];
    c->r[0] = c->r[3] + c->r[0];
    c->r[0] = c->r[0] + sh_asr(c->r[2], c->r[1]);
    c->r[0] = c->r[0] - 0x6u;
L_250f3f0:;
    c->r[1] = 0x4dd3u;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10620000u;
    { uint64_t r = (uint64_t)c->r[6] * c->r[1]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[3] >> 6);
    { uint64_t r = (uint64_t)c->r[5] * c->r[1]; c->r[1] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[3] >> 6);
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + (c->r[2] << 2);
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_250f440; }
    (void)f_subs(c, c->r[5], (c->r[6] << 1));
    if (COND_NE) { goto L_250f470; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    goto L_250f54c;
L_250f440:;
    if (COND_GE) { goto L_250f480; }
    c->r[1] = c->r[6] + (c->r[6] << 1);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], (c->r[5] << 2));
    if (COND_NE) { goto L_250f48c; }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cba4u;
    { uint32_t ea = 0x250f470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_250f548;
L_250f470:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_250f550;
L_250f480:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    goto L_250f550;
L_250f48c:;
    c->r[1] = c->r[5] + (c->r[5] << 1);
    (void)f_subs(c, c->r[1], (c->r[6] << 1));
    if (COND_NE) { goto L_250f4b4; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cb5cu;
    { uint32_t ea = 0x250f4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_250f548;
L_250f4b4:;
    (void)f_subs(c, c->r[6], (c->r[5] << 1));
    if (COND_NE) { goto L_250f4d8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x18u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cb34u;
    { uint32_t ea = 0x250f4d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_250f548;
L_250f4d8:;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_250f4fc; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x24u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cb0cu;
    { uint32_t ea = 0x250f4fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_250f548;
L_250f4fc:;
    c->r[0] = (c->r[5] << 2);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_NE) { goto L_250f524; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x24u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cae0u;
    { uint32_t ea = 0x250f524u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_250f548;
L_250f524:;
    (void)f_subs(c, c->r[6], (c->r[1] << 1));
    c->r[0] = ~0x0u;
    if (COND_NE) { goto L_250f5a8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x24u;
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74cab4u;
    { uint32_t ea = 0x250f54cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_250f548:;
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
L_250f54c:;
    c->r[0] = 0x0u;
L_250f550:;
    c->r[1] = c->r[0] | 0xeu;
    c->r[2] = ~0x0u;
    c->r[0] = sh_lsl(c->r[6], c->r[0]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[1] = sh_lsl(c->r[6], c->r[1]);
    c->r[1] = sdiv32(c->r[1], c->r[5]);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (c->r[5] >> 15);
    c->r[2] = (c->r[2] >> 1);
    { uint32_t r = c->r[2] * c->r[1]; c->r[3] = r; }
L_250f57c:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[6] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[6] * c->r[7]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[6] = c->r[3] + c->r[6];
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_250f57c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[1]); }
L_250f5a8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_250f5cc(Cpu *restrict c) {
    FN_ENTER(0x250f5ccu);
L_250f5cc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[7] = c->r[0];
    c->r[9] = c->r[2];
    c->r[5] = c->r[1];
    c->r[8] = c->r[3];
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[7] + 0xa8u;
    c->r[4] = c->r[1] - c->r[2];
    c->r[0] = c->r[6] + (c->r[2] << 1);
    c->r[1] = c->r[9];
    c->r[2] = (c->r[4] << 1);
    c->r[14] = 0x250f604u; f_283aa78(c);
    { uint32_t ea = c->r[7] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_250f654; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_250f688; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_250f6bc; }
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x250f634u; f_2842e60(c);
    { uint32_t ea = c->r[7] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + (c->r[4] << 1);
    c->r[1] = c->r[5] + (c->r[1] << 1);
    c->r[3] = c->r[8] - c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x250f650u; f_2842e60(c);
    goto L_250f6ec;
L_250f654:;
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x250f668u; f_2842e6c(c);
    { uint32_t ea = c->r[7] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + (c->r[4] << 1);
    c->r[1] = c->r[5] + (c->r[1] << 1);
    c->r[3] = c->r[8] - c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x250f684u; f_2842e6c(c);
    goto L_250f6ec;
L_250f688:;
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x250f69cu; f_2842e78(c);
    { uint32_t ea = c->r[7] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + (c->r[4] << 1);
    c->r[1] = c->r[5] + (c->r[1] << 1);
    c->r[3] = c->r[8] - c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x250f6b8u; f_2842e78(c);
    goto L_250f6ec;
L_250f6bc:;
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = (c->r[0] << 1);
    c->r[0] = c->r[5];
    c->r[14] = 0x250f6d0u; f_283aa78(c);
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + (c->r[4] << 1);
    c->r[2] = c->r[8] - c->r[2];
    c->r[0] = c->r[5] + (c->r[0] << 1);
    c->r[2] = (c->r[2] << 1);
    c->r[14] = 0x250f6ecu; f_283aa78(c);
L_250f6ec:;
    { uint32_t ea = c->r[7] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8] - c->r[0];
    c->r[2] = (c->r[0] << 1);
    c->r[0] = c->r[6];
    c->r[1] = c->r[9] + (c->r[1] << 1);
    c->r[14] = 0x250f704u; f_283aa78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_250f70c(Cpu *restrict c) {
    FN_ENTER(0x250f70cu);
L_250f70c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[10] = (uint32_t)((int32_t)c->r[3] >> 1);
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_250f7c0; }
    c->r[14] = 0x8000u;
    c->r[2] = c->r[2] + 0x2u;
    c->r[9] = 0x2690u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
L_250f730:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x9b81u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    c->r[7] = (c->r[6] << 10) - c->r[7];
    c->r[5] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[5] * c->r[3]; c->r[5] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[12] = (uint32_t)p; }
    c->r[7] = c->r[7] + (c->r[6] << 10);
    c->r[7] = c->r[7] + c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[2] + 0x4u;
    c->r[3] = (c->r[7] << 10) - c->r[4];
    c->r[4] = c->r[4] + (c->r[6] << 10);
    c->r[6] = c->r[14];
    c->r[8] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[8] * c->r[9]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[9] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[5] = c->r[3] + (c->r[7] << 10);
    c->r[7] = c->r[4] + c->r[12];
    c->r[3] = c->r[7] + c->r[3];
    c->r[7] = 0x1u;
    c->r[3] = c->r[7] + (uint32_t)((int32_t)c->r[3] >> 10);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 1);
    (void)f_subs(c, c->r[7], c->r[14]);
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[3] >> 1); }
    (void)f_subs(c, c->r[7], 0x8000u);
    if (COND_GE) { c->r[6] = 0x7fffu; }
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[6]); c->r[1] = c->r[1] + 0x2u; }
    if (COND_NE) { goto L_250f730; }
L_250f7c0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250f7c4(Cpu *restrict c) {
    FN_ENTER(0x250f7c4u);
L_250f7c4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[7] = c->r[1];
    c->r[1] = 0x74c75cu;
    { uint32_t ea = 0x250f7e0u + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x0u - c->r[5];
    c->r[1] = c->r[1] & 0x3u;
    c->r[12] = c->r[5] + c->r[1];
    c->r[4] = c->r[12] + 0x790u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[14]); }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74c7e4u;
    { uint32_t ea = 0x250f834u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[0] = c->r[12] + 0x10u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x74c7c4u;
    { uint32_t ea = 0x250f854u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_250f884;
L_250f858:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[4] << 1);
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[12]); }
L_250f884:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], 0x1e0u);
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    if (COND_GE) { c->r[4] = 0x1e0u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x250f8a8u; f_2842e84(c);
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_LT) { goto L_250f9cc; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x8000u;
    c->r[0] = c->r[4];
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
L_250f8cc:;
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); }
    c->r[0] = c->r[0] - 0x3u;
    c->r[4] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[6] * c->r[4]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[4] = c->r[14];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[8] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[8] * c->r[3]; c->r[3] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[10] * c->r[3]; c->r[3] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[3] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[5] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[9] * c->r[5]; c->r[5] = r; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[3] = c->r[12] + (uint32_t)((int32_t)c->r[3] >> 5);
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 1);
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_GT) { c->r[4] = (uint32_t)((int32_t)c->r[3] >> 1); }
    (void)f_subs(c, c->r[5], 0x8000u);
    if (COND_GE) { c->r[4] = 0x7fffu; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[9] * c->r[4]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[10] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[5] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[8] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[8] * c->r[5]; c->r[5] = r; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[5] = c->r[14];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[6] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[2] = c->r[12] + (uint32_t)((int32_t)c->r[2] >> 5);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_GT) { c->r[5] = (uint32_t)((int32_t)c->r[2] >> 1); }
    (void)f_subs(c, c->r[3], 0x8000u);
    c->r[2] = c->r[1];
    if (COND_GE) { c->r[5] = 0x7fffu; }
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[5]); }
    c->r[7] = c->r[7] + 0x4u;
    if (COND_GT) { goto L_250f8cc; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_250f9d0;
L_250f9cc:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
L_250f9d0:;
    c->r[5] = c->r[5] - c->r[4];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_GE) { goto L_250f858; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x74c538u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x250fa04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250fa1c(Cpu *restrict c) {
    FN_ENTER(0x250fa1cu);
L_250fa1c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_250fa7c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
L_250fa34:;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[4] = v; }
    c->r[12] = f_subs(c, c->r[12], 0x1u);
    c->r[4] = c->r[14] + (c->r[4] << 8);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); c->r[1] = c->r[1] + 0x4u; }
    c->r[4] = (c->r[4] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[4]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[14]; if (p != (int32_t)p) c->qf = 1; c->r[14] = (uint32_t)p; }
    { uint32_t r = c->r[6] * c->r[5]; c->r[5] = r; }
    c->r[14] = c->r[14] + (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_NE) { goto L_250fa34; }
L_250fa7c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_250fa80(Cpu *restrict c) {
    FN_ENTER(0x250fa80u);
L_250fa80:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x24u;
    c->r[9] = c->r[1];
    c->r[1] = 0x74c498u;
    c->r[4] = 0x8000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0x250faa4u + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[7] & 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[7] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + (c->r[7] << 2);
    c->r[1] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[6] = ~0xfu;
    c->r[7] = c->r[6] - (c->r[7] << 2);
    c->r[6] = c->r[1] + c->r[7];
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6] + 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74c4e8u;
    { uint32_t ea = 0x250fb34u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_250fb84;
L_250fb34:;
    c->r[0] = (c->r[7] << 2);
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[7] << 1);
L_250fb84:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_LT) { c->r[5] = c->r[3]; }
    c->r[3] = c->r[5];
    c->r[14] = 0x250fba8u; f_2842e90(c);
    c->r[14] = (c->r[5] << 17);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_250fc98; }
    c->r[1] = 0x0u;
L_250fbbc:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[5] = c->r[8];
    c->r[0] = c->r[6];
    c->r[10] = c->r[4];
    c->r[12] = c->r[6];
    c->r[2] = (c->r[2] << 1);
    c->r[7] = (c->r[7] << 1);
    c->r[2] = c->r[2] + (uint32_t)(uint16_t)(c->r[1]);
    c->r[3] = (c->r[2] >> 14) & 0xffffu;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = ea; c->r[7] = v; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = (c->r[3] << 3);
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[4] = c->r[10];
    c->r[10] = 0xbu;
    c->r[2] = c->r[10] - (c->r[2] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[2] = (c->r[2] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[6] = c->r[12];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = c->r[4];
    c->r[0] = c->r[5] + (uint32_t)((int32_t)c->r[0] >> 14);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_GT) { c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_GE) { c->r[3] = 0x7fffu; }
    { uint32_t ea = c->r[9]; ST16(ea, c->r[3]); c->r[9] = c->r[9] + 0x2u; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_LT) { goto L_250fbbc; }
L_250fc98:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] - c->r[7];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_GE) { goto L_250fb34; }
    c->r[0] = (c->r[7] << 2);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD16(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xeu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xau; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
    c->r[0] = 0x74c238u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x250fd04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_250fd18(Cpu *restrict c) {
    FN_ENTER(0x250fd18u);
L_250fd18:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x34u;
    c->r[7] = c->r[0];
    c->r[0] = 0x74c1fcu;
    c->r[6] = c->r[2];
    c->r[5] = c->r[1];
    c->r[4] = c->r[3];
    { uint32_t ea = 0x250fd40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0x3u;
    c->r[9] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x114u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = (c->r[2] << 2);
    c->r[1] = c->r[9] + (c->r[1] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] + 0x18u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[14] = 0x250fd78u; f_283ac04(c);
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x8000u;
    c->r[2] = c->r[6];
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x128u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[0] = c->r[10] + 0x4u;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_250fdcc;
L_250fda4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[0];
    c->r[1] = c->r[9] + (c->r[6] << 2);
    { uint32_t ea = c->r[7] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[9];
    c->r[14] = 0x250fdc0u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x128u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[6] << 1);
L_250fdcc:;
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    c->r[1] = c->r[9] + (c->r[0] << 2);
    c->r[0] = c->r[7];
    if (COND_LT) { c->r[6] = c->r[4]; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x250fdf0u; f_2842e84(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[6] << 16);
    { uint32_t ea = c->r[7] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_EQ) { goto L_25100a8; }
    (void)f_subs(c, c->r[1], 0x18u);
    if (COND_EQ) { goto L_2510300; }
    (void)f_subs(c, c->r[1], 0x24u);
    if (COND_NE) { goto L_25104c8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_25104c8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
L_250fe2c:;
    c->r[0] = (uint32_t)((int32_t)c->r[14] >> 16);
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[14] = c->r[14] + c->r[12];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[2] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0x88u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[10] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[10] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[6];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    c->r[1] = 0x1u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x70u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x16u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x1eu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x22u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[10] + 0x26u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[3] = c->r[8];
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_GT) { c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_GE) { c->r[3] = 0x7fffu; }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_LT) { goto L_250fe2c; }
    goto L_25104c8;
L_25100a8:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_25104c8; }
    { uint32_t ea = c->r[7] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x0u;
    c->r[0] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_25100c8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[14]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[12] = c->r[9];
    c->r[9] = (uint32_t)((int32_t)c->r[14] >> 16);
    { uint32_t r = c->r[1] * c->r[0]; c->r[5] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[1] = c->r[1] + (c->r[1] << 3);
    c->r[6] = (c->r[1] << 1);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[6] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[9] = (uint32_t)p; }
    { uint32_t ea = c->r[6] + 4u; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[9] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[9] = c->r[12];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 3);
    c->r[2] = (c->r[1] << 1);
    c->r[1] = c->r[8];
    c->r[8] = 0x8000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xffff0000u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = c->r[8];
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[14] + c->r[0];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_LT) { goto L_25100c8; }
    goto L_25104c8;
L_2510300:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_25104c8; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x0u;
L_2510310:;
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + c->r[12];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[2] + 4u; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[10] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[10] + 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[6];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[14];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x12u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x16u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[10] + 0x1au; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[3] = c->r[8];
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[2] = 0x1u;
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_GT) { c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_GE) { c->r[3] = 0x7fffu; }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[3]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LT) { goto L_2510310; }
L_25104c8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] - c->r[0];
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_GE) { goto L_250fda4; }
    c->r[1] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25104f4u; f_283ac04(c);
    c->r[0] = 0x74ba38u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2510504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2510514(Cpu *restrict c) {
    FN_ENTER(0x2510514u);
L_2510514:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2510684; }
    c->r[9] = 0x8000u;
    c->r[10] = c->r[1] + 0x2u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xffff0000u;
L_2510530:;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x6d2u;
    c->r[14] = (c->r[7] << 10) - c->r[12];
    c->r[8] = (uint32_t)(uint16_t)(c->r[14]);
    { uint32_t r = c->r[8] * c->r[1]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[14] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[6] = c->r[5] + (c->r[7] << 10);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[6] = c->r[5] + c->r[12];
    c->r[12] = 0x3a8au;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[6] - c->r[5];
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[1] * c->r[12]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[12] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[4] = 0x98abu;
    c->r[12] = 0x1u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = c->r[1] + c->r[6];
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[1] - c->r[6];
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[5] * c->r[4]; c->r[5] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[6] = c->r[6] + c->r[1];
    c->r[4] = 0x1ac6u;
    c->r[1] = c->r[5] + c->r[1];
    c->r[6] = c->r[6] + c->r[5];
    c->r[5] = c->r[9];
    c->r[1] = c->r[12] + (uint32_t)((int32_t)c->r[1] >> 9);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    c->r[6] = (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_GT) { c->r[5] = (uint32_t)((int32_t)c->r[1] >> 1); }
    (void)f_subs(c, c->r[6], 0x8000u);
    if (COND_GE) { c->r[5] = 0x7fffu; }
    { uint32_t ea = c->r[10] - 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[7] << 10) - c->r[1];
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[5] * c->r[4]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[4] = 0x64a9u;
    c->r[7] = c->r[6] + (c->r[7] << 10);
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[1] - c->r[7];
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[5] * c->r[4]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[5] = 0xd8f6u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[1] - c->r[7];
    c->r[6] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[7] = c->r[7] + c->r[1];
    c->r[1] = c->r[6] + c->r[1];
    c->r[7] = c->r[7] + c->r[6];
    c->r[6] = c->r[9];
    c->r[1] = c->r[12] + (uint32_t)((int32_t)c->r[1] >> 9);
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[1] >> 1); }
    (void)f_subs(c, c->r[7], 0x8000u);
    if (COND_GE) { c->r[6] = 0x7fffu; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[10]; ST16(ea, c->r[6]); }
    c->r[10] = c->r[10] + 0x4u;
    if (COND_NE) { goto L_2510530; }
L_2510684:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2510688(Cpu *restrict c) {
    FN_ENTER(0x2510688u);
L_2510688:;
    __attribute__((musttail)) return f_2842e90(c);
}
void f_251068c(Cpu *restrict c) {
    FN_ENTER(0x251068cu);
L_251068c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[7] + c->r[0];
    c->r[8] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[5] = c->r[7] + c->r[12];
    c->r[7] = c->r[4] + c->r[6];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[10] + c->r[3];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[14] + c->r[3];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[8] + c->r[2];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[1];
    c->r[10] = c->r[9] + c->r[3];
    c->r[5] = c->r[10] + c->r[6];
    c->r[9] = c->r[1] + c->r[5];
    c->r[0] = c->r[0] + c->r[9];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251078c; }
    c->r[1] = 0x74b8acu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510774u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x74b8a4u;
    { uint32_t ea = 0x2510780u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x251078cu; f_2842a94(c);
L_251078c:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_25107bc; }
    c->r[0] = 0x74b878u;
    c->r[1] = 0x74b87cu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x25107a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25107acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x25107bcu; f_2842a94(c);
L_25107bc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_25107f0; }
    c->r[0] = 0x74b844u;
    c->r[1] = 0x74b84cu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x25107dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25107e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x25107f0u; f_2842a94(c);
L_25107f0:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_2510820; }
    c->r[0] = 0x74b814u;
    c->r[1] = 0x74b820u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x251080cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510810u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2510820u; f_2842a94(c);
L_2510820:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_2510854; }
    c->r[0] = 0x74b7e0u;
    c->r[1] = 0x74b7ecu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510844u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2510854u; f_2842a94(c);
L_2510854:;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251088c; }
    c->r[0] = 0x74b7acu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510874u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x74b7acu;
    { uint32_t ea = 0x2510880u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x251088cu; f_2842a94(c);
L_251088c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_25108c4; }
    c->r[0] = 0x74b770u;
    c->r[1] = 0x74b77cu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x25108b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25108b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x25108c4u; f_2842a94(c);
L_25108c4:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_25108f4; }
    c->r[0] = 0x74b740u;
    c->r[1] = 0x74b74cu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x25108e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25108e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x25108f4u; f_2842a94(c);
L_25108f4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2510930; }
    c->r[1] = c->r[0];
    c->r[0] = 0x74b708u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x74b704u;
    { uint32_t ea = 0x2510924u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[14] = 0x2510930u; f_2842a94(c);
L_2510930:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_2510964; }
    c->r[0] = 0x74b6d0u;
    c->r[1] = 0x74b6d8u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510950u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510954u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x2510964u; f_2842a94(c);
L_2510964:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_2510994; }
    c->r[0] = 0x74b6a0u;
    c->r[1] = 0x74b6acu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510980u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510984u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2510994u; f_2842a94(c);
L_2510994:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_25109c4; }
    c->r[0] = 0x74b670u;
    c->r[1] = 0x74b67cu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x25109b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25109b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x25109c4u; f_2842a94(c);
L_25109c4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_25109f8; }
    c->r[0] = 0x74b63cu;
    c->r[1] = 0x74b644u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x25109e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x25109e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x25109f8u; f_2842a94(c);
L_25109f8:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_2510a28; }
    c->r[0] = 0x74b60cu;
    c->r[1] = 0x74b618u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510a18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x2510a28u; f_2842a94(c);
L_2510a28:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2510a64; }
    c->r[0] = 0x74b5dcu;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2510a44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x74b5e0u;
    { uint32_t ea = 0x2510a50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_2842a94(c);
L_2510a64:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2510ae4(Cpu *restrict c) {
    FN_ENTER(0x2510ae4u);
L_2510ae4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[2];
    c->r[9] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_2510bfc; }
    c->r[0] = 0x74b4fcu;
    c->r[1] = 0x74b4fcu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510b24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510b28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510b34u; f_2842980(c);
    c->r[1] = c->r[6] - c->r[0];
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2510bf8; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b4c0u;
    c->r[1] = 0x74b4c4u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510b60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510b64u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510b70u; f_2842980(c);
    c->r[1] = c->r[6] - c->r[0];
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { goto L_2510bfc; }
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b484u;
    c->r[1] = 0x74b48cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510b9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510ba0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510bacu; f_2842980(c);
    c->r[1] = c->r[5] - c->r[0];
    c->r[6] = c->r[4] + 0x2u;
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2510c00; }
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b444u;
    c->r[1] = 0x74b450u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510be0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510becu; f_2842980(c);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[10] - c->r[0];
    goto L_2510c08;
L_2510bf8:;
    c->r[7] = 0x0u;
L_2510bfc:;
    c->r[6] = c->r[4] + 0x2u;
L_2510c00:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
L_2510c08:;
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2510c44; }
    c->r[0] = 0x74b3f8u;
    c->r[1] = 0x74b404u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510c28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510c2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510c38u; f_2842980(c);
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[0];
    goto L_2510c4c;
L_2510c44:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
L_2510c4c:;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[0]); }
    if (COND_LE) { goto L_2510ccc; }
    c->r[0] = 0x74b3b4u;
    c->r[1] = 0x74b3bcu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510c6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510c70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510c7cu; f_2842980(c);
    c->r[1] = c->r[7] - c->r[0];
    c->r[10] = c->r[4] + 0xau;
    c->r[7] = c->r[4] + 0x8u;
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2510cd8; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b370u;
    c->r[1] = 0x74b37cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510cb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510cb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510cc0u; f_2842980(c);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6] - c->r[0];
    goto L_2510ce0;
L_2510ccc:;
    c->r[10] = c->r[4] + 0xau;
    c->r[7] = c->r[4] + 0x8u;
    c->r[5] = 0x0u;
L_2510cd8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
L_2510ce0:;
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[10]; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2510d1c; }
    c->r[0] = 0x74b320u;
    c->r[1] = 0x74b32cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510d00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510d04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510d10u; f_2842980(c);
    { uint32_t ea = c->r[4] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[0];
    goto L_2510d24;
L_2510d1c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST16(ea, c->r[0]); }
L_2510d24:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[8], 0x1u);
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[4] + 0xeu; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2510de8; }
    c->r[0] = 0x74b2d4u;
    c->r[1] = 0x74b2d8u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510d50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510d5cu; f_2842980(c);
    c->r[1] = c->r[8] - c->r[0];
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { goto L_2510de8; }
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b298u;
    c->r[1] = 0x74b2a0u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510d88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510d8cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510d98u; f_2842980(c);
    c->r[1] = c->r[5] - c->r[0];
    c->r[7] = c->r[4] + 0x12u;
    c->r[5] = c->r[4] + 0x10u;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2510df0; }
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b254u;
    c->r[1] = 0x74b260u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510dccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510dd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510ddcu; f_2842980(c);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[8] - c->r[0];
    goto L_2510df8;
L_2510de8:;
    c->r[7] = c->r[4] + 0x12u;
    c->r[5] = c->r[4] + 0x10u;
L_2510df0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
L_2510df8:;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2510e34; }
    c->r[0] = 0x74b208u;
    c->r[1] = 0x74b214u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510e18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510e1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510e28u; f_2842980(c);
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6] - c->r[0];
    goto L_2510e3c;
L_2510e34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
L_2510e3c:;
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    if (COND_LE) { goto L_2510ebc; }
    c->r[0] = 0x74b1c4u;
    c->r[1] = 0x74b1ccu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510e5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510e60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510e6cu; f_2842980(c);
    c->r[1] = c->r[10] - c->r[0];
    c->r[8] = c->r[4] + 0x1au;
    c->r[7] = c->r[4] + 0x18u;
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (c->r[0] << 16);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2510ec8; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = 0x74b180u;
    c->r[1] = 0x74b18cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510ea4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510eb0u; f_2842980(c);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[6] - c->r[0];
    goto L_2510ed0;
L_2510ebc:;
    c->r[8] = c->r[4] + 0x1au;
    c->r[7] = c->r[4] + 0x18u;
    c->r[5] = 0x0u;
L_2510ec8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
L_2510ed0:;
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[8]; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2510f0c; }
    c->r[0] = 0x74b130u;
    c->r[1] = 0x74b13cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x2510ef0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x2510ef4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2510f00u; f_2842980(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[0];
    goto L_2510f14;
L_2510f0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST16(ea, c->r[0]); }
L_2510f14:;
    { uint32_t ea = c->r[4] + 0x1eu; ST16(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2510f98(Cpu *restrict c) {
    FN_ENTER(0x2510f98u);
L_2510f98:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2510fdc; }
    c->r[1] = 0x7fffu;
    (void)f_subs(c, c->r[0], 0xbfu);
    if (COND_GT) { goto L_2510fe8; }
    c->r[2] = 0x65ced4u;
    c->r[3] = 0x65ceb8u;
    c->r[1] = (c->r[0] >> 5);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[2] = 0x2510fc4u + c->r[2];
    c->r[3] = 0x2510fc8u + c->r[3];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = c->r[1];
    return;
L_2510fdc:;
    c->r[1] = 0x0u;
    (void)f_adds(c, c->r[0], 0xbfu);
    if (COND_GE) { goto L_2510ff0; }
L_2510fe8:;
    c->r[0] = c->r[1];
    return;
L_2510ff0:;
    c->r[2] = 0x65ce5cu;
    c->r[3] = 0x65ce70u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[0] & 0x1fu;
    c->r[2] = 0x251100cu + c->r[2];
    c->r[3] = 0x2511010u + c->r[3];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[2] - c->r[1] * c->r[0];
    c->r[0] = c->r[1];
    return;
}
void f_2511034(Cpu *restrict c) {
    FN_ENTER(0x2511034u);
L_2511034:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2511108; }
    { uint32_t r = c->r[3] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    c->r[7] = c->r[3] - 0x1u;
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_2511064; }
L_2511054:;
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_2511054; }
L_2511064:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_CC) { goto L_2511098; }
    c->r[7] = c->r[1] + (c->r[5] << 2);
    c->r[7] = c->r[7] + 0x8u;
L_2511074:;
    c->r[6] = c->r[5] + 0x1u;
    c->r[4] = c->r[5] + 0x2u;
    c->r[12] = c->r[5] + 0x3u;
    { uint32_t ea = c->r[7] - 8u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    c->r[5] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[12]); }
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_NE) { goto L_2511074; }
L_2511098:;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_LT) { goto L_2511108; }
    c->r[14] = 0x1u;
    c->r[12] = 0x0u;
L_25110a8:;
    { uint32_t ea = c->r[0] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[12];
L_25110b0:;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_GE) { goto L_25110ec; }
    c->r[5] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[7] + 0x1u;
    c->r[4] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[7] = c->r[4];
    if (COND_GT) { goto L_25110b0; }
    c->r[7] = c->r[4] + 0x1u;
    goto L_25110f0;
L_25110ec:;
    c->r[7] = c->r[7] + 0x1u;
L_25110f0:;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + (c->r[7] << 2); ST32(ea, c->r[14]); }
    c->r[14] = c->r[14] + 0x1u;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[3]);
    if (COND_NE) { goto L_25110a8; }
L_2511108:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_25111b4; }
    c->r[7] = c->r[3] - 0x2u;
    c->r[12] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_2511194; }
    c->r[14] = c->r[1] + (c->r[12] << 2);
    c->r[9] = c->r[0] + (c->r[12] << 2);
L_2511128:;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[10], c->r[4]);
    if (COND_GE) { goto L_2511184; }
    c->r[5] = c->r[14];
    c->r[4] = c->r[9];
    c->r[7] = c->r[12];
L_2511144:;
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_GE) { goto L_2511170; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); c->r[4] = c->r[4] - 0x4u; }
    c->r[6] = c->r[5];
    c->r[7] = c->r[7] - 0x1u;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[8] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
    c->r[5] = c->r[6];
    if (COND_GT) { goto L_2511144; }
L_2511170:;
    c->r[4] = c->r[7] - 0x1u;
    c->r[5] = 0x4u;
    c->r[4] = c->r[5] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] + c->r[4]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[3]); }
L_2511184:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_2511128; }
    goto L_25111b4;
L_2511194:;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LT) { { uint32_t ea = c->r[0] + (c->r[12] << 2); ST32(ea, c->r[7]); } }
    if (COND_LT) { { uint32_t ea = c->r[1] + (c->r[12] << 2); ST32(ea, c->r[3]); } }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_2511194; }
L_25111b4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25111b8(Cpu *restrict c) {
    FN_ENTER(0x25111b8u);
L_25111b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_251129c; }
    { uint32_t r = c->r[3] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    c->r[7] = c->r[3] - 0x1u;
    c->r[4] = 0x0u;
    if (COND_EQ) { goto L_25111e8; }
L_25111d8:;
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[4]); }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_25111d8; }
L_25111e8:;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_CC) { goto L_251121c; }
    c->r[7] = c->r[1] + (c->r[4] << 2);
    c->r[7] = c->r[7] + 0x8u;
L_25111f8:;
    c->r[6] = c->r[4] + 0x1u;
    c->r[5] = c->r[4] + 0x2u;
    c->r[12] = c->r[4] + 0x3u;
    { uint32_t ea = c->r[7] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[12]); }
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_NE) { goto L_25111f8; }
L_251121c:;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_LT) { goto L_251129c; }
    c->r[12] = c->r[0] + 0x2u;
    c->r[8] = 0x1u;
    c->r[14] = 0x0u;
L_2511230:;
    c->r[4] = c->r[0] + (c->r[8] << 1);
    c->r[6] = c->r[14];
    c->r[7] = c->r[12];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
L_2511240:;
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_LE) { goto L_2511278; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[4]); c->r[7] = c->r[7] - 0x2u; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[6] + 0x1u;
    c->r[4] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[6] = c->r[4];
    if (COND_GT) { goto L_2511240; }
    c->r[6] = c->r[4] + 0x1u;
    goto L_251127c;
L_2511278:;
    c->r[6] = c->r[6] + 0x1u;
L_251127c:;
    c->r[4] = c->r[0] + (c->r[6] << 1);
    c->r[14] = c->r[14] + 0x1u;
    c->r[12] = c->r[12] + 0x2u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[8]); }
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_NE) { goto L_2511230; }
L_251129c:;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_2511354; }
    c->r[12] = c->r[3] - 0x1u;
    c->r[4] = c->r[3] - 0x2u;
    c->r[14] = c->r[0] + (c->r[12] << 1);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_251132c; }
    c->r[8] = c->r[1] + (c->r[12] << 2);
L_25112bc:;
    c->r[4] = c->r[0] + (c->r[3] << 1);
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_LE) { goto L_251131c; }
    c->r[10] = c->r[8];
    c->r[7] = c->r[14];
    c->r[6] = c->r[12];
L_25112dc:;
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_LE) { goto L_2511308; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[5]); c->r[7] = c->r[7] - 0x2u; }
    c->r[5] = c->r[10];
    c->r[6] = c->r[6] - 0x1u;
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[4]); }
    c->r[10] = c->r[5];
    if (COND_GT) { goto L_25112dc; }
L_2511308:;
    c->r[4] = c->r[6] - 0x1u;
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[0] + (c->r[4] << 1);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[9]); }
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[3]); }
L_251131c:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_25112bc; }
    goto L_2511354;
L_251132c:;
    c->r[0] = c->r[0] + (c->r[3] << 1);
L_2511330:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_GT) { { uint32_t ea = c->r[14]; ST16(ea, c->r[4]); } }
    if (COND_GT) { { uint32_t ea = c->r[1] + (c->r[12] << 2); ST32(ea, c->r[3]); } }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_2511330; }
L_2511354:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2511358(Cpu *restrict c) {
    FN_ENTER(0x2511358u);
L_2511358:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[12] = c->r[0] + 0x2u;
    c->r[14] = 0x1u;
L_2511370:;
    c->r[2] = c->r[0] + (c->r[14] << 1);
    c->r[4] = c->r[12];
    c->r[3] = c->r[14];
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
L_2511380:;
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_GE) { goto L_25113a0; }
    c->r[3] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[5]); c->r[4] = c->r[4] - 0x2u; }
    c->r[5] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_GT) { goto L_2511380; }
L_25113a0:;
    c->r[3] = c->r[0] + (c->r[3] << 1);
    c->r[14] = c->r[14] + 0x1u;
    c->r[12] = c->r[12] + 0x2u;
    (void)f_subs(c, c->r[14], c->r[1]);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_2511370; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25113bc(Cpu *restrict c) {
    FN_ENTER(0x25113bcu);
L_25113bc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4cu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x74ab48u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[8] = 0x8000u;
    c->r[12] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = 0x25113f4u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[10] + 0x2u;
    (void)f_adds(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + (c->r[14] << 1);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2511478; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    c->r[1] = c->r[12];
    c->r[2] = c->r[0] - 0x4u;
L_2511430:;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[6] = c->r[4] - c->r[5];
    c->r[0] = c->r[6] & 0x1u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[6] = c->r[8];
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GT) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x8000u);
    c->r[0] = c->r[5] + c->r[4];
    c->r[4] = c->r[0] & 0x1u;
    if (COND_GE) { c->r[6] = 0x7fffu; }
    (void)f_subs(c, c->r[3], c->r[14]);
    c->r[0] = c->r[4] + (c->r[0] >> 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); c->r[7] = c->r[7] + 0x2u; }
    if (COND_LT) { goto L_2511430; }
L_2511478:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[10] << 1);
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12]; ST16(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[12] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + c->r[4]; uint32_t v = LD16(ea); c->r[12] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[12] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[7]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD16(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[0]); }
    c->r[0] = 0x74aa60u;
    { uint32_t ea = 0x25114dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] & 0x1u;
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = c->r[1] + (c->r[10] << 1);
    c->r[6] = c->r[3] & 0x1u;
    c->r[2] = c->r[3] + c->r[6];
    c->r[7] = c->r[2] + (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x0u;
    c->r[12] = c->r[0] - (c->r[10] << 1);
    if (COND_LT) { goto L_2511580; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[14] << 1);
    c->r[9] = c->r[4];
    c->r[14] = 0x1u;
    c->r[5] = c->r[10];
    c->r[4] = c->r[1];
    c->r[0] = c->r[0] + c->r[6];
    c->r[0] = c->r[0] - 0x4u;
    c->r[7] = c->r[2] - 0x2u;
L_251152c:;
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = ea; c->r[6] = v; }
    c->r[3] = c->r[6] + c->r[3];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + (c->r[6] << 1);
    c->r[3] = c->r[14] + (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[6]); }
    c->r[6] = c->r[0] + c->r[4];
    c->r[4] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[3] = c->r[7] - (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[3]); }
    if (COND_NE) { goto L_251152c; }
    c->r[0] = 0x74a9bcu;
    c->r[4] = c->r[9];
    { uint32_t ea = 0x2511580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_2511580:;
    c->r[3] = 0x74a994u;
    c->r[0] = c->r[7] & 0x1u;
    c->r[9] = c->r[8];
    c->r[8] = c->r[7] + c->r[0];
    c->r[7] = c->r[10];
    c->r[0] = c->r[8] + c->r[4];
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[2] = c->r[0] & 0x1u;
    { uint32_t ea = 0x25115a8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[0] + c->r[2];
    c->r[2] = c->r[10] + c->r[4];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + c->r[12];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + c->r[12];
    if (COND_LT) { goto L_2511610; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x0u;
    c->r[12] = 0x1u;
L_25115cc:;
    c->r[6] = c->r[9];
    c->r[4] = c->r[8] + c->r[3];
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[0] = c->r[14] + c->r[0];
    c->r[0] = c->r[0] + (c->r[5] << 1);
    c->r[0] = c->r[12] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[0] = c->r[6] - (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[6] = c->r[10] + c->r[3];
    c->r[3] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    if (COND_NE) { goto L_25115cc; }
L_2511610:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x28fu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[5];
    c->r[5] = c->r[9] + (c->r[9] << 2);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[8], (c->r[5] << 1));
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (c->r[3] >> 16);
    if (COND_EQ) { c->r[0] = 0x148u; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[7] = r; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[3] = c->r[4] + 0xcu;
    c->r[6] = c->r[0] + (c->r[7] >> 16);
    c->r[0] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x2511660u; f_2842e9c(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[3] = c->r[4] + 0x14u;
    c->r[0] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[9] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x2511688u; f_2842e9c(c);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8000u;
    c->r[6] = ~0xe0000000u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[2] = c->r[1] + c->r[2];
    c->r[1] = c->r[0] - 0xc8000u;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x10000u);
    if (COND_GE) { c->r[2] = 0x10000u; }
    c->r[10] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    c->r[1] = f_subs(c, c->r[1], c->r[10]);
    c->r[3] = c->r[10] + 0xd0000u;
    if (COND_LT) { c->r[1] = c->r[3]; }
    (void)f_subs(c, c->r[8], (c->r[5] << 1));
    c->r[12] = clz32(c->r[1]);
    c->r[1] = c->r[12] - 0x1u;
    c->r[3] = sh_lsl(c->r[3], c->r[1]);
    c->r[1] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[4] = sdiv32(c->r[6], c->r[1]);
    c->r[1] = 0x258u;
    if (COND_EQ) { c->r[1] = 0x4b0u; }
    c->r[8] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LE) { c->r[8] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[1] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[8]; }
    c->r[1] = clz32(c->r[1]);
    c->r[5] = c->r[1] - 0x1u;
    c->r[6] = sh_lsl(c->r[8], c->r[5]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    { uint32_t r = c->r[2] * c->r[7]; c->r[7] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[7] = 0x7d0u;
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[6]) >> 32);
    c->r[3] = (c->r[3] << 3);
    c->r[3] = sh_lsl(c->r[8], c->r[5]) - c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[6] = 0x384u;
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[4] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[2] = 0x1u - c->r[12];
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[14] = (uint32_t)p; }
    c->r[1] = c->r[1] + 0x9u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2511784; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x20u);
    if (COND_LT) { c->r[5] = sh_asr(c->r[3], c->r[1]); }
    goto L_25117dc;
L_2511784:;
    c->r[4] = 0x0u - c->r[1];
    c->r[1] = 0x80000000u;
    c->r[5] = ~0x80000000u;
    c->r[1] = sh_asr(c->r[1], c->r[4]);
    c->r[12] = sh_lsr(c->r[5], c->r[4]);
    (void)f_subs(c, c->r[1], sh_lsr(c->r[5], c->r[4]));
    if (COND_LE) { goto L_25117bc; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    c->r[5] = c->r[1];
    if (COND_GT) { goto L_25117d8; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_LT) { c->r[3] = c->r[12]; }
    goto L_25117d4;
L_25117bc:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[12]);
    c->r[5] = c->r[12];
    if (COND_GT) { goto L_25117d8; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[3] = c->r[1]; }
L_25117d4:;
    c->r[5] = c->r[3];
L_25117d8:;
    c->r[5] = sh_lsl(c->r[5], c->r[4]);
L_25117dc:;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[14]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    if (COND_GE) { goto L_25118b4; }
    c->r[4] = c->r[10] + 0x10000u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    c->r[3] = c->r[8] - c->r[14];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[14]); }
    c->r[5] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[3] << 1) - c->r[14];
    { uint32_t r = c->r[5] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[14] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[4] = c->r[1];
    if (COND_MI) { c->r[4] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[10] = clz32(c->r[4]);
    c->r[5] = c->r[10] - 0x1u;
    c->r[7] = sh_lsl(c->r[1], c->r[5]);
    c->r[5] = ~0xe0000000u;
    c->r[1] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[5] = sdiv32(c->r[5], c->r[1]);
    c->r[1] = c->r[3];
    if (COND_MI) { c->r[1] = 0x0u - c->r[3]; }
    c->r[1] = clz32(c->r[1]);
    c->r[6] = c->r[1] - 0x1u;
    c->r[2] = sh_lsl(c->r[3], c->r[6]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[7]) >> 32);
    c->r[2] = (c->r[2] << 3);
    c->r[2] = sh_lsl(c->r[3], c->r[6]) - c->r[2];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->r[7] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[0] = 0x1u - c->r[10];
    c->r[0] = c->r[1] + c->r[0];
    c->r[3] = c->r[0] + 0xcu;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_25118d0; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0x20u);
    if (COND_LT) { c->r[1] = sh_asr(c->r[7], c->r[3]); }
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_2511938;
L_25118b4:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8] - c->r[5];
    c->r[3] = 0x4000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_2511954;
L_25118d0:;
    c->r[4] = 0x0u - c->r[3];
    c->r[1] = 0x80000000u;
    c->r[0] = ~0x80000000u;
    c->r[1] = sh_asr(c->r[1], c->r[4]);
    c->r[3] = sh_lsr(c->r[0], c->r[4]);
    (void)f_subs(c, c->r[1], sh_lsr(c->r[0], c->r[4]));
    if (COND_LE) { goto L_2511910; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    c->r[5] = c->r[1];
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_GT) { goto L_2511934; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { c->r[7] = c->r[3]; }
    goto L_2511930;
L_2511910:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    c->r[5] = c->r[3];
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_GT) { goto L_2511934; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { c->r[7] = c->r[1]; }
L_2511930:;
    c->r[5] = c->r[7];
L_2511934:;
    c->r[1] = sh_lsl(c->r[5], c->r[4]);
L_2511938:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[3] = c->r[1];
    if (COND_LE) { c->r[3] = 0x0u; }
    (void)f_subs(c, c->r[1], 0x4000u);
    if (COND_GT) { c->r[3] = 0x4000u; }
L_2511954:;
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[1] = c->r[3] - c->r[0];
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[9]);
    c->r[2] = (c->r[1] >> 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[2] * c->r[3] + c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[0] = c->r[0] + (c->r[1] >> 16);
    { uint32_t ea = c->r[6] + 0x1cu; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_25119a8; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25119a4u; f_2842ea8(c);
    goto L_2511b24;
L_25119a8:;
    { uint32_t ea = c->r[6] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[8] << 3);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25119d0; }
    c->r[0] = 0xbu;
    { uint32_t r = c->r[14] * c->r[0]; c->r[0] = r; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_25119e8; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    goto L_2511a0c;
L_25119d0:;
    c->r[0] = 0xdu;
    { uint32_t r = c->r[14] * c->r[0]; c->r[0] = r; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_2511a50; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD16(ea); c->r[1] = v; }
    goto L_2511a78;
L_25119e8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], 0x148u);
    if (COND_GE) { goto L_2511acc; }
L_2511a0c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x2511a38u; f_2842ea8(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    goto L_2511b24;
L_2511a50:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x332u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { goto L_2511acc; }
L_2511a78:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x2511aa4u; f_2842ea8(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_2511b30;
L_2511acc:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[2] = 0x3cceu;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_2511af0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x2511ae8u; f_2842ea8(c);
    c->r[0] = 0x4000u;
    goto L_2511b20;
L_2511af0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 14);
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x2511b1cu; f_2842ea8(c);
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
L_2511b20:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_2511b24:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2511b60; }
L_2511b30:;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[10] - (c->r[0] << 3);
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[6] + 0x20u; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_2511b68; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_2511b7c;
L_2511b60:;
    c->r[0] = 0x0u;
    goto L_2511b6c;
L_2511b68:;
    c->r[0] = 0x2710u;
L_2511b6c:;
    { uint32_t ea = c->r[6] + 0x20u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2511ba0; }
L_2511b7c:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GT) { goto L_2511ba0; }
    c->r[1] = c->r[8] - 0x1u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LE) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
L_2511ba0:;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x8000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = (c->r[0] << 3);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_2511d38; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x10000u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x1u;
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[8] = v; }
    c->r[4] = c->r[7] - c->r[3];
    c->r[2] = c->r[2] - c->r[8];
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[4] = c->r[6] + (uint32_t)((int32_t)c->r[4] >> 15);
    c->r[2] = c->r[6] + (uint32_t)((int32_t)c->r[2] >> 15);
    c->r[6] = (uint32_t)((int32_t)c->r[4] >> 1);
    { uint32_t ea = c->r[1] + 0x1eu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[5] = c->r[1] - c->r[4];
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = c->r[12] - 0x8000u;
    c->r[0] = (c->r[0] << 10);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[0] + (c->r[4] << 10);
    { uint32_t r = c->r[2] * c->r[1]; c->r[0] = r; }
    { uint32_t r = c->r[6] * c->r[1]; c->r[1] = r; }
    c->r[2] = (c->r[2] << 16);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[6] << 16);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - (c->r[3] << 16);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] - (c->r[8] << 16);
    c->r[8] = c->r[2] - 0x2u;
    c->r[3] = c->r[3] + 0x2u;
L_2511c78:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[9] = v; }
    c->r[2] = c->r[12];
    c->r[4] = c->r[5] & 0xfc00u;
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    c->r[12] = (uint32_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16));
    { uint32_t r = c->r[9] * c->r[4]; c->r[4] = r; }
    c->r[10] = (uint32_t)((int32_t)c->r[14] >> 5);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[12] = c->r[2];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 16);
    c->r[4] = (c->r[14] << 11);
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[4] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + 0x2u;
    c->r[3] = c->r[4] + c->r[3];
    c->r[3] = c->r[3] + (c->r[14] << 1);
    c->r[4] = (uint32_t)((int32_t)c->r[3] >> 7);
    c->r[3] = (c->r[3] << 9);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[4] = (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[4] = c->r[12];
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = 0x1u;
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 7);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_GT) { c->r[4] = (uint32_t)((int32_t)c->r[2] >> 1); }
    (void)f_subs(c, c->r[3], 0x8000u);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_GE) { c->r[4] = 0x7fffu; }
    { uint32_t ea = c->r[8]; ST16(ea, c->r[4]); c->r[8] = c->r[8] + 0x2u; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[5] + c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - c->r[2];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LT) { goto L_2511c78; }
L_2511d38:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_2511e28; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] - c->r[2];
    c->r[2] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | (c->r[7] << 4);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + 0x2u;
    c->r[7] = 0x0u - c->r[7];
    c->r[9] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u - c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[4] = (c->r[7] << 10);
    c->r[14] = (uint32_t)((int32_t)c->r[7] >> 6);
    c->r[8] = (uint32_t)(uint16_t)(c->r[4]);
L_2511da8:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[6] = (uint32_t)((int32_t)c->r[7] >> 5);
    { uint32_t r = c->r[5] * c->r[8]; c->r[5] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[9] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[4] = c->r[4] + (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[5] = (c->r[7] << 11);
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[5] * c->r[9]; c->r[5] = r; }
    c->r[4] = c->r[4] + (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[5] = c->r[6] + c->r[5];
    c->r[5] = c->r[5] + (c->r[7] << 1);
    c->r[6] = (uint32_t)((int32_t)c->r[5] >> 7);
    c->r[5] = (c->r[5] << 9);
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[6] = c->r[12];
    { uint32_t r = c->r[5] * c->r[10]; c->r[5] = r; }
    c->r[4] = c->r[4] + (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[5] = 0x1u;
    c->r[4] = c->r[5] + (uint32_t)((int32_t)c->r[4] >> 7);
    c->r[5] = (uint32_t)((int32_t)c->r[4] >> 1);
    (void)f_subs(c, c->r[5], c->r[12]);
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[4] >> 1); }
    (void)f_subs(c, c->r[5], 0x8000u);
    if (COND_GE) { c->r[6] = 0x7fffu; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[6]); c->r[2] = c->r[2] + 0x2u; }
    if (COND_NE) { goto L_2511da8; }
L_2511e28:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; ST16(ea, c->r[1]); }
    c->r[0] = 0x74a0e8u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2511e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2511e70(Cpu *restrict c) {
    FN_ENTER(0x2511e70u);
L_2511e70:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x18u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x8000u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD16(ea); c->r[4] = ea; c->r[3] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD16(ea); c->r[3] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    c->r[7] = (c->r[12] << 1);
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD16(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[2] << 3);
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2512008; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10000u;
    c->r[1] = 0x1u;
    c->r[3] = sdiv32(c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] - c->r[5];
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[6] = c->r[1] + (uint32_t)((int32_t)c->r[6] >> 15);
    c->r[8] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] - c->r[6];
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[3] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 15);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[4] = c->r[3] + c->r[6];
    c->r[6] = (c->r[4] << 16);
    c->r[4] = c->r[8] + c->r[5];
    c->r[5] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = (c->r[8] << 16);
    c->r[7] = (c->r[4] << 16);
    c->r[4] = c->r[0] + 0x2u;
    c->r[0] = (c->r[3] << 16);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_2511f74:;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = (c->r[2] << 8);
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 5);
    c->r[9] = (c->r[1] << 11);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[10] = (uint32_t)p; }
    c->r[2] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[0] = (uint32_t)(uint16_t)(c->r[9]);
    c->r[7] = c->r[7] + c->r[8];
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[9] = c->r[10] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    c->r[2] = (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = (c->r[0] << 9);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[2] = c->r[14];
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[5]; ST16(ea, c->r[2]); c->r[5] = c->r[5] + 0x2u; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { goto L_2511f74; }
L_2512008:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_GE) { goto L_25120b8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    c->r[8] = 0x1u;
    c->r[2] = c->r[12] - c->r[1];
    c->r[0] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
L_2512044:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[1] = (c->r[0] << 11);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[9] >> 0));
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[9]; c->r[1] = r; }
    c->r[5] = c->r[7] + (c->r[5] << 8);
    c->r[1] = c->r[5] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = ea; c->r[7] = v; }
    c->r[5] = c->r[7] + c->r[5];
    c->r[0] = c->r[5] + (c->r[0] << 1);
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = (c->r[0] << 9);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[5] = c->r[14];
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = c->r[8] + (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GT) { c->r[5] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[5] = 0x7fffu; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[5]); c->r[3] = c->r[3] + 0x2u; }
    if (COND_NE) { goto L_2512044; }
L_25120b8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2512130; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x2u;
    c->r[1] = c->r[1] + 0x2u;
L_25120e8:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[14];
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[14];
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_GT) { c->r[5] = c->r[4]; }
    (void)f_subs(c, c->r[4], 0x8000u);
    if (COND_GE) { c->r[5] = 0x7fffu; }
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_GT) { c->r[3] = c->r[2]; }
    (void)f_subs(c, c->r[2], 0x8000u);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_GE) { c->r[3] = 0x7fffu; }
    c->r[12] = f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] + 0x2u; }
    if (COND_NE) { goto L_25120e8; }
L_2512130:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2512138(Cpu *restrict c) {
    FN_ENTER(0x2512138u);
L_2512138:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[5] = c->r[0];
    c->r[0] = 0x749ed8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[2] = 0x8u;
    { uint32_t ea = 0x251215cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x2512160u; f_2842980(c);
    c->r[1] = 0x6667u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x66660000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[9] = c->r[2] + (c->r[1] >> 31);
    c->r[2] = 0x8u;
    c->r[1] = c->r[9] + (c->r[9] << 2);
    c->r[1] = 0x0u - c->r[1];
    c->r[0] = c->r[1] + c->r[0];
    c->r[8] = c->r[0] + (c->r[0] << 1);
    c->r[0] = 0x749ea4u;
    { uint32_t ea = 0x2512194u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x251219cu; f_2842980(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x749e8cu;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x25121b0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25121b8u; f_2842980(c);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x8u;
    c->r[14] = 0x25121ccu; f_2842980(c);
    c->r[1] = 0x749e54u;
    c->r[0] = c->r[0] + c->r[8];
    c->r[2] = 0x199au;
    c->r[10] = 0x0u;
    c->r[0] = (c->r[0] << 1);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x199a0000u;
    { uint32_t ea = 0x25121ecu + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[7];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = 0x8u;
    { uint32_t r = c->r[0] * c->r[10] + c->r[1]; c->r[8] = r; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x2512218u; f_2842980(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9] + (c->r[9] << 1);
    c->r[0] = (c->r[0] << 17);
    c->r[1] = 0x1u;
    c->r[6] = 0x199au;
    c->r[0] = c->r[1] | (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[8] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (c->r[2] << 1);
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[2];
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    { uint32_t r = c->r[3] * c->r[10] + c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] << 17);
    c->r[1] = c->r[1] | (uint32_t)((int32_t)c->r[7] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2512290(Cpu *restrict c) {
    FN_ENTER(0x2512290u);
L_2512290:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[1];
    c->r[1] = 0x749d98u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x25122acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x25122acu; f_2842980(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_25122b8(Cpu *restrict c) {
    FN_ENTER(0x25122b8u);
L_25122b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = 0x749d4cu;
    { uint32_t ea = 0x25122e8u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x25122ecu; f_2842a94(c);
    c->r[0] = 0x749d38u;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = 0x2512300u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0x2512308u; f_2842a94(c);
    c->r[0] = 0x749d20u;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[3] = 0x8u;
    { uint32_t ea = 0x251231cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0x2512324u; f_2842a94(c);
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = 0x8u;
    c->r[14] = 0x2512338u; f_2842a94(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_2842a94(c);
}
void f_251235c(Cpu *restrict c) {
    FN_ENTER(0x251235cu);
L_251235c:;
    c->r[2] = 0x749cd8u;
    c->r[3] = 0x8u;
    { uint32_t ea = 0x251236cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    __attribute__((musttail)) return f_2842a94(c);
}
void f_2512370(Cpu *restrict c) {
    FN_ENTER(0x2512370u);
L_2512370:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[1];
    c->r[9] = c->r[3];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[11] - 0x20u;
    c->r[2] = c->r[4];
    c->r[3] = c->r[5];
    c->r[14] = 0x25123a4u; f_2842c38(c);
    c->r[0] = c->r[13] + 0x1cu;
    c->r[1] = c->r[13] + 0x24u;
    c->r[2] = c->r[7];
    c->r[3] = c->r[5];
    c->r[14] = 0x25123b8u; f_2842c38(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[2] = c->r[1];
    if (COND_GT) { c->r[2] = c->r[0]; }
    c->r[3] = c->r[2] & 0x1u;
    c->r[8] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x1u;
    c->r[1] = c->r[8] - c->r[1];
    c->r[0] = c->r[8] - c->r[0];
    c->r[1] = sh_asr(c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = sh_asr(c->r[1], c->r[0]);
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[2] = c->r[8];
    if (COND_GT) { c->r[3] = sh_asr(c->r[1], c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[5];
    c->r[14] = 0x2512414u; f_2842eb4(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = c->r[0];
    c->r[5] = ~0xe0000000u;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_MI) { c->r[0] = 0x0u - c->r[14]; }
    c->r[0] = clz32(c->r[0]);
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[1] = c->r[10];
    if (COND_MI) { c->r[1] = 0x0u - c->r[10]; }
    c->r[1] = clz32(c->r[1]);
    c->r[3] = c->r[1] - 0x1u;
    c->r[1] = 0x1u - c->r[1];
    c->r[3] = sh_lsl(c->r[10], c->r[3]);
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[7] = sdiv32(c->r[5], c->r[7]);
    c->r[5] = c->r[0] - 0x1u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[4] = sh_lsl(c->r[14], c->r[5]);
    c->r[6] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[2]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (c->r[3] << 3);
    c->r[3] = sh_lsl(c->r[14], c->r[5]) - c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[7] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[7] = c->r[0] + 0xfu;
    c->r[0] = 0xc000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_25124b0; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x20u);
    if (COND_LT) { c->r[1] = sh_asr(c->r[3], c->r[7]); }
    goto L_2512500;
L_25124b0:;
    c->r[7] = 0x0u - c->r[7];
    c->r[1] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[5] = sh_lsr(c->r[2], c->r[7]);
    (void)f_subs(c, c->r[1], sh_lsr(c->r[2], c->r[7]));
    if (COND_LE) { goto L_25124e4; }
    (void)f_subs(c, c->r[3], c->r[1]);
    c->r[4] = c->r[1];
    if (COND_GT) { goto L_25124fc; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_LT) { c->r[3] = c->r[5]; }
    goto L_25124f8;
L_25124e4:;
    (void)f_subs(c, c->r[3], c->r[5]);
    c->r[4] = c->r[5];
    if (COND_GT) { goto L_25124fc; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[3] = c->r[1]; }
L_25124f8:;
    c->r[4] = c->r[3];
L_25124fc:;
    c->r[1] = sh_lsl(c->r[4], c->r[7]);
L_2512500:;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_GT) { c->r[0] = c->r[1]; }
    (void)f_subs(c, c->r[1], 0x4000u);
    if (COND_GT) { c->r[0] = 0x4000u; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[0] = (uint32_t)((int32_t)c->r[8] >> 1);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[4] = c->r[3];
    if (COND_MI) { c->r[4] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_LT) { c->r[4] = c->r[7]; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LE) { goto L_2512578; }
    c->r[7] = clz32(c->r[10]);
    c->r[1] = c->r[10];
    c->r[5] = 0x18u - c->r[7];
    c->r[0] = 0x0u - c->r[5];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_2512598; }
    if (COND_LT) { goto L_251258c; }
    c->r[1] = sh_ror(c->r[10], c->r[5]);
    goto L_2512598;
L_2512578:;
    c->r[1] = 0x0u - c->r[12];
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[1] = 0x0u;
    goto L_2512648;
L_251258c:;
    c->r[1] = c->r[5] + 0x20u;
    c->r[1] = sh_lsr(c->r[10], c->r[1]);
    c->r[1] = c->r[1] | sh_lsl(c->r[10], c->r[0]);
L_2512598:;
    c->r[1] = c->r[1] & 0x7fu;
    c->r[6] = 0xd50000u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[9]); }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = 0x8000u;
    c->r[9] = (c->r[7] >> 1);
    c->r[8] = 0x8000u;
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    if (COND_EQ) { c->r[2] = 0xb486u; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = sh_lsr(c->r[2], c->r[9]);
    c->r[1] = (c->r[1] >> 16);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16));
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6] + sh_lsr(c->r[2], c->r[9]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[0] = c->r[2] + (c->r[0] >> 16);
    c->r[0] = sh_lsl(c->r[0], c->r[1]) - c->r[12];
    c->r[1] = c->r[10];
    if (COND_EQ) { goto L_251260c; }
    if (COND_LT) { goto L_25125fc; }
    c->r[1] = sh_ror(c->r[10], c->r[5]);
    goto L_251260c;
L_25125fc:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + 0x20u;
    c->r[1] = sh_lsr(c->r[10], c->r[1]);
    c->r[1] = c->r[1] | sh_lsl(c->r[10], c->r[2]);
L_251260c:;
    c->r[1] = c->r[1] & 0x7fu;
    c->r[2] = 0xd50000u;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0));
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    if (COND_EQ) { c->r[8] = 0xb486u; }
    c->r[0] = sh_lsr(c->r[8], c->r[9]);
    c->r[1] = (c->r[1] >> 16);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16));
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[2] = c->r[2] + sh_lsr(c->r[8], c->r[9]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = c->r[2] + (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_2512648:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sh_lsl(c->r[1], c->r[0]) - c->r[12];
    c->r[1] = c->r[5] + c->r[12];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[5] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[10]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[14]);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[5]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[10] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[14] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[6];
    c->r[1] = c->r[2] - (c->r[1] << 4);
    c->r[2] = c->r[1] + (c->r[0] << 6);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_LT) { goto L_25126cc; }
    c->r[4] = clz32(c->r[2]);
    c->r[6] = c->r[2];
    c->r[3] = 0x18u - c->r[4];
    c->r[1] = 0x0u - c->r[3];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_25126e8; }
    if (COND_LT) { goto L_25126dc; }
    c->r[6] = sh_ror(c->r[2], c->r[3]);
    goto L_25126e8;
L_25126cc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    goto L_2512774;
L_25126dc:;
    c->r[0] = c->r[3] + 0x20u;
    c->r[0] = sh_lsr(c->r[2], c->r[0]);
    c->r[6] = c->r[0] | sh_lsl(c->r[2], c->r[1]);
L_25126e8:;
    c->r[6] = c->r[6] & 0x7fu;
    c->r[8] = 0xd50000u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x8000u;
    c->r[4] = (c->r[4] >> 1);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[6] * c->r[8]; c->r[6] = r; }
    if (COND_EQ) { c->r[0] = 0xb486u; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[7] = sh_lsr(c->r[0], c->r[4]);
    c->r[10] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[6] = (c->r[6] >> 16);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16));
    c->r[0] = c->r[1] + sh_lsr(c->r[0], c->r[4]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[4]; c->r[1] = r; }
    c->r[0] = c->r[0] + (c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = sh_lsl(c->r[0], c->r[1]);
    if (COND_EQ) { goto L_2512754; }
    if (COND_LT) { goto L_2512744; }
    c->r[2] = sh_ror(c->r[2], c->r[3]);
    goto L_2512754;
L_2512744:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[3] + 0x20u;
    c->r[0] = sh_lsr(c->r[2], c->r[0]);
    c->r[2] = c->r[0] | sh_lsl(c->r[2], c->r[1]);
L_2512754:;
    c->r[0] = c->r[2] & 0x7fu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    c->r[0] = (c->r[0] >> 16);
    c->r[8] = c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[2] = c->r[1] + (c->r[0] >> 16);
L_2512774:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] - c->r[12];
    c->r[4] = ~0xe0000000u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[14] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = sh_lsl(c->r[2], c->r[0]) - c->r[12];
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[14]; c->r[0] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_MI) { c->r[2] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LE) { c->r[5] = 0x1u; }
    c->r[12] = clz32(c->r[2]);
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[6] = c->r[5];
    c->r[3] = c->r[12] - 0x1u;
    if (COND_MI) { c->r[6] = 0x0u - c->r[5]; }
    c->r[7] = sh_lsl(c->r[1], c->r[3]);
    c->r[0] = clz32(c->r[6]);
    c->r[6] = c->r[0] - 0x1u;
    c->r[0] = 0x1u - c->r[0];
    c->r[6] = sh_lsl(c->r[5], c->r[6]);
    c->r[0] = c->r[0] + c->r[12];
    c->r[5] = (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[5] = sdiv32(c->r[4], c->r[5]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[6] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[7] * (int32_t)c->r[6]) >> 32);
    c->r[6] = (c->r[6] << 3);
    c->r[1] = sh_lsl(c->r[1], c->r[3]) - c->r[6];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = c->r[0] + 0xeu;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_2512830; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], 0x20u);
    if (COND_LT) { c->r[2] = sh_asr(c->r[1], c->r[3]); }
    goto L_2512888;
L_2512830:;
    c->r[2] = 0x0u - c->r[3];
    c->r[7] = 0x80000000u;
    c->r[0] = ~0x80000000u;
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[0], c->r[2]));
    if (COND_LE) { goto L_2512868; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_GT) { goto L_2512884; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { c->r[1] = c->r[3]; }
    goto L_2512880;
L_2512868:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    c->r[6] = c->r[3];
    if (COND_GT) { goto L_2512884; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[7]; }
L_2512880:;
    c->r[6] = c->r[1];
L_2512884:;
    c->r[2] = sh_lsl(c->r[6], c->r[2]);
L_2512888:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[2];
    if (COND_LE) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_GE) { c->r[1] = 0x7fffu; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25128a8(Cpu *restrict c) {
    FN_ENTER(0x25128a8u);
L_25128a8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[8] = c->r[0];
    c->r[0] = 0x749774u;
    c->r[14] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x25128ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
L_25128d0:;
    c->r[2] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = ~0x80000000u;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[10] = c->r[0] + 0x1u;
    c->r[0] = 0x0u;
L_25128f4:;
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[2] = 0xccdu;
    c->r[6] = 0x199au;
    c->r[0] = c->r[0] - c->r[4];
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[0] + (c->r[2] << 17);
    { uint32_t ea = c->r[8] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[4] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = f_subs(c, c->r[2], c->r[6]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GE) { goto L_2512a30; }
    c->r[14] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[3] = c->r[1];
    c->r[6] = c->r[8];
    c->r[9] = c->r[7];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[12]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[14] + (c->r[14] << 1);
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[8] = f_subs(c, c->r[0], c->r[1]);
    if (COND_MI) { c->r[8] = 0x0u - c->r[8]; }
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_GE) { goto L_2512a3c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[14] + (c->r[14] << 2);
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[3] + c->r[0]; ST8(ea, c->r[12]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = f_subs(c, c->r[0], c->r[1]);
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_GE) { goto L_2512a50; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3];
    c->r[8] = c->r[6];
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[12]); }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[2]); }
    c->r[2] = (c->r[14] << 3) - c->r[14];
    { uint32_t ea = c->r[8] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + c->r[4];
    c->r[6] = f_subs(c, c->r[3], c->r[2]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_2512a64; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[14] + (c->r[14] << 3);
    c->r[14] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[12]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = f_subs(c, c->r[0], c->r[14]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GE) { goto L_2512a6c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[0], 0xfu);
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[12]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[2]); }
    if (COND_LT) { goto L_25128f4; }
    goto L_2512a70;
L_2512a30:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[12] = v; }
    goto L_2512a70;
L_2512a3c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[8] = c->r[6];
    c->r[1] = c->r[3];
    c->r[7] = c->r[9];
    goto L_2512a70;
L_2512a50:;
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 4u; c->r[3] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->r[8] = c->r[6];
    c->r[7] = c->r[9];
    goto L_2512a74;
L_2512a64:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_2512a70;
L_2512a6c:;
    c->r[14] = c->r[2];
L_2512a70:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2512a74:;
    c->r[2] = 0x5556u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[12]);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x55550000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[2]) >> 32);
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[0] - (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[12];
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + (c->r[7] << 2); ST32(ea, c->r[14]); }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { goto L_25128d0; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2512ac4(Cpu *restrict c) {
    FN_ENTER(0x2512ac4u);
L_2512ac4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[14] = c->r[3] - 0x1u;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[3], 0x2u);
    c->r[5] = 0x0u;
    c->r[12] = 0x0u;
    if (COND_LT) { goto L_2512b38; }
    c->r[5] = c->r[2] + 0x2u;
    c->r[12] = 0x0u;
    c->r[4] = 0x2u;
L_2512af0:;
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[12] = (uint32_t)p; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[12] = (uint32_t)p; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_2512b30; }
    c->r[6] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[14]);
    c->r[5] = c->r[5] + 0x4u;
    c->r[4] = c->r[6];
    if (COND_LT) { goto L_2512af0; }
    c->r[4] = c->r[6] - 0x2u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_LT) { goto L_2512b40; }
    goto L_2512b8c;
L_2512b30:;
    c->r[12] = (c->r[12] >> 2);
    c->r[5] = 0x2u;
L_2512b38:;
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_GE) { goto L_2512b8c; }
L_2512b40:;
    c->r[3] = c->r[3] - 0x2u;
    c->r[6] = c->r[2] + (c->r[4] << 1);
    c->r[3] = c->r[3] - c->r[4];
    c->r[3] = c->r[3] & 0xfffffffeu;
    c->r[6] = c->r[6] + 0x2u;
    c->r[8] = c->r[4] + c->r[3];
L_2512b58:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[4] = c->r[4] + 0x2u;
    c->r[6] = c->r[6] + 0x4u;
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[12] = c->r[12] + sh_lsr(c->r[3], c->r[5]);
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { c->r[5] = c->r[5] + 0x2u; }
    if (COND_LT) { c->r[12] = (c->r[12] >> 2); }
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_LT) { goto L_2512b58; }
    c->r[4] = c->r[8] + 0x2u;
L_2512b8c:;
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_NE) { goto L_2512ba4; }
    c->r[2] = c->r[2] + (c->r[14] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[12] = c->r[12] + sh_lsr(c->r[2], c->r[5]);
L_2512ba4:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[2], (c->r[12] >> 30));
    if (COND_NE) { c->r[5] = c->r[5] + 0x2u; }
    if (COND_NE) { c->r[12] = (c->r[12] >> 2); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2512bc0(Cpu *restrict c) {
    FN_ENTER(0x2512bc0u);
L_2512bc0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x34u;
    c->r[14] = c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2512d78; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3] + c->r[2];
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2512d78; }
    c->r[0] = (c->r[2] << 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = 0x8000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
L_2512c24:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] - (c->r[2] << 1);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = c->r[0] - (c->r[2] << 1);
    c->r[2] = c->r[3] + (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[2] = (c->r[2] << 1);
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_2512c80:;
    c->r[12] = c->r[1] + c->r[4];
    c->r[7] = c->r[14] + c->r[4];
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = c->r[9];
    c->r[9] = c->r[8];
    c->r[8] = c->r[6] + c->r[4];
    c->r[4] = c->r[4] + 0x2u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[8] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[8] = c->r[9];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 13);
    c->r[0] = c->r[6] - (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[6] = c->r[9];
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_GT) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x8000u);
    if (COND_GE) { c->r[6] = 0x7fffu; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[6] = (c->r[6] >> 16);
    { uint32_t r = c->r[0] * c->r[3]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[0] + (c->r[3] >> 16);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[0]); }
    if (COND_NE) { goto L_2512c80; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[14] + c->r[0];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_2512c24; }
L_2512d78:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2512d80(Cpu *restrict c) {
    FN_ENTER(0x2512d80u);
L_2512d80:;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2512ddc; }
    c->r[2] = 0x1220u;
    c->r[3] = 0x1690u;
    c->r[12] = 0x33u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x1f0u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[12]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[12] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_GT) { goto L_2512ddc; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LE) { c->r[2] = 0x0u; }
    c->r[3] = c->r[2];
L_2512ddc:;
    c->r[2] = 0x12c1u;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[3]); }
    c->r[0] = 0x7491d0u;
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[3]);
    { uint32_t ea = 0x2512df4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x78u; ST32(ea, c->r[0]); }
    return;
}
void f_2512e04(Cpu *restrict c) {
    FN_ENTER(0x2512e04u);
L_2512e04:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2512f28; }
    c->r[4] = 0x65c052u;
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 2);
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[2] = 0x4u;
    c->r[1] = c->r[1] + 0x4u;
    c->r[0] = c->r[0] + 0x4u;
    c->r[9] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x3u; }
    c->r[4] = 0x2512e3cu + c->r[4];
    c->r[5] = c->r[4] + (c->r[5] << 1);
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[14] = 0x0u - c->r[5];
    c->r[12] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    { uint32_t r = c->r[4] * c->r[12]; c->r[4] = r; }
    c->r[12] = 0x10000u;
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[14] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[14] = (uint32_t)p; }
    c->r[4] = 0x10000u;
    if (COND_EQ) { c->r[4] = 0x0u; }
    if (COND_NE) { c->r[5] = c->r[12] + (uint32_t)((int32_t)c->r[14] >> 1); }
    c->r[14] = (uint32_t)(int32_t)(int16_t)(c->r[14]);
    c->r[2] = c->r[5] + sh_asr(c->r[3], c->r[2]);
L_2512e70:;
    c->r[6] = c->r[2] + c->r[4];
    c->r[4] = 0x1u - c->r[4];
    c->r[9] = c->r[9] + 0x4u;
    c->r[8] = (c->r[6] >> 1) & 0xffffu;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 17);
    c->r[4] = c->r[4] + (c->r[2] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[14] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[8]; c->r[8] = r; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[6] = c->r[6] + (c->r[8] >> 16);
    { uint32_t ea = c->r[0] - 0x4u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] * c->r[7]; c->r[5] = r; }
    c->r[5] = (c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    { uint32_t ea = c->r[0] - 0x2u; ST16(ea, c->r[5]); }
    { uint32_t r = c->r[7] * c->r[14]; c->r[5] = r; }
    c->r[4] = c->r[4] + (uint32_t)((int32_t)c->r[5] >> 16);
    (void)f_subs(c, c->r[4], 0x10000u);
    if (COND_GE) { c->r[4] = c->r[12]; }
    c->r[5] = c->r[4] + c->r[2];
    c->r[2] = (c->r[4] << 1) - c->r[2];
    c->r[6] = (c->r[5] >> 1) & 0xffffu;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 17);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[14] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[6]; c->r[6] = r; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[5] = c->r[5] + (c->r[6] >> 16);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[5]); }
    c->r[5] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t r = c->r[6] * c->r[5]; c->r[7] = r; }
    { uint32_t r = c->r[5] * c->r[14]; c->r[5] = r; }
    c->r[7] = (c->r[7] >> 16);
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    (void)f_subs(c, c->r[2], 0x10000u);
    if (COND_GE) { c->r[2] = c->r[12]; }
    (void)f_subs(c, c->r[9], c->r[3]);
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x8u;
    if (COND_LT) { goto L_2512e70; }
L_2512f28:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_2512f30(Cpu *restrict c) {
    FN_ENTER(0x2512f30u);
L_2512f30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[3]; }
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[2] = 0x0u;
    c->r[14] = 0x2512f74u; f_28429c8(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_2512f80(Cpu *restrict c) {
    FN_ENTER(0x2512f80u);
L_2512f80:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x22cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[2];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t r = c->r[6] * c->r[0]; c->r[2] = r; }
    c->r[0] = c->r[5];
    c->r[14] = 0x2512fb4u; f_2842ec0(c);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[2] = clz32(c->r[1]); }
    if (COND_EQ) { c->r[2] = clz32(c->r[0]); }
    if (COND_EQ) { c->r[2] = c->r[2] + 0x20u; }
    c->r[4] = 0x23u - c->r[2];
    (void)f_subs(c, c->r[4], 0x7u);
    if (COND_GE) { c->r[4] = 0x7u; }
    (void)f_adds(c, c->r[4], 0x10u);
    if (COND_LE) { c->r[4] = ~0xfu; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_2512ffc; }
    c->r[0] = sh_lsr(c->r[0], c->r[4]);
    c->r[2] = 0x20u - c->r[4];
    c->r[2] = c->r[0] | sh_lsl(c->r[1], c->r[2]);
    c->r[0] = c->r[4] - 0x20u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[2] = sh_asr(c->r[1], c->r[0]); }
    goto L_2513004;
L_2512ffc:;
    c->r[1] = 0x0u - c->r[4];
    c->r[2] = sh_lsl(c->r[0], c->r[1]);
L_2513004:;
    c->r[0] = 0xa7c6u;
    c->r[1] = 0x40u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[0] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[2] << 32) + (int64_t)(int32_t)c->r[2] * (int32_t)c->r[0]) >> 32);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x60u;
    c->r[14] = 0x2513034u; f_283ab44(c);
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    if (COND_LE) { goto L_251310c; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_2513314; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251329c; }
    c->r[0] = c->r[12] - 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] << 1);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x20u - c->r[0];
    c->r[9] = c->r[0] - 0x20u;
L_2513084:;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[1] * c->r[12]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
L_25130a8:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x25130b8u; f_2842ec0(c);
    c->r[0] = sh_lsr(c->r[0], c->r[8]);
    (void)f_subs(c, c->r[9], 0x0u);
    c->r[7] = c->r[7] - 0x1u;
    c->r[6] = c->r[6] + 0x2u;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[4]);
    if (COND_GE) { c->r[0] = sh_asr(c->r[1], c->r[9]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); c->r[10] = c->r[10] + 0x4u; }
    if (COND_NE) { goto L_25130a8; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2513084; }
    goto L_2513314;
L_251310c:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_2513314; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[12] - c->r[2];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LE) { goto L_25132d0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[2] + 0x1u;
    c->r[9] = 0x0u - c->r[0];
    c->r[0] = c->r[12] + 0x1u;
    c->r[14] = c->r[1] + (c->r[8] << 1);
    c->r[0] = c->r[0] - c->r[2];
    c->r[5] = c->r[1] + (c->r[0] << 1);
    c->r[0] = (c->r[12] << 1);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] & 0x1u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
L_251315c:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0xa0u;
    c->r[3] = c->r[8];
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[1] * c->r[12]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[0] + 0x2u;
    c->r[14] = 0x2513190u; f_2842b24(c);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[4];
    c->r[0] = 0x1u;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[5]); }
L_25131a4:;
    c->r[1] = c->r[8] + c->r[0];
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_GE) { goto L_25131dc; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    c->r[6] = c->r[14];
    c->r[1] = c->r[7];
L_25131c4:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = c->r[6] + 0x2u; c->r[4] = v; }
    c->r[3] = c->r[3] - 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    if (COND_NE) { goto L_25131c4; }
L_25131dc:;
    c->r[1] = c->r[13] + 0xa0u;
    c->r[7] = c->r[7] + 0x2u;
    c->r[1] = c->r[1] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_25131a4; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2513224; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[0] = c->r[1] + sh_lsl(c->r[0], c->r[9]);
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[0]); }
L_2513224:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_2513274; }
    c->r[0] = c->r[11] - 0x60u;
    c->r[1] = c->r[13] + 0xa0u;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[10] - c->r[2];
L_2513244:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    c->r[3] = c->r[7] + sh_lsl(c->r[3], c->r[9]);
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + sh_lsl(c->r[3], c->r[9]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x8u;
    if (COND_NE) { goto L_2513244; }
L_2513274:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[14] + c->r[0];
    c->r[5] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_251315c; }
    goto L_2513314;
L_251329c:;
    c->r[0] = c->r[11] - 0x60u;
    c->r[1] = c->r[11] - 0xa0u;
    c->r[9] = 0x10000u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[8]); }
    goto L_2513d6c;
L_25132d0:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = (c->r[12] << 1);
    c->r[4] = c->r[13] + 0xa0u;
L_25132e0:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x2u;
    c->r[2] = c->r[4];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x2513304u; f_2842b24(c);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = c->r[6] + c->r[5];
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_25132e0; }
L_2513314:;
    c->r[1] = c->r[11] - 0x60u;
    c->r[14] = c->r[11] - 0xa0u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_2513d64; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = (c->r[12] << 1);
    c->r[5] = 0x2u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    if (COND_MI) { c->r[0] = 0x0u - c->r[2]; }
    c->r[0] = clz32(c->r[0]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[0] - 0x2u;
    c->r[6] = sh_lsl(c->r[2], c->r[1]);
    c->r[1] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x40000000u;
    c->r[4] = c->r[1] + 0x4u;
    c->r[1] = c->r[13] + 0x124u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[1] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[14] - 0x4u;
    c->r[14] = c->r[11] - 0xe0u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + (c->r[12] << 1);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] - 0x2u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = ~c->r[1];
    c->r[7] = 0x7u - c->r[1];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u - c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[7]); }
    c->r[7] = 0x10u - c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
L_2513414:;
    (void)f_adds(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    if (COND_LE) { goto L_2513610; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2513808; }
    c->r[0] = c->r[12] - c->r[7];
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
L_2513458:;
    { uint32_t r = c->r[2] * c->r[12]; c->r[0] = r; }
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[1] = c->r[3] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[1] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    c->r[3] = (c->r[0] << 9);
    c->r[5] = (c->r[1] << 9);
    if (COND_LT) { goto L_2513540; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[8] = 0x0u;
    c->r[10] = c->r[11] - 0x60u;
    c->r[12] = c->r[11] - 0xa0u;
    c->r[0] = c->r[6] - sh_lsl(c->r[0], c->r[2]);
    c->r[2] = c->r[6] - sh_lsl(c->r[1], c->r[2]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
L_25134cc:;
    { uint32_t ea = c->r[10] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = c->r[14] - 0x2u; c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[6] * c->r[0]; c->r[9] = r; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[9] >> 16);
    { uint32_t ea = c->r[10] + (c->r[8] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = c->r[4] + 0x2u; c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[7] * c->r[0]; c->r[1] = r; }
    c->r[0] = c->r[11] - 0xe0u;
    c->r[1] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[12] + (c->r[8] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[0]; c->r[3] = r; }
    { uint32_t r = c->r[6] * c->r[0]; c->r[0] = r; }
    c->r[5] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 16);
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_25134cc; }
L_2513540:;
    c->r[0] = 0x0u - c->r[3];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u - c->r[5];
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    c->r[6] = ~0x1u;
    c->r[1] = sh_lsl(c->r[0], c->r[3]);
    c->r[3] = sh_lsl(c->r[2], c->r[3]);
    c->r[2] = c->r[13] + 0x124u;
    c->r[12] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[14] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = c->r[13] + 0xe0u;
    c->r[8] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[9] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2513584:;
    { uint32_t ea = c->r[2] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = c->r[5] - 0x2u; c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[9] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    c->r[0] = c->r[4] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[4] = c->r[1] + c->r[6];
    c->r[6] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[2] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t r = c->r[4] * c->r[12]; c->r[4] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[4] >> 16);
    { uint32_t ea = c->r[10] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_2513584; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[1] + c->r[10];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[9]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2513458; }
    goto L_2513808;
L_2513610:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2513808; }
    c->r[0] = c->r[12] - c->r[7];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
L_2513638:;
    { uint32_t r = c->r[4] * c->r[12]; c->r[0] = r; }
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[1] = c->r[3] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[1] + (c->r[7] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[0] << 17);
    c->r[1] = (c->r[2] << 17);
    if (COND_LT) { goto L_25136e8; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = c->r[11] - 0xa0u;
    c->r[8] = c->r[7];
    c->r[10] = 0x1u;
    c->r[0] = sh_lsl(c->r[0], c->r[4]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = sh_lsl(c->r[2], c->r[4]);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
L_2513694:;
    c->r[0] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = c->r[6] - 0x2u; c->r[0] = v; }
    { uint32_t ea = c->r[12] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - c->r[0] * c->r[4];
    { uint32_t ea = c->r[12] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = c->r[5] + 0x2u; c->r[4] = v; }
    c->r[7] = c->r[7] - c->r[4] * c->r[12];
    { uint32_t ea = c->r[9] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[2]);
    c->r[7] = c->r[10] + (uint32_t)((int32_t)c->r[7] >> 7);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1);
    { uint32_t r = c->r[4] * c->r[7] + c->r[3]; c->r[3] = r; }
    { uint32_t r = c->r[7] * c->r[0] + c->r[1]; c->r[1] = r; }
    if (COND_NE) { goto L_2513694; }
    goto L_25136ec;
L_25136e8:;
    c->r[10] = 0x1u;
L_25136ec:;
    c->r[0] = 0x0u - c->r[3];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = ~0x1u;
    c->r[9] = c->r[13] + 0x124u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u - c->r[1];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
L_2513738:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] - 0x2u; c->r[12] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = sh_lsl(c->r[12], c->r[14]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[5] = c->r[10] + (uint32_t)((int32_t)c->r[4] >> 15);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 1);
    { uint32_t r = c->r[5] * c->r[0] + c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[13] + 0xe0u;
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    c->r[3] = c->r[1] + c->r[6];
    c->r[6] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[3] = sh_lsl(c->r[3], c->r[14]);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[3] = c->r[10] + (uint32_t)((int32_t)c->r[3] >> 15);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t r = c->r[4] * c->r[0]; c->r[4] = r; }
    c->r[5] = c->r[5] + (uint32_t)((int32_t)c->r[4] >> 16);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[3] * c->r[4] + c->r[5]; c->r[3] = r; }
    { uint32_t ea = c->r[12] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_NE) { goto L_2513738; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = c->r[11] - 0xe0u;
    c->r[1] = c->r[1] + c->r[10];
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = c->r[0] + c->r[10];
    c->r[6] = c->r[6] + c->r[10];
    (void)f_subs(c, c->r[4], c->r[9]);
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2513638; }
L_2513808:;
    c->r[0] = c->r[11] - 0xa0u;
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[1] + c->r[0];
    if (COND_LT) { goto L_25138d8; }
    c->r[7] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = 0x0u;
    c->r[4] = c->r[13] + 0xe0u;
L_251383c:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4] - c->r[7];
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[13] + 0xe0u;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] - c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] - 0xe0u;
    c->r[12] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[0] - c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[6];
    if (COND_MI) { c->r[2] = 0x0u - c->r[6]; }
    c->r[2] = clz32(c->r[2]);
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x7u);
    if (COND_GE) { c->r[2] = 0x7u; }
    (void)f_subs(c, c->r[5], c->r[3]);
    c->r[6] = sh_lsl(c->r[6], c->r[2]);
    c->r[2] = 0x7u - c->r[2];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[12]) >> 32);
    c->r[14] = c->r[14] + sh_lsl(c->r[0], c->r[2]);
    c->r[0] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[0]) >> 32);
    c->r[1] = c->r[1] + sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[0]) >> 32);
    c->r[8] = c->r[8] + sh_lsl(c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[7] = c->r[7] - 0x4u;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[0]) >> 32);
    c->r[9] = c->r[9] + sh_lsl(c->r[0], c->r[2]);
    if (COND_NE) { goto L_251383c; }
    goto L_25138e0;
L_25138d8:;
    c->r[1] = 0x0u;
    c->r[4] = c->r[13] + 0xe0u;
L_25138e0:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[0] + 0x1u;
    c->r[0] = c->r[13] + 0x124u;
    { uint32_t ea = c->r[0] + (c->r[12] << 2); ST32(ea, c->r[9]); }
    c->r[0] = c->r[1] + c->r[8];
    { uint32_t ea = c->r[4] + (c->r[12] << 2); ST32(ea, c->r[8]); }
    c->r[1] = 0x0u - c->r[0];
    c->r[2] = (uint32_t)(((int32_t)(c->r[1] << 1)) >> 31);
    c->r[4] = (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[12]); }
    c->r[0] = c->r[2] - (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0] ^ (uint32_t)((int32_t)c->r[4] >> 31);
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_GE) { goto L_25139b0; }
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = c->r[14];
    c->r[7] = ~0xe0000000u;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_MI) { c->r[2] = 0x0u - c->r[14]; }
    c->r[8] = clz32(c->r[2]);
    c->r[2] = c->r[8] - 0x1u;
    c->r[2] = sh_lsl(c->r[14], c->r[2]);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[3] = sdiv32(c->r[7], c->r[3]);
    c->r[7] = clz32(c->r[1]);
    c->r[1] = c->r[7] - 0x1u;
    c->r[6] = sh_lsl(c->r[4], c->r[1]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t r = c->r[0] * c->r[5]; c->r[5] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[2]) >> 32);
    c->r[2] = (c->r[2] << 3);
    c->r[1] = sh_lsl(c->r[4], c->r[1]) - c->r[2];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    c->r[0] = 0x1u - c->r[8];
    c->r[8] = c->r[13] + 0x124u;
    c->r[0] = c->r[0] + c->r[7];
    c->r[1] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[2] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2513a6c; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[2], 0x20u);
    c->r[0] = 0x0u;
    if (COND_LT) { c->r[0] = sh_asr(c->r[1], c->r[2]); }
    goto L_25139cc;
L_25139b0:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = 0x80000000u;
    c->r[8] = c->r[13] + 0x124u;
    if (COND_GT) { c->r[0] = ~0x80000000u; }
L_25139cc:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
L_25139d0:;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[0]) >> 32);
    c->r[4] = 0x0u;
    c->r[1] = 0x40000000u - c->r[1];
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[5]) >> 32);
    c->r[2] = (c->r[1] << 2);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { goto L_2513bd8; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[5];
    c->r[3] = ~0xe0000000u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_MI) { c->r[0] = 0x0u - c->r[5]; }
    c->r[1] = clz32(c->r[0]);
    c->r[0] = c->r[1] - 0x1u;
    c->r[1] = 0x1u - c->r[1];
    c->r[0] = sh_lsl(c->r[5], c->r[0]);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = sdiv32(c->r[3], c->r[2]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[7] = r; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[7] = c->r[6] + (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[7] * (int32_t)c->r[0]) >> 32);
    c->r[0] = c->r[4] - (c->r[0] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2513aac; }
    (void)f_subs(c, c->r[2], 0x20u);
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[1] = sh_asr(c->r[0], c->r[2]); }
    goto L_2513b28;
L_2513a6c:;
    c->r[0] = 0x0u - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[0]);
    c->r[7] = sh_lsr(c->r[2], c->r[0]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[0]));
    if (COND_LE) { goto L_2513ae0; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2513b04; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[7]; }
    goto L_2513b00;
L_2513aac:;
    c->r[1] = 0x0u - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[7] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2513b0c; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2513b24; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2513b20;
L_2513ae0:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2513b04; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { c->r[1] = c->r[3]; }
L_2513b00:;
    c->r[2] = c->r[1];
L_2513b04:;
    c->r[0] = sh_lsl(c->r[2], c->r[0]);
    goto L_25139d0;
L_2513b0c:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2513b24; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2513b20:;
    c->r[2] = c->r[0];
L_2513b24:;
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
L_2513b28:;
    c->r[1] = 0x40000000u - c->r[1];
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2513b58; }
    c->r[0] = clz32(c->r[1]);
    c->r[2] = c->r[1];
    c->r[3] = 0x18u - c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2513b70; }
    if (COND_LT) { goto L_2513b60; }
    c->r[2] = sh_ror(c->r[1], c->r[3]);
    goto L_2513b70;
L_2513b58:;
    c->r[0] = 0x0u;
    goto L_2513bd0;
L_2513b60:;
    c->r[2] = 0x0u - c->r[3];
    c->r[3] = c->r[3] + 0x20u;
    c->r[3] = sh_lsr(c->r[1], c->r[3]);
    c->r[2] = c->r[3] | sh_lsl(c->r[1], c->r[2]);
L_2513b70:;
    c->r[2] = c->r[2] & 0x7fu;
    c->r[6] = 0xd50000u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0x8000u;
    c->r[0] = (c->r[0] >> 1);
    { uint32_t r = c->r[2] * c->r[6]; c->r[2] = r; }
    if (COND_EQ) { c->r[3] = 0xb486u; }
    c->r[7] = sh_lsr(c->r[3], c->r[0]);
    c->r[2] = (c->r[2] >> 16);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16));
    c->r[0] = c->r[6] + sh_lsr(c->r[3], c->r[0]);
    c->r[3] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[0] = c->r[0] + (c->r[2] >> 16);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2513bd0; }
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[1] & (c->r[0] << 15);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x0u - c->r[0]; }
L_2513bd0:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
L_2513bd8:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[11] - 0xe0u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2513c2c; }
    c->r[2] = 0x0u;
L_2513bf8:;
    c->r[7] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[4] - c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[7] = c->r[7] + (c->r[14] << 2);
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[0]) >> 32);
    c->r[5] = c->r[3] + (c->r[5] << 1);
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[0]) >> 32);
    { uint32_t ea = c->r[4] - c->r[2]; ST32(ea, c->r[5]); }
    c->r[2] = c->r[2] - 0x4u;
    c->r[3] = c->r[6] + (c->r[3] << 1);
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_2513bf8; }
L_2513c2c:;
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 6);
    { uint32_t ea = c->r[4] + (c->r[14] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[4];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2513da4; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[4];
L_2513c54:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[7] * (int32_t)c->r[0]) >> 32);
    c->r[6] = c->r[3] + (c->r[6] << 1);
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[0]) >> 32);
    { uint32_t ea = c->r[8] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = c->r[7] + (c->r[3] << 1);
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); c->r[2] = c->r[2] - 0x4u; }
    if (COND_NE) { goto L_2513c54; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[4] + 0x4u;
    c->r[5] = c->r[5] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2513414; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = 0x10000u;
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_2513d6c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[14];
    c->r[14] = 0x1u;
    c->r[12] = 0x0u;
L_2513d08:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[3] = v; }
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    c->r[3] = c->r[14] + (uint32_t)((int32_t)c->r[3] >> 8);
    c->r[5] = c->r[14] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 17);
    c->r[6] = (uint32_t)(((int32_t)(c->r[3] << 15)) >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[3] = c->r[12] - (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 1);
    { uint32_t r = c->r[5] * c->r[7] + c->r[4]; c->r[9] = r; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[4]; c->r[4] = r; }
    c->r[9] = c->r[9] + (uint32_t)((int32_t)c->r[4] >> 16);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[4] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); c->r[1] = c->r[1] + 0x4u; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[8]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    { uint32_t r = c->r[5] * c->r[4] + c->r[7]; c->r[7] = r; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    c->r[8] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 16);
    if (COND_NE) { goto L_2513d08; }
    goto L_2513d6c;
L_2513d64:;
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = 0x10000u;
L_2513d6c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xa7c6u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[0] = 0x0u - c->r[9];
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[8]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = 0x1u;
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t r = c->r[0] * c->r[1] + c->r[2]; c->r[0] = r; }
    goto L_2513f14;
L_2513da4:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_GE) { goto L_2513ddc; }
    c->r[0] = c->r[14] + (c->r[1] << 2);
    c->r[1] = c->r[4] - c->r[1];
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x2513dc4u; f_283abec(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = c->r[11] - 0xe0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { goto L_2513dec; }
    goto L_2513e74;
L_2513ddc:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_2513e74; }
L_2513dec:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2513e18; }
    { uint32_t ea = c->r[11] - 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[0] = c->r[2] - (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_2513e18:;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_2513e74; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[3] = 0x1u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[2] + (c->r[1] << 2);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = c->r[14] + c->r[2];
L_2513e44:;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    c->r[6] = c->r[3] + (uint32_t)((int32_t)c->r[6] >> 8);
    c->r[6] = c->r[7] - (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] + 0x8u;
    c->r[6] = c->r[3] + (uint32_t)((int32_t)c->r[6] >> 8);
    c->r[6] = c->r[7] - (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] + 0x8u;
    if (COND_NE) { goto L_2513e44; }
L_2513e74:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { goto L_2513ecc; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2513f08; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = 0x20u - c->r[5];
    c->r[5] = c->r[5] - 0x20u;
L_2513e94:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[8];
    c->r[2] = c->r[7];
    c->r[14] = 0x2513ea4u; f_2842ec0(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[8] = c->r[8] + c->r[10];
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[4]);
    if (COND_GE) { c->r[0] = sh_asr(c->r[1], c->r[5]); }
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    c->r[6] = c->r[6] - c->r[0];
    if (COND_NE) { goto L_2513e94; }
    goto L_2513f08;
L_2513ecc:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2513f08; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_2513ee4:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[8];
    c->r[2] = c->r[4];
    c->r[3] = c->r[5];
    c->r[14] = 0x2513ef8u; f_2842ecc(c);
    c->r[6] = c->r[6] - sh_lsl(c->r[0], c->r[7]);
    c->r[8] = c->r[8] + c->r[10];
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_2513ee4; }
L_2513f08:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[0]) >> 32);
    c->r[0] = (c->r[0] << 2);
L_2513f14:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2513f34(Cpu *restrict c) {
    FN_ENTER(0x2513f34u);
L_2513f34:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = c->r[2];
    c->r[6] = c->r[1];
    c->r[0] = c->r[0] + (c->r[10] << 1);
    c->r[5] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_2513fc0; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_2513ff0; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_2513ff8; }
    c->r[12] = 0x0u;
L_2513f78:;
    c->r[2] = 0x0u;
    c->r[4] = c->r[8];
    c->r[3] = 0x0u;
L_2513f84:;
    c->r[7] = c->r[5] + c->r[2];
    c->r[1] = c->r[6] + c->r[2];
    c->r[2] = c->r[2] + 0x2u;
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[3] = c->r[3] + sh_asr(c->r[1], c->r[0]);
    if (COND_NE) { goto L_2513f84; }
    { uint32_t ea = c->r[9] + (c->r[12] << 2); ST32(ea, c->r[3]); }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] - 0x2u;
    (void)f_subs(c, c->r[12], c->r[10]);
    if (COND_NE) { goto L_2513f78; }
    goto L_2513ff0;
L_2513fc0:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_2513ff0; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2513fcc:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = c->r[8];
    c->r[3] = c->r[4];
    c->r[14] = 0x2513fe0u; f_2842ecc(c);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); c->r[9] = c->r[9] + 0x4u; }
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    c->r[5] = c->r[5] - 0x2u;
    if (COND_NE) { goto L_2513fcc; }
L_2513ff0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2513ff8:;
    c->r[1] = (c->r[10] << 2);
    c->r[0] = c->r[9];
    c->r[14] = 0x2514004u; f_283abec(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251400c(Cpu *restrict c) {
    FN_ENTER(0x251400cu);
L_251400c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x34u;
    c->r[10] = c->r[1];
    c->r[4] = c->r[2];
    c->r[5] = c->r[0];
    c->r[6] = c->r[3];
    c->r[1] = c->r[11] - 0x20u;
    c->r[0] = c->r[10] + c->r[4];
    c->r[2] = c->r[5];
    c->r[3] = c->r[0] - 0x1u;
    c->r[0] = c->r[11] - 0x24u;
    c->r[14] = 0x2514040u; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = c->r[4];
    c->r[12] = c->r[14] - 0x1u;
    c->r[0] = clz32(c->r[1]);
    c->r[3] = f_subs(c, c->r[6], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_LE) { c->r[3] = c->r[0]; }
    (void)f_subs(c, c->r[14], 0x2u);
    c->r[2] = sh_asr(c->r[1], c->r[3]);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_25140d0; }
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2514094; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[2] = c->r[2] - sh_lsr(c->r[0], c->r[3]);
    c->r[0] = 0x1u;
L_2514094:;
    (void)f_subs(c, c->r[14], 0x2u);
    if (COND_EQ) { goto L_25140cc; }
    c->r[1] = c->r[12] - c->r[0];
    c->r[0] = c->r[5] + (c->r[0] << 1);
    c->r[0] = c->r[0] + 0x2u;
L_25140a8:;
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[2] = c->r[2] - sh_lsr(c->r[6], c->r[3]);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[2] = c->r[2] - sh_lsr(c->r[6], c->r[3]);
    if (COND_NE) { goto L_25140a8; }
L_25140cc:;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
L_25140d0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LE) { goto L_25140f0; }
    c->r[1] = c->r[0] - c->r[3];
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    c->r[2] = sh_asr(c->r[2], c->r[1]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    goto L_25140f4;
L_25140f0:;
    c->r[0] = c->r[3];
L_25140f4:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[14], 0x2u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2514160; }
    c->r[1] = 0x4u;
    c->r[9] = c->r[5];
    c->r[4] = (c->r[10] << 1);
    c->r[3] = c->r[1] + (c->r[14] << 2);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + c->r[3];
    c->r[1] = c->r[5] + (c->r[14] << 1);
    c->r[5] = c->r[1] - 0x4u;
    c->r[1] = 0x1u;
L_2514128:;
    c->r[7] = c->r[4] + c->r[5];
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[14], c->r[1]);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[2] = c->r[2] - sh_lsr(c->r[7], c->r[0]);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[5] = c->r[5] - 0x2u;
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[2] = c->r[2] + sh_lsr(c->r[7], c->r[0]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); c->r[6] = c->r[6] + c->r[3]; }
    if (COND_NE) { goto L_2514128; }
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
L_2514160:;
    c->r[1] = c->r[5] + (c->r[14] << 1);
    c->r[12] = c->r[5] + (c->r[12] << 1);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    c->r[9] = c->r[1] - 0x4u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    if (COND_LE) { goto L_2514308; }
    (void)f_subs(c, c->r[14], 0x2u);
    if (COND_LT) { goto L_25145a4; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LE) { goto L_2514468; }
    c->r[3] = 0x0u - c->r[5];
    c->r[1] = ~0x1u;
    c->r[2] = 0x4u;
    c->r[4] = c->r[3] - (c->r[14] << 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[10] << 1);
    c->r[2] = c->r[2] + (c->r[14] << 2);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    c->r[7] = c->r[3];
    c->r[3] = c->r[7] + (c->r[14] << 3);
    c->r[8] = c->r[3] + 0x4u;
    c->r[3] = c->r[7] + (c->r[14] << 2);
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[14] << 2);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[14] - 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
L_25141ec:;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
L_25141fc:;
    c->r[6] = c->r[12] + c->r[3];
    c->r[4] = c->r[9] + c->r[3];
    c->r[3] = c->r[3] + 0x2u;
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[5] = c->r[5] + sh_asr(c->r[6], c->r[0]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_25141fc; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[6] * c->r[14]; c->r[3] = r; }
    { uint32_t ea = c->r[7] + (c->r[3] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    c->r[3] = c->r[14] - c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_LT) { goto L_25142b0; }
L_251425c:;
    c->r[7] = c->r[1] - c->r[3];
    c->r[6] = c->r[1] - c->r[12];
    c->r[14] = c->r[14] + 0x1u;
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[4], c->r[14]);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[7] = ~0x5u;
    c->r[5] = c->r[5] - sh_asr(c->r[6], c->r[0]);
    c->r[6] = ~0x3u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] - c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] - c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + 0x2u;
    c->r[12] = c->r[12] + 0x2u;
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[5] = c->r[5] + sh_asr(c->r[6], c->r[0]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); c->r[8] = c->r[8] + c->r[2]; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[5]); c->r[10] = c->r[10] + c->r[2]; }
    if (COND_NE) { goto L_251425c; }
L_25142b0:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = c->r[9] - 0x2u;
    c->r[8] = c->r[8] + c->r[3];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[14]);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_25141ec; }
    goto L_25145a0;
L_2514308:;
    (void)f_subs(c, c->r[14], 0x2u);
    if (COND_LT) { goto L_25145a4; }
    c->r[0] = 0x4u;
    c->r[1] = c->r[10];
    c->r[6] = 0x1u;
    c->r[10] = c->r[0] + (c->r[14] << 2);
    c->r[0] = ~0x1u;
    c->r[8] = c->r[0] + (c->r[1] << 1);
    c->r[0] = 0x0u - c->r[5];
    c->r[5] = c->r[14] - 0x2u;
    c->r[2] = c->r[0] - (c->r[14] << 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[0];
    c->r[0] = c->r[1] + (c->r[14] << 2);
    c->r[3] = c->r[0] + 0x8u;
    c->r[0] = c->r[1] + (c->r[14] << 3);
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[14] << 2);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_2514368:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[12];
    c->r[1] = c->r[9];
    c->r[14] = 0x2514380u; f_2842ecc(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[14] = ~0x5u;
    { uint32_t r = c->r[6] * c->r[3]; c->r[1] = r; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[3] - c->r[6];
    { uint32_t ea = c->r[2] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_2514410; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_25143c0:;
    c->r[4] = c->r[8] - c->r[7];
    c->r[12] = c->r[5];
    c->r[5] = c->r[8] - c->r[6];
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[0] = c->r[0] - c->r[4] * c->r[5];
    c->r[4] = ~0x3u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[14] - c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[6] = c->r[6] + 0x2u;
    c->r[7] = c->r[7] + 0x2u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[5] = c->r[12];
    (void)f_subs(c, c->r[5], c->r[3]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); c->r[2] = c->r[2] + c->r[10]; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + c->r[10]; }
    if (COND_NE) { goto L_25143c0; }
L_2514410:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = c->r[9] - 0x2u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_2514368; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_25145a0;
L_2514468:;
    c->r[3] = 0x0u - c->r[5];
    c->r[1] = 0x4u;
    c->r[2] = ~0x1u;
    c->r[4] = c->r[14] - 0x2u;
    c->r[6] = c->r[3] - (c->r[14] << 1);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[14] << 2);
    c->r[2] = c->r[2] + (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[7] = c->r[3];
    c->r[3] = c->r[7] + (c->r[14] << 2);
    c->r[3] = c->r[3] + 0x8u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[7] + (c->r[14] << 3);
    c->r[7] = 0x1u;
    c->r[3] = c->r[3] + 0x4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[14] << 2);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
L_25144c0:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[7] * c->r[14]; c->r[6] = r; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    c->r[6] = c->r[14] - c->r[7];
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    c->r[3] = ~0x3u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_LT) { goto L_2514558; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
L_2514504:;
    c->r[5] = c->r[2] - c->r[8];
    c->r[7] = c->r[2] - c->r[12];
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[5] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[7] = c->r[14] - sh_asr(c->r[5], c->r[0]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] - c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[3] = ~0x5u;
    c->r[8] = c->r[8] + 0x2u;
    { uint32_t ea = c->r[3] - c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[12] = c->r[12] + 0x2u;
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[14] = c->r[7] + sh_asr(c->r[3], c->r[0]);
    c->r[3] = ~0x3u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[14]); c->r[10] = c->r[10] + c->r[1]; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[14]); c->r[9] = c->r[9] + c->r[1]; }
    if (COND_NE) { goto L_2514504; }
L_2514558:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[3] = c->r[3] + 0x4u;
    (void)f_subs(c, c->r[7], c->r[14]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_25144c0; }
L_25145a0:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
L_25145a4:;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25145b0(Cpu *restrict c) {
    FN_ENTER(0x25145b0u);
L_25145b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x140au;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x25145ccu; f_2842ed8(c);
    c->r[0] = 0x11ccu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_GT) { goto L_2514624; }
    c->r[1] = 0x12bdu;
    c->r[0] = 0x0u;
    c->r[2] = 0x17e4u;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[3], 0xau);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_2514614; }
    (void)f_subs(c, c->r[2], 0x1eu);
    if (COND_LT) { goto L_2514644; }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_2514614:;
    c->r[1] = 0x17e0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_2514644;
L_2514624:;
    c->r[0] = 0x17e4u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x17e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    c->r[1] = 0x12bdu;
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
L_2514644:;
    c->r[1] = 0x1694u;
    c->r[2] = 0x1290u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251465c(Cpu *restrict c) {
    FN_ENTER(0x251465cu);
L_251465c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1ccu;
    c->r[13] = c->r[13] - 0x2400u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    c->r[3] = 0x7478a0u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    c->r[0] = 0x1224u;
    c->r[8] = 0x12c2u;
    c->r[1] = c->r[7];
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = 0x251469cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[8]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1208u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[5] = v; }
    c->r[0] = 0x1200u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[2] = v; }
    c->r[0] = 0x140au;
    c->r[4] = c->r[7] + c->r[0];
    c->r[0] = c->r[7] + 0x10u;
    c->r[1] = c->r[4];
    c->r[14] = 0x25146dcu; f_2842ee4(c);
    c->r[0] = 0x208cu;
    c->r[1] = c->r[7];
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[0] + (c->r[5] << 1);
    c->r[0] = 0x11f8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[5] + (c->r[0] << 1);
    c->r[2] = (c->r[1] << 1);
    c->r[1] = c->r[4];
    c->r[14] = 0x2514718u; f_283aa78(c);
    c->r[0] = 0x1268u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25147f8; }
L_2514730:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x208cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 1);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x251476cu; f_283f1ac(c);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_25147d4; }
    c->r[0] = 0x11fcu;
    c->r[1] = c->r[13] + 0x1280u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = 0x11d8u;
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x12bdu;
    c->r[1] = 0x11d5u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1258u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] - 0x19u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
L_25147d4:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x747750u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x25147ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25147f8:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[13] + 0x1280u;
    c->r[3] = c->r[5];
    c->r[0] = c->r[4] + c->r[8];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x38u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x120cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x7476f8u;
    { uint32_t ea = 0x2514844u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[7] = c->r[1] + c->r[2];
    c->r[1] = c->r[10];
    c->r[0] = c->r[7] + (c->r[0] << 1);
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1404u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2514874u; f_2842ef0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7] + (c->r[8] << 1);
    c->r[1] = c->r[10];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2514890u; f_2842efc(c);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[7];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x25148acu; f_2842f08(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[6];
    c->r[14] = 0x25148bcu; f_2842f14(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5];
    c->r[1] = 0x0u - c->r[0];
    c->r[1] = c->r[1] & 0x3u;
    c->r[2] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x25148f0u; f_2842f20(c);
    c->r[0] = 0x1694u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x17ecu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2514ac8; }
    c->r[1] = 0x11ccu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4eu);
    if (COND_LT) { goto L_2514ac8; }
    c->r[1] = c->r[0] + (c->r[0] << 3);
    c->r[2] = 0x17f4u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->r[1] = c->r[4] + (c->r[1] << 2);
    c->r[9] = c->r[1] + c->r[2];
    c->r[1] = 0x1294u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[4] + 0x90u;
    c->r[0] = c->r[11] - 0x1140u;
    c->r[2] = 0x111cu;
    c->r[14] = 0x2514950u; f_283ac04(c);
    c->r[0] = 0x12a0u;
    c->r[2] = 0x24u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2514964u; f_283aa78(c);
    c->r[0] = 0x11fcu;
    c->r[6] = c->r[4];
    c->r[1] = c->r[13] + 0x1280u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    c->r[0] = c->r[13] + 0x100u;
    c->r[2] = (c->r[5] << 2);
    c->r[14] = 0x2514980u; f_283ac28(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25149b0; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->r[1] = 0x1290u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25149b0; }
    c->r[0] = 0x11d4u;
    c->r[2] = c->r[4] + c->r[0];
    goto L_25149e8;
L_25149b0:;
    c->r[0] = 0x1c20u;
    c->r[1] = 0x11d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x17f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = c->r[4] + c->r[1];
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x3fu);
    if (COND_GE) { c->r[0] = 0x3fu; }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
L_25149e8:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[3] = 0x0u;
    c->r[5] = c->r[13] + 0x1280u;
    c->r[1] = c->r[9];
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[5];
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[14] = 0x2514a0cu; f_2842d28(c);
    c->r[0] = 0x122cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_2514a2c; }
    c->r[0] = 0x1260u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_25151b0; }
L_2514a2c:;
    c->r[14] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5] + 0x7cu;
    c->r[1] = c->r[14] + 0x2f8u;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x18cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1bcu;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1ccu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x10cu;
    c->r[0] = c->r[4] + (c->r[0] << 6);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x50u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1860u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[11] - 0x1140u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2514ab4u; f_2842f2c(c);
L_2514ab4:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x100u;
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[13] + 0x1280u;
    c->r[14] = 0x2514ac8u; f_283ac28(c);
L_2514ac8:;
    c->r[0] = 0x11fcu;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[2]); }
    c->r[14] = 0x2514ae0u; f_2842f38(c);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[0];
    c->r[14] = c->r[13] + 0x1000u;
    c->r[1] = c->r[14] + 0x250u;
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[4] + 0x90u;
    c->r[0] = c->r[11] - 0x1140u;
    c->r[2] = 0x111cu;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    c->r[14] = 0x2514b18u; f_283ac04(c);
    c->r[0] = 0x7473f8u;
    c->r[1] = 0x4fbu;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = c->r[13] + 0x1000u;
    c->r[5] = c->r[9];
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xff800000u;
    { uint32_t ea = 0x2514b44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x16a8u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x448u;
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3eau;
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3ebu;
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x47cu;
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x578u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x7cu;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x18cu;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1bcu;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1ccu;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x10cu;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x50u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x1cu;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] - 0x5u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - 0x3e4u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x238u;
    c->r[14] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + 0x220u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    goto L_2514cd4;
L_2514c84:;
    c->r[8] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[8] + 0x2f8u;
    { uint32_t ea = c->r[1] + 0x1acu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x2514cb4u; f_2842f44(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x2514cc0u; f_2842f38(c);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[6] + 0x1u;
L_2514cd4:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[7];
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_2514e74; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_2514e74; }
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[5]); }
    if (COND_LT) { goto L_2514d58; }
    c->r[8] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[8] + 0x250u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 24u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[5] = LD32(ea + 16u); c->r[6] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[5] = LD32(ea + 16u); c->r[6] = LD32(ea + 20u); }
    c->r[1] = c->r[11] - 0x1140u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[2] = 0x111cu;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0x2514d34u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_2514d58:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_2514d80; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_25150b0; }
L_2514d80:;
    c->r[14] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[14] + 0x2f8u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2514df0u; f_2842f2c(c);
L_2514df0:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x2514e14u; f_2842da0(c);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2514e3cu; f_2842dac(c);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[6] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[8] = c->r[0] - 0x20u;
    if (COND_NE) { goto L_2514e70; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_GT) { goto L_2514e74; }
    goto L_2514730;
L_2514e70:;
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[5] = v; }
L_2514e74:;
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_EQ) { goto L_2515124; }
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_LE) { goto L_2514ec8; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2514f00; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_LT) { goto L_2514f00; }
    c->r[14] = c->r[13] + 0x1000u;
    c->r[0] = c->r[14] + 0x2f8u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[1] + 0x164u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    goto L_2514f90;
L_2514ec8:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_GE) { goto L_2514730; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_2514f1c; }
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[5]); }
    goto L_2514f8c;
L_2514f00:;
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[5]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    goto L_2514f90;
L_2514f1c:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[5]); }
    c->r[14] = c->r[13] + 0x1000u;
    c->r[12] = c->r[14] + 0x238u;
    c->r[14] = c->r[13] + 0x1000u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[5] = LD32(ea + 16u); c->r[6] = LD32(ea + 20u); }
    c->r[1] = c->r[14] + 0x220u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    c->r[14] = 0x2514f64u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x100u;
    c->r[2] = 0x111cu;
    c->r[14] = 0x2514f74u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
L_2514f8c:;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2514f90:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2514ffc; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] - c->r[7];
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[3];
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[4] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 2);
    c->r[2] = c->r[2] - c->r[7];
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] + c->r[3];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_GT) { goto L_2515054; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 2);
    c->r[1] = c->r[3] - c->r[1];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->r[4] = c->r[0];
    goto L_2515054;
L_2514ffc:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] - c->r[4];
    c->r[0] = (c->r[0] << 7);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] + 0x800u;
    c->r[14] = 0x2515018u; f_2842e0c(c);
    c->r[1] = 0x4ccdu;
    (void)f_subs(c, c->r[0], 0x20000u);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    if (COND_GE) { c->r[0] = 0x20000u; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[8], c->r[4]);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_LE) { c->r[1] = c->r[0]; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
L_2515054:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2514c84; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[2] = 0x0u;
L_2515068:;
    c->r[3] = c->r[10] + (c->r[2] << 2);
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[3] + 0x214u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[6] * c->r[1]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_GT) { c->r[7] = c->r[3]; }
    (void)f_subs(c, c->r[3], 0x800000u);
    c->r[7] = (c->r[7] << 8);
    if (COND_GE) { c->r[7] = 0xff00u; }
    if (COND_GE) { c->r[7] = (c->r[7] & 0xFFFFu) | 0x7fff0000u; }
    { uint32_t ea = c->r[10] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LT) { goto L_2515068; }
    goto L_2514c84;
L_25150b0:;
    c->r[14] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[14] + 0x2f8u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x2515120u; f_2842f50(c);
    goto L_2514df0;
L_2515124:;
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[8], c->r[4]);
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    if (COND_GT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2514730; }
    c->r[0] = c->r[0] | c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2514730; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[4] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[7]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2515190u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x100u;
    c->r[2] = 0x111cu;
    c->r[14] = 0x25151a0u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    goto L_2514730;
L_25151b0:;
    c->r[14] = c->r[13] + 0x1000u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[5] + 0x7cu;
    c->r[1] = c->r[14] + 0x2f8u;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x18cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1bcu;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x1ccu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x10cu;
    c->r[0] = c->r[4] + (c->r[0] << 6);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x50u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1860u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[11] - 0x1140u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x2515238u; f_2842f50(c);
    goto L_2514ab4;
}
void f_251524c(Cpu *restrict c) {
    FN_ENTER(0x251524cu);
L_251524c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x114u;
    c->r[5] = c->r[2];
    c->r[2] = 0x746ca8u;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1204u;
    c->r[1] = 0x1238u;
    c->r[6] = c->r[3];
    c->r[3] = 0x4u;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[8];
    c->r[10] = c->r[8];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = 0x2515294u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[1] + c->r[0];
    c->r[0] = c->r[13] + 0x7cu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x12bfu;
    { uint32_t ea = c->r[7] + c->r[2]; ST8(ea, c->r[3]); c->r[7] = ea; }
    c->r[2] = 0x1404u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[10] = ea; c->r[2] = v; }
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] - 0x208u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[13] + 0x74u;
    c->r[2] = c->r[11] - 0x60u;
    c->r[3] = c->r[5];
    c->r[14] = 0x25152e0u; f_2842f5c(c);
    { uint32_t ea = c->r[10] - 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25154ec; }
    c->r[0] = 0x1258u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25154ec; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_25154ec; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x70u;
    c->r[3] = c->r[0] + (c->r[9] << 2);
    c->r[0] = c->r[13] + 0x78u;
    c->r[14] = 0x251533cu; f_2842f5c(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2515368; }
    (void)f_subs(c, c->r[0], 0x1fu);
    if (COND_GT) { goto L_2515380; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] - sh_asr(c->r[1], c->r[0]);
    goto L_251537c;
L_2515368:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    c->r[0] = sh_asr(c->r[2], c->r[0]) - c->r[3];
L_251537c:;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
L_2515380:;
    c->r[0] = (c->r[9] << 1);
    c->r[1] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x2515398u; f_2842f68(c);
    c->r[0] = 0x746b94u;
    c->r[5] = 0x4u;
    { uint32_t ea = 0x25153a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[7] = c->r[1] + c->r[2];
    c->r[1] = c->r[7] + (c->r[9] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x11acu;
    c->r[0] = c->r[8] + c->r[0];
    c->r[8] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_25153c8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[5] - 0x1u;
    c->r[6] = c->r[13] + 0x30u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x25153ecu; f_2842e3c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0x25153fcu; f_2842b9c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x251541cu; f_2842c2c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11] - 0x6cu;
    c->r[2] = c->r[7] + (c->r[0] << 1);
    c->r[3] = c->r[9] - c->r[0];
    c->r[0] = c->r[11] - 0x64u;
    c->r[14] = 0x2515434u; f_2842c38(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11] - 0x70u;
    c->r[3] = c->r[9] - c->r[0];
    c->r[0] = c->r[7] + (c->r[0] << 1);
    c->r[2] = c->r[0] + (c->r[9] << 1);
    c->r[0] = c->r[11] - 0x68u;
    c->r[14] = 0x2515450u; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2515478; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sh_asr(c->r[2], c->r[1]);
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[1]); }
    goto L_2515490;
L_2515478:;
    c->r[0] = 0x0u - c->r[1];
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = sh_asr(c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[2]); }
L_2515490:;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u - c->r[0];
    c->r[2] = c->r[0] - c->r[2];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_25154bc; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = sh_asr(c->r[1], c->r[2]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LT) { goto L_25154d4; }
    goto L_25154e4;
L_25154bc:;
    (void)f_adds(c, c->r[2], 0x1fu);
    if (COND_LT) { goto L_25154e4; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u - c->r[2];
    (void)f_subs(c, c->r[1], sh_asr(c->r[3], c->r[2]));
    if (COND_GE) { goto L_25154e4; }
L_25154d4:;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[5]); }
L_25154e4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GT) { goto L_25153c8; }
L_25154ec:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_251550c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11] - 0x60u;
    c->r[14] = 0x251550cu; f_2842f68(c);
L_251550c:;
    c->r[0] = 0x746a20u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251551cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2515530(Cpu *restrict c) {
    FN_ENTER(0x2515530u);
L_2515530:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xb4u;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    if (COND_LT) { goto L_2515a40; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x28fu;
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + (c->r[7] << 1);
    c->r[7] = c->r[1] - 0x4u;
    c->r[1] = (c->r[5] << 1);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
L_2515598:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[7] + 0x4u;
    c->r[1] = c->r[13] + 0x58u;
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[5] = c->r[0];
    c->r[0] = c->r[5] + c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x25155c4u; f_2842c38(c);
    { uint32_t ea = c->r[5] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[7] - (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    c->r[0] = clz32(c->r[1]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_25155f8; }
    c->r[0] = 0x2u - c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2515604; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[1] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 1);
    goto L_2515614;
L_25155f8:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[13] + 0x34u;
    goto L_2515628;
L_2515604:;
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[3] + sh_asr(c->r[1], c->r[2]);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
L_2515614:;
    c->r[7] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[7] + c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
L_2515628:;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x5u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[5] + c->r[9]; ST32(ea, c->r[0]); c->r[5] = ea; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[14] = 0x2515658u; f_2842f74(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x44u;
    c->r[2] = c->r[8];
    c->r[3] = 0x5u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x251567cu; f_2842f80(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x444u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[1] = c->r[1] - c->r[2]; }
    if (COND_GT) { c->r[0] = sh_asr(c->r[0], c->r[1]); }
    if (COND_GT) { c->r[1] = c->r[13] + 0x34u; }
    if (COND_GT) { { uint32_t ea = c->r[1] + c->r[9]; ST32(ea, c->r[0]); } }
    c->r[7] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[4]; c->r[7] = r; }
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = (c->r[7] >> 16);
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[3] = c->r[7] + (c->r[3] >> 16);
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[7] * c->r[4]; c->r[7] = r; }
    c->r[3] = c->r[3] + (c->r[7] >> 16);
    { uint32_t r = c->r[0] * c->r[4] + c->r[3]; c->r[0] = r; }
    c->r[3] = 0x5u;
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[6];
    c->r[14] = 0x25156f4u; f_2842f8c(c);
    c->r[8] = c->r[13] + 0x44u;
    c->r[0] = c->r[6];
    c->r[1] = 0x5u;
    c->r[3] = c->r[11] - 0x30u;
    c->r[2] = c->r[8];
    c->r[14] = 0x251570cu; f_2842f98(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1u;
    c->r[7] = 0x8000u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[2] = c->r[7];
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[2]); }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[4] + 0x6u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_GT) { c->r[2] = (uint32_t)((int32_t)c->r[0] >> 1); }
    (void)f_subs(c, c->r[1], 0x8000u);
    c->r[0] = c->r[13] + 0x34u;
    c->r[1] = c->r[6];
    if (COND_GE) { c->r[2] = 0x7fffu; }
    { uint32_t ea = c->r[4] + 0x8u; ST16(ea, c->r[2]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xeu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x25157f8u; f_2842fa4(c);
    c->r[1] = c->r[11] - 0x64u;
    { uint32_t ea = c->r[1] + c->r[9]; ST32(ea, c->r[0]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[10] + c->r[9]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[12] = (c->r[4] << 16);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x2u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x80000000u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { c->r[2] = c->r[0]; }
    c->r[3] = c->r[2] + 0x1u;
    c->r[5] = sh_asr(c->r[1], c->r[3]);
    c->r[1] = ~0x80000000u;
    (void)f_subs(c, c->r[5], sh_lsr(c->r[1], c->r[3]));
    c->r[4] = sh_lsr(c->r[1], c->r[3]);
    if (COND_LE) { goto L_2515860; }
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[1] = c->r[5];
    if (COND_GT) { goto L_2515878; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_LT) { c->r[7] = c->r[4]; }
    goto L_2515874;
L_2515860:;
    (void)f_subs(c, c->r[7], c->r[4]);
    c->r[1] = c->r[4];
    if (COND_GT) { goto L_2515878; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_LT) { c->r[7] = c->r[5]; }
L_2515874:;
    c->r[1] = c->r[7];
L_2515878:;
    c->r[7] = 0x5u - c->r[2];
    c->r[5] = 0x0u;
    c->r[14] = c->r[6] + 0x50u;
    c->r[7] = c->r[7] + c->r[0];
    c->r[0] = c->r[0] - c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[0] = c->r[0] + sh_lsl(c->r[1], c->r[3]);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LE) { c->r[0] = c->r[1]; }
    c->r[0] = sdiv32(c->r[12], c->r[0]);
    c->r[1] = sh_asr(c->r[0], c->r[7]);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = c->r[5]; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[3]; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[7]; }
    c->r[7] = c->r[6] + 0x44u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[14]; c->r[5] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[4]; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    { uint32_t ea = c->r[6] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[3]; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[7]; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[5]; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[10]; }
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[12]; }
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[14]; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[2]; }
    c->r[0] = clz32(c->r[0]);
    c->r[2] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[2], 0x1eu);
    if (COND_HI) { goto L_25159d8; }
    c->r[2] = 0x10u;
    (void)f_subs(c, c->r[1], sh_lsl(c->r[2], c->r[0]));
    if (COND_GE) { c->r[1] = sh_lsl(c->r[2], c->r[0]); }
L_25159d8:;
    c->r[0] = c->r[6];
    c->r[2] = 0x19u;
    c->r[14] = 0x25159e4u; f_2842fb0(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x5cu;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[6] + 0x64u;
    { uint32_t ea = c->r[1] + c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[9] = c->r[9] + 0x4u;
    c->r[7] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xau;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2515598; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_2515a4c; }
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2515a60; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    goto L_2515a74;
L_2515a40:;
    c->r[0] = 0x0u;
    c->r[8] = 0x0u;
    goto L_2515ab0;
L_2515a4c:;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = 0x0u;
    c->r[0] = 0x0u;
    goto L_2515ab0;
L_2515a60:;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LE) { c->r[8] = 0x0u; }
L_2515a74:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_2515aac; }
    c->r[0] = c->r[4] - c->r[1];
    c->r[1] = c->r[9] + (c->r[1] << 2);
    c->r[1] = c->r[1] + 0x4u;
L_2515a8c:;
    { uint32_t ea = c->r[1] - 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_GT) { c->r[8] = c->r[2]; }
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_GT) { c->r[8] = c->r[3]; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2515a8c; }
L_2515aac:;
    c->r[0] = 0x0u - c->r[8];
L_2515ab0:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_2515c58; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_2515b38; }
    c->r[5] = c->r[9];
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x0u;
    c->r[2] = c->r[13] + 0x34u;
    c->r[3] = c->r[11] - 0x64u;
    c->r[7] = c->r[4];
    c->r[12] = 0x0u;
L_2515ae4:;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[8] = c->r[8] + 0x4u; c->r[4] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x4u; c->r[6] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[6] = c->r[9] - c->r[6];
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[14] = c->r[14] + sh_asr(c->r[0], c->r[6]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[4] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[12] = c->r[12] + sh_asr(c->r[0], c->r[6]);
    if (COND_NE) { goto L_2515ae4; }
    goto L_2515b44;
L_2515b38:;
    c->r[12] = 0x0u;
    c->r[14] = 0x0u;
    c->r[9] = c->r[8];
L_2515b44:;
    (void)f_subs(c, c->r[14], 0x1u);
    c->r[1] = ~0xe0000000u;
    c->r[6] = c->r[12];
    c->r[8] = c->r[9];
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_LE) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[14], 0x0u);
    c->r[2] = c->r[14];
    if (COND_MI) { c->r[2] = 0x0u - c->r[14]; }
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[2] = clz32(c->r[2]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[12]; }
    c->r[0] = c->r[2] - 0x1u;
    c->r[2] = 0x1u - c->r[2];
    c->r[3] = sh_lsl(c->r[14], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[7] = sdiv32(c->r[1], c->r[0]);
    c->r[0] = clz32(c->r[6]);
    c->r[6] = c->r[0] - 0x1u;
    c->r[0] = c->r[0] + c->r[2];
    c->r[5] = sh_lsl(c->r[12], c->r[6]);
    c->r[2] = c->r[0] + 0xcu;
    c->r[4] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[1] * c->r[4]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[5] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (c->r[3] << 3);
    c->r[3] = sh_lsl(c->r[12], c->r[6]) - c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[7] + (uint32_t)((int32_t)c->r[1] >> 16);
    if (COND_LT) { goto L_2515be8; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_LT) { c->r[0] = sh_asr(c->r[1], c->r[2]); }
    goto L_2515c40;
L_2515be8:;
    c->r[0] = 0x0u - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[0]);
    c->r[7] = sh_lsr(c->r[2], c->r[0]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[0]));
    if (COND_LE) { goto L_2515c20; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2515c3c; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[7]; }
    goto L_2515c38;
L_2515c20:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2515c3c; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { c->r[1] = c->r[3]; }
L_2515c38:;
    c->r[2] = c->r[1];
L_2515c3c:;
    c->r[0] = sh_lsl(c->r[2], c->r[0]);
L_2515c40:;
    c->r[14] = 0x2515c44u; f_2842ba8(c);
    c->r[1] = 0xf8000000u;
    c->r[0] = c->r[1] + (c->r[0] << 16);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
L_2515c58:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_LT) { goto L_2515d30; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[11] - 0x54u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    c->r[7] = c->r[0];
L_2515c84:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + c->r[5];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + c->r[5];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + c->r[5];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[7] = c->r[7] + 0xau;
    c->r[6] = c->r[6] + c->r[5];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); c->r[1] = c->r[1] + 0x4u; }
    if (COND_NE) { goto L_2515c84; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_2515d28; }
    c->r[12] = c->r[10] + 0x20u;
    c->r[1] = 0x0u;
    c->r[14] = c->r[11] - 0x54u;
    c->r[5] = c->r[13] + 0x5cu;
    c->r[3] = c->r[9];
    c->r[2] = 0x0u;
L_2515cec:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[6] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_LE) { c->r[2] = c->r[6]; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = c->r[5] + 0x4u; c->r[6] = v; }
    c->r[6] = clz32(c->r[6]);
    c->r[6] = c->r[12] - c->r[6];
    c->r[6] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LE) { c->r[1] = c->r[6]; }
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    if (COND_NE) { goto L_2515cec; }
    goto L_2515d30;
L_2515d28:;
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_2515d30:;
    c->r[1] = c->r[10] + c->r[1];
    c->r[2] = clz32(c->r[2]);
    c->r[0] = 0x1u;
    c->r[1] = c->r[1] - 0xbu;
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { c->r[8] = c->r[8] + c->r[1]; }
    c->r[1] = 0x106u;
    c->r[1] = c->r[0] + sh_lsr(c->r[1], c->r[8]);
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2515dcc; }
    c->r[3] = c->r[13] + 0x5cu;
    c->r[7] = c->r[11] - 0x54u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[9];
L_2515d74:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[1] = v; }
    c->r[10] = c->r[8];
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = c->r[4] + 0x4u; c->r[6] = v; }
    c->r[12] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[9] = c->r[8] - c->r[6];
    c->r[0] = sh_asr(c->r[14], c->r[9]);
    c->r[8] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[8] * c->r[12]; c->r[6] = r; }
    c->r[12] = 0x1u;
    c->r[8] = c->r[10];
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[1] = c->r[12] + (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[1] = (c->r[1] >> 1);
    { uint32_t r = c->r[1] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[1] + sh_asr(c->r[14], c->r[9]);
    if (COND_NE) { goto L_2515d74; }
L_2515dcc:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[1];
    c->r[3] = ~0xe0000000u;
    c->r[7] = c->r[2];
    if (COND_MI) { c->r[0] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[12] = clz32(c->r[0]);
    if (COND_MI) { c->r[7] = 0x0u - c->r[2]; }
    c->r[0] = c->r[12] - 0x1u;
    c->r[7] = clz32(c->r[7]);
    c->r[1] = sh_lsl(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = sdiv32(c->r[3], c->r[0]);
    c->r[0] = c->r[7] - 0x1u;
    c->r[6] = sh_lsl(c->r[2], c->r[0]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t r = c->r[4] * c->r[5]; c->r[5] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (c->r[1] << 3);
    c->r[0] = sh_lsl(c->r[2], c->r[0]) - c->r[1];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[12];
    c->r[1] = c->r[1] + c->r[7];
    c->r[1] = c->r[1] + 0x10u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2515e64; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x20u);
    if (COND_LT) { c->r[2] = sh_asr(c->r[0], c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    goto L_2515ebc;
L_2515e64:;
    c->r[1] = 0x0u - c->r[1];
    c->r[3] = 0x80000000u;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[7] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2515e9c; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2515eb4; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2515eb0;
L_2515e9c:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2515eb4; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2515eb0:;
    c->r[2] = c->r[0];
L_2515eb4:;
    c->r[0] = sh_lsl(c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_2515ebc:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_25161a8; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[13] + 0x5cu;
    c->r[12] = c->r[11] - 0x54u;
    c->r[0] = c->r[0] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_2515edc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u - c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2515efc; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[3];
    c->r[1] = sh_asr(c->r[0], c->r[1]);
    goto L_2515f54;
L_2515efc:;
    c->r[0] = c->r[0] - 0x2u;
    c->r[1] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[14] = c->r[3];
    c->r[5] = sh_asr(c->r[1], c->r[0]);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = sh_lsr(c->r[2], c->r[0]);
    (void)f_subs(c, c->r[5], sh_lsr(c->r[2], c->r[0]));
    if (COND_LE) { goto L_2515f38; }
    (void)f_subs(c, c->r[1], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_GT) { goto L_2515f50; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LT) { c->r[1] = c->r[6]; }
    goto L_2515f4c;
L_2515f38:;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[7] = c->r[6];
    if (COND_GT) { goto L_2515f50; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_LT) { c->r[1] = c->r[5]; }
L_2515f4c:;
    c->r[7] = c->r[1];
L_2515f50:;
    c->r[1] = sh_lsl(c->r[7], c->r[0]);
L_2515f54:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x80000000u;
    c->r[8] = ~0xf8000000u;
    c->r[2] = c->r[7];
    c->r[7] = c->r[3] ^ (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[6] = c->r[2] - (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[0] = c->r[5];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { c->r[0] = c->r[7]; }
    if (COND_GE) { c->r[4] = c->r[2]; }
    c->r[0] = c->r[4] & c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[6];
    if (COND_LT) { c->r[0] = c->r[3] ^ (uint32_t)((int32_t)c->r[0] >> 31); }
    c->r[3] = 0x1999u;
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = 0x6667u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x660000u;
    (void)f_subs(c, c->r[0], 0x8000000u);
    c->r[1] = sdiv32(c->r[3], c->r[1]);
    c->r[3] = c->r[14];
    if (COND_GE) { goto L_2515ff8; }
    c->r[8] = 0xf8000000u;
    (void)f_subs(c, c->r[0], 0xf8000000u);
    if (COND_LT) { goto L_2515ff8; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_2515fe4; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[7] & c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[6] = 0x80000000u; }
    goto L_2515ff4;
L_2515fe4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] & c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[6] = ~0x80000000u; }
L_2515ff4:;
    c->r[8] = c->r[6];
L_2515ff8:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0x666u;
    { uint32_t r = c->r[1] * c->r[8]; c->r[1] = r; }
    c->r[12] = c->r[12] + 0x4u;
    c->r[3] = c->r[3] + 0x4u;
    c->r[1] = (c->r[1] << 4);
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LE) { c->r[0] = c->r[2]; }
    c->r[14] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_LE) { c->r[4] = c->r[2]; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[7] + (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_LE) { c->r[4] = c->r[2]; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_LE) { c->r[5] = c->r[2]; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LE) { c->r[6] = c->r[2]; }
    c->r[2] = 0xc180u;
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[6]);
    c->r[9] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[9]); }
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    (void)f_subs(c, c->r[0], 0xf8000000u);
    c->r[1] = c->r[0];
    if (COND_LE) { c->r[1] = 0xf8000000u; }
    (void)f_subs(c, c->r[0], 0x8000000u);
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] << 4);
    if (COND_GE) { c->r[1] = ~0x8000000fu; }
    c->r[4] = (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t r = c->r[14] * c->r[4] + c->r[0]; c->r[5] = r; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[14] * c->r[0]; c->r[6] = r; }
    c->r[14] = 0x6d60u;
    c->r[6] = c->r[5] + (c->r[6] >> 16);
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_GT) { c->r[5] = c->r[6]; }
    (void)f_subs(c, c->r[6], c->r[14]);
    if (COND_GT) { c->r[5] = 0x6d60u; }
    { uint32_t ea = c->r[10]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t r = c->r[7] * c->r[4] + c->r[6]; c->r[6] = r; }
    { uint32_t r = c->r[7] * c->r[0]; c->r[7] = r; }
    c->r[7] = c->r[6] + (c->r[7] >> 16);
    c->r[6] = c->r[2];
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { c->r[6] = c->r[7]; }
    (void)f_subs(c, c->r[7], c->r[14]);
    if (COND_GT) { c->r[6] = 0x6d60u; }
    { uint32_t ea = c->r[10] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    { uint32_t r = c->r[6] * c->r[0]; c->r[6] = r; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[6] = c->r[2];
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { c->r[6] = c->r[7]; }
    (void)f_subs(c, c->r[7], c->r[14]);
    if (COND_GT) { c->r[6] = 0x6d60u; }
    { uint32_t ea = c->r[10] + 0x4u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    { uint32_t r = c->r[6] * c->r[0]; c->r[6] = r; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[6] = c->r[2];
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { c->r[6] = c->r[7]; }
    (void)f_subs(c, c->r[7], c->r[14]);
    if (COND_GT) { c->r[6] = 0x6d60u; }
    { uint32_t ea = c->r[10] + 0x6u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t r = c->r[6] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[0], c->r[14]);
    if (COND_GT) { c->r[1] = 0x6d60u; }
    { uint32_t ea = c->r[10] + 0x8u; ST16(ea, c->r[1]); }
    c->r[10] = c->r[10] + 0xau;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2515edc; }
L_25161a8:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_25161b0(Cpu *restrict c) {
    FN_ENTER(0x25161b0u);
L_25161b0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x1u;
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = ssat32(c, (int64_t)(int32_t)c->r[2], 16);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = ssat32(c, (int64_t)(int32_t)c->r[2], 16);
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = ssat32(c, (int64_t)(int32_t)c->r[2], 16);
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = ssat32(c, (int64_t)(int32_t)c->r[2], 16);
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = ssat32(c, (int64_t)(int32_t)c->r[0], 16);
    { uint32_t ea = c->r[1] + 0x8u; ST16(ea, c->r[0]); }
    return;
}
void f_251621c(Cpu *restrict c) {
    FN_ENTER(0x251621cu);
L_251621c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x104u;
    c->r[7] = 0x745cd4u;
    c->r[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1200u;
    c->r[2] = 0x120cu;
    c->r[0] = 0x1208u;
    c->r[9] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[6] = v; }
    c->r[2] = 0x11dcu;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    { uint32_t ea = 0x2516268u + c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[1] + c->r[7];
    c->r[1] = c->r[7] + (c->r[2] << 1);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[12] + c->r[6];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[3] - (c->r[0] << 1);
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[1] << 1);
    c->r[8] = c->r[0] - (c->r[2] << 1);
    c->r[0] = c->r[7];
    c->r[2] = 0x1u;
    c->r[1] = c->r[8];
    c->r[14] = 0x25162acu; f_2842fbc(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[8] + (c->r[0] << 1);
    c->r[5] = c->r[7] + (c->r[0] << 1);
    c->r[0] = c->r[1] - (c->r[0] << 1);
    c->r[2] = (c->r[0] << 1);
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x25162d0u; f_283aa78(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    c->r[1] = c->r[0] - (c->r[3] << 1);
    c->r[0] = c->r[5] + (c->r[1] << 1);
    c->r[1] = c->r[6] + (c->r[1] << 1);
    c->r[14] = 0x25162ecu; f_2842fbc(c);
    c->r[0] = 0x1240u;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[11] - 0x68u;
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[1] = c->r[11] - 0x24u;
    c->r[0] = c->r[5];
    c->r[14] = 0x251631cu; f_2842fc8(c);
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = c->r[1] + (c->r[1] << 5);
    c->r[2] = (c->r[2] << 5);
    c->r[1] = c->r[0] + (c->r[1] << 1);
    c->r[0] = c->r[2] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] >> 16);
    c->r[1] = c->r[5];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] - 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x88u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x2516358u; f_2842fd4(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[3] = ~0xe0000000u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_GT) { c->r[1] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[1];
    if (COND_MI) { c->r[0] = 0x0u - c->r[1]; }
    c->r[12] = clz32(c->r[0]);
    c->r[0] = c->r[12] - 0x1u;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = sdiv32(c->r[3], c->r[2]);
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[7] = c->r[3];
    if (COND_MI) { c->r[7] = 0x0u - c->r[3]; }
    c->r[7] = clz32(c->r[7]);
    c->r[5] = c->r[7] - 0x1u;
    c->r[4] = sh_lsl(c->r[3], c->r[5]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[0] = (c->r[0] << 3);
    c->r[0] = sh_lsl(c->r[3], c->r[5]) - c->r[0];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[12];
    c->r[1] = c->r[7] + c->r[1];
    c->r[2] = c->r[1] + 0x1cu;
    (void)f_subs(c, c->r[2], 0xfu);
    if (COND_GT) { goto L_2516420; }
    c->r[1] = 0x10u - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[7] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[2] = sh_lsr(c->r[7], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[7], c->r[1]));
    if (COND_LE) { goto L_2516434; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[7] = c->r[3];
    if (COND_GT) { goto L_251644c; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { c->r[0] = c->r[2]; }
    goto L_2516448;
L_2516420:;
    c->r[2] = c->r[1] + 0xcu;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_LT) { c->r[1] = sh_asr(c->r[0], c->r[2]); }
    goto L_2516450;
L_2516434:;
    (void)f_subs(c, c->r[0], c->r[2]);
    c->r[7] = c->r[2];
    if (COND_GT) { goto L_251644c; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2516448:;
    c->r[7] = c->r[0];
L_251644c:;
    c->r[1] = sh_lsl(c->r[7], c->r[1]);
L_2516450:;
    { uint32_t ea = c->r[9] + 0x1ecu; ST32(ea, c->r[1]); }
    c->r[7] = c->r[13] + 0x58u;
    c->r[4] = 0x8000u;
    c->r[1] = c->r[11] - 0x88u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xffff0000u;
    c->r[14] = 0x2516470u; f_2842fe0(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_25164b0; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x38u;
L_2516484:;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[4];
    c->r[0] = c->r[0] + 0x1u;
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 12);
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[3] >> 12); }
    (void)f_subs(c, c->r[5], 0x8000u);
    if (COND_GE) { c->r[6] = 0x7fffu; }
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[6]); c->r[2] = c->r[2] + 0x2u; }
    if (COND_LT) { goto L_2516484; }
L_25164b0:;
    c->r[5] = c->r[13] + 0x38u;
    c->r[2] = 0xfd71u;
    c->r[0] = c->r[5];
    c->r[14] = 0x25164c0u; f_2842c44(c);
    c->r[0] = 0x1404u;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25164ecu; f_2842c2c(c);
    c->r[0] = 0x12bdu;
    c->r[5] = c->r[10];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2516510; }
    c->r[0] = 0x1258u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2516540; }
L_2516510:;
    c->r[0] = 0x0u;
    c->r[1] = 0x12bau;
    { uint32_t ea = c->r[9] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x12bcu;
    { uint32_t ea = c->r[10] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x262cu;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    goto L_251663c;
L_2516540:;
    c->r[0] = 0x1288u;
    c->r[1] = 0x11d5u;
    c->r[3] = 0x11d8u;
    c->r[7] = 0x1244u;
    c->r[2] = 0x11ccu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = 0x11f8u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x123cu;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = 0x11fcu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + c->r[7]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[0] = 0x262cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[12]); }
    c->r[1] = 0x0u;
    c->r[0] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[7] << 16);
    c->r[0] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 11);
    c->r[1] = (c->r[2] << 16);
    c->r[0] = c->r[0] - (uint32_t)((int32_t)c->r[1] >> 14);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[2] = 0xccceu;
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = 0xfb34u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0xf99bu;
    { uint32_t r = c->r[14] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16) - c->r[14];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x1333u;
    c->r[0] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GT) { c->r[4] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x8000u);
    c->r[0] = 0x12bau;
    c->r[2] = c->r[10] + c->r[0];
    c->r[0] = 0x12bcu;
    if (COND_GE) { c->r[4] = 0x7fffu; }
    c->r[3] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0] + 0x7cu;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x251662cu; f_2842fec(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x2u; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
L_251663c:;
    c->r[0] = 0x7458f0u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251664cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251665c(Cpu *restrict c) {
    FN_ENTER(0x251665cu);
L_251665c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xa4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[2] = 0x11fcu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x7458a8u;
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = 0x2516694u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2516864; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_25166b8; }
    c->r[0] = ~0xfe000000u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_25166d4; }
    goto L_2516704;
L_25166b8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = ~0xfe000000u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[2]; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_EQ) { goto L_2516704; }
L_25166d4:;
    c->r[3] = c->r[0];
L_25166d8:;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[2] = c->r[2] + 0x2u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GE) { c->r[0] = c->r[3]; }
    (void)f_subs(c, c->r[2], c->r[9]);
    c->r[3] = c->r[0];
    if (COND_LT) { goto L_25166d8; }
L_2516704:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2516864; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    if (COND_MI) { c->r[2] = 0x0u - c->r[0]; }
    c->r[3] = clz32(c->r[2]);
    c->r[2] = c->r[3] - 0x1u;
    c->r[10] = sh_lsl(c->r[0], c->r[2]);
    c->r[0] = c->r[3] + 0x1cu;
    c->r[3] = 0x0u;
    c->r[12] = (uint32_t)(uint16_t)(c->r[10]);
    c->r[8] = (uint32_t)((int32_t)c->r[10] >> 16);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_2516738:;
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = ~0xe0000000u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[4] = c->r[5];
    if (COND_MI) { c->r[4] = 0x0u - c->r[5]; }
    c->r[4] = clz32(c->r[4]);
    c->r[2] = c->r[4] - 0x1u;
    c->r[2] = sh_lsl(c->r[5], c->r[2]);
    c->r[5] = (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[5] = sdiv32(c->r[0], c->r[5]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[7] * c->r[12]; c->r[6] = r; }
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[8] >> 0));
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[2]) >> 32);
    c->r[2] = c->r[10] - (c->r[2] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[7]; c->r[2] = r; }
    c->r[14] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1u - c->r[4];
    c->r[5] = c->r[2] + c->r[0];
    (void)f_subs(c, c->r[5], 0xdu);
    if (COND_GT) { goto L_25167d8; }
    c->r[4] = 0xeu - c->r[5];
    c->r[7] = 0x80000000u;
    c->r[0] = c->r[12];
    c->r[1] = ~0x80000000u;
    c->r[2] = c->r[8];
    c->r[12] = sh_asr(c->r[7], c->r[4]);
    c->r[8] = sh_lsr(c->r[1], c->r[4]);
    (void)f_subs(c, c->r[12], sh_lsr(c->r[1], c->r[4]));
    if (COND_LE) { goto L_25167ec; }
    (void)f_subs(c, c->r[14], c->r[12]);
    c->r[5] = c->r[12];
    if (COND_GT) { goto L_2516804; }
    (void)f_subs(c, c->r[14], c->r[8]);
    if (COND_LT) { c->r[14] = c->r[8]; }
    goto L_2516800;
L_25167d8:;
    c->r[0] = c->r[5] - 0xeu;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_LT) { c->r[4] = sh_asr(c->r[14], c->r[0]); }
    goto L_2516814;
L_25167ec:;
    (void)f_subs(c, c->r[14], c->r[8]);
    c->r[5] = c->r[8];
    if (COND_GT) { goto L_2516804; }
    (void)f_subs(c, c->r[14], c->r[12]);
    if (COND_LT) { c->r[14] = c->r[12]; }
L_2516800:;
    c->r[5] = c->r[14];
L_2516804:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = sh_lsl(c->r[5], c->r[4]);
    c->r[12] = c->r[0];
    c->r[8] = c->r[2];
L_2516814:;
    (void)f_subs(c, c->r[4], 0x16cu);
    c->r[0] = c->r[11] - 0x2cu;
    if (COND_LT) { c->r[4] = 0x16bu; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[7] = (c->r[4] >> 16);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[2] * c->r[7]; c->r[2] = r; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = c->r[11] - 0x4cu;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[0] = 0x10000u;
    c->r[2] = c->r[11] - 0x3cu;
    c->r[0] = udiv32(c->r[0], c->r[4]);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_LT) { goto L_2516738; }
L_2516864:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1238u;
    c->r[8] = c->r[10];
    c->r[3] = c->r[7] & 0x1u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[7] = c->r[7] + c->r[3];
    c->r[3] = 0x7456acu;
    { uint32_t ea = c->r[8] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x2516890u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[9] + c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[7] + (c->r[2] << 1);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x85u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_25169d4; }
    c->r[0] = 0x0u - c->r[2];
    c->r[7] = c->r[10];
    c->r[3] = 0x1208u;
    c->r[6] = 0x1404u;
    c->r[4] = c->r[10];
    c->r[14] = c->r[11] - 0x4cu;
    c->r[1] = c->r[1] + 0x7cu;
    c->r[5] = c->r[8];
    c->r[12] = c->r[13] + 0x40u;
    c->r[0] = c->r[0] & 0x3u;
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = 0x64u;
    { uint32_t r = c->r[9] * c->r[2] + c->r[0]; c->r[0] = r; }
    c->r[2] = 0x745650u;
    { uint32_t ea = 0x25168ecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x1204u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[6]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = ~0x63u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[9] * c->r[2] + c->r[0]; c->r[8] = r; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[6] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x1f0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x2516940u; f_2842ff8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x124cu;
    c->r[1] = 0x1248u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x12a4u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[10] + 0x12c0u;
    c->r[1] = c->r[10] + c->r[0];
    c->r[0] = 0x1250u;
    c->r[3] = c->r[10] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x2516988u; f_2843004(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[14] = 0x2516998u; f_2843010(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0] - (c->r[2] << 1);
    c->r[0] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x25169ccu; f_284301c(c);
    c->r[6] = c->r[10];
    goto L_2516a68;
L_25169d4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2516a38; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = 0x0u;
    c->r[6] = c->r[1] - (c->r[0] << 1);
    c->r[1] = 0x1204u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[3] = v; }
L_25169fc:;
    c->r[1] = c->r[11] - 0x2cu;
    c->r[3] = c->r[0] + c->r[3];
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[1] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x2516a14u; f_2843028(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[0] + c->r[3];
    c->r[6] = c->r[6] + (c->r[3] << 1);
    (void)f_subs(c, c->r[4], c->r[9]);
    c->r[7] = c->r[7] + (c->r[1] << 1);
    if (COND_LT) { goto L_25169fc; }
L_2516a38:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[9] + (c->r[9] << 2);
    c->r[1] = (c->r[1] << 1);
    c->r[0] = c->r[8] + 0x50u;
    c->r[14] = 0x2516a4cu; f_283abec(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1250u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[8] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_2516a68:;
    c->r[0] = 0x1258u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2516a84; }
    c->r[3] = 0xd70au;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa30000u;
    goto L_2516bcc;
L_2516a84:;
    { uint32_t ea = c->r[8] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x5555u;
    c->r[9] = c->r[7];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = c->r[0] + 0x800u;
    c->r[14] = 0x2516aa8u; f_2842e0c(c);
    c->r[1] = 0x1e4u;
    c->r[7] = 0x1u;
    c->r[3] = 0x2710u;
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[1] + 0x10000u;
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = c->r[7] + (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[7] = ~0xe0000000u;
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[2] >> 16);
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = c->r[2];
    if (COND_MI) { c->r[1] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[12] = clz32(c->r[1]);
    c->r[1] = c->r[0];
    c->r[3] = c->r[12] - 0x1u;
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    c->r[3] = sh_lsl(c->r[2], c->r[3]);
    c->r[2] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[7] = sdiv32(c->r[7], c->r[2]);
    c->r[2] = clz32(c->r[1]);
    c->r[5] = c->r[2] - 0x1u;
    c->r[4] = sh_lsl(c->r[0], c->r[5]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[14] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[1] * c->r[14]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[1]) >> 32);
    c->r[3] = (c->r[3] << 3);
    c->r[0] = sh_lsl(c->r[0], c->r[5]) - c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[14]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[12];
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[1] + 0x1cu;
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_GT) { goto L_2516b90; }
    c->r[1] = 0xeu - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[7] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2516ba8; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2516bc4; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2516bc0;
L_2516b90:;
    c->r[1] = c->r[1] + 0xeu;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], 0x20u);
    if (COND_LT) { c->r[3] = sh_asr(c->r[0], c->r[1]); }
    goto L_2516bc8;
L_2516ba8:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2516bc4; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2516bc0:;
    c->r[2] = c->r[0];
L_2516bc4:;
    c->r[3] = sh_lsl(c->r[2], c->r[1]);
L_2516bc8:;
    c->r[7] = c->r[9];
L_2516bcc:;
    c->r[9] = c->r[13] + 0x50u;
    c->r[0] = c->r[6];
    c->r[2] = c->r[7];
    c->r[1] = c->r[9];
    c->r[14] = 0x2516be0u; f_2843034(c);
    c->r[0] = 0x11acu;
    c->r[10] = c->r[7];
    c->r[5] = c->r[8] + 0x10u;
    c->r[2] = c->r[9];
    c->r[7] = c->r[6] + c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[3] = c->r[7];
    c->r[14] = 0x2516c04u; f_2843040(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x1204u;
    c->r[1] = 0x1404u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[11] - 0x3cu;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8] + 0x1f4u;
    c->r[1] = c->r[8] + 0x204u;
    c->r[2] = c->r[10];
    c->r[3] = c->r[5];
    c->r[14] = 0x2516c44u; f_284304c(c);
    c->r[0] = c->r[7];
    c->r[1] = c->r[9];
    c->r[2] = 0x20u;
    c->r[14] = 0x2516c54u; f_283aa78(c);
    c->r[0] = 0x7452d8u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2516c64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2516c7c(Cpu *restrict c) {
    FN_ENTER(0x2516c7cu);
L_2516c7c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x44u;
    c->r[8] = c->r[2];
    c->r[10] = c->r[1];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_2516d24; }
    c->r[0] = c->r[13];
    c->r[5] = 0x0u;
    c->r[9] = c->r[0] - 0x4u;
L_2516ca8:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { goto L_2516d00; }
    c->r[2] = (c->r[5] << 2);
    c->r[0] = c->r[13];
    c->r[1] = c->r[6];
    c->r[14] = 0x2516cc0u; f_283ac04(c);
    c->r[0] = c->r[10] + (c->r[5] << 1);
    c->r[1] = 0x0u;
    c->r[2] = c->r[9];
L_2516ccc:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] - 0x4u; c->r[7] = v; }
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[7] = (c->r[7] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[7] * c->r[4]; c->r[7] = r; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t ea = c->r[6] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_2516ccc; }
    goto L_2516d04;
L_2516d00:;
    c->r[0] = c->r[10] + (c->r[5] << 1);
L_2516d04:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[9] = c->r[9] + 0x4u;
    c->r[0] = c->r[1] - (c->r[0] << 9);
    { uint32_t ea = c->r[6] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_NE) { goto L_2516ca8; }
L_2516d24:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2516d2c(Cpu *restrict c) {
    FN_ENTER(0x2516d2cu);
L_2516d2c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4cu;
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2516df0; }
    c->r[0] = c->r[13] + 0x8u;
    c->r[9] = 0x1u;
    c->r[8] = 0x0u;
    c->r[10] = c->r[0] - 0x4u;
L_2516d5c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LE) { goto L_2516dc4; }
    c->r[2] = (c->r[8] << 2);
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[6];
    c->r[14] = 0x2516d74u; f_283ac04(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + (c->r[8] << 2);
L_2516d84:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] - 0x4u; c->r[4] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[3] = c->r[9] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t r = c->r[3] * c->r[4] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[6] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_NE) { goto L_2516d84; }
    goto L_2516dcc;
L_2516dc4:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[0] + (c->r[8] << 2);
L_2516dcc:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[10] = c->r[10] + 0x4u;
    c->r[0] = c->r[1] - (c->r[0] << 8);
    { uint32_t ea = c->r[6] + (c->r[8] << 2); ST32(ea, c->r[0]); }
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_2516d5c; }
L_2516df0:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2516df8(Cpu *restrict c) {
    FN_ENTER(0x2516df8u);
L_2516df8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1b4u;
    c->r[7] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = 0x128cu;
    c->r[4] = c->r[1];
    c->r[10] = c->r[3];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[9]); }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[8] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] - 0x14u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x7450e8u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = 0x2516e54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1e0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] - 0xa00u;
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[14] = 0x2516e70u; f_2842c5c(c);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2516ec8; }
    c->r[1] = 0x11ccu;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[3] = 0xfff8u;
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = 0x100u - c->r[1];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (uint32_t)(((int32_t)(c->r[1] << 8)) >> 16);
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] - (c->r[1] << 3);
    c->r[2] = c->r[2] + 0x4000u;
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[8]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[8] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
L_2516ec8:;
    c->r[0] = 0x12bdu;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2516f10; }
    c->r[0] = 0x262cu;
    c->r[1] = 0x12beu;
    c->r[2] = 0x0u;
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = c->r[8] + (uint32_t)((int32_t)c->r[0] >> 23);
    goto L_2517044;
L_2516f10:;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[10]); }
    c->r[2] = 0x6666u;
    c->r[10] = c->r[7];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = (c->r[0] << 16);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[0] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[2] = 0x4000u - c->r[2];
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[0] = c->r[0] + 0xc00u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11fcu;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_2516fe8; }
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = (c->r[0] << 1);
    c->r[4] = (c->r[0] << 2);
L_2516f8c:;
    c->r[0] = c->r[11] - 0x28u;
    c->r[1] = c->r[11] - 0x24u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[7];
    c->r[14] = 0x2516fa0u; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + sh_asr(c->r[7], c->r[0]);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[14] = 0x2516fb4u; f_2842ba8(c);
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_2516fc8; }
    c->r[1] = f_subs(c, c->r[0], c->r[6]);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    c->r[9] = c->r[1] + c->r[9];
L_2516fc8:;
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[5] = c->r[5] + c->r[4];
    c->r[6] = c->r[0];
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    (void)f_subs(c, c->r[8], (uint32_t)((int32_t)c->r[1] >> 1));
    if (COND_LT) { goto L_2516f8c; }
L_2516fe8:;
    c->r[0] = c->r[9] - 0x280u;
    c->r[2] = 0x199au;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[14] = 0x2517004u; f_2842c5c(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0xc1u);
    if (COND_LT) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12beu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff800000u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
L_2517044:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = ~0xe0000000u;
    c->r[7] = 0x7999u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = (c->r[1] << 5);
    c->r[1] = c->r[1] + (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = c->r[0] + (c->r[0] << 5);
    c->r[1] = (c->r[1] >> 15) & 0xffffu;
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0x1u;
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[0] = f_adds(c, c->r[0], 0x10000u);
    c->r[1] = c->r[0];
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    c->r[1] = clz32(c->r[1]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[0] = sh_lsl(c->r[0], c->r[2]);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = sdiv32(c->r[3], c->r[2]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[6] = (c->r[2] << 16);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 17);
    c->r[6] = 0x8000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x79990000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[7]) >> 32);
    c->r[0] = c->r[6] - (c->r[0] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[7] = 0xfff8u;
    c->r[0] = c->r[0] & c->r[7];
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = 0x1u - c->r[1];
    (void)f_adds(c, c->r[2], 0x1du);
    if (COND_GT) { goto L_251712c; }
    c->r[1] = ~0x1bu;
    c->r[3] = 0x80000000u;
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[7] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2517140; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2517158; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2517154;
L_251712c:;
    c->r[2] = 0x1du - c->r[1];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_LT) { c->r[1] = sh_asr(c->r[0], c->r[2]); }
    goto L_251715c;
L_2517140:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2517158; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2517154:;
    c->r[2] = c->r[0];
L_2517158:;
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
L_251715c:;
    c->r[0] = 0x1260u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[4] + 0x1e4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2517190; }
    c->r[3] = 0xa3du;
    c->r[7] = (uint32_t)(uint16_t)(c->r[2]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[0] + (c->r[3] >> 16);
    goto L_2517194;
L_2517190:;
    c->r[0] = 0x0u;
L_2517194:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1214u;
    c->r[3] = c->r[5];
    c->r[4] = c->r[5];
    c->r[12] = 0x8000u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x744d7cu;
    { uint32_t ea = 0x25171c0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] & 0x1u;
    c->r[7] = c->r[7] + c->r[6];
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] + (c->r[0] << 1);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0x11fcu;
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2518348; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[7] = 0x28fu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = c->r[2] - (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x10000u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = (uint32_t)((int32_t)c->r[3] >> 2);
    c->r[1] = (c->r[1] << 14);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    c->r[7] = c->r[10] - (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x0u - c->r[3];
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = c->r[6] - 0x8000u;
    c->r[3] = f_subs(c, c->r[3], c->r[2]);
    c->r[2] = c->r[2] + 0x10000u;
    if (COND_LT) { c->r[3] = c->r[2]; }
    c->r[3] = clz32(c->r[3]);
    c->r[1] = c->r[3] + 0x4u;
    c->r[3] = c->r[3] - 0x1u;
    c->r[6] = sh_lsl(c->r[2], c->r[3]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1234u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[3] + c->r[2];
    c->r[2] = 0x1204u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + c->r[2];
    c->r[2] = 0x11f8u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[2] = c->r[2] + 0x10cu;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[2] | 0x4u;
    c->r[2] = c->r[2] - 0x8u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0xa0u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] | 0x4u;
    c->r[2] = c->r[2] - 0x8u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    goto L_2517320;
L_2517300:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2517320:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[2] + (c->r[2] << 1);
    c->r[2] = 0x1u;
    c->r[6] = c->r[0] - c->r[4];
    c->r[0] = c->r[7];
    c->r[10] = (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[10];
    c->r[14] = 0x251734cu; f_2842fbc(c);
    c->r[1] = c->r[6];
    c->r[2] = (c->r[4] << 1);
    c->r[1] = c->r[1] & 0xfffffffeu;
    c->r[0] = c->r[7] + c->r[1];
    c->r[1] = c->r[5] + c->r[1];
    c->r[14] = 0x2517364u; f_283aa78(c);
    c->r[1] = c->r[4] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[2] = 0x2u;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[7] + (c->r[1] << 1);
    c->r[1] = c->r[5] + (c->r[1] << 1);
    c->r[14] = 0x2517380u; f_2842fbc(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_25173cc; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[11] - 0x6cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[11] - 0x24u;
    c->r[2] = c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0x25173c8u; f_2843058(c);
    goto L_25173f0;
L_25173cc:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[4] = c->r[11] - 0x6cu;
    c->r[1] = c->r[11] - 0x24u;
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x25173f0u; f_2842fc8(c);
L_25173f0:;
    { uint32_t ea = c->r[11] - 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x34u;
    c->r[6] = c->r[11] - 0xacu;
    c->r[9] = c->r[13] + 0xe0u;
    c->r[10] = c->r[13] + 0xa0u;
    c->r[1] = (c->r[0] >> 4) & 0xffffu;
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 20);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[1] = c->r[2] + (c->r[1] >> 16);
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LE) { c->r[1] = c->r[2]; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11] - 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x251743cu; f_2843064(c);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x2517450u; f_2843070(c);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    c->r[12] = 0x1u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = 0x0u; }
    if (COND_NE) { c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1); }
    if (COND_NE) { c->r[3] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[2] = c->r[3] - c->r[2];
    if (COND_LT) { goto L_25174ec; }
    c->r[0] = clz32(c->r[1]);
    c->r[3] = 0x18u - c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_25174b4; }
    if (COND_LT) { goto L_25174a4; }
    c->r[1] = sh_ror(c->r[1], c->r[3]);
    goto L_25174b4;
L_25174a4:;
    c->r[7] = 0x0u - c->r[3];
    c->r[3] = c->r[3] + 0x20u;
    c->r[3] = sh_lsr(c->r[1], c->r[3]);
    c->r[1] = c->r[3] | sh_lsl(c->r[1], c->r[7]);
L_25174b4:;
    c->r[1] = c->r[1] & 0x7fu;
    c->r[6] = 0xd50000u;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0x8000u;
    c->r[0] = (c->r[0] >> 1);
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    if (COND_EQ) { c->r[3] = 0xb486u; }
    c->r[7] = sh_lsr(c->r[3], c->r[0]);
    c->r[1] = (c->r[1] >> 16);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16));
    c->r[0] = c->r[6] + sh_lsr(c->r[3], c->r[0]);
    c->r[3] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[0] = c->r[0] + (c->r[1] >> 16);
L_25174ec:;
    c->r[1] = 0x10u;
    c->r[3] = 0x80000000u;
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[7] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2517524; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_251753c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2517538;
L_2517524:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_251753c; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2517538:;
    c->r[2] = c->r[0];
L_251753c:;
    c->r[0] = sh_lsl(c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = ~0xe0000000u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_25176d0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[2] << 2);
    c->r[3] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { goto L_251759c; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
L_2517574:;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = c->r[2] - 0x1u;
    c->r[2] = c->r[2] - 0x2u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2517574; }
L_251759c:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[3] = c->r[1] + 0x1000000u;
    (void)f_subs(c, c->r[1], 0xff000000u);
    c->r[2] = c->r[3];
    if (COND_LE) { c->r[2] = 0xff000000u - c->r[1]; }
    c->r[2] = clz32(c->r[2]);
    c->r[1] = c->r[2] - 0x1u;
    c->r[1] = sh_lsl(c->r[3], c->r[1]);
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[7] = sdiv32(c->r[8], c->r[7]);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[1] = 0x20000000u - c->r[1];
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = c->r[12] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[1] = (c->r[1] << 3);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[3] + (c->r[7] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = 0x16u - c->r[2];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LE) { goto L_251762c; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[2] = 0x0u;
    if (COND_LT) { c->r[2] = sh_asr(c->r[1], c->r[3]); }
    goto L_2517680;
L_251762c:;
    c->r[2] = 0x3eu - c->r[2];
    c->r[7] = 0x80000000u;
    c->r[6] = ~0x80000000u;
    c->r[2] = 0x28u - c->r[2];
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[3] = sh_lsr(c->r[6], c->r[2]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[6], c->r[2]));
    if (COND_LE) { goto L_2517664; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_GT) { goto L_251767c; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { c->r[1] = c->r[3]; }
    goto L_2517678;
L_2517664:;
    (void)f_subs(c, c->r[1], c->r[3]);
    c->r[6] = c->r[3];
    if (COND_GT) { goto L_251767c; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[7]; }
L_2517678:;
    c->r[6] = c->r[1];
L_251767c:;
    c->r[2] = sh_lsl(c->r[6], c->r[2]);
L_2517680:;
    c->r[1] = c->r[0] & 0x1u;
    c->r[3] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = c->r[12] + (uint32_t)((int32_t)c->r[2] >> 15);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[3] * c->r[1]; c->r[7] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[3] = r; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = ~0x80000000u;
    (void)f_adds(c, c->r[7], 0xc0000002u);
    if (COND_GT) { goto L_25176c8; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[3] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[3] = r; }
L_25176c8:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[3]); }
L_25176d0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x25176e0u; f_2842b90(c);
    c->r[4] = c->r[5];
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[5] << 2);
    c->r[14] = 0x25176f8u; f_283ac28(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0x2517708u; f_2842b90(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x2517714u; f_284307c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x2517724u; f_284307c(c);
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[2] = 0x599au;
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[1] = (c->r[1] << 1);
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_MI) { c->r[2] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_MI) { c->r[6] = 0x0u - c->r[0]; }
    c->r[12] = clz32(c->r[2]);
    c->r[6] = clz32(c->r[6]);
    c->r[3] = c->r[12] - 0x1u;
    c->r[5] = c->r[6] - 0x1u;
    c->r[7] = sh_lsl(c->r[1], c->r[3]);
    c->r[0] = sh_lsl(c->r[0], c->r[5]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[5] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[5] = sdiv32(c->r[8], c->r[5]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[4] * c->r[2]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[7] * (int32_t)c->r[0]) >> 32);
    c->r[0] = (c->r[0] << 3);
    c->r[0] = sh_lsl(c->r[1], c->r[3]) - c->r[0];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[6];
    c->r[1] = c->r[1] + c->r[12];
    c->r[2] = c->r[1] + 0xeu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_25177dc; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[2], 0x20u);
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[1] = sh_asr(c->r[0], c->r[2]); }
    goto L_251783c;
L_25177dc:;
    c->r[1] = 0x0u - c->r[2];
    c->r[3] = 0x80000000u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[7] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2517820; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2517838; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2517834;
L_2517820:;
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2517838; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2517834:;
    c->r[2] = c->r[0];
L_2517838:;
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
L_251783c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[2] = 0x1333u;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_25178bc; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
L_2517880:;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[5] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_2517880; }
L_25178bc:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[0] * c->r[9]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[9] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = c->r[0] + 0x1000000u;
    (void)f_subs(c, c->r[0], 0xff000000u);
    c->r[3] = c->r[1];
    if (COND_LE) { c->r[3] = 0xff000000u - c->r[0]; }
    c->r[3] = clz32(c->r[3]);
    c->r[0] = c->r[3] - 0x1u;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = sdiv32(c->r[8], c->r[1]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t r = c->r[7] * c->r[12]; c->r[6] = r; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[6] = c->r[5] + (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[6]) >> 32);
    c->r[0] = c->r[5] - (c->r[0] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[3];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2517950; }
    (void)f_subs(c, c->r[1], 0x20u);
    c->r[3] = 0x0u;
    if (COND_LT) { c->r[3] = sh_asr(c->r[0], c->r[1]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    goto L_25179a4;
L_2517950:;
    c->r[1] = 0x0u - c->r[1];
    c->r[4] = 0x80000000u;
    c->r[3] = ~0x80000000u;
    c->r[7] = sh_asr(c->r[4], c->r[1]);
    c->r[6] = sh_lsr(c->r[3], c->r[1]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[3], c->r[1]));
    if (COND_LE) { goto L_2517984; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[3] = c->r[7];
    if (COND_GT) { goto L_251799c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { c->r[0] = c->r[6]; }
    goto L_2517998;
L_2517984:;
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[3] = c->r[6];
    if (COND_GT) { goto L_251799c; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
L_2517998:;
    c->r[3] = c->r[0];
L_251799c:;
    c->r[0] = sh_lsl(c->r[3], c->r[1]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
L_25179a4:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[0] * c->r[9]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[9] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[7] = c->r[0] + 0x1000000u;
    (void)f_subs(c, c->r[0], 0xff000000u);
    c->r[1] = c->r[7];
    if (COND_LE) { c->r[1] = 0xff000000u - c->r[0]; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[1] - 0x1u;
    c->r[1] = 0x1u - c->r[1];
    c->r[0] = sh_lsl(c->r[7], c->r[0]);
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[7] = sdiv32(c->r[8], c->r[7]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[12]; c->r[5] = r; }
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[5] = c->r[4] + (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->r[0] = c->r[4] - (c->r[0] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[7] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + c->r[7];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2517a40; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[1], 0x20u);
    c->r[7] = 0x0u;
    if (COND_LT) { c->r[7] = sh_asr(c->r[0], c->r[1]); }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_GE) { goto L_2517aa0; }
    goto L_2518328;
L_2517a40:;
    c->r[1] = 0x0u - c->r[1];
    c->r[6] = 0x80000000u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = ~0x80000000u;
    c->r[6] = sh_asr(c->r[6], c->r[1]);
    c->r[5] = sh_lsr(c->r[7], c->r[1]);
    (void)f_subs(c, c->r[6], sh_lsr(c->r[7], c->r[1]));
    if (COND_LE) { goto L_2517a7c; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[7] = c->r[6];
    if (COND_GT) { goto L_2517a94; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LT) { c->r[0] = c->r[5]; }
    goto L_2517a90;
L_2517a7c:;
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_GT) { goto L_2517a94; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { c->r[0] = c->r[6]; }
L_2517a90:;
    c->r[7] = c->r[0];
L_2517a94:;
    c->r[7] = sh_lsl(c->r[7], c->r[1]);
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_2518328; }
L_2517aa0:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[7]); }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[12] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2517adc;
L_2517ad0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[3] = v; }
    c->r[4] = c->r[4] + 0x1u;
L_2517adc:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[1] * c->r[14]; c->r[8] = r; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[12] >> 0));
    c->r[2] = c->r[5] + (uint32_t)((int32_t)c->r[2] >> 15);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[8] >> 16);
    { uint32_t r = c->r[2] * c->r[6] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[2] = c->r[5] + (uint32_t)((int32_t)c->r[3] >> 15);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t r = c->r[2] * c->r[3] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { goto L_2517ad0; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[12] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = ~0xe0000000u;
L_2517b58:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = ~0x0u;
    c->r[0] = 0x0u;
L_2517b68:;
    { uint32_t ea = c->r[12] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] ^ (uint32_t)((int32_t)c->r[1] >> 31);
    c->r[6] = c->r[5] ^ (uint32_t)((int32_t)c->r[5] >> 31);
    c->r[4] = c->r[3] - (uint32_t)((int32_t)c->r[1] >> 31);
    c->r[7] = c->r[6] - (uint32_t)((int32_t)c->r[5] >> 31);
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GT) { c->r[1] = c->r[5]; }
    if (COND_GT) { c->r[3] = c->r[6]; }
    c->r[1] = c->r[3] - (uint32_t)((int32_t)c->r[1] >> 31);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[8] = c->r[0]; }
    c->r[0] = c->r[0] + 0x1u;
    if (COND_GT) { c->r[2] = c->r[1]; }
    (void)f_subs(c, c->r[14], c->r[0]);
    if (COND_NE) { goto L_2517b68; }
    c->r[0] = 0xbe78u;
    c->r[14] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3ff0000u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LT) { goto L_25182a8; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_2517c28; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
L_2517be0:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[7] = (uint32_t)(uint16_t)(c->r[6]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[9]; c->r[7] = r; }
    c->r[5] = c->r[5] + (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + 0x4u;
    c->r[7] = (uint32_t)(uint16_t)(c->r[5]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[9]; c->r[7] = r; }
    c->r[4] = c->r[4] + (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t ea = c->r[3] - 0x4u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[5];
    c->r[3] = c->r[3] + 0x4u;
    c->r[5] = c->r[6];
    if (COND_NE) { goto L_2517be0; }
L_2517c28:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = ~0xe0000000u;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[0] = c->r[3];
    if (COND_MI) { c->r[0] = 0x0u - c->r[3]; }
    c->r[0] = clz32(c->r[0]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[1] = sh_lsl(c->r[3], c->r[1]);
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[7] = sdiv32(c->r[5], c->r[7]);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[3]; c->r[3] = r; }
    c->r[1] = 0x20000000u - c->r[1];
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = c->r[14] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[1] = (c->r[1] << 3);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[3] + (c->r[7] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[3] = 0x1eu - c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LE) { goto L_2517ca8; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[12] = 0x0u;
    if (COND_LT) { c->r[12] = sh_asr(c->r[1], c->r[3]); }
    goto L_2517cfc;
L_2517ca8:;
    c->r[0] = 0x3eu - c->r[0];
    c->r[7] = 0x80000000u;
    c->r[3] = ~0x80000000u;
    c->r[0] = 0x20u - c->r[0];
    c->r[7] = sh_asr(c->r[7], c->r[0]);
    c->r[6] = sh_lsr(c->r[3], c->r[0]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[3], c->r[0]));
    if (COND_LE) { goto L_2517ce0; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[3] = c->r[7];
    if (COND_GT) { goto L_2517cf8; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LT) { c->r[1] = c->r[6]; }
    goto L_2517cf4;
L_2517ce0:;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[3] = c->r[6];
    if (COND_GT) { goto L_2517cf8; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[7]; }
L_2517cf4:;
    c->r[3] = c->r[1];
L_2517cf8:;
    c->r[12] = sh_lsl(c->r[3], c->r[0]);
L_2517cfc:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    c->r[1] = clz32(c->r[1]);
    c->r[3] = c->r[1] - 0x1u;
    c->r[3] = sh_lsl(c->r[0], c->r[3]);
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[6] = sdiv32(c->r[5], c->r[6]);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16));
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t r = c->r[5] * c->r[7]; c->r[7] = r; }
    c->r[3] = 0x20000000u - c->r[3];
    c->r[3] = c->r[3] - (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[7] = c->r[14] + (uint32_t)((int32_t)c->r[6] >> 15);
    c->r[3] = (c->r[3] << 3);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1);
    { uint32_t r = c->r[3] * c->r[7]; c->r[7] = r; }
    c->r[7] = c->r[7] + (c->r[6] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[3] = c->r[7] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[7] = 0x1eu - c->r[1];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LE) { goto L_2517d78; }
    (void)f_subs(c, c->r[7], 0x20u);
    c->r[0] = 0x0u;
    if (COND_LT) { c->r[0] = sh_asr(c->r[3], c->r[7]); }
    goto L_2517dd0;
L_2517d78:;
    c->r[1] = 0x3eu - c->r[1];
    c->r[7] = 0x80000000u;
    c->r[0] = ~0x80000000u;
    c->r[1] = 0x20u - c->r[1];
    c->r[6] = sh_asr(c->r[7], c->r[1]);
    c->r[5] = sh_lsr(c->r[0], c->r[1]);
    (void)f_subs(c, c->r[6], sh_lsr(c->r[0], c->r[1]));
    if (COND_LE) { goto L_2517db4; }
    (void)f_subs(c, c->r[3], c->r[6]);
    c->r[7] = c->r[6];
    if (COND_GT) { goto L_2517dcc; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_LT) { c->r[3] = c->r[5]; }
    goto L_2517dc8;
L_2517db4:;
    (void)f_subs(c, c->r[3], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_GT) { goto L_2517dcc; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { c->r[3] = c->r[6]; }
L_2517dc8:;
    c->r[7] = c->r[3];
L_2517dcc:;
    c->r[0] = sh_lsl(c->r[7], c->r[1]);
L_2517dd0:;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[5] = (uint32_t)((int32_t)c->r[12] >> 16);
    c->r[9] = c->r[12];
    c->r[4] = 0x0u;
    c->r[10] = c->r[13] + 0xe0u;
    c->r[12] = c->r[13] + 0xa0u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
L_2517e04:;
    { uint32_t ea = c->r[12] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[8] + (uint32_t)((int32_t)c->r[0] >> 15);
    { uint32_t r = c->r[1] * c->r[6]; c->r[3] = r; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[9] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[12] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[8] + (uint32_t)((int32_t)c->r[0] >> 15);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[3] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[10] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[14], c->r[4]);
    if (COND_NE) { goto L_2517e04; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[3] = 0x660000u;
    c->r[8] = ~0xe0000000u;
    c->r[9] = c->r[13] + 0xe0u;
    c->r[10] = c->r[13] + 0xa0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3330000u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[3] + c->r[1]; c->r[0] = r; }
    c->r[3] = 0x4189u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xfc000000u;
    c->r[3] = c->r[2] + c->r[3];
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    c->r[12] = clz32(c->r[1]);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[12] - 0x1u;
    c->r[7] = sh_lsl(c->r[0], c->r[3]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t r = c->r[6] * c->r[2]; c->r[2] = r; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[6] = c->r[2];
    if (COND_MI) { c->r[6] = 0x0u - c->r[2]; }
    c->r[6] = clz32(c->r[6]);
    c->r[5] = c->r[6] - 0x1u;
    c->r[2] = sh_lsl(c->r[2], c->r[5]);
    c->r[5] = (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[5] = sdiv32(c->r[8], c->r[5]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[1] * c->r[4]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[7] * (int32_t)c->r[2]) >> 32);
    c->r[2] = (c->r[2] << 3);
    c->r[0] = sh_lsl(c->r[0], c->r[3]) - c->r[2];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x7u - c->r[6];
    c->r[0] = c->r[2] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = c->r[1] + c->r[12];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2517f44; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x20u);
    c->r[3] = 0x0u;
    if (COND_LT) { c->r[3] = sh_asr(c->r[0], c->r[2]); }
    goto L_2517fa8;
L_2517f44:;
    c->r[6] = 0x0u - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[6]);
    c->r[7] = sh_lsr(c->r[2], c->r[6]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[6]));
    if (COND_LE) { goto L_2517f80; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2517fa0; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
    goto L_2517f9c;
L_2517f80:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[2] = c->r[7];
    if (COND_GT) { goto L_2517fa0; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2517f9c:;
    c->r[2] = c->r[0];
L_2517fa0:;
    c->r[3] = sh_lsl(c->r[2], c->r[6]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
L_2517fa8:;
    c->r[0] = 0xfd71u;
    c->r[5] = c->r[0] - c->r[3];
    c->r[0] = c->r[10];
    c->r[2] = c->r[5];
    c->r[14] = 0x2517fbcu; f_2842b90(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0x2517fccu; f_2842b90(c);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_2518024; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
L_2517fe8:;
    { uint32_t ea = c->r[6] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[7]; c->r[2] = r; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GT) { goto L_2517fe8; }
L_2518024:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = c->r[0] + 0x1000000u;
    (void)f_subs(c, c->r[0], 0xff000000u);
    c->r[3] = c->r[1];
    if (COND_LE) { c->r[3] = 0xff000000u - c->r[0]; }
    c->r[3] = clz32(c->r[3]);
    c->r[0] = c->r[3] - 0x1u;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = sdiv32(c->r[8], c->r[1]);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t r = c->r[7] * c->r[12]; c->r[6] = r; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[6] = c->r[5] + (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[6]) >> 32);
    c->r[0] = c->r[5] - (c->r[0] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[3];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[3];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_25180b8; }
    (void)f_subs(c, c->r[1], 0x20u);
    c->r[9] = 0x0u;
    if (COND_LT) { c->r[9] = sh_asr(c->r[0], c->r[1]); }
    goto L_2518108;
L_25180b8:;
    c->r[1] = 0x0u - c->r[1];
    c->r[7] = 0x80000000u;
    c->r[3] = ~0x80000000u;
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[6] = sh_lsr(c->r[3], c->r[1]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[3], c->r[1]));
    if (COND_LE) { goto L_25180ec; }
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[3] = c->r[7];
    if (COND_GT) { goto L_2518104; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { c->r[0] = c->r[6]; }
    goto L_2518100;
L_25180ec:;
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[3] = c->r[6];
    if (COND_GT) { goto L_2518104; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[0] = c->r[7]; }
L_2518100:;
    c->r[3] = c->r[0];
L_2518104:;
    c->r[9] = sh_lsl(c->r[3], c->r[1]);
L_2518108:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[0] + 0x1000000u;
    (void)f_subs(c, c->r[0], 0xff000000u);
    c->r[1] = c->r[7];
    if (COND_LE) { c->r[1] = 0xff000000u - c->r[0]; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[1] - 0x1u;
    c->r[1] = 0x1u - c->r[1];
    c->r[0] = sh_lsl(c->r[7], c->r[0]);
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[7] = sdiv32(c->r[8], c->r[7]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[12]; c->r[5] = r; }
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[5] = c->r[4] + (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->r[0] = c->r[4] - (c->r[0] << 3);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[0] = c->r[7] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + c->r[7];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_2518198; }
    (void)f_subs(c, c->r[1], 0x20u);
    c->r[7] = 0x0u;
    if (COND_LT) { c->r[7] = sh_asr(c->r[0], c->r[1]); }
    goto L_25181e8;
L_2518198:;
    c->r[1] = 0x0u - c->r[1];
    c->r[6] = 0x80000000u;
    c->r[7] = ~0x80000000u;
    c->r[6] = sh_asr(c->r[6], c->r[1]);
    c->r[5] = sh_lsr(c->r[7], c->r[1]);
    (void)f_subs(c, c->r[6], sh_lsr(c->r[7], c->r[1]));
    if (COND_LE) { goto L_25181cc; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[7] = c->r[6];
    if (COND_GT) { goto L_25181e4; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LT) { c->r[0] = c->r[5]; }
    goto L_25181e0;
L_25181cc:;
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_GT) { goto L_25181e4; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { c->r[0] = c->r[6]; }
L_25181e0:;
    c->r[7] = c->r[0];
L_25181e4:;
    c->r[7] = sh_lsl(c->r[7], c->r[1]);
L_25181e8:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[14] = (uint32_t)(uint16_t)(c->r[9]);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    c->r[4] = (uint32_t)((int32_t)c->r[9] >> 16);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2518220;
L_2518214:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x4u; c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[9] = c->r[9] + 0x4u; c->r[3] = v; }
    c->r[0] = c->r[0] - 0x1u;
L_2518220:;
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t r = c->r[10] * c->r[14]; c->r[12] = r; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[2] = c->r[6] + (uint32_t)((int32_t)c->r[2] >> 15);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[5] = c->r[5] + (uint32_t)((int32_t)c->r[12] >> 16);
    { uint32_t r = c->r[2] * c->r[7] + c->r[5]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[3] = c->r[6] + (uint32_t)((int32_t)c->r[3] >> 15);
    { uint32_t r = c->r[2] * c->r[7]; c->r[5] = r; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[8] >> 0));
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t r = c->r[3] * c->r[7] + c->r[2]; c->r[2] = r; }
    { uint32_t ea = c->r[9] - 0x4u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_2518214; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[12] = c->r[13] + 0xe0u;
    c->r[10] = c->r[13] + 0xa0u;
    c->r[14] = 0x1u;
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[1];
    (void)f_subs(c, c->r[1], 0xau);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = ~0xe0000000u;
    if (COND_LT) { goto L_2517b58; }
L_25182a8:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x8000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2518328; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
L_25182cc:;
    { uint32_t ea = c->r[12] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[6];
    c->r[2] = c->r[14] + (uint32_t)((int32_t)c->r[2] >> 10);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GT) { c->r[7] = (uint32_t)((int32_t)c->r[2] >> 1); }
    (void)f_subs(c, c->r[3], 0x8000u);
    if (COND_GE) { c->r[7] = 0x7fffu; }
    { uint32_t ea = c->r[1] - 0x80u; ST16(ea, c->r[7]); }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[14] + (uint32_t)((int32_t)c->r[2] >> 10);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 1);
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GT) { c->r[7] = (uint32_t)((int32_t)c->r[2] >> 1); }
    (void)f_subs(c, c->r[3], 0x8000u);
    if (COND_GE) { c->r[7] = 0x7fffu; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[7]); }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_25182cc; }
L_2518328:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_2517300; }
L_2518348:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd70au;
    c->r[0] = 0x800u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[2] = 0x28f6u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[0] - (c->r[1] >> 16);
    c->r[14] = 0x2518370u; f_2842e0c(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x828u;
    c->r[14] = 0x251837cu; f_2842e0c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_25183d4; }
    c->r[1] = 0x1u;
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[7] = 0x0u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[5] >> 15);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 1);
L_25183a0:;
    { uint32_t ea = c->r[14] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[6] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[1] = c->r[6] + (uint32_t)((int32_t)c->r[1] >> 16);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[1] = ~0x80000000u; }
    { uint32_t ea = c->r[14] + (c->r[7] << 2); ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { goto L_25183a0; }
L_25183d4:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2518438; }
    { uint32_t ea = c->r[14] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3333u;
    c->r[2] = 0x19au;
    c->r[7] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x330000u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 9);
    c->r[1] = 0x10000u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = c->r[14] + 0x19cu;
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 16);
L_2518410:;
    c->r[1] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[6] = r; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { goto L_2518410; }
L_2518438:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x11ccu;
    c->r[3] = 0x80000000u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[3] ^ (c->r[2] << 16);
    c->r[3] = 0x40000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 20);
    c->r[2] = c->r[3] + (c->r[2] << 6);
    (void)f_subs(c, c->r[5], 0x2u);
    { uint32_t r = c->r[2] * c->r[7]; c->r[3] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[3] >> 8);
    if (COND_NE) { goto L_2518524; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_25184ec; }
    c->r[1] = 0xccdu;
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 24);
    c->r[7] = 0x0u;
    c->r[8] = sdiv32(c->r[1], c->r[6]);
    c->r[1] = c->r[14];
    c->r[14] = 0xc000u;
L_25184a0:;
    c->r[5] = c->r[1] + (c->r[7] << 2);
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = sdiv32(c->r[14], c->r[4]);
    c->r[4] = c->r[4] + c->r[8];
    c->r[0] = 0x4000u - c->r[4];
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[4] = c->r[4] + 0xc000u;
    c->r[0] = c->r[0] - c->r[6] * c->r[3];
    { uint32_t r = c->r[6] * c->r[2]; c->r[6] = r; }
    c->r[0] = c->r[0] - (c->r[6] >> 16);
    c->r[0] = (c->r[4] & 0xFFFFu) | ((c->r[0] << 16) & 0xFFFF0000u);
    { uint32_t ea = c->r[5] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_25184a0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = c->r[1];
L_25184ec:;
    c->r[1] = 0x999au;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x590000u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x8000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = c->r[1] + 0x4000u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (c->r[0] << 14);
    c->r[0] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    goto L_25185bc;
L_2518524:;
    c->r[0] = 0x5333u;
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 24);
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[0] = sdiv32(c->r[0], c->r[6]);
    c->r[6] = 0x999au;
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = 0x4000u - c->r[0];
    c->r[0] = c->r[0] + 0xc000u;
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[1] = c->r[1] - c->r[7] * c->r[3];
    { uint32_t r = c->r[7] * c->r[2]; c->r[2] = r; }
    c->r[1] = c->r[1] - (c->r[2] >> 16);
    c->r[0] = (c->r[0] & 0xFFFFu) | ((c->r[1] << 16) & 0xFFFF0000u);
    c->r[1] = 0x8000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[14] + 0x18cu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[1] + 0x4000u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_25185b8; }
    { uint32_t ea = c->r[14] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_25185bc; }
    c->r[0] = 0x65u;
L_2518594:;
    { uint32_t ea = c->r[14] + 0x18cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] - 0x62u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    c->r[0] = c->r[1];
    if (COND_LT) { goto L_2518594; }
    goto L_25185bc;
L_25185b8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_25185bc:;
    { uint32_t ea = c->r[14] + 0x1e4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x20000u;
    c->r[12] = 0x199au;
    { uint32_t ea = c->r[14] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    c->r[1] = c->r[0] - (c->r[3] << 3);
    c->r[0] = 0xfff8u;
    c->r[7] = c->r[1] & c->r[0];
    c->r[0] = 0x262cu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[7] = 0xfffcu;
    c->r[10] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[12]; c->r[1] = r; }
    c->r[14] = (c->r[1] >> 16);
    c->r[1] = 0x10000u;
    c->r[1] = c->r[1] - (c->r[2] << 2);
    c->r[9] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = c->r[1] & c->r[7];
    { uint32_t r = c->r[1] * c->r[12]; c->r[1] = r; }
    c->r[8] = (c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { goto L_251879c; }
    c->r[7] = 0x40000u;
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[4] = (c->r[0] << 15);
    c->r[3] = c->r[7] - (c->r[3] << 4);
    c->r[7] = 0xfff0u;
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[7] = c->r[3] & c->r[7];
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16));
    { uint32_t r = c->r[6] * c->r[7]; c->r[7] = r; }
    c->r[2] = 0x10000u - c->r[2];
    c->r[2] = c->r[2] - (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[7] = 0x3333u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = 0x999au;
    c->r[3] = c->r[3] + (c->r[2] << 1);
    if (COND_LT) { goto L_25186a8; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[14]); }
    c->r[14] = clz32(c->r[4]);
    c->r[12] = c->r[4];
    c->r[6] = 0x18u - c->r[14];
    c->r[2] = 0x0u - c->r[6];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_25186c0; }
    if (COND_LT) { goto L_25186b4; }
    c->r[12] = sh_ror(c->r[4], c->r[6]);
    goto L_25186c0;
L_25186a8:;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    goto L_251878c;
L_25186b4:;
    c->r[0] = c->r[6] + 0x20u;
    c->r[0] = sh_lsr(c->r[4], c->r[0]);
    c->r[12] = c->r[0] | sh_lsl(c->r[4], c->r[2]);
L_25186c0:;
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[12] & 0x7fu;
    c->r[12] = 0xd50000u;
    { uint32_t r = c->r[14] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = 0x8000u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[9]); }
    c->r[9] = 0x8000u;
    { uint32_t r = c->r[3] * c->r[12]; c->r[3] = r; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[5] = 0xb486u; }
    c->r[0] = (c->r[14] >> 1);
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = sh_lsr(c->r[5], c->r[0]);
    c->r[7] = (c->r[2] >> 16);
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = (c->r[3] >> 16);
    { uint32_t r = c->r[3] * c->r[7]; c->r[7] = r; }
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[7] = c->r[7] + sh_lsr(c->r[5], c->r[0]);
    c->r[12] = c->r[2] + (c->r[7] << 16);
    if (COND_EQ) { goto L_2518738; }
    if (COND_LT) { goto L_2518728; }
    c->r[4] = sh_ror(c->r[4], c->r[6]);
    goto L_2518738;
L_2518728:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[6] + 0x20u;
    c->r[2] = sh_lsr(c->r[4], c->r[2]);
    c->r[4] = c->r[2] | sh_lsl(c->r[4], c->r[3]);
L_2518738:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[4] & 0x7fu;
    c->r[4] = 0xd50000u;
    { uint32_t r = c->r[14] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t r = c->r[7] * c->r[4]; c->r[7] = r; }
    if (COND_EQ) { c->r[9] = 0xb486u; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[12] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = sh_lsr(c->r[9], c->r[0]);
    c->r[7] = (c->r[7] >> 16);
    c->r[12] = 0x199au;
    c->r[3] = (c->r[2] >> 16);
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[7] * c->r[3]; c->r[3] = r; }
    { uint32_t r = c->r[7] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[3] + sh_lsr(c->r[9], c->r[0]);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 16);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
L_251878c:;
    c->r[2] = 0xfffeu;
    c->r[2] = c->r[3] & c->r[2];
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[4] = c->r[6] + (uint32_t)((int32_t)c->r[0] >> 16);
L_251879c:;
    c->r[0] = 0x1c2cu;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    c->r[14] = c->r[14] + c->r[8];
    c->r[4] = c->r[5] + c->r[0];
    c->r[0] = 0x1c28u;
    c->r[3] = c->r[5] + c->r[0];
    c->r[0] = 0x1c24u;
    c->r[5] = c->r[5] + c->r[0];
    c->r[0] = c->r[10] + c->r[9];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[9] = 0x1u;
    { uint32_t r = c->r[0] * c->r[12]; c->r[8] = r; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x6666u;
L_25187d4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[14] - c->r[7];
    c->r[6] = c->r[6] + c->r[8];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[6] * c->r[0]; c->r[6] = r; }
    c->r[6] = c->r[7] + (c->r[6] >> 16);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[7];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    c->r[2] = c->r[7] + (c->r[2] >> 16);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[12] - c->r[2];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[7] * c->r[0]; c->r[7] = r; }
    c->r[2] = c->r[2] + (c->r[7] >> 16);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[9] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[6] = c->r[10] + (c->r[1] << 2);
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[6] + 0x1acu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[9] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[6] + 0x1ccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[9] + (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 1);
    { uint32_t ea = c->r[6] + 0x1bcu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_25187d4; }
    c->r[0] = 0x7436c0u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251887cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_2518888(Cpu *restrict c) {
    FN_ENTER(0x2518888u);
L_2518888:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14cu;
    c->r[10] = c->r[0];
    c->r[0] = 0x74368cu;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    { uint32_t ea = 0x25188b0u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] & 0x1u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    c->r[5] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[7] + 0x14u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[5] + (c->r[0] << 4);
    c->r[8] = (c->r[0] << 3);
    c->r[9] = (c->r[0] << 2);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[3] = r; }
    (void)f_subs(c, c->r[1], 0x10u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_2518914; }
    c->r[0] = 0x0u;
    c->r[7] = c->r[11] - 0x38u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x2518910u; f_2843088(c);
    goto L_2518964;
L_2518914:;
    (void)f_subs(c, c->r[1], 0xcu);
    if (COND_NE) { goto L_2518950; }
    c->r[0] = 0x0u;
    c->r[7] = c->r[11] - 0x38u;
    c->r[1] = c->r[5];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x251894cu; f_2843094(c);
    goto L_2518964;
L_2518950:;
    c->r[2] = (c->r[0] << 4);
    c->r[0] = c->r[5];
    c->r[1] = c->r[10];
    c->r[14] = 0x2518960u; f_283aa78(c);
    c->r[7] = c->r[11] - 0x38u;
L_2518964:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7435b0u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x251898cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[6] & 0x1u;
    c->r[4] = c->r[6] + c->r[5];
    c->r[1] = c->r[4] + c->r[8];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[4];
    c->r[14] = 0x25189a8u; f_2843088(c);
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_LT) { goto L_2518a04; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[0] = c->r[0] + c->r[5];
    c->r[5] = 0x8000u;
    c->r[0] = c->r[6] + c->r[0];
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[0] - 0x2u;
L_25189cc:;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[7] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[3] = c->r[6] + c->r[3];
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_GT) { c->r[0] = c->r[3]; }
    (void)f_subs(c, c->r[3], 0x8000u);
    if (COND_GE) { c->r[0] = 0x7fffu; }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = c->r[7];
    if (COND_GT) { goto L_25189cc; }
L_2518a04:;
    c->r[0] = c->r[11] - 0x3cu;
    c->r[1] = c->r[11] - 0x40u;
    c->r[2] = c->r[4];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    c->r[14] = 0x2518a1cu; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2518a74; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] >> 1);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
    (void)f_adds(c, c->r[1], 0x13u);
    if (COND_LT) { goto L_2518a74; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x2u);
    c->r[0] = sh_asr(c->r[1], c->r[0]);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    if (COND_LT) { goto L_2518a74; }
    c->r[0] = c->r[4] + 0x2u;
    c->r[1] = 0x1u;
L_2518a58:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[9]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_LT) { goto L_2518a58; }
L_2518a74:;
    c->r[0] = 0x7434b4u;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x2518a88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[1];
    c->r[6] = c->r[3] + (c->r[3] << 5);
    c->r[9] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[4] & 0x1u;
    c->r[8] = c->r[4] + c->r[10];
    c->r[1] = c->r[8] + (c->r[6] << 3);
    c->r[2] = 0x0u - c->r[1];
    c->r[7] = c->r[2] & 0x3u;
    c->r[1] = c->r[1] + c->r[7];
    c->r[5] = c->r[1] + 0x104u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[9] + (c->r[9] << 6);
    c->r[1] = (c->r[0] << 1);
    c->r[0] = c->r[8];
    c->r[14] = 0x2518ac4u; f_283aad8(c);
    c->r[0] = (c->r[6] << 3);
    (void)f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2518df4; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] - 0x10cu;
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x8eu;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x2u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[0] = c->r[0] + c->r[7];
    c->r[7] = c->r[1] + 0xa0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0xfcu;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
L_2518b20:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x41u;
    c->r[1] = c->r[7] - 0x90u;
    c->r[3] = 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x2518b48u; f_2842b24(c);
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[7];
    c->r[2] = 0x28u;
    c->r[3] = c->r[5];
    c->r[14] = 0x2518b60u; f_2842ecc(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[7] - 0x10u;
    c->r[2] = 0x28u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[0];
    c->r[14] = 0x2518b7cu; f_2842ecc(c);
    c->r[1] = 0x7100u;
    c->r[0] = c->r[0] + c->r[6];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    c->r[9] = c->r[0] + c->r[1];
    c->r[1] = 0x8f00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfffd0000u;
    c->r[0] = f_subs(c, c->r[1], c->r[0]);
    c->r[1] = ~0xe0000000u;
    if (COND_LT) { c->r[0] = c->r[9]; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[14] = clz32(c->r[0]);
    c->r[0] = c->r[14] - 0x1u;
    c->r[6] = sh_lsl(c->r[9], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[3] = sdiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[4];
    if (COND_MI) { c->r[0] = 0x0u - c->r[4]; }
    c->r[0] = clz32(c->r[0]);
    c->r[7] = c->r[0] - 0x1u;
    c->r[5] = sh_lsl(c->r[4], c->r[7]);
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t r = c->r[2] * c->r[1]; c->r[2] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[5] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[6]) >> 32);
    c->r[5] = (c->r[5] << 3);
    c->r[4] = sh_lsl(c->r[4], c->r[7]) - c->r[5];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[3] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[2] = 0x1u - c->r[14];
    c->r[0] = c->r[0] + c->r[2];
    c->r[2] = c->r[0] + 0x1cu;
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_GT) { goto L_2518c44; }
    c->r[2] = 0xeu - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[0] = ~0x80000000u;
    c->r[7] = sh_asr(c->r[3], c->r[2]);
    c->r[6] = sh_lsr(c->r[0], c->r[2]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[0], c->r[2]));
    if (COND_LE) { goto L_2518c58; }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[3] = c->r[7];
    if (COND_GT) { goto L_2518c70; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_LT) { c->r[1] = c->r[6]; }
    goto L_2518c6c;
L_2518c44:;
    c->r[0] = c->r[0] + 0xeu;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_LT) { c->r[2] = sh_asr(c->r[1], c->r[0]); }
    goto L_2518c74;
L_2518c58:;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[3] = c->r[6];
    if (COND_GT) { goto L_2518c70; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LT) { c->r[1] = c->r[7]; }
L_2518c6c:;
    c->r[3] = c->r[1];
L_2518c70:;
    c->r[2] = sh_lsl(c->r[3], c->r[2]);
L_2518c74:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + (c->r[0] << 6);
    c->r[0] = c->r[8] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[14] = v; }
L_2518c90:;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[3] = ~0xe0000000u;
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[0] = c->r[7] - c->r[0] * c->r[0];
    c->r[9] = f_adds(c, c->r[0], c->r[9]);
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[9]); }
    if (COND_MI) { c->r[0] = 0x0u - c->r[9]; }
    c->r[12] = clz32(c->r[0]);
    c->r[0] = c->r[12] - 0x1u;
    c->r[5] = sh_lsl(c->r[9], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[6] = sdiv32(c->r[3], c->r[0]);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = c->r[7];
    if (COND_MI) { c->r[0] = 0x0u - c->r[7]; }
    c->r[0] = clz32(c->r[0]);
    c->r[3] = c->r[0] - 0x1u;
    c->r[9] = sh_lsl(c->r[7], c->r[3]);
    c->r[10] = (uint32_t)(uint16_t)(c->r[9]);
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t r = c->r[10] * c->r[8]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[9] >> 16) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[5] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[5] * (int32_t)c->r[4]) >> 32);
    c->r[5] = (c->r[5] << 3);
    c->r[3] = sh_lsl(c->r[7], c->r[3]) - c->r[5];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[8]; c->r[3] = r; }
    c->r[6] = c->r[4] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = 0x1u - c->r[12];
    c->r[0] = c->r[0] + c->r[3];
    c->r[7] = c->r[0] + 0x1cu;
    (void)f_subs(c, c->r[7], 0xdu);
    if (COND_GT) { goto L_2518d68; }
    c->r[4] = 0xeu - c->r[7];
    c->r[7] = 0x80000000u;
    c->r[3] = ~0x80000000u;
    c->r[5] = sh_asr(c->r[7], c->r[4]);
    c->r[0] = sh_lsr(c->r[3], c->r[4]);
    (void)f_subs(c, c->r[5], sh_lsr(c->r[3], c->r[4]));
    if (COND_LE) { goto L_2518d84; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[7] = c->r[5];
    if (COND_GT) { goto L_2518da4; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { c->r[6] = c->r[0]; }
    goto L_2518da0;
L_2518d68:;
    c->r[3] = c->r[0] + 0xeu;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], 0x20u);
    if (COND_LT) { c->r[0] = sh_asr(c->r[6], c->r[3]); }
    goto L_2518da8;
L_2518d84:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[7] = c->r[0];
    if (COND_GT) { goto L_2518da4; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_LT) { c->r[6] = c->r[5]; }
L_2518da0:;
    c->r[7] = c->r[6];
L_2518da4:;
    c->r[0] = sh_lsl(c->r[7], c->r[4]);
L_2518da8:;
    c->r[1] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[14]; ST16(ea, c->r[0]); c->r[14] = c->r[14] + 0x2u; }
    c->r[2] = c->r[2] - 0x2u;
    (void)f_adds(c, c->r[1], 0x40u);
    if (COND_NE) { goto L_2518c90; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + 0x50u;
    c->r[2] = c->r[2] + 0x1u;
    c->r[7] = c->r[7] + 0x50u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x82u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_2518b20; }
L_2518df4:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xfb800000u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_2518e60; }
    c->r[1] = 0x102u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x48u;
    c->r[1] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2518e20:;
    { uint32_t ea = c->r[1] - 0x82u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = c->r[2] - 0x1u;
    c->r[0] = c->r[0] + 0x100000u;
    (void)f_subs(c, c->r[2], 0x7u);
    c->r[3] = c->r[7] + c->r[3];
    c->r[7] = (c->r[3] >> 16);
    { uint32_t r = c->r[7] * c->r[6] + c->r[3]; c->r[7] = r; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[3] = c->r[7] + (c->r[3] >> 16);
    { uint32_t ea = c->r[1] - 0x82u; ST16(ea, c->r[3]); }
    c->r[1] = c->r[1] - 0x2u;
    if (COND_GT) { goto L_2518e20; }
    goto L_2518ea8;
L_2518e60:;
    c->r[1] = c->r[8] + 0x80u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x48u;
L_2518e70:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = c->r[2] - 0x1u;
    c->r[0] = c->r[0] + 0x100000u;
    (void)f_subs(c, c->r[2], 0x7u);
    c->r[6] = (c->r[7] << 1);
    c->r[5] = (c->r[7] >> 15);
    c->r[6] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[6] * c->r[3]; c->r[6] = r; }
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[3] = c->r[3] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[6] >> 16);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] - 0x2u; }
    if (COND_GT) { goto L_2518e70; }
L_2518ea8:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[11] - 0xa0u;
    c->r[2] = 0x41u;
    c->r[5] = c->r[0] + (c->r[9] << 1);
    c->r[3] = c->r[5];
    c->r[0] = c->r[6];
    c->r[14] = 0x2518eccu; f_28430a0(c);
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = 0xcccu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { goto L_2518ef8; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0x2518eecu; f_283abec(c);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    goto L_2519738;
L_2518ef8:;
    c->r[10] = 0xfef4u;
    c->r[0] = (c->r[9] << 1);
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xffff0000u;
    (void)f_adds(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_2518f68; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[7] = c->r[11] - 0xa0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LE) { goto L_2518f6c; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x10u;
    c->r[1] = c->r[1] + 0x2u;
L_2518f40:;
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[2] + (c->r[3] << 1);
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[3]); }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_GE) { goto L_2518f68; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GT) { goto L_2518f40; }
    goto L_2518f6c;
L_2518f68:;
    c->r[4] = c->r[5];
L_2518f6c:;
    c->r[0] = 0x742fbcu;
    c->r[6] = c->r[8] + (c->r[8] << 3);
    c->r[9] = ~0x0u;
    { uint32_t ea = 0x2518f80u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = c->r[7] & 0x1u;
    c->r[0] = c->r[7] + c->r[8];
    c->r[5] = c->r[0] + 0x10cu;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    c->r[1] = 0x10cu;
    c->r[14] = 0x2518f9cu; f_283aad8(c);
    c->r[0] = c->r[5] + c->r[10];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_2519014; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2518fc4; }
    { uint32_t ea = c->r[11] - 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[1] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[1] - 0x1au; ST16(ea, c->r[2]); }
L_2518fc4:;
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[14] = c->r[11] - 0xa0u;
    if (COND_EQ) { goto L_2519004; }
    c->r[1] = c->r[4] - c->r[2];
    c->r[2] = c->r[14] + (c->r[2] << 2);
    c->r[3] = 0x1u;
    c->r[2] = c->r[2] + 0x4u;
L_2518fe0:;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[5] = c->r[0] + (c->r[5] << 1);
    { uint32_t ea = c->r[5] - 0x1au; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x8u;
    c->r[5] = c->r[0] + (c->r[5] << 1);
    { uint32_t ea = c->r[5] - 0x1au; ST16(ea, c->r[3]); }
    if (COND_NE) { goto L_2518fe0; }
L_2519004:;
    c->r[2] = 0x108u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[5] = v; }
    goto L_2519020;
L_2519014:;
    c->r[1] = c->r[0] + 0x108u;
    c->r[5] = 0x0u;
    c->r[14] = c->r[11] - 0xa0u;
L_2519020:;
    c->r[2] = c->r[9] + (c->r[6] << 1);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[6] << 1);
    c->r[6] = 0x92u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = (c->r[2] << 1);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[7] + c->r[8];
    c->r[7] = 0x10au;
    c->r[7] = c->r[2] + c->r[7];
L_2519050:;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[6] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[6], 0xfu);
    c->r[5] = c->r[3] + c->r[5];
    c->r[5] = c->r[5] + c->r[4];
    { uint32_t ea = c->r[7]; ST16(ea, c->r[5]); }
    c->r[7] = c->r[7] - 0x2u;
    c->r[5] = c->r[3];
    if (COND_GT) { goto L_2519050; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = c->r[2] - 0x18u;
    c->r[7] = 0x10u;
    c->r[4] = 0x0u;
    c->r[6] = c->r[3] + (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[7], 0x90u);
    if (COND_LT) { goto L_25190c0; }
    goto L_25190d4;
L_25190a0:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[7] - 0x1u;
    { uint32_t ea = c->r[14] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] + 0x1u;
    c->r[6] = c->r[3] + (c->r[7] << 1);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[5]); }
L_25190b8:;
    (void)f_subs(c, c->r[7], 0x90u);
    if (COND_GE) { goto L_25190d4; }
L_25190c0:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = c->r[6] + 0x2u; c->r[5] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_25190b8; }
    goto L_25190a0;
L_25190d4:;
    c->r[3] = 0x106u;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + 0x104u;
    c->r[1] = 0x92u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
L_25190e8:;
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[7] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[1], 0xfu);
    c->r[7] = c->r[7] + c->r[3];
    c->r[7] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[2] + 0x6u; ST16(ea, c->r[7]); }
    c->r[2] = c->r[2] - 0x2u;
    c->r[7] = c->r[6];
    if (COND_GT) { goto L_25190e8; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0xeu;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
L_2519134:;
    c->r[3] = c->r[7] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_GE) { c->r[3] = c->r[0] + (c->r[4] << 1); }
    if (COND_GE) { c->r[4] = c->r[4] + 0x1u; }
    if (COND_GE) { { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); } }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[1], 0x10cu);
    if (COND_NE) { goto L_2519134; }
    c->r[0] = c->r[11] - 0x3cu;
    c->r[1] = c->r[11] - 0x40u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[12]); }
    c->r[14] = 0x2519174u; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { c->r[0] = (c->r[0] >> 1); }
    if (COND_GE) { { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); } }
    if (COND_GE) { (void)f_subs(c, c->r[9], 0x1u); }
    if (COND_LT) { goto L_25191b8; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = sh_asr(c->r[1], c->r[0]);
    c->r[1] = c->r[9] - 0x1u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x2u;
L_25191a0:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_NE) { goto L_25191a0; }
L_25191b8:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x25191c4u; f_283aad8(c);
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_251939c; }
    c->r[7] = c->r[5] + 0x140u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
L_25191e0:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[7];
    c->r[2] = 0x28u;
    c->r[3] = c->r[6];
    c->r[14] = 0x25191f4u; f_2842ecc(c);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_251937c; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = ~0xdu;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 5);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
L_2519224:;
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    c->r[0] = c->r[7];
    c->r[2] = 0x28u;
    c->r[3] = c->r[6];
    c->r[4] = c->r[7] - (c->r[10] << 1);
    c->r[1] = c->r[4];
    c->r[14] = 0x2519240u; f_2842ecc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_2519314; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[4];
    c->r[2] = 0x28u;
    c->r[3] = c->r[6];
    c->r[14] = 0x2519260u; f_2842ecc(c);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = clz32(c->r[5]);
    c->r[6] = c->r[4] - 0x1u;
    c->r[0] = f_adds(c, c->r[1], c->r[0]);
    c->r[1] = c->r[0];
    if (COND_MI) { c->r[1] = 0x0u - c->r[0]; }
    c->r[12] = clz32(c->r[1]);
    c->r[1] = ~0xe0000000u;
    c->r[2] = c->r[12] - 0x1u;
    c->r[0] = sh_lsl(c->r[0], c->r[2]);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[2] = sdiv32(c->r[1], c->r[2]);
    c->r[1] = sh_lsl(c->r[5], c->r[6]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[7] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[0] = (c->r[0] << 3);
    c->r[0] = sh_lsl(c->r[5], c->r[6]) - c->r[0];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u - c->r[12];
    c->r[1] = c->r[4] + c->r[1];
    c->r[2] = c->r[1] + 0x1cu;
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_GT) { goto L_251931c; }
    c->r[1] = 0xeu - c->r[2];
    c->r[3] = 0x80000000u;
    c->r[2] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[5] = sh_lsr(c->r[2], c->r[1]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[2], c->r[1]));
    if (COND_LE) { goto L_2519338; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    c->r[2] = c->r[3];
    if (COND_GT) { goto L_2519358; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LT) { c->r[0] = c->r[5]; }
    goto L_2519354;
L_2519314:;
    c->r[1] = 0x0u;
    goto L_251935c;
L_251931c:;
    c->r[2] = c->r[1] + 0xeu;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_LT) { c->r[1] = sh_asr(c->r[0], c->r[2]); }
    goto L_251935c;
L_2519338:;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[2] = c->r[5];
    if (COND_GT) { goto L_2519358; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { c->r[0] = c->r[3]; }
L_2519354:;
    c->r[2] = c->r[0];
L_2519358:;
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
L_251935c:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = f_subs(c, c->r[8], 0x1u);
    c->r[9] = c->r[9] + 0x2u;
    c->r[0] = c->r[0] + c->r[10];
    c->r[0] = c->r[2] + (c->r[0] << 1);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    if (COND_NE) { goto L_2519224; }
L_251937c:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[7] + 0x50u;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[14]);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_25191e0; }
L_251939c:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_25193d4; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], 0xcu);
    if (COND_NE) { goto L_25193e8; }
    c->r[1] = 0x5556u;
    c->r[0] = (c->r[9] << 1);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x55550000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[9] = c->r[0] + (c->r[0] >> 31);
    goto L_25193f8;
L_25193d4:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    goto L_2519404;
L_25193e8:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x10u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[9] = sh_lsr(c->r[9], c->r[0]);
L_25193f8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x2519400u; f_2842ba8(c);
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
L_2519404:;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[14], 0x4u);
    if (COND_NE) { goto L_2519438; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[8] = 0x3u;
    c->r[0] = 0x3u;
    c->r[10] = 0xbu;
    if (COND_GT) { c->r[8] = 0xbu; }
    (void)f_subs(c, c->r[5], 0x8u);
    if (COND_NE) { c->r[8] = c->r[0]; }
    c->r[0] = 0x742b90u;
    { uint32_t ea = 0x2519438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2519448;
L_2519438:;
    c->r[0] = 0x742b80u;
    c->r[8] = 0x3u;
    c->r[10] = 0x3u;
    { uint32_t ea = 0x251944cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2519448:;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2519720; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    c->r[2] = 0x80000000u;
    c->r[1] = 0x0u;
    c->r[9] = c->r[13] + 0x98u;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[14] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x6660000u;
    { uint32_t r = c->r[14] * c->r[0]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[8] << 2);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x742b20u;
    { uint32_t ea = 0x25194a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
L_25194b8:;
    c->r[0] = c->r[11] - 0xa0u;
    (void)f_subs(c, c->r[14], 0x1u);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_2519534; }
    c->r[0] = c->r[0] - 0xeu;
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
L_25194e0:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[0];
    c->r[5] = c->r[14];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[9] + (c->r[2] << 2); ST32(ea, c->r[12]); }
L_25194f4:;
    c->r[1] = c->r[4] + c->r[10];
    c->r[4] = c->r[4] + c->r[2];
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    c->r[4] = c->r[3] + c->r[4];
    c->r[3] = c->r[3] + 0x84u;
    c->r[4] = c->r[7] + (c->r[4] << 1);
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[6] = c->r[4] + c->r[6];
    c->r[4] = c->r[1];
    if (COND_NE) { goto L_25194f4; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_LT) { goto L_25194e0; }
    goto L_2519540;
L_2519534:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x2519540u; f_283ab44(c);
L_2519540:;
    c->r[5] = 0x80000000u;
    c->r[0] = 0x0u;
    c->r[6] = 0x0u;
L_251954c:;
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_GT) { c->r[6] = c->r[0]; }
    c->r[0] = c->r[0] + 0x1u;
    if (COND_GT) { c->r[5] = c->r[1]; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_LT) { goto L_251954c; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2519570u; f_2842ba8(c);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[1] = c->r[5] - (uint32_t)((int32_t)c->r[1] >> 7);
    if (COND_LT) { goto L_25195c0; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[2] = (c->r[0] >> 7);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 15);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[3] = 0x40u;
    c->r[0] = c->r[3] + (c->r[0] >> 7);
    c->r[0] = sdiv32(c->r[2], c->r[0]);
    c->r[1] = c->r[1] - c->r[0];
L_25195c0:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GT) { (void)f_subs(c, c->r[5], c->r[0]); }
    if (COND_LE) { goto L_2519614; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x11u);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[0] = c->r[5]; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[0] = c->r[6]; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
L_2519614:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_25194b8; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_2519720; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], 0x8u);
    c->r[0] = sdiv32(c->r[0], c->r[14]);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_LE) { goto L_2519764; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[11] - 0x3cu;
    c->r[1] = c->r[11] - 0x40u;
    c->r[2] = c->r[10];
    c->r[3] = c->r[5];
    c->r[14] = 0x2519674u; f_2842c38(c);
    c->r[2] = 0x7428acu;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = 0x2519690u + c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GT) { c->r[1] = (c->r[3] << 1); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GT) { c->r[0] = c->r[0] - (c->r[3] << 1); }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[2] & 0x1u;
    c->r[6] = c->r[2] + c->r[14];
    c->r[6] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    if (COND_LT) { goto L_25197ac; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[5] = c->r[6] + c->r[0];
    c->r[7] = (c->r[7] >> 1);
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    if (COND_LT) { goto L_25197c4; }
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    c->r[7] = sh_asr(c->r[6], c->r[7]);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    if (COND_EQ) { goto L_25197c8; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = c->r[10] + 0x2u;
    c->r[0] = c->r[0] + c->r[14];
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = c->r[3] - 0x1u;
    c->r[0] = c->r[0] + 0x2u;
L_2519704:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_NE) { goto L_2519704; }
    goto L_25197c8;
L_2519720:;
    c->r[1] = (c->r[14] << 2);
    c->r[0] = c->r[4];
    c->r[14] = 0x251972cu; f_283abec(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
L_2519738:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
L_251974c:;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[6]); }
    c->r[1] = 0x7427e0u;
    { uint32_t ea = 0x251975cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2519764:;
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LT) { goto L_25197a0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
L_2519778:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = c->r[0] + c->r[10]; c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[3];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[2] = c->r[1];
    if (COND_LE) { c->r[2] = 0x10u; }
    (void)f_subs(c, c->r[1], 0x90u);
    if (COND_GT) { c->r[2] = 0x90u; }
    c->r[14] = f_subs(c, c->r[14], 0x1u);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); c->r[4] = c->r[4] + 0x4u; }
    if (COND_NE) { goto L_2519778; }
L_25197a0:;
    c->r[0] = 0xfff0u;
    c->r[0] = c->r[3] + c->r[0];
    goto L_251a414;
L_25197ac:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[8], 0xcu);
    if (COND_EQ) { goto L_25197d0; }
    goto L_25197f4;
L_25197c4:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
L_25197c8:;
    (void)f_subs(c, c->r[8], 0xcu);
    if (COND_NE) { goto L_25197f4; }
L_25197d0:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_LT) { goto L_2519818; }
    goto L_2519834;
L_25197f4:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x10u);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]); }
    if (COND_NE) { c->r[0] = c->r[0] + (c->r[0] << 1); }
    if (COND_EQ) { c->r[0] = (c->r[0] << 1); }
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_GE) { goto L_2519834; }
L_2519818:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_2519850; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_LT) { c->r[0] = c->r[9]; }
    goto L_251984c;
L_2519834:;
    (void)f_subs(c, c->r[0], c->r[9]);
    c->r[7] = c->r[9];
    if (COND_GT) { goto L_2519850; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[1]; }
L_251984c:;
    c->r[7] = c->r[0];
L_2519850:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[7] - 0x2u;
    (void)f_subs(c, c->r[0], c->r[9]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    if (COND_LE) { c->r[0] = c->r[9]; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_25198f8; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_25198a8; }
    c->r[0] = 0x74272cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x251989cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[7] + (c->r[0] << 1);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_25198a8:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_25198f8; }
    c->r[0] = 0x742700u;
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = 0xbu;
    c->r[1] = c->r[12] - c->r[1];
    { uint32_t ea = 0x25198c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[2] = c->r[4] + (c->r[2] << 2);
    c->r[0] = c->r[0] + c->r[6];
L_25198d0:;
    { uint32_t ea = c->r[0] - 0xbu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[3] = c->r[7] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x16u;
    c->r[3] = c->r[7] + (c->r[3] << 1);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x8u;
    if (COND_NE) { goto L_25198d0; }
L_25198f8:;
    c->r[10] = 0xcu;
    (void)f_subs(c, c->r[12], 0x4u);
    if (COND_NE) { goto L_251992c; }
    c->r[0] = 0x742738u;
    { uint32_t ea = 0x2519910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[0] = 0x7426b0u;
    { uint32_t ea = 0x2519920u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x22u;
    goto L_2519940;
L_251992c:;
    c->r[0] = 0x742698u;
    c->r[2] = 0xcu;
    { uint32_t ea = 0x251993cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xcu;
L_2519940:;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7425dcu;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[12], 0x4u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x2519960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x14u - c->r[6];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & 0x13u;
    c->r[6] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[12] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    c->r[4] = c->r[1] + (c->r[1] << 2);
    c->r[1] = c->r[6] + (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[4]); }
    c->r[2] = 0x14u - c->r[1];
    c->r[2] = c->r[2] & 0x13u;
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_25199e0; }
    c->r[0] = 0x742698u;
    { uint32_t ea = 0x25199b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[14] << 3);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x742680u;
    { uint32_t ea = 0x25199c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[10] = v; }
    c->r[0] = 0x7425f8u;
    { uint32_t ea = 0x25199d8u + c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x22u;
    goto L_25199f8;
L_25199e0:;
    c->r[0] = 0x7425e8u;
    { uint32_t ea = 0x25199ecu + c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x742658u;
    { uint32_t ea = 0x25199f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcu;
L_25199f8:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x742528u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[12], 0x1u);
    c->r[0] = 0x0u - c->r[1];
    { uint32_t ea = 0x2519a14u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x3u;
    c->r[9] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x57u;
    c->r[0] = c->r[0] - c->r[9];
    c->r[1] = c->r[9] + 0x58u;
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x58u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_2519d48; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[1] = 0x0u - c->r[1];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    if (COND_LE) { goto L_2519c24; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[10]); }
    c->r[2] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (c->r[7] << 2);
    c->r[0] = c->r[2] + c->r[0];
    c->r[0] = c->r[6] + c->r[0];
    c->r[4] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[4]); }
    c->r[7] = c->r[0] + (c->r[7] << 3);
    c->r[0] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + c->r[0];
    c->r[5] = c->r[0] + 0x8u;
    c->r[0] = c->r[10] + (c->r[10] << 2);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
L_2519ac4:;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] | (c->r[8] << 1);
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[10] = v; }
    c->r[0] = c->r[1] + (c->r[8] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    c->r[0] = 0x1u - c->r[4];
    c->r[5] = c->r[0] + c->r[10];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[1] = c->r[0] - (c->r[10] << 1);
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x2519b18u; f_2842b24(c);
    c->r[14] = c->r[6];
    (void)f_subs(c, c->r[10], c->r[4]);
    if (COND_LT) { goto L_2519ba0; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[4];
    if (COND_EQ) { goto L_2519b4c; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] - c->r[4];
    c->r[2] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_2519b4c:;
    (void)f_subs(c, c->r[10], c->r[4]);
    if (COND_EQ) { goto L_2519ba0; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[10] + 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[3] - c->r[1];
    c->r[3] = (c->r[10] << 2);
    c->r[2] = c->r[3] - (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[4];
    c->r[2] = c->r[3] + c->r[2];
L_2519b78:;
    c->r[3] = c->r[7] + c->r[2];
    c->r[6] = c->r[0] + 0x8u;
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[2] = c->r[2] - 0x8u;
    { uint32_t ea = c->r[3] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[3] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[6];
    if (COND_NE) { goto L_2519b78; }
L_2519ba0:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[14];
    c->r[0] = c->r[5];
    c->r[2] = c->r[10];
L_2519bb8:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = c->r[1] + 0x1u; c->r[3] = v; }
    c->r[6] = c->r[9];
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[3] = c->r[3] - c->r[4];
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x14u;
    if (COND_NE) { goto L_2519bb8; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[12]);
    c->r[5] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[3] << 1);
    c->r[14] = c->r[14] + c->r[0];
    if (COND_NE) { goto L_2519ac4; }
    goto L_2519d48;
L_2519c24:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = c->r[2] + c->r[0];
    c->r[7] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[1] + (c->r[0] << 3);
L_2519c5c:;
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] | (c->r[4] << 1);
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[8] = v; }
    c->r[0] = c->r[1] + (c->r[4] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[10] = v; }
    c->r[0] = 0x1u - c->r[10];
    c->r[5] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[1] = c->r[0] - (c->r[8] << 1);
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x2519ca8u; f_2842b24(c);
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_LT) { goto L_2519d30; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[10];
    if (COND_EQ) { goto L_2519cdc; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] - c->r[10];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_2519cdc:;
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_EQ) { goto L_2519d30; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[8] + 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[3] - c->r[1];
    c->r[3] = (c->r[8] << 2);
    c->r[2] = c->r[3] - (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[10];
    c->r[2] = c->r[3] + c->r[2];
L_2519d08:;
    c->r[3] = c->r[7] + c->r[2];
    c->r[6] = c->r[0] + 0x8u;
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[2] = c->r[2] - 0x8u;
    { uint32_t ea = c->r[3] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[5]); c->r[0] = ea; }
    { uint32_t ea = c->r[3] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[6];
    if (COND_NE) { goto L_2519d08; }
L_2519d30:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[12]);
    c->r[2] = c->r[2] + (c->r[3] << 1);
    if (COND_NE) { goto L_2519c5c; }
L_2519d48:;
    c->r[0] = 0x7421e0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x4u);
    { uint32_t ea = 0x2519d5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_2519d98; }
    c->r[0] = 0x7422e0u;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2519d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7422c8u;
    { uint32_t ea = 0x2519d80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[14] = v; }
    c->r[0] = 0x742240u;
    { uint32_t ea = 0x2519d90u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x22u;
    goto L_2519db4;
L_2519d98:;
    c->r[0] = 0x74222cu;
    c->r[14] = 0xcu;
    { uint32_t ea = 0x2519da8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x74229cu;
    { uint32_t ea = 0x2519db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcu;
L_2519db4:;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x742170u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = 0x2519dccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_251a0b8; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x32u;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_LE) { goto L_2519f98; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[14]); }
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[7] + c->r[0];
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[6] = c->r[0] + 0x4u;
    c->r[0] = c->r[1] + c->r[7];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + (c->r[14] << 2);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_2519e54:;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4] + (c->r[10] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + c->r[5];
    c->r[0] = c->r[8] - (c->r[7] << 1);
    c->r[1] = c->r[0];
    c->r[14] = 0x2519e80u; f_2842ecc(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] | (c->r[10] << 1);
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_LE) { goto L_2519ef4; }
    c->r[2] = 0x0u - c->r[7];
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] - c->r[5];
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[7] + (c->r[2] << 1);
    c->r[7] = 0x0u;
L_2519eb8:;
    c->r[4] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[0] = c->r[0] - c->r[4] * c->r[4];
    c->r[4] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    c->r[0] = c->r[4];
    if (COND_GE) { c->r[0] = ~0x80000000u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { c->r[0] = c->r[4]; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[6] - (c->r[7] << 1); ST32(ea, c->r[0]); }
    c->r[7] = c->r[7] - 0x2u;
    if (COND_NE) { goto L_2519eb8; }
L_2519ef4:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[14];
L_2519f0c:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = c->r[0] + 0x1u; c->r[3] = v; }
    c->r[7] = c->r[9];
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[3] = c->r[3] - c->r[5];
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[2] - 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x14u;
    if (COND_NE) { goto L_2519f0c; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[12]);
    c->r[4] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + (c->r[3] << 1);
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2519e54; }
    goto L_251a0b8;
L_2519f98:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x0u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 1);
    c->r[10] = c->r[0] - 0x2u;
    c->r[0] = (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
L_2519fe8:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[14];
    c->r[0] = c->r[6] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] - (c->r[0] << 1);
    c->r[1] = c->r[0];
    c->r[14] = 0x251a01cu; f_2842ecc(c);
    c->r[1] = 0x1u;
    c->r[14] = c->r[8];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] | (c->r[7] << 1);
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_LE) { goto L_251a090; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] - c->r[4];
    c->r[4] = 0x0u;
    c->r[2] = 0x0u - c->r[1];
    c->r[1] = c->r[14] + (c->r[2] << 1);
    c->r[2] = c->r[10] + (c->r[2] << 1);
L_251a054:;
    c->r[6] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[0] = c->r[0] - c->r[6] * c->r[6];
    c->r[6] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[0] = c->r[6];
    if (COND_GE) { c->r[0] = ~0x80000000u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { c->r[0] = c->r[6]; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[5] - (c->r[4] << 1); ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] - 0x2u;
    if (COND_NE) { goto L_251a054; }
L_251a090:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[1] + (c->r[3] << 1);
    c->r[14] = c->r[14] + c->r[0];
    c->r[10] = c->r[10] + c->r[0];
    (void)f_subs(c, c->r[7], c->r[12]);
    if (COND_NE) { goto L_2519fe8; }
L_251a0b8:;
    c->r[0] = 0x741e6cu;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] * c->r[12]; c->r[2] = r; }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x251a0d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[14] = 0x251a0dcu; f_2842ecc(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LE) { goto L_251a108; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    goto L_251a384;
L_251a108:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = 0x666u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = 0x80000000u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[1] = sdiv32(c->r[1], c->r[14]);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + (c->r[10] << 2);
    c->r[2] = (c->r[1] << 2);
    c->r[1] = 0x741e84u;
    { uint32_t ea = 0x251a14cu + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
L_251a14c:;
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    if (COND_LT) { goto L_251a34c; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = 0x0u;
    c->r[14] = c->r[6];
    c->r[9] = c->r[4];
L_251a170:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251a2f8; }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = 0x0u;
    c->r[6] = c->r[14];
    c->r[1] = c->r[9];
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[8]); }
L_251a19c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + c->r[2]; c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + c->r[2]; c->r[8] = v; }
    c->r[10] = f_subs(c, c->r[10], 0x1u);
    c->r[5] = c->r[8] + c->r[5];
    c->r[4] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_251a19c; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_251a274; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[1] = c->r[5];
    c->r[0] = ~0xe0000000u;
    c->r[10] = clz32(c->r[4]);
    if (COND_MI) { c->r[1] = 0x0u - c->r[5]; }
    c->r[8] = clz32(c->r[1]);
    c->r[3] = c->r[8] - 0x1u;
    c->r[3] = sh_lsl(c->r[5], c->r[3]);
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[5] = sdiv32(c->r[0], c->r[5]);
    c->r[0] = c->r[10] - 0x1u;
    c->r[7] = sh_lsl(c->r[4], c->r[0]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t r = c->r[6] * c->r[1]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (c->r[3] << 3);
    c->r[0] = sh_lsl(c->r[4], c->r[0]) - c->r[3];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[4] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = 0x1u - c->r[8];
    c->r[1] = c->r[10] + c->r[0];
    c->r[3] = c->r[1] + 0x1cu;
    (void)f_subs(c, c->r[3], 0xdu);
    if (COND_GT) { goto L_251a290; }
    c->r[5] = 0xeu - c->r[3];
    c->r[0] = 0x80000000u;
    c->r[1] = ~0x80000000u;
    c->r[0] = sh_asr(c->r[0], c->r[5]);
    c->r[3] = sh_lsr(c->r[1], c->r[5]);
    (void)f_subs(c, c->r[0], sh_lsr(c->r[1], c->r[5]));
    if (COND_LE) { goto L_251a2b0; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    c->r[1] = c->r[0];
    if (COND_GT) { goto L_251a2d4; }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_LT) { c->r[4] = c->r[3]; }
    goto L_251a2d0;
L_251a274:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_GT) { goto L_251a300; }
    goto L_251a338;
L_251a290:;
    c->r[0] = c->r[1] + 0xeu;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_LT) { c->r[1] = sh_asr(c->r[4], c->r[0]); }
    goto L_251a2d8;
L_251a2b0:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[4], c->r[3]);
    c->r[1] = c->r[3];
    if (COND_GT) { goto L_251a2d4; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { c->r[4] = c->r[0]; }
L_251a2d0:;
    c->r[1] = c->r[4];
L_251a2d4:;
    c->r[1] = sh_lsl(c->r[1], c->r[5]);
L_251a2d8:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x7fffu;
    c->r[4] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = c->r[3] - c->r[12] * c->r[0];
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[4] * c->r[3]; c->r[3] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
L_251a2f8:;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_LE) { goto L_251a338; }
L_251a300:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[0] + c->r[12];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    (void)f_subs(c, c->r[0], c->r[4]);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[8] = c->r[1]; }
    if (COND_LT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[0] = c->r[12]; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
L_251a338:;
    c->r[12] = c->r[12] + 0x1u;
    c->r[14] = c->r[14] + 0x14u;
    c->r[9] = c->r[9] + 0x14u;
    (void)f_subs(c, c->r[12], c->r[10]);
    if (COND_NE) { goto L_251a170; }
L_251a34c:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + 0x4u;
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_251a14c; }
L_251a384:;
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_251a410; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LE) { goto L_251a3d8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[0] + c->r[1];
L_251a3ac:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = c->r[0] + c->r[9]; c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[14];
    (void)f_subs(c, c->r[1], c->r[12]);
    c->r[2] = c->r[1];
    if (COND_LT) { c->r[2] = c->r[12]; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_GT) { c->r[2] = c->r[5]; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); c->r[3] = c->r[3] + 0x4u; }
    if (COND_NE) { goto L_251a3ac; }
    goto L_251a410;
L_251a3d8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[0] + c->r[1];
L_251a3e8:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = c->r[0] + c->r[9]; c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[14];
    (void)f_subs(c, c->r[1], c->r[5]);
    c->r[2] = c->r[1];
    if (COND_LT) { c->r[2] = c->r[5]; }
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_GT) { c->r[2] = c->r[12]; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); c->r[3] = c->r[3] + 0x4u; }
    if (COND_NE) { goto L_251a3e8; }
L_251a410:;
    c->r[0] = c->r[14] - c->r[5];
L_251a414:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_251974c;
}
void f_251a498(Cpu *restrict c) {
    FN_ENTER(0x251a498u);
L_251a498:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251a644; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    c->r[1] = c->r[2] + (c->r[4] << 1);
    c->r[1] = c->r[1] - 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)((int32_t)c->r[4] >> 1);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
L_251a4d8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = (c->r[5] << 1);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[4], 0x3u);
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->r[1] = (c->r[1] << 14);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[12] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[12]);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[3] = c->r[14] - c->r[1];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[8] = c->r[7] + (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[1] + c->r[3];
    if (COND_LT) { goto L_251a5ec; }
    c->r[9] = 0x2u;
    c->r[3] = 0x0u;
L_251a554:;
    c->r[1] = c->r[0] + (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = c->r[9] + 0x2u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[8]); }
    c->r[10] = c->r[5] - c->r[8];
    c->r[7] = (uint32_t)(uint16_t)(c->r[10]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[10] >> 16)) + (int32_t)c->r[14]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[10] = c->r[4];
    c->r[4] = c->r[2] + c->r[3];
    c->r[3] = c->r[3] + 0x4u;
    { uint32_t r = c->r[7] * c->r[12]; c->r[7] = r; }
    c->r[7] = c->r[6] + (uint32_t)((int32_t)c->r[7] >> 16);
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[14] - c->r[7];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    { uint32_t r = c->r[1] * c->r[12]; c->r[1] = r; }
    c->r[1] = c->r[5] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[5] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[5] * c->r[4]; c->r[5] = r; }
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[4] = (uint32_t)p; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[8]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[8] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    c->r[8] = c->r[1];
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[7] = c->r[4] + c->r[7];
    c->r[4] = c->r[10];
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_LT) { goto L_251a554; }
    goto L_251a5f0;
L_251a5ec:;
    c->r[1] = c->r[8];
L_251a5f0:;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[3] * c->r[1]; c->r[1] = r; }
    c->r[3] = 0x1u;
    c->r[1] = c->r[7] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] << 2);
    c->r[1] = c->r[3] - (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_251a4d8; }
L_251a644:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251a64c(Cpu *restrict c) {
    FN_ENTER(0x251a64cu);
L_251a64c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x7cu;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[2]); }
    c->r[1] = 0x1204u;
    c->r[5] = c->r[0];
    c->r[9] = c->r[3];
    c->r[14] = 0x2088u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[12] = v; }
    c->r[1] = 0x7418b8u;
    { uint32_t ea = 0x251a684u + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[1] & 0x3u;
    c->r[2] = c->r[2] + c->r[8];
    c->r[7] = c->r[2] + (c->r[12] << 2);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + c->r[14]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u - c->r[7];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] & 0x3u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[7] = c->r[7] + c->r[2];
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] + (c->r[12] << 2);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0x11fcu;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_251ab28; }
    c->r[6] = 0x0u;
    c->r[7] = 0x207cu;
    c->r[3] = (c->r[12] << 2);
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6] - (c->r[12] << 2);
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[7];
    c->r[7] = 0x2078u;
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[7] = 0x2074u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[7] = 0x1234u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[7] = 0x1260u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[7] = 0x2030u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    c->r[7] = 0x12bdu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + c->r[8];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x2080u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c30u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
L_251a774:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_251a794; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
L_251a794:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[7] + (c->r[6] << 2);
    { uint32_t ea = c->r[4] + 0x1acu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[6] << 5);
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[0] + 0x8cu;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x251a7ecu; f_28430ac(c);
    c->r[0] = 0x4000u - c->r[10];
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = 0x19au;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[12] = (uint32_t)p; }
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[12]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[1] = 0x1e4u;
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x3333u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x330000u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[3] = 0x0u - c->r[2];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t r = c->r[1] * c->r[5]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 13);
    c->r[1] = 0x8000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GT) { c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1); }
    c->r[0] = c->r[7] & (c->r[2] << 12);
    (void)f_subs(c, c->r[3], 0x8000u);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[0] = c->r[0] + 0x8000u;
    if (COND_GE) { c->r[1] = 0x7fffu; }
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[1] * c->r[3] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_251a8e0; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x1u;
L_251a8bc:;
    { uint32_t ea = c->r[4] - 4u; c->r[0] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t r = c->r[5] * c->r[2]; c->r[5] = r; }
    { uint32_t r = c->r[0] * c->r[1] + c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[14] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LT) { goto L_251a8bc; }
L_251a8e0:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[10] = 0x1ffu;
    c->r[1] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_251aadc; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[9] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[5]); }
    c->r[8] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LE) { goto L_251aa4c; }
    c->r[3] = (uint32_t)((int32_t)c->r[12] >> 2);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[3] | (c->r[12] << 15);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[3]); }
    c->r[7] = (uint32_t)((int32_t)c->r[6] >> 16);
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[7]); }
L_251a960:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[9] >> 0));
    c->r[12] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[5] = 0x8000u;
    { uint32_t r = c->r[4] * c->r[9]; c->r[4] = r; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t r = c->r[12] * c->r[7]; c->r[14] = r; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[14] >> 16);
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 16);
    { uint32_t r = c->r[12] * c->r[7]; c->r[4] = r; }
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[4] = v; }
    c->r[2] = c->r[4] - (c->r[2] << 2);
    c->r[4] = c->r[2] - (c->r[3] << 2);
    c->r[3] = 0x1u;
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 11);
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 1);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_GT) { c->r[5] = (uint32_t)((int32_t)c->r[3] >> 1); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x8000u);
    if (COND_GE) { c->r[5] = 0x7fffu; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[3] = c->r[1] + c->r[3];
    c->r[7] = c->r[3] + c->r[10];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[7] & 0x1ffu;
    c->r[7] = c->r[10] + (c->r[7] << 1);
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = v; }
    c->r[7] = 0x1feu;
    c->r[7] = c->r[3] + c->r[7];
    c->r[3] = c->r[3] & 0x1ffu;
    c->r[7] = c->r[7] & 0x1ffu;
    c->r[3] = c->r[10] + (c->r[3] << 1);
    c->r[7] = c->r[10] + (c->r[7] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    c->r[3] = 0x1ffu;
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[1] = c->r[1] & 0x1ffu;
    c->r[3] = c->r[10] + (c->r[1] << 1);
    c->r[10] = 0x1ffu;
    { uint32_t ea = c->r[3]; ST16(ea, c->r[5]); }
    c->r[3] = c->r[14] + c->r[7];
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[7] = 0x1u;
    c->r[3] = c->r[4] - c->r[3];
    c->r[3] = c->r[7] + (uint32_t)((int32_t)c->r[3] >> 8);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[3]); c->r[8] = c->r[8] + 0x4u; }
    if (COND_NE) { goto L_251a960; }
    goto L_251aadc;
L_251aa4c:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_251aa50:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 16) * (int32_t)(int16_t)(c->r[9] >> 0));
    c->r[5] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[1] = c->r[1] + c->r[10];
    { uint32_t r = c->r[4] * c->r[9]; c->r[4] = r; }
    c->r[1] = c->r[1] & 0x1ffu;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[12] = (uint32_t)p; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[7] = r; }
    { uint32_t r = c->r[5] * c->r[8]; c->r[5] = r; }
    c->r[6] = 0x8000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xffff0000u;
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[7] = c->r[12] + (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[12] = 0x1u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[8] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[14] = c->r[14] + 0x4u; c->r[5] = v; }
    c->r[7] = c->r[7] + (uint32_t)((int32_t)c->r[4] >> 16);
    c->r[2] = c->r[5] - (c->r[2] << 2);
    c->r[4] = c->r[2] - (c->r[7] << 2);
    c->r[7] = c->r[12] + (uint32_t)((int32_t)c->r[4] >> 11);
    c->r[5] = (uint32_t)((int32_t)c->r[7] >> 1);
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_GT) { c->r[6] = (uint32_t)((int32_t)c->r[7] >> 1); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], 0x8000u);
    c->r[5] = 0x1c30u;
    if (COND_GE) { c->r[6] = 0x7fffu; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[7] = c->r[7] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + c->r[5]; ST16(ea, c->r[6]); }
    c->r[7] = c->r[12] + (uint32_t)((int32_t)c->r[4] >> 8);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); c->r[3] = c->r[3] + 0x4u; }
    if (COND_NE) { goto L_251aa50; }
L_251aadc:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[1] = c->r[1] + (c->r[12] << 2);
    c->r[9] = c->r[9] + (c->r[12] << 1);
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { goto L_251a774; }
L_251ab28:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7413f0u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251ab4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251ab5c(Cpu *restrict c) {
    FN_ENTER(0x251ab5cu);
L_251ab5c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[0] = 0x12bdu;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_251abf0; }
    { uint32_t ea = c->r[4] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] - 0x600u;
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[14] = 0x251aba4u; f_2842c5c(c);
    c->r[1] = 0x11fcu;
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251abf8; }
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = 0x0u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
L_251abc4:;
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t ea = c->r[4] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_251abc4; }
    goto L_251abf8;
L_251abf0:;
    c->r[0] = 0x11fcu;
    c->r[8] = c->r[5] + c->r[0];
L_251abf8:;
    c->r[0] = 0x128cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[1] = 0x22beu;
    c->r[2] = 0x547bu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[14] = 0x251ac24u; f_2842e0c(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_251ae3c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1204u;
    c->r[12] = 0x8000u;
    c->r[3] = 0x0u;
    c->r[9] = 0x7fffu;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[14] = (uint32_t)((int32_t)c->r[1] >> 1);
L_251ac60:;
    c->r[0] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0x1f4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[7] * c->r[14]; c->r[0] = r; }
    (void)f_subs(c, c->r[6], 0x1u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[7] * c->r[2]; c->r[7] = r; }
    c->r[7] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 16);
    if (COND_LT) { goto L_251ac98; }
    if (COND_NE) { goto L_251acb0; }
    c->r[0] = c->r[7] & 0x1u;
    c->r[6] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    goto L_251acc0;
L_251ac98:;
    c->r[0] = 0x0u - c->r[6];
    c->r[1] = ~0x80000000u;
    c->r[6] = ~0x80000000u;
    (void)f_subs(c, c->r[7], sh_lsr(c->r[1], c->r[0]));
    if (COND_LT) { c->r[6] = sh_lsl(c->r[7], c->r[0]); }
    goto L_251acc0;
L_251acb0:;
    c->r[0] = c->r[6] - 0x1u;
    c->r[1] = 0x1u;
    c->r[0] = c->r[1] + sh_asr(c->r[7], c->r[0]);
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 1);
L_251acc0:;
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[0] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[6] << 32) + (int64_t)(int32_t)c->r[7] * (int32_t)c->r[7]) >> 32);
    c->r[10] = c->r[0];
    if (COND_GE) { c->r[10] = ~0x80000000u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { c->r[10] = c->r[0]; }
    c->r[0] = 0x7ffeu;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_GT) { goto L_251ad34; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[1] = (c->r[6] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x1u;
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] * c->r[7] + c->r[0]; c->r[7] = r; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_251ad50; }
    c->r[6] = clz32(c->r[7]);
    c->r[0] = 0x18u - c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251adc8; }
    if (COND_LT) { goto L_251adb8; }
    c->r[7] = sh_ror(c->r[7], c->r[0]);
    goto L_251adc8;
L_251ad34:;
    c->r[6] = clz32(c->r[10]);
    c->r[0] = 0x18u - c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251ad68; }
    if (COND_LT) { goto L_251ad58; }
    c->r[10] = sh_ror(c->r[10], c->r[0]);
    goto L_251ad68;
L_251ad50:;
    c->r[7] = 0x0u;
    goto L_251ae00;
L_251ad58:;
    c->r[1] = 0x0u - c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[0] = sh_lsr(c->r[10], c->r[0]);
    c->r[10] = c->r[0] | sh_lsl(c->r[10], c->r[1]);
L_251ad68:;
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = (c->r[6] >> 1);
    c->r[6] = c->r[10] & 0x7fu;
    c->r[7] = 0xd50000u;
    c->r[0] = 0x8000u;
    { uint32_t r = c->r[6] * c->r[7]; c->r[6] = r; }
    if (COND_EQ) { c->r[0] = 0xb486u; }
    c->r[5] = sh_lsr(c->r[0], c->r[1]);
    c->r[6] = (c->r[6] >> 16);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16));
    c->r[0] = c->r[7] + sh_lsr(c->r[0], c->r[1]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[6] * c->r[1]; c->r[1] = r; }
    c->r[6] = 0x10u;
    c->r[7] = c->r[0] + (c->r[1] >> 16);
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_GE) { c->r[7] = c->r[9]; }
    (void)f_subs(c, c->r[7], c->r[12]);
    if (COND_LE) { c->r[7] = c->r[12]; }
    goto L_251ae24;
L_251adb8:;
    c->r[1] = 0x0u - c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[0] = sh_lsr(c->r[7], c->r[0]);
    c->r[7] = c->r[0] | sh_lsl(c->r[7], c->r[1]);
L_251adc8:;
    c->r[7] = c->r[7] & 0x7fu;
    c->r[5] = 0xd50000u;
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = 0x8000u;
    c->r[1] = (c->r[6] >> 1);
    { uint32_t r = c->r[7] * c->r[5]; c->r[7] = r; }
    if (COND_EQ) { c->r[0] = 0xb486u; }
    c->r[6] = sh_lsr(c->r[0], c->r[1]);
    c->r[7] = (c->r[7] >> 16);
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16));
    c->r[0] = c->r[5] + sh_lsr(c->r[0], c->r[1]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    c->r[7] = c->r[0] + (c->r[1] >> 16);
L_251ae00:;
    c->r[0] = 0xffffu;
    c->r[6] = 0x8u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7f0000u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GE) { c->r[7] = c->r[0]; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xff800000u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LE) { c->r[7] = c->r[0]; }
L_251ae24:;
    c->r[0] = sh_lsl(c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + (c->r[3] << 2); ST32(ea, c->r[0]); }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { goto L_251ac60; }
L_251ae3c:;
    c->r[0] = c->r[4] + 0x214u;
    c->r[2] = (c->r[6] << 2);
    c->r[1] = c->r[4];
    c->r[14] = 0x251ae4cu; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1c20u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[4];
    c->r[5] = 0x0u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x224u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[2] - 0x980u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[14] = 0x251ae88u; f_2842f44(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_251aebc; }
    c->r[1] = 0x1288u;
    { uint32_t ea = c->r[4] + 0x1f0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 8);
    (void)f_subs(c, c->r[1], 0x81u);
    c->r[1] = 0x12beu;
    if (COND_LT) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[6] + c->r[1]; ST8(ea, c->r[5]); }
    goto L_251aec4;
L_251aebc:;
    c->r[1] = 0x12beu;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
L_251aec4:;
    c->r[1] = 0x122cu;
    c->r[2] = ~0x31u;
    c->r[3] = 0x3334u;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = ~0x3u;
    c->r[0] = c->r[2] & (c->r[0] << 1);
    c->r[2] = 0x741068u;
    { uint32_t ea = 0x251aeecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = (uint32_t)(int32_t)(int8_t)(c->r[5]);
    c->r[0] = c->r[0] + (c->r[2] << 1);
    c->r[2] = 0xcccdu;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[2] = 0x1e0u;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[1] = 0x4cdu;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x11ccu;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[3] = 0xfe67u;
    c->r[0] = c->r[0] - c->r[2];
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = 0x1e4u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[2] >> 16);
    c->r[2] = 0xfcceu;
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251af60(Cpu *restrict c) {
    FN_ENTER(0x251af60u);
L_251af60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_251afe4; }
    c->r[12] = 0x0u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251af8c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = 0x1u;
    c->r[5] = c->r[5] + c->r[2];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
L_251af8c:;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_251afe4; }
    c->r[5] = c->r[12] + 0x1u;
    c->r[4] = 0x8u;
    { uint32_t r = c->r[3] * c->r[5] + c->r[12]; c->r[5] = r; }
    c->r[4] = c->r[4] + (c->r[3] << 3);
    c->r[5] = c->r[0] + (c->r[5] << 2);
    c->r[14] = c->r[5] + 0x4u;
    c->r[5] = c->r[3] + 0x1u;
    { uint32_t r = c->r[12] * c->r[5]; c->r[5] = r; }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    c->r[5] = 0x0u;
L_251afbc:;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = c->r[12] + 0x2u;
    (void)f_subs(c, c->r[3], c->r[12]);
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[0] + c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[14] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + c->r[2];
    { uint32_t ea = c->r[14] + c->r[5]; ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] + c->r[4];
    if (COND_NE) { goto L_251afbc; }
L_251afe4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_251aff4(Cpu *restrict c) {
    FN_ENTER(0x251aff4u);
L_251aff4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x5cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x10u - c->r[1];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_251b048; }
    c->r[5] = 0x0u;
    c->r[6] = c->r[4];
    c->r[7] = c->r[0];
L_251b02c:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LE) { c->r[5] = c->r[1]; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_251b02c; }
L_251b048:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[4] * c->r[4]; c->r[1] = r; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + (c->r[1] << 2); c->r[1] = v; }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_GT) { c->r[6] = c->r[1]; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[6]);
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[5] = clz32(c->r[5]);
    c->r[5] = c->r[5] - 0x11u;
    (void)f_subs(c, c->r[14], c->r[5]);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 4);
    if (COND_LT) { c->r[5] = c->r[14]; }
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = clz32(c->r[1]);
    c->r[1] = c->r[1] - 0x5u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_GE) { c->r[5] = c->r[1]; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_GT) { c->r[12] = c->r[5]; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_251b240; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251b0c8; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = sh_lsl(c->r[1], c->r[12]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
L_251b0c8:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_251b10c; }
    c->r[5] = c->r[4] - c->r[1];
    c->r[1] = c->r[1] + 0x1u;
    c->r[6] = c->r[13] + 0x1cu;
    c->r[6] = c->r[6] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 1);
L_251b0e4:;
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x2u);
    c->r[1] = sh_lsl(c->r[1], c->r[12]);
    { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[1] = sh_lsl(c->r[1], c->r[12]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[6] = c->r[6] + 0x8u;
    if (COND_NE) { goto L_251b0e4; }
L_251b10c:;
    c->r[12] = c->r[14] - c->r[12];
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_251b244; }
    c->r[0] = 0x0u;
    c->r[5] = c->r[13] + 0x1cu;
    c->r[1] = 0x0u;
L_251b124:;
    c->r[6] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t r = c->r[6] * c->r[7]; c->r[7] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[7] >> 16);
    if (COND_NE) { goto L_251b124; }
    c->r[0] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[1] = sh_asr(c->r[3], c->r[0]) - c->r[1];
    if (COND_LT) { goto L_251b254; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[12]); }
    c->r[0] = 0x4u;
    c->r[14] = c->r[4] - 0x1u;
    c->r[10] = c->r[5] + 0x4u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    c->r[0] = 0x0u;
L_251b188:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[0] * c->r[4]; c->r[2] = r; }
    c->r[8] = c->r[0] + 0x1u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[4]);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    if (COND_GE) { goto L_251b1dc; }
    c->r[9] = 0x0u;
    c->r[6] = c->r[14];
    c->r[7] = c->r[10];
    c->r[2] = c->r[1];
L_251b1bc:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + 0x4u; c->r[12] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[4] >> 16)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t r = c->r[12] * c->r[4]; c->r[4] = r; }
    c->r[9] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 16);
    if (COND_NE) { goto L_251b1bc; }
L_251b1dc:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = c->r[14] - 0x1u;
    c->r[10] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[4]);
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 17);
    c->r[0] = (c->r[0] >> 1) & 0xffffu;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[9]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[2] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[8];
    if (COND_NE) { goto L_251b188; }
    { uint32_t ea = c->r[13] + 4u; c->r[0] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_251b258;
L_251b240:;
    c->r[12] = c->r[14] - c->r[12];
L_251b244:;
    c->r[0] = c->r[12] + 0x1u;
    c->r[2] = 0x0u;
    c->r[1] = sh_asr(c->r[3], c->r[0]);
    goto L_251b258;
L_251b254:;
    c->r[2] = 0x0u;
L_251b258:;
    c->r[1] = c->r[1] + sh_lsl(c->r[2], c->r[12]);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251b280; }
    c->r[2] = c->r[12] + 0x2u;
    c->r[3] = ~0x80000000u;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    (void)f_subs(c, c->r[1], sh_lsr(c->r[3], c->r[2]));
    if (COND_GT) { c->r[0] = ~0xc0000000u; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_251b280:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251b28c(Cpu *restrict c) {
    FN_ENTER(0x251b28cu);
L_251b28c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x2cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[3];
    c->r[7] = c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x740c7cu;
    { uint32_t ea = 0x251b2c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] & 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_251b3a4; }
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0x4u;
L_251b31c:;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x251b340u; f_2842c2c(c);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[11] - 0x20u;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[3] = c->r[5];
    c->r[14] = 0x251b35cu; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[3] = c->r[5];
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[10] - 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x251b37cu; f_2842c38(c);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x8u;
    c->r[6] = c->r[6] + 0x20u;
    c->r[8] = f_subs(c, c->r[8], 0x1u);
    c->r[0] = 0x0u - c->r[0];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[10] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + c->r[0];
    if (COND_NE) { goto L_251b31c; }
L_251b3a4:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251b40c; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_251b3bc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[14] = clz32(c->r[1]);
    c->r[3] = c->r[14] - 0x1u;
    c->r[1] = sh_lsl(c->r[1], c->r[3]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[3] = v; }
    c->r[7] = clz32(c->r[3]);
    c->r[7] = c->r[7] - 0x1u;
    c->r[3] = sh_lsl(c->r[3], c->r[7]);
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[3]) >> 32);
    { uint64_t r = (uint64_t)c->r[3] * c->r[1]; c->r[6] = (uint32_t)r; c->r[12] = (uint32_t)(r >> 32); }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 31);
    { uint32_t r = c->r[3] * c->r[1] + c->r[12]; c->r[1] = r; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); c->r[5] = c->r[5] + 0x4u; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[14] + c->r[1];
    c->r[1] = c->r[1] + (c->r[7] << 1);
    c->r[1] = c->r[1] - 0x41u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); c->r[4] = c->r[4] + 0x4u; }
    if (COND_NE) { goto L_251b3bc; }
L_251b40c:;
    c->r[0] = 0x740b20u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251b41cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251b42c(Cpu *restrict c) {
    FN_ENTER(0x251b42cu);
L_251b42c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x9cu;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_251b664; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_251b68c; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_251b4c0; }
    c->r[6] = 0x1u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251b478; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
L_251b478:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_251b4c0; }
    c->r[3] = c->r[13] + 0x14u;
    c->r[1] = c->r[1] + (c->r[6] << 2);
    c->r[7] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + (c->r[6] << 3);
    c->r[7] = c->r[7] - c->r[6];
    c->r[1] = c->r[1] + 0x4u;
L_251b498:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x2u);
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[3] + 0x10u;
    if (COND_NE) { goto L_251b498; }
L_251b4c0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251b68c; }
    c->r[1] = c->r[13] + 0x14u;
    c->r[9] = 0x0u;
    c->r[14] = c->r[2];
    c->r[1] = c->r[1] + 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_251b4e0:;
    c->r[3] = c->r[9];
    c->r[1] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[6] ^ (uint32_t)((int32_t)c->r[6] >> 31);
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[6] >> 31);
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_GE) { goto L_251b678; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[1] = c->r[8];
    c->r[0] = ~0xe0000000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u - c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    if (COND_MI) { c->r[1] = 0x0u - c->r[8]; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[7] = clz32(c->r[1]);
    if (COND_MI) { c->r[6] = c->r[3]; }
    c->r[1] = c->r[7] - 0x1u;
    c->r[10] = clz32(c->r[6]);
    c->r[5] = sh_lsl(c->r[8], c->r[1]);
    c->r[4] = c->r[10] - 0x1u;
    c->r[1] = (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[9] = sh_lsl(c->r[3], c->r[4]);
    c->r[1] = sdiv32(c->r[0], c->r[1]);
    c->r[12] = (uint32_t)(uint16_t)(c->r[9]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t r = c->r[2] * c->r[12]; c->r[0] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[9] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[6] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->r[6] = (c->r[6] << 3);
    c->r[3] = sh_lsl(c->r[3], c->r[4]) - c->r[6];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[5] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[0] = 0x1u - c->r[7];
    c->r[1] = c->r[10] + c->r[0];
    c->r[3] = c->r[1] + 0x1cu;
    (void)f_subs(c, c->r[3], 0x1eu);
    if (COND_GT) { goto L_251b5c4; }
    c->r[6] = 0x1fu - c->r[3];
    c->r[1] = 0x80000000u;
    c->r[0] = ~0x80000000u;
    c->r[3] = sh_asr(c->r[1], c->r[6]);
    c->r[4] = sh_lsr(c->r[0], c->r[6]);
    (void)f_subs(c, c->r[3], sh_lsr(c->r[0], c->r[6]));
    if (COND_LE) { goto L_251b5dc; }
    { uint32_t ea = c->r[13] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[9] = LD32(ea + 12u); }
    (void)f_subs(c, c->r[5], c->r[3]);
    c->r[1] = c->r[3];
    if (COND_GT) { goto L_251b5f8; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_LT) { c->r[5] = c->r[4]; }
    goto L_251b5f4;
L_251b5c4:;
    c->r[0] = c->r[1] - 0x3u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x20u);
    if (COND_LT) { c->r[6] = sh_asr(c->r[5], c->r[0]); }
    { uint32_t ea = c->r[13] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[9] = LD32(ea + 12u); }
    goto L_251b5fc;
L_251b5dc:;
    { uint32_t ea = c->r[13] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[9] = LD32(ea + 12u); }
    (void)f_subs(c, c->r[5], c->r[4]);
    c->r[1] = c->r[4];
    if (COND_GT) { goto L_251b5f8; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_LT) { c->r[5] = c->r[3]; }
L_251b5f4:;
    c->r[1] = c->r[5];
L_251b5f8:;
    c->r[6] = sh_lsl(c->r[1], c->r[6]);
L_251b5fc:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[6] >> 14);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[1]); }
    if (COND_GE) { goto L_251b654; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = (c->r[7] << 1);
    c->r[1] = 0x1u;
    goto L_251b62c;
L_251b624:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = c->r[4] + 0x8u; c->r[8] = v; }
    c->r[1] = c->r[1] + 0x1u;
L_251b62c:;
    c->r[5] = c->r[4] + (c->r[12] << 2);
    c->r[7] = (c->r[8] << 1);
    (void)f_subs(c, c->r[14], c->r[1]);
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[3] << 32) + (int64_t)(int32_t)c->r[7] * (int32_t)c->r[6]) >> 32);
    c->r[3] = (c->r[3] << 1);
    c->r[3] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[8] << 32) + (int64_t)(int32_t)c->r[3] * (int32_t)c->r[6]) >> 32);
    { uint32_t ea = c->r[5] - 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] - 0x8u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_251b624; }
L_251b654:;
    c->r[14] = c->r[14] - 0x1u;
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_LT) { goto L_251b4e0; }
    goto L_251b68c;
L_251b664:;
    c->r[1] = (c->r[2] << 2);
    c->r[14] = 0x251b66cu; f_283abec(c);
    c->r[0] = 0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_251b678:;
    c->r[1] = 0xfd71u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GT) { c->r[1] = 0x28fu; }
    if (COND_GT) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[1]); }
L_251b68c:;
    (void)f_subs(c, c->r[9], c->r[2]);
    if (COND_GE) { goto L_251b6a4; }
    c->r[1] = c->r[2] - c->r[9];
    c->r[0] = c->r[0] + (c->r[9] << 2);
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x251b6a4u; f_283abec(c);
L_251b6a4:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251b6b8(Cpu *restrict c) {
    FN_ENTER(0x251b6b8u);
L_251b6b8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x94u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[12] = c->r[2];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = clz32(c->r[7]);
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_HI) { goto L_251b76c; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_251b98c; }
    c->r[3] = (uint32_t)((int32_t)c->r[7] >> 1);
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_251b880; }
    c->r[6] = 0x1u;
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251b718; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x2u;
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
L_251b718:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_251b880; }
    c->r[3] = c->r[13] + 0xcu;
    c->r[1] = c->r[1] + (c->r[6] << 2);
    c->r[7] = c->r[12] + 0x1u;
    c->r[3] = c->r[3] + (c->r[6] << 3);
    c->r[7] = c->r[7] - c->r[6];
    c->r[1] = c->r[1] + 0x4u;
L_251b738:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x2u);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x8u;
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[3] + 0x10u;
    if (COND_NE) { goto L_251b738; }
    goto L_251b880;
L_251b76c:;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_251b7f0; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_251b98c; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_251b880; }
    c->r[6] = 0x1u;
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251b7a4; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
L_251b7a4:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_251b880; }
    c->r[3] = c->r[13] + 0xcu;
    c->r[1] = c->r[1] + (c->r[6] << 2);
    c->r[7] = c->r[12] + 0x1u;
    c->r[3] = c->r[3] + (c->r[6] << 3);
    c->r[7] = c->r[7] - c->r[6];
    c->r[1] = c->r[1] + 0x4u;
L_251b7c4:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x2u);
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[3] + 0x10u;
    if (COND_NE) { goto L_251b7c4; }
    goto L_251b880;
L_251b7f0:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_251b9c4; }
    c->r[3] = c->r[3] - 0x2u;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[7] = sh_lsl(c->r[7], c->r[3]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_251b880; }
    c->r[5] = 0x1u;
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251b830; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x2u;
    c->r[7] = sh_lsl(c->r[7], c->r[3]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
L_251b830:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_251b880; }
    c->r[7] = c->r[13] + 0xcu;
    c->r[1] = c->r[1] + (c->r[5] << 2);
    c->r[6] = c->r[12] + 0x1u;
    c->r[7] = c->r[7] + (c->r[5] << 3);
    c->r[6] = c->r[6] - c->r[5];
    c->r[1] = c->r[1] + 0x4u;
L_251b850:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x2u);
    c->r[5] = sh_lsl(c->r[5], c->r[3]);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + 0x8u;
    c->r[5] = sh_lsl(c->r[5], c->r[3]);
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[5]); }
    c->r[7] = c->r[7] + 0x10u;
    if (COND_NE) { goto L_251b850; }
L_251b880:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_251b98c; }
    c->r[0] = c->r[13] + 0xcu;
    c->r[10] = 0x0u;
    c->r[9] = c->r[12];
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x8000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_251b8ac:;
    c->r[1] = c->r[10];
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + (c->r[10] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[3] ^ (uint32_t)((int32_t)c->r[3] >> 31);
    c->r[4] = c->r[4] - (uint32_t)((int32_t)c->r[3] >> 31);
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_GE) { goto L_251b99c; }
    c->r[4] = (uint32_t)((int32_t)c->r[6] >> 15);
    c->r[0] = 0x8000u;
    c->r[2] = c->r[12];
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[4] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    if (COND_GT) { c->r[4] = (uint32_t)((int32_t)c->r[6] >> 15); }
    c->r[4] = sdiv32(c->r[3], c->r[4]);
    c->r[3] = 0x0u - c->r[4];
    (void)f_adds(c, c->r[3], 0x8000u);
    if (COND_LE) { c->r[3] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[3] = 0x7fffu; }
    (void)f_subs(c, c->r[1], c->r[12]);
    c->r[4] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[3]); }
    if (COND_GE) { goto L_251b978; }
    c->r[7] = (c->r[1] << 1);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[4] = 0x1u;
    goto L_251b938;
L_251b930:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x8u; c->r[6] = v; }
    c->r[4] = c->r[4] + 0x1u;
L_251b938:;
    c->r[12] = c->r[1] + (c->r[7] << 2);
    c->r[14] = (c->r[6] << 1);
    (void)f_subs(c, c->r[9], c->r[4]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[14]);
    { uint32_t ea = c->r[12] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] * c->r[3]; c->r[5] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[14] >> 16)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[8] = (uint32_t)p; }
    c->r[0] = (c->r[0] << 1);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[5] = c->r[8] + (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[0] = c->r[6] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[12] - 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] - 0x8u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_251b930; }
L_251b978:;
    c->r[12] = c->r[2];
    c->r[9] = c->r[9] - 0x1u;
    (void)f_subs(c, c->r[10], c->r[12]);
    if (COND_LT) { goto L_251b8ac; }
    goto L_251b9c8;
L_251b98c:;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[10], c->r[12]);
    if (COND_LT) { goto L_251b9d0; }
    goto L_251b9e4;
L_251b99c:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x7eb8u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GT) { c->r[7] = 0x8148u; }
    if (COND_GT) { c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u; }
    c->r[1] = c->r[0] + (c->r[1] << 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[7]); }
    (void)f_subs(c, c->r[10], c->r[12]);
    if (COND_LT) { goto L_251b9d0; }
    goto L_251b9e4;
L_251b9c4:;
    c->r[10] = 0x0u;
L_251b9c8:;
    (void)f_subs(c, c->r[10], c->r[12]);
    if (COND_GE) { goto L_251b9e4; }
L_251b9d0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12] - c->r[10];
    c->r[1] = (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[10] << 1);
    c->r[14] = 0x251b9e4u; f_283aad8(c);
L_251b9e4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LE) { c->r[0] = 0x1u; }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251b9f8(Cpu *restrict c) {
    FN_ENTER(0x251b9f8u);
L_251b9f8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x170u;
    c->r[10] = c->r[1];
    c->r[1] = 0x740520u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[9] = (c->r[10] << 2);
    { uint32_t ea = 0x251ba1cu + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u - c->r[6];
    c->r[4] = c->r[1] & 0x3u;
    c->r[1] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[9] * c->r[10] + c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + (c->r[1] << 2); c->r[1] = v; }
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[7] + c->r[1];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_251ba60; }
    c->r[1] = c->r[7] & c->r[1];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[5] = 0x80000000u; }
    goto L_251ba6c;
L_251ba60:;
    c->r[1] = c->r[7] | c->r[1];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[5] = ~0x80000000u; }
L_251ba6c:;
    c->r[1] = 0x53e3u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[7] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[5] * (int32_t)c->r[1]) >> 32);
    (void)f_subs(c, c->r[7], 0x200u);
    if (COND_LE) { c->r[7] = 0x200u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LE) { goto L_251c078; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[8] = 0x1u;
    c->r[14] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[2] + (c->r[10] << 3);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + c->r[4];
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] - 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] & 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_251bb08:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    goto L_251bba4;
L_251bb30:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[1] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t r = c->r[1] * c->r[7]; c->r[2] = r; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[6] * c->r[4]; c->r[6] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[6]) >> 32);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[2] >> 4);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); c->r[5] = c->r[5] + c->r[9]; }
    if (COND_NE) { goto L_251bb30; }
L_251bb60:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[0] + c->r[9];
    c->r[3] = c->r[3] + c->r[9];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
L_251bba4:;
    { uint32_t r = c->r[2] * c->r[10]; c->r[0] = r; }
    c->r[1] = c->r[11] - 0xa0u;
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_251bc18; }
    c->r[0] = 0x0u;
    c->r[7] = c->r[3];
    c->r[9] = 0x0u;
L_251bbc8:;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[4] = v; }
    c->r[12] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    { uint32_t r = c->r[3] * c->r[12]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[5] >> 16)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[12] = (uint32_t)p; }
    c->r[6] = c->r[8] + (uint32_t)((int32_t)c->r[4] >> 15);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t r = c->r[6] * c->r[5] + c->r[12]; c->r[5] = r; }
    { uint32_t r = c->r[5] * c->r[6] + c->r[9]; c->r[6] = r; }
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] + 0x1u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[9] = c->r[6] + (uint32_t)((int32_t)c->r[3] >> 16);
    if (COND_NE) { goto L_251bbc8; }
    goto L_251bc1c;
L_251bc18:;
    c->r[9] = 0x0u;
L_251bc1c:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[9];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_251be5c; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[0];
    c->r[1] = c->r[11] - 0xa0u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_MI) { c->r[3] = 0x0u - c->r[0]; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[0]); }
    c->r[1] = ~0xe0000000u;
    c->r[4] = clz32(c->r[3]);
    c->r[3] = c->r[4] - 0x1u;
    c->r[3] = sh_lsl(c->r[0], c->r[3]);
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[6] = sdiv32(c->r[1], c->r[6]);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[3] >> 16));
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t r = c->r[7] * c->r[5]; c->r[5] = r; }
    c->r[3] = 0x20000000u - c->r[3];
    c->r[3] = c->r[3] - (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[5] = c->r[8] + (uint32_t)((int32_t)c->r[6] >> 15);
    c->r[3] = (c->r[3] << 3);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 1);
    { uint32_t r = c->r[3] * c->r[5]; c->r[5] = r; }
    c->r[5] = c->r[5] + (c->r[6] << 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[6] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[3] = c->r[5] + (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[5] = 0x1au - c->r[4];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { goto L_251bcc4; }
    (void)f_subs(c, c->r[5], 0x20u);
    c->r[4] = 0x0u;
    if (COND_LT) { c->r[4] = sh_asr(c->r[3], c->r[5]); }
    goto L_251bd1c;
L_251bcc4:;
    c->r[4] = 0x3eu - c->r[4];
    c->r[5] = 0x80000000u;
    c->r[1] = ~0x80000000u;
    c->r[4] = 0x24u - c->r[4];
    c->r[7] = sh_asr(c->r[5], c->r[4]);
    c->r[9] = sh_lsr(c->r[1], c->r[4]);
    (void)f_subs(c, c->r[7], sh_lsr(c->r[1], c->r[4]));
    if (COND_LE) { goto L_251bcfc; }
    (void)f_subs(c, c->r[3], c->r[7]);
    c->r[5] = c->r[7];
    if (COND_GT) { goto L_251bd14; }
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_LT) { c->r[3] = c->r[9]; }
    goto L_251bd10;
L_251bcfc:;
    (void)f_subs(c, c->r[3], c->r[9]);
    c->r[5] = c->r[9];
    if (COND_GT) { goto L_251bd14; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_LT) { c->r[3] = c->r[7]; }
L_251bd10:;
    c->r[5] = c->r[3];
L_251bd14:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = sh_lsl(c->r[5], c->r[4]);
L_251bd1c:;
    c->r[3] = (c->r[4] << 4);
    c->r[6] = (c->r[4] << 20);
    c->r[10] = 0x1000000u;
    c->r[1] = c->r[13] + 0x6cu;
    c->r[3] = c->r[8] + (uint32_t)((int32_t)c->r[3] >> 15);
    c->r[7] = (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[4]); }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t r = c->r[3] * c->r[0]; c->r[5] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 16) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[7] * c->r[0]; c->r[0] = r; }
    c->r[0] = c->r[10] - (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = c->r[0] - c->r[5];
    { uint32_t r = c->r[0] * c->r[3]; c->r[3] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[0] = c->r[1] + (c->r[2] << 3);
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_GE) { goto L_251bf08; }
    c->r[0] = c->r[8] + (uint32_t)((int32_t)c->r[4] >> 15);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LE) { goto L_251bb30; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
L_251bdcc:;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
L_251bdd4:;
    { uint32_t ea = c->r[14] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[9] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[0] = c->r[8] + (uint32_t)((int32_t)c->r[0] >> 15);
    { uint32_t r = c->r[9] * c->r[1]; c->r[1] = r; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = c->r[5] + (uint32_t)((int32_t)c->r[1] >> 16);
    { uint32_t r = c->r[0] * c->r[6] + c->r[1]; c->r[5] = r; }
    if (COND_NE) { goto L_251bdd4; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[12] * c->r[6] + c->r[2]; c->r[0] = r; }
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[12], c->r[6]);
    c->r[1] = c->r[1] - c->r[5];
    { uint32_t r = c->r[1] * c->r[7]; c->r[3] = r; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t r = c->r[5] * c->r[4]; c->r[5] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[5]) >> 32);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 4);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[10] = c->r[10] + c->r[9];
    if (COND_NE) { goto L_251bdcc; }
    goto L_251bb60;
L_251be5c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10000u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    c->r[2] = c->r[2] + (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_251bea0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_251bea0:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_EQ) { goto L_251bef4; }
    c->r[2] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[10] - c->r[7];
    c->r[5] = 0x0u;
    { uint32_t r = c->r[10] * c->r[2] + c->r[7]; c->r[2] = r; }
    c->r[2] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[1] + (c->r[7] << 2);
L_251bed0:;
    { uint32_t ea = c->r[7] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[7] + c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[2] + c->r[5]; ST32(ea, c->r[6]); }
    c->r[5] = c->r[5] + c->r[4];
    if (COND_NE) { goto L_251bed0; }
L_251bef4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_251bb08; }
L_251bf08:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x0u;
    c->r[12] = 0x1u;
L_251bf14:;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[7] = 0x0u;
    if (COND_LT) { goto L_251bf60; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
    c->r[4] = 0x0u;
L_251bf2c:;
    { uint32_t ea = c->r[14] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = c->r[3] + 0x4u; c->r[6] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[5] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[6] >> 16)) + (int32_t)c->r[7]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[1] = c->r[12] + (uint32_t)((int32_t)c->r[1] >> 15);
    { uint32_t r = c->r[5] * c->r[2]; c->r[2] = r; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[2] = c->r[7] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t r = c->r[1] * c->r[6] + c->r[2]; c->r[7] = r; }
    if (COND_NE) { goto L_251bf2c; }
L_251bf60:;
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[7];
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    c->r[1] = c->r[1] + c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_251bf14; }
    c->r[0] = c->r[13] + 0x6cu;
    c->r[2] = 0x1u;
    c->r[3] = c->r[10];
    c->r[0] = c->r[0] + 0x4u;
L_251bf94:;
    { uint32_t ea = c->r[0] - 4u; c->r[1] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[0] = c->r[0] + 0x8u;
    c->r[6] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[4] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[7] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[5] * (int32_t)c->r[7]) >> 32);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[6] = (uint32_t)p; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t r = c->r[4] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[6] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = c->r[7] + (uint32_t)((int32_t)c->r[1] >> 4);
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); c->r[14] = c->r[14] + 0x4u; }
    if (COND_NE) { goto L_251bf94; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[8] = c->r[10] - 0x1u;
    c->r[9] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = c->r[8];
    c->r[14] = c->r[0] + (c->r[10] << 16);
L_251bff4:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[8], c->r[6]);
    if (COND_LE) { goto L_251c058; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = c->r[8];
    c->r[10] = c->r[0] + (c->r[6] << 2);
    c->r[0] = c->r[14];
L_251c014:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[12] >> 0));
    c->r[0] = c->r[0] - 0x10000u;
    { uint32_t ea = c->r[10] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[3] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[7] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[3] = c->r[9] + (uint32_t)((int32_t)c->r[4] >> 15);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[2] = c->r[5] + (uint32_t)((int32_t)c->r[2] >> 16);
    { uint32_t r = c->r[3] * c->r[7] + c->r[2]; c->r[5] = r; }
    if (COND_GT) { goto L_251c014; }
L_251c058:;
    c->r[0] = c->r[11] - 0x60u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[5];
    { uint32_t ea = c->r[4] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] - 0x1u;
    c->r[6] = c->r[0];
    if (COND_GT) { goto L_251bff4; }
L_251c078:;
    c->r[0] = 0x73feb4u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251c088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251c098(Cpu *restrict c) {
    FN_ENTER(0x251c098u);
L_251c098:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[12] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[14] = (uint32_t)((int32_t)c->r[2] >> 16);
L_251c0b0:;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[2] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    { uint32_t r = c->r[2] * c->r[12]; c->r[4] = r; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[2] = c->r[2] + (c->r[4] >> 16);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); c->r[0] = c->r[0] + 0x2u; }
    if (COND_NE) { goto L_251c0b0; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251c0d0(Cpu *restrict c) {
    FN_ENTER(0x251c0d0u);
L_251c0d0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251c144; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251c0fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[1]); c->r[3] = (uint32_t)r; c->r[12] = (uint32_t)(r >> 32); }
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] | (c->r[12] << 24);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
L_251c0fc:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { return; }
    c->r[0] = c->r[0] + (c->r[3] << 2);
    c->r[2] = c->r[2] - c->r[3];
    c->r[0] = c->r[0] + 0x4u;
L_251c110:;
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[1]); c->r[3] = (uint32_t)r; c->r[12] = (uint32_t)(r >> 32); }
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] | (c->r[12] << 24);
    { uint32_t ea = c->r[0] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[1]); c->r[3] = (uint32_t)r; c->r[12] = (uint32_t)(r >> 32); }
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] | (c->r[12] << 24);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x8u;
    if (COND_NE) { goto L_251c110; }
L_251c144:;
    return;
}
void f_251c148(Cpu *restrict c) {
    FN_ENTER(0x251c148u);
L_251c148:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[14] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
L_251c160:;
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = c->r[14] + 0x2u; c->r[12] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[12] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    if (COND_NE) { goto L_251c160; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_251c178(Cpu *restrict c) {
    FN_ENTER(0x251c178u);
L_251c178:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[12] = c->r[0];
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251c1b4; }
L_251c194:;
    { uint32_t ea = c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = c->r[12] + 0x2u; c->r[14] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = c->r[1] + 0x2u; c->r[4] = v; }
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[14] = (uint32_t)((int32_t)c->r[4] >> 31);
    c->r[0] = f_adds(c, c->r[4], c->r[0]);
    c->r[3] = c->r[14] + c->r[3] + c->cf;
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_251c194; }
L_251c1b4:;
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251c1bc(Cpu *restrict c) {
    FN_ENTER(0x251c1bcu);
L_251c1bc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xecu;
    c->r[8] = c->r[11] - 0x68u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x44u;
    c->r[5] = c->r[3];
    c->r[4] = c->r[2];
    c->r[0] = c->r[8];
    c->r[14] = 0x251c1e8u; f_283ab44(c);
    c->r[0] = c->r[13] + 0x18u;
    c->r[1] = 0x88u;
    c->r[14] = 0x251c1f4u; f_283ab44(c);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_251c36c; }
    c->r[0] = c->r[13] + 0x18u;
    (void)f_subs(c, c->r[12], 0x1u);
    c->r[6] = c->r[0] + (c->r[12] << 3);
    if (COND_LT) { goto L_251c334; }
    c->r[14] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
L_251c228:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + (c->r[1] << 1);
    c->r[2] = c->r[13] + 0x18u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 14);
L_251c240:;
    c->r[9] = c->r[8] + (c->r[7] << 2);
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + (c->r[7] << 2); ST32(ea, c->r[1]); }
    c->r[7] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[12] * (int32_t)c->r[1]); c->r[0] = (uint32_t)r; c->r[6] = (uint32_t)(r >> 32); }
    c->r[12] = c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 18);
    c->r[0] = c->r[0] | (c->r[6] << 14);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 18);
    c->r[0] = f_adds(c, c->r[0], c->r[4]);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + c->r[3] + c->cf;
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] - c->r[1];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[14] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] * c->r[14]; c->r[0] = r; }
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]); c->r[1] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[0] = c->r[5] - c->r[0];
    c->r[1] = (c->r[1] >> 18);
    c->r[1] = c->r[1] | (c->r[3] << 14);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 18);
    c->r[1] = f_adds(c, c->r[1], c->r[6]);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + c->r[4] + c->cf;
    (void)f_subs(c, c->r[7], c->r[12]);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[1]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[14] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[10]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = c->r[2] + 0x10u;
    { uint32_t r = c->r[0] * c->r[14]; c->r[0] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 16);
    if (COND_LT) { goto L_251c240; }
    { uint32_t ea = c->r[8] + (c->r[12] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[5] * (int32_t)c->r[1]); c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[0] >> 18);
    c->r[0] = c->r[0] | (c->r[1] << 14);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 18);
    c->r[0] = f_adds(c, c->r[0], c->r[2]);
    c->r[1] = c->r[1] + c->r[3] + c->cf;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_251c228; }
    goto L_251c36c;
L_251c334:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
L_251c338:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = c->r[4] + 0x2u; c->r[0] = v; }
    c->r[0] = (c->r[0] << 14);
    { uint32_t ea = c->r[8] + (c->r[12] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint64_t r = (uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]); c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[0] >> 18);
    c->r[0] = c->r[0] | (c->r[1] << 14);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 18);
    c->r[2] = f_adds(c, c->r[0], c->r[2]);
    c->r[3] = c->r[1] + c->r[3] + c->cf;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_251c338; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
L_251c36c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 4u; c->r[2] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[1] = clz32(c->r[7]); }
    if (COND_EQ) { c->r[0] = clz32(c->r[3]); }
    if (COND_EQ) { c->r[1] = c->r[0] + 0x20u; }
    c->r[0] = c->r[1] - 0x23u;
    (void)f_adds(c, c->r[0], 0x16u);
    c->r[1] = c->r[0];
    if (COND_LE) { c->r[1] = ~0x15u; }
    (void)f_subs(c, c->r[0], 0x14u);
    c->r[0] = ~0x9u;
    if (COND_GT) { c->r[1] = 0x14u; }
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_251c454; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_251c524; }
    c->r[2] = c->r[1] - 0x20u;
    c->r[0] = sh_lsl(c->r[3], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_251c524; }
    c->r[6] = 0x1u;
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251c3fc; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[6] = 0x2u;
    c->r[0] = sh_lsl(c->r[0], c->r[1]);
    if (COND_GE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_251c3fc:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_251c524; }
    c->r[0] = c->r[6] + 0x1u;
    c->r[3] = c->r[13] + 0x18u;
    c->r[3] = c->r[3] + (c->r[0] << 3);
    c->r[7] = c->r[5] + (c->r[0] << 2);
    c->r[0] = c->r[12] + 0x1u;
    c->r[0] = c->r[0] - c->r[6];
L_251c41c:;
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[6] = sh_lsl(c->r[6], c->r[1]);
    if (COND_GE) { c->r[6] = 0x0u; }
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + 0x10u;
    c->r[6] = sh_lsl(c->r[6], c->r[1]);
    if (COND_GE) { c->r[6] = 0x0u; }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = c->r[7] + 0x8u;
    if (COND_NE) { goto L_251c41c; }
    goto L_251c524;
L_251c454:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_251c524; }
    c->r[2] = 0x0u - c->r[1];
    c->r[6] = ~0x1fu;
    c->r[0] = sh_lsr(c->r[3], c->r[2]);
    c->r[3] = 0x20u - c->r[2];
    c->r[1] = c->r[6] - c->r[1];
    c->r[0] = c->r[0] | sh_lsl(c->r[7], c->r[3]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { c->r[0] = sh_asr(c->r[7], c->r[1]); }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_251c524; }
    c->r[6] = 0x1u;
    { uint32_t r = c->r[12] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251c4b8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[2] - 0x20u;
    c->r[6] = 0x2u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[3]);
    if (COND_GE) { c->r[0] = sh_asr(c->r[1], c->r[7]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_251c4b8:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_251c524; }
    c->r[0] = c->r[6] + 0x1u;
    c->r[1] = c->r[13] + 0x18u;
    c->r[1] = c->r[1] + (c->r[0] << 3);
    c->r[7] = c->r[5] + (c->r[0] << 2);
    c->r[0] = c->r[12] + 0x1u;
    c->r[0] = c->r[0] - c->r[6];
    c->r[6] = c->r[2] - 0x20u;
L_251c4dc:;
    { uint32_t ea = c->r[1] - 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[5] = sh_lsr(c->r[5], c->r[2]);
    c->r[5] = c->r[5] | sh_lsl(c->r[4], c->r[3]);
    if (COND_GE) { c->r[5] = sh_asr(c->r[4], c->r[6]); }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[5] = sh_lsr(c->r[5], c->r[2]);
    c->r[5] = c->r[5] | sh_lsl(c->r[4], c->r[3]);
    if (COND_GE) { c->r[5] = sh_asr(c->r[4], c->r[6]); }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    c->r[7] = c->r[7] + 0x8u;
    if (COND_NE) { goto L_251c4dc; }
L_251c524:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251c530(Cpu *restrict c) {
    FN_ENTER(0x251c530u);
L_251c530:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_251c894; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_LT) { goto L_251c894; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251c5c0; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = 0x40000000u;
    c->v.s[2] = 0xc0000000u;
L_251c584:;
    c->v.s[4] = LD32(c->r[3]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[6] = COND_GT ? c->v.s[0] : c->v.s[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    c->v.s[6] = COND_GT ? c->v.s[2] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    c->v.s[8] = COND_GT ? c->v.s[6] : c->v.s[4];
    vfp_mrs_flags(c);
    c->v.s[4] = COND_GT ? c->v.s[6] : c->v.s[8];
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    ST32(c->r[3], c->v.s[4]);
    c->r[3] = c->r[3] + 0x4u;
    if (COND_NE) { goto L_251c584; }
L_251c5c0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = 0x0u;
    c->v.d[16] = 0x3e901b2b29a4692bull;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->v.s[0] = 0x3f800000u;
    c->v.s[2] = 0xbf800000u;
    c->r[14] = c->r[3] - (c->r[0] << 2);
    c->r[4] = (c->r[0] << 2);
L_251c5e4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[3] << 2);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->v.s[6] = LD32(c->r[0]);
    c->r[0] = c->r[2];
L_251c60c:;
    c->v.s[8] = LD32(c->r[0]);
    c->v.f[10] = c->v.f[6] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[10], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { c->v.f[8] = c->v.f[8] + (float)(c->v.f[8] * c->v.f[10]); }
    if (COND_LT) { c->r[3] = c->r[3] + 0x1u; }
    if (COND_LT) { ST32(c->r[0], c->v.s[8]); }
    if (COND_LT) { c->r[0] = c->r[0] + c->r[4]; }
    if (COND_LT) { (void)f_subs(c, c->r[3], c->r[1]); }
    if (COND_LT) { goto L_251c60c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->v.s[6] = LD32(c->r[0]);
L_251c640:;
    c->r[9] = c->r[5];
    (void)f_subs(c, c->r[9], c->r[1]);
    c->r[6] = c->r[9];
    if (COND_GE) { goto L_251c68c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[9];
    { uint32_t r = c->r[0] * c->r[9]; c->r[0] = r; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
L_251c660:;
    c->v.s[8] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[8], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_251c68c; }
    vfp_cmp_f(c, c->v.f[8], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_251c68c; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_LT) { goto L_251c660; }
L_251c68c:;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_251c870; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[6] * c->r[5]; c->r[0] = r; }
    c->r[3] = c->r[3] + (c->r[0] << 2);
    c->r[7] = c->r[2] + (c->r[0] << 2);
    c->v.s[8] = LD32(c->r[3]);
    c->r[3] = c->r[6] - 0x1u;
    { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; }
    c->r[5] = c->r[6];
    c->r[12] = c->r[2] + (c->r[3] << 2);
    vfp_cmp_f(c, c->v.f[4], c->v.f[8]);
    c->v.s[10] = c->v.s[8] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[8];
L_251c6cc:;
    c->r[8] = c->r[5];
    c->r[3] = c->r[7];
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_251c700; }
    c->v.s[12] = LD32(c->r[12]);
    c->r[10] = c->r[12] + c->r[14];
    c->r[7] = c->r[3] + c->r[14];
    c->r[5] = c->r[8] - 0x1u;
    c->r[12] = c->r[10];
    c->v.f[12] = c->v.f[8] * c->v.f[12];
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_251c6cc; }
L_251c700:;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_GE) { goto L_251c758; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[5] = c->r[6];
L_251c710:;
    c->v.s[12] = LD32(c->r[0]);
    c->v.f[14] = c->v.f[8] * c->v.f[12];
    vfp_cmp_f(c, c->v.f[14], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_251c75c; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[12]);
    c->v.s[14] = c->v.s[12] ^ 0x80000000u;
    c->r[0] = c->r[0] + c->r[4];
    vfp_mrs_flags(c);
    c->v.s[12] = COND_GT ? c->v.s[14] : c->v.s[12];
    vfp_cmp_f(c, c->v.f[12], c->v.f[10]);
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[12] : c->v.s[10];
    if (COND_GT) { c->r[6] = c->r[5]; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_LT) { goto L_251c710; }
    goto L_251c75c;
L_251c758:;
    c->r[5] = c->r[6];
L_251c75c:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_251c784; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.f[12] = c->v.f[8] * c->v.f[12];
    vfp_cmp_f(c, c->v.f[12], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { c->r[0] = 0x1u; }
L_251c784:;
    c->v.f[12] = c->v.f[10] + c->v.f[2];
    c->v.f[10] = c->v.f[10] * c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    c->v.f[10] = c->v.f[12] / c->v.f[10];
    c->v.df[17] = (double)c->v.f[10];
    c->v.df[17] = c->v.df[17] + (double)(c->v.df[17] * c->v.df[16]);
    c->v.f[10] = (float)c->v.df[17];
    c->v.s[12] = c->v.s[10] ^ 0x80000000u;
    c->v.s[8] = COND_GT ? c->v.s[12] : c->v.s[10];
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_GE) { goto L_251c7d8; }
    c->r[7] = c->r[5];
L_251c7b8:;
    c->v.s[10] = LD32(c->r[3]);
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], c->r[8]);
    c->v.f[12] = c->v.f[8] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[10] * c->v.f[12]);
    ST32(c->r[3], c->v.s[10]);
    c->r[3] = c->r[3] + c->r[4];
    if (COND_NE) { goto L_251c7b8; }
L_251c7d8:;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[3] = 0x0u;
    if (COND_GT) { c->r[3] = 0x1u; }
    c->r[0] = c->r[3] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_251c864; }
    c->v.s[10] = c->r[6];
    (void)f_subs(c, c->r[9], c->r[6]);
    c->v.f[12] = (float)(int32_t)c->v.s[10];
    if (COND_GE) { goto L_251c864; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[10] = LD32(c->r[0]);
    { uint32_t r = c->r[3] * c->r[9]; c->r[3] = r; }
    c->r[0] = c->r[6] - c->r[9];
    c->r[3] = c->r[2] + (c->r[3] << 2);
    c->v.f[10] = c->v.f[6] - c->v.f[10];
    c->v.f[12] = c->v.f[10] / c->v.f[12];
L_251c820:;
    c->v.s[14] = LD32(c->r[3]);
    c->v.f[10] = c->v.f[10] - c->v.f[12];
    c->v.f[14] = c->v.f[10] + c->v.f[14];
    vfp_cmp_f(c, c->v.f[14], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[1] = COND_GT ? c->v.s[0] : c->v.s[14];
    vfp_cmp_f(c, c->v.f[2], c->v.f[1]);
    vfp_mrs_flags(c);
    c->v.s[1] = COND_GT ? c->v.s[2] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[14], c->v.f[0]);
    c->v.s[3] = COND_GT ? c->v.s[1] : c->v.s[14];
    vfp_mrs_flags(c);
    c->v.s[14] = COND_GT ? c->v.s[1] : c->v.s[3];
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    ST32(c->r[3], c->v.s[14]);
    c->r[3] = c->r[3] + c->r[4];
    if (COND_NE) { goto L_251c820; }
L_251c864:;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_251c640; }
    goto L_251c874;
L_251c870:;
    c->v.s[8] = c->v.s[4];
L_251c874:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x4u;
    ST32(c->r[0], c->v.s[8]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_251c5e4; }
L_251c894:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251c8ac(Cpu *restrict c) {
    FN_ENTER(0x251c8acu);
L_251c8ac:;
    (void)f_subs(c, c->r[0], 0xfbu);
    if (COND_LE) { { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); } }
    if (COND_LE) { c->r[0] = 0x1u; }
    if (COND_LE) { return; }
    c->r[2] = c->r[0] | 0xfcu;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = (c->r[0] >> 2);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2u;
    return;
}
void f_251c8dc(Cpu *restrict c) {
    FN_ENTER(0x251c8dcu);
L_251c8dc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251c908; }
    c->r[2] = c->r[0] & 0x60u;
    (void)f_subs(c, c->r[2], 0x60u);
    if (COND_NE) { goto L_251c928; }
    c->r[2] = 0x64u;
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = 0x32u; }
    c->r[0] = sdiv32(c->r[1], c->r[2]);
    return;
L_251c908:;
    c->r[0] = (c->r[0] >> 3) & 0x3u;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    return;
L_251c928:;
    c->r[0] = (c->r[0] >> 3) & 0x3u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_251c954; }
    c->r[0] = (c->r[1] << 4) - c->r[1];
    c->r[1] = 0x4dd3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10620000u;
    c->r[0] = (c->r[0] << 2);
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 6);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    return;
L_251c954:;
    c->r[0] = sh_lsl(c->r[1], c->r[0]);
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    return;
}
void f_251c970(Cpu *restrict c) {
    FN_ENTER(0x251c970u);
L_251c970:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x18u;
    c->r[10] = c->r[3];
    c->r[12] = ~0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_251ce9c; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[12] = ~0x3u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_251ce9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t r = c->r[14] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251c9d0; }
    c->r[3] = c->r[14] & 0x60u;
    (void)f_subs(c, c->r[3], 0x60u);
    if (COND_NE) { goto L_251c9f0; }
    c->r[3] = 0x64u;
    { uint32_t r = c->r[14] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[4] = 0xbb80u;
    if (COND_NE) { c->r[3] = 0x32u; }
    c->r[6] = udiv32(c->r[4], c->r[3]);
    goto L_251ca18;
L_251c9d0:;
    c->r[3] = (c->r[14] >> 3) & 0x3u;
    c->r[4] = 0xbb80u;
    c->r[3] = sh_lsl(c->r[4], c->r[3]);
    c->r[4] = 0x851fu;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[3] * c->r[4]; c->r[3] = (uint32_t)r; c->r[4] = (uint32_t)(r >> 32); }
    c->r[6] = (c->r[4] >> 7);
    goto L_251ca18;
L_251c9f0:;
    c->r[3] = (c->r[14] >> 3) & 0x3u;
    c->r[6] = 0xb40u;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_EQ) { goto L_251ca18; }
    c->r[4] = 0xbb80u;
    c->r[3] = sh_lsl(c->r[4], c->r[3]);
    c->r[4] = 0x851fu;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[3] * c->r[4]; c->r[3] = (uint32_t)r; c->r[4] = (uint32_t)(r >> 32); }
    c->r[6] = (c->r[4] >> 5);
L_251ca18:;
    c->r[3] = 0xffffu;
    { uint32_t r = c->r[14] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    c->r[4] = c->r[1] - 0x1u;
    c->r[5] = c->r[0] + 0x1u;
    if (COND_EQ) { goto L_251ca5c; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_EQ) { goto L_251cab0; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_251cacc; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_251cc44; }
    c->r[1] = 0x1u;
    c->r[8] = 0x2u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    goto L_251ca78;
L_251ca5c:;
    c->r[1] = 0x0u;
    c->r[8] = 0x1u;
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
L_251ca70:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_251ccc8; }
L_251ca78:;
    c->r[2] = c->r[8];
    c->r[3] = c->r[10];
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[6] = c->r[9] + (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = ~0x0u;
    if (COND_LT) { goto L_251cb70; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xfbu);
    if (COND_HI) { goto L_251cb78; }
    c->r[2] = 0x1u;
    c->r[10] = c->r[7];
    goto L_251cb90;
L_251cab0:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_251cc84; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0xfbu);
    if (COND_HI) { goto L_251cc7c; }
    c->r[1] = 0x1u;
    goto L_251cc98;
L_251cacc:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_251ce9c; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x3fu; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { goto L_251ce9c; }
    { uint32_t r = c->r[8] * c->r[6]; c->r[5] = r; }
    (void)f_subs(c, c->r[5], 0x1680u);
    if (COND_HI) { goto L_251ce9c; }
    c->r[6] = c->r[1] - 0x2u;
    c->r[5] = c->r[0] + 0x2u;
    c->r[1] = 0x0u;
    { uint32_t r = c->r[7] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_251cb34; }
    c->r[1] = 0x0u;
L_251cb08:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_251ce9c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = c->r[5] + 0x1u; c->r[7] = v; }
    c->r[6] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[7], 0xffu);
    if (COND_EQ) { c->r[7] = 0xfeu; }
    c->r[1] = c->r[7] + c->r[1];
    c->r[6] = c->r[6] - c->r[7];
    if (COND_EQ) { goto L_251cb08; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_251ce9c; }
L_251cb34:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[7] = c->r[7] ^ (c->r[1] >> 7);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251cd98; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_251cebc; }
    c->r[7] = c->r[4];
    c->r[4] = c->r[6];
    goto L_251ca78;
L_251cb70:;
    c->r[10] = 0xffffu;
    goto L_251cb90;
L_251cb78:;
    (void)f_subs(c, c->r[4], 0x2u);
    c->r[10] = 0xffffu;
    if (COND_LT) { goto L_251cb90; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[10] = c->r[7] + (c->r[2] << 2);
    c->r[2] = 0x2u;
L_251cb90:;
    { uint32_t ea = c->r[6] - 0x2u; ST16(ea, c->r[10]); }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[8] = c->r[10];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_251ce9c; }
    c->r[4] = c->r[4] - c->r[2];
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_GT) { goto L_251ce9c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[5] + c->r[2];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_251cc64; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = c->r[3];
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_GT) { goto L_251ce9c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_LT) { goto L_251cce4; }
    c->r[6] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[8]); }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_EQ) { goto L_251cce4; }
    c->r[2] = c->r[9] + (c->r[6] << 1);
    c->r[7] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[4] = c->r[3];
    if (COND_EQ) { goto L_251cc10; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[3]); }
L_251cc10:;
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_EQ) { goto L_251cce4; }
    c->r[3] = c->r[6] - c->r[7];
    c->r[7] = c->r[9] + (c->r[7] << 1);
    c->r[7] = c->r[7] + 0x2u;
L_251cc24:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[7] - 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST16(ea, c->r[6]); }
    c->r[7] = c->r[7] + 0x4u;
    if (COND_NE) { goto L_251cc24; }
    goto L_251cce4;
L_251cc44:;
    { uint32_t r = c->r[4] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251ce9c; }
    c->r[1] = c->r[4] + (c->r[4] >> 31);
    c->r[8] = 0x2u;
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[7]); }
    goto L_251ccc8;
L_251cc64:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[6] + c->r[2];
    c->r[10] = c->r[3];
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_LE) { goto L_251cce4; }
    goto L_251ce9c;
L_251cc7c:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_GE) { goto L_251cc8c; }
L_251cc84:;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[3]); }
    goto L_251ce9c;
L_251cc8c:;
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + (c->r[1] << 2);
    c->r[1] = 0x2u;
L_251cc98:;
    c->r[4] = c->r[4] - c->r[1];
    { uint32_t ea = c->r[9]; ST16(ea, c->r[6]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_LT) { goto L_251ce9c; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[5] + c->r[1];
    c->r[8] = 0x2u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4] - c->r[6];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_251ca78; }
L_251ccc8:;
    c->r[2] = 0x4fbu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_GT) { goto L_251ce9c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[9] + (c->r[2] << 1);
    { uint32_t ea = c->r[2] - 0x2u; ST16(ea, c->r[7]); }
L_251cce4:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[3] = c->r[5] - c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); } }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251ce80; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[2] & 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_251cd2c; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_251cd44; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_251cd5c; }
    goto L_251ce80;
L_251cd2c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_251ce44; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_251ce58; }
    goto L_251ce80;
L_251cd44:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[5] + c->r[3];
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_251ce80; }
L_251cd5c:;
    c->r[6] = c->r[2] - c->r[3];
    c->r[3] = c->r[3] + 0x1u;
    c->r[4] = c->r[9] + (c->r[3] << 1);
    c->r[7] = c->r[7] + (c->r[3] << 2);
L_251cd6c:;
    { uint32_t ea = c->r[7] - 0x4u; ST32(ea, c->r[5]); }
    c->r[6] = f_subs(c, c->r[6], 0x2u);
    { uint32_t ea = c->r[4] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[3] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[4] = c->r[4] + 0x4u;
    c->r[5] = c->r[3] + c->r[5];
    if (COND_NE) { goto L_251cd6c; }
    goto L_251ce80;
L_251cd98:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_CC) { goto L_251cea8; }
    c->r[4] = c->r[8] - 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[9];
    c->r[9] = 0x0u;
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[4] = c->r[6];
L_251cdc0:;
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_251cf10; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0xfbu);
    if (COND_HI) { goto L_251cddc; }
    c->r[8] = 0x1u;
    goto L_251cdf8;
L_251cddc:;
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_LT) { goto L_251cf10; }
    c->r[8] = c->r[7];
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[6] = c->r[6] + (c->r[7] << 2);
    c->r[7] = c->r[8];
    c->r[8] = 0x2u;
L_251cdf8:;
    c->r[4] = c->r[4] - c->r[8];
    { uint32_t ea = c->r[10]; ST16(ea, c->r[6]); }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_GT) { goto L_251ce9c; }
    c->r[6] = c->r[7] - c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[5] + c->r[8];
    c->r[9] = c->r[9] + 0x1u;
    c->r[10] = c->r[10] + 0x2u;
    c->r[7] = c->r[6] - c->r[8];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[9], c->r[3]);
    c->r[3] = 0xffffu;
    if (COND_LT) { goto L_251cdc0; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_GE) { goto L_251ca70; }
    goto L_251ce9c;
L_251ce44:;
    { uint32_t ea = c->r[9]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[5] + c->r[3];
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_251ce80; }
L_251ce58:;
    c->r[7] = c->r[2] - c->r[3];
    c->r[3] = c->r[9] + (c->r[3] << 1);
    c->r[6] = c->r[3] + 0x2u;
L_251ce64:;
    { uint32_t ea = c->r[6] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x2u);
    c->r[3] = c->r[5] + c->r[3];
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + 0x4u;
    c->r[5] = c->r[3] + c->r[5];
    if (COND_NE) { goto L_251ce64; }
L_251ce80:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { c->r[0] = c->r[1] - c->r[0]; }
    if (COND_NE) { c->r[0] = c->r[0] + c->r[5]; }
    if (COND_NE) { { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[12] = c->r[2];
    if (COND_NE) { { uint32_t ea = c->r[10]; ST8(ea, c->r[14]); } }
L_251ce9c:;
    c->r[0] = c->r[12];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_251cea8:;
    c->r[4] = c->r[6];
    c->r[7] = c->r[6];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_251ca78; }
    goto L_251ccc8;
L_251cebc:;
    c->r[7] = sdiv32(c->r[6], c->r[8]);
    { uint32_t r = c->r[7] * c->r[8]; c->r[4] = r; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_NE) { goto L_251ce9c; }
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_CC) { goto L_251ccc8; }
    c->r[3] = c->r[8] - 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[3] + 0x3u;
    { uint32_t r = c->r[4] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { goto L_251cf18; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[4] = 0x0u;
L_251cefc:;
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[7]; ST16(ea, c->r[9]); c->r[7] = c->r[7] + 0x2u; }
    (void)f_subs(c, c->r[8], c->r[4]);
    if (COND_NE) { goto L_251cefc; }
    goto L_251cf1c;
L_251cf10:;
    { uint32_t ea = c->r[10]; ST16(ea, c->r[3]); }
    goto L_251ce9c;
L_251cf18:;
    c->r[4] = 0x0u;
L_251cf1c:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CS) { goto L_251cf38; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_251cf74;
L_251cf38:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[7] - 0x1u;
    c->r[8] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[9] + (c->r[4] << 1);
    c->r[4] = c->r[4] + 0x4u;
L_251cf54:;
    { uint32_t ea = c->r[4] - 0x4u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] - 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[7]); }
    c->r[4] = c->r[4] + 0x8u;
    c->r[8] = f_subs(c, c->r[8], 0x4u);
    if (COND_NE) { goto L_251cf54; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
L_251cf74:;
    c->r[4] = c->r[6];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_251ca78; }
    goto L_251ccc8;
}
void f_251cf84(Cpu *restrict c) {
    FN_ENTER(0x251cf84u);
L_251cf84:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[12];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[14] = 0x251cfbcu; f_28430b8(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_251cfc4(Cpu *restrict c) {
    FN_ENTER(0x251cfc4u);
L_251cfc4:;
    c->r[1] = 0x4803u;
    c->r[0] = c->r[1] + (c->r[0] << 11);
    c->r[0] = c->r[0] & 0xfffff800u;
    return;
}
void f_251cfd4(Cpu *restrict c) {
    FN_ENTER(0x251cfd4u);
L_251cfd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_251d038; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x251cffcu; f_28430c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251d038; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4803u;
    c->r[5] = c->r[0] + (c->r[4] << 11);
    c->r[0] = 0x50u;
    c->r[5] = (c->r[5] & 0xfffff800u) | ((c->r[0] << 0) & 0x7ffu);
    c->r[0] = c->r[4];
    c->r[14] = 0x251d02cu; f_28430d0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[0];
    c->r[5] = c->r[0] + c->r[1];
L_251d038:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251d044(Cpu *restrict c) {
    FN_ENTER(0x251d044u);
L_251d044:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
    c->r[4] = c->r[0];
    c->r[7] = ~0x0u;
    (void)f_subs(c, c->r[5], 0x3e80u);
    if (COND_LT) { goto L_251d084; }
    if (COND_NE) { c->r[0] = 0xbb80u; }
    if (COND_NE) { (void)f_subs(c, c->r[5], c->r[0]); }
    if (COND_EQ) { goto L_251d098; }
    c->r[0] = 0x5dc0u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_251d098; }
    goto L_251d1ac;
L_251d084:;
    (void)f_subs(c, c->r[5], 0x1f40u);
    if (COND_EQ) { goto L_251d098; }
    c->r[0] = 0x2ee0u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_251d1ac; }
L_251d098:;
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_251d1ac; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x251d0acu; f_28430c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251d0c8; }
    c->r[0] = 0x4803u;
    c->r[7] = c->r[0] + (c->r[6] << 11);
    c->r[0] = 0x0u;
    c->r[7] = c->r[7] & 0xfffff800u;
    goto L_251d0fc;
L_251d0c8:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4803u;
    c->r[7] = c->r[0] + (c->r[6] << 11);
    c->r[0] = c->r[6];
    c->r[7] = c->r[7] & 0xfffff800u;
    c->r[8] = c->r[7] | 0x50u;
    c->r[14] = 0x251d0f0u; f_28430d0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->r[0] = c->r[0] + c->r[1];
L_251d0fc:;
    c->r[1] = c->r[0] - c->r[7];
    c->r[0] = c->r[4];
    c->r[14] = 0x251d108u; f_283aad8(c);
    c->r[0] = c->r[13];
    c->r[14] = 0x251d110u; f_28430c4(c);
    c->r[7] = ~0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251d1ac; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x50u;
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[8] = c->r[0] + 0x50u;
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    c->r[14] = 0x251d158u; f_28430dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251d1ac; }
    c->r[8] = c->r[4] + c->r[8];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[0] = c->r[8];
    c->r[14] = 0x251d174u; f_28430e8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251d1ac; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2720u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0x251d190u; f_284295c(c);
    c->r[0] = 0x851fu;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[7]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x51eb0000u;
    { uint64_t r = (uint64_t)c->r[5] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[1] >> 7);
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[7]); }
L_251d1ac:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_251d1b8(Cpu *restrict c) {
    FN_ENTER(0x251d1b8u);
L_251d1b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = c->r[0];
    c->r[4] = c->r[2];
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[6], 0x3e80u);
    if (COND_LT) { goto L_251d1f4; }
    if (COND_NE) { c->r[0] = 0xbb80u; }
    if (COND_NE) { (void)f_subs(c, c->r[6], c->r[0]); }
    if (COND_EQ) { goto L_251d208; }
    c->r[0] = 0x5dc0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_251d208; }
    goto L_251d214;
L_251d1f4:;
    (void)f_subs(c, c->r[6], 0x1f40u);
    if (COND_EQ) { goto L_251d208; }
    c->r[0] = 0x2ee0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_251d214; }
L_251d208:;
    c->r[0] = c->r[5] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_251d224; }
L_251d214:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { c->r[0] = ~0x0u; }
    goto L_251d2bc;
L_251d224:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x251d22cu; f_28430c4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_251d270; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4803u;
    c->r[7] = c->r[0] + (c->r[5] << 11);
    c->r[0] = 0x50u;
    c->r[7] = (c->r[7] & 0xfffff800u) | ((c->r[0] << 0) & 0x7ffu);
    c->r[0] = c->r[5];
    c->r[14] = 0x251d264u; f_28430d0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[7];
    c->r[0] = c->r[0] + c->r[1];
L_251d270:;
    c->r[14] = 0x251d274u; f_283b27c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_251d2b0; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x251d290u; f_28430f4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251d2c0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x251d2a8u; f_283b288(c);
    c->r[7] = 0x0u;
    goto L_251d2c0;
L_251d2b0:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { c->r[0] = ~0x6u; }
L_251d2bc:;
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
L_251d2c0:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_251d2cc(Cpu *restrict c) {
    FN_ENTER(0x251d2ccu);
L_251d2cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x8cu;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = c->r[1];
    c->r[6] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_251d6c8; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_251d310; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251d338; }
L_251d310:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->r[1] = sdiv32(c->r[10], c->r[0]);
    c->r[0] = c->r[10] - c->r[1] * c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251d6c8; }
L_251d338:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_251d394; }
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
L_251d34c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] - c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[4];
    c->r[14] = 0x251d370u; f_251d6d4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { c->r[5] = c->r[5] + c->r[6]; }
    if (COND_LT) { goto L_251d6c8; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_LT) { goto L_251d34c; }
L_251d388:;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    c->r[6] = c->r[5];
    goto L_251d6c8;
L_251d394:;
    if (COND_LT) { goto L_251d6c8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251d3d0; }
    c->r[1] = c->r[0] & 0x60u;
    c->r[2] = 0x3e8u;
    (void)f_subs(c, c->r[1], 0x60u);
    if (COND_EQ) { c->r[2] = 0x3e9u; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_251d3f4; }
    c->r[1] = (c->r[0] >> 4);
    c->r[0] = 0x228u;
    c->r[1] = (c->r[1] & 0x1u) | ((c->r[0] << 1) & 0xfffffffeu);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_251d404;
L_251d3d0:;
    c->r[0] = (c->r[0] >> 5) & 0x3u;
    c->r[1] = 0x44eu;
    c->r[1] = c->r[0] + c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x3eau;
    if (COND_EQ) { c->r[1] = 0x44du; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    goto L_251d404;
L_251d3f4:;
    c->r[0] = (c->r[0] >> 5) & 0x3u;
    c->r[1] = 0x44du;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_251d404:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x251d410u; f_2843100(c);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[8] = c->r[13] + 0x26u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[11] - 0x21u;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x251d44cu; f_28430b8(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_251d518; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] & 0x4u;
    c->r[12] = c->r[1] + (c->r[0] >> 2);
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251d520; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x3eau;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_251d4a8; }
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_GT) { goto L_251d4a8; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x3eau;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_251d5b8; }
L_251d4a8:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->r[1] = sdiv32(c->r[10], c->r[0]);
    c->r[0] = c->r[10] - c->r[1] * c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251d6c8; }
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
L_251d4d8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] - c->r[5];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[4];
    c->r[14] = 0x251d4fcu; f_251d6d4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { c->r[5] = c->r[5] + c->r[6]; }
    if (COND_LT) { goto L_251d6c8; }
    (void)f_subs(c, c->r[5], c->r[10]);
    if (COND_LT) { goto L_251d4d8; }
    goto L_251d388;
L_251d518:;
    c->r[6] = c->r[2];
    goto L_251d6c8;
L_251d520:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = ~0x1u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_GT) { goto L_251d6c8; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[12]); }
    if (COND_LT) { goto L_251d5f8; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
L_251d560:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[10] - c->r[6];
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[3] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[4];
    c->r[14] = 0x251d58cu; f_251d6d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_251d604; }
    c->r[6] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[8]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[8] = c->r[8] + 0x2u; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[7] = c->r[7] + c->r[0];
    (void)f_subs(c, c->r[5], c->r[2]);
    c->r[1] = c->r[7];
    if (COND_LT) { goto L_251d560; }
    goto L_251d5fc;
L_251d5b8:;
    c->r[5] = f_subs(c, c->r[10], c->r[3]);
    if (COND_EQ) { goto L_251d684; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x851fu;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[2]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = c->r[2] + (c->r[0] >> 31);
    c->r[2] = sdiv32(c->r[5], c->r[0]);
    c->r[0] = c->r[5] - c->r[2] * c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251d60c; }
L_251d5f0:;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[7]); }
    goto L_251d6c8;
L_251d5f8:;
    c->r[6] = 0x0u;
L_251d5fc:;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[6]); }
    goto L_251d6c8;
L_251d604:;
    c->r[6] = c->r[0];
    goto L_251d6c8;
L_251d60c:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[1];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
L_251d61c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] - c->r[8];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    c->r[3] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[4];
    c->r[14] = 0x251d648u; f_251d6d4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { c->r[8] = c->r[8] + c->r[6]; }
    if (COND_LT) { goto L_251d668; }
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_LT) { goto L_251d61c; }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[8]); }
L_251d668:;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_LT) { goto L_251d5f0; }
L_251d684:;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[3]); }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[4];
    c->r[14] = 0x251d6b8u; f_251d6d4(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[10]); } }
    if (COND_GE) { c->r[6] = c->r[10]; }
L_251d6c8:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251d6d4(Cpu *restrict c) {
    FN_ENTER(0x251d6d4u);
L_251d6d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xb4u;
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[3];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[11] - 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73e838u;
    { uint32_t ea = 0x251d704u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_251d734; }
    c->r[0] = 0x86a0u;
    c->r[7] = c->r[2];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[14] = 0x251d720u; f_283b27c(c);
    c->r[1] = 0x73e80cu;
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x251d734u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_251d734:;
    c->r[0] = 0x73e7f8u;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251d744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x851fu;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[3] = c->r[1] + (c->r[0] >> 31);
    c->r[10] = (uint32_t)((int32_t)c->r[3] >> 3);
    (void)f_subs(c, c->r[10], c->r[5]);
    if (COND_LE) { goto L_251d780; }
    c->r[0] = 0x73e7c0u;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = ~0x1u;
    { uint32_t ea = 0x251d77cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_251e8a0;
L_251d780:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)((int32_t)c->r[3] >> 2);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[3]); }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->r[9] = c->r[0] + (c->r[0] << 1);
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_GT) { c->r[9] = c->r[5]; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_GT) { goto L_251d7c8; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_GE) { c->r[9] = c->r[0]; }
    goto L_251d8b8;
L_251d7c8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_251d8b8; }
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[8];
    c->r[0] = c->r[11] - 0x4cu;
    c->r[7] = c->r[3];
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[14] = 0x251d7f4u; f_2842974(c);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[9], c->r[7]);
    c->r[0] = 0x0u;
    c->r[2] = 0x3eau;
    c->r[12] = 0x0u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[10]); }
    if (COND_NE) { c->r[12] = 0x1u; }
    c->r[3] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251da00; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[2]);
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_251d860; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_251d880; }
L_251d860:;
    c->r[2] = 0x3eau;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_EQ) { goto L_251da24; }
    c->r[2] = 0x3eau;
    c->r[14] = 0x0u;
    c->r[12] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_251de10; }
L_251d880:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = 0x1u;
    c->r[14] = 0x1u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x3eau;
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = c->r[1];
    if (COND_EQ) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    goto L_251da40;
L_251d8b8:;
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_251d934; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LE) { goto L_251d978; }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[8] = 0x0u;
    c->r[5] = c->r[9];
L_251d8e0:;
    (void)f_subs(c, c->r[5], c->r[7]);
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = c->r[4];
    if (COND_LT) { c->r[0] = c->r[5]; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x251d904u; f_251d6d4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_251da10; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] - c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[4] = c->r[4] + (c->r[0] << 1);
    if (COND_GT) { goto L_251d8e0; }
    c->r[0] = 0x73e60cu;
    { uint32_t ea = 0x251d930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    goto L_251e8a0;
L_251d934:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[9]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251d964; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_251d94c:;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); c->r[4] = c->r[4] + 0x2u; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[9]; c->r[2] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_251d94c; }
L_251d964:;
    c->r[0] = 0x73e5c8u;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x251d974u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_251e8a0;
L_251d978:;
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[10]); }
    if (COND_GE) { goto L_251d9b8; }
    (void)f_subs(c, c->r[9], c->r[3]);
    c->r[7] = c->r[3];
    if (COND_GT) { goto L_251d9b8; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x3e8u);
    c->r[7] = c->r[9];
    if (COND_NE) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LE) { c->r[7] = c->r[9]; }
    (void)f_subs(c, c->r[9], c->r[3]);
    if (COND_GE) { c->r[7] = c->r[9]; }
L_251d9b8:;
    c->r[0] = 0x3eau;
    c->r[12] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[3]); }
    c->r[8] = 0x0u;
    c->r[14] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    if (COND_NE) { c->r[12] = 0x1u; }
    (void)f_subs(c, c->r[9], c->r[3]);
    if (COND_GE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] & c->r[12];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
L_251d9f0:;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    goto L_251da3c;
L_251da00:;
    c->r[1] = 0x0u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    goto L_251da34;
L_251da10:;
    c->r[1] = 0x73e51cu;
    c->r[9] = c->r[0];
    { uint32_t ea = 0x251da20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[10]); }
    goto L_251e8a0;
L_251da24:;
    c->r[1] = 0x0u;
    c->r[12] = 0x0u;
    c->r[5] = 0x3eau;
    c->r[14] = 0x0u;
L_251da34:;
    c->r[0] = 0x0u;
    c->r[8] = 0x1u;
L_251da3c:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
L_251da40:;
    c->r[1] = 0x73e4e8u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0x251da54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] & 0x1u;
    c->r[10] = c->r[2] + c->r[3];
    c->r[0] = c->r[10] + (c->r[0] << 1);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3eau;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { (void)f_subs(c, c->r[14], 0x1u); }
    if (COND_NE) { goto L_251dad0; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[10];
    c->r[5] = c->r[12];
    c->r[2] = c->r[1];
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[2], c->r[7]);
    c->r[7] = c->r[8];
    c->r[8] = c->r[14];
    if (COND_LT) { c->r[1] = c->r[2]; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x251dab8u; f_251d6d4(c);
    c->r[14] = c->r[8];
    c->r[8] = c->r[7];
    c->r[12] = c->r[5];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[10];
L_251dad0:;
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_LE) { goto L_251daf0; }
    c->r[0] = 0x73e450u;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = ~0x0u;
    { uint32_t ea = 0x251daecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_251e8a0;
L_251daf0:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3eau;
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[1] | c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_251db2c; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_LE) { c->r[1] = c->r[7]; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
L_251db2c:;
    c->r[1] = 0x73e3fcu;
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x251db40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2] & 0x1u;
    c->r[9] = c->r[2] + c->r[3];
    c->r[0] = c->r[9] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_251dcdc; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[9];
    c->r[1] = 0x3eau;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[10] = c->r[4]; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_251dba0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[12];
    c->r[5] = c->r[14];
    c->r[14] = 0x251db94u; f_28430dc(c);
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[4];
L_251dba0:;
    c->r[0] = 0x3e8u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[0]; c->r[0] = r; }
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_LE) { c->r[0] = 0xau; }
    (void)f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_251dc04; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x3e8u);
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e80u;
    if (COND_NE) { goto L_251dc00; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x44du;
    c->r[0] = 0x1f40u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_251dc00; }
    c->r[2] = 0x44eu;
    c->r[0] = 0x3e80u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[0] = 0x2ee0u; }
L_251dc00:;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
L_251dc04:;
    c->r[0] = c->r[6] + 0x10u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] << 1);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_251dd04; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
L_251dc40:;
    c->r[1] = c->r[11] - 0x4cu;
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[3] = 0x0u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[11] - 0x50u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0x251dc74u; f_284310c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251dcb8; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251dcc0; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
L_251dc9c:;
    { uint32_t ea = c->r[2]; ST16(ea, c->r[8]); c->r[2] = c->r[2] + 0x2u; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[3] = r; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_251dc9c; }
    goto L_251dcc0;
L_251dcb8:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
L_251dcc0:;
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[7] = c->r[1] + c->r[7];
    (void)f_subs(c, c->r[7], c->r[5]);
    c->r[10] = c->r[10] + (c->r[0] << 1);
    if (COND_LT) { goto L_251dc40; }
    goto L_251dd68;
L_251dcdc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_251df1c;
L_251dd04:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = 0x0u;
    c->r[9] = c->r[11] - 0x50u;
    c->r[7] = c->r[11] - 0x4cu;
L_251dd14:;
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[10]); }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[3] = 0x1u; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x251dd40u; f_284310c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251de70; }
    { uint32_t ea = c->r[11] - 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0] + c->r[4];
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[10] = c->r[10] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_251dd14; }
L_251dd68:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_251dddc; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = 0x3e9u;
    (void)f_subs(c, c->r[3], c->r[0]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] - 0xfu;
    if (COND_EQ) { c->r[2] = c->r[1] + 0x5u; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[3] << 3));
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    if (COND_LE) { goto L_251de18; }
    c->r[0] = 0x0u;
    goto L_251ddf4;
L_251dddc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
L_251ddf4:;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_251df1c;
L_251de10:;
    c->r[8] = 0x1u;
    goto L_251d9f0;
L_251de18:;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_251de84; }
    c->r[0] = c->r[11] - 0x4cu;
    c->r[1] = 0xcu;
    c->r[14] = 0x251de2cu; f_284292c(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_251def8; }
    c->r[7] = c->r[11] - 0x4cu;
    c->r[1] = 0x1u;
    c->r[8] = c->r[2];
    c->r[0] = c->r[7];
    c->r[14] = 0x251de4cu; f_284292c(c);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x100u;
    c->r[14] = 0x251de5cu; f_2842914(c);
    c->r[2] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_251deb4;
L_251de70:;
    c->r[0] = 0x73e0bcu;
    c->r[9] = ~0x2u;
    { uint32_t ea = 0x251de80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    goto L_251e8a0;
L_251de84:;
    c->r[0] = c->r[11] - 0x4cu;
    c->r[1] = 0x1u;
    c->r[8] = 0x1u;
    c->r[14] = 0x251de94u; f_284292c(c);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = clz32(c->r[1]);
    c->r[2] = c->r[0] + c->r[2];
    c->r[2] = c->r[2] - 0x19u;
    c->r[2] = c->r[3] - (uint32_t)((int32_t)c->r[2] >> 3);
L_251deb4:;
    c->r[1] = clz32(c->r[1]);
    c->r[3] = c->r[3] - c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = (c->r[3] << 3);
    c->r[0] = c->r[0] - 0x20u;
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_LT) { c->r[2] = 0x0u; }
    if (COND_LT) { c->r[3] = 0x0u; }
    (void)f_subs(c, c->r[12], c->r[0]);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_LT) { c->r[8] = 0x0u; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[8]); }
    goto L_251df10;
L_251def8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_251df10:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
L_251df1c:;
    c->r[7] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x44du;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[8] = c->r[14];
    c->r[2] = 0x15u;
    c->r[9] = c->r[12];
    c->r[0] = c->r[0] - c->r[1];
    c->r[1] = c->r[12];
    if (COND_NE) { c->r[1] = 0x11u; }
    (void)f_subs(c, c->r[0], 0x3u);
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[1]); }
    if (COND_HI) { goto L_251df5c; }
    c->r[1] = 0x625f4cu;
    c->r[1] = 0x251df5cu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
L_251df5c:;
    c->r[0] = c->r[7];
    c->r[1] = 0x271cu;
    c->r[14] = 0x251df68u; f_284295c(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[1] = 0x2718u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x251df7cu; f_284295c(c);
    c->r[0] = 0x73dfb4u;
    { uint32_t ea = 0x251df88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[7] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[1] = c->r[1] + (c->r[5] << 1); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[8] & c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] & c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_251dffc; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[7];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[2]; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x251dff4u; f_251d6d4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
L_251dffc:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_251e010; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
L_251e010:;
    c->r[0] = 0x73df1cu;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = 0x251e020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[7] + (c->r[5] << 1);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_251e0ac; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x271au;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x251e074u; f_284295c(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[8];
    c->r[14] = 0x251e09cu; f_2843118(c);
    c->r[2] = c->r[11] - 0x54u;
    c->r[0] = c->r[8];
    c->r[1] = 0xfbfu;
    c->r[14] = 0x251e0acu; f_284295c(c);
L_251e0ac:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x271au;
    c->r[14] = 0x251e0bcu; f_284295c(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[1], 0x3e8u);
    if (COND_NE) { goto L_251e194; }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x58u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251e118; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251e118; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
L_251e100:;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LT) { goto L_251e100; }
L_251e118:;
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3e9u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_251e18c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_251e148; }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251e18c; }
L_251e148:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x271au;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x251e160u; f_284295c(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[11] - 0x58u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x251e188u; f_2843118(c);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_251e18c:;
    c->r[0] = 0x0u;
    goto L_251e218;
L_251e194:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_GE) { c->r[0] = c->r[5]; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_251e1d4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251e1d4; }
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251e1d4; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfbcu;
    c->r[14] = 0x251e1d4u; f_284295c(c);
L_251e1d4:;
    c->r[0] = c->r[11] - 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[1] = 0x0u; }
    c->r[14] = 0x251e20cu; f_2843118(c);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_251e218:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = 0x8000u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251e288; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251e288; }
    c->r[0] = 0x0u;
L_251e248:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x7fffu;
    (void)f_subs(c, c->r[2], 0x8000u);
    if (COND_GE) { goto L_251e26c; }
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_LE) { c->r[2] = c->r[12]; }
    c->r[3] = c->r[2];
L_251e26c:;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[7] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[5]; c->r[2] = r; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_251e248; }
L_251e288:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[11] - 0x58u;
    c->r[1] = 0x271fu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] - 0x5cu; ST32(ea, c->r[9]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x251e2a4u; f_284295c(c);
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x60u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251e3fc; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251e3fc; }
    c->r[0] = c->r[5];
    c->r[1] = 0xfbcu;
    c->r[14] = 0x251e2d8u; f_284295c(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x271au;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x251e2ecu; f_284295c(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x251e314u; f_2843118(c);
    c->r[2] = c->r[11] - 0x54u;
    c->r[0] = c->r[5];
    c->r[1] = 0xfbfu;
    c->r[14] = 0x251e324u; f_284295c(c);
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_GE) { { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_LT) { goto L_251e3fc; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb80u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[10];
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    c->r[8] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] * c->r[10]; c->r[2] = r; }
    c->r[7] = (c->r[7] << 1);
    c->r[2] = c->r[1] | (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[2];
    c->r[3] = (c->r[0] << 1);
L_251e388:;
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[14]); }
L_251e398:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + c->r[3]; c->r[10] = v; }
    c->r[12] = c->r[8] + c->r[14];
    c->r[1] = 0x7fffu;
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[12]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[9] = v; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    c->r[5] = (c->r[5] << 1);
    c->r[4] = c->r[1] - (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[1] = c->r[2] + c->r[14];
    c->r[14] = c->r[14] + c->r[7];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[9] >> 0));
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[1] = (c->r[1] >> 15);
    { uint32_t ea = c->r[12]; ST16(ea, c->r[1]); }
    if (COND_NE) { goto L_251e398; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[14] = c->r[14] + 0x2u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_251e388; }
L_251e3fc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_251e568; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251e484; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LE) { goto L_251e48c; }
    c->r[1] = 0x0u;
L_251e430:;
    c->r[2] = c->r[4] + (c->r[1] << 1);
    c->r[0] = c->r[6] + (c->r[1] << 1);
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[2]); }
    if (COND_EQ) { goto L_251e470; }
    c->r[0] = 0x1u;
L_251e44c:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[2] = r; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[3] = c->r[6] + (c->r[2] << 1);
    c->r[2] = c->r[4] + (c->r[2] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    if (COND_NE) { goto L_251e44c; }
L_251e470:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_251e430; }
    goto L_251e4bc;
L_251e484:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_251e4bc;
L_251e48c:;
    { uint32_t r = c->r[2] & 0x7u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[1] = c->r[2] - 0x1u;
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_251e4a8; }
L_251e49c:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_251e49c; }
L_251e4a8:;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_CC) { goto L_251e4bc; }
L_251e4b0:;
    c->r[0] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_251e4b0; }
L_251e4bc:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_GE) { (void)f_subs(c, c->r[2], 0x1u); }
    if (COND_LT) { goto L_251e568; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb80u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = (c->r[2] << 1);
    c->r[8] = 0x0u;
    c->r[9] = 0x7fffu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    c->r[1] = sdiv32(c->r[1], c->r[0]);
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[0] = (c->r[0] << 1);
    c->r[10] = (c->r[1] << 1);
L_251e500:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
L_251e510:;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = c->r[5] + c->r[10]; c->r[7] = v; }
    c->r[0] = c->r[14] + c->r[1];
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[7] = (c->r[7] << 1);
    c->r[4] = c->r[9] - (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[4] = c->r[12] + c->r[1];
    c->r[1] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = (c->r[0] >> 15);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    if (COND_NE) { goto L_251e510; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_NE) { goto L_251e500; }
L_251e568:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_251e720; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_251e644; }
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_GE) { (void)f_subs(c, c->r[5], 0x1u); }
    if (COND_LT) { goto L_251e720; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb80u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = (c->r[5] << 1);
    c->r[9] = 0x7fffu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    c->r[10] = (c->r[0] << 1);
    c->r[0] = 0x0u;
L_251e5c8:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_251e5d8:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = c->r[4] + c->r[10]; c->r[5] = v; }
    c->r[3] = c->r[14] + c->r[0];
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[5] = (c->r[5] << 1);
    c->r[7] = c->r[9] - (uint32_t)((int32_t)c->r[5] >> 16);
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[7] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] + c->r[12];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[1] = (c->r[1] >> 15);
    { uint32_t ea = c->r[7]; ST16(ea, c->r[1]); }
    if (COND_NE) { goto L_251e5d8; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_NE) { goto L_251e5c8; }
    goto L_251e720;
L_251e644:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_251e67c; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
L_251e660:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[3] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] * c->r[6]; c->r[3] = r; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LT) { goto L_251e660; }
L_251e67c:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_GE) { (void)f_subs(c, c->r[5], 0x1u); }
    if (COND_LT) { goto L_251e720; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xbb80u;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = (c->r[5] << 1);
    c->r[8] = 0x0u;
    c->r[9] = 0x7fffu;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    c->r[0] = sdiv32(c->r[1], c->r[0]);
    c->r[10] = (c->r[0] << 1);
    c->r[0] = (c->r[3] << 1);
L_251e6b4:;
    { uint32_t ea = c->r[11] - 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_251e6c8:;
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = c->r[5] + c->r[10]; c->r[7] = v; }
    c->r[0] = c->r[14] + c->r[3];
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[7] >> 0));
    c->r[7] = (c->r[7] << 1);
    c->r[4] = c->r[9] - (uint32_t)((int32_t)c->r[7] >> 16);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[4] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[4] = c->r[12] + c->r[3];
    c->r[3] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[0] = (c->r[0] >> 15);
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    if (COND_NE) { goto L_251e6c8; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[8], c->r[5]);
    if (COND_NE) { goto L_251e6b4; }
L_251e720:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[12] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251e838; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[1] = 0x4000u;
    c->r[2] = 0x550bu;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[1] = 0x7f000000u;
    c->r[0] = (uint32_t)(((int32_t)(c->r[2] << 1)) >> 26);
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_GT) { goto L_251e7cc; }
    c->r[1] = 0x0u;
    (void)f_adds(c, c->r[0], 0xfu);
    if (COND_LT) { goto L_251e7cc; }
    c->r[1] = 0x3ff0u;
    c->r[3] = 0x4fb8u;
    c->r[1] = c->r[1] & (c->r[2] >> 11);
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x39e30000u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[2] = (uint32_t)p; }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x7fff0000u;
    c->r[2] = (c->r[2] >> 16);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[2] = c->r[3] & (c->r[2] << 1);
    c->r[2] = c->r[2] + 0x1140000u;
    c->r[2] = c->r[2] + 0x58000000u;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = c->r[2] & (c->r[1] << 1);
    c->r[1] = c->r[1] + 0xff0000u;
    c->r[1] = c->r[1] + 0x3f000000u;
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = ~0x1u;
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = sh_lsl(c->r[2], c->r[1]);
    if (COND_GT) { c->r[1] = sh_asr(c->r[2], c->r[0]); }
L_251e7cc:;
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[0] * c->r[8]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251e838; }
    c->r[3] = 0x8000u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[2] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    c->r[5] = c->r[3] + 0x1u;
L_251e7f8:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[3] = c->r[5];
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t r = c->r[7] * c->r[0]; c->r[7] = r; }
    c->r[7] = c->r[7] + 0x8000u;
    c->r[7] = c->r[6] + (uint32_t)((int32_t)c->r[7] >> 16);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_GT) { c->r[3] = c->r[7]; }
    (void)f_subs(c, c->r[7], 0x8000u);
    if (COND_GE) { c->r[3] = 0x7fffu; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[3]); c->r[4] = c->r[4] + 0x2u; }
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[8]; c->r[3] = r; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_LT) { goto L_251e7f8; }
L_251e838:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[14], 0x2u);
    c->r[1] = 0x0u;
    if (COND_LT) { goto L_251e854; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] ^ c->r[1];
L_251e854:;
    { uint32_t ea = c->r[12] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[12] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x73d6a8u;
    { uint32_t ea = c->r[11] - 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = 0x251e894u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[9] = c->r[1]; }
L_251e8a0:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251e8d8(Cpu *restrict c) {
    FN_ENTER(0x251e8d8u);
L_251e8d8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251e90c; }
    c->r[1] = c->r[0] & 0x60u;
    (void)f_subs(c, c->r[1], 0x60u);
    if (COND_EQ) { c->r[0] = (c->r[0] >> 4); }
    if (COND_EQ) { c->r[1] = 0x228u; }
    if (COND_EQ) { c->r[0] = (c->r[0] & 0x1u) | ((c->r[1] << 1) & 0xfffffffeu); }
    if (COND_EQ) { return; }
    c->r[0] = (c->r[0] >> 5) & 0x3u;
    c->r[1] = 0x44du;
    c->r[0] = c->r[0] + c->r[1];
    return;
L_251e90c:;
    c->r[1] = (c->r[0] >> 5) & 0x3u;
    c->r[0] = 0x44eu;
    c->r[0] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x44du; }
    return;
}
void f_251e924(Cpu *restrict c) {
    FN_ENTER(0x251e924u);
L_251e924:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] & 0x4u;
    c->r[0] = c->r[1] + (c->r[0] >> 2);
    return;
}
void f_251e938(Cpu *restrict c) {
    FN_ENTER(0x251e938u);
L_251e938:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x14u;
    c->r[5] = c->r[0];
    c->r[7] = c->r[1];
    c->r[4] = c->r[3];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[5] + c->r[1];
    c->r[14] = 0x251e964u; f_28430d0(c);
    c->r[1] = 0x73d5c4u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = f_adds(c, c->r[6], c->r[0]);
    { uint32_t ea = 0x251e978u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_251e994; }
    c->r[0] = 0x86a0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[14] = 0x251e988u; f_283b27c(c);
    c->r[1] = 0x73d5acu;
    { uint32_t ea = 0x251e994u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_251e994:;
    c->r[1] = 0x73d598u;
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = 0x251e9a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_251e9f4; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_251e9fc; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_251e9fc; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_251e9fc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_251ea04; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_251ea0c; }
    c->r[0] = ~0x3u;
    (void)f_subs(c, c->r[8], 0x2u);
    if (COND_LT) { goto L_251eaec; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[9] = c->r[0] & 0x3fu;
    goto L_251ea10;
L_251e9f4:;
    c->r[0] = ~0x0u;
    goto L_251eaec;
L_251e9fc:;
    c->r[1] = c->r[10];
    goto L_251ea58;
L_251ea04:;
    c->r[9] = 0x1u;
    goto L_251ea10;
L_251ea0c:;
    c->r[9] = 0x2u;
L_251ea10:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0x251ea1cu; f_2843100(c);
    { uint32_t r = c->r[0] * c->r[9]; c->r[1] = r; }
    c->r[0] = ~0x3u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251eaec; }
    c->r[2] = 0x19u;
    c->r[3] = c->r[6] + (c->r[6] << 1);
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { goto L_251eaec; }
    c->r[0] = 0x73d4e4u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_GT) { c->r[1] = c->r[10]; }
    { uint32_t ea = 0x251ea58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_251ea58:;
    c->r[2] = c->r[0] & 0x1u;
    c->r[6] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x73d4c8u;
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = 0x251ea74u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = c->r[7];
    c->r[2] = c->r[8];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x251eaa0u; f_2843124(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251eaec; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251eaec; }
    c->v.s[0] = 0x38000000u;
    c->r[1] = 0x0u;
L_251eac0:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = c->r[6] + 0x2u; c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->v.s[2] = c->r[2];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    ST32(c->r[4], c->v.s[2]);
    c->r[4] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[2] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_251eac0; }
L_251eaec:;
    c->r[1] = 0x73d440u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x251eafcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251eb20(Cpu *restrict c) {
    FN_ENTER(0x251eb20u);
L_251eb20:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251eb60; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_251eb68; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_251eb70; }
    c->r[0] = ~0x3u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_LT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[0] & 0x3fu;
    goto L_251eb74;
L_251eb60:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_251eb68:;
    c->r[5] = 0x1u;
    goto L_251eb74;
L_251eb70:;
    c->r[5] = 0x2u;
L_251eb74:;
    c->r[0] = c->r[1];
    c->r[1] = c->r[4];
    c->r[14] = 0x251eb80u; f_2843100(c);
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[1] = 0x19u;
    c->r[2] = c->r[4] + (c->r[4] << 1);
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[0] = ~0x3u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251eb9c(Cpu *restrict c) {
    FN_ENTER(0x251eb9cu);
L_251eb9c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x18u;
    c->r[7] = c->r[0];
    c->r[6] = c->r[1];
    c->r[8] = c->r[3];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[7] + c->r[1];
    c->r[14] = 0x251ebc8u; f_28430d0(c);
    c->r[1] = 0x73d364u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = 0x251ebd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_251ec10; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x251ec0cu; f_2843124(c);
    goto L_251ec14;
L_251ec10:;
    c->r[0] = ~0x0u;
L_251ec14:;
    c->r[1] = 0x73d318u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x251ec24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_251ec34(Cpu *restrict c) {
    FN_ENTER(0x251ec34u);
L_251ec34:;
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[0];
    c->r[2] = c->r[11] + 0x8u;
    c->r[5] = ~0x4u;
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0xfa9u;
    c->r[1] = c->r[1] - c->r[2];
    (void)f_subs(c, c->r[1], 0x24u);
    if (COND_HI) { goto L_251ee80; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x251ec7cu + 0x8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x251ed18u: goto L_251ed18; case 0x251ed38u: goto L_251ed38; case 0x251ed94u: goto L_251ed94; case 0x251edb4u: goto L_251edb4; case 0x251edd4u: goto L_251edd4; case 0x251ee0cu: goto L_251ee0c; case 0x251ee34u: goto L_251ee34; case 0x251ee54u: goto L_251ee54; case 0x251ee80u: goto L_251ee80; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_251ed18:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_251ee70;
L_251ed38:;
    c->r[5] = 0x0u;
    c->r[1] = 0xfbcu;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x251ed64u; f_284295c(c);
    c->r[0] = c->r[4] + c->r[6];
    c->r[14] = 0x251ed6cu; f_28430dc(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    goto L_251ee80;
L_251ed94:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_251ee70;
L_251edb4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_251ee70;
L_251edd4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3eau;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_NE) { goto L_251ee94; }
    c->r[1] = 0xfc1u;
    c->r[14] = 0x251ee04u; f_284295c(c);
    c->r[5] = 0x0u;
    goto L_251ee80;
L_251ee0c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8000u;
    (void)f_subs(c, c->r[5], (c->r[1] >> 16));
    if (COND_NE) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    goto L_251ee80;
L_251ee34:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_251ee70;
L_251ee54:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251ee7c; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
L_251ee70:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[5] = 0x0u;
    goto L_251ee80;
L_251ee7c:;
    c->r[5] = ~0x0u;
L_251ee80:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[10] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[13] = c->r[13] + 0x8u;
    return;
L_251ee94:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    goto L_251ee80;
}
void f_251eea4(Cpu *restrict c) {
    FN_ENTER(0x251eea4u);
L_251eea4:;
    __attribute__((musttail)) return f_283b288(c);
}
void f_251eea8(Cpu *restrict c) {
    FN_ENTER(0x251eea8u);
L_251eea8:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { c->r[2] = ~0x0u; }
    if (COND_LT) { c->r[0] = c->r[2]; }
    if (COND_LT) { return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    if (COND_EQ) { c->r[0] = c->r[2]; }
    if (COND_EQ) { return; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_NE) { goto L_251eeec; }
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[2] = ~0x3u;
    if (COND_GE) { { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_GE) { c->r[2] = c->r[0] & 0x3fu; }
    c->r[0] = c->r[2];
    return;
L_251eeec:;
    c->r[2] = 0x2u;
    c->r[0] = c->r[2];
    return;
}
void f_251eef8(Cpu *restrict c) {
    FN_ENTER(0x251eef8u);
L_251eef8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[4] = c->r[2];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_251ef38; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { goto L_251ef44; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_NE) { goto L_251ef4c; }
    c->r[2] = ~0x3u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_LT) { goto L_251ef70; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = c->r[1] & 0x3fu;
    goto L_251ef50;
L_251ef38:;
    c->r[2] = ~0x0u;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_251ef44:;
    c->r[5] = 0x1u;
    goto L_251ef50;
L_251ef4c:;
    c->r[5] = 0x2u;
L_251ef50:;
    c->r[1] = c->r[4];
    c->r[14] = 0x251ef58u; f_2843100(c);
    { uint32_t r = c->r[0] * c->r[5]; c->r[2] = r; }
    c->r[0] = 0x19u;
    c->r[1] = c->r[4] + (c->r[4] << 1);
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[2] = ~0x3u; }
L_251ef70:;
    c->r[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251ef78(Cpu *restrict c) {
    FN_ENTER(0x251ef78u);
L_251ef78:;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[1] = 0x5803u;
    c->r[0] = c->r[1] + (c->r[0] << 11);
    c->r[0] = c->r[0] & 0xfffff800u;
    return;
}
void f_251ef8c(Cpu *restrict c) {
    FN_ENTER(0x251ef8cu);
L_251ef8c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_251eff8; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x251efb4u; f_2843130(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251eff8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5803u;
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[4] << 2);
    c->r[5] = c->r[1] + (c->r[0] << 11);
    c->r[0] = c->r[4];
    c->r[5] = c->r[5] & 0xfffff800u;
    c->r[14] = 0x251efe4u; f_284313c(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[0];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x3fa8u;
    c->r[5] = c->r[0] + c->r[1];
L_251eff8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251f004(Cpu *restrict c) {
    FN_ENTER(0x251f004u);
L_251f004:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xcu;
    c->r[6] = c->r[1];
    c->r[8] = c->r[3];
    c->r[7] = c->r[2];
    c->r[4] = c->r[0];
    c->r[9] = ~0x0u;
    (void)f_subs(c, c->r[6], 0x3e80u);
    if (COND_LT) { goto L_251f048; }
    if (COND_NE) { c->r[0] = 0xbb80u; }
    if (COND_NE) { (void)f_subs(c, c->r[6], c->r[0]); }
    if (COND_EQ) { goto L_251f05c; }
    c->r[0] = 0x5dc0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_251f05c; }
    goto L_251f2bc;
L_251f048:;
    (void)f_subs(c, c->r[6], 0x1f40u);
    if (COND_EQ) { goto L_251f05c; }
    c->r[0] = 0x2ee0u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_251f2bc; }
L_251f05c:;
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LS) { c->r[0] = c->r[8] - 0x800u; }
    if (COND_LS) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_HI) { goto L_251f2bc; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_251f2bc; }
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x251f080u; f_2843130(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251f0a0; }
    c->r[0] = c->r[7] + (c->r[7] << 2);
    c->r[1] = 0x5803u;
    c->r[5] = c->r[1] + (c->r[0] << 11);
    c->r[0] = 0x0u;
    c->r[5] = c->r[5] & 0xfffff800u;
    goto L_251f0dc;
L_251f0a0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5803u;
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[7] << 2);
    c->r[5] = c->r[1] + (c->r[0] << 11);
    c->r[0] = c->r[7];
    c->r[5] = c->r[5] & 0xfffff800u;
    c->r[14] = 0x251f0c8u; f_284313c(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[0];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x3fa8u;
    c->r[0] = c->r[0] + c->r[1];
L_251f0dc:;
    c->r[1] = c->r[0] - c->r[5];
    c->r[0] = c->r[4];
    c->r[14] = 0x251f0e8u; f_283aad8(c);
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x251f0f0u; f_2843130(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251f2bc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3fa8u;
    c->r[10] = 0x0u;
    c->r[2] = c->r[4] + 0x8u;
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[0] + c->r[1];
    c->r[0] = 0x37d0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[10]); }
    c->r[14] = 0x251f140u; f_2843148(c);
    c->r[9] = ~0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251f2bc; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->r[1] = 0x1f40u;
    c->r[5] = c->r[4] + c->r[5];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e80u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x14u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x61a8u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x251f1b4u; f_2843154(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_251f2bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2720u;
    c->r[2] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x251f1d0u; f_2842a64(c);
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = 0xfaau;
    c->r[14] = 0x251f1e0u; f_2842a64(c);
    c->r[1] = 0xbb8u;
    c->r[0] = 0xfc18u;
    c->r[5] = 0x1u;
    { uint32_t r = c->r[7] * c->r[6] + c->r[1]; c->r[1] = r; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    c->r[6] = 0x451u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[1] = 0x851fu;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 5);
    c->r[1] = c->r[2] + (c->r[1] >> 31);
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x18u;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1388u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = 0x4dd3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10620000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x37d4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x37dcu;
    c->r[1] = 0x7fffu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x3cu;
    c->r[14] = 0x251f28cu; f_2842ba8(c);
    c->r[0] = (c->r[0] << 8);
    c->r[1] = 0x37d8u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3808u;
    c->r[1] = 0x3e9u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x37f0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3800u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4] + 0xacu;
    c->r[14] = 0x251f2bcu; f_2843160(c);
L_251f2bc:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251f2c8(Cpu *restrict c) {
    FN_ENTER(0x251f2c8u);
L_251f2c8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x8u;
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[8] = c->r[2];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[7], 0x3e80u);
    if (COND_LT) { goto L_251f308; }
    if (COND_NE) { c->r[0] = 0xbb80u; }
    if (COND_NE) { (void)f_subs(c, c->r[7], c->r[0]); }
    if (COND_EQ) { goto L_251f31c; }
    c->r[0] = 0x5dc0u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_251f31c; }
    goto L_251f330;
L_251f308:;
    (void)f_subs(c, c->r[7], 0x1f40u);
    if (COND_EQ) { goto L_251f31c; }
    c->r[0] = 0x2ee0u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_251f330; }
L_251f31c:;
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LS) { c->r[0] = c->r[8] - 0x800u; }
    if (COND_LS) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_LS) { goto L_251f34c; }
L_251f330:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = 0x0u;
    if (COND_NE) { c->r[0] = ~0x0u; }
L_251f33c:;
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
L_251f340:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_251f34c:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_251f330; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x251f35cu; f_2843130(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_251f3a8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5803u;
    c->r[0] = c->r[0] + 0x3u;
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6] + (c->r[6] << 2);
    c->r[5] = c->r[1] + (c->r[0] << 11);
    c->r[0] = c->r[6];
    c->r[5] = c->r[5] & 0xfffff800u;
    c->r[14] = 0x251f394u; f_284313c(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + c->r[0];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x3fa8u;
    c->r[0] = c->r[0] + c->r[1];
L_251f3a8:;
    c->r[14] = 0x251f3acu; f_283b27c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_251f3ec; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[3] = c->r[8];
    c->r[14] = 0x251f3ccu; f_284316c(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_251f340; }
    c->r[0] = c->r[5];
    c->r[14] = 0x251f3e4u; f_283b288(c);
    c->r[5] = 0x0u;
    goto L_251f340;
L_251f3ec:;
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[5] = 0x0u;
    if (COND_NE) { c->r[0] = ~0x6u; }
    goto L_251f33c;
}
void f_251f3fc(Cpu *restrict c) {
    FN_ENTER(0x251f3fcu);
L_251f3fc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[10] = c->r[2];
    c->r[9] = c->r[3];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_251f47c; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x47000000u;
    c->v.s[18] = 0xc7000000u;
    c->v.s[20] = 0x46fffe00u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[10];
    { uint32_t r = c->r[1] * c->r[9] + c->r[0]; c->r[0] = r; }
    c->r[4] = (c->r[1] << 2);
    c->r[6] = c->r[8] + (c->r[0] << 2);
L_251f450:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = vmaxnm_f(c->v.f[0], c->v.f[18]);
    c->v.f[0] = vminnm_f(c->v.f[0], c->v.f[20]);
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0x251f468u; f_2843178(c);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[6] = c->r[6] + c->r[4];
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    if (COND_NE) { goto L_251f450; }
L_251f47c:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_251f4ec; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_251f580; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x47000000u;
    c->v.s[18] = 0xc7000000u;
    c->v.s[20] = 0x46fffe00u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[10];
    c->r[1] = c->r[0];
    { uint32_t r = c->r[1] * c->r[9] + c->r[2]; c->r[0] = r; }
    c->r[6] = (c->r[1] << 2);
    c->r[4] = c->r[8] + (c->r[0] << 2);
L_251f4b8:;
    c->v.s[0] = LD32(c->r[4]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = vmaxnm_f(c->v.f[0], c->v.f[18]);
    c->v.f[0] = vminnm_f(c->v.f[0], c->v.f[20]);
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0x251f4d0u; f_2843178(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + c->r[6];
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[0] = c->r[1] + (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    if (COND_NE) { goto L_251f4b8; }
    goto L_251f580;
L_251f4ec:;
    (void)f_adds(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_251f580; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_251f580; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_251f5f8; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x47000000u;
    c->v.s[18] = 0xc7000000u;
    c->v.s[20] = 0x46fffe00u;
    c->r[4] = 0x1u;
    c->r[1] = c->r[0];
    { uint32_t r = c->r[1] * c->r[9]; c->r[0] = r; }
    c->r[6] = (c->r[1] << 2);
    c->r[0] = c->r[8] + (c->r[0] << 2);
    c->r[5] = c->r[0] + 0x4u;
L_251f530:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[5];
    c->r[8] = c->r[10];
L_251f53c:;
    c->v.s[0] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[0] * c->v.f[16];
    c->v.f[0] = vmaxnm_f(c->v.f[0], c->v.f[18]);
    c->v.f[0] = vminnm_f(c->v.f[0], c->v.f[20]);
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0x251f554u; f_2843178(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + c->r[6];
    c->r[8] = f_subs(c, c->r[8], 0x1u);
    c->r[0] = c->r[1] + (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); c->r[9] = c->r[9] + 0x4u; }
    if (COND_NE) { goto L_251f53c; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_251f530; }
L_251f580:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x800u;
    (void)f_adds(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0xf800u; }
    if (COND_EQ) { c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_251f5f8; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[10] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251f5bc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[1] = r; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x1u;
L_251f5bc:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_EQ) { goto L_251f5f8; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10] - c->r[2];
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x4u;
L_251f5d4:;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x8u;
    if (COND_NE) { goto L_251f5d4; }
L_251f5f8:;
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_251f614(Cpu *restrict c) {
    FN_ENTER(0x251f614u);
L_251f614:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251f654; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = (c->r[12] << 1);
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t r = c->r[12] * c->r[3] + c->r[4]; c->r[4] = r; }
    c->r[4] = c->r[0] + (c->r[4] << 1);
L_251f644:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = c->r[4] + c->r[8]; c->r[5] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); c->r[7] = c->r[7] + 0x4u; }
    if (COND_NE) { goto L_251f644; }
L_251f654:;
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_LT) { goto L_251f694; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251f6f4; }
    { uint32_t r = c->r[12] * c->r[3] + c->r[14]; c->r[3] = r; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->r[0] = c->r[0] + (c->r[3] << 1);
    c->r[3] = (c->r[12] << 1);
L_251f678:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = c->r[0] + c->r[3]; c->r[7] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[7] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); c->r[4] = c->r[4] + 0x4u; }
    if (COND_NE) { goto L_251f678; }
    goto L_251f6f4;
L_251f694:;
    (void)f_adds(c, c->r[14], 0x2u);
    if (COND_NE) { goto L_251f6f4; }
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_LT) { goto L_251f6f4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251f760; }
    { uint32_t r = c->r[12] * c->r[3]; c->r[3] = r; }
    c->r[8] = 0x1u;
    c->r[0] = c->r[0] + (c->r[3] << 1);
    c->r[3] = (c->r[12] << 1);
    c->r[14] = c->r[0] + 0x2u;
L_251f6c0:;
    c->r[4] = c->r[14];
    c->r[5] = c->r[1];
    c->r[6] = c->r[2];
L_251f6cc:;
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = c->r[4] + c->r[3]; c->r[7] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + 0x4u; }
    if (COND_NE) { goto L_251f6cc; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[14] = c->r[14] + 0x2u;
    (void)f_subs(c, c->r[8], c->r[12]);
    if (COND_NE) { goto L_251f6c0; }
L_251f6f4:;
    c->r[0] = 0x800u;
    (void)f_adds(c, c->r[12], 0x2u);
    if (COND_EQ) { c->r[0] = 0xf800u; }
    if (COND_EQ) { c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_251f760; }
    c->r[3] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_251f728; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
L_251f728:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_251f760; }
    c->r[1] = c->r[1] + (c->r[3] << 2);
    c->r[2] = c->r[2] - c->r[3];
    c->r[1] = c->r[1] + 0x4u;
L_251f73c:;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    { uint32_t ea = c->r[1] - 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[0]; c->r[3] = r; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x8u;
    if (COND_NE) { goto L_251f73c; }
L_251f760:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_251f764(Cpu *restrict c) {
    FN_ENTER(0x251f764u);
L_251f764:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[11] = c->r[13] + 0x8u;
    c->r[14] = 0x851fu;
    c->r[12] = c->r[0];
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x51eb0000u;
    c->r[4] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[14]) >> 32);
    c->r[0] = (uint32_t)((int32_t)c->r[4] >> 7);
    c->r[3] = c->r[0] + (c->r[4] >> 31);
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_GT) { goto L_251f848; }
    c->r[5] = 0x1388u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_251f7b4; }
    c->r[5] = 0x1392u;
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_251f7bc; }
    c->r[1] = (uint32_t)((int32_t)c->r[4] >> 4);
    c->r[1] = c->r[1] + (c->r[4] >> 31);
    goto L_251f7e4;
L_251f7b4:;
    c->r[1] = c->r[12];
    goto L_251f7ec;
L_251f7bc:;
    c->r[4] = 0x1389u;
    c->r[4] = c->r[1] - c->r[4];
    (void)f_subs(c, c->r[4], 0x5u);
    if (COND_HI) { goto L_251f848; }
    c->r[1] = c->r[2] + (c->r[2] << 1);
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[14]) >> 32);
    c->r[5] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[1] = c->r[5] + (c->r[1] >> 31);
    (void)f_subs(c, c->r[1], sh_lsl(c->r[3], c->r[4]));
    if (COND_GE) { c->r[1] = sh_lsl(c->r[3], c->r[4]); }
L_251f7e4:;
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_GT) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
L_251f7ec:;
    c->r[3] = 0x64u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_251f844; }
    c->r[3] = 0x190u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { c->r[3] = 0xc8u; }
    if (COND_NE) { { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_251f844; }
    c->r[3] = 0x32u;
    c->r[5] = c->r[2] + (c->r[2] << 1);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_EQ) { goto L_251f844; }
    c->r[3] = 0x19u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_251f844:;
    c->r[0] = c->r[1];
L_251f848:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_251f84c(Cpu *restrict c) {
    FN_ENTER(0x251f84cu);
L_251f84c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xd30u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = 0x851fu;
    c->r[7] = 0x1392u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x51eb0000u;
    (void)f_subs(c, c->r[2], c->r[7]);
    c->r[4] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[12] * (int32_t)c->r[5]) >> 32);
    if (COND_NE) { goto L_251f938; }
    c->r[7] = (uint32_t)((int32_t)c->r[4] >> 6);
    c->r[7] = c->r[7] + (c->r[4] >> 31);
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GT) { goto L_251f938; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[4] >> 7);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[24] = 0x3f800000u;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = 0x0u;
    c->r[7] = c->r[0] + (c->r[4] >> 31);
    c->r[0] = 0x73c680u;
    (void)f_subs(c, c->r[14], 0x0u);
    { uint32_t ea = 0x251f8bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u - c->r[2];
    c->r[3] = c->r[3] & 0x3u;
    c->r[4] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + c->v.f[24];
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    ST32(c->r[13] + 76u, c->v.s[0]);
    if (COND_EQ) { goto L_251f978; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[9] = (c->r[7] << 1) - c->r[14];
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[0] / c->v.f[2];
    ST32(c->r[13] + 80u, c->v.s[2]);
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] - c->r[9];
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->v.f[2] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    ST32(c->r[13] + 84u, c->v.s[0]);
    goto L_251f988;
L_251f938:;
    c->r[0] = (uint32_t)((int32_t)c->r[4] >> 7);
    c->r[7] = c->r[0] + (c->r[4] >> 31);
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GT) { goto L_252034c; }
    c->r[6] = 0x1388u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_2520364; }
    c->r[6] = 0x1392u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_NE) { goto L_252036c; }
    c->r[2] = (uint32_t)((int32_t)c->r[4] >> 4);
    c->r[2] = c->r[2] + (c->r[4] >> 31);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { goto L_252034c; }
    goto L_252039c;
L_251f978:;
    c->r[0] = 0x1u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
L_251f988:;
    c->r[0] = sdiv32(c->r[0], c->r[7]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x18u);
    c->r[1] = c->r[0];
    if (COND_GE) { c->r[1] = 0x18u; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_251fad0; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[12], 0x190u);
    if (COND_LT) { goto L_251fa68; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x3f800000u;
    c->r[8] = 0x0u;
    c->r[10] = ~0x1u;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
L_251f9d4:;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[5] * c->r[6] + c->r[9]; c->r[3] = r; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->pc = c->r[14]; c->r[14] = 0x251f9ecu; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[1] = 0x0u;
    if (COND_EQ) { { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; } }
L_251fa00:;
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[2] = c->r[0] - c->r[7];
    c->r[7] = c->r[0];
    c->v.s[2] = c->r[2];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    if (COND_LT) { goto L_251fa00; }
    c->v.f[2] = c->v.f[16] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0xb8u;
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[5] + c->r[1];
    c->r[5] = c->r[5] + 0x1u;
    c->r[2] = c->r[2] + (c->r[1] << 2);
    (void)f_subs(c, c->r[5], c->r[3]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    ST32(c->r[2], c->v.s[0]);
    c->r[2] = c->r[13] + 0x4cu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    ST32(c->r[1], c->v.s[2]);
    if (COND_LT) { goto L_251f9d4; }
    goto L_251fad0;
L_251fa68:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = 0x0u;
    c->r[8] = c->r[0] + (c->r[1] << 2);
    c->r[0] = c->r[13] + 0x4cu;
    c->r[7] = c->r[0] + (c->r[1] << 2);
L_251fa84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = ~0x1u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[6]; c->r[14] = 0x251faacu; rt_dispatch(c);
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[9] = c->r[9] + c->r[10];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); c->r[8] = c->r[8] + 0x4u; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + 0x4u; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_251fa84; }
L_251fad0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + c->r[1];
    c->r[2] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_251fb0c; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[7], 0x18u);
    if (COND_GE) { c->r[7] = 0x18u; }
    goto L_251fb10;
L_251fb0c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_251fb10:;
    c->r[2] = (c->r[3] << 4) - c->r[3];
    c->r[3] = 0x28u;
    c->r[1] = 0x851fu;
    c->v.s[26] = 0x0u;
    (void)f_subs(c, c->r[0], 0x7d00u);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[2] = c->r[3] + (c->r[2] << 2);
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->v.s[0] = c->r[2];
    c->v.s[18] = c->v.s[26];
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 7);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[1] = c->r[2] + (c->r[1] >> 31);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_251fb78; }
    c->v.s[18] = c->v.s[24];
    c->r[1] = 0xfb8fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_251fb78; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = 0x42a00000u;
    c->r[0] = c->r[0] - 0x50u;
    c->v.s[4] = c->r[0];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[18] = c->v.f[4] / c->v.f[2];
L_251fb78:;
    c->r[0] = c->v.s[0];
    c->r[1] = 0x40u;
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x128u;
    c->r[14] = 0x251fb90u; f_283adc0(c);
    c->v.s[0] = LD32(c->r[13] + 76u);
    c->v.s[2] = LD32(c->r[13] + 184u);
    c->r[0] = 0x2f9u;
    c->v.s[20] = 0x3d4ccccdu;
    c->v.s[22] = 0xc0000000u;
    c->r[8] = c->r[4] + 0x4u;
    c->r[9] = ~c->r[7];
    c->r[6] = 0x0u;
    c->r[10] = 0x1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x50150000u;
    { uint32_t ea = c->r[11] - 0x664u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x660u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x65cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x658u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x654u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x650u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x64cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x648u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x644u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x640u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x63cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x638u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x634u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x630u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x62cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x628u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x4cu;
    c->r[0] = c->r[0] + 0x4u;
    c->v.f[28] = c->v.f[0] + c->v.f[26];
    c->v.f[30] = c->v.f[2] + c->v.f[26];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_251fc0c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = sh_lsl(c->r[10], c->r[6]);
    c->v.s[2] = c->v.s[26];
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[0] = c->r[1] + sh_lsl(c->r[0], c->r[6]);
    c->r[1] = c->r[7];
    if (COND_LE) { c->r[1] = sh_lsl(c->r[10], c->r[6]); }
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.f[17] = (float)(int32_t)c->v.s[0];
    c->v.s[0] = c->v.s[26];
    if (COND_LT) { goto L_251fcc0; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->v.s[0] = c->v.s[30];
    c->v.s[2] = c->v.s[28];
    c->r[3] = 0x0u;
    c->v.s[4] = COND_EQ ? c->v.s[30] : c->v.s[26];
    c->v.s[6] = COND_EQ ? c->v.s[28] : c->v.s[26];
    if (COND_EQ) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_251fcc0; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = ~c->r[4];
    c->v.s[2] = c->v.s[6];
    c->v.s[0] = c->v.s[4];
    c->r[1] = c->r[8] + (c->r[3] << 2);
    (void)f_subs(c, c->r[5], c->r[9]);
    if (COND_LE) { c->r[5] = c->r[9]; }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    c->r[3] = 0x0u - c->r[3];
    c->r[3] = c->r[3] - c->r[5];
L_251fc90:;
    c->v.s[4] = LD32(c->r[2] - 4u);
    c->v.s[8] = LD32(c->r[1] - 4u);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[10] = LD32(c->r[1]);
    c->r[1] = c->r[1] + 0x8u;
    c->r[2] = c->r[2] + 0x8u;
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    c->v.f[2] = c->v.f[2] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[10];
    if (COND_NE) { goto L_251fc90; }
L_251fcc0:;
    { uint32_t r = c->r[0] * c->r[0]; c->r[0] = r; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[4] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[22];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    vfp_cmp_f(c, c->v.f[26], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GE ? c->v.s[26] : c->v.s[0];
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_251fd00; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x251fd00u; f_2843184(c);
L_251fd00:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    c->v.s[0] = c->v.s[24];
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_251fd28; }
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_251fd28; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x251fd28u; f_2843184(c);
L_251fd28:;
    c->v.s[2] = c->v.s[24];
    c->r[14] = c->r[11] - 0x400u;
    c->r[0] = c->r[14] - 0x264u;
    c->r[0] = c->r[0] + (c->r[4] << 2);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[0] = c->v.f[17] * c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = c->r[13] + 0x128u;
    { uint32_t ea = c->r[0] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_251fc0c; }
    (void)f_subs(c, c->r[7], 0x2u);
    c->r[14] = c->r[13] + 0xb8u;
    if (COND_LT) { goto L_25200dc; }
    c->v.s[24] = 0x0u;
    c->v.s[26] = 0x3f800000u;
    c->r[0] = 0x0u - c->r[7];
    c->r[8] = 0x1u;
    c->r[10] = ~0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
L_251fd88:;
    c->r[4] = c->r[11] - 0x400u;
    c->r[9] = 0x0u;
    c->r[0] = c->r[4] - 0x264u;
    c->r[1] = c->r[0];
    c->r[0] = c->r[2] - 0x1u;
    c->r[5] = c->r[1] + (c->r[0] << 6);
    c->r[3] = c->r[1] + (c->r[2] << 6);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x128u;
    c->r[6] = c->r[0] + (c->r[2] << 6);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbu;
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcu;
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xdu;
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] - c->r[2];
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[3] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xeu;
    c->v.f[28] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x4cu;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14] + (c->r[2] << 2);
    c->r[14] = c->r[1];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_251fec4:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[4] = sh_lsl(c->r[0], c->r[9]);
    { uint32_t ea = c->r[1] + (c->r[4] << 2); ST32(ea, c->r[0]); c->r[1] = ea; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[30] = LD32(c->r[2]);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LE) { goto L_251fef8; }
    goto L_251ff24;
L_251fee8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->v.s[30] = c->v.s[0];
L_251fef0:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_GT) { goto L_251ff24; }
L_251fef8:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[10] + sh_lsl(c->r[8], c->r[0]);
    c->r[3] = c->r[5] + (c->r[2] << 2);
    c->v.s[0] = LD32(c->r[3]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_251fef0; }
    goto L_251fee8;
L_251ff24:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[14]);
    c->v.s[2] = c->v.s[24];
    c->r[0] = c->r[1] + sh_lsl(c->r[0], c->r[9]);
    c->r[1] = c->r[14];
    if (COND_LE) { c->r[1] = c->r[4]; }
    c->v.s[0] = c->r[0];
    c->r[12] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[12], 0x1u);
    c->v.f[17] = (float)(int32_t)c->v.s[0];
    c->v.s[0] = c->v.s[24];
    if (COND_LT) { goto L_251ffec; }
    c->v.s[0] = c->v.s[24];
    c->v.s[2] = c->v.s[24];
    c->r[2] = 0x0u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_251ff88; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[0] + c->v.f[24];
    c->v.f[2] = c->v.f[2] + c->v.f[24];
L_251ff88:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_251ffec; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~c->r[4];
    c->r[3] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = (c->r[2] << 2);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    c->r[1] = c->r[3] - c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
L_251ffb4:;
    c->r[6] = c->r[3] + c->r[2];
    c->r[0] = c->r[7] + c->r[2];
    c->r[3] = c->r[3] + 0x8u;
    c->r[7] = c->r[7] + 0x8u;
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    if (COND_NE) { goto L_251ffb4; }
L_251ffec:;
    { uint32_t r = c->r[12] * c->r[12]; c->r[0] = r; }
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[4] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[4];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[22];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    vfp_cmp_f(c, c->v.f[24], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GE ? c->v.s[24] : c->v.s[0];
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_2520030; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x252002cu; f_2843184(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
L_2520030:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    c->v.s[0] = c->v.s[26];
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_252005c; }
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_252005c; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x2520058u; f_2843184(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
L_252005c:;
    c->v.s[2] = c->v.s[26];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[14], c->r[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    c->r[0] = c->r[0] + (c->r[4] << 2);
    ST32(c->r[0], c->v.s[30]);
    c->v.f[0] = c->v.f[17] * c->v.f[2];
    if (COND_GE) { goto L_252008c; }
    c->v.s[2] = c->r[4];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[0] / c->v.f[2];
L_252008c:;
    c->v.f[0] = c->v.f[30] + c->v.f[0];
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x4u);
    ST32(c->r[0], c->v.s[0]);
    if (COND_NE) { goto L_251fec4; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = c->r[13] + 0xb8u;
    c->r[0] = c->r[0] + 0x4u;
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_251fd88; }
L_25200dc:;
    c->r[4] = c->r[11] - 0x400u;
    c->r[2] = c->r[7] - 0x1u;
    c->r[1] = 0x1u;
    c->r[8] = 0x1u;
    c->r[0] = c->r[4] - 0x264u;
    c->r[3] = c->r[0] + (c->r[2] << 6);
    c->v.s[0] = LD32(c->r[3] + 4u);
    c->v.s[2] = LD32(c->r[3] + 8u);
    c->v.s[4] = LD32(c->r[3] + 12u);
    c->v.s[6] = LD32(c->r[3] + 16u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[1] = 0x2u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = LD32(c->r[3] + 20u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    if (COND_MI) { c->r[1] = 0x3u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    c->v.s[4] = LD32(c->r[3] + 24u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    if (COND_MI) { c->r[1] = 0x4u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[6] : c->v.s[0];
    c->v.s[6] = LD32(c->r[3] + 56u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[1] = 0x5u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = LD32(c->r[3] + 28u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    if (COND_MI) { c->r[1] = 0x6u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    c->v.s[4] = LD32(c->r[3] + 32u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[1] = 0x7u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = LD32(c->r[3] + 36u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    if (COND_MI) { c->r[1] = 0x8u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    c->v.s[4] = LD32(c->r[3] + 40u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[1] = 0x9u; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = LD32(c->r[3] + 44u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    if (COND_MI) { c->r[1] = 0xau; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    c->v.s[4] = LD32(c->r[3] + 48u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[1] = 0xbu; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = LD32(c->r[3] + 52u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    if (COND_MI) { c->r[1] = 0xcu; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    c->v.s[4] = LD32(c->r[3] + 60u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    if (COND_MI) { c->r[1] = 0xdu; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    if (COND_MI) { c->r[1] = 0xeu; }
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[6] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = 0xfu; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_25202b4; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[7] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_EQ) { goto L_25202c4; }
    c->r[7] = 0x0u - c->r[3];
    c->r[3] = c->r[2];
    c->r[0] = c->r[13] + 0x128u;
L_252029c:;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    c->r[7] = f_adds(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[1] + (c->r[3] << 6); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] - 0x1u;
    if (COND_NE) { goto L_252029c; }
    goto L_25202cc;
L_25202b4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_2520310;
L_25202c4:;
    c->r[3] = c->r[2];
    c->r[0] = c->r[13] + 0x128u;
L_25202cc:;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_CC) { goto L_2520310; }
    c->r[2] = c->r[0] - 0x40u;
    c->r[7] = c->r[0] - 0x80u;
L_25202dc:;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    c->r[6] = c->r[3] - 0x4u;
    (void)f_subs(c, c->r[3], 0x3u);
    { uint32_t ea = c->r[1] + (c->r[3] << 6); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + (c->r[3] << 6); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[7] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + (c->r[3] << 6); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[7] + (c->r[1] << 2);
    c->r[1] = c->r[1] + (c->r[3] << 6);
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[1] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GT) { goto L_25202dc; }
L_2520310:;
    c->r[0] = sh_lsl(c->r[8], c->r[1]);
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_252033c; }
    c->r[0] = c->r[14] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
L_252033c:;
    c->r[0] = sh_lsl(c->r[4], c->r[1]);
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_GT) { goto L_252033c; }
L_252034c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = ~0x0u; }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2520364:;
    c->r[2] = c->r[1];
    goto L_252039c;
L_252036c:;
    c->r[3] = 0x1389u;
    c->r[3] = c->r[2] - c->r[3];
    (void)f_subs(c, c->r[3], 0x5u);
    if (COND_HI) { goto L_252034c; }
    c->r[2] = c->r[12] + (c->r[12] << 1);
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[5]) >> 32);
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 4);
    c->r[2] = c->r[6] + (c->r[2] >> 31);
    (void)f_subs(c, c->r[2], sh_lsl(c->r[7], c->r[3]));
    if (COND_GE) { c->r[2] = sh_lsl(c->r[7], c->r[3]); }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { goto L_252034c; }
L_252039c:;
    c->r[3] = 0x64u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_EQ) { goto L_25203f4; }
    c->r[3] = 0x190u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_NE) { c->r[3] = 0xc8u; }
    if (COND_NE) { { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[12]); }
    if (COND_EQ) { goto L_25203f4; }
    c->r[3] = 0x32u;
    c->r[7] = c->r[12] + (c->r[12] << 1);
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[12]); }
    if (COND_EQ) { goto L_25203f4; }
    c->r[3] = 0x19u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_EQ) { c->r[0] = c->r[2]; }
    goto L_252034c;
L_25203f4:;
    c->r[0] = c->r[2];
    goto L_252034c;
}
void f_2520400(Cpu *restrict c) {
    FN_ENTER(0x2520400u);
L_2520400:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    c->r[2] = sdiv32(c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = 0x7fe7u;
    c->r[4] = 0x0u;
    c->r[9] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc0000u;
    (void)f_subs(c, c->r[2], 0x32u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    if (COND_LE) { c->r[2] = 0x32u; }
    (void)f_subs(c, c->r[1], 0x4u);
    c->r[2] = udiv32(c->r[3], c->r[2]);
    c->r[3] = 0x7fffu;
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_2520518; }
    c->r[1] = c->r[1] - 0x3u;
    c->r[0] = c->r[0] + 0xeu;
    c->r[3] = 0x0u;
    c->r[9] = 0x0u;
    c->r[4] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
L_2520468:;
    { uint32_t ea = c->r[0] - 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x4u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0xau; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[10] = (uint32_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[6] = (uint32_t)((int32_t)c->r[10] >> 2);
    { uint32_t ea = c->r[0] - 0x6u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = v; }
    c->r[1] = c->r[6] + (uint32_t)((int32_t)c->r[1] >> 2);
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[8] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[8] >> 2);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[8] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->r[14] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[8] >> 0));
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[14] >> 2);
    c->r[9] = c->r[9] + (uint32_t)((int32_t)c->r[1] >> 10);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[12] >> 0));
    c->r[2] = (c->r[2] >> 2);
    c->r[1] = c->r[2] + (c->r[1] >> 2);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[1] = c->r[1] + (c->r[2] >> 2);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[1] = c->r[1] + (c->r[2] >> 2);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[4] + (c->r[1] >> 10);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[2] = (c->r[2] >> 2);
    c->r[1] = c->r[2] + (c->r[1] >> 2);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[10] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    c->r[1] = c->r[1] + (c->r[2] >> 2);
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[8] >> 0) * (int32_t)(int16_t)(c->r[8] >> 0));
    c->r[1] = c->r[1] + (c->r[2] >> 2);
    c->r[3] = c->r[3] + (c->r[1] >> 10);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_LT) { goto L_2520468; }
L_2520518:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[9] - c->r[1];
    c->r[3] = c->r[3] - c->r[0];
    c->r[7] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 16);
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[7] = (c->r[2] << 16);
    c->r[2] = (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[7] = 0x0u;
    { uint32_t r = c->r[2] * c->r[5] + c->r[1]; c->r[1] = r; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t r = c->r[5] * c->r[6]; c->r[5] = r; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[5] >> 15);
    if (COND_LE) { c->r[1] = c->r[7]; }
    { uint32_t r = c->r[2] * c->r[3] + c->r[0]; c->r[0] = r; }
    c->r[3] = c->r[4] - c->r[12];
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    { uint32_t r = c->r[5] * c->r[6]; c->r[6] = r; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = c->r[7]; }
    c->r[6] = c->r[12] + (uint32_t)((int32_t)c->r[6] >> 15);
    { uint32_t r = c->r[2] * c->r[3] + c->r[6]; c->r[2] = r; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GT) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[0], c->r[7]);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[7]); }
    if (COND_GT) { c->r[7] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0xd2u);
    if (COND_LE) { goto L_2520674; }
    c->r[14] = 0x25205acu; f_284286c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x25205b8u; f_284286c(c);
    c->r[6] = c->r[0];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[5]);
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[14] = 0x25205c8u; f_284286c(c);
    c->r[8] = c->r[0];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[14] = 0x25205d4u; f_284286c(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LT) { c->r[7] = c->r[0]; }
    c->r[0] = 0x1u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    c->r[14] = 0x25205f8u; f_28429ec(c);
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[9]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[0] >> 16));
    c->r[1] = c->r[2] + (uint32_t)(int32_t)(int16_t)(c->r[9]);
    c->r[2] = f_subs(c, c->r[2], c->r[3]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[0] = 0x40000000u - c->r[0];
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = (c->r[2] << 15) - c->r[2];
    c->r[5] = sdiv32(c->r[2], c->r[1]);
    c->r[14] = 0x2520628u; f_284286c(c);
    c->r[1] = (c->r[5] << 16);
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 15);
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 16) - c->r[1];
    c->r[0] = sdiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x28fu;
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    { uint32_t ea = c->r[10] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[10] + 0xeu; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[10] + 0xeu; ST16(ea, c->r[0]); }
    goto L_2520678;
L_2520674:;
    { uint32_t ea = c->r[10] + 0xeu; uint32_t v = LD16(ea); c->r[0] = v; }
L_2520678:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[2] = 0x7fffu;
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[1] = (c->r[0] << 2);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { c->r[2] = (c->r[0] << 2); }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
