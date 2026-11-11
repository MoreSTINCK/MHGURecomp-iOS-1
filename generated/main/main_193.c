#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_a82674(Cpu *c);
void f_a8c0c8(Cpu *c);
void f_c57e4c(Cpu *c);
void f_c57f14(Cpu *c);
void f_c6c268(Cpu *c);
void f_c74880(Cpu *c);
void f_c7491c(Cpu *c);
void f_ca0cdc(Cpu *c);
void f_ca130c(Cpu *c);
void f_cef1e4(Cpu *c);
void f_cef728(Cpu *c);
void f_cfcce8(Cpu *c);
void f_cfd42c(Cpu *c);
void f_dae520(Cpu *c);
void f_ea99ec(Cpu *c);
void f_15efddc(Cpu *c);
void f_c9df44(Cpu *restrict c) {
    FN_ENTER(0xc9df44u);
L_c9df44:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x3a0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[10] = c->r[1];
    c->r[1] = c->r[13] + 0x270u;
    c->r[2] = 0x0u;
    c->r[4] = c->r[0];
    c->r[14] = 0xc9df74u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c9ff7c; }
    c->r[0] = 0xd9ec24u;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xc9df90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[10];
    c->r[14] = 0xc9df9cu; f_dae520(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[14] = 0xc9dfb0u; f_cef1e4(c);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[10];
    c->r[14] = 0xc9dfc0u; f_c74880(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0xc9dfd0u; f_c7491c(c);
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4];
    c->r[2] = 0xf0u;
    c->r[3] = 0xf00u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[4] + 152u);
    c->r[4] = 0xf000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xfffc0000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] & (c->r[1] >> 12);
    c->r[3] = c->r[3] & (c->r[1] >> 16);
    c->r[6] = c->r[6] & c->r[4];
    c->r[4] = (c->r[1] >> 20) & 0xfu;
    c->r[6] = c->r[6] | c->r[4];
    c->r[2] = c->r[3] | c->r[2];
    c->r[3] = 0x10000u;
    c->r[3] = c->r[3] & (c->r[1] >> 12);
    c->r[3] = c->r[3] | c->r[6];
    c->r[6] = 0x20000u;
    c->r[1] = c->r[6] & (c->r[1] >> 12);
    c->r[1] = c->r[3] | c->r[1];
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd9b1c8u;
    { uint32_t ea = 0xc9e08cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_c9e0c8; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_c9e0c4; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
L_c9e0ac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9e0c8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c9e0ac; }
L_c9e0c4:;
    c->r[4] = 0x0u;
L_c9e0c8:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[13] + 0xf0u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[5]); }
    c->r[14] = 0xc9e0f8u; f_c57f14(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9e2bc; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 240u);
    c->v.s[2] = LD32(c->r[13] + 244u);
    c->v.s[4] = LD32(c->r[13] + 248u);
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 208u, c->v.s[6]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    ST32(c->r[13] + 216u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9e178; }
    c->r[14] = 0xc9e174u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9e178:;
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9e1a8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9e1a8u; f_15efddc(c);
L_c9e1a8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9e1c8; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9e1f4;
L_c9e1c8:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9e1f4:;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9e278; }
    { uint32_t ea = c->r[1] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 672u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 676u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 680u, c->v.s[0]);
    goto L_c9e298;
L_c9e278:;
    c->r[0] = 0xd9afd4u;
    { uint32_t ea = 0xc9e284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[0]); }
L_c9e298:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[2] = c->r[13] + 0x2a0u;
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x270u;
    c->r[14] = 0xc9e2b8u; f_ea99ec(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_c9e2bc:;
    c->r[0] = c->r[8] & 0x80u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9e33c; }
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[10];
    c->r[14] = 0xc9e2e0u; f_c57e4c(c);
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 156u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9e318; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9e318u; f_15efddc(c);
L_c9e318:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9e9e0; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_c9ea18;
L_c9e33c:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xf00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f934; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_c9ff7c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[2] = c->r[13] + 0x100u;
    c->r[8] = c->r[5] + 0xd0u;
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->r[10] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x2a0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0x40u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0x80u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_c9e3a0:;
    c->r[9] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9e3ec; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9e3e0; }
L_c9e3c0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[10] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9e3e0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9e3c0; }
    c->r[1] = 0x0u;
    goto L_c9e3ec;
L_c9e3e0:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_c9e3ec:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[10] = LD32(c->r[13] + 248u);
    ST32(c->r[13] + 224u, c->v.s[0]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 232u, c->v.s[4]);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 208u, c->v.s[6]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    ST32(c->r[13] + 216u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9e49c; }
    c->r[14] = 0xc9e498u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9e49c:;
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[9] + 0x8u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9e5c4; }
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9e4dc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9e4dcu; f_15efddc(c);
L_c9e4dc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9e4fc; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9e524;
L_c9e4fc:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9e524:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xd0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 672u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 676u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x270u;
    c->r[2] = c->r[13] + 0x2a0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 680u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xc9e5c0u; f_ea99ec(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_c9e5c4:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9e9d0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
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
    c->r[6] = c->r[13] + 0x100u;
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9e9d0; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9e724; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[8];
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9e6b8; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c9e6bc;
L_c9e6b8:;
    c->r[8] = 0x0u;
L_c9e6bc:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c9e6e0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[14] = 0xc9e6dcu; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9e6e0:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[6];
    c->r[6] = c->r[13] + 0x100u;
    if (COND_EQ) { goto L_c9e724; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_c9e724:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x10u;
    c->r[5] = 0x0u;
    c->r[2] = c->r[9] + 0x60u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x2a0u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->r[14] = 0xc9e824u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[3] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x248u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9e8b8u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_c9e9a0; }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9e9d0; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x2a0u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[9] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9e99cu; f_a8c0c8(c);
    goto L_c9e9d0;
L_c9e9a0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9e9d0u; f_ca130c(c);
L_c9e9d0:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c9e3a0; }
    goto L_c9ff7c;
L_c9e9e0:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 148u);
    c->v.s[6] = LD32(c->r[13] + 152u);
    c->v.s[8] = LD32(c->r[13] + 156u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_c9ea18:;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[0] & 0xfu;
    c->r[0] = c->r[13] + 0x80u;
    c->r[14] = 0xc9ea38u; f_cfcce8(c);
    { uint32_t ea = c->r[13] + 0x261u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f1ec; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_c9ff7c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x2a0u;
    c->v.f[24] = c->v.f[22] - c->v.f[18];
    c->r[10] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x80u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x40u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_c9eaa0:;
    c->r[8] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9eaec; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9eae0; }
L_c9eac0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[10] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9eae0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9eac0; }
    c->r[1] = 0x0u;
    goto L_c9eaec;
L_c9eae0:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_c9eaec:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[3] = 0x10u;
    c->r[2] = c->r[8] + 0x20u;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[10] = LD32(c->r[13] + 248u);
    ST32(c->r[13] + 224u, c->v.s[0]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 232u, c->v.s[4]);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 208u, c->v.s[6]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    ST32(c->r[13] + 216u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9eb9c; }
    c->r[14] = 0xc9eb98u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9eb9c:;
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = c->r[8] + 0x8u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9ecc8; }
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9ebdc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9ebdcu; f_15efddc(c);
L_c9ebdc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9ebf8; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9ec20;
L_c9ebf8:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9ec20:;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xd0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 672u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 676u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x270u;
    c->r[2] = c->r[13] + 0x2a0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 680u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xc9ecc4u; f_ea99ec(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_c9ecc8:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9f1d8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
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
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f1d8; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9ee18; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9edb4; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_c9edb8;
L_c9edb4:;
    c->r[9] = 0x0u;
L_c9edb8:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c9eddc; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xc9edd8u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9eddc:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_c9ee18; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0xc4u; ST8(ea, c->r[0]); }
L_c9ee18:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x10u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x2a0u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0x60u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->r[14] = 0xc9ef18u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9efc0; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9eff0; }
    c->r[7] = c->r[13] + 0x200u;
    c->r[0] = c->r[13] + 0x2a0u;
    c->r[2] = c->r[13] + 0x80u;
    c->r[1] = c->r[7];
    goto L_c9f000;
L_c9efc0:;
    c->r[6] = c->r[13] + 0x80u;
    c->r[3] = c->r[0] & 0xfu;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[13] + 0xc0u;
    c->r[0] = c->r[6];
    c->r[14] = 0xc9efd8u; f_cfd42c(c);
    c->r[7] = c->r[13] + 0x200u;
    c->r[0] = c->r[13] + 0x2a0u;
    c->r[2] = c->r[6];
    c->r[1] = c->r[7];
    goto L_c9f000;
L_c9eff0:;
    c->r[7] = c->r[13] + 0x200u;
    c->r[0] = c->r[13] + 0x2a0u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[7];
L_c9f000:;
    c->r[14] = 0xc9f004u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0x230u;
    c->r[9] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[8];
    c->r[2] = c->r[9];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x248u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9f0bcu; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_c9f1a4; }
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9f1d8; }
    c->r[2] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[4] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[13] + 0x2a0u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = c->r[13] + 0x2a0u;
    c->r[3] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2];
    c->r[0] = c->r[9];
    c->r[2] = 0x4u;
    c->r[14] = 0xc9f1a0u; f_a8c0c8(c);
    goto L_c9f1d8;
L_c9f1a4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[3] = c->r[9];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[9] = c->r[1];
    c->r[14] = 0xc9f1d8u; f_ca130c(c);
L_c9f1d8:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c9eaa0; }
    goto L_c9ff7c;
L_c9f1ec:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_c9ff7c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->v.f[24] = c->v.f[22] - c->v.f[18];
    c->r[10] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2a0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_c9f248:;
    c->r[8] = c->r[4];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9f294; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9f288; }
L_c9f268:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[10] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f288; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9f268; }
    c->r[4] = 0x0u;
    goto L_c9f294;
L_c9f288:;
    c->r[4] = c->r[0];
    /* pld */
    /* pld */
L_c9f294:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[8] + 0x20u;
    c->r[7] = c->r[8] + 0x8u;
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
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    ST32(c->r[13] + 224u, c->v.s[0]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f470; }
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[10] = LD32(c->r[13] + 248u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 208u, c->v.s[6]);
    ST32(c->r[13] + 212u, c->v.s[4]);
    ST32(c->r[13] + 216u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9f354; }
    c->r[14] = 0xc9f350u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9f354:;
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9f384; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9f384u; f_15efddc(c);
L_c9f384:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9f3a0; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9f3c8;
L_c9f3a0:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9f3c8:;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xd0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 672u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 676u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x270u;
    c->r[2] = c->r[13] + 0x2a0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 680u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xc9f46cu; f_ea99ec(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_c9f470:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9f928; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[6] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[6] - c->r[3];
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
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
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f928; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f5c4; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9f560; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_c9f564;
L_c9f560:;
    c->r[9] = 0x0u;
L_c9f564:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c9f588; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xc9f584u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9f588:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_c9f5c4; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0xc4u; ST8(ea, c->r[0]); }
L_c9f5c4:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[5] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    c->r[4] = c->r[13] + 0x2a0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0x60u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->r[14] = 0xc9f6c4u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9f770; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[13] + 0x200u;
    c->r[0] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[5]; }
    if (COND_EQ) { c->r[2] = c->r[13] + 0x80u; }
    if (COND_NE) { c->r[1] = c->r[13] + 0x80u; }
    if (COND_NE) { c->r[2] = c->r[5]; }
    goto L_c9f798;
L_c9f770:;
    c->r[6] = c->r[13] + 0x80u;
    c->r[3] = c->r[0] & 0xfu;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[13] + 0xc0u;
    c->r[0] = c->r[6];
    c->r[14] = 0xc9f788u; f_cfd42c(c);
    c->r[5] = c->r[13] + 0x200u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[1] = c->r[5];
L_c9f798:;
    c->r[14] = 0xc9f79cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0x100u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x248u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9f854u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9f928; }
    c->r[2] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[12] = c->r[9];
    c->r[9] = c->r[13] + 0x2a0u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[9];
    c->r[0] = c->r[12];
    c->r[9] = c->r[12];
    c->r[14] = 0xc9f928u; f_a8c0c8(c);
L_c9f928:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c9f248; }
    goto L_c9ff7c;
L_c9f934:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_c9ff7c; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[8] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->r[10] = c->r[0] & 0x3u;
    c->r[0] = c->r[5] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2a0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_c9f998:;
    c->r[9] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9f9e4; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9f9d8; }
L_c9f9b8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[10] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9f9d8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9f9b8; }
    c->r[1] = 0x0u;
    goto L_c9f9e4;
L_c9f9d8:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_c9f9e4:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    c->r[7] = c->r[9] + 0x8u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
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
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    ST32(c->r[13] + 224u, c->v.s[0]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[8]); }
    if (COND_EQ) { goto L_c9fbbc; }
    c->v.s[6] = LD32(c->r[13] + 240u);
    c->v.s[8] = LD32(c->r[13] + 244u);
    c->v.s[10] = LD32(c->r[13] + 248u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 208u, c->v.s[6]);
    ST32(c->r[13] + 212u, c->v.s[4]);
    ST32(c->r[13] + 216u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[8]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9faa0; }
    c->r[14] = 0xc9fa9cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9faa0:;
    c->v.s[2] = LD32(c->r[13] + 212u);
    c->v.s[0] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 216u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9fad0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9fad0u; f_15efddc(c);
L_c9fad0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9faec; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9fb14;
L_c9faec:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 208u);
    c->v.s[4] = LD32(c->r[13] + 212u);
    c->v.s[6] = LD32(c->r[13] + 216u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9fb14:;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[4]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xd0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 672u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 676u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x270u;
    c->r[2] = c->r[13] + 0x2a0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 680u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xc9fbb8u; f_ea99ec(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_c9fbbc:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9ff70; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[4] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[4] - c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[4] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[4] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[4] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[4] - c->r[3];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9ff70; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9fd10; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9fcac; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_c9fcb0;
L_c9fcac:;
    c->r[8] = 0x0u;
L_c9fcb0:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c9fcd4; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[14] = 0xc9fcd0u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9fcd4:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c9fd10; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_c9fd10:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[4] = 0x0u;
    c->r[2] = c->r[9] + 0x60u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x2a0u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    c->r[14] = 0xc9fe10u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x2a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xe0u;
    c->r[3] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[13] + 0x100u;
    c->r[3] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x248u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9fea4u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x1ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9ff70; }
    c->r[2] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x2a0u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[9] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9ff70u; f_a8c0c8(c);
L_c9ff70:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_c9f998; }
L_c9ff7c:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
