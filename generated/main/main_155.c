#include "cpu.h"
#include "neon_rt.h"
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a814c0(Cpu *c);
void f_a82674(Cpu *c);
void f_a83f20(Cpu *c);
void f_a85690(Cpu *c);
void f_a857a8(Cpu *c);
void f_a857b4(Cpu *c);
void f_a857c4(Cpu *c);
void f_a85824(Cpu *c);
void f_aafc90(Cpu *c);
void f_aaffe0(Cpu *c);
void f_ae5120(Cpu *c);
void f_ae5ce4(Cpu *c);
void f_ae68e0(Cpu *c);
void f_15efddc(Cpu *c);
void f_ae3148(Cpu *restrict c) {
    FN_ENTER(0xae3148u);
L_ae3148:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x88u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->v.s[16] = c->v.s[0];
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ae50d4; }
    c->r[2] = 0xf55c24u;
    { uint32_t ea = 0xae318cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0xbb99u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x430000u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_ae50d4; }
    { uint32_t ea = c->r[0] + 0x2a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_ae50d4; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[5] = 0x0u;
    c->r[14] = 0xae31ccu; f_a7a7ac(c);
    c->r[8] = c->r[4];
    c->r[1] = 0xfff8u;
    c->r[2] = 0x38u;
    c->r[7] = 0x6u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[0] & c->r[1];
    { uint32_t r = c->r[1] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae3224; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x38u;
    c->r[0] = c->r[0] & c->r[7];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[5] + 0x0u + c->cf;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae3224:;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae32d0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2c5u;
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
    c->r[1] = 0x182cu;
    c->r[2] = 0x1830u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae32d0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae32e4u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[5] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] & (c->r[7] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[5] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_ae3338; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae3334u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
L_ae3338:;
    c->r[0] = c->r[5] + c->r[7];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x182cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_ae3980; }
    { uint32_t ea = c->r[9] + 0x32u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ae33c4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae3374u; f_a857b4(c);
    c->v.s[0] = LD32(c->r[9] + 20u);
    c->v.s[2] = LD32(c->r[9] + 24u);
    c->v.s[4] = LD32(c->r[9] + 16u);
    c->v.s[6] = LD32(c->r[9] + 72u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->r[0] = 0x0u;
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[2]);
    ST32(c->r[13] + 64u, c->v.s[8]);
    ST32(c->r[13] + 68u, c->v.s[10]);
    ST32(c->r[13] + 72u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->r[7] = c->r[0] | 0x8u;
    c->r[6] = c->r[0];
    c->r[10] = c->r[0] | 0x4u;
    goto L_ae36c0;
L_ae33c4:;
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae33ecu; f_a857b4(c);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[26] = c->r[6];
    c->v.s[24] = c->r[10];
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[28] = c->r[7];
    c->v.f[2] = c->v.f[26] - c->v.f[2];
    c->v.f[0] = c->v.f[24] - c->v.f[0];
    c->v.f[4] = c->v.f[28] - c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ae3434; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xae3434u; f_15efddc(c);
L_ae3434:;
    c->v.s[2] = LD32(c->r[9] + 108u);
    c->v.s[22] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_ae347c; }
    c->v.s[4] = LD32(c->r[9] + 104u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae3478; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_ae347c; }
    c->v.f[4] = c->v.f[2] - c->v.f[4];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] / c->v.f[4];
    c->v.f[22] = c->v.f[0] * c->v.f[16];
    goto L_ae347c;
L_ae3478:;
    c->v.s[22] = c->v.s[16];
L_ae347c:;
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae3548; }
    c->v.s[16] = LD32(c->r[9] + 128u);
    c->v.s[18] = LD32(c->r[9] + 132u);
    c->v.s[20] = LD32(c->r[9] + 136u);
    c->r[0] = c->r[4];
    c->r[14] = 0xae349cu; f_a85824(c);
    c->v.s[0] = LD32(c->r[0] + 48u);
    c->v.s[2] = LD32(c->r[0] + 52u);
    c->v.s[4] = LD32(c->r[0] + 56u);
    c->v.f[26] = c->v.f[2] - c->v.f[26];
    c->v.f[24] = c->v.f[0] - c->v.f[24];
    c->v.f[28] = c->v.f[4] - c->v.f[28];
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ae34d8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xae34d8u; f_15efddc(c);
L_ae34d8:;
    c->v.s[2] = 0x34000000u;
    c->r[1] = c->r[7] & 0x4000000u;
    c->r[0] = c->r[7] & 0x2000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ae3504; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_ae3504:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = c->v.s[20];
    c->v.s[1] = c->v.s[16];
    c->v.s[2] = c->v.s[18];
    c->r[2] = 0x0u;
    ST32(c->r[13] + 112u, c->v.s[24]);
    ST32(c->r[13] + 116u, c->v.s[26]);
    ST32(c->r[13] + 120u, c->v.s[28]);
    c->r[3] = c->r[9] + 0x70u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x70u;
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[14] = 0xae3540u; f_aaffe0(c);
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
L_ae3548:;
    c->r[0] = c->r[13] + 0x40u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] | 0x8u;
    c->r[10] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_ae3570; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[16] = c->v.s[22];
    c->r[6] = c->r[13] + 0x40u;
    goto L_ae36c0;
L_ae3570:;
    c->v.s[18] = LD32(c->r[9] + 152u);
    c->v.s[16] = LD32(c->r[9] + 156u);
    c->r[7] = c->r[13] + 0x40u;
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0xae358cu; f_a85690(c);
    c->v.s[0] = LD32(c->r[13] + 124u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_ae35a8; }
    c->v.s[16] = 0x0u;
    c->r[6] = c->r[7];
    goto L_ae36b8;
L_ae35a8:;
    c->r[3] = c->r[4] + 0xc4u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->v.s[2] = LD32(c->r[13] + 112u);
    c->r[0] = c->r[2] - c->r[0];
    c->r[1] = c->r[3] - c->r[1];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->v.s[0] = c->r[1];
    c->v.s[4] = c->r[0];
    vfp_mrs_flags(c);
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    if (COND_PL) { goto L_ae35e0; }
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    goto L_ae35f8;
L_ae35e0:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae35f4; }
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    goto L_ae35f8;
L_ae35f4:;
    c->v.s[2] = 0x0u;
L_ae35f8:;
    c->v.s[4] = LD32(c->r[13] + 116u);
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ae3610; }
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    goto L_ae3628;
L_ae3610:;
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae3624; }
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    goto L_ae3628;
L_ae3624:;
    c->v.s[4] = 0x0u;
L_ae3628:;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    c->v.s[0] = 0x3f800000u;
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_ae3648; }
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    c->v.s[6] = c->v.s[0];
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae36ac; }
L_ae3648:;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae3670; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ae3678; }
    c->v.f[2] = c->v.f[2] / c->v.f[18];
    c->v.s[6] = 0x3f800000u;
    c->v.f[6] = c->v.f[6] - c->v.f[2];
    goto L_ae367c;
L_ae3670:;
    c->v.s[6] = 0x3f800000u;
    goto L_ae367c;
L_ae3678:;
    c->v.s[6] = 0x0u;
L_ae367c:;
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae36ac; }
    vfp_cmp_f(c, c->v.f[4], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ae36a8; }
    c->v.f[4] = c->v.f[4] / c->v.f[18];
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    goto L_ae36ac;
L_ae36a8:;
    c->v.s[6] = 0x0u;
L_ae36ac:;
    c->v.f[0] = c->v.f[0] - c->v.f[16];
    c->r[6] = c->r[7];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[6]);
L_ae36b8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[16] = c->v.f[22] * c->v.f[16];
L_ae36c0:;
    c->r[0] = c->r[4];
    c->r[14] = 0xae36c8u; f_a857a8(c);
    c->v.s[0] = LD32(c->r[10]);
    c->v.s[10] = LD32(c->r[0] + 20u);
    c->v.s[1] = LD32(c->r[0] + 16u);
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 24u);
    c->v.s[14] = LD32(c->r[0] + 28u);
    c->v.s[3] = LD32(c->r[13] + 64u);
    c->v.s[8] = LD32(c->r[0] + 12u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[5] = LD32(c->r[7]);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[17] = 0x34000000u;
    c->v.s[24] = 0x3f800000u;
    c->v.f[1] = c->v.f[1] * c->v.f[0];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[3]);
    c->v.f[2] = c->v.f[0] * c->v.f[14];
    c->v.f[10] = c->v.f[0] * c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[12];
    c->v.s[12] = LD32(c->r[0] + 44u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.s[14] = LD32(c->r[0] + 36u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[7] * c->v.f[5]);
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.s[4] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[6] = LD32(c->r[0] + 56u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[0] + 60u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[5] * c->v.f[7]);
    c->r[0] = c->r[4];
    c->v.f[20] = c->v.f[4] + c->v.f[1];
    c->v.f[2] = c->v.f[14] + c->v.f[2];
    c->v.f[22] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[6] + c->v.f[0];
    ST32(c->r[13] + 112u, c->v.s[20]);
    vfp_cmp_f(c, c->v.f[17], c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[22]);
    ST32(c->r[13] + 120u, c->v.s[26]);
    vfp_mrs_flags(c);
    c->v.s[28] = COND_GT ? c->v.s[24] : c->v.s[2];
    ST32(c->r[13] + 124u, c->v.s[28]);
    c->r[14] = 0xae3780u; f_a857b4(c);
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfu;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_ae3850; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[13] + 64u);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[10]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[7]);
    c->v.f[21] = c->v.f[8] - c->v.f[2];
    c->v.f[19] = c->v.f[10] - c->v.f[0];
    c->v.f[30] = c->v.f[6] - c->v.f[4];
    c->v.f[18] = c->v.f[21] * c->v.f[21];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ae37dc; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xae37dcu; f_15efddc(c);
L_ae37dc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ae37f8; }
    c->v.s[16] = 0x0u;
    goto L_ae3850;
L_ae37f8:;
    c->v.f[0] = sqrtf(c->v.f[18]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ae3810; }
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xae3810u; f_15efddc(c);
L_ae3810:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[17]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_ae382c; }
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
L_ae382c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xae3834u; f_a857c4(c);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[2] = c->v.f[21] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] * c->v.f[2];
L_ae3850:;
    c->v.f[0] = c->v.f[24] / c->v.f[28];
    c->v.s[4] = 0x3f000000u;
    c->v.f[2] = c->v.f[0] * c->v.f[26];
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[8] = c->v.f[0] * c->v.f[28];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    ST32(c->r[13] + 120u, c->v.s[2]);
    c->v.s[2] = c->v.s[4];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 124u, c->v.s[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[2]);
    ST32(c->r[13] + 116u, c->v.s[4]);
    c->v.s[8] = LD32(c->r[9] + 12u);
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[4] = LD32(c->r[9] + 4u);
    c->v.s[6] = LD32(c->r[9] + 8u);
    c->v.f[8] = c->v.f[16] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[8];
    ST32(c->r[13] + 52u, c->v.s[4]);
    ST32(c->r[13] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[9] + 140u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[13] + 60u, c->v.s[0]);
    c->v.s[0] = 0x41000000u;
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[5], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0xff0u;
    c->r[1] = c->r[1] & (c->r[0] >> 4);
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xfu;
    (void)f_subs(c, c->r[0], 0x2u);
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[2]); }
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    ST32(c->r[5] + 40u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_ae3980:;
    { uint32_t ea = c->r[9] + 0x33u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[10] = c->r[4] + 0x164u;
    { uint32_t r = c->r[0] & 0x30u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ae3e10; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xae39a4u; f_a7a7ac(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[2] = 0x0u;
    c->r[14] = 0xae39b4u; f_a7ff38(c);
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x2u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae3a38; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x29bu;
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
    c->r[1] = 0x16dcu;
    c->r[2] = 0x16e0u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae3a38:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae3a4cu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[7] = c->r[1] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ae3aa0; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae3a9cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae3aa0:;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16dcu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_ae3b0c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae3b0c:;
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae3b30u; f_a814c0(c);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1eu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | (c->r[0] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = c->r[0];
    c->v.s[6] = c->r[1];
    c->r[2] = c->r[2] - c->r[5];
    c->r[3] = c->r[3] - c->r[7];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    c->v.s[0] = c->r[3];
    c->v.s[4] = c->r[2];
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[20] = (float)(int32_t)c->v.s[0];
    c->v.f[16] = (float)(int32_t)c->v.s[2];
    c->v.f[22] = (float)(int32_t)c->v.s[4];
    c->v.f[18] = (float)(int32_t)c->v.s[6];
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae3bec; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x170u;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xd88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae3bec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae3c00u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[7] = c->r[1] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ae3c54; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae3c50u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae3c54:;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_EQ) { goto L_ae3d40; }
    c->v.f[2] = c->v.f[20] / c->v.f[16];
    c->v.f[4] = c->v.f[22] / c->v.f[18];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x3f000000u;
    c->v.s[8] = 0x3f800000u;
    c->r[7] = c->r[13] + 0x60u;
    c->v.s[6] = c->r[1];
    c->r[1] = 0x0u;
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = c->r[5];
    c->v.f[4] = (float)(int32_t)c->v.s[4];
    c->v.f[6] = (float)(int32_t)c->v.s[6];
    c->v.f[6] = c->v.f[6] / c->v.f[16];
    c->v.f[4] = c->v.f[4] / c->v.f[18];
    c->v.f[6] = c->v.f[6] / c->v.f[2];
    c->v.f[4] = c->v.f[4] / c->v.f[0];
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    c->v.f[6] = c->v.f[6] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.s[6] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 32u, c->v.s[4]);
    ST32(c->r[13] + 36u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    ST32(c->r[0], c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 8u, c->v.s[0]);
    ST32(c->r[0] + 12u, c->v.s[2]);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[2] = c->r[7] - c->r[2];
    c->r[1] = c->r[3] - c->r[1];
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    ST32(c->r[0] + 32u, c->v.s[0]);
    ST32(c->r[0] + 36u, c->v.s[2]);
    c->v.f[0] = c->v.f[8] / c->v.f[18];
    c->v.f[2] = c->v.f[8] / c->v.f[16];
    ST32(c->r[0] + 16u, c->v.s[18]);
    ST32(c->r[0] + 20u, c->v.s[16]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    ST32(c->r[0] + 28u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae3d40:;
    c->r[1] = 0x1f64u;
    c->r[0] = c->r[4];
    c->r[5] = 0xdaedu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_ae3ed8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae3dbc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x3acu;
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
L_ae3dbc:;
    c->r[1] = 0xf5b1e4u;
    c->r[2] = 0xf5b1e4u;
    c->r[3] = 0x6000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x75920000u;
    { uint32_t ea = 0xae3dd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae3dd8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[1] = 0x1f68u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae3eb4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae3ecc;
L_ae3e10:;
    c->r[12] = c->r[4];
    c->r[2] = 0x42acu;
    c->r[3] = 0x40b8u;
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[0] = v; }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae42f4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae3e98; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x817u;
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
L_ae3e98:;
    c->r[2] = 0x40b8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x42c0u;
    c->r[2] = 0x817u;
    goto L_ae42e4;
L_ae3eb4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae3ecc:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae3ed8:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae3f00; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae3f00:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xf555ecu;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    { uint32_t ea = 0xae3f28u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_ae3f48; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae3f5c; }
L_ae3f48:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae3f5c:;
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_ae3f80; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ae3fa8; }
L_ae3f80:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae3fa8:;
    c->r[6] = c->r[4];
    c->r[2] = 0x4074u;
    c->r[3] = 0x3e80u;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae4054; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4030; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x7d0u;
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
L_ae4030:;
    c->r[2] = 0x3e80u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4088u;
    c->r[2] = 0x7d0u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae4054:;
    c->r[3] = 0x40b0u;
    c->r[2] = 0x2724u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae40fc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae40d4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
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
L_ae40d4:;
    c->r[2] = 0x40b0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4816u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4fb60000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae40fc:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x70u;
    c->r[3] = c->r[13] + 0x30u;
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae4130u; f_aafc90(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xae413cu; f_a7b778(c);
    c->r[1] = 0x1d9cu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae423c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae41b4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x373u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_ae41b4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ae41f0; }
    c->r[2] = 0xf5adecu;
    c->r[3] = 0xf5adecu;
    { uint32_t ea = 0xae41ccu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae41d0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x21000u;
    c->r[1] = c->r[0] | 0x1e400000u;
    goto L_ae41f8;
L_ae41f0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_ae41f8:;
    c->r[2] = 0x1da0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae4218; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae4230;
L_ae4218:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4230:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae423c:;
    c->r[0] = 0x42bcu;
    c->r[1] = c->r[4];
    c->r[3] = 0x40c0u;
    c->r[12] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xbd54u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae42f4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae42cc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x817u;
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
L_ae42cc:;
    c->r[2] = 0x40c0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x2818u;
    c->r[1] = 0x42c0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa770000u;
L_ae42e4:;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae42f4:;
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x4744u;
    c->r[1] = c->r[4];
    c->r[3] = 0x8a9u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[2] = 0xc8a8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf5d20000u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = 0x58a9u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x45110000u; }
    c->r[3] = c->r[2] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_ae43c4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4398; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x8a8u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae4398:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0xc000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf5d20000u;
    c->r[1] = c->r[2] ^ c->r[1];
    c->r[2] = 0x4748u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
L_ae43c4:;
    c->r[1] = 0x4754u;
    c->r[2] = c->r[4];
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x20000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = 0x8abu;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[6] = v; }
    c->r[1] = 0x28aau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x941c0000u;
    if (COND_NE) { c->r[1] = 0xa8abu; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x70e80000u; }
    c->r[3] = c->r[1] & c->r[3];
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_ae4490; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4464; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x8aau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae4464:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x941c0000u;
    c->r[0] = c->r[1] ^ c->r[0];
    c->r[1] = 0x4758u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
L_ae4490:;
    c->r[6] = 0xffffu;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xf0000u;
    if (COND_NE) { goto L_ae44cc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[2] = 0x0u;
    c->r[14] = 0xae44b4u; f_a7ff38(c);
    { uint32_t ea = c->r[10]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x2u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_ae4538;
L_ae44cc:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0xd8cba8u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xae44e4u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae44ecu; f_a7ff38(c);
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_ae4508; }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | (c->r[1] << 20);
L_ae4508:;
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae4530u; f_a83f20(c);
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[6] = v; }
L_ae4538:;
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x40000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ae45e8; }
    c->r[0] = 0x4774u;
    c->r[1] = c->r[4];
    c->r[3] = 0x4570u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae47e0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae45d0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x8aeu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae45d0:;
    c->r[2] = 0x4570u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4778u;
    c->r[2] = 0x8aeu;
    goto L_ae47d0;
L_ae45e8:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ae4690; }
    c->r[0] = 0x4774u;
    c->r[1] = c->r[4];
    c->r[3] = 0x4578u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae47e0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4674; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x8aeu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae4674:;
    c->r[2] = 0x4578u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xe8afu;
    c->r[1] = 0x4778u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0310000u;
    goto L_ae47d0;
L_ae4690:;
    c->v.s[0] = 0x34000000u;
    c->v.s[2] = LD32(c->r[9] + 56u);
    c->r[0] = 0x4774u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_ae4744; }
    c->r[3] = 0x4588u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae47e0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4728; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x8aeu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae4728:;
    c->r[2] = 0x4588u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x38b1u;
    c->r[1] = 0x4778u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42530000u;
    goto L_ae47d0;
L_ae4744:;
    c->r[3] = 0x4580u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae47e0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae47b8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x8aeu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae47b8:;
    c->r[2] = 0x4580u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x38b0u;
    c->r[1] = 0x4778u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf5550000u;
L_ae47d0:;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae47e0:;
    { uint32_t ea = c->r[9] + 0x32u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = 0x4764u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t r = c->r[3] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ae4884; }
    c->r[3] = 0x4560u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae4920; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae486c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x8acu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae486c:;
    c->r[2] = 0x4560u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4768u;
    c->r[1] = 0x8acu;
    goto L_ae4910;
L_ae4884:;
    c->r[3] = 0x4568u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae4920; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae48f8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x8acu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae48f8:;
    c->r[2] = 0x4568u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x8adu;
    c->r[0] = 0x4768u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x26eb0000u;
L_ae4910:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae4920:;
    c->r[0] = 0x1be4u;
    c->r[5] = c->r[4];
    c->r[7] = 0x4000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_ae4a24; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae499c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33cu;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae499c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ae49d4; }
    c->r[0] = 0xf5a604u;
    c->r[1] = 0xf5a604u;
    { uint32_t ea = 0xae49b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xae49b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[7];
    goto L_ae49dc;
L_ae49d4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_ae49dc:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae4a00; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae4a18;
L_ae4a00:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4a18:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4a24:;
    c->r[0] = 0x1bf4u;
    c->r[7] = c->r[4];
    c->r[6] = 0x6000u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x377b0000u;
    (void)f_subs(c, c->r[0], c->r[14]);
    if (COND_EQ) { goto L_ae4b10; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4aa0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33eu;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae4aa0:;
    c->r[0] = 0xf5a508u;
    c->r[1] = 0xf5a508u;
    { uint32_t ea = 0xae4ab0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xae4ab4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[14] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[14]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[14] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[6];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae4aec; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae4b04;
L_ae4aec:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4b04:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4b10:;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1178u;
    { uint32_t ea = c->r[0] + 0xbd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xbdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1174u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_ae4b58; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_ae4b68; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_ae4b74; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0xae4b54u; f_ae5120(c);
    goto L_ae4b74;
L_ae4b58:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0xae4b64u; f_ae68e0(c);
    goto L_ae4b74;
L_ae4b68:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0xae4b74u; f_ae5ce4(c);
L_ae4b74:;
    { uint32_t ea = c->r[9] + 0x32u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4bf0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0xae4b90u; f_a7b778(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xae4b9cu; f_a7a7ac(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xfff8u;
    c->r[2] = 0x38u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    c->r[1] = c->r[0] & c->r[1];
    { uint32_t r = c->r[1] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4bf0; }
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = ~0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0x38u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[6] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae4bf0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0xd8c484u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xae4c08u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae4c10u; f_a7ff38(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_ae4c34; }
    c->r[1] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf0000u;
    c->r[0] = c->r[0] & c->r[1];
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 20);
L_ae4c34:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_ae4d38; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4cb8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33eu;
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
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae4cb8:;
    c->r[0] = 0xf5a2e8u;
    c->r[1] = 0xf5a2e8u;
    c->r[3] = 0x6000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x377b0000u;
    { uint32_t ea = 0xae4cd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xae4cd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x1bf8u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae4d14; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae4d2c;
L_ae4d14:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4d2c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4d38:;
    { uint32_t ea = c->r[9] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae4e34; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4da8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
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
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae4da8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae4de8; }
    c->r[1] = 0xf5a1f8u;
    c->r[2] = 0xf5a1f8u;
    { uint32_t ea = 0xae4dc0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae4dc4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae4df0;
L_ae4de8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_ae4df0:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae4e10; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae4e28;
L_ae4e10:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4e28:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae4e34:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae4e5c; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae4e5c:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0xdaedu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[10]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_ae4ea8; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_ae4ed0; }
L_ae4ea8:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae4ed0:;
    c->r[1] = 0xf54630u;
    { uint32_t ea = c->r[9] + 0x32u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae4ee4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae4f00; }
    { uint32_t ea = c->r[4] + 0xe64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_ae4f1c; }
    goto L_ae4f10;
L_ae4f00:;
    c->r[3] = 0x183cu;
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_ae4f1c; }
L_ae4f10:;
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae4f30; }
L_ae4f1c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae4f30:;
    c->v.s[0] = LD32(c->r[9] + 68u);
    c->v.s[2] = 0x3f800001u;
    c->r[1] = 0x2724u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_ae4ff4; }
    c->v.s[2] = 0x3f7ffffeu;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_ae4ff4; }
    c->r[3] = 0x45d0u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae5090; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae4fd8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
L_ae4fd8:;
    c->r[2] = 0x45d0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x58bau;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc4c60000u;
    goto L_ae5080;
L_ae4ff4:;
    c->r[3] = 0x45d8u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae5090; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae5068; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x4a4u;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
L_ae5068:;
    c->r[2] = 0x45d8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf8bbu;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xed5b0000u;
L_ae5080:;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae5090:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae50b8u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x70u;
    c->r[3] = c->r[13] + 0x58u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae50c8u; f_aafc90(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xae50d4u; f_a7b778(c);
L_ae50d4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
