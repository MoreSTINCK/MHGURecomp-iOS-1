#include "cpu.h"
#include "neon_rt.h"
void f_9aa47c(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a85804(Cpu *c);
void f_a87660(Cpu *c);
void f_a93ca8(Cpu *c);
void f_b3eff4(Cpu *c);
void f_d02968(Cpu *c);
void f_d029a4(Cpu *c);
void f_d02a60(Cpu *c);
void f_d0b26c(Cpu *c);
void f_d0b2a8(Cpu *c);
void f_d0b360(Cpu *c);
void f_d9a728(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_d96118(Cpu *restrict c) {
    FN_ENTER(0xd96118u);
L_d96118:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xcae924u;
    { uint32_t ea = 0xd9612cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); } }
    c->r[0] = 0xcae8dcu;
    { uint32_t ea = 0xd9615cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd9615cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_d96178(Cpu *restrict c) {
    FN_ENTER(0xd96178u);
L_d96178:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[1];
    c->r[1] = 0x68u;
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[9] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] * c->r[1] + c->r[0]; c->r[2] = r; }
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[1]; }
    c->r[1] = 0xca69f8u;
    { uint32_t ea = 0xd961c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14] + 0x110u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d96384; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_d973d8; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_d9638c; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_d96394; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[6] = 0x7feu;
    c->r[6] = c->r[6] & (c->r[5] >> 5);
    c->r[5] = c->r[6] | 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[6] = c->r[5];
    if (COND_NE) { c->r[6] = 0x0u; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[6] = 0x68u;
    { uint32_t r = c->r[4] * c->r[6] + c->r[0]; c->r[0] = r; }
    c->r[4] = 0xcab9f4u;
    { uint32_t ea = c->r[14] + 0x34u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xd96260u + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[12]);
    if (COND_NE) { goto L_d9639c; }
    c->v.s[16] = LD32(c->r[6]);
    c->v.s[18] = LD32(c->r[6] + 4u);
    c->v.s[20] = LD32(c->r[6] + 8u);
    c->r[0] = c->r[9];
    c->r[14] = 0xd96280u; f_a85804(c);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xf000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7ff0000u;
    c->r[1] = c->r[1] - c->r[2];
    c->r[5] = c->r[0];
    c->r[3] = c->r[0];
    if (COND_GT) { c->r[5] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[8], 0x15u);
    if (COND_HI) { goto L_d97208; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2a0000u;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[0], c->r[8]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97208; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[6] = c->r[5] & c->r[3];
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x11u);
    if (COND_NE) { goto L_d973fc; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { c->r[0] = c->r[0] & c->r[1]; }
    if (COND_EQ) { { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_d96368; }
    c->r[0] = 0xca687cu;
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[8] = 0x11u;
    { uint32_t ea = 0xd9633cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[3] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_HI) { c->r[8] = 0x13u; }
L_d96368:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[14] = 0xd96378u; f_a7ff38(c);
    c->r[0] = (c->r[4] >> 8) & 0xfffu;
    c->r[2] = c->r[6] | c->r[0];
    goto L_d96430;
L_d96384:;
    c->r[5] = 0x0u;
    goto L_d973d8;
L_d9638c:;
    c->r[5] = 0x11u;
    goto L_d973d8;
L_d96394:;
    c->r[5] = 0xbu;
    goto L_d973d8;
L_d9639c:;
    c->r[4] = 0xf000u;
    (void)f_subs(c, c->r[10], 0x0u);
    c->r[6] = 0x0u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x7ff0000u;
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[10] = c->r[4] & (c->r[12] << 12);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x11u);
    c->r[5] = c->r[4];
    if (COND_NE) { goto L_d96414; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { { uint32_t r = c->r[1] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_NE) { goto L_d96414; }
    c->v.s[0] = LD32(c->r[14] + 48u);
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[8] = 0x11u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[5] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[10], c->r[5]);
    if (COND_HI) { c->r[8] = 0x13u; }
L_d96414:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[14] = 0xd96424u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xfffu;
    c->r[2] = c->r[10] | c->r[0];
L_d96430:;
    c->r[0] = c->r[9];
    c->r[1] = 0xb1au;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x5f420000u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] & 0x1fu;
    c->r[2] = c->r[3] | (c->r[2] << 5);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[1]); }
    if (COND_NE) { goto L_d96478; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_d964a4; }
L_d96478:;
    c->r[7] = c->r[7] & 0xffff00ffu;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[2] = 0xb1au;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x158u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9] + 0x154u; ST32(ea, c->r[1]); }
L_d964a4:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2053u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x77560000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_d964c8; }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_d96540;
L_d964c8:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96524; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[2]); }
L_d96524:;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d96540:;
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1fe00000u;
    { uint32_t r = c->r[2] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96568; }
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d96568:;
    c->r[3] = 0x4e6cu;
    c->r[6] = c->r[9];
    c->r[4] = 0x4c68u;
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    c->r[3] = 0xb1a4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_d96620; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d965fc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[5] = 0x98du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d965fc:;
    c->r[5] = 0x4c68u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[6] = 0x4e70u;
    c->r[5] = 0x98du;
    { uint32_t ea = c->r[9] + c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d96620:;
    c->r[4] = 0x4c90u;
    c->r[5] = 0x4e8cu;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_d966d0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d966a8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[5] = 0x991u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d966a8:;
    c->r[5] = 0x4c90u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[5] = 0x4992u;
    c->r[6] = 0x4e90u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x73360000u;
    { uint32_t ea = c->r[9] + c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d966d0:;
    c->r[4] = 0x4d40u;
    c->r[5] = 0x4f3cu;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_d96780; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96758; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[5] = 0x9a7u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d96758:;
    c->r[5] = 0x4d40u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    c->r[6] = 0x39a8u;
    c->r[3] = 0x4f40u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x20c0000u;
    { uint32_t ea = c->r[9] + c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d96780:;
    c->r[3] = 0xca6420u;
    c->r[14] = 0x6u;
    c->r[12] = ~0x0u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffe00000u;
    { uint32_t ea = 0xd96798u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[3] + 44u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_d96810; }
    c->v.s[2] = 0x437f0000u;
    c->r[4] = 0x7f8u;
    c->r[5] = 0x20u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x100000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x100000u;
    c->r[6] = c->r[2] & c->r[4];
    { uint32_t r = c->r[6] ^ c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[4] = c->v.s[0];
    if (COND_NE) { goto L_d967f4; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d967f4; }
    c->r[5] = (c->r[2] >> 11);
    c->r[6] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[5] = c->r[5] | (c->r[1] << 21);
    c->r[5] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_d96850; }
L_d967f4:;
    c->r[6] = 0x21u;
    c->r[2] = c->r[2] & c->r[14];
    c->r[1] = c->r[1] & c->r[12];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x180000u;
    c->r[6] = (c->r[6] & 0xfff807ffu) | ((c->r[4] << 11) & 0x7f800u);
    c->r[2] = c->r[6] | c->r[2];
    goto L_d96848;
L_d96810:;
    c->r[4] = 0xfff8u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x1f0000u;
    c->r[5] = c->r[2] & c->r[4];
    c->r[4] = 0x38u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[5] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96850; }
    c->r[2] = c->r[2] & c->r[14];
    c->r[6] = f_adds(c, c->r[4], 0x1u);
    c->r[1] = c->r[1] & c->r[12];
    c->r[2] = c->r[2] | c->r[6];
    c->r[6] = 0x0u;
    c->r[6] = c->r[6] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[6];
L_d96848:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d96850:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] & 0x10u;
    { uint32_t r = c->r[6] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_d96878; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d9688c; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfccu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_d968a4;
L_d96878:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d9689c; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_d968a4;
L_d9688c:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfdcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_d968a4;
L_d9689c:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_d968a4:;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_d968c0; }
    c->r[1] = c->r[1] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_d968c0:;
    c->r[2] = 0x108cu;
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); } }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[2] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 5) & 0x7ffu;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[2] + 0x11u; }
    (void)f_subs(c, c->r[2], 0x22u);
    if (COND_HI) { c->r[2] = 0x1u; }
    c->r[0] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0xca2c00u;
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xd96914u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[9] + (c->r[0] << 3);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_d96934; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_d96948; }
L_d96934:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[0] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_d96948:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d969bc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x2f5u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19acu;
    c->r[2] = 0x19b0u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_d969bc:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd969d0u; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d96a24; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xd96a20u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96a24:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19acu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_EQ) { goto L_d96a8c; }
    c->r[1] = 0xca615cu;
    c->r[12] = c->r[13] + 0x30u;
    { uint32_t ea = 0xd96a5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_d96a8c:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->r[6] = 0x4ca0u;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4e9cu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = 0xb174u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d96b50; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96b28; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x993u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96b28:;
    c->r[2] = 0x4ca0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9994u;
    c->r[1] = 0x4ea0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xeff30000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_d96b50:;
    c->r[6] = 0x4cc0u;
    c->r[2] = 0x4ebcu;
    c->r[1] = c->r[9];
    c->r[3] = c->r[4] & 0x40000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_d96bfc; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96bd4; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x997u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96bd4:;
    c->r[2] = 0x4cc0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xb998u;
    c->r[1] = 0x4ec0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6ffc0000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_d96bfc:;
    c->r[6] = 0x4edcu;
    c->r[2] = c->r[9];
    c->r[1] = c->r[4] & 0x100u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_d96ca4; }
    c->r[3] = 0x4ce0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_d96d40; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96c88; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96c88:;
    c->r[3] = 0x4ce0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x499cu;
    c->r[2] = 0x4ee0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xeec80000u;
    goto L_d96d30;
L_d96ca4:;
    c->r[3] = 0x4ce8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_d96d40; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96d18; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96d18:;
    c->r[3] = 0x4ce8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x899du;
    c->r[2] = 0x4ee0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x20740000u;
L_d96d30:;
    { uint32_t ea = c->r[9] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_d96d40:;
    c->r[6] = 0x4ef4u;
    c->r[3] = c->r[9];
    c->r[2] = c->r[4] & 0x20000000u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_d96de8; }
    c->r[1] = 0x4cf8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_d96e84; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96dcc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96dcc:;
    c->r[1] = 0x4cf8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    c->r[3] = 0xa99fu;
    c->r[1] = 0x4ef8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc8160000u;
    goto L_d96e74;
L_d96de8:;
    c->r[1] = 0x4d00u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_d96e84; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96e5c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96e5c:;
    c->r[1] = 0x4d00u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    c->r[3] = 0x49a0u;
    c->r[1] = 0x4ef8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x905c0000u;
L_d96e74:;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
L_d96e84:;
    c->r[5] = c->r[4] & 0x1000u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_d96f28; }
    c->r[3] = 0x4d48u;
    c->r[2] = 0x4f4cu;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_d972c0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d96f10; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d96f10:;
    c->r[2] = 0x4d48u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4f50u;
    c->r[1] = 0x9a9u;
    goto L_d972b0;
L_d96f28:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[5];
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d96fa0; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x2f7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19bcu;
    c->r[2] = 0x19c0u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_d96fa0:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd96fb4u; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d97008; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xd97004u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d97008:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19bcu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_EQ) { goto L_d9708c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x68u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[10]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    goto L_d9709c;
L_d9708c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x68u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[10]; c->r[0] = r; }
    c->r[2] = c->r[0] + 0x6cu;
L_d9709c:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[6];
    c->r[0] = c->r[1];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x4f4cu;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_d97164; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb0c4u;
    c->r[6] = 0x4d60u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d972c0; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97144; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d97144:;
    c->r[1] = 0x4d60u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x19acu;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd0740000u;
    goto L_d972b0;
L_d97164:;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb0c4u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_d97228; }
    c->r[6] = 0x4d50u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d972c0; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d971ec; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d971ec:;
    c->r[1] = 0x4d50u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xa9aau;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8a860000u;
    goto L_d972b0;
L_d97208:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[14] = 0xd97218u; f_a7ff38(c);
    c->r[2] = ~c->r[5];
    goto L_d96430;
L_d97228:;
    c->r[6] = 0x4d58u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d972c0; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97298; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d97298:;
    c->r[1] = 0x4d58u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xc9abu;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb5c0000u;
L_d972b0:;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_d972c0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x68u;
    c->r[7] = c->r[10];
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + c->r[0]; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[0] >> 5) & 0x7ffu;
    c->r[0] = c->r[10];
    c->pc = c->r[6]; c->r[14] = 0xd972f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[4] << 5);
    c->r[14] = 0xd97310u; f_15efe30(c);
    c->r[1] = 0xca5898u;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xd97320u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_d973ec; }
L_d97344:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d9736c; }
    c->r[2] = 0xca7c5cu;
    c->r[3] = 0xca7c5cu;
    { uint32_t ea = 0xd9735cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xd97360u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_d9736c:;
    { uint32_t ea = c->r[9] + 0x124u; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[9] + 0x134u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x150u; ST32(ea, c->r[0]); }
L_d97384:;
    c->r[0] = c->r[9];
    c->r[14] = 0xd9738cu; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xd973a0u; f_b3eff4(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xd973a8u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x68u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[10]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
L_d973d8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_d973ec:;
    { uint32_t ea = c->r[9] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_NE) { goto L_d97344; }
    goto L_d97384;
L_d973fc:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_d96368;
}
void f_d9741c(Cpu *restrict c) {
    FN_ENTER(0xd9741cu);
L_d9741c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xcad620u;
    { uint32_t ea = 0xd97430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); } }
    c->r[0] = 0xcad5d8u;
    { uint32_t ea = 0xd97460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd97460u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_d9747c(Cpu *restrict c) {
    FN_ENTER(0xd9747cu);
L_d9747c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[9] = c->r[1];
    c->r[8] = c->r[0];
    c->r[0] = 0x68u;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[9] + 0x50u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t r = c->r[14] * c->r[0] + c->r[8]; c->r[2] = r; }
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CC) { c->r[3] = c->r[0]; }
    c->r[0] = 0xca56f0u;
    { uint32_t ea = 0xd974c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d97694; }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_d98704; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_d9769c; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_d976a4; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[6] = 0x7feu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[12] = r; }
    c->r[6] = c->r[6] & (c->r[4] >> 5);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[6] | 0x1u;
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[4] = c->r[5];
    if (COND_NE) { c->r[4] = 0x0u; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[4] = 0x68u;
    { uint32_t r = c->r[14] * c->r[4] + c->r[8]; c->r[6] = r; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[6] = 0xcaa6e8u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xd9756cu + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { goto L_d976ac; }
    c->v.s[16] = LD32(c->r[4]);
    c->v.s[18] = LD32(c->r[4] + 4u);
    c->v.s[20] = LD32(c->r[4] + 8u);
    c->r[0] = c->r[9];
    c->r[5] = c->r[3];
    c->r[14] = 0xd97590u; f_a85804(c);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0xf000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7ff0000u;
    c->r[1] = c->r[1] - c->r[2];
    c->r[8] = c->r[0];
    c->r[3] = c->r[0];
    if (COND_GT) { c->r[8] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[10], 0x15u);
    if (COND_HI) { goto L_d98530; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2a0000u;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[0], c->r[10]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98530; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = 0x0u;
    c->r[5] = c->r[8] & c->r[3];
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x11u);
    if (COND_NE) { goto L_d98728; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { c->r[0] = c->r[0] & c->r[1]; }
    if (COND_EQ) { { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_d97678; }
    c->r[0] = 0xca556cu;
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[10] = 0x11u;
    { uint32_t ea = 0xd9764cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[3] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_HI) { c->r[10] = 0x13u; }
L_d97678:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[14] = 0xd97688u; f_a7ff38(c);
    c->r[0] = (c->r[4] >> 8) & 0xfffu;
    c->r[2] = c->r[5] | c->r[0];
    goto L_d97744;
L_d97694:;
    c->r[5] = 0x0u;
    goto L_d98704;
L_d9769c:;
    c->r[5] = 0x11u;
    goto L_d98704;
L_d976a4:;
    c->r[5] = 0xbu;
    goto L_d98704;
L_d976ac:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0xf000u;
    c->r[1] = c->r[6];
    c->r[6] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x7ff0000u;
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[4] = c->r[3] & (c->r[1] << 12);
    c->r[1] = 0x0u;
    c->r[5] = c->r[3];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { c->r[12] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x11u);
    if (COND_NE) { goto L_d9772c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { { uint32_t r = c->r[12] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_NE) { goto L_d9772c; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[10] = 0x11u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[5] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_HI) { c->r[10] = 0x13u; }
L_d9772c:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[14] = 0xd9773cu; f_a7ff38(c);
    c->r[0] = (c->r[8] >> 8) & 0xfffu;
    c->r[2] = c->r[4] | c->r[0];
L_d97744:;
    c->r[0] = c->r[9];
    c->r[1] = 0xb1au;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x5f420000u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] & 0x1fu;
    c->r[2] = c->r[3] | (c->r[2] << 5);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[1]); }
    if (COND_NE) { goto L_d9778c; }
    { uint32_t ea = c->r[9] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_d977b8; }
L_d9778c:;
    c->r[7] = c->r[7] & 0xffff00ffu;
    { uint32_t ea = c->r[9] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[2] = 0xb1au;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x158u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9] + 0x154u; ST32(ea, c->r[1]); }
L_d977b8:;
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x2054u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x833a0000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_d977dc; }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_d97854;
L_d977dc:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97838; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[9] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x1c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[2]); }
L_d97838:;
    { uint32_t ea = c->r[9] + 0x1c8u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
L_d97854:;
    c->r[6] = 0x0u;
    c->r[12] = 0xfff8u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x1fe00000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x1f0000u;
    c->r[6] = c->r[3] & c->r[6];
    { uint32_t sc = 0; uint32_t r = c->r[6] ^ 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97898; }
    c->r[6] = 0xfffeu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xe01f0000u;
    c->r[3] = c->r[3] & c->r[6];
    c->r[6] = f_adds(c, c->r[12], 0x9u);
    c->r[3] = c->r[3] | c->r[6];
    c->r[6] = 0x0u;
    c->r[6] = c->r[6] + 0x0u + c->cf;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] | c->r[6];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
L_d97898:;
    c->r[5] = 0x4e6cu;
    c->r[6] = c->r[9];
    c->r[1] = 0x4c78u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    c->r[5] = 0xb1a4u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { goto L_d97954; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d9792c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[5] = 0x98du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
L_d9792c:;
    c->r[1] = 0x4c78u;
    c->r[3] = c->r[3] | 0x3u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[6] = 0x898fu;
    c->r[1] = 0x4e70u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x3ea80000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
L_d97954:;
    c->r[4] = 0x4c90u;
    c->r[1] = 0x4e8cu;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_d97a04; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d979dc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[5] = 0x991u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
L_d979dc:;
    c->r[1] = 0x4c90u;
    c->r[3] = c->r[3] | 0x3u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[6] = 0x4992u;
    c->r[1] = 0x4e90u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x73360000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
L_d97a04:;
    c->r[4] = 0x4d38u;
    c->r[1] = 0x4f3cu;
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_d97ab0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97a8c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[5] = 0x9a7u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
L_d97a8c:;
    c->r[1] = 0x4d38u;
    c->r[3] = c->r[3] | 0x3u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4f40u;
    c->r[6] = 0x9a7u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
L_d97ab0:;
    c->r[1] = 0xca50f0u;
    c->r[8] = 0x6u;
    c->r[14] = ~0x0u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xffe00000u;
    { uint32_t ea = 0xd97ac8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[0] = LD32(c->r[5] + 44u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_d97b40; }
    c->v.s[2] = 0x437f0000u;
    c->r[1] = 0x7f8u;
    c->r[4] = 0x20u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x100000u;
    c->r[6] = c->r[3] & c->r[1];
    { uint32_t r = c->r[6] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[1] = c->v.s[0];
    if (COND_NE) { goto L_d97b24; }
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97b24; }
    c->r[6] = (c->r[3] >> 11);
    c->r[4] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[6] = c->r[6] | (c->r[2] << 21);
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_d97b74; }
L_d97b24:;
    c->r[6] = 0x21u;
    c->r[3] = c->r[3] & c->r[8];
    c->r[2] = c->r[2] & c->r[14];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x180000u;
    c->r[6] = (c->r[6] & 0xfff807ffu) | ((c->r[1] << 11) & 0x7f800u);
    c->r[1] = c->r[6] | c->r[3];
    goto L_d97b70;
L_d97b40:;
    c->r[1] = 0x38u;
    c->r[6] = c->r[3] & c->r[12];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[6] ^ c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97b74; }
    c->r[3] = c->r[3] & c->r[8];
    c->r[1] = f_adds(c, c->r[1], 0x1u);
    c->r[2] = c->r[2] & c->r[14];
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = 0x0u;
    c->r[3] = c->r[3] + 0x0u + c->cf;
    c->r[2] = c->r[2] | c->r[3];
L_d97b70:;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_d97b74:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[3] & 0x10u;
    { uint32_t r = c->r[3] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_d97ba0; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d97bb8; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfccu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_d97bd0;
L_d97ba0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d97bc8; }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_d97bd0;
L_d97bb8:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_d97bd0;
L_d97bc8:;
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xfc4u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d97bd0:;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_d97bec; }
    c->r[1] = c->r[1] & 0x1f00u;
    { uint32_t ea = c->r[9] + 0x11cu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_d97bec:;
    c->r[2] = 0x108cu;
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x120u; ST32(ea, c->r[2]); } }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[2] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 5) & 0x7ffu;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[2] = c->r[2] + 0x11u; }
    (void)f_subs(c, c->r[2], 0x22u);
    if (COND_HI) { c->r[2] = 0x1u; }
    c->r[0] = c->r[5] + (c->r[2] << 2);
    c->r[2] = 0xca18d4u;
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xd97c40u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[9] + (c->r[0] << 3);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_d97c60; }
    { uint32_t ea = c->r[9] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_d97c74; }
L_d97c60:;
    { uint32_t ea = c->r[9] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x108u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[0] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[9] + 0x10cu; ST32(ea, c->r[1]); }
L_d97c74:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d97ce8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x2f5u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19acu;
    c->r[2] = 0x19b0u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_d97ce8:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd97cfcu; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d97d50; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xd97d4cu; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d97d50:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19acu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_d97db4; }
    c->r[1] = 0xca4e34u;
    c->r[12] = c->r[13] + 0x30u;
    { uint32_t ea = 0xd97d84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_d97db4:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->r[6] = 0x4ca0u;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4e9cu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = 0xb174u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d97e7c; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97e54; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x993u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d97e54:;
    c->r[2] = 0x4ca0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x9994u;
    c->r[1] = 0x4ea0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xeff30000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_d97e7c:;
    c->r[6] = 0x4cc0u;
    c->r[2] = 0x4ebcu;
    c->r[1] = c->r[9];
    c->r[3] = c->r[4] & 0x40000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_d97f28; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97f00; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x997u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d97f00:;
    c->r[2] = 0x4cc0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xb998u;
    c->r[1] = 0x4ec0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6ffc0000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_d97f28:;
    c->r[6] = 0x4edcu;
    c->r[2] = c->r[9];
    c->r[1] = c->r[4] & 0x100u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_d97fd0; }
    c->r[3] = 0x4ce0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_d9806c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d97fb4; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d97fb4:;
    c->r[3] = 0x4ce0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x499cu;
    c->r[2] = 0x4ee0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xeec80000u;
    goto L_d9805c;
L_d97fd0:;
    c->r[3] = 0x4ce8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_d9806c; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98044; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d98044:;
    c->r[3] = 0x4ce8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x899du;
    c->r[2] = 0x4ee0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x20740000u;
L_d9805c:;
    { uint32_t ea = c->r[9] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_d9806c:;
    c->r[6] = 0x4ef4u;
    c->r[3] = c->r[9];
    c->r[2] = c->r[4] & 0x20000000u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_d98114; }
    c->r[1] = 0x4cf8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_d981b0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d980f8; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d980f8:;
    c->r[1] = 0x4cf8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    c->r[3] = 0xa99fu;
    c->r[1] = 0x4ef8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc8160000u;
    goto L_d981a0;
L_d98114:;
    c->r[1] = 0x4d00u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_d981b0; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98188; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[5] = 0x99eu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d98188:;
    c->r[1] = 0x4d00u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    c->r[3] = 0x49a0u;
    c->r[1] = 0x4ef8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x905c0000u;
L_d981a0:;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
L_d981b0:;
    c->r[4] = c->r[4] & 0x1000u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_d98254; }
    c->r[3] = 0x4d48u;
    c->r[2] = 0x4f4cu;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_d985e8; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d9823c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d9823c:;
    c->r[2] = 0x4d48u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4f50u;
    c->r[1] = 0x9a9u;
    goto L_d985d8;
L_d98254:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4];
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d982cc; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xecu;
    c->r[3] = 0x2f7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19bcu;
    c->r[2] = 0x19c0u;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[0]); }
L_d982cc:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd982e0u; f_a6a438(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d98334; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xd98330u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d98334:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19bcu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_d983b4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x68u;
    { uint32_t r = c->r[12] * c->r[1] + c->r[8]; c->r[2] = r; }
    { uint32_t ea = c->r[2] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] - 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    ST32(c->r[13] + 56u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    goto L_d983c4;
L_d983b4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x68u;
    { uint32_t r = c->r[12] * c->r[0] + c->r[8]; c->r[0] = r; }
    c->r[2] = c->r[0] + 0x6cu;
L_d983c4:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[6];
    c->r[0] = c->r[1];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[9] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x4f4cu;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_d9848c; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb0c4u;
    c->r[6] = 0x4d60u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d985e8; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d9846c; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d9846c:;
    c->r[1] = 0x4d60u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x19acu;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd0740000u;
    goto L_d985d8;
L_d9848c:;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb0c4u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_d98550; }
    c->r[6] = 0x4d50u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d985e8; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98514; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d98514:;
    c->r[1] = 0x4d50u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xa9aau;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8a860000u;
    goto L_d985d8;
L_d98530:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[2] = 0x0u;
    c->r[14] = 0xd98540u; f_a7ff38(c);
    c->r[2] = ~c->r[8];
    goto L_d97744;
L_d98550:;
    c->r[6] = 0x4d58u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d985e8; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d985c0; }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[9] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d985c0:;
    c->r[1] = 0x4d58u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xc9abu;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb5c0000u;
L_d985d8:;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_d985e8:;
    c->r[0] = 0x68u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t r = c->r[12] * c->r[0]; c->r[1] = r; }
    c->r[0] = c->r[8];
    if (COND_EQ) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[8] = c->r[8] + c->r[1]; c->r[1] = v; }
    c->r[7] = (c->r[5] << 1);
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    c->r[1] = c->r[9];
    c->pc = c->r[6]; c->r[14] = 0xd98620u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[2] = (c->r[5] << 6);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xd98634u; f_15efe30(c);
    c->r[1] = 0xca4574u;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xd98644u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[9] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { { uint32_t ea = c->r[9] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_d98718; }
L_d98668:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d98690; }
    c->r[2] = 0xca6938u;
    c->r[3] = 0xca6938u;
    { uint32_t ea = 0xd98680u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xd98684u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_d98690:;
    { uint32_t ea = c->r[9] + 0x124u; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[9] + 0x134u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x150u; ST32(ea, c->r[0]); }
L_d986a8:;
    c->r[0] = c->r[9];
    c->r[14] = 0xd986b0u; f_a826fc(c);
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xd986c4u; f_b3eff4(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xd986ccu; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x68u;
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
L_d98704:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_d98718:;
    { uint32_t ea = c->r[9] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x20u);
    if (COND_NE) { goto L_d98668; }
    goto L_d986a8;
L_d98728:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_d97678;
}
void f_d98748(Cpu *restrict c) {
    FN_ENTER(0xd98748u);
L_d98748:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xcac2f4u;
    { uint32_t ea = 0xd9875cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); } }
    c->r[0] = 0xcac2acu;
    { uint32_t ea = 0xd9878cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd9878cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_d987a8(Cpu *restrict c) {
    FN_ENTER(0xd987a8u);
L_d987a8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x50u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[1];
    c->r[6] = c->r[2];
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[8] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] + (c->r[1] << 1);
    c->r[3] = c->r[0] + (c->r[5] << 3);
    { uint32_t ea = c->r[3] + 0xfcu; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_d99f3c; }
    c->r[2] = 0xca43c4u;
    { uint32_t ea = 0xd987f4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_d9897c; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_d99f3c; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_d98984; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->r[7] = 0x0u;
    c->r[14] = 0xf000u;
    c->r[3] = 0x0u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x7ff0000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; c->r[10] = r; }
    if (COND_EQ) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[7] = 0x7feu;
    c->r[2] = c->r[7] & (c->r[2] >> 5);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[2] | 0x1u;
    c->r[2] = 0xca93dcu;
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[9] = c->r[7];
    if (COND_NE) { c->r[9] = 0x0u; }
    { uint32_t ea = 0xd98878u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_NE) { goto L_d9898c; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[14];
    c->v.s[16] = LD32(c->r[0]);
    c->v.s[18] = LD32(c->r[0] + 4u);
    c->v.s[20] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[8];
    c->r[14] = 0xd9889cu; f_a85804(c);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[3] = c->r[4];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[4] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[6], 0x15u);
    if (COND_HI) { goto L_d98a04; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2a0000u;
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[0], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98a04; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[4] = c->r[4] & c->r[3];
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_d98a48; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[0] & c->r[9];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_d98a50; }
    c->r[0] = 0xca426cu;
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[6] = 0x11u;
    { uint32_t ea = 0xd9894cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[3] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_HI) { c->r[6] = 0x13u; }
    goto L_d98a50;
L_d9897c:;
    c->r[7] = 0x0u;
    goto L_d99f3c;
L_d98984:;
    c->r[7] = 0xbu;
    goto L_d99f3c;
L_d9898c:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[1] = 0x0u;
    c->r[5] = c->r[14] & (c->r[12] << 12);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { c->r[10] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_NE) { goto L_d98a20; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_d98a20; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t r = c->r[10] | c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { goto L_d98a24; }
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->r[1] = 0x7fffu;
    c->r[2] = 0x7fffu;
    c->r[6] = 0x11u;
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] - c->r[2];
    if (COND_GT) { c->r[14] = (c->r[1] << 12); }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_HI) { c->r[6] = 0x13u; }
    goto L_d98a24;
L_d98a04:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0xd98a14u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = ~c->r[4];
    goto L_d98a40;
L_d98a20:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
L_d98a24:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0xd98a34u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xfffu;
    c->r[2] = c->r[5] | c->r[0];
L_d98a40:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_d98a6c;
L_d98a48:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
L_d98a50:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0xd98a60u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xfffu;
    c->r[2] = c->r[4] | c->r[0];
L_d98a6c:;
    c->r[0] = c->r[8];
    c->r[1] = 0xb1au;
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x5f420000u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] & 0x1fu;
    c->r[2] = c->r[3] | (c->r[2] << 5);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[1]); }
    if (COND_NE) { goto L_d98ab0; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_d98adc; }
L_d98ab0:;
    c->r[7] = c->r[7] & 0xffff00ffu;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[2] = 0xb1au;
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[1]); }
L_d98adc:;
    { uint32_t ea = c->r[8] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x3055u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x14090000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_d98b00; }
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_d98b78;
L_d98b00:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98b5c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[8] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x1c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[2]); }
L_d98b5c:;
    { uint32_t ea = c->r[8] + 0x1c8u; ST32(ea, c->r[1]); }
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + 0x154u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d98b78:;
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1fe00000u;
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98ba8; }
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] | 0x1u;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d98ba8:;
    c->r[3] = 0x4e6cu;
    c->r[4] = c->r[8];
    c->r[5] = 0x4c80u;
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[6] = v; }
    c->r[3] = 0xb1a4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_d98c64; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98c3c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[6] = 0x98du;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d98c3c:;
    c->r[6] = 0x4c80u;
    c->r[5] = 0x990u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x124b0000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    c->r[6] = 0x4e70u;
    { uint32_t ea = c->r[8] + c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d98c64:;
    c->r[4] = 0x4c90u;
    c->r[5] = 0x4e8cu;
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_d98d14; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98cec; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x991u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d98cec:;
    c->r[5] = 0x4c90u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[5] = 0x4992u;
    c->r[6] = 0x4e90u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x73360000u;
    { uint32_t ea = c->r[8] + c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d98d14:;
    c->r[4] = 0x4d38u;
    c->r[5] = 0x4f3cu;
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_d98dc0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98d9c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x9a7u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_d98d9c:;
    c->r[5] = 0x4d38u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
    c->r[3] = 0x4f40u;
    c->r[6] = 0x9a7u;
    { uint32_t ea = c->r[8] + c->r[3]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d98dc0:;
    c->r[3] = 0xca3de0u;
    c->r[14] = 0x6u;
    c->r[12] = ~0x0u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffe00000u;
    { uint32_t ea = 0xd98dd8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[3] + 44u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_d98e50; }
    c->v.s[2] = 0x437f0000u;
    c->r[4] = 0x7f8u;
    c->r[5] = 0x20u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x100000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x100000u;
    c->r[6] = c->r[2] & c->r[4];
    { uint32_t r = c->r[6] ^ c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[4] = c->v.s[0];
    if (COND_NE) { goto L_d98e34; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98e34; }
    c->r[5] = (c->r[2] >> 11);
    c->r[6] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[5] = c->r[5] | (c->r[1] << 21);
    c->r[5] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_d98e90; }
L_d98e34:;
    c->r[6] = 0x21u;
    c->r[2] = c->r[2] & c->r[14];
    c->r[1] = c->r[1] & c->r[12];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x180000u;
    c->r[6] = (c->r[6] & 0xfff807ffu) | ((c->r[4] << 11) & 0x7f800u);
    c->r[2] = c->r[6] | c->r[2];
    goto L_d98e88;
L_d98e50:;
    c->r[4] = 0xfff8u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x1f0000u;
    c->r[5] = c->r[2] & c->r[4];
    c->r[4] = 0x38u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[5] ^ c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d98e90; }
    c->r[2] = c->r[2] & c->r[14];
    c->r[6] = f_adds(c, c->r[4], 0x1u);
    c->r[1] = c->r[1] & c->r[12];
    c->r[2] = c->r[2] | c->r[6];
    c->r[6] = 0x0u;
    c->r[6] = c->r[6] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[6];
L_d98e88:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
L_d98e90:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] & 0x10u;
    { uint32_t r = c->r[6] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_d98eb8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d98ecc; }
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xfccu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_d98ee0;
L_d98eb8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d98ed8; }
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xfe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_d98ee0;
L_d98ecc:;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xfdcu; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_d98ee0;
L_d98ed8:;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xfc4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_d98ee0:;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_d98efc; }
    c->r[1] = c->r[1] & 0x1f00u;
    { uint32_t ea = c->r[8] + 0x11cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] | 0x2000u;
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[1]); }
L_d98efc:;
    c->r[2] = 0x108cu;
    { uint32_t ea = c->r[8] + 0x120u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[2]); } }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[2] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 5) & 0x7ffu;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[2] + 0x11u; }
    (void)f_subs(c, c->r[2], 0x22u);
    if (COND_HI) { c->r[2] = 0x1u; }
    c->r[0] = c->r[3] + (c->r[2] << 2);
    c->r[2] = 0xca05c4u;
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xd98f50u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xfffu;
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_d98f70; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_d98f84; }
L_d98f70:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[0] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[1]); }
L_d98f84:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d98ff8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x2f6u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19b4u;
    c->r[2] = 0x19b8u;
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_d98ff8:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd9900cu; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0xfffcu;
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x30000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[5] & (c->r[4] << 2);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d99060; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xd9905cu; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d99060:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19b4u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_d99150; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d990dc; }
    c->v.s[0] = LD32(c->r[1] + 220u);
    c->v.s[2] = LD32(c->r[1] + 224u);
    c->r[1] = 0x0u;
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_d99100;
L_d990dc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
L_d99100:;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 16u);
    c->v.s[2] = LD32(c->r[1] + 20u);
    c->v.s[4] = LD32(c->r[1] + 24u);
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
    ST32(c->r[0] + 20u, c->v.s[2]);
    ST32(c->r[0] + 24u, c->v.s[4]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 28u);
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 32u);
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[0] + 32u, c->v.s[0]);
L_d99150:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d991c4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x2f5u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19acu;
    c->r[2] = 0x19b0u;
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_d991c4:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd991d8u; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[5] & (c->r[4] << 2);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d99224; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xd99220u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d99224:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19acu;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_d99288; }
    c->r[1] = 0xca3960u;
    c->r[12] = c->r[13] + 0x20u;
    { uint32_t ea = 0xd99258u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + 0x1cu;
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
L_d99288:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[6];
    c->r[12] = c->r[14] & 0x40000u;
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d9936c; }
    c->r[3] = 0x1be4u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_d994fc; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99330; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[8] + 0xecu;
    c->r[0] = 0x33cu;
    c->r[6] = c->r[6] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[6] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[6] + (c->r[5] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_d99330:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_d994b8; }
    c->r[0] = 0xca5c70u;
    c->r[6] = 0xca5c70u;
    { uint32_t ea = 0xd99348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xd9934cu + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x334000u;
    c->r[3] = c->r[0] | 0xac00000u;
    goto L_d994c0;
L_d9936c:;
    c->r[1] = 0xb174u;
    c->r[0] = 0x4e9cu;
    c->r[2] = c->r[8];
    c->r[3] = 0x4ca0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_d9941c; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d993f4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x993u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d993f4:;
    c->r[0] = 0x4ca0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x9994u;
    c->r[0] = 0x4ea0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xeff30000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_d9941c:;
    c->r[3] = 0x4cc0u;
    c->r[0] = 0x4ebcu;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_d996fc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d9949c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x997u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d9949c:;
    c->r[0] = 0x4cc0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0xb998u;
    c->r[0] = 0x4ec0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6ffc0000u;
    goto L_d996ec;
L_d994b8:;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
L_d994c0:;
    c->r[0] = 0x1be8u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_d994e0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_d994f4;
L_d994e0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[3] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
L_d994f4:;
    c->r[0] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_d994fc:;
    c->r[3] = c->r[1] & 0x4u;
    c->r[1] = 0xb174u;
    c->r[0] = 0x4e9cu;
    c->r[2] = c->r[8];
    c->r[6] = 0x4cb0u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_d995b4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d9958c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[5] = 0x993u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d9958c:;
    c->r[0] = 0x4cb0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x1996u;
    c->r[0] = 0x4ea0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x789e0000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_d995b4:;
    c->r[0] = 0x4ebcu;
    c->r[2] = c->r[8];
    c->r[5] = 0xfffcu;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x30000u;
    if (COND_NE) { goto L_d99660; }
    c->r[0] = 0x4cd0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_d996fc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99644; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x997u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d99644:;
    c->r[0] = 0x4cd0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0xe99au;
    c->r[0] = 0x4ec0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x99e10000u;
    goto L_d996ec;
L_d99660:;
    c->r[0] = 0x4cc8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_d996fc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d996d4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x997u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d996d4:;
    c->r[0] = 0x4cc8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x7999u;
    c->r[0] = 0x4ec0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xda370000u;
L_d996ec:;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_d996fc:;
    c->r[0] = 0x4edcu;
    c->r[3] = c->r[8];
    c->r[2] = c->r[14] & 0x100u;
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_d997b4; }
    c->r[0] = 0x4ce0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_d99858; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99790; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = c->r[5];
    c->r[5] = 0x99bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d99790:;
    c->r[0] = 0x4ce0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x499cu;
    c->r[0] = 0x4ee0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xeec80000u;
    goto L_d99848;
L_d997b4:;
    c->r[0] = 0x4ce8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_d99858; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99830; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = c->r[5];
    c->r[5] = 0x99bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d99830:;
    c->r[0] = 0x4ce8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x899du;
    c->r[0] = 0x4ee0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x20740000u;
L_d99848:;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
L_d99858:;
    c->r[6] = 0x4ef4u;
    c->r[3] = c->r[8];
    c->r[0] = c->r[14] & 0x20000000u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_d9990c; }
    c->r[2] = 0x4cf8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { goto L_d999b0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d998ec; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[4] = c->r[5];
    c->r[5] = 0x99eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d998ec:;
    c->r[2] = 0x4cf8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0xa99fu;
    c->r[2] = 0x4ef8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc8160000u;
    goto L_d999a0;
L_d9990c:;
    c->r[2] = 0x4d00u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { goto L_d999b0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99988; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[4] = c->r[5];
    c->r[5] = 0x99eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d99988:;
    c->r[2] = 0x4d00u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x49a0u;
    c->r[2] = 0x4ef8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x905c0000u;
L_d999a0:;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_d999b0:;
    c->r[10] = c->r[9] - 0x14u;
    c->r[4] = c->r[14] & 0x1000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_d99a58; }
    c->r[3] = 0x4d48u;
    c->r[2] = 0x4f4cu;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_d99db0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99a40; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_d99a40:;
    c->r[2] = 0x4d48u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x4f50u;
    c->r[1] = 0x9a9u;
    goto L_d99da0;
L_d99a58:;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_d99ad0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x2f7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x19bcu;
    c->r[2] = 0x19c0u;
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_d99ad0:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xd99ae4u; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[5] & (c->r[4] << 2);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_d99b30; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xd99b2cu; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_d99b30:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x19bcu;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_d99ba4; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[1] + 84u);
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_d99ba4:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4f4cu;
    c->r[0] = c->r[1];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_d99c6c; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb0c4u;
    c->r[6] = 0x4d60u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d99db0; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99c50; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d99c50:;
    c->r[1] = 0x4d60u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x19acu;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd0740000u;
    goto L_d99da0;
L_d99c6c:;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb0c4u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { goto L_d99d18; }
    c->r[6] = 0x4d50u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d99db0; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99cf4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d99cf4:;
    c->r[1] = 0x4d50u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xa9aau;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8a860000u;
    goto L_d99da0;
L_d99d18:;
    c->r[6] = 0x4d58u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_d99db0; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_d99d88; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[6] = 0x9a9u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_d99d88:;
    c->r[1] = 0x4d58u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xc9abu;
    c->r[0] = 0x4f50u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb5c0000u;
L_d99da0:;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_d99db0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = c->r[4] + (c->r[1] << 3); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 5) & 0x7ffu;
    c->r[1] = c->r[8];
    c->pc = c->r[7]; c->r[14] = 0xd99de4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 5);
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xd99dfcu; f_15efe30(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 1);
    c->r[14] = 0xd99e14u; f_15efe30(c);
    c->r[0] = 0xca2d94u;
    { uint32_t ea = c->r[8] + 0x138u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xd99e24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x124u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[7], c->r[2]); }
    if (COND_EQ) { goto L_d99f50; }
L_d99e4c:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_d99e74; }
    c->r[3] = 0xca5154u;
    c->r[7] = 0xca5154u;
    { uint32_t ea = 0xd99e64u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xd99e68u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
L_d99e74:;
    { uint32_t ea = c->r[8] + 0x124u; ST32(ea, c->r[2]); }
    c->r[2] = 0x20u;
    { uint32_t ea = c->r[8] + 0x134u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x138u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[3] = v; }
L_d99e90:;
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_d99ed4; }
    c->r[1] = 0xca5100u;
    c->r[2] = 0xca5100u;
    { uint32_t ea = 0xd99eb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xd99ebcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[1]); }
L_d99ed4:;
    c->r[0] = c->r[8];
    c->r[14] = 0xd99edcu; f_a826fc(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[0] >> 1);
    c->r[0] = c->r[8];
    c->r[14] = 0xd99efcu; f_a93ca8(c);
    c->r[0] = c->r[8];
    c->r[14] = 0xd99f04u; f_a82760(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[7]); }
L_d99f3c:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[11] - 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_d99f50:;
    { uint32_t ea = c->r[8] + 0x134u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x20u);
    if (COND_NE) { goto L_d99e4c; }
    goto L_d99e90;
}
void f_d99f80(Cpu *restrict c) {
    FN_ENTER(0xd99f80u);
L_d99f80:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[9] = c->r[3];
    c->r[7] = c->r[2];
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    c->r[14] = 0xd99fecu; f_d0b26c(c);
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd99ffcu; f_d0b2a8(c);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x20u; ST8(ea, c->r[5]); }
    c->r[14] = 0xd9a010u; f_d0b26c(c);
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a020u; f_d0b2a8(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x21u; ST8(ea, c->r[5]); }
    c->r[14] = 0xd9a034u; f_d0b26c(c);
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a044u; f_d0b2a8(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[5]); }
    c->r[14] = 0xd9a058u; f_d02968(c);
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a068u; f_d029a4(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x40u; ST8(ea, c->r[5]); }
    c->r[14] = 0xd9a07cu; f_d02968(c);
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a08cu; f_d029a4(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x41u; ST8(ea, c->r[5]); }
    c->r[14] = 0xd9a0a0u; f_d02968(c);
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a0b0u; f_d029a4(c);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xcaa974u;
    { uint32_t ea = c->r[4] + 0x42u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0xd9a0c4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xd9a0c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[7]; c->r[14] = 0xd9a0e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xd9a0ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[7]; c->r[14] = 0xd9a104u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_d9a114(Cpu *restrict c) {
    FN_ENTER(0xd9a114u);
L_d9a114:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_d9a134; }
    c->r[14] = 0xd9a134u; f_d0b360(c);
L_d9a134:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a154; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a14cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_d9a154:;
    { uint32_t ea = c->r[4] + 0x21u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_d9a16c; }
    c->r[14] = 0xd9a16cu; f_d0b360(c);
L_d9a16c:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a18c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a184u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
L_d9a18c:;
    { uint32_t ea = c->r[4] + 0x22u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_d9a1a4; }
    c->r[14] = 0xd9a1a4u; f_d0b360(c);
L_d9a1a4:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a1c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a1bcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_d9a1c4:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_d9a1dc; }
    c->r[14] = 0xd9a1dcu; f_d02a60(c);
L_d9a1dc:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a1fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a1f4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_d9a1fc:;
    { uint32_t ea = c->r[4] + 0x41u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_d9a214; }
    c->r[14] = 0xd9a214u; f_d02a60(c);
L_d9a214:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a234; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a22cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_d9a234:;
    { uint32_t ea = c->r[4] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_d9a24c; }
    c->r[14] = 0xd9a24cu; f_d02a60(c);
L_d9a24c:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a26c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a264u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_d9a26c:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a294; }
    c->r[0] = 0xcaa7b4u;
    { uint32_t ea = 0xd9a284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd9a284u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xd9a294u; rt_dispatch(c);
L_d9a294:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a2bc; }
    c->r[0] = 0xcaa78cu;
    { uint32_t ea = 0xd9a2acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd9a2acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xd9a2bcu; rt_dispatch(c);
L_d9a2bc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_d9a2cc(Cpu *restrict c) {
    FN_ENTER(0xd9a2ccu);
L_d9a2cc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x78u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[6] = 0x0u;
    c->r[0] = 0x2u;
    c->r[2] = 0xdd98u;
    c->r[7] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2aaau;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3d930000u;
    c->r[3] = c->r[4] + 0xd8u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[0] = c->r[1]; }
    c->r[1] = 0x1759u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb3d0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f370000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x3e590000u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xcaa6a4u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4] + 0x100u;
    { uint32_t ea = 0xd9a3b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[4] + 0x210u;
    c->r[1] = 0x28u;
    { uint32_t ea = c->r[4] + 0x20cu; ST8(ea, c->r[6]); }
    c->r[14] = 0xd9a3e8u; f_15efdc4(c);
    c->r[0] = 0xcaa64cu;
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x23cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xd9a40cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xcaa628u;
    { uint32_t ea = 0xd9a434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xcaa604u;
    { uint32_t ea = 0xd9a45cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xcaa5e0u;
    { uint32_t ea = 0xd9a484u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43480000u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43960000u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] << 2);
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    c->r[0] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xcaa538u;
    { uint32_t ea = 0xd9a500u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xd9a504u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[5]; c->r[14] = 0xd9a51cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[6]); }
    c->r[0] = (c->r[0] << 5);
    c->r[1] = (c->r[1] << 1);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    c->r[14] = 0xd9a554u; f_d0b26c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a564u; f_d0b2a8(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x78u;
    c->r[1] = 0x10u;
    c->r[14] = 0xd9a574u; f_d02968(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xd9a584u; f_d029a4(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41c80000u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1d4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1e0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1ecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x208u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_d9a728(Cpu *restrict c) {
    FN_ENTER(0xd9a728u);
L_d9a728:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xcaa318u;
    { uint32_t ea = 0xd9a73cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a758; }
    c->r[14] = 0xd9a750u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[0]); }
L_d9a758:;
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_d9a818; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a784; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a77cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_d9a784:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_d9a7a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xd9a79cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_d9a7a4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d9a7d0; }
    c->r[0] = 0xc9ec90u;
    { uint32_t ea = 0xd9a7bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xd9a7c8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
L_d9a7d0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_d9a7fc; }
    c->r[0] = 0xc9ec64u;
    { uint32_t ea = 0xd9a7e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xd9a7f4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
L_d9a7fc:;
    c->r[0] = 0xcaa230u;
    { uint32_t ea = 0xd9a808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd9a808u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xd9a818u; rt_dispatch(c);
L_d9a818:;
    c->r[0] = 0xcaa22cu;
    { uint32_t ea = 0xd9a824u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_d9a864(Cpu *restrict c) {
    FN_ENTER(0xd9a864u);
L_d9a864:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xd9a870u; f_d9a728(c);
    c->r[0] = 0xcaa1bcu;
    { uint32_t ea = 0xd9a87cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xd9a87cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
