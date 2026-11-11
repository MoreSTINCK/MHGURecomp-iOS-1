#include "cpu.h"
#include "neon_rt.h"
void f_25230c4(Cpu *c);
void f_283aa78(Cpu *c);
void f_283abec(Cpu *c);
void f_283b27c(Cpu *c);
void f_283f1ac(Cpu *c);
void f_28428e4(Cpu *c);
void f_28428f0(Cpu *c);
void f_2842a64(Cpu *c);
void f_2842a70(Cpu *c);
void f_2842a7c(Cpu *c);
void f_2842b0c(Cpu *c);
void f_2842ba8(Cpu *c);
void f_2842bb4(Cpu *c);
void f_2842e0c(Cpu *c);
void f_2843148(Cpu *c);
void f_2843190(Cpu *c);
void f_284319c(Cpu *c);
void f_28431a8(Cpu *c);
void f_28431b4(Cpu *c);
void f_28431c0(Cpu *c);
void f_28431cc(Cpu *c);
void f_28431d8(Cpu *c);
void f_28431e4(Cpu *c);
void f_28431f0(Cpu *c);
void f_252069c(Cpu *restrict c) {
    FN_ENTER(0x252069cu);
L_252069c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x154u;
    c->r[10] = c->r[0];
    c->r[0] = 0x73b86cu;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x0u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x25206d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_25206fc; }
    c->r[0] = 0x86a0u;
    c->r[6] = c->r[1];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    c->r[14] = 0x25206e8u; f_283b27c(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x73b844u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x25206fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
L_25206fc:;
    c->r[0] = 0x73b824u;
    c->r[6] = c->r[10];
    c->r[8] = 0x4fcu;
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_LT) { c->r[8] = c->r[1]; }
    { uint32_t ea = 0x2520718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x3fa4u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[4]); c->r[6] = ea; }
    c->r[0] = 0xc0ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2520958; }
    c->r[2] = c->r[10];
    c->r[0] = 0x190u;
    { uint32_t ea = c->r[2] + 0x84u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t r = c->r[5] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
L_2520748:;
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_GE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_LT) { goto L_25209b8; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[7]); }
    c->r[2] = 0x803u;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[1] = 0x0u;
    c->r[0] = c->r[10] + c->r[0];
    c->r[2] = c->r[11] - 0x3cu;
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; } }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = 0x271fu;
    { uint32_t ea = c->r[10] + 0x9cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[14] = 0x25207a0u; f_2842a64(c);
    (void)f_subs(c, c->r[9], c->r[4]);
    { uint32_t ea = c->r[11] - 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_GT) { c->r[9] = c->r[4]; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_LT) { goto L_25208e8; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbb80u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_25208e8; }
    c->r[1] = 0x21ecu;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[11] - 0x58u;
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x21e8u;
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0xacu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[14] = 0x252083cu; f_2843190(c);
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    c->r[6] = c->r[10];
    c->r[2] = 0x0u;
    c->r[3] = c->r[10];
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[1]); c->r[6] = ea; }
    c->r[1] = 0x3fa0u;
    { uint32_t ea = c->r[3] + c->r[1]; ST32(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2520c88; }
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfc18u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_25208a8; }
    c->v.s[0] = LD32(c->r[11] - 68u);
    c->v.s[4] = 0x3f800000u;
    c->v.s[2] = 0x42c80000u;
    c->v.d[16] = 0x3fe0000000000000ull;
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.df[17] = (double)c->v.f[0];
    c->v.df[16] = c->v.df[17] + c->v.df[16];
    c->v.df[16] = floor(c->v.df[16]);
    c->v.s[0] = vcvt_s32_f64(c->v.df[16]);
    ST32(c->r[6], c->v.s[0]);
L_25208a8:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x44du;
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_LT) { goto L_25208dc; }
    c->r[0] = 0x44eu;
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_GE) { c->r[0] = 0x44fu; }
    if (COND_GE) { (void)f_subs(c, c->r[1], 0x11u); }
    if (COND_LT) { goto L_25208dc; }
    c->r[0] = 0x451u;
    (void)f_subs(c, c->r[1], 0x13u);
    if (COND_LT) { c->r[0] = 0x450u; }
L_25208dc:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_2520910;
L_25208e8:;
    c->r[9] = ~0x0u;
    c->r[6] = c->r[10];
    c->r[0] = 0x3fa0u;
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[6] + 0x80u; ST32(ea, c->r[9]); c->r[6] = ea; }
    { uint32_t ea = c->r[2] + c->r[0]; ST32(ea, c->r[1]); c->r[2] = ea; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
L_2520910:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[14] = v; }
L_2520914:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_25209d0; }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_25209d4; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x3810u;
    c->r[1] = c->r[5];
    c->r[4] = c->r[14];
    c->r[3] = c->r[10] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x2520950u; f_284319c(c);
    c->r[14] = c->r[4];
    goto L_25209d4;
L_2520958:;
    c->r[1] = 0x64u;
    c->r[3] = c->r[10];
    c->r[0] = 0x190u;
    { uint32_t r = c->r[5] * c->r[1]; c->r[2] = r; }
    { uint32_t ea = c->r[3] + 0x84u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t r = c->r[5] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_2520748; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[2] = 0xc8u; }
    if (COND_NE) { { uint32_t r = c->r[5] * c->r[2]; c->r[2] = r; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_2520748; }
    c->r[2] = 0x32u;
    { uint32_t r = c->r[5] * c->r[2]; c->r[2] = r; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { c->r[3] = 0x19u; }
    if (COND_NE) { { uint32_t r = c->r[5] * c->r[3]; c->r[3] = r; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[1]); }
    if (COND_EQ) { goto L_2520748; }
    c->r[3] = c->r[1] + (c->r[1] << 1);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_2520748; }
L_25209b8:;
    c->r[0] = 0x73b578u;
    { uint32_t ea = 0x25209c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = ~0x0u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_25209d0:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
L_25209d4:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[3] = c->r[5];
    if (COND_NE) { goto L_25209f8; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x851fu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[2]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 7);
    c->r[3] = c->r[2] + (c->r[1] >> 31);
L_25209f8:;
    { uint32_t ea = c->r[10] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_adds(c, c->r[2], 0x3e8u);
    if (COND_EQ) { goto L_2520a20; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_2520a3c; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] * c->r[1]; c->r[2] = r; }
    c->r[2] = (c->r[2] << 3);
    c->r[2] = sdiv32(c->r[2], c->r[3]);
    goto L_2520a40;
L_2520a20:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] << 4) - c->r[1];
    c->r[2] = (c->r[2] << 2);
    c->r[2] = sdiv32(c->r[2], c->r[3]);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[2] = r; }
    goto L_2520a40;
L_2520a3c:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
L_2520a40:;
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x88u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { goto L_2520a98; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 31);
    c->r[2] = c->r[2] + (c->r[3] >> 29);
    c->r[3] = c->r[1] + (c->r[1] << 1);
    c->r[3] = sdiv32(c->r[3], c->r[5]);
    c->r[7] = c->r[3] + (c->r[3] >> 31);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = c->r[7] + (uint32_t)((int32_t)c->r[2] >> 3);
    c->r[2] = sdiv32(c->r[2], c->r[3]);
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_LT) { c->r[8] = c->r[2]; }
    { uint32_t r = c->r[3] * c->r[8]; c->r[2] = r; }
    c->r[3] = 0x5556u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x55550000u;
    c->r[2] = (c->r[2] << 3);
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[3]) >> 32);
    c->r[2] = c->r[2] + (c->r[2] >> 31);
    { uint32_t ea = c->r[10] + 0x94u; ST32(ea, c->r[2]); }
L_2520a98:;
    c->r[4] = sdiv32(c->r[1], c->r[5]);
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_GE) { c->r[3] = c->r[4] + (c->r[4] << 1); }
    if (COND_GE) { c->r[3] = (c->r[3] << 3); }
    if (COND_GE) { (void)f_subs(c, c->r[2], c->r[3]); }
    if (COND_LT) { goto L_2520ad0; }
    { uint32_t r = c->r[8] * c->r[4]; c->r[3] = r; }
    (void)f_subs(c, c->r[4], 0x31u);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    if (COND_GT) { goto L_2520ba0; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x12cu);
    if (COND_GE) { (void)f_subs(c, c->r[2], 0x960u); }
    if (COND_GE) { goto L_2520ba0; }
L_2520ad0:;
    c->r[0] = 0x37f0u;
    c->r[1] = 0x3800u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x3e8u; }
    (void)f_subs(c, c->r[4], 0x64u);
    if (COND_GT) { c->r[0] = 0x3eau; }
    (void)f_subs(c, c->r[4], 0x32u);
    if (COND_LT) { c->r[0] = 0x3e8u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[1] = 0x44du; }
    (void)f_subs(c, c->r[1], 0x450u);
    if (COND_LT) { goto L_2520b14; }
    c->r[2] = 0x44fu;
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_EQ) { goto L_2520b44; }
L_2520b14:;
    c->r[2] = 0x44eu;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[3] = 0x3eau; }
    if (COND_EQ) { c->r[2] = 0x44du; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[3]); }
    if (COND_EQ) { goto L_2520b44; }
    c->r[2] = 0x3e9u;
    (void)f_subs(c, c->r[0], c->r[2]);
    c->r[2] = c->r[1];
    if (COND_EQ) { c->r[2] = 0x450u; }
    (void)f_subs(c, c->r[1], 0x450u);
    if (COND_GT) { c->r[2] = c->r[1]; }
L_2520b44:;
    c->r[1] = 0x37d0u;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[4], 0x190u);
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GE) { goto L_2520b74; }
    c->r[3] = 0x0u;
L_2520b64:;
    c->r[4] = (c->r[4] << 1);
    c->r[3] = c->r[3] + 0x8u;
    (void)f_subs(c, c->r[4], 0x190u);
    if (COND_LT) { goto L_2520b64; }
L_2520b74:;
    c->r[7] = 0x3eau;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_2520bc8; }
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_NE) { goto L_2520bec; }
    c->r[0] = 0x60u;
    c->r[0] = c->r[0] + (c->r[2] << 5);
    c->r[2] = c->r[3] - 0x10u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[2] | c->r[0];
    goto L_2520bf8;
L_2520ba0:;
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xbb9u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_2520c48; }
    c->r[5] = 0xbbau;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_2520c50; }
    c->r[5] = 0x0u;
    goto L_2520ca4;
L_2520bc8:;
    c->r[0] = 0x44eu;
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = 0x60u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = 0x0u; }
    c->r[0] = c->r[2] & (c->r[0] << 5);
    c->r[0] = c->r[0] | c->r[3];
    c->r[0] = c->r[0] | 0x80u;
    goto L_2520bf8;
L_2520bec:;
    c->r[0] = c->r[3] + 0xf0u;
    c->r[0] = c->r[0] | (c->r[2] << 4);
    c->r[0] = c->r[0] | 0x60u;
L_2520bf8:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[0] = c->r[0] | (c->r[2] << 2);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2520c34; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[2] = c->r[8];
    c->r[14] = 0x2520c2cu; f_28431a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = c->r[8]; }
L_2520c34:;
    c->r[1] = 0x73b2fcu;
    { uint32_t ea = 0x2520c40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2520c48:;
    c->r[5] = 0x7fu;
    goto L_2520ca4;
L_2520c50:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_LT) { goto L_2520c94; }
    c->r[6] = 0x147u;
    { uint32_t r = c->r[7] * c->r[6]; c->r[7] = r; }
    c->r[6] = 0x801u;
    c->r[5] = (uint32_t)((int32_t)c->r[7] >> 8);
    { uint32_t ea = c->r[10] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_2520ca4; }
    (void)f_subs(c, c->r[5], 0x73u);
    if (COND_GE) { c->r[5] = 0x73u; }
    goto L_2520ca4;
L_2520c88:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_2520914;
L_2520c94:;
    { uint32_t ea = c->r[10] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x30u;
    (void)f_subs(c, c->r[7], 0x800u);
    if (COND_EQ) { c->r[5] = 0x73u; }
L_2520ca4:;
    c->r[6] = 0x37d0u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[5]); }
    c->r[5] = 0xfc18u;
    c->r[7] = c->r[4] - 0x32u;
    c->r[6] = c->r[10] + c->r[6];
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_2520d08; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_2520d14; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[6] = 0x14u;
    c->r[5] = 0x7918u;
    c->r[3] = c->r[6] + (c->r[3] << 3);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[2] - c->r[7] * c->r[3];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = 0x1u;
    if (COND_EQ) { c->r[5] = 0x7148u; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_GT) { c->r[6] = 0x2u; }
    goto L_2520d18;
L_2520d08:;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { c->r[6] = c->r[3]; }
    goto L_2520d18;
L_2520d14:;
    c->r[6] = c->r[3];
L_2520d18:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x14u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[6]); }
    c->r[3] = c->r[6] + (c->r[6] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 3);
    c->r[3] = c->r[2] - c->r[7] * c->r[3];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[3]); }
    c->r[3] = 0x803u;
    { uint32_t ea = c->r[10] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_2520d64; }
    c->r[3] = 0x37f0u;
    c->r[0] = 0x3eau;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[3]; ST32(ea, c->r[0]); c->r[7] = ea; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[7]); }
    goto L_2520ecc;
L_2520d64:;
    { uint32_t ea = c->r[10] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xfc18u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_NE) { goto L_2520de8; }
    c->r[3] = 0x7fffu;
    c->r[14] = 0x3e80u;
    (void)f_subs(c, c->r[7], 0x800u);
    c->r[7] = 0x3eau;
    c->r[3] = c->r[3] - c->r[0];
    c->r[4] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[5] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[14] >> 0));
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 15);
    c->r[14] = c->r[5] + (uint32_t)((int32_t)c->r[4] >> 15);
    c->r[5] = 0x8ca0u;
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[5] = 0xfa00u;
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 15);
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 15);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] - c->r[14];
    { uint32_t r = c->r[3] * c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[3] = 0x37f4u;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[14] + (uint32_t)((int32_t)c->r[0] >> 14);
    if (COND_EQ) { c->r[0] = c->r[0] + 0x1f40u; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_2520e00; }
    c->r[0] = c->r[0] - 0xfa0u;
    goto L_2520e08;
L_2520de8:;
    c->r[0] = 0x37f0u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[3]); c->r[7] = ea; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[7]); }
    goto L_2520e90;
L_2520e00:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_GT) { c->r[0] = c->r[0] + 0xfa0u; }
L_2520e08:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x3e8u;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[0] = 0x37f0u;
    c->r[7] = c->r[10];
    if (COND_GE) { c->r[3] = 0x3eau; }
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[3]); c->r[7] = ea; }
    c->r[0] = 0xc840u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2520e68; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x80u - c->r[7];
    (void)f_subs(c, c->r[0], (uint32_t)((int32_t)c->r[7] >> 4));
    if (COND_LE) { goto L_2520e68; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x3e8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
L_2520e68:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x65u);
    if (COND_LT) { goto L_2520e90; }
    { uint32_t ea = c->r[10] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2520e90; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x3e8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    goto L_2520e9c;
L_2520e90:;
    c->r[0] = 0x3eau;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_2520ecc; }
L_2520e9c:;
    c->r[0] = 0x851fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[7] + (c->r[0] >> 31);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LE) { goto L_2520ec8; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x3eau;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    goto L_2520ecc;
L_2520ec8:;
    c->r[0] = c->r[3];
L_2520ecc:;
    { uint32_t ea = c->r[10] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (c->r[1] << 3);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { c->r[0] = 0x3eau; }
    if (COND_NE) { { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); } }
    c->r[3] = 0x1f40u;
    (void)f_subs(c, c->r[4], 0x32u);
    if (COND_GT) { c->r[3] = 0x2ee0u; }
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[3] = sdiv32(c->r[3], c->r[7]);
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_GE) { goto L_2520f0c; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x3eau;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
L_2520f0c:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_2520f50; }
    c->r[3] = 0x37f8u;
    { uint32_t ea = c->r[10] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_NE) { goto L_2520f50; }
    c->r[7] = 0x3eau;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_2520f50; }
    c->r[3] = 0x37f4u;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_2521384; }
L_2520f50:;
    c->r[3] = 0x0u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[10] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = 0x37f4u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[7]); }
L_2520f68:;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[7]); }
    if (COND_LT) { goto L_2520fd8; }
    c->r[6] = 0x3eau;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_NE) { goto L_2520fa4; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_2520fa4; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    goto L_2520fe4;
L_2520fa4:;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_2520fd8; }
    c->r[3] = 0x3eau;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_2520fd8; }
    c->r[0] = 0x851fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 5);
    c->r[0] = c->r[3] + (c->r[0] >> 31);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LE) { goto L_2521358; }
    c->r[0] = 0x3eau;
L_2520fd8:;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
L_2520fe0:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
L_2520fe4:;
    c->r[3] = 0x3804u;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_252101c; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    goto L_252103c;
L_252101c:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_2521094; }
L_252103c:;
    c->r[3] = 0x851fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[3]) >> 32);
    c->r[7] = (uint32_t)((int32_t)c->r[1] >> 6);
    c->r[1] = c->r[7] + (c->r[1] >> 31);
    c->r[7] = c->r[1] + c->r[5];
    { uint32_t r = c->r[1] * c->r[8]; c->r[1] = r; }
    c->r[1] = sdiv32(c->r[1], c->r[7]);
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[1], 0x100u);
    if (COND_GT) { c->r[1] = 0x101u; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_2521090; }
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 9);
    c->r[2] = c->r[3] + (c->r[2] >> 31);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    goto L_2521094;
L_2521090:;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
L_2521094:;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    c->r[9] = 0x3eau;
    c->r[1] = c->r[10] + c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], c->r[9]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_25210c4; }
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_252116c;
L_25210c4:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0x3eau;
    c->r[6] = c->r[14];
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_NE) { goto L_2521110; }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11] - 0xb0u;
    c->r[14] = 0x25210f0u; f_2843148(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_252116c; }
L_2521110:;
    c->r[1] = 0x3808u;
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2521130; }
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_252139c; }
L_2521130:;
    { uint32_t ea = c->r[10] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[10];
    c->r[9] = c->r[0];
    c->r[1] = c->r[1] + 0x2du;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x0u;
    { uint32_t r = c->r[1] * c->r[3]; c->r[1] = r; }
    c->r[3] = 0x851fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[10] = c->r[3] + (c->r[1] >> 31);
    if (COND_EQ) { c->r[10] = c->r[10] - 0x3e8u; }
L_252116c:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_2521188; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_252119c; }
L_2521188:;
    c->r[0] = 0x64a5f4u;
    c->r[2] = 0x64a5d0u;
    c->r[0] = 0x2521198u + c->r[0];
    c->r[6] = 0x252119cu + c->r[2];
    goto L_25211ac;
L_252119c:;
    c->r[0] = 0x64a5a0u;
    c->r[2] = 0x64a57cu;
    c->r[0] = 0x25211acu + c->r[0];
    c->r[6] = 0x25211b0u + c->r[2];
L_25211ac:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[1] * c->r[1]; c->r[2] = r; }
    c->r[7] = c->r[7] - c->r[3];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[7]; c->r[7] = r; }
    c->r[14] = c->r[3] + (uint32_t)((int32_t)c->r[7] >> 14);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - c->r[3];
    { uint32_t r = c->r[2] * c->r[7]; c->r[7] = r; }
    c->r[8] = c->r[3] + (uint32_t)((int32_t)c->r[7] >> 14);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[7];
    c->r[5] = c->r[5] - c->r[3];
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[2] * c->r[5]; c->r[5] = r; }
    c->r[12] = c->r[7] + (uint32_t)((int32_t)c->r[1] >> 14);
    c->r[1] = 0x3808u;
    c->r[7] = c->r[3] + (uint32_t)((int32_t)c->r[5] >> 14);
    c->r[5] = c->r[4] + 0x3800u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2521254; }
    c->r[3] = 0x451u;
    (void)f_subs(c, c->r[10], c->r[14]);
    c->r[0] = c->r[5];
    if (COND_LT) { c->r[3] = 0x450u; }
    if (COND_LT) { (void)f_subs(c, c->r[10], c->r[8]); }
    if (COND_LT) { c->r[3] = 0x44fu; }
    if (COND_LT) { (void)f_subs(c, c->r[10], c->r[12]); }
    if (COND_LT) { goto L_2521374; }
L_252123c:;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_25213b0;
L_2521254:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[7]); }
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] - c->r[1];
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[7], 0x450u);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 14);
    c->r[3] = 0x451u;
    if (COND_GT) { c->r[1] = 0x0u - c->r[1]; }
    c->r[1] = c->r[14] + c->r[1];
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_GE) { goto L_2521314; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x450u);
    c->r[3] = c->r[3] - c->r[1];
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 14);
    c->r[3] = 0x450u;
    if (COND_GE) { c->r[1] = 0x0u - c->r[1]; }
    c->r[1] = c->r[8] + c->r[1];
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_GE) { goto L_2521314; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[1];
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[3] >> 14);
    c->r[3] = 0x44fu;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_GE) { c->r[1] = 0x0u - c->r[1]; }
    c->r[1] = c->r[12] + c->r[1];
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_GE) { goto L_2521314; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x44eu;
    (void)f_subs(c, c->r[7], c->r[3]);
    c->r[1] = c->r[1] - c->r[0];
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 14);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_GE) { c->r[0] = 0x0u - c->r[0]; }
    c->r[0] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { c->r[3] = 0x44du; }
L_2521314:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2521334; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_25213b0;
L_2521334:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x450u);
    if (COND_CC) { goto L_25213b0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[3] = 0x44fu; }
    if (COND_EQ) { { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); } }
    goto L_25213b0;
L_2521358:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x1u;
    goto L_2520fe0;
L_2521374:;
    c->r[3] = 0x44eu;
    (void)f_subs(c, c->r[10], c->r[7]);
    if (COND_LT) { c->r[3] = 0x44du; }
    goto L_252123c;
L_2521384:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[10] + 0x40u; ST32(ea, c->r[7]); }
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    goto L_2520f68;
L_252139c:;
    c->r[1] = 0x3800u;
    c->r[4] = c->r[10];
    c->r[9] = c->r[0];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[3] = v; }
L_25213b0:;
    { uint32_t ea = c->r[10] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GT) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    if (COND_GT) { c->r[3] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = (c->r[0] << 3);
    c->r[0] = 0xfc18u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[0] = 0x3a97u;
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[3] = c->r[1]; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_GT) { goto L_252140c; }
    c->r[0] = 0x3eau;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_EQ) { goto L_252140c; }
    c->r[6] = 0x44fu;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { c->r[6] = c->r[3]; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    goto L_2521410;
L_252140c:;
    c->r[6] = c->r[3];
L_2521410:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x5dc0u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { goto L_252148c; }
    (void)f_subs(c, c->r[6], 0x450u);
    if (COND_GT) { c->r[6] = 0x450u; }
    if (COND_GT) { { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); } }
    (void)f_subs(c, c->r[2], 0x3e80u);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_GT) { goto L_2521490; }
    (void)f_subs(c, c->r[6], 0x450u);
    c->r[3] = 0x2ee0u;
    if (COND_GE) { c->r[6] = 0x44fu; }
    if (COND_GE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); } }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { goto L_252148c; }
    c->r[3] = 0x44fu;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_GE) { c->r[6] = 0x44eu; }
    if (COND_GE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); } }
    (void)f_subs(c, c->r[2], 0x1f40u);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_GT) { goto L_2521490; }
    c->r[2] = 0x44eu;
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_GE) { c->r[6] = 0x44du; }
    if (COND_GE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); } }
    goto L_2521490;
L_252148c:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2521490:;
    c->r[3] = 0xfc18u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[7]); }
    c->r[2] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[1], c->r[3]);
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2521560; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2521560; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x4650u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GT) { goto L_25214ec; }
    c->r[7] = 0x3eau;
    c->r[3] = 0x44du;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_2521540; }
L_25214ec:;
    c->r[3] = 0x5dc0u;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_GT) { goto L_2521510; }
    c->r[7] = 0x3eau;
    c->r[3] = 0x44eu;
    (void)f_subs(c, c->r[9], c->r[7]);
    if (COND_EQ) { goto L_2521540; }
L_2521510:;
    c->r[3] = 0x7530u;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[3]; c->r[7] = r; }
    c->r[3] = 0x44fu;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LE) { goto L_2521540; }
    c->r[3] = 0xabe0u;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[3]; c->r[2] = r; }
    c->r[3] = 0x450u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { c->r[3] = 0x451u; }
L_2521540:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_GT) { c->r[3] = c->r[1]; }
    (void)f_subs(c, c->r[6], c->r[3]);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    if (COND_LT) { c->r[3] = c->r[6]; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2521560:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfc4u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    c->r[14] = 0x2521570u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3eau;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_252159c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x44eu;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[1] = 0x44fu; }
    if (COND_EQ) { { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); } }
L_252159c:;
    { uint32_t ea = c->r[10] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = 0xfe29u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xffff0000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x44du; }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); } }
    c->r[1] = 0x851fu;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[6] * (int32_t)c->r[1]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[2] = c->r[2] + (c->r[1] >> 31);
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_GE) { goto L_25217bc; }
    c->r[2] = 0x3eau;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_25215fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x450u);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    if (COND_LT) { goto L_25217d8; }
L_25215fc:;
    (void)f_adds(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_2521618; }
    c->r[0] = 0x21e8u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x21ecu;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[2]); }
L_2521618:;
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 3);
    c->r[7] = 0x2u;
    c->r[6] = 0x4fcu;
    c->r[0] = c->r[0] + (c->r[1] >> 31);
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[0] = c->r[3] - 0x3u;
    c->r[3] = 0x12bu;
    if (COND_LT) { c->r[7] = 0x3u; }
    c->r[0] = sdiv32(c->r[0], c->r[7]);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_LT) { c->r[6] = c->r[0]; }
    c->r[0] = 0x73a8ecu;
    { uint32_t ea = 0x2521650u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[7] * c->r[6] + c->r[4]; c->r[1] = r; }
    c->r[2] = 0x12cu - c->r[1];
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = c->r[1] + c->r[2];
    c->r[1] = c->r[1] + 0x12cu;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] + c->r[9];
    c->r[0] = c->r[0] + 0xabu;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[14] = 0x2521678u; f_28431b4(c);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    if (COND_EQ) { c->r[1] = 0x37f8u; }
    if (COND_EQ) { { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x6cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2521d68; }
    c->r[9] = c->r[7] - 0x1u;
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
L_25216f0:;
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[9], c->r[7]);
    { uint32_t ea = c->r[10] + 0x40u; ST32(ea, c->r[8]); }
    if (COND_EQ) { c->r[0] = 0x3eau; }
    if (COND_EQ) { { uint32_t ea = c->r[10] + 0x7cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x851fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    c->r[5] = c->r[2];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[5]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 4);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + (c->r[2] >> 31);
    c->r[3] = c->r[4];
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[1] + (c->r[0] << 1);
    c->r[0] = c->r[10];
    c->r[14] = 0x2521780u; f_28431c0(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2521e4c; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x2521798u; f_28431cc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2521e58; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[4] = c->r[4] + c->r[6];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_25216f0; }
    goto L_2521e2c;
L_25217bc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x450u);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_25217d8; }
    c->r[1] = 0x3e9u;
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_EQ) { goto L_25217f4; }
L_25217d8:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x450u);
    if (COND_GE) { goto L_25217fc; }
    c->r[2] = 0x3e9u;
    c->r[1] = 0x3e8u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_25217fc; }
L_25217f4:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_25217fc:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x94u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[2] = c->r[4] - 0x1u;
    c->r[0] = c->r[11] - 0xb0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[14] = 0x2521820u; f_2842a70(c);
    c->r[0] = 0x73a70cu;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0x2521830u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[1] << 1);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[1] * c->r[2] + c->r[7]; c->r[1] = r; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x3820u;
    c->r[1] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[10] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] - c->r[3];
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] + (c->r[0] << 1);
    { uint32_t r = c->r[3] * c->r[2]; c->r[0] = r; }
    c->r[2] = (c->r[0] << 1);
    c->r[0] = c->r[7];
    c->r[14] = 0x252188cu; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[6] << 3);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[4] - c->r[0];
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3eau;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_25218d8; }
    c->r[0] = 0x3cu;
    c->r[14] = 0x25218ccu; f_2842ba8(c);
    c->r[0] = (c->r[0] << 8);
    goto L_25218e0;
L_25218d8:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_25218e0:;
    c->r[1] = 0x37d8u;
    c->r[5] = c->r[10];
    c->r[2] = 0x3d7u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[0] = c->r[1] + (c->r[0] >> 16);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[14] = 0x2521910u; f_2842e0c(c);
    c->r[1] = 0xc888u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xc88cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x800u);
    { uint32_t r = c->r[5] * c->r[1]; c->r[2] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[8]); }
    if (COND_NE) { goto L_2521a5c; }
    c->r[8] = c->r[7] + (c->r[2] << 1);
    c->r[2] = 0x4dd3u;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[12] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10620000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[2]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 6);
    c->r[1] = c->r[2] + (c->r[1] >> 31);
    c->r[2] = 0x9a7u;
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    { uint32_t r = c->r[0] * c->r[9]; c->r[1] = r; }
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[7] = c->r[12] + (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = c->r[1] + 0x10000000u;
    c->r[1] = 0xf0000000u - c->r[1];
    c->r[1] = (c->r[1] << 1);
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[2]); }
    { uint32_t r = c->r[3] * c->r[1]; c->r[1] = r; }
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 22);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[0] >> 16)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    { uint32_t r = c->r[7] * c->r[0] + c->r[1]; c->r[0] = r; }
    c->r[7] = (uint32_t)((int32_t)c->r[2] >> 6);
    c->r[6] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[0] = c->r[0] - 0x800000u;
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = c->r[12] + (uint32_t)((int32_t)c->r[0] >> 15);
    { uint32_t r = c->r[1] * c->r[6]; c->r[4] = r; }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0));
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[1] = c->r[1] + (uint32_t)((int32_t)c->r[4] >> 16);
    { uint32_t r = c->r[0] * c->r[7] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] + (uint32_t)((int32_t)c->r[2] >> 21);
    c->r[1] = (uint32_t)(((int32_t)(c->r[2] << 10)) >> 16);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[2] = c->r[11] - 0x34u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[3] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 16);
    c->r[1] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = 0x37e0u;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[10] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x2521a28u; f_2842bb4(c);
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_2521b80; }
    c->r[1] = c->r[8] + 0x2u;
    c->r[0] = 0x2u;
    c->r[2] = c->r[11] - 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x37e8u;
    c->r[1] = c->r[11] - 0x2cu;
    c->r[3] = c->r[10] + c->r[0];
    c->r[0] = c->r[6] + 0x2u;
    c->r[14] = 0x2521a58u; f_2842bb4(c);
    goto L_2521b80;
L_2521a5c:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_GE) { { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_GE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_LT) { goto L_2521b80; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x8e39u;
    c->r[7] = 0x37e0u;
    c->r[6] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x38e30000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[2] = c->r[3] | (c->r[2] << 1);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    c->r[1] = 0x1fu;
    c->r[3] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[0] = clz32(c->r[0]);
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = 0x1u;
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[0] = (c->r[5] << 1);
    c->r[2] = c->r[2] + c->r[7];
    c->r[7] = 0x8001u;
    c->r[1] = sh_lsl(c->r[1], c->r[10]);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
L_2521ad8:;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    c->r[5] = c->r[2] | (c->r[4] << 3);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[2] + (c->r[4] << 3);
    c->r[12] = c->r[2] + c->r[5];
    c->r[5] = c->r[6];
L_2521afc:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = c->r[2] + c->r[5];
    { uint32_t ea = c->r[14]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] << 15) - c->r[6];
    c->r[2] = c->r[4] + c->r[1];
    c->r[2] = c->r[6] + sh_asr(c->r[2], c->r[10]);
    { uint32_t ea = c->r[8]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[4] - c->r[2];
    c->r[4] = c->r[6] + c->r[1];
    c->r[2] = c->r[2] + sh_asr(c->r[4], c->r[10]);
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] + 0x4000u;
    c->r[6] = (uint32_t)((int32_t)c->r[2] >> 15);
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_GT) { c->r[7] = (uint32_t)((int32_t)c->r[2] >> 15); }
    (void)f_subs(c, c->r[6], 0x8000u);
    c->r[2] = c->r[3] + c->r[5];
    c->r[5] = c->r[5] + c->r[0];
    if (COND_GE) { c->r[7] = 0x7fffu; }
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_2521afc; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[6] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_NE) { goto L_2521ad8; }
L_2521b80:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x3eau;
    c->r[10] = 0x7fffu;
    c->r[14] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2521c24; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_2521ba4:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x44du;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[14]); }
    c->r[3] = c->r[2] - c->r[1];
    c->r[2] = 0x15u;
    (void)f_subs(c, c->r[3], 0x4u);
    if (COND_HI) { goto L_2521bcc; }
    c->r[1] = 0x64d304u;
    c->r[1] = 0x2521bccu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
L_2521bcc:;
    c->r[0] = c->r[7];
    c->r[1] = 0x271cu;
    c->r[14] = 0x2521bd8u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2718u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x2521becu; f_2842a64(c);
    c->r[0] = c->r[7];
    c->r[1] = 0xfa2u;
    c->r[2] = ~0x0u;
    c->r[14] = 0x2521bfcu; f_2842a64(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_NE) { goto L_2521c98; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e8u;
    goto L_2522478;
L_2521c24:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[14] * c->r[1]; c->r[1] = r; }
    c->r[8] = (c->r[1] << 3);
    c->r[1] = 0x3e9u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2521d44; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x64u;
    c->r[3] = 0x1388u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[3] = 0x1770u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[3] * c->r[7]; c->r[2] = r; }
    c->r[1] = c->r[8] - c->r[3] * c->r[7];
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x450u);
    if (COND_NE) { goto L_2521f08; }
    c->r[3] = 0x5556u;
    c->r[1] = (c->r[1] << 1);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x55550000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[3]) >> 32);
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    goto L_2521f20;
L_2521c98:;
    c->r[0] = c->r[7];
    c->r[1] = 0xfa6u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x2521cacu; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x2712u;
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[7];
    if (COND_EQ) { c->r[4] = 0x2u; }
    c->r[2] = c->r[4];
    c->r[14] = 0x2521cccu; f_2842a64(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3e9u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2521e64; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = clz32(c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[0] - 0x19u;
    c->r[0] = 0x3u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 3);
    if (COND_EQ) { c->r[0] = (uint32_t)((int32_t)c->r[1] >> 3); }
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2522410; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] << 3);
    c->r[1] = sdiv32(c->r[1], c->r[2]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e9u;
    goto L_2522478;
L_2521d44:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x380cu;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[8]); }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2521f60; }
    c->r[10] = 0x7fffu;
    goto L_2521f7c;
L_2521d68:;
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
L_2521d70:;
    { uint32_t ea = c->r[11] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x40u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x851fu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x51eb0000u;
    c->r[5] = c->r[2];
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[5]) >> 32);
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[5]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 4);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 4);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[3] + (c->r[2] >> 31);
    c->r[3] = c->r[4];
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[1] + (c->r[0] << 1);
    c->r[0] = c->r[10];
    c->r[14] = 0x2521df4u; f_28431c0(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_2521e4c; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x2521e0cu; f_28431cc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2521e58; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[4] = c->r[4] + c->r[6];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_2521d70; }
L_2521e2c:;
    { uint32_t ea = c->r[10] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25222fc; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_2522328;
L_2521e4c:;
    c->r[0] = 0x73a0e4u;
    { uint32_t ea = 0x2521e58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2522eac;
L_2521e58:;
    c->r[0] = 0x73a0d8u;
    { uint32_t ea = 0x2521e64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2522eac;
L_2521e64:;
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2522478; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1392u;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2522428; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x851fu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x51eb0000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[0]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 4);
    c->r[1] = c->r[2] + (c->r[1] >> 31);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_252242c; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x28u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 4) - c->r[1];
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = sdiv32(c->r[3], c->r[2]);
    c->r[2] = c->r[2] - 0x32u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[4] = r; }
    { uint32_t ea = c->r[11] - 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_252242c; }
    c->v.s[0] = LD32(c->r[11] - 84u);
    c->v.s[2] = 0x3f000000u;
    c->v.s[4] = 0x3f800000u;
    c->v.s[6] = c->r[4];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[4] = c->v.s[0];
    goto L_252242c;
L_2521f08:;
    c->r[3] = 0x6667u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x66660000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = c->r[3] + (c->r[1] >> 31);
L_2521f20:;
    c->r[6] = 0x6667u;
    c->r[3] = (c->r[8] << 2);
    c->r[2] = c->r[2] + c->r[1];
    c->r[1] = 0x380cu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x66660000u;
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[6]) >> 32);
    c->r[6] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[3] = c->r[6] + (c->r[3] >> 31);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { c->r[2] = c->r[3]; }
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2521f84; }
    c->r[8] = c->r[2];
L_2521f60:;
    { uint32_t ea = c->r[5] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0x7fffu;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2521f7c; }
    { uint32_t ea = c->r[5] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_25222c8; }
L_2521f7c:;
    c->r[2] = c->r[8];
    goto L_2521fc4;
L_2521f84:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0xe10u;
    c->r[1] = c->r[8] - c->r[2];
    c->r[10] = 0x7fffu;
    (void)f_subs(c, c->r[6], 0x450u);
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[3] = 0xbb8u; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x6db60000u;
    { uint32_t r = c->r[7] * c->r[3] + c->r[1]; c->r[3] = r; }
    c->r[1] = (c->r[1] << 9);
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 6);
    c->r[1] = sdiv32(c->r[1], c->r[3]);
    c->r[3] = 0x1249u;
    c->r[7] = (c->r[1] << 16);
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_LT) { c->r[10] = c->r[1] + c->r[3]; }
L_2521fc4:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
L_2521fcc:;
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x44du;
    c->r[5] = 0x3e80u;
    { uint32_t r = c->r[7] * c->r[1]; c->r[1] = r; }
    c->r[1] = sdiv32(c->r[1], c->r[12]);
    { uint32_t ea = c->r[3] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0xcu; ST32(ea, c->r[7]); }
    c->r[7] = 0x44eu;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    c->r[7] = 0x3e80u;
    if (COND_EQ) { c->r[7] = 0x2ee0u; }
    (void)f_subs(c, c->r[4], c->r[6]);
    c->r[6] = 0x3e9u;
    if (COND_EQ) { c->r[7] = 0x1f40u; }
    (void)f_subs(c, c->r[0], c->r[6]);
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x1f40u;
    if (COND_EQ) { c->r[7] = 0x3e80u; }
    (void)f_subs(c, c->r[0], 0x3e8u);
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_25220ac; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x33u);
    if (COND_LT) { goto L_2522068; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x5556u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x55550000u;
    c->r[7] = (c->r[3] << 4);
    c->r[7] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[7] * (int32_t)c->r[5]) >> 32);
    c->r[3] = c->r[7] + (c->r[7] >> 31);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
L_2522068:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x32c7u;
    (void)f_subs(c, c->r[3], c->r[7]);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_GT) { goto L_25220ac; }
    c->r[7] = 0x2ee0u;
    c->r[5] = 0x44du;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { c->r[7] = 0x1f40u; }
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x2580u);
    if (COND_LT) { c->r[7] = 0x1f40u; }
    if (COND_LT) { { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[7]); } }
    if (COND_LT) { { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[7]); } }
L_25220ac:;
    { uint32_t ea = c->r[3] + 0x88u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[3] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[3] - c->r[5];
    c->r[5] = 0x4fbu;
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_LT) { c->r[5] = c->r[4]; }
    (void)f_subs(c, c->r[0], c->r[6]);
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[5]); }
    if (COND_NE) { goto L_2522118; }
    c->r[0] = c->r[5] + (c->r[5] << 3);
    c->r[6] = 0x6667u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x66660000u;
    c->r[0] = (c->r[0] << 3);
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[6]) >> 32);
    c->r[6] = (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[0] = c->r[6] + (c->r[0] >> 31);
    goto L_252211c;
L_2522118:;
    c->r[0] = (c->r[5] << 3);
L_252211c:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[9] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_2522154; }
    { uint32_t r = c->r[2] * c->r[0]; c->r[0] = r; }
    c->r[7] = (c->r[12] << 3);
    c->r[0] = sdiv32(c->r[0], c->r[7]);
    c->r[0] = (c->r[0] << 3);
    { uint32_t ea = c->r[9] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - 0x7d0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[9] + 0x24u; ST32(ea, c->r[0]); }
L_2522154:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + 0x8u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2522228; }
    c->r[3] = 0x851fu;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = c->r[13] + 0x8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[12] * (int32_t)c->r[3]) >> 32);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = (uint32_t)((int32_t)c->r[5] >> 7);
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = 0x0u;
    c->r[3] = c->r[3] + (c->r[5] >> 31);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] - c->r[3];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); }
    c->r[3] = 0x7fffu;
    { uint32_t r = c->r[0] * c->r[1]; c->r[5] = r; }
    c->r[1] = 0x3820u;
    c->r[0] = c->r[9] + (c->r[5] << 1);
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[0];
    c->r[14] = 0x25221d0u; f_25230c4(c);
    c->r[1] = (c->r[5] << 1);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x25221e0u; f_283abec(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[11] - 0x34u;
    c->r[0] = 0x1u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[4];
    c->r[0] = c->r[10];
    c->r[14] = 0x2522210u; f_28431d8(c);
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_252223c;
L_2522228:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
L_252223c:;
    c->r[5] = c->r[11] - 0xb0u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[11] - 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[1] * c->r[3]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->r[2] = c->r[7] + (c->r[0] << 1);
    c->r[0] = c->r[10];
    c->r[14] = 0x252226cu; f_28431d8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2522280; }
    c->r[0] = 0x739cbcu;
    { uint32_t ea = 0x2522280u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2522eac;
L_2522280:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_25223a0; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_NE) { goto L_252305c; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1f40u);
    if (COND_EQ) { goto L_252304c; }
    (void)f_subs(c, c->r[0], 0x3e80u);
    if (COND_EQ) { goto L_2523054; }
    c->r[1] = 0x2ee0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_252305c; }
    c->r[0] = 0x44eu;
    goto L_2523058;
L_25222c8:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x44du;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[14]); }
    (void)f_subs(c, c->r[2], c->r[1]);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_2522ec0; }
    c->r[1] = 0x44eu;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_2522ecc; }
    c->r[1] = 0x2ee0u;
    c->r[6] = 0xfu;
    goto L_2522ed4;
L_25222fc:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x4b0u;
    { uint32_t ea = c->r[10] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = udiv32(c->r[1], c->r[7]);
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = sdiv32(c->r[2], c->r[1]);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { c->r[2] = c->r[1]; }
L_2522328:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[7];
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2522354u; f_28431e4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2522390; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x739bb4u;
    { uint32_t ea = 0x2522388u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2522390:;
    c->r[0] = 0x739ba0u;
    { uint32_t ea = 0x252239cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    goto L_2522eb4;
L_25223a0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = sdiv32(c->r[0], c->r[2]);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x190u);
    if (COND_GE) { goto L_25223e0; }
    c->r[1] = 0x0u;
L_25223d0:;
    c->r[3] = (c->r[3] << 1);
    c->r[1] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[3], 0x190u);
    if (COND_LT) { goto L_25223d0; }
L_25223e0:;
    c->r[3] = 0x3eau;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_2522fe4; }
    (void)f_subs(c, c->r[2], 0x3e8u);
    if (COND_NE) { goto L_252300c; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x60u;
    c->r[1] = c->r[1] - 0x10u;
    c->r[2] = c->r[2] + (c->r[3] << 5);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = c->r[1] | c->r[2];
    goto L_252301c;
L_2522410:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[0]; }
    c->r[0] = 0x3e9u;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[1]); }
    goto L_2522478;
L_2522428:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_252242c:;
    c->r[0] = c->r[7];
    c->r[1] = 0xfa6u;
    c->r[2] = 0x1u;
    c->r[14] = 0x252243cu; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[7];
    c->r[1] = 0xfb4u;
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x2522450u; f_2842a64(c);
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfa2u;
    c->r[2] = c->r[0] + c->r[4];
    c->r[0] = c->r[7];
    c->r[14] = 0x2522464u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2522478:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = 0x851fu;
    (void)f_subs(c, c->r[0], 0x3e8u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[4]; c->r[2] = r; }
    c->r[2] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[2] * (int32_t)c->r[3]) >> 32);
    c->r[3] = (uint32_t)((int32_t)c->r[2] >> 7);
    c->r[2] = c->r[3] + (c->r[2] >> 31);
    c->r[3] = 0x739a90u;
    { uint32_t ea = 0x25224acu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[7] & 0x1u;
    c->r[6] = c->r[7] + c->r[6];
    c->r[7] = c->r[6] + (c->r[2] << 1);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_2522520; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_2522520; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_2522520; }
    c->r[0] = 0x7ae1u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[2] << 1);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xae140000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[0]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[0] = c->r[1] + (c->r[0] >> 31);
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[5] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = 0x3820u;
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[5] + (c->r[0] << 1);
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[6];
    c->r[14] = 0x252251cu; f_283aa78(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2522520:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[0] - c->r[2];
    { uint32_t r = c->r[1] * c->r[4]; c->r[5] = r; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_2522578; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3820u;
    c->r[2] = (c->r[5] << 1);
    c->r[6] = c->r[7] + c->r[1];
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[6] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x2522560u; f_283f1ac(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    { uint32_t r = c->r[0] * c->r[4]; c->r[2] = r; }
    c->r[0] = c->r[6] + (c->r[5] << 1);
    goto L_2522590;
L_2522578:;
    c->r[1] = c->r[2] - c->r[0];
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[2] = (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] + (c->r[1] << 1);
L_2522590:;
    c->r[14] = 0x2522594u; f_283aa78(c);
    c->r[0] = 0x37dcu;
    c->r[4] = c->r[7];
    c->r[2] = (uint32_t)(uint16_t)(c->r[10]);
    c->r[1] = 0x7fffu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_25225f8; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[7]); }
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[10]);
    c->r[0] = c->r[9];
    c->r[1] = c->r[9];
    c->r[14] = 0x25225f8u; f_25230c4(c);
L_25225f8:;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[10]); }
    c->r[0] = 0x3e9u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2522620; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2522648; }
L_2522620:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x7530u;
    c->r[3] = 0x4000u;
    c->r[0] = c->r[2] - c->r[0];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = 0x0u; }
    c->r[2] = (c->r[0] << 1);
    (void)f_subs(c, c->r[2], 0x4000u);
    if (COND_LT) { c->r[3] = (c->r[0] << 1); }
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[3]); }
L_2522648:;
    c->r[0] = 0x380cu;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_25227f0; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_25227f0; }
    c->r[0] = 0x37d4u;
    c->r[12] = c->r[5];
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD16(ea); c->r[12] = ea; c->r[2] = v; }
    c->r[0] = 0xc884u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], 0x4000u);
    if (COND_GE) { goto L_2522760; }
L_252268c:;
    c->r[1] = (c->r[2] << 17);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 16);
L_2522694:;
    c->r[2] = (c->r[0] << 1);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[9] = 0x7fffu;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x4000u);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = c->r[9] - c->r[2];
    c->r[2] = 0xbb80u;
    if (COND_EQ) { c->r[3] = 0x0u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = sdiv32(c->r[2], c->r[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = sdiv32(c->r[0], c->r[2]);
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_LT) { goto L_252277c; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9] - c->r[1];
    c->r[14] = (c->r[2] << 1);
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = (uint32_t)(int32_t)(int16_t)(c->r[1]);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[3]); }
    c->r[6] = c->r[0] + 0x2u;
L_25226fc:;
    { uint32_t ea = c->r[7]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = c->r[7] + c->r[14]; c->r[0] = v; }
    { uint32_t ea = c->r[6] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[5] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[0] = (c->r[0] << 1);
    c->r[3] = c->r[9] - (uint32_t)((int32_t)c->r[0] >> 16);
    c->r[3] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[10] >> 0));
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[3]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[6]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] << 1);
    c->r[12] = c->r[5] - c->r[3];
    c->r[4] = (uint32_t)((int32_t)c->r[12] >> 1);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 16) * (int32_t)(int16_t)(c->r[4] >> 0));
    c->r[5] = c->r[5] - (uint32_t)((int32_t)c->r[0] >> 15);
    c->r[0] = c->r[3] + (uint32_t)((int32_t)c->r[0] >> 15);
    { uint32_t ea = c->r[6] - 0x2u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST16(ea, c->r[0]); }
    c->r[6] = c->r[6] + 0x4u;
    if (COND_NE) { goto L_25226fc; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_2522784;
L_2522760:;
    (void)f_subs(c, c->r[0], 0x4000u);
    if (COND_GE) { goto L_25227f0; }
    c->r[1] = 0x7fffu;
    (void)f_subs(c, c->r[3], 0x4000u);
    if (COND_NE) { goto L_252268c; }
    goto L_2522694;
L_252277c:;
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = 0x0u;
L_2522784:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_GE) { goto L_25227e0; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[8] << 2);
    c->r[0] = c->r[2] + c->r[0];
    c->r[2] = (uint32_t)(int32_t)(int16_t)(c->r[3]);
    c->r[0] = c->r[0] + 0x2u;
L_25227b0:;
    { uint32_t ea = c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    c->r[6] = c->r[7] - c->r[3];
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[6] = (uint32_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0));
    c->r[7] = c->r[7] - (uint32_t)((int32_t)c->r[6] >> 15);
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[6] >> 15);
    { uint32_t ea = c->r[0] - 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[3]); }
    c->r[0] = c->r[0] + 0x4u;
    if (COND_NE) { goto L_25227b0; }
L_25227e0:;
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
L_25227f0:;
    c->r[0] = 0x3eau;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_2522904; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x3e9u;
    c->r[3] = 0x11u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { c->r[3] = 0x25u; }
    c->r[7] = clz32(c->r[7]);
    c->r[2] = c->r[2] + c->r[7];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] - 0x20u;
    c->r[3] = c->r[3] + c->r[2];
    (void)f_subs(c, c->r[3], (c->r[7] << 3));
    if (COND_GT) { goto L_2522904; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_2522860; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2522850; }
    c->r[0] = c->r[2] + 0x25u;
    (void)f_subs(c, c->r[0], (c->r[9] << 3));
    if (COND_GT) { goto L_2522904; }
L_2522850:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0xb0u;
    c->r[2] = 0xcu;
    c->r[14] = 0x2522860u; f_28428e4(c);
L_2522860:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2522904; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[11] - 0xb0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x2522884u; f_28428e4(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3e9u;
    c->r[2] = c->r[9];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_25228b0; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = clz32(c->r[3]);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] - 0x19u;
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 3);
L_25228b0:;
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x851fu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x51eb0000u;
    c->r[3] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[3] * (int32_t)c->r[7]) >> 32);
    c->r[7] = (uint32_t)((int32_t)c->r[3] >> 9);
    c->r[7] = c->r[7] + (c->r[3] >> 31);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - c->r[2];
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_LT) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_LE) { c->r[7] = 0x2u; }
    (void)f_subs(c, c->r[7], 0x100u);
    if (COND_GT) { c->r[7] = 0x101u; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_2522924; }
    c->r[1] = c->r[7] - 0x2u;
    c->r[0] = c->r[11] - 0xb0u;
    c->r[2] = 0x100u;
    c->r[14] = 0x2522900u; f_28428f0(c);
    goto L_2522924;
L_2522904:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
L_2522924:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3eau;
    c->r[4] = 0x11u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { c->r[4] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_NE) { goto L_2522968; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[11] - 0xb0u;
    c->r[14] = 0x2522950u; f_2842b0c(c);
    c->r[0] = clz32(c->r[6]);
    c->r[0] = c->r[5] + c->r[0];
    c->r[0] = c->r[0] - 0x19u;
    c->r[9] = (uint32_t)((int32_t)c->r[0] >> 3);
    c->r[10] = c->r[9];
    goto L_2522988;
L_2522968:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[7];
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_LT) { c->r[9] = c->r[0]; }
    c->r[0] = c->r[11] - 0xb0u;
    c->r[1] = c->r[9];
    c->r[14] = 0x2522984u; f_2842a7c(c);
    c->r[10] = 0x0u;
L_2522988:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_2522a40; }
    c->r[2] = c->r[11] - 0x58u;
    c->r[1] = 0x2726u;
    c->r[6] = c->r[0];
    c->r[14] = 0x25229a8u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2522a78; }
    c->r[0] = c->r[6];
    c->r[1] = 0x271au;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x25229c8u; f_2842a64(c);
    c->r[0] = c->r[6];
    c->r[1] = 0xfa6u;
    c->r[2] = 0x0u;
    c->r[14] = 0x25229d8u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 6);
    c->r[2] = c->r[1] + (c->r[0] >> 31);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + c->r[9];
    c->r[0] = c->r[6];
    c->r[14] = 0x2522a10u; f_28431f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2522e98; }
    c->r[2] = c->r[11] - 0x38u;
    c->r[0] = c->r[6];
    c->r[1] = 0xfbfu;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    c->r[14] = 0x2522a2cu; f_2842a64(c);
    c->r[0] = c->r[6];
    c->r[1] = 0xfbcu;
    c->r[14] = 0x2522a38u; f_2842a64(c);
    c->r[7] = 0x1u;
    goto L_2522a80;
L_2522a40:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[1], 0x3e8u);
    if (COND_EQ) { goto L_2522a64; }
    c->r[2] = c->r[11] - 0x58u;
    c->r[1] = 0x2726u;
    c->r[14] = 0x2522a60u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_2522a64:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[7] = c->r[1];
    goto L_2522a88;
L_2522a78:;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
L_2522a80:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6];
L_2522a88:;
    c->r[1] = 0x271au;
    c->r[2] = c->r[4];
    c->r[14] = 0x2522a94u; f_2842a64(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3e8u);
    if (COND_NE) { goto L_2522ab0; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_2522b88;
L_2522ab0:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_2522b30; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_2522b30; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0xfbcu;
    c->r[4] = c->r[12];
    c->r[0] = c->r[6];
    c->r[14] = 0x2522ae0u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[11] - 0x34u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[1] = (uint32_t)((int32_t)c->r[0] >> 7);
    c->r[2] = c->r[1] + (c->r[0] >> 31);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x2522b1cu; f_28431f0(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x2712u;
    c->r[2] = 0x0u;
    c->r[14] = 0x2522b2cu; f_2842a64(c);
    c->r[12] = c->r[4];
L_2522b30:;
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = clz32(c->r[1]);
    c->r[0] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] - 0x20u;
    (void)f_subs(c, c->r[0], (c->r[9] << 3));
    if (COND_GT) { goto L_2522b88; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11] - 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[3] = 0x0u;
    c->r[4] = c->r[12];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[2] = c->r[5];
    c->r[14] = 0x2522b74u; f_28431f0(c);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = c->r[0];
    c->r[12] = c->r[4];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_LT) { goto L_2522ea4; }
L_2522b88:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[0] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_2522c7c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfbcu;
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[2];
    c->r[14] = 0x2522bbcu; f_2842a64(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x271au;
    c->r[2] = 0x0u;
    c->r[14] = 0x2522bccu; f_2842a64(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2712u;
    c->r[2] = 0x0u;
    c->r[14] = 0x2522bdcu; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[7] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[1] = 0x851fu;
    { uint32_t ea = c->r[11] - 0xb4u; ST32(ea, c->r[9]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[4] * (int32_t)c->r[1]) >> 32);
    c->r[3] = (uint32_t)((int32_t)c->r[1] >> 6);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 7);
    c->r[4] = c->r[3] + (c->r[1] >> 31);
    c->r[2] = c->r[2] + (c->r[1] >> 31);
    c->r[3] = c->r[11] - 0x34u;
    c->r[5] = c->r[5] - c->r[4];
    c->r[1] = c->r[5] - c->r[2];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[8];
    c->r[14] = 0x2522c2cu; f_28431f0(c);
    { uint32_t ea = c->r[7] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + (c->r[0] << 1);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] + c->r[2];
    c->r[0] = c->r[8];
    c->r[2] = c->r[4];
    c->r[14] = 0x2522c58u; f_28431f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_2522e8c; }
    c->r[2] = c->r[11] - 0x38u;
    c->r[0] = c->r[8];
    c->r[1] = 0xfbfu;
    c->r[14] = 0x2522c70u; f_2842a64(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[8] = v; }
L_2522c7c:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = sdiv32(c->r[0], c->r[5]);
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x190u);
    if (COND_GE) { goto L_2522cb0; }
    c->r[6] = 0x0u;
L_2522ca0:;
    c->r[2] = (c->r[2] << 1);
    c->r[6] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[2], 0x190u);
    if (COND_LT) { goto L_2522ca0; }
L_2522cb0:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x3eau;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_2522ce4; }
    (void)f_subs(c, c->r[1], 0x3e8u);
    if (COND_NE) { goto L_2522d0c; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x60u;
    c->r[1] = c->r[1] + (c->r[2] << 5);
    c->r[2] = c->r[6] - 0x10u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = c->r[2] | c->r[1];
    goto L_2522d1c;
L_2522ce4:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x44eu;
    c->r[1] = c->r[2] - c->r[1];
    c->r[2] = 0x60u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[1] = 0x0u; }
    c->r[1] = c->r[2] & (c->r[1] << 5);
    c->r[1] = c->r[1] | c->r[6];
    c->r[2] = c->r[1] | 0x80u;
    goto L_2522d1c;
L_2522d0c:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] + 0xf0u;
    c->r[1] = c->r[1] | (c->r[2] << 4);
    c->r[2] = c->r[1] | 0x60u;
L_2522d1c:;
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[2] | (c->r[0] << 2);
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ c->r[0];
    c->r[0] = clz32(c->r[0]);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    c->r[2] = 0x3eau;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; } }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x37f8u;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x37fcu;
    { uint32_t ea = c->r[7] + c->r[2]; ST32(ea, c->r[5]); }
    c->r[2] = 0x3808u;
    { uint32_t ea = c->r[7] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] - 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - 0x20u;
    (void)f_subs(c, c->r[0], (c->r[1] << 3));
    if (COND_LE) { goto L_2522dc4; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_GT) { goto L_2522e14; }
    c->r[0] = 0x739184u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2522db8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = ~0x1u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2522dc4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x3e8u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_LT) { goto L_2522e28; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & ~c->r[1];
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2522e2c; }
L_2522df0:;
    { uint32_t ea = c->r[4] + c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_2522e2c; }
    c->r[10] = c->r[10] - 0x1u;
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_GT) { goto L_2522df0; }
    goto L_2522e2c;
L_2522e14:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_2522e28:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_2522e2c:;
    c->r[0] = c->r[1] + c->r[10];
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2522e64; }
    c->r[2] = c->r[1];
L_2522e48:;
    c->r[0] = 0x7390e4u;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2522e58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[2];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2522e64:;
    c->r[0] = c->r[4];
    c->r[2] = c->r[12];
    c->r[4] = c->r[12];
    c->r[14] = 0x2522e74u; f_28431a8(c);
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2522e48; }
    c->r[0] = 0x7390b0u;
    { uint32_t ea = 0x2522e8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2522eac;
L_2522e8c:;
    c->r[0] = 0x7390a4u;
    { uint32_t ea = 0x2522e98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2522eac;
L_2522e98:;
    c->r[0] = 0x739098u;
    { uint32_t ea = 0x2522ea4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_2522eac;
L_2522ea4:;
    c->r[0] = 0x73908cu;
    { uint32_t ea = 0x2522eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_2522eac:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_2522eb4:;
    c->r[0] = ~0x2u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2522ec0:;
    c->r[1] = 0x1f40u;
    c->r[6] = 0xdu;
    goto L_2522ed4;
L_2522ecc:;
    c->r[1] = 0x3e80u;
    c->r[6] = 0x11u;
L_2522ed4:;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_LT) { goto L_2522f48; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0xf800u;
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xffff0000u;
L_2522f00:;
    c->r[3] = c->r[1];
    c->r[12] = 0x0u;
L_2522f08:;
    { uint32_t ea = c->r[3]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[3] = c->r[3] + 0x2u; c->r[4] = v; }
    c->r[14] = 0x0u;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[4], 0x200u);
    if (COND_GE) { c->r[4] = 0x200u; }
    (void)f_subs(c, c->r[4], c->r[9]);
    if (COND_LE) { c->r[4] = c->r[9]; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GT) { c->r[14] = 0x1u; }
    (void)f_subs(c, c->r[12], c->r[6]);
    c->r[5] = c->r[5] + sh_asr(c->r[4], c->r[14]);
    if (COND_LT) { goto L_2522f08; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[1] = c->r[1] + 0x2au;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LT) { goto L_2522f00; }
L_2522f48:;
    c->r[1] = 0x0u;
    c->r[3] = 0x5556u;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] - (c->r[8] << 1);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x55550000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[3]) >> 32);
    c->r[3] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = sdiv32(c->r[5], c->r[6]);
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[2] = 0xcd0000u;
    c->r[1] = c->r[2] + (c->r[1] << 16);
    c->r[2] = 0x200u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[7] >> 0) * (int32_t)(int16_t)(c->r[1] >> 16)) + (int32_t)c->r[2]; if (p != (int32_t)p) c->qf = 1; c->r[1] = (uint32_t)p; }
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 10);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { c->r[3] = (uint32_t)((int32_t)c->r[1] >> 10); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    (void)f_subs(c, c->r[1], 0x450u);
    c->r[1] = c->r[3];
    if (COND_NE) { goto L_2522fb4; }
    c->r[2] = 0x6667u;
    c->r[1] = c->r[3] + (c->r[3] << 1);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x66660000u;
    c->r[1] = (uint32_t)((uint64_t)((int64_t)(int32_t)c->r[1] * (int32_t)c->r[2]) >> 32);
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = c->r[2] + (c->r[1] >> 31);
L_2522fb4:;
    c->r[2] = c->r[8] + c->r[1];
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t r = c->r[3] * c->r[7]; c->r[1] = r; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] << 3);
    c->r[1] = sdiv32(c->r[1], c->r[3]);
    c->r[14] = c->r[1] + c->r[14];
    goto L_2521fcc;
L_2522fe4:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x44eu;
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = 0x60u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LE) { c->r[2] = 0x0u; }
    c->r[2] = c->r[3] & (c->r[2] << 5);
    c->r[1] = c->r[2] | c->r[1];
    c->r[1] = c->r[1] | 0x80u;
    goto L_252301c;
L_252300c:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0xf0u;
    c->r[1] = c->r[1] | (c->r[2] << 4);
    c->r[1] = c->r[1] | 0x60u;
L_252301c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[0] = c->r[1] | (c->r[2] << 2);
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = 0x738efcu;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x2523040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_252304c:;
    c->r[0] = 0x44du;
    goto L_2523058;
L_2523054:;
    c->r[0] = 0x44fu;
L_2523058:;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
L_252305c:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0xb4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[1] + 0x44u; ST32(ea, c->r[2]); }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); } }
    goto L_2521ba4;
}
