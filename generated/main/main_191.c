#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_a82674(Cpu *c);
void f_c57e4c(Cpu *c);
void f_c57f14(Cpu *c);
void f_c6d3b4(Cpu *c);
void f_c74880(Cpu *c);
void f_c9af40(Cpu *c);
void f_cef728(Cpu *c);
void f_cfcce8(Cpu *c);
void f_cfd42c(Cpu *c);
void f_cfdecc(Cpu *c);
void f_dae520(Cpu *c);
void f_e90380(Cpu *c);
void f_ea99ec(Cpu *c);
void f_eaf17c(Cpu *c);
void f_15efddc(Cpu *c);
void f_c96fb8(Cpu *restrict c) {
    FN_ENTER(0xc96fb8u);
L_c96fb8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x1d8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x160u;
    c->r[2] = 0x0u;
    c->r[8] = c->r[0];
    c->r[14] = 0xc96fe8u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c984f4; }
    c->r[0] = 0xda5bb0u;
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xc97004u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0xc97014u; f_dae520(c);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xc97024u; f_c74880(c);
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c97064; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c984f4; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
L_c97048:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c97070; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_c97048; }
    goto L_c984f4;
L_c97064:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c984f4; }
L_c97070:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xc97080u; f_c9af40(c);
    c->r[0] = c->r[13] + 0x120u;
    c->r[1] = c->r[6];
    c->r[14] = 0xc9708cu; f_c57e4c(c);
    { uint32_t ea = c->r[8] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = LD32(c->r[8] + 152u);
    c->v.s[20] = LD32(c->r[8] + 252u);
    c->v.s[22] = LD32(c->r[0] + 272u);
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x100u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[13] + 0xd0u;
    c->r[14] = 0xc970b8u; f_c57f14(c);
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[12]); }
    c->r[6] = (c->r[5] >> 8) & 0xfu;
    c->r[0] = (c->r[4] >> 28) & 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9727c; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 176u, c->v.s[6]);
    ST32(c->r[13] + 180u, c->v.s[2]);
    ST32(c->r[13] + 184u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9713c; }
    c->r[14] = 0xc97138u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_c9713c:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9716c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9716cu; f_15efddc(c);
L_c9716c:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9718c; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c971b8;
L_c9718c:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 180u);
    c->v.s[6] = LD32(c->r[13] + 184u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c971b8:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c97238; }
    { uint32_t ea = c->r[8] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[16];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    goto L_c97258;
L_c97238:;
    c->r[0] = 0xda2014u;
    { uint32_t ea = 0xc97244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
L_c97258:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[18];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xb0u;
    c->r[2] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x160u;
    c->r[14] = 0xc97278u; f_ea99ec(c);
    c->r[12] = c->r[0];
L_c9727c:;
    c->v.f[20] = c->v.f[22] * c->v.f[20];
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[8]); }
    if (COND_EQ) { goto L_c97308; }
    c->v.s[2] = LD32(c->r[13] + 308u);
    c->v.s[0] = LD32(c->r[13] + 304u);
    c->v.s[4] = LD32(c->r[13] + 312u);
    c->v.s[6] = LD32(c->r[13] + 316u);
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[0] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->r[1] = (c->r[0] >> 30) & 0x1u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->r[0] = (c->r[0] >> 29) & 0x1u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c972e4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc972e4u; f_15efddc(c);
L_c972e4:;
    c->v.s[22] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c979fc; }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_c97a34;
L_c97308:;
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c97320; }
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c98ed0; }
L_c97320:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->v.s[26] = 0x34000000u;
    c->r[7] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[5] = c->r[0] & 0x3u;
    c->r[0] = c->r[8] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_c9734c:;
    c->r[9] = c->r[4];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c97398; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9738c; }
L_c9736c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9738c; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9736c; }
    c->r[10] = 0x0u;
    goto L_c97398;
L_c9738c:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_c97398:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    c->r[4] = c->r[9] + 0x8u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[4]);
    ST32(c->r[13] + 200u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_c97564; }
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 176u, c->v.s[6]);
    ST32(c->r[13] + 180u, c->v.s[4]);
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c97450; }
    c->r[14] = 0xc9744cu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_c97450:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c97480; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc97480u; f_15efddc(c);
L_c97480:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c974a0; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c974c8;
L_c974a0:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 180u);
    c->v.s[6] = LD32(c->r[13] + 184u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c974c8:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb4u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[7]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xb0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xc97560u; f_ea99ec(c);
    c->r[12] = c->r[0];
L_c97564:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_c979ec; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xf0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[6] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[6] - c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[6] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[6] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[6] - c->r[3];
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[7] = 0x0u;
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[12]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c979ec; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c976c0; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9764c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c97650;
L_c9764c:;
    c->r[8] = 0x0u;
L_c97650:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c97680; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[7] = c->r[12];
    c->r[14] = 0xc97674u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[7];
    c->r[7] = 0x0u;
L_c97680:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_EQ) { goto L_c976c0; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_c976c0:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[12]); }
    c->r[2] = c->r[9] + 0x60u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    c->r[7] = 0x10u;
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[7] = c->r[9] + 0xd0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[7] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[7] + (c->r[2] << 4);
    c->r[7] = c->r[13] + 0x190u;
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x80u;
    c->r[6] = 0x0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[7];
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    ST32(c->r[13] + 116u, c->v.s[2]);
    ST32(c->r[13] + 120u, c->v.s[4]);
    c->r[14] = 0xc9782cu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c9795c; }
    c->v.s[0] = LD32(c->r[13] + 336u);
    c->v.s[2] = LD32(c->r[13] + 340u);
    c->v.s[8] = c->r[2];
    c->v.s[10] = c->r[0];
    c->v.s[4] = LD32(c->r[13] + 344u);
    c->v.s[6] = LD32(c->r[13] + 348u);
    c->v.f[28] = c->v.f[8] - c->v.f[2];
    c->v.f[17] = c->v.f[10] - c->v.f[0];
    c->v.s[2] = c->r[1];
    c->v.f[18] = c->v.f[22] - c->v.f[6];
    c->v.f[30] = c->v.f[2] - c->v.f[4];
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9790c; }
    c->r[14] = 0xc97908u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c9790c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c9792c; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_c9792c:;
    c->v.s[0] = LD32(c->r[13] + 272u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[17]);
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 276u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 276u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 280u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[30]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 284u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[18]);
    ST32(c->r[13] + 284u, c->v.s[0]);
L_c9795c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[6]); }
    c->r[14] = 0xc97974u; f_eaf17c(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0x50u;
    c->r[6] = c->r[7];
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    c->v.s[0] = LD32(c->r[9] + 248u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (c->r[3] >> 12) & 0xfu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    c->r[1] = (c->r[1] >> 16) & 0xffu;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] + 0x18u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xacu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = c->r[13] + 0xe0u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc979e8u; f_e90380(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[12] = v; }
L_c979ec:;
    c->r[4] = c->r[10];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c9734c; }
    goto L_c984f4;
L_c979fc:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 304u);
    c->v.s[4] = LD32(c->r[13] + 308u);
    c->v.s[6] = LD32(c->r[13] + 312u);
    c->v.s[8] = LD32(c->r[13] + 316u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_c97a34:;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xc97a54u; f_cfcce8(c);
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c97a6c; }
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c98504; }
L_c97a6c:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->v.s[24] = 0x3f800000u;
    c->r[12] = 0x0u;
    c->r[6] = c->r[5];
    c->r[3] = 0x10u;
    c->v.f[26] = c->v.f[24] - c->v.f[16];
    c->r[8] = c->r[1] & 0x3u;
    c->r[1] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x100u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_c97aac:;
    c->r[9] = c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c97af8; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c97aec; }
L_c97acc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c97aec; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c97acc; }
    c->r[4] = 0x0u;
    goto L_c97af8;
L_c97aec:;
    c->r[4] = c->r[0];
    /* pld */
    /* pld */
L_c97af8:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[9] + 0x20u;
    c->r[14] = c->r[9] + 0x8u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[10] + c->r[1];
    c->r[0] = c->r[10] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[12]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[4]);
    ST32(c->r[13] + 200u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_c97cec; }
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 176u, c->v.s[6]);
    ST32(c->r[13] + 180u, c->v.s[4]);
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[12]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c97bb8; }
    c->r[5] = c->r[14];
    c->r[14] = 0xc97bacu; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
    c->r[14] = c->r[5];
    c->r[12] = 0x0u;
L_c97bb8:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->r[6] = c->r[13] + 0x190u;
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c97bf8; }
    c->v.s[0] = c->v.s[2];
    c->r[5] = c->r[14];
    c->r[14] = 0xc97bf0u; f_15efddc(c);
    c->r[14] = c->r[5];
    c->r[12] = 0x0u;
L_c97bf8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c97c14; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c97c3c;
L_c97c14:;
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 180u);
    c->v.s[6] = LD32(c->r[13] + 184u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c97c3c:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb4u;
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[12]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xb0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[6];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xc97cdcu; f_ea99ec(c);
    c->r[14] = c->r[5];
    c->r[12] = 0x0u;
    c->r[6] = c->r[0];
    c->r[3] = 0x10u;
L_c97cec:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_c984ec; }
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xf0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[5]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[3] = 0x10u;
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c984ec; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c97e5c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c97ddc; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_c97de0;
L_c97ddc:;
    c->r[4] = 0x0u;
L_c97de0:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c97e1c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[5] = c->r[14];
    c->r[8] = c->r[3];
    c->r[14] = 0xc97e08u; f_a82674(c);
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[5];
    c->r[12] = 0x0u;
L_c97e1c:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[7];
    if (COND_EQ) { goto L_c97e5c; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_c97e5c:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    c->r[4] = 0x10u;
    c->r[2] = c->r[9] + 0x60u;
    c->r[5] = c->r[9] + 0xd0u;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->r[5] = 0x0u;
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x70u;
    c->r[7] = c->r[13] + 0x190u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[3] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[8]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->r[14] = 0xc97fccu; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c98194; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_NE) { goto L_c982a4; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[4] = c->r[13] + 0x120u;
    c->r[2] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[10] + c->r[1];
    c->r[0] = c->r[10] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[10]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0xdu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xc980e8u; f_cfdecc(c);
    c->r[0] = c->r[13] + 0x190u;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[4];
    c->r[14] = 0xc980f8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[2] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    goto L_c98398;
L_c98194:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[4] = c->r[13] + 0x120u;
    c->r[1] = c->r[10] + c->r[1];
    c->r[0] = c->r[10] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xc0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[10]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    c->r[14] = 0xc98200u; f_cfd42c(c);
    c->r[0] = c->r[7];
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[4];
    c->r[14] = 0xc98210u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[2] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    goto L_c98390;
L_c982a4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[13] + 0x190u;
    if (COND_EQ) { c->r[1] = c->r[13] + 0xe0u; }
    if (COND_EQ) { c->r[2] = c->r[13] + 0x120u; }
    if (COND_NE) { c->r[1] = c->r[13] + 0x120u; }
    if (COND_NE) { c->r[2] = c->r[13] + 0xe0u; }
    c->r[14] = 0xc982c4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] & (c->r[0] >> 21);
    c->r[0] = c->r[2] & (c->r[0] >> 20);
    c->r[1] = c->r[10] + c->r[1];
    c->r[0] = c->r[10] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[6]);
L_c98390:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x0u;
L_c98398:;
    c->r[0] = 0x3f800000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[4]);
    ST32(c->r[13] + 280u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c98454; }
    c->v.s[6] = LD32(c->r[13] + 336u);
    c->v.s[8] = LD32(c->r[13] + 340u);
    c->v.s[10] = LD32(c->r[13] + 344u);
    c->v.s[12] = LD32(c->r[13] + 348u);
    c->v.f[30] = c->v.f[4] - c->v.f[8];
    c->v.f[17] = c->v.f[0] - c->v.f[6];
    c->v.f[28] = c->v.f[2] - c->v.f[10];
    c->v.f[18] = c->v.f[24] - c->v.f[12];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c98404; }
    c->r[14] = 0xc983fcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
    c->r[1] = 0x0u;
L_c98404:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c98424; }
    c->v.f[0] = c->v.f[24] / c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_c98424:;
    c->v.s[0] = LD32(c->r[13] + 272u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[17]);
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 276u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[30]);
    ST32(c->r[13] + 276u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 280u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 284u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[18]);
    ST32(c->r[13] + 284u, c->v.s[0]);
L_c98454:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[5] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0xc98470u; f_eaf17c(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0x50u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    c->v.s[0] = LD32(c->r[9] + 248u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (c->r[3] >> 12) & 0xfu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    c->r[1] = (c->r[1] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] + 0x18u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xacu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = c->r[13] + 0xe0u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc984e0u; f_e90380(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = 0x0u;
    c->r[3] = 0x10u;
L_c984ec:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c97aac; }
L_c984f4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_c98504:;
    c->v.s[24] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[10] = 0x0u;
    c->v.f[26] = c->v.f[24] - c->v.f[16];
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x100u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_c98530:;
    c->r[8] = c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c98580; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c98574; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
L_c98554:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c98574; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c98554; }
    c->r[4] = 0x0u;
    goto L_c98580;
L_c98574:;
    c->r[4] = c->r[0];
    /* pld */
    /* pld */
L_c98580:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[8] + 0x20u;
    c->r[12] = c->r[8] + 0x8u;
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[0] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[9] + c->r[1];
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[12]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[4]);
    ST32(c->r[13] + 200u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_c9876c; }
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->r[5] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 176u, c->v.s[6]);
    ST32(c->r[13] + 180u, c->v.s[4]);
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c98640; }
    c->r[6] = c->r[12];
    c->r[14] = 0xc98638u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
    c->r[12] = c->r[6];
L_c98640:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c98678; }
    c->v.s[0] = c->v.s[2];
    c->r[6] = c->r[12];
    c->r[14] = 0xc98674u; f_15efddc(c);
    c->r[12] = c->r[6];
L_c98678:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c98694; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c986bc;
L_c98694:;
    c->v.f[0] = c->v.f[24] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 180u);
    c->v.s[6] = LD32(c->r[13] + 184u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c986bc:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb4u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[5]); }
    c->r[5] = c->r[12];
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xb0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xc98760u; f_ea99ec(c);
    c->r[12] = c->r[5];
    c->r[5] = c->r[0];
    c->r[6] = 0x10u;
L_c9876c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c98ec4; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xf0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[5]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c98ec4; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[13] + 0x190u;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c988cc; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9885c; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_c98860;
L_c9885c:;
    c->r[4] = 0x0u;
L_c98860:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c98890; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[6] = c->r[12];
    c->r[14] = 0xc98884u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[6];
    c->r[6] = 0x10u;
L_c98890:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_c988cc; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[2] + 0xc4u; ST8(ea, c->r[0]); }
L_c988cc:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    c->r[7] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    c->r[4] = c->r[8] + 0xd0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[6] = c->r[12];
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    c->r[4] = 0x10u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[10];
    c->r[3] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[8]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->r[14] = 0xc98a38u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c98b80; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0xdu);
    if (COND_NE) { goto L_c98c94; }
    c->r[5] = c->r[6];
    c->r[2] = 0x10u;
    c->r[3] = 0x0u;
    c->r[6] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] & (c->r[0] >> 21);
    c->r[0] = c->r[2] & (c->r[0] >> 20);
    c->r[2] = c->r[13] + 0xc0u;
    c->r[1] = c->r[9] + c->r[1];
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xdu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[10]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x90u;
    c->r[14] = 0xc98b54u; f_cfdecc(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[6];
    c->r[14] = 0xc98b64u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[2] = LD32(c->r[13] + 200u);
    c->r[3] = c->r[5];
    c->r[5] = 0x0u;
    goto L_c98c14;
L_c98b80:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[4] = c->r[13] + 0x120u;
    c->r[1] = c->r[9] + c->r[1];
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[4];
    c->r[1] = c->r[13] + 0xc0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[10]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    c->r[14] = 0xc98becu; f_cfd42c(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[4];
    c->r[14] = 0xc98bfcu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 192u);
    c->v.s[4] = LD32(c->r[13] + 196u);
    c->v.s[2] = LD32(c->r[13] + 200u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[6];
L_c98c14:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    goto L_c98d80;
L_c98c94:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[10];
    if (COND_EQ) { c->r[1] = c->r[13] + 0xe0u; }
    if (COND_EQ) { c->r[2] = c->r[13] + 0x120u; }
    if (COND_NE) { c->r[1] = c->r[13] + 0x120u; }
    if (COND_NE) { c->r[2] = c->r[13] + 0xe0u; }
    c->r[14] = 0xc98cb4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[6];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] & (c->r[0] >> 21);
    c->r[0] = c->r[2] & (c->r[0] >> 20);
    c->r[1] = c->r[9] + c->r[1];
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[6]);
L_c98d80:;
    c->r[0] = 0x3f800000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[4]);
    ST32(c->r[13] + 280u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c98e44; }
    c->v.s[6] = LD32(c->r[13] + 336u);
    c->v.s[8] = LD32(c->r[13] + 340u);
    c->v.s[10] = LD32(c->r[13] + 344u);
    c->v.s[12] = LD32(c->r[13] + 348u);
    c->v.f[30] = c->v.f[4] - c->v.f[8];
    c->v.f[17] = c->v.f[0] - c->v.f[6];
    c->v.f[28] = c->v.f[2] - c->v.f[10];
    c->v.f[18] = c->v.f[24] - c->v.f[12];
    c->v.f[0] = c->v.f[30] * c->v.f[30];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c98df4; }
    c->r[5] = c->r[3];
    c->r[14] = 0xc98de8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[5];
    c->r[5] = 0x0u;
L_c98df4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c98e14; }
    c->v.f[0] = c->v.f[24] / c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_c98e14:;
    c->v.s[0] = LD32(c->r[13] + 272u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[17]);
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 276u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[30]);
    ST32(c->r[13] + 276u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 280u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 284u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[18]);
    ST32(c->r[13] + 284u, c->v.s[0]);
L_c98e44:;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8] + 0x50u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    c->v.s[0] = LD32(c->r[8] + 248u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (c->r[3] >> 12) & 0xfu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xacu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = c->r[13] + 0xe0u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc98ebcu; f_e90380(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x10u;
L_c98ec4:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c98530; }
    goto L_c984f4;
L_c98ed0:;
    c->v.s[22] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[26] = 0x34000000u;
    c->r[6] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[16];
    c->r[5] = c->r[0] & 0x3u;
    c->r[0] = c->r[8] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_c98ef0:;
    c->r[10] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c98f3c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c98f30; }
L_c98f10:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c98f30; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c98f10; }
    c->r[1] = 0x0u;
    goto L_c98f3c;
L_c98f30:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_c98f3c:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[3] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[9] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[4]);
    ST32(c->r[13] + 200u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_c9910c; }
    c->v.s[6] = LD32(c->r[13] + 208u);
    c->v.s[8] = LD32(c->r[13] + 212u);
    c->v.s[10] = LD32(c->r[13] + 216u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 176u, c->v.s[6]);
    ST32(c->r[13] + 180u, c->v.s[4]);
    ST32(c->r[13] + 184u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[6]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c98ff8; }
    c->r[14] = 0xc98ff4u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_c98ff8:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 184u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c99028; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc99028u; f_15efddc(c);
L_c99028:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c99044; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9906c;
L_c99044:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 180u);
    c->v.s[6] = LD32(c->r[13] + 184u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9906c:;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xb4u;
    c->r[4] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xb0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 400u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 404u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x160u;
    c->r[2] = c->r[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0xc99108u; f_ea99ec(c);
    c->r[12] = c->r[0];
L_c9910c:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_c9957c; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xf0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[6] = 0x0u;
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[12]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9957c; }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99268; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c991f8; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c991fc;
L_c991f8:;
    c->r[8] = 0x0u;
L_c991fc:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c99228; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[7] = c->r[12];
    c->r[14] = 0xc99220u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[7];
L_c99228:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_EQ) { goto L_c99268; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_c99268:;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[12]); }
    c->r[7] = 0x10u;
    c->r[6] = 0x0u;
    c->r[2] = c->r[10] + 0x60u;
    c->r[4] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 144u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 148u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[10] + 0xd0u;
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    c->r[6] = 0x0u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[3] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    ST32(c->r[13] + 116u, c->v.s[2]);
    ST32(c->r[13] + 120u, c->v.s[4]);
    c->r[14] = 0xc993d4u; f_c6d3b4(c);
    { uint32_t ea = c->r[13] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_c99508; }
    c->v.s[0] = LD32(c->r[13] + 336u);
    c->v.s[2] = LD32(c->r[13] + 340u);
    c->v.s[8] = c->r[2];
    c->v.s[10] = c->r[0];
    c->v.s[4] = LD32(c->r[13] + 344u);
    c->v.s[6] = LD32(c->r[13] + 348u);
    c->v.f[28] = c->v.f[8] - c->v.f[2];
    c->v.f[17] = c->v.f[10] - c->v.f[0];
    c->v.s[2] = c->r[1];
    c->v.f[18] = c->v.f[22] - c->v.f[6];
    c->v.f[30] = c->v.f[2] - c->v.f[4];
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c994b4; }
    c->r[14] = 0xc994b0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c994b4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c994d4; }
    c->v.f[0] = c->v.f[22] / c->v.f[2];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_c994d4:;
    c->v.s[0] = LD32(c->r[13] + 272u);
    c->r[4] = c->r[13] + 0x190u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[17]);
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 276u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[28]);
    ST32(c->r[13] + 276u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 280u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[30]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 284u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[18]);
    ST32(c->r[13] + 284u, c->v.s[0]);
L_c99508:;
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[10] + 0x50u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    c->v.s[0] = LD32(c->r[10] + 248u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = (c->r[3] >> 12) & 0xfu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[1] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x18u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xacu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[3] = c->r[13] + 0xe0u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc99578u; f_e90380(c);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[12] = v; }
L_c9957c:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c98ef0; }
    goto L_c984f4;
}
