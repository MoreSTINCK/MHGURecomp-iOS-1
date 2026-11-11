#include "cpu.h"
#include "neon_rt.h"
void f_a09bc0(Cpu *c);
void f_15efddc(Cpu *c);
void f_9d290c(Cpu *restrict c) {
    FN_ENTER(0x9d290cu);
L_9d290c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x228u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[2];
    c->r[2] = 0x10668ccu;
    c->r[8] = c->r[3];
    c->r[6] = 0x0u;
    { uint32_t ea = 0x9d293cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x10668a4u;
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9d2960u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[2]); }
    c->r[2] = 0x10668d4u;
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x9d2984u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[6]); }
    c->v.s[10] = LD32(c->r[1]);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[3] = LD32(c->r[1] + 16u);
    c->v.s[8] = LD32(c->r[0] + 16u);
    c->r[2] = c->v.s[10];
    vfp_cmp_f(c, c->v.f[0], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9d29c8; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[9] = c->v.s[8];
    goto L_9d2a30;
L_9d29c8:;
    c->r[9] = c->v.s[8];
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2a30; }
    c->v.s[2] = LD32(c->r[1] + 24u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d2a30; }
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.s[4] = LD32(c->r[0] + 24u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d2a30; }
    c->v.s[2] = LD32(c->r[1] + 20u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d2a30; }
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[0] + 20u);
    c->r[6] = 0x0u;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[6] = 0x1u; }
L_9d2a30:;
    c->r[2] = c->r[0] + 0x10u;
    c->v.f[12] = c->v.f[0] + c->v.f[8];
    c->v.s[16] = 0x3f000000u;
    c->r[7] = c->r[1] + 0x14u;
    c->r[3] = c->r[0] + 0x18u;
    c->r[12] = c->r[1] + 0x10u;
    c->r[5] = c->r[1] + 0x18u;
    c->r[10] = c->r[0] + 0x8u;
    c->r[14] = c->r[0] + 0x14u;
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->v.s[18] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[0] + 24u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 20u);
    c->v.s[1] = LD32(c->r[1] + 20u);
    c->v.s[14] = LD32(c->r[1] + 24u);
    c->v.s[20] = LD32(c->r[1] + 8u);
    c->v.f[9] = c->v.f[12] * c->v.f[16];
    c->v.s[12] = LD32(c->r[1] + 4u);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    c->v.f[5] = c->v.f[4] + c->v.f[6];
    c->v.f[11] = c->v.f[18] + c->v.f[2];
    c->v.f[13] = c->v.f[3] - c->v.f[9];
    c->v.f[15] = c->v.f[0] - c->v.f[9];
    c->v.f[7] = c->v.f[5] * c->v.f[16];
    c->v.f[5] = c->v.f[11] * c->v.f[16];
    c->v.f[11] = c->v.f[15] - c->v.f[13];
    c->v.f[13] = c->v.f[1] - c->v.f[7];
    c->v.f[15] = c->v.f[4] - c->v.f[7];
    c->v.f[22] = c->v.f[14] - c->v.f[5];
    c->v.f[24] = c->v.f[18] - c->v.f[5];
    c->v.f[26] = c->v.f[20] - c->v.f[5];
    c->v.f[28] = c->v.f[2] - c->v.f[5];
    c->v.f[30] = c->v.f[12] - c->v.f[7];
    c->v.f[17] = c->v.f[6] - c->v.f[7];
    ST32(c->r[13] + 480u, c->v.s[11]);
    c->v.f[15] = c->v.f[15] - c->v.f[13];
    c->v.f[13] = c->v.f[24] - c->v.f[22];
    c->v.f[22] = c->v.f[10] - c->v.f[9];
    c->v.f[24] = c->v.f[8] - c->v.f[9];
    c->v.f[24] = c->v.f[24] - c->v.f[22];
    c->v.f[22] = c->v.f[28] - c->v.f[26];
    c->v.f[26] = c->v.f[17] - c->v.f[30];
    ST32(c->r[13] + 484u, c->v.s[15]);
    ST32(c->r[13] + 488u, c->v.s[13]);
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_9d2cf8; }
    c->r[2] = 0x106e2b0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[6] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x9d2b4cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 8u);
    c->r[2] = 0x2u;
    c->v.f[2] = c->v.f[24] * c->v.f[2];
    c->v.f[4] = c->v.f[26] * c->v.f[4];
    c->v.f[6] = c->v.f[22] * c->v.f[6];
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    ST32(c->r[13] + 256u, c->v.s[2]);
    ST32(c->r[13] + 260u, c->v.s[4]);
    ST32(c->r[13] + 264u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[2] : c->v.s[4];
    if (COND_LE) { c->r[5] = 0x1u; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[11], c->v.f[15]);
    if (COND_LE) { c->r[5] = c->r[2]; }
    c->r[6] = c->r[6] | (c->r[5] << 2);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[11] : c->v.s[15];
    if (COND_LE) { c->r[4] = 0x1u; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[13]);
    c->v.s[2] = LD32(c->r[6]);
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[4] = c->r[2]; }
    c->r[2] = c->r[13] + 0x1e0u;
    c->r[2] = c->r[2] | (c->r[4] << 2);
    c->v.s[4] = LD32(c->r[2]);
    c->r[2] = c->r[13] + 0x1f0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9d2e14; }
    { uint32_t ea = c->r[2] + (c->r[5] << 4); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] + (c->r[5] << 4);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_9d2f18; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    c->r[4] = c->r[5] & 0x3u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_EQ) { goto L_9d33e8; }
    (void)f_subs(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_9d34a0; }
    c->r[3] = c->r[14];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9d355c; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[13] + 0x1b4u;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[9];
    c->r[9] = c->r[3];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13] + 352u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[14]); }
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[5]); }
    c->v.s[12] = c->r[5];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[2]); }
    goto L_9d36e0;
L_9d2cf8:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_9d3890; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[3]);
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[8], c->v.f[10]);
    if (COND_LS) { c->r[7] = 0x1u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[6], c->v.f[12]);
    if (COND_GE) { c->r[2] = 0x1u; }
    c->r[7] = c->r[2] & c->r[7];
    c->r[2] = c->r[7];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[4], c->v.f[1]);
    if (COND_GE) { c->r[2] = c->r[2] | 0x2u; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[20]);
    if (COND_HI) { c->r[2] = c->r[7]; }
    c->r[7] = c->r[2];
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[18], c->v.f[14]);
    if (COND_GE) { c->r[7] = c->r[7] | 0x4u; }
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[7] = c->r[2]; }
    c->r[5] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_9d2fd4; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[4]); }
    c->r[4] = 0x9d2d84u + 0x18u;
    c->r[5] = (c->r[5] << 2);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2u;
    c->r[8] = 0x4u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->pc = c->r[5] + c->r[4]; switch (c->pc) { case 0x9d2db4u: goto L_9d2db4; case 0x9d312cu: goto L_9d312c; case 0x9d3138u: goto L_9d3138; case 0x9d3140u: goto L_9d3140; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9d2db4:;
    c->v.f[0] = c->v.f[12] + c->v.f[1];
    c->v.f[2] = c->v.f[10] + c->v.f[3];
    c->r[2] = c->r[7] & 0x7u;
    (void)f_subs(c, c->r[2], 0x4u);
    c->v.f[7] = -c->v.f[7] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.f[9] = -c->v.f[9] + (float)(c->v.f[2] * c->v.f[16]);
    if (COND_EQ) { goto L_9d38b4; }
    c->v.f[0] = c->v.f[20] + c->v.f[14];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[2], 0x2u);
    c->v.f[5] = -c->v.f[5] + (float)(c->v.f[0] * c->v.f[16]);
    if (COND_EQ) { goto L_9d38f0; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[12] = 0x0u;
    if (COND_NE) { goto L_9d3930; }
    vfp_cmp_f(c, c->v.f[7], 0.0f);
    c->r[2] = 0x4u;
    c->r[7] = 0x8u;
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = 0x8u; }
    if (COND_MI) { c->r[7] = 0x4u; }
    goto L_9d3908;
L_9d2e14:;
    { uint32_t ea = c->r[2] + (c->r[4] << 4); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] + (c->r[4] << 4);
    c->r[3] = c->r[6] ^ 0x80000000u;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] ^ 0x80000000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_9d2f20; }
    c->r[5] = c->r[4] & 0x3u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_9d3570; }
    c->r[9] = c->r[14];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_9d3634; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_9d38a4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[13] + 416u, c->v.s[0]);
    c->r[7] = 0x0u;
    c->r[4] = c->r[13] + 0x1b4u;
    c->v.s[2] = c->v.s[4];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13] + 432u, c->v.s[0]);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
    c->r[4] = c->r[13] + 0x1c4u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    ST32(c->r[13] + 448u, c->v.s[0]);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
    c->r[4] = c->r[13] + 0x1d4u;
    ST32(c->r[13] + 464u, c->v.s[0]);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[4] = c->r[13] + 0x164u;
    { uint32_t ea = c->r[1] + 4u; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    ST32(c->r[13] + 352u, c->v.s[3]);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[4] = c->r[13] + 0x174u;
    c->v.s[12] = c->r[2];
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    ST32(c->r[13] + 368u, c->v.s[3]);
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); }
    ST32(c->r[13] + 384u, c->v.s[3]);
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 400u, c->v.s[3]);
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[10] = LD32(c->r[1]);
    goto L_9d36e4;
L_9d2f18:;
    c->v.s[4] = c->v.s[2];
    goto L_9d2f2c;
L_9d2f20:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
L_9d2f2c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9d2f80; }
    c->r[0] = 0x1065c08u;
    { uint32_t ea = 0x9d2f44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[2] + 32u, c->v.s[4]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[0]); }
L_9d2f80:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9d388c; }
    c->r[0] = 0x1065bb8u;
    { uint32_t ea = 0x9d2f94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6] ^ 0x80000000u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] ^ 0x80000000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] ^ 0x80000000u;
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[8] + 32u, c->v.s[4]);
    goto L_9d3880;
L_9d2fd4:;
    c->v.f[0] = c->v.f[12] + c->v.f[1];
    c->v.f[2] = c->v.f[10] + c->v.f[3];
    c->r[2] = c->r[0] + 0x4u;
    c->v.f[7] = -c->v.f[7] + (float)(c->v.f[0] * c->v.f[16]);
    c->v.f[9] = -c->v.f[9] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.f[0] = c->v.f[20] + c->v.f[14];
    vfp_cmp_f(c, c->v.f[7], 0.0f);
    c->v.f[5] = -c->v.f[5] + (float)(c->v.f[0] * c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[2] = c->r[0] + 0x14u; }
    vfp_cmp_f(c, c->v.f[9], 0.0f);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[2] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[9] = v; }
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9d302c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[18] = LD32(c->r[2]);
L_9d302c:;
    c->v.s[0] = 0x80000000u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[4] = c->r[9];
    vfp_cmp_f(c, c->v.f[7], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[9], c->v.f[0]);
    if (COND_MI) { c->r[7] = c->v.s[1]; }
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[12] = c->r[1]; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[0]);
    c->v.s[0] = c->r[10];
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[2] = c->r[7];
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[20] = LD32(c->r[0]); }
    c->v.s[6] = c->r[6];
    c->v.f[24] = c->v.f[2] - c->v.f[0];
    c->v.f[26] = c->v.f[6] - c->v.f[4];
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->v.f[16] = c->v.f[24] * c->v.f[24];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d309c; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d309cu; f_15efddc(c);
L_9d309c:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d30c0; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
L_9d30c0:;
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d30d8; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d30d8u; f_15efddc(c);
L_9d30d8:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_9d3a00; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d3118; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); }
    ST32(c->r[4] + 8u, c->v.s[18]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[26]);
    ST32(c->r[4] + 20u, c->v.s[24]);
    ST32(c->r[4] + 24u, c->v.s[22]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d3118:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9d3b20; }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    ST32(c->r[8] + 8u, c->v.s[20]);
    goto L_9d3a74;
L_9d312c:;
    c->r[2] = 0x1u;
    c->r[8] = 0x2u;
    goto L_9d3140;
L_9d3138:;
    c->r[8] = 0x0u;
    c->r[2] = 0x0u;
L_9d3140:;
    c->v.f[5] = fabsf(c->v.f[24]);
    c->r[7] = 0x0u;
    c->v.f[7] = fabsf(c->v.f[26]);
    c->r[4] = c->r[13] + 0x150u;
    c->r[6] = c->r[13] + 0x140u;
    c->r[5] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[7]); }
    c->r[4] = c->r[4] + (c->r[2] << 2);
    c->r[6] = c->r[6] + (c->r[2] << 2);
    c->r[7] = c->r[5] + (c->r[2] << 4);
    ST32(c->r[13] + 336u, c->v.s[5]);
    c->v.f[5] = fabsf(c->v.f[22]);
    ST32(c->r[13] + 340u, c->v.s[7]);
    c->v.f[7] = fabsf(c->v.f[15]);
    ST32(c->r[13] + 344u, c->v.s[5]);
    c->v.f[5] = fabsf(c->v.f[11]);
    c->v.s[16] = LD32(c->r[4]);
    ST32(c->r[13] + 320u, c->v.s[5]);
    c->v.f[5] = fabsf(c->v.f[13]);
    ST32(c->r[13] + 324u, c->v.s[7]);
    ST32(c->r[13] + 328u, c->v.s[5]);
    c->v.s[11] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[11]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d31d8; }
    { uint32_t ea = c->r[5] + (c->r[2] << 4); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->v.s[5] = c->r[4];
    c->v.s[7] = c->r[6];
    c->r[4] = 0x2u;
    c->r[12] = c->r[3];
    c->v.s[9] = c->r[3];
    c->r[3] = c->r[6];
    goto L_9d320c;
L_9d31d8:;
    c->v.s[5] = LD32(c->r[7] + 8u);
    c->v.s[9] = LD32(c->r[7]);
    c->v.s[7] = LD32(c->r[7] + 4u);
    c->v.s[16] = c->v.s[11];
    c->r[7] = 0x2u;
    c->r[4] = 0x1u;
    c->v.s[5] = c->v.s[5] ^ 0x80000000u;
    c->v.s[9] = c->v.s[9] ^ 0x80000000u;
    c->v.s[7] = c->v.s[7] ^ 0x80000000u;
    c->r[3] = c->v.s[5];
    c->r[12] = c->v.s[9];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->v.s[7];
L_9d320c:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9d3328; }
    c->r[5] = 0x0u;
    c->r[4] = sh_lsl(c->r[4], c->r[8]);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[5] = ~0x0u;
    c->r[4] = c->r[5] + (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[4], 0x1fu);
    if (COND_HI) { goto L_9d41a0; }
    c->r[5] = c->v.s[0];
    c->r[4] = (c->r[4] << 2);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[5] = 0x9d326cu + 0x4u;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->pc = c->r[4] + c->r[5]; switch (c->pc) { case 0x9d32f0u: goto L_9d32f0; case 0x9d406cu: goto L_9d406c; case 0x9d4090u: goto L_9d4090; case 0x9d40ccu: goto L_9d40cc; case 0x9d4108u: goto L_9d4108; case 0x9d4148u: goto L_9d4148; case 0x9d41a0u: goto L_9d41a0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9d32f0:;
    c->r[7] = 0x0u;
    ST32(c->r[13] + 416u, c->v.s[0]);
    ST32(c->r[13] + 420u, c->v.s[4]);
    ST32(c->r[13] + 424u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 432u, c->v.s[0]);
    ST32(c->r[13] + 436u, c->v.s[4]);
    ST32(c->r[13] + 440u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 448u, c->v.s[0]);
    ST32(c->r[13] + 452u, c->v.s[6]);
    ST32(c->r[13] + 456u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[7]); }
    goto L_9d4184;
L_9d3328:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9d337c; }
    c->r[0] = 0x106580cu;
    { uint32_t ea = 0x9d3340u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[2] + 16u, c->v.s[9]);
    ST32(c->r[2] + 20u, c->v.s[7]);
    ST32(c->r[2] + 24u, c->v.s[5]);
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[2] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[0]); }
L_9d337c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9d4f10; }
    c->r[0] = 0x10657b0u;
    c->v.s[0] = c->v.s[9] ^ 0x80000000u;
    c->v.s[2] = c->v.s[7] ^ 0x80000000u;
    { uint32_t ea = 0x9d339cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[2] + 16u, c->v.s[0]);
    c->v.s[0] = c->v.s[5] ^ 0x80000000u;
    ST32(c->r[2] + 20u, c->v.s[2]);
    ST32(c->r[2] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[2] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[0]); }
    c->r[2] = 0x0u;
    goto L_9d3890;
L_9d33e8:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    ST32(c->r[13] + 416u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 352u, c->v.s[10]);
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 464u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[2]); }
    c->v.s[12] = c->r[2];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[5]); }
    c->r[5] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    goto L_9d354c;
L_9d34a0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    c->r[3] = c->r[13] + 0x1b0u;
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    c->v.s[10] = c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[7]); }
    c->v.s[12] = c->r[7];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[4]); }
L_9d354c:;
    c->r[9] = c->r[14];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_9d36dc;
L_9d355c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[3];
    goto L_9d36e0;
L_9d3570:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 416u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x0u;
    c->r[9] = c->r[14];
    c->v.s[2] = c->v.s[4];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[4]); }
    ST32(c->r[13] + 352u, c->v.s[10]);
    ST32(c->r[13] + 356u, c->v.s[1]);
    ST32(c->r[13] + 360u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 464u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 372u, c->v.s[1]);
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 392u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 408u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->v.s[12] = c->r[1];
    c->r[5] = c->r[7];
    goto L_9d36e4;
L_9d3634:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = 0x0u;
    c->r[3] = c->r[13] + 0x160u;
    c->v.s[2] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[3] = c->r[13] + 0x194u;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 384u, c->v.s[3]);
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[5]); }
    ST32(c->r[13] + 392u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 400u, c->v.s[3]);
    c->v.s[10] = c->r[2];
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->v.s[12] = LD32(c->r[1] + 4u);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
L_9d36dc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_9d36e0:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
L_9d36e4:;
    c->r[2] = c->r[13] + 0x160u;
    c->v.s[14] = LD32(c->r[9]);
    c->v.s[1] = LD32(c->r[5]);
    c->r[1] = c->r[13] + 0x1a0u;
    c->r[4] = 0x0u;
    c->r[7] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x4u;
    c->v.s[8] = LD32(c->r[2]);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9d370c:;
    c->v.s[0] = LD32(c->r[1] - 4u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d376c; }
    c->v.s[4] = LD32(c->r[1] + 4u);
    c->v.s[6] = LD32(c->r[2]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d376c; }
    c->v.s[6] = LD32(c->r[12]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d376c; }
    c->v.s[6] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d376c; }
    c->v.s[6] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d376c; }
    vfp_cmp_f(c, c->v.f[6], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9d3aa8; }
L_9d376c:;
    c->v.s[0] = LD32(c->r[7] - 4u);
    c->v.s[4] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d37d0; }
    c->v.s[4] = LD32(c->r[7] + 4u);
    c->v.s[6] = LD32(c->r[10]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d37d0; }
    c->v.s[6] = LD32(c->r[3]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d37d0; }
    c->v.s[6] = LD32(c->r[14]);
    vfp_cmp_f(c, c->v.f[4], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d37d0; }
    c->v.s[6] = LD32(c->r[7]);
    vfp_cmp_f(c, c->v.f[6], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d37d0; }
    vfp_cmp_f(c, c->v.f[6], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_9d3ae0; }
L_9d37d0:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[1] + 0x10u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_CC) { goto L_9d370c; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[6] = c->r[5];
    c->v.s[0] = c->r[7];
    c->v.s[8] = c->r[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[2]);
L_9d3808:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_9d3844; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[2] + 32u, c->v.s[2]);
    { uint32_t ea = c->r[2] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[0]); }
L_9d3844:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9d388c; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[6] ^ 0x80000000u;
    ST32(c->r[8], c->v.s[0]);
    ST32(c->r[8] + 4u, c->v.s[6]);
    ST32(c->r[8] + 8u, c->v.s[4]);
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] ^ 0x80000000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7] ^ 0x80000000u;
    { uint32_t ea = c->r[8] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[8] + 32u, c->v.s[2]);
L_9d3880:;
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x28u; ST8(ea, c->r[0]); }
L_9d388c:;
    c->r[2] = 0x1u;
L_9d3890:;
    c->r[0] = c->r[2];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_9d38a4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[2] = c->v.s[4];
    goto L_9d36e4;
L_9d38b4:;
    vfp_cmp_f(c, c->v.f[9], 0.0f);
    c->r[2] = 0x1u;
    c->r[7] = 0x2u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[7], 0.0f);
    if (COND_MI) { c->r[2] = 0x2u; }
    if (COND_MI) { c->r[7] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[12] = c->r[2] | 0x4u; }
    if (COND_PL) { c->r[7] = c->r[7] | 0x8u; }
    if (COND_MI) { c->r[12] = c->r[2] | 0x8u; }
    if (COND_MI) { c->r[7] = c->r[7] | 0x4u; }
    goto L_9d3930;
L_9d38f0:;
    vfp_cmp_f(c, c->v.f[9], 0.0f);
    c->r[2] = 0x1u;
    c->r[7] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[2] = 0x2u; }
    if (COND_MI) { c->r[7] = 0x1u; }
L_9d3908:;
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d3928; }
    c->r[12] = c->r[2] | 0x20u;
    c->r[7] = c->r[7] | 0x10u;
    goto L_9d3930;
L_9d3928:;
    c->r[12] = c->r[2] | 0x10u;
    c->r[7] = c->r[7] | 0x20u;
L_9d3930:;
    c->r[7] = c->r[7] - 0x5u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[7], 0x23u);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[6]); }
    if (COND_HI) { goto L_9d3bf8; }
    c->r[7] = (c->r[7] << 2);
    c->r[6] = 0x9d395cu + 0x8u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[6]; switch (c->pc) { case 0x9d39f4u: goto L_9d39f4; case 0x9d3b28u: goto L_9d3b28; case 0x9d3b34u: goto L_9d3b34; case 0x9d3b40u: goto L_9d3b40; case 0x9d3b50u: goto L_9d3b50; case 0x9d3b5cu: goto L_9d3b5c; case 0x9d3b68u: goto L_9d3b68; case 0x9d3b74u: goto L_9d3b74; case 0x9d3b80u: goto L_9d3b80; case 0x9d3b8cu: goto L_9d3b8c; case 0x9d3b94u: goto L_9d3b94; case 0x9d3ba0u: goto L_9d3ba0; case 0x9d3bf8u: goto L_9d3bf8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9d39f4:;
    c->r[3] = c->r[0];
    c->r[14] = c->r[5];
    goto L_9d3b48;
L_9d3a00:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d3a4c; }
    c->r[0] = 0x1065138u;
    { uint32_t ea = 0x9d3a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[26]);
    ST32(c->r[4] + 20u, c->v.s[24]);
    ST32(c->r[4] + 24u, c->v.s[22]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d3a4c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9d3b20; }
    c->r[0] = 0x10650ecu;
    { uint32_t ea = 0x9d3a60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
L_9d3a74:;
    c->v.s[2] = c->v.s[26] ^ 0x80000000u;
    c->r[2] = 0x0u;
    c->v.s[4] = c->v.s[24] ^ 0x80000000u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[2]); }
    ST32(c->r[8] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[22] ^ 0x80000000u;
    ST32(c->r[8] + 20u, c->v.s[4]);
    ST32(c->r[8] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[2]); }
    ST32(c->r[8] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x28u; ST8(ea, c->r[2]); }
    goto L_9d3890;
L_9d3aa8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[3] = c->v.s[0];
    c->v.s[8] = c->r[7];
    c->v.s[10] = c->r[5];
    c->v.s[12] = c->r[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[2]);
    goto L_9d3808;
L_9d3ae0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[14] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[8] = c->r[7];
    c->v.s[10] = c->r[5];
    c->v.s[12] = c->r[6];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[8] = c->v.s[6];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.s[10] = c->v.s[0];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[2]);
    c->r[1] = c->v.s[14];
    c->r[0] = c->v.s[8];
    c->r[3] = c->v.s[10];
    goto L_9d3808;
L_9d3b20:;
    c->r[2] = 0x0u;
    goto L_9d3890;
L_9d3b28:;
    c->r[0] = c->r[3];
    c->r[14] = c->r[5];
    goto L_9d3b48;
L_9d3b34:;
    c->r[5] = c->r[14];
    c->r[3] = c->r[0];
    goto L_9d3b48;
L_9d3b40:;
    c->r[0] = c->r[3];
    c->r[5] = c->r[14];
L_9d3b48:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_9d3bac;
L_9d3b50:;
    c->r[2] = c->r[10];
    c->r[3] = c->r[0];
    goto L_9d3bac;
L_9d3b5c:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[10];
    goto L_9d3bac;
L_9d3b68:;
    c->r[2] = c->r[10];
    c->r[14] = c->r[5];
    goto L_9d3bac;
L_9d3b74:;
    c->r[5] = c->r[14];
    c->r[2] = c->r[10];
    goto L_9d3bac;
L_9d3b80:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0];
    goto L_9d3ba8;
L_9d3b8c:;
    c->r[0] = c->r[3];
    goto L_9d3ba4;
L_9d3b94:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[5];
    goto L_9d3ba8;
L_9d3ba0:;
    c->r[5] = c->r[14];
L_9d3ba4:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
L_9d3ba8:;
    c->r[10] = c->r[2];
L_9d3bac:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0x1a0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[5]); }
    c->v.s[18] = c->r[7];
    c->v.s[20] = c->r[6];
    c->v.s[22] = c->r[0];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[24] = c->r[4];
    c->v.s[26] = c->r[2];
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[5]); }
L_9d3bf8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[12] - 0x5u;
    (void)f_subs(c, c->r[0], 0x23u);
    if (COND_HI) { goto L_9d3dcc; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x9d3c14u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x9d3ca8u: goto L_9d3ca8; case 0x9d3cb0u: goto L_9d3cb0; case 0x9d3cc4u: goto L_9d3cc4; case 0x9d3cd0u: goto L_9d3cd0; case 0x9d3cecu: goto L_9d3cec; case 0x9d3cf8u: goto L_9d3cf8; case 0x9d3d0cu: goto L_9d3d0c; case 0x9d3d18u: goto L_9d3d18; case 0x9d3d30u: goto L_9d3d30; case 0x9d3d40u: goto L_9d3d40; case 0x9d3d5cu: goto L_9d3d5c; case 0x9d3d7cu: goto L_9d3d7c; case 0x9d3dccu: goto L_9d3dcc; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9d3ca8:;
    c->r[3] = c->r[1];
    goto L_9d3cb8;
L_9d3cb0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3];
L_9d3cb8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = c->r[14];
    goto L_9d3ce0;
L_9d3cc4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1];
    goto L_9d3cdc;
L_9d3cd0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[3];
L_9d3cdc:;
    c->r[14] = c->r[6];
L_9d3ce0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9d3d90;
L_9d3cec:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0];
    goto L_9d3d38;
L_9d3cf8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3];
    c->r[7] = c->r[0];
    goto L_9d3d50;
L_9d3d0c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0];
    goto L_9d3d64;
L_9d3d18:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[6];
    c->r[7] = c->r[0];
    goto L_9d3d90;
L_9d3d30:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
L_9d3d38:;
    c->r[3] = c->r[1];
    goto L_9d3d50;
L_9d3d40:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[3];
    c->r[0] = c->r[7];
L_9d3d50:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_9d3d90;
L_9d3d5c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
L_9d3d64:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[14];
    goto L_9d3d90;
L_9d3d7c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[6];
    c->r[0] = c->r[7];
L_9d3d90:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
L_9d3dcc:;
    c->v.s[17] = LD32(c->r[13] + 432u);
    c->v.f[0] = c->v.f[26] - c->v.f[20];
    c->v.f[4] = c->v.f[24] - c->v.f[18];
    c->v.s[28] = 0x34000000u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[2] = c->v.f[17] - c->v.f[22];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d3f00; }
    c->v.s[0] = 0x3a83126fu;
    c->r[0] = c->r[13] + 0x1a0u;
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x100u;
    c->r[3] = c->r[13] + 0xc0u;
    c->r[14] = 0x9d3e14u; f_a09bc0(c);
    c->v.s[0] = LD32(c->r[13] + 416u);
    c->v.s[6] = LD32(c->r[13] + 432u);
    c->v.s[2] = LD32(c->r[13] + 420u);
    c->v.s[8] = LD32(c->r[13] + 436u);
    c->v.s[4] = LD32(c->r[13] + 424u);
    c->v.s[10] = LD32(c->r[13] + 440u);
    c->v.s[16] = LD32(c->r[13] + 256u);
    c->v.f[26] = c->v.f[8] - c->v.f[2];
    c->v.f[24] = c->v.f[6] - c->v.f[0];
    c->v.f[17] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d3e60; }
    c->r[14] = 0x9d3e5cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d3e60:;
    c->v.s[4] = LD32(c->r[13] + 356u);
    c->v.s[10] = LD32(c->r[13] + 372u);
    c->v.s[0] = LD32(c->r[13] + 352u);
    c->v.s[8] = LD32(c->r[13] + 368u);
    c->v.s[21] = 0x3f800000u;
    c->v.s[6] = LD32(c->r[13] + 360u);
    c->v.s[22] = LD32(c->r[13] + 416u);
    c->v.s[20] = LD32(c->r[13] + 420u);
    c->v.s[18] = LD32(c->r[13] + 424u);
    c->v.s[23] = LD32(c->r[13] + 192u);
    c->v.f[2] = c->v.f[21] / c->v.f[2];
    c->v.f[30] = c->v.f[10] - c->v.f[4];
    c->v.s[4] = LD32(c->r[13] + 376u);
    c->v.f[19] = c->v.f[8] - c->v.f[0];
    c->v.f[25] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[17] = c->v.f[17] * c->v.f[2];
    c->v.f[26] = c->v.f[26] * c->v.f[2];
    c->v.f[24] = c->v.f[24] * c->v.f[2];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d3ecc; }
    c->r[14] = 0x9d3ec8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d3ecc:;
    c->v.f[0] = c->v.f[21] / c->v.f[2];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[16] * c->v.f[17]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[16] * c->v.f[26]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[16] * c->v.f[24]);
    c->v.s[17] = LD32(c->r[13] + 352u);
    c->v.s[26] = LD32(c->r[13] + 356u);
    c->v.s[24] = LD32(c->r[13] + 360u);
    c->v.f[2] = c->v.f[25] * c->v.f[0];
    c->v.f[4] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[19] * c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[23] * c->v.f[2]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[23] * c->v.f[0]);
L_9d3f00:;
    c->v.f[19] = c->v.f[26] - c->v.f[20];
    c->v.f[21] = c->v.f[17] - c->v.f[22];
    c->v.f[30] = c->v.f[24] - c->v.f[18];
    c->v.f[16] = c->v.f[19] * c->v.f[19];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d3f30; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d3f30u; f_15efddc(c);
L_9d3f30:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d3f50; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_9d3f50:;
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d3f68; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x9d3f68u; f_15efddc(c);
L_9d3f68:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9d3fc0; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d3fa8; }
    c->r[0] = 0x0u;
    ST32(c->r[4], c->v.s[22]);
    ST32(c->r[4] + 4u, c->v.s[20]);
    ST32(c->r[4] + 8u, c->v.s[18]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[21]);
    ST32(c->r[4] + 20u, c->v.s[19]);
    ST32(c->r[4] + 24u, c->v.s[30]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d3fa8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9d4064; }
    ST32(c->r[8], c->v.s[17]);
    ST32(c->r[8] + 4u, c->v.s[26]);
    ST32(c->r[8] + 8u, c->v.s[24]);
    goto L_9d4034;
L_9d3fc0:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d400c; }
    c->r[0] = 0x1064b78u;
    { uint32_t ea = 0x9d3fd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 16u, c->v.s[21]);
    ST32(c->r[4] + 20u, c->v.s[19]);
    ST32(c->r[4] + 24u, c->v.s[30]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d400c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_9d4064; }
    c->r[0] = 0x1064b2cu;
    { uint32_t ea = 0x9d4020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
L_9d4034:;
    c->v.s[2] = c->v.s[21] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->v.s[4] = c->v.s[19] ^ 0x80000000u;
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    ST32(c->r[8] + 16u, c->v.s[2]);
    c->v.s[2] = c->v.s[30] ^ 0x80000000u;
    ST32(c->r[8] + 20u, c->v.s[4]);
    ST32(c->r[8] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[8] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[8] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[8] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x28u; ST8(ea, c->r[0]); }
L_9d4064:;
    c->r[2] = 0x0u;
    goto L_9d3890;
L_9d406c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 420u, c->v.s[4]);
    ST32(c->r[13] + 424u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 436u, c->v.s[4]);
    goto L_9d40e8;
L_9d4090:;
    c->r[0] = 0x0u;
    ST32(c->r[13] + 416u, c->v.s[0]);
    ST32(c->r[13] + 420u, c->v.s[4]);
    ST32(c->r[13] + 424u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 432u, c->v.s[0]);
    ST32(c->r[13] + 436u, c->v.s[4]);
    ST32(c->r[13] + 440u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 452u, c->v.s[4]);
    ST32(c->r[13] + 456u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9d4180;
L_9d40cc:;
    c->r[0] = 0x0u;
    ST32(c->r[13] + 416u, c->v.s[0]);
    ST32(c->r[13] + 420u, c->v.s[6]);
    ST32(c->r[13] + 424u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 432u, c->v.s[0]);
    ST32(c->r[13] + 436u, c->v.s[6]);
L_9d40e8:;
    ST32(c->r[13] + 440u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 452u, c->v.s[6]);
    ST32(c->r[13] + 456u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9d4184;
L_9d4108:;
    c->r[4] = 0x0u;
    ST32(c->r[13] + 416u, c->v.s[0]);
    ST32(c->r[13] + 420u, c->v.s[4]);
    ST32(c->r[13] + 424u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 436u, c->v.s[4]);
    ST32(c->r[13] + 440u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 452u, c->v.s[6]);
    ST32(c->r[13] + 456u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[4]); }
    goto L_9d4184;
L_9d4148:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[4] = 0x0u;
    ST32(c->r[13] + 416u, c->v.s[0]);
    ST32(c->r[13] + 420u, c->v.s[6]);
    ST32(c->r[13] + 424u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 436u, c->v.s[6]);
    ST32(c->r[13] + 440u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 452u, c->v.s[4]);
    ST32(c->r[13] + 456u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[4]); }
L_9d4180:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
L_9d4184:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x1d0u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[0]); }
L_9d41a0:;
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9d4210; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[2] & 0x3u;
    c->r[9] = c->r[3];
    c->r[10] = c->r[12];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9d4334; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9d457c; }
    c->v.s[5] = LD32(c->r[13] + 416u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4370; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4370; }
    c->v.s[9] = LD32(c->r[13] + 424u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4370; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[7] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d44d4; }
    goto L_9d4370;
L_9d4210:;
    c->v.s[7] = LD32(c->r[13] + 420u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[3];
    c->r[10] = c->r[12];
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4260; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4260; }
    c->v.s[9] = LD32(c->r[13] + 424u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4260; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4314; }
L_9d4260:;
    c->v.s[7] = LD32(c->r[13] + 436u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d429c; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d429c; }
    c->v.s[9] = LD32(c->r[13] + 440u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d429c; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[0] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4314; }
L_9d429c:;
    c->v.s[7] = LD32(c->r[13] + 452u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d42d8; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d42d8; }
    c->v.s[9] = LD32(c->r[13] + 456u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d42d8; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[0] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4314; }
L_9d42d8:;
    c->v.s[7] = LD32(c->r[13] + 468u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d457c; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d457c; }
    c->v.s[9] = LD32(c->r[13] + 472u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d457c; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[0] = 0x3u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d457c; }
L_9d4314:;
    c->r[1] = c->r[13] + 0x1a0u;
    { uint32_t ea = c->r[1] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->v.s[9];
    c->r[1] = c->v.s[7];
    c->v.s[5] = c->r[2];
    goto L_9d4544;
L_9d4334:;
    c->v.s[5] = LD32(c->r[13] + 416u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4370; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4370; }
    c->v.s[7] = LD32(c->r[13] + 420u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4370; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    c->r[7] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d452c; }
L_9d4370:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_9d43c0; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_9d457c; }
    c->v.s[5] = LD32(c->r[13] + 432u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d43fc; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d43fc; }
    c->v.s[7] = LD32(c->r[13] + 436u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d43fc; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    c->r[7] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d452c; }
    goto L_9d43fc;
L_9d43c0:;
    c->v.s[5] = LD32(c->r[13] + 432u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d43fc; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d43fc; }
    c->v.s[9] = LD32(c->r[13] + 440u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d43fc; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[7] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d44d4; }
L_9d43fc:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9d444c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9d457c; }
    c->v.s[5] = LD32(c->r[13] + 448u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4488; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4488; }
    c->v.s[9] = LD32(c->r[13] + 456u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4488; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[7] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d44d4; }
    goto L_9d4488;
L_9d444c:;
    c->v.s[5] = LD32(c->r[13] + 448u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4488; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4488; }
    c->v.s[7] = LD32(c->r[13] + 452u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4488; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    c->r[7] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d452c; }
L_9d4488:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_9d44f0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_9d457c; }
    c->v.s[5] = LD32(c->r[13] + 464u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d457c; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d457c; }
    c->v.s[9] = LD32(c->r[13] + 472u);
    vfp_cmp_f(c, c->v.f[9], c->v.f[14]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d457c; }
    vfp_cmp_f(c, c->v.f[9], c->v.f[20]);
    c->r[7] = 0x3u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d457c; }
L_9d44d4:;
    c->r[0] = c->r[13] + 0x1a0u;
    c->r[2] = c->v.s[5];
    c->r[0] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[9];
    c->v.s[7] = c->r[1];
    goto L_9d4544;
L_9d44f0:;
    c->v.s[5] = LD32(c->r[13] + 464u);
    vfp_cmp_f(c, c->v.f[5], c->v.f[10]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d457c; }
    vfp_cmp_f(c, c->v.f[5], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d457c; }
    c->v.s[7] = LD32(c->r[13] + 468u);
    vfp_cmp_f(c, c->v.f[7], c->v.f[1]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d457c; }
    vfp_cmp_f(c, c->v.f[7], c->v.f[12]);
    c->r[7] = 0x3u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d457c; }
L_9d452c:;
    c->r[0] = c->r[13] + 0x1a0u;
    c->r[1] = c->v.s[7];
    c->r[2] = c->v.s[5];
    c->r[0] = c->r[0] + (c->r[7] << 4);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[9] = c->r[0];
L_9d4544:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.s[2] = c->r[9];
    c->v.s[4] = c->r[10];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[16]);
    c->v.s[0] = c->r[8];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[0] * c->v.f[16]);
    c->r[7] = c->v.s[7];
    c->r[6] = c->v.s[5];
    c->r[3] = c->v.s[9];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9d4ea0; }
    goto L_9d4ed0;
L_9d457c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = ~0x0u;
    c->r[0] = sh_lsl(c->r[0], c->r[8]);
    c->r[7] = c->r[7] + (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[7], 0x1fu);
    if (COND_HI) { goto L_9d478c; }
    c->r[0] = (c->r[7] << 2);
    c->r[7] = 0x9d45a0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->pc = c->r[6] + c->r[7]; switch (c->pc) { case 0x9d4624u: goto L_9d4624; case 0x9d462cu: goto L_9d462c; case 0x9d465cu: goto L_9d465c; case 0x9d46a8u: goto L_9d46a8; case 0x9d46e4u: goto L_9d46e4; case 0x9d4728u: goto L_9d4728; case 0x9d478cu: goto L_9d478c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_9d4624:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_9d4630;
L_9d462c:;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
L_9d4630:;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 356u, c->v.s[12]);
    ST32(c->r[13] + 360u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 372u, c->v.s[12]);
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    goto L_9d46d8;
L_9d465c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 356u, c->v.s[12]);
    ST32(c->r[13] + 360u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 372u, c->v.s[12]);
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 388u, c->v.s[12]);
    ST32(c->r[13] + 392u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[7]); }
    goto L_9d476c;
L_9d46a8:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 356u, c->v.s[1]);
    ST32(c->r[13] + 360u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 372u, c->v.s[1]);
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[6]); }
L_9d46d8:;
    ST32(c->r[13] + 388u, c->v.s[1]);
    ST32(c->r[13] + 392u, c->v.s[14]);
    goto L_9d471c;
L_9d46e4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 356u, c->v.s[12]);
    ST32(c->r[13] + 360u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 372u, c->v.s[12]);
    ST32(c->r[13] + 376u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[6]); }
    ST32(c->r[13] + 388u, c->v.s[1]);
    ST32(c->r[13] + 392u, c->v.s[20]);
L_9d471c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[7]); }
    goto L_9d476c;
L_9d4728:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 356u, c->v.s[1]);
    ST32(c->r[13] + 360u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 372u, c->v.s[1]);
    ST32(c->r[13] + 376u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[7]); }
    ST32(c->r[13] + 388u, c->v.s[12]);
    ST32(c->r[13] + 392u, c->v.s[14]);
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[14];
L_9d476c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
L_9d478c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_9d47f0; }
    c->r[1] = c->r[2] & 0x3u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9d48f8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9d4b40; }
    c->v.s[10] = LD32(c->r[13] + 352u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4934; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4934; }
    c->v.s[14] = LD32(c->r[13] + 360u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4934; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4aa0; }
    goto L_9d4934;
L_9d47f0:;
    c->v.s[12] = LD32(c->r[13] + 356u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d482c; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d482c; }
    c->v.s[14] = LD32(c->r[13] + 360u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d482c; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d48e0; }
L_9d482c:;
    c->v.s[12] = LD32(c->r[13] + 372u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4868; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4868; }
    c->v.s[14] = LD32(c->r[13] + 376u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4868; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[1] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d48e0; }
L_9d4868:;
    c->v.s[12] = LD32(c->r[13] + 388u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d48a4; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d48a4; }
    c->v.s[14] = LD32(c->r[13] + 392u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d48a4; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[1] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d48e0; }
L_9d48a4:;
    c->v.s[12] = LD32(c->r[13] + 404u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4b40; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4b40; }
    c->v.s[14] = LD32(c->r[13] + 408u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4b40; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[1] = 0x3u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4b40; }
L_9d48e0:;
    c->r[0] = c->r[13] + 0x160u;
    c->r[3] = c->v.s[14];
    c->r[7] = c->v.s[12];
    { uint32_t ea = c->r[0] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[10] = c->r[6];
    goto L_9d4b10;
L_9d48f8:;
    c->v.s[10] = LD32(c->r[13] + 352u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4934; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4934; }
    c->v.s[12] = LD32(c->r[13] + 356u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4934; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    c->r[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4af8; }
L_9d4934:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_9d4988; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_9d4b40; }
    c->v.s[10] = LD32(c->r[13] + 368u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d49c4; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d49c4; }
    c->v.s[12] = LD32(c->r[13] + 372u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d49c4; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    c->r[2] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4af8; }
    goto L_9d49c4;
L_9d4988:;
    c->v.s[10] = LD32(c->r[13] + 368u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d49c4; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d49c4; }
    c->v.s[14] = LD32(c->r[13] + 376u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d49c4; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[2] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4aa0; }
L_9d49c4:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9d4a18; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9d4b40; }
    c->v.s[10] = LD32(c->r[13] + 384u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4a54; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4a54; }
    c->v.s[14] = LD32(c->r[13] + 392u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4a54; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[2] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4aa0; }
    goto L_9d4a54;
L_9d4a18:;
    c->v.s[10] = LD32(c->r[13] + 384u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4a54; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4a54; }
    c->v.s[12] = LD32(c->r[13] + 388u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4a54; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    c->r[2] = 0x2u;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4af8; }
L_9d4a54:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_9d4abc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_9d4b40; }
    c->v.s[10] = LD32(c->r[13] + 400u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4b40; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4b40; }
    c->v.s[14] = LD32(c->r[13] + 408u);
    vfp_cmp_f(c, c->v.f[14], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4b40; }
    vfp_cmp_f(c, c->v.f[14], c->v.f[18]);
    c->r[2] = 0x3u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4b40; }
L_9d4aa0:;
    c->r[0] = c->r[13] + 0x160u;
    c->r[3] = c->v.s[14];
    c->r[6] = c->v.s[10];
    c->r[0] = c->r[0] + (c->r[2] << 4);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[12] = c->r[7];
    goto L_9d4b10;
L_9d4abc:;
    c->v.s[10] = LD32(c->r[13] + 400u);
    vfp_cmp_f(c, c->v.f[10], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4b40; }
    vfp_cmp_f(c, c->v.f[10], c->v.f[8]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4b40; }
    c->v.s[12] = LD32(c->r[13] + 404u);
    vfp_cmp_f(c, c->v.f[12], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_9d4b40; }
    vfp_cmp_f(c, c->v.f[12], c->v.f[4]);
    c->r[2] = 0x3u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4b40; }
L_9d4af8:;
    c->r[0] = c->r[13] + 0x160u;
    c->r[7] = c->v.s[12];
    c->r[6] = c->v.s[10];
    c->r[0] = c->r[0] + (c->r[2] << 4);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[14] = c->r[3];
L_9d4b10:;
    c->v.s[0] = c->r[8];
    c->v.s[2] = c->r[9];
    c->v.s[4] = c->r[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[0] * c->v.f[16]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[2] * c->v.f[16]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[4] * c->v.f[16]);
    c->r[0] = c->v.s[14];
    c->r[1] = c->v.s[12];
    c->r[2] = c->v.s[10];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_9d4ea0; }
    goto L_9d4ed0;
L_9d4b40:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->v.s[0] = 0x3a83126fu;
    c->r[6] = c->r[13] + 0x100u;
    c->r[7] = c->r[13] + 0xc0u;
    c->r[2] = c->r[13] + 0x80u;
    c->r[3] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x9d4c40u; f_a09bc0(c);
    c->v.f[20] = c->v.f[16] * c->v.f[16];
    c->v.s[18] = 0x34000000u;
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4c90; }
    c->v.s[0] = 0x3a83126fu;
    c->r[1] = c->r[7] + 0x20u;
    c->r[7] = c->r[13] + 0x40u;
    c->r[0] = c->r[6] + 0x20u;
    c->r[2] = c->r[13] + 0x80u;
    c->r[3] = c->r[7];
    c->r[14] = 0x9d4c78u; f_a09bc0(c);
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    c->r[4] = 0x1u;
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4c9c; }
L_9d4c90:;
    c->r[4] = c->r[6] + (c->r[4] << 5);
    c->v.s[22] = LD32(c->r[13] + 128u);
    goto L_9d4de8;
L_9d4c9c:;
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->v.s[0] = 0x3a83126fu;
    c->r[6] = c->r[13] + 0x80u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[3] = c->r[13] + 0x38u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x9d4d9cu; f_a09bc0(c);
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_9d4de0; }
    c->v.s[0] = 0x3a83126fu;
    c->r[1] = c->r[7] + 0x20u;
    c->r[0] = c->r[6] + 0x20u;
    c->r[2] = c->r[13] + 0x3cu;
    c->r[3] = c->r[13] + 0x38u;
    c->r[14] = 0x9d4dc8u; f_a09bc0(c);
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    c->r[4] = 0x1u;
    c->v.f[0] = fabsf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_9d4f18; }
L_9d4de0:;
    c->r[4] = c->r[6] + (c->r[4] << 5);
    c->v.s[22] = LD32(c->r[13] + 60u);
L_9d4de8:;
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[8] = LD32(c->r[4] + 20u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[10] = LD32(c->r[4] + 24u);
    c->v.f[20] = c->v.f[8] - c->v.f[0];
    c->v.f[18] = c->v.f[6] - c->v.f[4];
    c->v.f[24] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    c->r[6] = c->r[4] | 0x8u;
    c->r[7] = c->r[4] | 0x4u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_9d4e38; }
    c->r[14] = 0x9d4e34u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_9d4e38:;
    c->v.s[0] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[6]);
    c->v.f[6] = c->v.f[0] / c->v.f[2];
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[4]);
    c->v.f[8] = c->v.f[24] * c->v.f[6];
    c->v.f[10] = c->v.f[20] * c->v.f[6];
    c->v.f[6] = c->v.f[18] * c->v.f[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[6]);
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_9d4e70:;
    c->v.s[6] = c->r[8];
    c->v.s[8] = c->r[9];
    c->v.s[10] = c->r[10];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[16]);
    c->r[3] = c->v.s[4];
    c->r[7] = c->v.s[2];
    c->r[6] = c->v.s[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_9d4ed0; }
L_9d4ea0:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST8(ea, c->r[0]); }
L_9d4ed0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_9d4f10; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[10] ^ 0x80000000u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] ^ 0x80000000u;
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] ^ 0x80000000u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[5] + 32u, c->v.s[16]);
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST8(ea, c->r[0]); }
L_9d4f10:;
    c->r[2] = 0x0u;
    goto L_9d3890;
L_9d4f18:;
    goto L_9d4e70;
}
