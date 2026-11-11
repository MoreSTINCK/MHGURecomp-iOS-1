#include "cpu.h"
#include "neon_rt.h"
void f_24f0ec8(Cpu *c);
void f_24f120c(Cpu *c);
void f_283aa78(Cpu *c);
void f_283abec(Cpu *c);
void f_283b27c(Cpu *c);
void f_284286c(Cpu *c);
void f_2842890(Cpu *c);
void f_284289c(Cpu *c);
void f_28428b4(Cpu *c);
void f_2842914(Cpu *c);
void f_284292c(Cpu *c);
void f_2842944(Cpu *c);
void f_2842974(Cpu *c);
void f_2842980(Cpu *c);
void f_284298c(Cpu *c);
void f_2842998(Cpu *c);
void f_28429a4(Cpu *c);
void f_28429b0(Cpu *c);
void f_28429bc(Cpu *c);
void f_28429c8(Cpu *c);
void f_28429d4(Cpu *c);
void f_28429e0(Cpu *c);
void f_28429ec(Cpu *c);
void f_28429f8(Cpu *c);
void f_2842a04(Cpu *c);
void f_2842a10(Cpu *c);
void f_2842a1c(Cpu *c);
void f_2842a28(Cpu *c);
void f_2842a34(Cpu *c);
void f_2842a40(Cpu *c);
void f_24eee2c(Cpu *restrict c) {
    FN_ENTER(0x24eee2cu);
L_24eee2c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x174u;
    c->r[9] = c->r[0];
    c->r[0] = 0x76d0d4u;
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
    c->r[14] = c->r[2];
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[11] - 0xa8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x24eee68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24eeea0; }
    c->r[0] = 0x86a0u;
    c->r[6] = c->r[3];
    c->r[5] = c->r[14];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[14] = 0x24eee88u; f_283b27c(c);
    c->r[1] = 0x76d0a0u;
    c->r[14] = c->r[5];
    c->r[5] = 0x0u;
    c->r[3] = c->r[6];
    { uint32_t ea = 0x24eeea0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_24eeea0:;
    c->r[1] = 0x76d084u;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x24eeeb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[8] = r; }
    { uint32_t ea = c->r[1] + 4u; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_24eef10; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
L_24eeef0:;
    (void)f_subs(c, c->r[8], sh_lsl(c->r[0], c->r[2]));
    if (COND_EQ) { goto L_24eef0c; }
    c->r[5] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = c->r[5];
    if (COND_LT) { goto L_24eeef0; }
    goto L_24eef10;
L_24eef0c:;
    c->r[5] = c->r[2];
L_24eef10:;
    c->r[0] = ~0x0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_GT) { goto L_24f0eac; }
    c->r[1] = 0x4fbu;
    (void)f_subs(c, c->r[14], c->r[1]);
    if (COND_HI) { goto L_24f0eac; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_24f0eac; }
    c->r[0] = c->r[4] + 0x800u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[6]); }
    c->r[12] = (c->r[6] << 1);
    c->r[7] = c->r[9];
    { uint32_t r = c->r[0] * c->r[10]; c->r[0] = r; }
    c->r[0] = c->r[9] + (c->r[0] << 2);
    c->r[1] = c->r[0] + 0x54u;
    c->r[0] = c->r[10] + (c->r[10] << 1);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[0] = sh_lsl(c->r[0], c->r[5]);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0] - sh_lsl(c->r[2], c->r[5]);
    c->r[3] = sh_lsl(c->r[2], c->r[5]);
    c->r[2] = 0x2054u;
    c->r[2] = c->r[2] - (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[11] - 0xa4u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2000u;
    c->r[1] = c->r[1] + (c->r[4] << 2);
    c->r[4] = c->r[11] - 0x9cu;
L_24eefc0:;
    c->r[6] = c->r[7] + 0x54u;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[6]); }
    c->r[6] = c->r[7] + c->r[2];
    c->r[7] = c->r[7] + c->r[1];
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LT) { goto L_24eefc0; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LE) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24ef22c; }
    (void)f_subs(c, c->r[14], 0x1u);
    if (COND_LE) { goto L_24ef22c; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[12]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[9] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24ef064; }
    c->r[0] = c->r[11] - 0x94u;
    c->r[2] = c->r[14];
    c->r[4] = c->r[14];
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[0]); }
    c->r[14] = 0x24ef054u; f_2842974(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = c->r[4];
L_24ef064:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24ef0c8; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_24ef0c8; }
    c->r[0] = 0x2030u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t r = c->r[10] * c->r[0] + c->r[9]; c->r[0] = r; }
    c->r[0] = c->r[0] + 0x54u;
L_24ef094:;
    c->r[2] = c->r[12] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[2] = c->r[1] + 0x1u;
    if (COND_LE) { c->r[1] = c->r[6] + c->r[1]; }
    (void)f_subs(c, c->r[6], c->r[2]);
    c->r[1] = c->r[7] + (c->r[1] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x2u;
    c->r[1] = c->r[2];
    if (COND_NE) { goto L_24ef094; }
L_24ef0c8:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[12] = (c->r[14] << 3);
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[12]); }
    c->r[0] = clz32(c->r[2]);
    c->r[0] = c->r[1] + c->r[0];
    c->r[3] = c->r[0] - 0x20u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[3], (c->r[14] << 3));
    if (COND_GE) { goto L_24ef134; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_24ef154; }
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[4] = c->r[14];
    c->r[14] = 0x24ef118u; f_284292c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24ef9a0; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = c->r[4];
L_24ef134:;
    c->r[3] = c->r[12] + 0x20u;
    c->r[2] = clz32(c->r[2]);
    c->r[3] = c->r[3] - c->r[1];
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[12];
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
L_24ef154:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_24ef54c; }
    c->r[1] = c->r[3] + 0x10u;
    c->r[14] = 0x0u;
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_GT) { goto L_24ef584; }
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[14] = 0x24ef198u; f_284292c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24ef55c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[14] = 0x24ef1acu; f_2842914(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[4] + 0x4u;
    c->r[14] = 0x24ef1bcu; f_28428b4(c);
    c->r[1] = 0x10u;
    c->r[4] = c->r[0] + sh_lsl(c->r[1], c->r[4]);
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x24ef1d0u; f_28428b4(c);
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[0] - 0x1eu;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_GT) { goto L_24ef210; }
    c->r[0] = 0x67b02au;
    c->r[2] = 0x2u;
    c->r[1] = 0x24ef208u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0x24ef20cu; f_2842980(c);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
L_24ef210:;
    c->r[3] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xc00u;
    c->r[2] = c->r[4] - 0x1u;
    c->r[14] = c->r[1] + (c->r[3] << 10);
    goto L_24ef570;
L_24ef22c:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x2000u;
    c->r[1] = 0x2054u;
    c->r[5] = c->r[11] - 0x28u;
    c->r[7] = c->r[9];
    c->r[0] = c->r[0] + (c->r[3] << 2);
    c->r[3] = c->r[11] - 0x30u;
    c->r[1] = c->r[1] - (c->r[2] << 2);
    c->r[2] = 0x0u;
L_24ef250:;
    c->r[6] = c->r[7] + 0x54u;
    { uint32_t ea = c->r[5] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    c->r[6] = c->r[7] + c->r[1];
    c->r[7] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LT) { goto L_24ef250; }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    if (COND_GT) { goto L_24ef298; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_24ef974; }
L_24ef298:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] * c->r[10]; c->r[0] = r; }
    c->r[1] = c->r[2] & 0x1u;
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x76cc74u;
    { uint32_t ea = 0x24ef2c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x200u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = 0x600u; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_LT) { c->r[12] = c->r[0]; }
    (void)f_subs(c, c->r[3], c->r[12]);
    c->r[2] = c->r[12];
    if (COND_GT) { c->r[2] = c->r[3]; }
    (void)f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[2]); }
    if (COND_LE) { goto L_24ef370; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = (c->r[5] << 1);
    c->r[4] = 0x0u;
    c->r[14] = c->r[0] - c->r[3];
    c->r[0] = 0x2030u;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[5] << 1);
    { uint32_t r = c->r[10] * c->r[0]; c->r[0] = r; }
    c->r[6] = (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[3] << 1);
    c->r[0] = c->r[9] + c->r[0];
    c->r[0] = c->r[0] + 0x54u;
L_24ef330:;
    c->r[2] = c->r[14];
    c->r[3] = c->r[0];
L_24ef338:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[7] = c->r[6] + c->r[3];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[5] = c->r[5] - c->r[1];
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_GT) { c->r[5] = c->r[7]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[5]); }
    c->r[3] = c->r[3] + 0x2u;
    if (COND_NE) { goto L_24ef338; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_LT) { goto L_24ef330; }
L_24ef370:;
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_24ef45c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_GE) { goto L_24ef460; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_24ef39c:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[10] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
L_24ef3a8:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[9] << 1);
    c->r[9] = c->r[9] + 0x1u;
    c->r[1] = c->r[1] + (c->r[9] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[8] = c->r[10] + sh_lsl(c->r[0], c->r[2]);
    c->r[1] = c->r[1] - c->r[0];
    c->r[4] = sh_lsl(c->r[1], c->r[2]);
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_LT) { goto L_24ef408; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sh_lsl(c->r[0], c->r[2]);
    c->r[7] = c->r[4];
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + (c->r[0] << 1);
L_24ef3ec:;
    c->r[0] = c->r[6];
    c->r[14] = 0x24ef3f4u; f_284298c(c);
    c->r[6] = c->r[0];
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[0] = (uint32_t)((int32_t)c->r[6] >> 20);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); c->r[5] = c->r[5] + 0x2u; }
    if (COND_NE) { goto L_24ef3ec; }
L_24ef408:;
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x7fffu;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[8] << 1);
    c->r[1] = c->r[4];
    c->r[14] = 0x24ef424u; f_2842890(c);
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LT) { goto L_24ef3a8; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { goto L_24ef39c; }
    goto L_24ef460;
L_24ef45c:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
L_24ef460:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x800u - c->r[7];
    c->r[4] = 0x0u;
    c->r[5] = c->r[11] - 0x28u;
    c->r[0] = c->r[0] + (c->r[1] >> 1);
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[6]); }
    c->r[6] = (c->r[0] << 2);
L_24ef480:;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[1] = c->r[0] + (c->r[7] << 2);
    c->r[14] = 0x24ef490u; f_2842944(c);
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[10]);
    if (COND_LT) { goto L_24ef480; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x24ef4e8u; f_24f120c(c);
L_24ef4e8:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + 0x10u;
    c->r[1] = c->r[5] + 0x4cu;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x76ca28u;
    { uint32_t ea = 0x24ef514u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0xa4u;
    c->r[14] = 0x24ef53cu; f_24f0ec8(c);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    goto L_24f0ea8;
L_24ef54c:;
    c->r[14] = 0x0u;
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    goto L_24ef584;
L_24ef55c:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[14] = 0x0u;
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
L_24ef570:;
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[1] - 0x20u;
L_24ef584:;
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_24ef5d0; }
    c->r[1] = c->r[3] + 0x3u;
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_GT) { goto L_24ef5d0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x24ef5b0u; f_284292c(c);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[3] = c->r[0] - 0x20u;
L_24ef5d0:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x3u;
    (void)f_subs(c, c->r[0], c->r[12]);
    c->r[0] = 0x0u;
    if (COND_GT) { goto L_24ef608; }
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[14] = 0x24ef604u; f_284292c(c);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
L_24ef608:;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[10]); }
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[9];
    c->r[14] = 0x24ef630u; f_2842998(c);
    c->r[0] = 0x76c8fcu;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = 0x24ef640u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u - c->r[2];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] & 0x3u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[10] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = clz32(c->r[3]);
    if (COND_NE) { c->r[1] = 0x2u; }
    c->r[8] = (c->r[2] << 3);
    (void)f_subs(c, c->r[12], 0x1u);
    c->r[0] = c->r[0] + c->r[3];
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] - 0x20u;
    if (COND_LT) { goto L_24ef6ac; }
    c->r[2] = c->r[1] | 0x1u;
    c->r[3] = 0x0u;
    c->r[2] = c->r[0] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_LS) { c->r[3] = 0x1u; }
L_24ef6ac:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[8] = c->r[8] - 0x1u; }
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_LE) { goto L_24ef74c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = 0x5u;
    c->r[5] = 0x0u;
    c->r[9] = 0x0u;
    c->r[7] = c->r[3] - c->r[2];
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[6] = 0x4u; }
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[10] = c->r[3] + c->r[2];
L_24ef708:;
    c->r[2] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_HI) { goto L_24ef73c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x24ef71cu; f_284292c(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[0] ^ c->r[9];
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = c->r[9] | c->r[5];
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] - 0x20u;
L_24ef73c:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[9]); c->r[10] = c->r[10] + 0x4u; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[1] = c->r[6];
    if (COND_NE) { goto L_24ef708; }
L_24ef74c:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24ef7b0; }
    c->r[1] = 0x76c7d0u;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = 0x24ef774u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 2);
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + (c->r[12] << 3);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_24ef7bc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[14] = 0x24ef7a0u; f_284292c(c);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    goto L_24ef7bc;
L_24ef7b0:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
L_24ef7bc:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    c->r[6] = c->r[0];
    if (COND_LE) { goto L_24ef87c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[2] = c->r[6] - c->r[7];
    c->r[1] = c->r[6] - 0x1u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[7];
    if (COND_EQ) { goto L_24ef81c; }
    c->r[3] = 0x76c740u;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0x24ef804u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[12] << 3);
    c->r[2] = c->r[0] + c->r[2];
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + (c->r[7] << 2); ST32(ea, c->r[2]); }
    c->r[2] = c->r[7] + 0x1u;
L_24ef81c:;
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_24ef87c; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] - c->r[2];
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x76c6fcu;
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = 0x24ef848u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[12] << 3);
L_24ef848:;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    c->r[7] = c->r[0] + c->r[7];
    c->r[7] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[0] + c->r[7];
    c->r[7] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x8u;
    if (COND_NE) { goto L_24ef848; }
L_24ef87c:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[7] = c->r[1] - (c->r[0] << 2);
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x1cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x2u;
    if (COND_GT) { goto L_24ef8cc; }
    c->r[0] = 0x67a971u;
    c->r[2] = 0x5u;
    c->r[1] = 0x24ef8c4u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x24ef8c8u; f_2842980(c);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
L_24ef8cc:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x76c654u;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[12];
    c->r[3] = c->r[9];
    { uint32_t ea = 0x24ef8e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[0];
    c->r[1] = c->r[1] & 0x3u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + c->r[6];
    c->r[1] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0x24ef910u; f_28429a4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u - c->r[0];
    c->r[1] = c->r[1] & 0x3u;
    c->r[8] = c->r[0] + c->r[1];
    c->r[0] = c->r[8] + c->r[6];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[0] << 6);
    c->r[0] = c->r[5];
    c->r[14] = 0x24ef94cu; f_284289c(c);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[4]); }
    c->r[5] = c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[9]); }
    goto L_24f01ac;
L_24ef974:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0xf800u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24ef9bc; }
    { uint32_t ea = c->r[9] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9] + 0x20u;
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6666u;
    goto L_24efa30;
L_24ef9a0:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x1u;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    c->r[14] = c->r[4];
    goto L_24ef154;
L_24ef9bc:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x76c560u;
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[6] = v; }
    c->r[2] = 0x800u;
    c->r[3] = c->r[10];
    c->r[0] = c->r[4] & 0x1u;
    { uint32_t ea = 0x24ef9dcu + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x800u;
    c->r[5] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x28u;
    c->r[1] = c->r[5];
    c->r[14] = 0x24ef9f8u; f_28429b0(c);
    c->r[0] = c->r[11] - 0x94u;
    c->r[1] = c->r[5];
    c->r[2] = 0x530u;
    c->r[3] = 0x26cu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[5] + 0x2d0u;
    c->r[14] = 0x24efa14u; f_28429bc(c);
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[11] - 0xc4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[14] = 0x2d0u - c->r[0];
    c->r[0] = 0x7fffu;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[14]); }
L_24efa30:;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u - c->r[6];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[14]); }
    c->r[10] = 0x400u - c->r[14];
    c->r[0] = c->r[0] & 0x3u;
    c->r[9] = c->r[6] + c->r[0];
    c->r[1] = c->r[9] + (c->r[7] << 2);
    c->r[2] = c->r[1] & 0x1u;
    c->r[3] = c->r[1] + c->r[2];
    c->r[1] = 0x76c4c0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[3] + 0x800u;
    c->r[5] = c->r[3] + c->r[8];
    { uint32_t ea = c->r[11] - 0xb0u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x24efa7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = (c->r[14] << 1);
    c->r[3] = c->r[7];
    (void)f_subs(c, c->r[1], 0x400u);
    c->r[1] = 0x400u;
    c->r[7] = (c->r[3] << 2);
    if (COND_LT) { c->r[1] = (c->r[14] << 1); }
    c->r[8] = c->r[1];
    c->r[1] = c->r[5] - (c->r[8] << 1);
    c->r[1] = c->r[1] + 0x800u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[1]); }
    c->r[1] = 0x7ffu;
    c->r[5] = c->r[1] - c->r[8];
    c->r[1] = c->r[1] - c->r[4];
    c->r[7] = c->r[7] + (c->r[5] << 1);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + c->r[14];
    c->r[1] = 0x800u - c->r[1];
    c->r[7] = c->r[7] - 0x1000u;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + c->r[4];
    c->r[7] = c->r[7] | c->r[2];
    c->r[2] = c->r[2] | (c->r[3] << 2);
    c->r[7] = c->r[7] + c->r[0];
    c->r[2] = c->r[2] + c->r[0];
    c->r[0] = c->r[0] | (c->r[3] << 2);
    c->r[5] = c->r[6] + c->r[7];
    c->r[7] = 0x802u;
    c->r[2] = c->r[2] + 0x800u;
    c->r[7] = c->r[5] + c->r[7];
    c->r[2] = c->r[2] - c->r[8];
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x804u;
    c->r[5] = c->r[5] + c->r[7];
    c->r[2] = c->r[6] + c->r[2];
    c->r[0] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[1] << 2);
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2] + (c->r[3] << 1);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] - 0x2u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[3] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u - c->r[4];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x800u - c->r[4];
    c->r[4] = c->r[11] - 0x94u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[8] >> 1);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
L_24efb7c:;
    c->r[0] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9] + 0x1000u;
L_24efb90:;
    { uint32_t ea = c->r[0] + (c->r[1] << 1); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[6] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[1], 0x800u);
    c->r[7] = c->r[7] + 0x800u;
    c->r[7] = (c->r[7] >> 12);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[7]); }
    if (COND_NE) { goto L_24efb90; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_24efc4c; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18u;
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x400u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x24efbe8u; f_28429c8(c);
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x20000u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[0] >> 13);
    { uint32_t ea = c->r[11] - 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_24efbfc:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[3] = r; }
    c->r[1] = c->r[1] + 0x20000u;
    c->r[7] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 16) * (int32_t)(int16_t)(c->r[3] >> 16));
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 16);
    c->r[6] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[2] = c->r[2] - (uint32_t)((int32_t)c->r[3] >> 15);
    c->r[2] = c->r[2] - (c->r[7] << 1);
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x19u);
    if (COND_NE) { goto L_24efbfc; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + (c->r[5] << 1);
    c->r[2] = 0x18u;
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[4];
    c->r[14] = 0x24efc48u; f_28429d4(c);
    c->r[12] = c->r[5];
L_24efc4c:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[9] + (c->r[0] << 2);
L_24efc58:;
    { uint32_t ea = c->r[0] + (c->r[1] << 1); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x800u;
    c->r[2] = (c->r[2] >> 12);
    { uint32_t ea = c->r[4] - c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = c->r[1] - 0x2u;
    (void)f_adds(c, c->r[1], 0x30u);
    if (COND_NE) { goto L_24efc58; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] + (c->r[12] << 1);
    c->r[1] = c->r[1] + (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[0];
    c->r[14] = 0x24efcacu; f_28429e0(c);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_24efd1c; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[8];
    c->r[6] = 0x0u;
L_24efccc:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_GE) { c->r[1] = c->r[7]; }
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    (void)f_subs(c, c->r[4], c->r[5]);
    c->r[4] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    if (COND_GE) { c->r[1] = c->r[5]; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_GT) { c->r[7] = c->r[6]; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_LE) { c->r[7] = c->r[5]; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->r[6] = c->r[7];
    if (COND_NE) { goto L_24efccc; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    goto L_24efd20;
L_24efd1c:;
    c->r[2] = 0x0u;
L_24efd20:;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = 0x0u - c->r[1];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { c->r[2] = 0x1fu; }
    if (COND_GE) { c->r[1] = clz32(c->r[1]); }
    if (COND_GE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u; }
    if (COND_GE) { c->r[1] = c->r[2] - c->r[1]; }
    if (COND_GE) { c->r[1] = (c->r[1] << 16); }
    if (COND_GE) { (void)f_subs(c, c->r[1], 0xa0000u); }
    if (COND_LT) { goto L_24efdec; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_24efdb4; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
L_24efd64:;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_GE) { c->r[0] = c->r[3]; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    if (COND_GE) { c->r[0] = c->r[5]; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[7]; }
    c->r[7] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_LE) { c->r[3] = c->r[5]; }
    c->r[8] = f_subs(c, c->r[8], 0x2u);
    c->r[7] = c->r[3];
    if (COND_NE) { goto L_24efd64; }
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    goto L_24efdb8;
L_24efdb4:;
    c->r[1] = 0x0u;
L_24efdb8:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[2] = 0x0u - c->r[0];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GT) { c->r[2] = c->r[1]; }
    c->r[1] = 0x1fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[0] = clz32(c->r[2]);
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = ~0x13u;
    c->r[0] = (c->r[0] << 16);
    c->r[0] = c->r[1] + (uint32_t)((int32_t)c->r[0] >> 15);
    if (COND_LT) { c->r[0] = ~0x13u; }
L_24efdec:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_24efe40; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1u;
    c->r[3] = 0x0u;
    c->r[2] = 0x1u;
L_24efe0c:;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = c->r[6] + 0x2u; c->r[5] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[4]);
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[1] = c->r[1] + sh_lsr(c->r[5], c->r[0]);
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + 0x2u; c->r[5] = v; }
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[5] >> 0));
    c->r[2] = c->r[2] + sh_lsr(c->r[5], c->r[0]);
    if (COND_LT) { goto L_24efe0c; }
    goto L_24efe48;
L_24efe40:;
    c->r[2] = 0x1u;
    c->r[1] = 0x1u;
L_24efe48:;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GE) { c->r[2] = c->r[1]; }
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 1);
    c->r[14] = 0x24efe58u; f_28429ec(c);
    c->r[14] = 0x24efe5cu; f_284286c(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + (c->r[0] << 2);
    c->r[0] = c->r[9];
    c->r[14] = 0x24efe74u; f_2842944(c);
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_24eff14; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = (uint32_t)(int32_t)(int16_t)(c->r[8]);
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    c->r[2] = c->r[9] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[12] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[6] = (c->r[3] >> 15);
    c->r[3] = 0x0u;
L_24efeb0:;
    (void)f_subs(c, c->r[3], c->r[14]);
    if (COND_LT) { goto L_24efec8; }
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[3] = c->r[3] - c->r[14];
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[12] >> 0));
    c->r[6] = (c->r[6] >> 15);
L_24efec8:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[3] + c->r[10];
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[5] = c->r[1] + (c->r[5] << 1);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[5] = 0x8000u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 15);
    c->r[1] = (c->r[1] << 12);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); c->r[2] = c->r[2] + 0x4u; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[5] + (c->r[1] << 4);
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 16) * (int32_t)(int16_t)(c->r[1] >> 16));
    c->r[7] = c->r[7] + (c->r[1] >> 8);
    if (COND_NE) { goto L_24efeb0; }
L_24eff14:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[11] - 0x94u;
    c->r[1] = c->r[9] + (c->r[1] << 2);
L_24eff20:;
    { uint32_t ea = c->r[1] + (c->r[0] << 1); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x800u;
    c->r[2] = (c->r[2] >> 12);
    { uint32_t ea = c->r[3] - c->r[0]; ST16(ea, c->r[2]); }
    c->r[0] = c->r[0] - 0x2u;
    (void)f_adds(c, c->r[0], 0x30u);
    if (COND_NE) { goto L_24eff20; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18u;
    c->r[4] = c->r[9] + 0x2000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[10];
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->r[2] = c->r[0];
    c->r[14] = 0x24eff70u; f_28429f8(c);
    (void)f_subs(c, c->r[10], 0x1u);
    c->r[6] = 0x8000u;
    c->r[8] = 0x7fffu;
    if (COND_LT) { goto L_24effac; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    c->r[0] = c->r[9] + (c->r[0] << 2);
L_24eff90:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[3] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[3] >> 16));
    c->r[1] = c->r[1] + (c->r[3] >> 8);
    if (COND_NE) { goto L_24eff90; }
    goto L_24effb0;
L_24effac:;
    c->r[1] = 0x0u;
L_24effb0:;
    (void)f_subs(c, c->r[7], (uint32_t)((int32_t)c->r[1] >> 2));
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[4]); }
    if (COND_LE) { goto L_24f0088; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GE) { goto L_24f00a0; }
    c->r[0] = 0x1u;
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[14] = 0x24effd4u; f_28429ec(c);
    c->r[14] = 0x24effd8u; f_284286c(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_24f0030; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[8] - c->r[0];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    c->r[1] = c->r[9] + (c->r[1] << 2);
L_24efffc:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[6] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[6] = c->r[8] - (c->r[6] >> 15);
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[6] = (uint32_t)(int32_t)(int16_t)(c->r[6]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[6] * c->r[5]; c->r[6] = r; }
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 15);
    c->r[6] = c->r[6] + (c->r[4] << 1);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); c->r[1] = c->r[1] + 0x4u; }
    if (COND_NE) { goto L_24efffc; }
L_24f0030:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x2000u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_24f00a0; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = (c->r[0] << 16);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[1] = c->r[9] + (c->r[1] << 2);
L_24f0058:;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[10]);
    { uint32_t ea = c->r[7] + c->r[4]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 16);
    { uint32_t r = c->r[5] * c->r[2]; c->r[5] = r; }
    { uint32_t r = c->r[6] * c->r[0]; c->r[6] = r; }
    c->r[6] = c->r[6] + (uint32_t)((int32_t)c->r[5] >> 15);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    if (COND_LT) { goto L_24f0058; }
    goto L_24f00a0;
L_24f0088:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_24f00a0; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + (c->r[0] << 2);
    c->r[14] = 0x24f00a0u; f_283abec(c);
L_24f00a0:;
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[3] + 0x40u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[0] = 0x0u - c->r[0];
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    c->r[14] = 0x24f00f8u; f_2842a04(c);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_LT) { goto L_24f0168; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_24f0118:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[12] + (c->r[0] << 1); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] - c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    { uint32_t ea = c->r[4] - (c->r[0] << 1); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t r = c->r[7] * c->r[14]; c->r[7] = r; }
    c->r[4] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t r = c->r[4] * c->r[6]; c->r[4] = r; }
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[5] >> 16) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 15);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 16) * (int32_t)(int16_t)(c->r[14] >> 0)) + (int32_t)c->r[6]; if (p != (int32_t)p) c->qf = 1; c->r[3] = (uint32_t)p; }
    c->r[7] = c->r[4] + (uint32_t)((int32_t)c->r[7] >> 15);
    c->r[3] = c->r[7] + (c->r[3] << 1);
    { uint32_t ea = c->r[9] - (c->r[0] << 1); ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] - 0x2u;
    if (COND_LT) { goto L_24f0118; }
L_24f0168:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = c->r[11] - 0x94u;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[12], c->r[0]);
    if (COND_LT) { goto L_24efb7c; }
    goto L_24ef4e8;
L_24f0190:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2u;
    c->r[2] = c->r[2] - 0x1u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_LE) { c->r[2] = c->r[1]; }
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[1]); }
L_24f01ac:;
    c->r[1] = (c->r[2] << 3);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
L_24f01b8:;
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_GE) { goto L_24f02bc; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[10] << 1);
L_24f01d4:;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_LT) { goto L_24f01fc; }
    c->r[3] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[8] + (c->r[10] << 2); ST32(ea, c->r[4]); }
    c->r[1] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[3], c->r[6]);
    c->r[10] = c->r[3];
    if (COND_LT) { goto L_24f01d4; }
    goto L_24f02bc;
L_24f01fc:;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[7] = 0x30u;
    c->r[4] = 0x0u;
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = sh_lsl(c->r[1], c->r[12]);
    (void)f_subs(c, c->r[2], 0x30u);
    if (COND_GT) { c->r[7] = sh_lsl(c->r[1], c->r[12]); }
    c->r[1] = (c->r[2] << 3);
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[7] = (c->r[2] << 3); }
L_24f023c:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_GE) { goto L_24f0290; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x24f0258u; f_284292c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x24f0264u; f_284289c(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_24f028c; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = c->r[5] - c->r[7];
    c->r[2] = c->r[0] + 0x8u;
    c->r[4] = c->r[4] + c->r[7];
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_LT) { goto L_24f023c; }
    goto L_24f0290;
L_24f028c:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[12] = v; }
L_24f0290:;
    { uint32_t ea = c->r[8] + (c->r[10] << 2); ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_LT) { goto L_24f01b8; }
    goto L_24f0190;
L_24f02bc:;
    c->r[1] = 0x76bc64u;
    c->r[0] = c->r[0] + 0x30u;
    c->r[8] = 0x5u;
    (void)f_subs(c, c->r[0], c->r[5]);
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x24f02d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u - c->r[2];
    c->r[3] = c->r[3] & 0x3u;
    c->r[2] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[2] + c->r[3];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    if (COND_GT) { goto L_24f030c; }
    c->r[0] = 0x679f35u;
    c->r[2] = 0x7u;
    c->r[1] = 0x24f0304u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x24f0308u; f_2842980(c);
    c->r[8] = c->r[0];
L_24f030c:;
    c->r[0] = c->r[5];
    c->r[4] = c->r[4] + c->r[7];
    c->r[14] = 0x24f0318u; f_284289c(c);
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = 0x0u;
    c->r[0] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[5], 0x2u);
    c->r[12] = c->r[0] - 0x1u;
    c->r[0] = 0x0u;
    if (COND_LT) { goto L_24f035c; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_24f035c; }
    c->r[1] = 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = c->r[1] + (c->r[5] << 3);
    (void)f_subs(c, c->r[12], c->r[1]);
    if (COND_GE) { c->r[0] = 0x1u; }
L_24f035c:;
    c->r[1] = 0x76bbacu;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    if (COND_NE) { c->r[0] = 0x8u; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] - c->r[0];
    { uint32_t ea = 0x24f0390u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u - c->r[2];
    c->r[3] = c->r[3] & 0x3u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + c->r[7];
    c->r[3] = 0x0u - c->r[2];
    c->r[3] = c->r[3] & 0x3u;
    c->r[3] = c->r[2] + c->r[3];
    c->r[3] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[11] - 0x28u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0xacu;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0xa8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    c->r[7] = c->r[0];
    c->r[0] = c->r[2] + c->r[1];
    c->r[1] = c->r[9];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x24f042cu; f_2842a10(c);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x24f044cu; f_2842a1c(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x800u;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[11] - 0x9cu;
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = c->r[1] + (c->r[0] >> 1);
    c->r[0] = c->r[0] - c->r[4];
    c->r[5] = (c->r[0] << 2);
L_24f0470:;
    { uint32_t ea = c->r[6] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[1] = c->r[0] + (c->r[4] << 2);
    c->r[14] = 0x24f0480u; f_2842944(c);
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_LT) { goto L_24f0470; }
    c->r[0] = 0x76ba88u;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[12] = c->r[4];
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0x24f04b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], 0x2u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[10] * c->r[9] + c->r[5]; c->r[1] = r; }
    c->r[2] = c->r[1] & 0x1u;
    c->r[6] = c->r[1] + c->r[2];
    { uint32_t r = c->r[9] * c->r[12]; c->r[1] = r; }
    { uint32_t ea = c->r[11] - 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] + (c->r[1] << 1);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x24u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[5]); }
    c->r[7] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { c->r[0] = c->r[6] + (c->r[12] << 1); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x24f0578u; f_2842a28(c);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[10] * c->r[9]; c->r[10] = r; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_24f0668; }
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x24f0594u; f_28428b4(c);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x20u;
    c->r[0] = c->r[2] - c->r[0];
    c->r[1] = clz32(c->r[1]);
    c->r[2] = c->r[7];
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x24f05e0u; f_2842a34(c);
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f06bc; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x24f0658u; f_2842a40(c);
    goto L_24f06bc;
L_24f0668:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x20u;
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = c->r[7];
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x24f06b0u; f_2842a34(c);
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
L_24f06bc:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[6];
    c->r[6] = 0x0u;
    if (COND_GT) { c->r[1] = 0x1u; }
    c->r[1] = c->r[2] & c->r[1];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_24f076c; }
    { uint32_t r = c->r[10] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    c->r[1] = c->r[10] - 0x1u;
    if (COND_EQ) { goto L_24f0720; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x2030u;
    c->r[6] = 0x0u;
    c->r[7] = 0x9000u;
    c->r[3] = c->r[5] + (c->r[3] << 2);
    { uint32_t r = c->r[8] * c->r[3] + c->r[4]; c->r[3] = r; }
    c->r[3] = c->r[3] + 0x54u;
L_24f0710:;
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[3]; ST16(ea, c->r[7]); c->r[3] = c->r[3] + 0x2u; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_NE) { goto L_24f0710; }
L_24f0720:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CC) { goto L_24f076c; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2030u;
    c->r[1] = c->r[10] - c->r[6];
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t r = c->r[8] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[2] + (c->r[6] << 1);
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = c->r[2] + 0x5au;
    c->r[2] = 0x9000u;
L_24f0750:;
    { uint32_t ea = c->r[3] - 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    c->r[3] = c->r[3] + 0x8u;
    c->r[1] = f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_24f0750; }
L_24f076c:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[11] - 0xa4u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0x24f07bcu; f_24f120c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_24f08bc; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[11] - 0xbcu; ST32(ea, c->r[0]); }
L_24f07dc:;
    { uint32_t ea = c->r[10] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xfu;
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], 0xfu);
    if (COND_LE) { c->r[3] = c->r[0]; }
    { uint32_t ea = c->r[10] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xfu);
    if (COND_LE) { c->r[2] = c->r[0]; }
    { uint32_t ea = c->r[10] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x42u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[8]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[12]); }
    c->r[14] = 0x24f0848u; f_2842a04(c);
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[10] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[7] - c->r[1];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[11] - 0xa4u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[12]); }
    c->r[0] = c->r[6] + (c->r[1] << 2);
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[0];
    c->r[14] = 0x24f089cu; f_2842a04(c);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_24f07dc; }
    goto L_24f0944;
L_24f08bc:;
    { uint32_t ea = c->r[11] - 0xb8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[8] = v; }
L_24f08c4:;
    { uint32_t ea = c->r[10] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xfu;
    (void)f_subs(c, c->r[3], 0xfu);
    if (COND_LE) { c->r[3] = c->r[0]; }
    { uint32_t ea = c->r[10] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xfu);
    if (COND_LE) { c->r[2] = c->r[0]; }
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x42u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[11] - 0xa4u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[14]); }
    c->r[14] = 0x24f0934u; f_2842a04(c);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_24f08c4; }
L_24f0944:;
    { uint32_t ea = c->r[10] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x42u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x40u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x42u; ST16(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_24f09bc; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[14] = 0x24f09b8u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_24f09bc:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_24f0a14; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_24f0aa4; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2030u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t r = c->r[9] * c->r[0] + c->r[8]; c->r[0] = r; }
    c->r[0] = c->r[0] + 0x54u;
L_24f09e8:;
    c->r[1] = c->r[12] + c->r[0];
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { c->r[3] = c->r[7]; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    if (COND_NE) { goto L_24f09e8; }
    goto L_24f0aa4;
L_24f0a14:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[12];
    c->r[1] = c->r[5];
    c->r[14] = 0x24f0a28u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x24f0a38u; f_283aa78(c);
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x400u;
    (void)f_subs(c, c->r[1], 0xau);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[1]); }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_24f0aa4; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2030u;
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[9] * c->r[1] + c->r[8]; c->r[1] = r; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + 0x54u;
    c->r[2] = (c->r[2] << 2);
L_24f0a7c:;
    c->r[3] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[1]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + c->r[0];
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LT) { c->r[6] = c->r[7]; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[3]; ST16(ea, c->r[6]); }
    if (COND_NE) { goto L_24f0a7c; }
L_24f0aa4:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_24f0ce0; }
    c->r[1] = 0x0u;
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f0ae0; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9000u;
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x1u;
L_24f0ae0:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_24f0b48; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2030u;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x9000u;
    c->r[2] = c->r[2] + (c->r[3] << 2);
    c->r[0] = c->r[0] - c->r[1];
    c->r[3] = 0x0u;
    { uint32_t r = c->r[9] * c->r[2]; c->r[2] = r; }
    c->r[1] = c->r[2] | (c->r[1] << 1);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + c->r[1];
    c->r[1] = c->r[1] + 0x54u;
    c->r[6] = (c->r[2] << 3);
L_24f0b1c:;
    c->r[2] = c->r[6];
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[2] + c->r[1]; ST16(ea, c->r[7]); c->r[2] = ea; }
    { uint32_t ea = c->r[5] + c->r[1]; ST16(ea, c->r[7]); c->r[5] = ea; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    if (COND_NE) { goto L_24f0b1c; }
L_24f0b48:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LE) { goto L_24f0c00; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[4];
    if (COND_EQ) { goto L_24f0b9c; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] + (c->r[4] << 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x9000u;
    c->r[1] = c->r[1] + (c->r[4] << 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[4] << 1);
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = c->r[4] + 0x1u;
L_24f0b9c:;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_24f0c00; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2030u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + (c->r[3] << 2);
    c->r[0] = c->r[7] - c->r[1];
    c->r[6] = (c->r[7] << 3);
    c->r[3] = 0x0u;
    c->r[7] = 0x9000u;
    { uint32_t r = c->r[9] * c->r[2]; c->r[2] = r; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    c->r[1] = c->r[8] + c->r[1];
    c->r[1] = c->r[1] + 0x54u;
L_24f0bd4:;
    c->r[2] = c->r[6];
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[3]); }
    c->r[0] = f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[2] + c->r[1]; ST16(ea, c->r[7]); c->r[2] = ea; }
    { uint32_t ea = c->r[5] + c->r[1]; ST16(ea, c->r[7]); c->r[5] = ea; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x2u; ST16(ea, c->r[7]); }
    if (COND_NE) { goto L_24f0bd4; }
L_24f0c00:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2030u;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    c->r[4] = 0x9000u;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t r = c->r[9] * c->r[0] + c->r[8]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[0] + (c->r[0] << 2);
    c->r[12] = c->r[0] + (c->r[0] << 1);
    c->r[3] = (c->r[0] << 1);
    c->r[7] = (c->r[14] << 1);
    c->r[6] = (c->r[12] << 1);
L_24f0c34:;
    c->r[0] = c->r[3] + c->r[1];
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[5]); }
    c->r[0] = c->r[7] + c->r[1];
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[4]); }
    c->r[0] = c->r[6] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[4]); }
    if (COND_NE) { goto L_24f0c34; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_LE) { goto L_24f0e14; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x2030u;
    c->r[1] = c->r[4] - c->r[2];
    c->r[7] = (c->r[2] << 1);
    c->r[5] = 0x9000u;
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t r = c->r[9] * c->r[0]; c->r[3] = r; }
    c->r[0] = c->r[3] + (c->r[14] << 1);
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = c->r[0] + 0x54u;
    c->r[0] = c->r[3] + (c->r[12] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 1);
    c->r[12] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = c->r[8] + c->r[3];
    c->r[0] = c->r[8] + c->r[0];
    c->r[3] = c->r[3] + (c->r[2] << 1);
    c->r[0] = c->r[0] + 0x54u;
    c->r[3] = c->r[3] + 0x54u;
L_24f0cb4:;
    c->r[6] = c->r[3] + c->r[4];
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[6]; ST16(ea, c->r[12]); }
    c->r[6] = c->r[7] + c->r[4];
    c->r[4] = c->r[4] + 0x2u;
    c->r[2] = c->r[14] + c->r[6];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[5]); }
    c->r[2] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[5]); }
    if (COND_NE) { goto L_24f0cb4; }
    goto L_24f0e14;
L_24f0ce0:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_LE) { goto L_24f0e14; }
    c->r[0] = c->r[1] - c->r[4];
    c->r[1] = c->r[1] - 0x1u;
    c->r[2] = c->r[4];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_24f0d30; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + (c->r[4] << 1);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x9000u;
    c->r[2] = c->r[2] + (c->r[4] << 1);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[4] << 1);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[3]); }
    c->r[2] = c->r[4] + 0x1u;
L_24f0d30:;
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_24f0d94; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x2030u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 2);
    c->r[1] = c->r[6] - c->r[2];
    c->r[5] = (c->r[6] << 3);
    c->r[7] = 0x0u;
    c->r[6] = 0x9000u;
    { uint32_t r = c->r[9] * c->r[3]; c->r[3] = r; }
    c->r[2] = c->r[3] + (c->r[2] << 1);
    c->r[2] = c->r[8] + c->r[2];
    c->r[2] = c->r[2] + 0x54u;
L_24f0d68:;
    c->r[3] = c->r[5];
    c->r[4] = c->r[12];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[3] + c->r[2]; ST16(ea, c->r[6]); c->r[3] = ea; }
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[6]); c->r[4] = ea; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[7]); }
    c->r[2] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[3] + 0x2u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2u; ST16(ea, c->r[6]); }
    if (COND_NE) { goto L_24f0d68; }
L_24f0d94:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = 0x0u;
    c->r[5] = 0x9000u;
    c->r[4] = 0x0u;
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[7] << 1);
    { uint32_t r = c->r[9] * c->r[1]; c->r[3] = r; }
    c->r[1] = c->r[7] + (c->r[7] << 2);
    c->r[1] = c->r[3] + (c->r[1] << 1);
    c->r[2] = c->r[3] + (c->r[2] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 1);
    c->r[1] = c->r[8] + c->r[1];
    c->r[3] = c->r[8] + c->r[3];
    c->r[2] = c->r[8] + c->r[2];
    c->r[14] = c->r[1] + 0x54u;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x54u;
    c->r[3] = c->r[3] + (c->r[1] << 1);
    c->r[7] = (c->r[1] << 1);
    c->r[3] = c->r[3] + 0x54u;
L_24f0dec:;
    c->r[6] = c->r[3] + c->r[4];
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[6]; ST16(ea, c->r[12]); }
    c->r[6] = c->r[7] + c->r[4];
    c->r[4] = c->r[4] + 0x2u;
    c->r[1] = c->r[14] + c->r[6];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = c->r[2] + c->r[6];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[5]); }
    if (COND_NE) { goto L_24f0dec; }
L_24f0e14:;
    { uint32_t ea = c->r[11] - 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0x10u;
    c->r[1] = c->r[8] + 0x4cu;
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[3];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0xa4u;
    c->r[14] = 0x24f0e54u; f_24f0ec8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x76b0ccu;
    { uint32_t ea = 0x24f0e70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[0] - 0x20u;
    c->r[0] = ~0x2u;
    (void)f_subs(c, c->r[1], c->r[2]);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GT) { goto L_24f0eac; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x28u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_24f0ea8:;
    c->r[0] = sdiv32(c->r[1], c->r[0]);
L_24f0eac:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
