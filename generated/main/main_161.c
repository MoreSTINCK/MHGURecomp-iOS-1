#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_742f7c(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a857c4(Cpu *c);
void f_a85804(Cpu *c);
void f_a85824(Cpu *c);
void f_a93ca8(Cpu *c);
void f_b0dcdc(Cpu *c);
void f_b0f8d8(Cpu *c);
void f_b12ebc(Cpu *c);
void f_dd0dac(Cpu *c);
void f_dd2adc(Cpu *c);
void f_dd3c2c(Cpu *c);
void f_dd4aa0(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15f0190(Cpu *c);
void f_b10ca0(Cpu *restrict c) {
    FN_ENTER(0xb10ca0u);
L_b10ca0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0xa20u;
    c->r[13] = c->r[13] - 0x2000u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[0];
    c->v.s[20] = 0x3f000000u;
    c->r[14] = c->r[13] + 0x2800u;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[14] + 0x21cu;
    c->v.s[2] = LD32(c->r[0] + 180u);
    c->v.s[6] = LD32(c->r[0] + 164u);
    c->v.s[0] = LD32(c->r[0] + 176u);
    c->v.s[10] = LD32(c->r[0] + 160u);
    c->v.s[4] = LD32(c->r[0] + 184u);
    c->v.s[8] = LD32(c->r[0] + 168u);
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    c->v.f[10] = c->v.f[10] + c->v.f[0];
    c->v.f[16] = c->v.f[6] * c->v.f[20];
    c->v.f[6] = c->v.f[8] + c->v.f[4];
    c->v.f[22] = c->v.f[10] * c->v.f[20];
    c->v.f[18] = c->v.f[6] * c->v.f[20];
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->v.f[6] = c->v.f[0] - c->v.f[22];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[4] - c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b10d34; }
    c->r[14] = 0xb10d30u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b10d34:;
    ST32(c->r[5], c->v.s[2]);
    c->r[0] = 0xf2800cu;
    c->r[4] = c->r[13] + 0x2000u;
    c->v.s[0] = LD32(c->r[10] + 224u);
    c->v.s[2] = LD32(c->r[10] + 228u);
    c->v.s[4] = LD32(c->r[10] + 232u);
    c->r[1] = c->r[4] + 0xa10u;
    { uint32_t ea = 0xb10d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[22] + c->v.f[0];
    c->v.f[2] = c->v.f[16] + c->v.f[2];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[5] - 12u, c->v.s[0]);
    c->v.f[0] = c->v.f[18] + c->v.f[4];
    ST32(c->r[5] - 8u, c->v.s[2]);
    ST32(c->r[5] - 4u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0x3cu; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = 0x3u; }
    c->r[14] = 0xb10d8cu; f_dd0dac(c);
    c->r[0] = c->r[6] + 0x164u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x120000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11330; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0xb10db0u; f_b0f8d8(c);
    c->r[4] = c->r[6];
L_b10db4:;
    c->r[8] = 0x0u;
L_b10db8:;
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x0u;
    c->r[14] = 0xb10dc8u; f_a7ff38(c);
    c->r[5] = c->r[10] + 0xd0u;
L_b10dcc:;
    c->r[0] = 0xf27f74u;
    c->r[7] = 0x7b1cu;
    c->r[6] = 0x5b1eu;
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc5350000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc28e0000u;
    { uint32_t ea = 0xb10df0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb10df4u; f_dd3c2c(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[3] = c->r[1] & 0xff00u;
    if (COND_NE) { goto L_b11090; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_NE) { goto L_b10e38; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_b10e6c; }
L_b10e38:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] & 0xffff00ffu;
    { uint32_t ea = c->r[3] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1dcu; ST32(ea, c->r[6]); }
    c->r[1] = 0xb1cu;
    { uint32_t ea = c->r[3] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[3] + 0x154u; ST32(ea, c->r[0]); }
L_b10e6c:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x5134u;
    c->r[3] = 0x4f40u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xaedcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b10f2c; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b10efc; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x9e6u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b10efc:;
    c->r[2] = 0x4f40u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x19e8u;
    c->r[1] = 0x5138u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x70840000u;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[2]); }
L_b10f2c:;
    c->r[3] = 0x4f10u;
    c->r[2] = 0x5114u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b10fd8; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b10fac; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x9e2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b10fac:;
    c->r[2] = 0x4f10u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5118u;
    c->r[2] = 0x9e2u;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[2]); }
L_b10fd8:;
    c->r[3] = 0xf27d74u;
    c->r[2] = 0x2d4cu;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = 0xb10ff0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x31au; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_b1137c; }
    c->r[3] = 0x4680u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b114c0; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11074; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x569u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11074:;
    c->r[2] = 0x4680u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xa8d0u;
    c->r[1] = 0x2d50u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6ee80000u;
    goto L_b114a8;
L_b11090:;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b110ac; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { goto L_b110e8; }
L_b110ac:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x1u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1dcu; ST32(ea, c->r[6]); }
    c->r[1] = 0xb1cu;
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[5] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5] + 0x154u; ST32(ea, c->r[0]); }
L_b110e8:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x5134u;
    c->r[3] = 0x4f30u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xaedcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b111a4; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11178; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x9e6u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11178:;
    c->r[2] = 0x4f30u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x5138u;
    c->r[2] = 0x9e6u;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[2]); }
L_b111a4:;
    c->r[3] = 0x4f40u;
    c->r[2] = 0x5114u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b11254; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11224; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x9e2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11224:;
    c->r[2] = 0x4f40u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x49e8u;
    c->r[1] = 0x5118u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x39d20000u;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[2]); }
L_b11254:;
    c->r[1] = 0xf27b04u;
    { uint32_t ea = 0xb11260u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x31au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b11410; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x31cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x2d4cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    c->r[3] = c->r[2];
    c->r[3] = c->r[3] & 0xfffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_b114c0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11300; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = 0x569u;
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
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11300:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = c->r[2] ^ 0x990000u;
    c->r[2] = 0x2d50u;
    c->r[1] = c->r[1] ^ 0x23000000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    goto L_b114c0;
L_b11330:;
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0xb11340u; f_b0f8d8(c);
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x104u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11b28; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_b10db8; }
    c->r[5] = c->r[1];
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x0u;
    c->r[14] = 0xb11374u; f_a7ff38(c);
    c->r[8] = 0x1u;
    goto L_b10dcc;
L_b1137c:;
    c->r[3] = 0x2b50u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b114c0; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b113f4; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x569u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b113f4:;
    c->r[2] = 0x2b50u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xc56au;
    c->r[1] = 0x2d50u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x52230000u;
    goto L_b114a8;
L_b11410:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x2b48u;
    c->r[2] = 0x2d4cu;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b114c0; }
    { uint32_t ea = c->r[6] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11494; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6] + 0xecu;
    c->r[7] = 0x569u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11494:;
    c->r[2] = 0x2b48u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2d50u;
    c->r[2] = 0x569u;
L_b114a8:;
    { uint32_t ea = c->r[6] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[6] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x158u; ST32(ea, c->r[2]); }
L_b114c0:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_b114dc; }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_EQ) { goto L_b114f0; }
    goto L_b115ac;
L_b114dc:;
    { uint32_t ea = c->r[10] + 0x3au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[8] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b115ac; }
L_b114f0:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[3] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0xe000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc4960000u;
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_NE) { goto L_b116f0; }
    c->r[7] = 0x5124u;
    c->r[2] = c->r[8];
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    if (COND_NE) { goto L_b11910; }
    c->r[3] = 0x4f20u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_b119b4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11594; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x9e4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11594:;
    c->r[3] = 0x4f20u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x5128u;
    c->r[3] = 0x9e4u;
    goto L_b1199c;
L_b115ac:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = 0x4f00u;
    c->r[2] = 0x5104u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b1165c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11630; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x9e0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11630:;
    c->r[2] = 0x4f00u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5108u;
    c->r[1] = 0x9e0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_b1165c:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b11b9c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b116d0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x37bu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
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
L_b116d0:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1de0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_b11b74; }
    goto L_b11b4c;
L_b116f0:;
    c->r[7] = 0x4f20u;
    c->r[3] = 0x5124u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_b1179c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11770; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x9e4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11770:;
    c->r[3] = 0x4f20u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x5128u;
    c->r[3] = 0x9e4u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[3]); }
L_b1179c:;
    c->r[7] = 0x4f18u;
    c->r[3] = 0x5104u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_b1184c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b1181c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x9e0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b1181c:;
    c->r[3] = 0x4f18u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x79e3u;
    c->r[2] = 0x5108u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xa6bc0000u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[3]); }
L_b1184c:;
    c->r[3] = 0x1ddcu;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[3] = 0xe404u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x224u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_b12d54; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b118d8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[5] = 0x37bu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_b118d8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_b12cc4; }
    c->r[0] = 0xf2d6c8u;
    c->r[7] = 0xf2d6c8u;
    { uint32_t ea = 0xb118f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xb118f4u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_b12ccc;
L_b11910:;
    c->r[3] = 0x4f28u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_b119b4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11984; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x9e4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11984:;
    c->r[3] = 0x4f28u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0xb9e5u;
    c->r[2] = 0x5128u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x286b0000u;
L_b1199c:;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[3]); }
L_b119b4:;
    c->r[7] = 0x4f08u;
    c->r[3] = 0x5104u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_b11a64; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11a34; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x9e0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b11a34:;
    c->r[3] = 0x4f08u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0xa9e1u;
    c->r[0] = 0x5108u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x54580000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[2]); }
L_b11a64:;
    c->r[2] = 0x1ddcu;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xf2b140u;
    { uint32_t ea = 0xb11a7cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b11b9c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b11af0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[5] = 0x37bu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
L_b11af0:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b11b30; }
    c->r[3] = 0xf2d4b0u;
    c->r[7] = 0xf2d4b0u;
    { uint32_t ea = 0xb11b08u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xb11b0cu + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    goto L_b11b38;
L_b11b28:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_b10db4;
L_b11b30:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_b11b38:;
    c->r[2] = 0x1de0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b11b74; }
L_b11b4c:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b11b90;
L_b11b74:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b11b90:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b11b9c:;
    c->r[2] = c->r[13] + 0x210u;
    c->r[0] = c->r[10];
    c->r[1] = c->r[8];
    c->r[14] = 0xb11bacu; f_b0dcdc(c);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = 0xc0u;
    c->r[14] = 0xb11bbcu; f_15efdc4(c);
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b11ca0; }
    c->r[0] = c->r[8];
    c->r[14] = 0xb11bd0u; f_a857c4(c);
    c->v.s[16] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b11c00; }
    c->r[14] = 0xb11bfcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b11c00:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb11c10u; f_15f0190(c);
    c->v.s[2] = 0xbf99999au;
    c->v.s[4] = 0x3f99999au;
    c->v.s[6] = c->v.s[0] ^ 0x80000000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[6];
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[16] = t0; c->v.f[17] = t1; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xb11c34u; f_15efde8(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xb11c40u; f_15efdf4(c);
    c->v.s[2] = c->v.s[18] ^ 0x80000000u;
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 292u, c->v.s[0]);
    ST32(c->r[13] + 296u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 308u, c->v.s[2]);
    ST32(c->r[13] + 312u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xb11c94u; f_a85824(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[13] + 0x110u;
    c->r[14] = 0xb11ca0u; f_21ebe8(c);
L_b11ca0:;
    c->r[0] = 0x1da8u;
    c->v.s[18] = 0xba83126fu;
    c->v.s[22] = 0x3a83126fu;
    c->v.s[24] = 0x34000000u;
    c->v.s[16] = 0x3f800000u;
    c->r[4] = c->r[8] + 0x154u;
    c->r[12] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[10]); }
    c->r[2] = c->r[8] + c->r[0];
    c->r[0] = 0x1db8u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[4]); }
    c->r[9] = c->r[8] + c->r[0];
    c->r[0] = 0x1db4u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1da4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1a0cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1e28u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2d3cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1e24u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x20a8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20a4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x2d40u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf27014u;
    { uint32_t ea = 0xb11d50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ae54u;
    { uint32_t ea = 0xb11d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d244u;
    { uint32_t ea = 0xb11d74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d23cu;
    { uint32_t ea = 0xb11d80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ae30u;
    { uint32_t ea = 0xb11d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d220u;
    { uint32_t ea = 0xb11d98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d218u;
    { uint32_t ea = 0xb11da4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ae0cu;
    { uint32_t ea = 0xb11db0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1fcu;
    { uint32_t ea = 0xb11dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1f4u;
    { uint32_t ea = 0xb11dc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2ade8u;
    { uint32_t ea = 0xb11dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1d8u;
    { uint32_t ea = 0xb11de0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1d0u;
    { uint32_t ea = 0xb11decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1c0u;
    { uint32_t ea = 0xb11df8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1b8u;
    { uint32_t ea = 0xb11e04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1a8u;
    { uint32_t ea = 0xb11e10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d1a0u;
    { uint32_t ea = 0xb11e1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d190u;
    { uint32_t ea = 0xb11e28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d188u;
    { uint32_t ea = 0xb11e34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d178u;
    { uint32_t ea = 0xb11e40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf2d170u;
    { uint32_t ea = 0xb11e4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_b11e4c:;
    { uint32_t ea = c->r[10] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_b12ca4; }
    c->r[0] = c->r[13] + 0x210u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[7]); }
    c->r[5] = c->r[0];
L_b11e7c:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[0] + (c->r[1] << 3);
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b12c90; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[12]); }
    c->v.s[6] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[12]); }
    c->v.s[12] = LD32(c->r[10] + 224u);
    c->v.f[0] = c->v.f[12] + c->v.f[0];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    ST32(c->r[13] + 240u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[10] + 228u);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] + c->v.f[8];
    ST32(c->r[13] + 244u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[10] + 232u);
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 248u, c->v.s[4]);
    ST32(c->r[13] + 256u, c->v.s[6]);
    ST32(c->r[13] + 260u, c->v.s[0]);
    ST32(c->r[13] + 264u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b11f6c; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x301u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[0]); }
L_b11f6c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc04u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0xb11f80u; f_a6a438(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b11fd4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xb11fd0u; f_a82674(c);
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b11fd4:;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_b120b4; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xb12018u; f_15efe30(c);
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.s[2] = LD32(c->r[13] + 244u);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    c->v.s[10] = LD32(c->r[13] + 264u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    ST32(c->r[13] + 224u, c->v.s[0]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    ST32(c->r[6], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[1]); }
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[2]); }
    c->v.s[2] = c->r[2];
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0xfffffffdu;
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[3]); }
    goto L_b120c0;
L_b120b4:;
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[4] = LD32(c->r[13] + 244u);
    c->v.s[2] = LD32(c->r[13] + 248u);
L_b120c0:;
    c->v.f[0] = c->v.f[0] + c->v.f[18];
    c->v.f[4] = c->v.f[4] + c->v.f[18];
    c->v.f[2] = c->v.f[2] + c->v.f[18];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    ST32(c->r[13] + 240u, c->v.s[0]);
    ST32(c->r[13] + 244u, c->v.s[4]);
    ST32(c->r[13] + 248u, c->v.s[2]);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.f[6] = c->v.f[6] + c->v.f[22];
    ST32(c->r[13] + 256u, c->v.s[6]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.f[12] = c->v.f[0] * c->v.f[20];
    c->v.f[8] = c->v.f[8] + c->v.f[22];
    c->v.f[6] = c->v.f[6] - c->v.f[12];
    ST32(c->r[13] + 208u, c->v.s[12]);
    ST32(c->r[13] + 260u, c->v.s[8]);
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.s[10] = LD32(c->r[13] + 264u);
    c->v.f[4] = c->v.f[4] * c->v.f[20];
    c->v.f[10] = c->v.f[10] + c->v.f[22];
    c->v.f[0] = c->v.f[8] - c->v.f[4];
    ST32(c->r[13] + 212u, c->v.s[4]);
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    ST32(c->r[13] + 264u, c->v.s[10]);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[8] = c->v.f[2] * c->v.f[20];
    c->v.f[2] = c->v.f[10] - c->v.f[8];
    ST32(c->r[13] + 216u, c->v.s[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b12154; }
    c->r[14] = 0xb12150u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b12154:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 220u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[4] = v; c->r[5] = v2; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    c->r[14] = 0xb12180u; f_dd2adc(c);
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[16];
    c->v.s[2] = c->v.s[16];
    c->r[2] = ~0x0u;
    c->r[3] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0xb121b0u; f_dd4aa0(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xb121b8u; f_a85804(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[3] = 0x530u;
    { uint32_t ea = c->r[6] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_b12214; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_b12214; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_EQ) { goto L_b12250; }
L_b12214:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b12234; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b12234:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[1] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0x138u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x150u; ST32(ea, c->r[0]); }
L_b12250:;
    c->r[0] = c->r[8] + 0x20u;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    goto L_b12360;
L_b12264:;
    c->r[1] = 0xb2fdu;
    c->r[2] = c->r[6] + 0x80u;
    c->r[0] = c->r[8];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6de10000u;
    c->r[14] = 0xb12280u; f_742f7c(c);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_b122e4; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_b12314; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = 0xfff6u;
    c->r[4] = 0x6u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b12bc4; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[0]); }
    goto L_b12bc4;
L_b122e4:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0xaaa0u;
    c->r[9] = 0xfff0u;
    c->r[4] = 0xcu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b12bcc; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_b12340;
L_b12314:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0x71c0u;
    c->r[9] = 0xfff0u;
    c->r[4] = 0x12u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b12bcc; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
L_b12340:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[0]); }
    goto L_b12bcc;
L_b12360:;
    { uint32_t r = c->r[2] * c->r[3] + c->r[7]; c->r[6] = r; }
    c->v.s[0] = LD32(c->r[6] + 116u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_b12c80; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + 0x560u;
    c->v.s[4] = LD32(c->r[5] + 4u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x55cu;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[6] = LD32(c->r[0]);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[2]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[2];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b12c80; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x540u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b12484; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b12560; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b12448; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x3d4u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[2]); }
L_b12448:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b12514; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x3000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x29f20000u;
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    goto L_b12520;
L_b12484:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b12560; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b124f4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x3d4u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_b124f4:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b12530; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    goto L_b12540;
L_b12514:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_b12520:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b1253c; }
L_b12530:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b12554;
L_b1253c:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_b12540:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_b12554:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_b12560:;
    { uint32_t ea = c->r[6] + 0x544u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b1262c; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_b1262c; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b127dc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b125f0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x384u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[2]); }
L_b125f0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b12788; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xe000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x7a8e0000u;
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    goto L_b12794;
L_b1262c:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b126e4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b1269c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x384u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_b1269c:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b126d0; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    goto L_b126d8;
L_b126d0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b126d8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_b126e4:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4ed8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b12888; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b12764; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x567u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b12764:;
    c->r[2] = 0x4ed8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0xc9dbu;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe4e20000u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    goto L_b1287c;
L_b12788:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_b12794:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_b127b8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b127d0;
L_b127b8:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_b127d0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_b127dc:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x4ee0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b12888; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b1285c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x567u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b1285c:;
    c->r[0] = 0x4ee0u;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x29dcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x19880000u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_b1287c:;
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_b12888:;
    { uint32_t ea = c->r[6] + 0x548u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b12950; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_b12a30; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b12914; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x374u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[5] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[5] + (c->r[3] << 2);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
L_b12914:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b129e0; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x22660000u;
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | c->r[0];
    goto L_b129ec;
L_b12950:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b12a30; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b129c0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x374u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[2]); }
L_b129c0:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b129fc; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[12]); }
    goto L_b12a10;
L_b129e0:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
L_b129ec:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_b12a0c; }
L_b129fc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_b12a24;
L_b12a0c:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
L_b12a10:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
L_b12a24:;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
L_b12a30:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b12af4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b12aa8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x376u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[7] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[2]); }
L_b12aa8:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b12ae0; }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
    goto L_b12ae8;
L_b12ae0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
L_b12ae8:;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[2]); }
L_b12af4:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[1] + c->r[14];
    c->r[1] = 0x9d60u;
    c->r[5] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + (c->r[4] << 5);
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x12fcu;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x21600000u;
    c->r[14] = 0xb12b30u; f_742f7c(c);
    { uint32_t ea = c->r[10] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b12264; }
    c->r[0] = c->r[13] + 0x150u;
    c->r[4] = c->r[0] + (c->r[4] << 6);
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_b12b68; }
    c->r[2] = c->r[6] + 0x70u;
    c->r[1] = c->r[8];
    c->r[3] = c->r[13] + 0x110u;
    c->r[14] = 0xb12b60u; f_b12ebc(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
L_b12b68:;
    c->r[1] = 0xb2fdu;
    c->r[0] = c->r[8];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6de10000u;
    c->r[14] = 0xb12b80u; f_742f7c(c);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    c->r[9] = 0xfff6u;
    c->r[4] = 0x6u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_b12bc4; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x150u; ST32(ea, c->r[3]); }
L_b12bc4:;
    c->r[10] = 0x5548u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x10000u;
L_b12bcc:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[0] << 3);
    c->r[0] = c->r[8];
    c->r[14] = 0xb12bdcu; f_a826fc(c);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[4] * c->r[0]; c->r[0] = r; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[9], c->r[0]);
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    if (COND_LS) { goto L_b12bfc; }
    c->r[5] = c->r[8];
    goto L_b12c34;
L_b12bfc:;
    c->r[7] = udiv32(c->r[0], c->r[9]);
    c->r[5] = c->r[8];
    c->r[8] = 0x0u;
    c->r[4] = 0x0u;
L_b12c0c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    c->r[3] = c->r[6];
    c->r[14] = 0xb12c20u; f_a93ca8(c);
    c->r[8] = c->r[8] + 0x1u;
    c->r[4] = c->r[4] + c->r[9];
    c->r[6] = c->r[6] + c->r[10];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_CC) { goto L_b12c0c; }
L_b12c34:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[5];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_b12c58; }
    c->r[1] = c->r[0] - c->r[4];
    c->r[0] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = c->r[6];
    c->r[14] = 0xb12c58u; f_a93ca8(c);
L_b12c58:;
    c->r[0] = c->r[8];
    c->r[14] = 0xb12c60u; f_a82760(c);
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = 0x0u;
    c->r[3] = 0x530u;
L_b12c80:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x8u);
    if (COND_NE) { goto L_b12360; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b12c90:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[5] = c->r[5] + 0x14u;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_NE) { goto L_b11e7c; }
L_b12ca4:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_b11e4c; }
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_b12cc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_b12ccc:;
    c->r[2] = 0x1de0u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b12d28; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b12d44;
L_b12d28:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b12d44:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b12d54:;
    { uint32_t ea = c->r[10] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x5134u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_b12e14; }
    c->r[3] = 0x4f30u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b11b9c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b12de0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x9e6u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b12de0:;
    c->r[2] = 0x4f30u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5138u;
    c->r[1] = 0x9e6u;
    goto L_b12ea0;
L_b12e14:;
    c->r[3] = 0x4f38u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b11b9c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b12e88; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x9e6u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b12e88:;
    c->r[2] = 0x4f38u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x29e7u;
    c->r[0] = 0x5138u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd7bb0000u;
L_b12ea0:;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
    goto L_b11b9c;
}
