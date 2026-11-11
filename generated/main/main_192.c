#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_a82674(Cpu *c);
void f_a8c0c8(Cpu *c);
void f_c57e4c(Cpu *c);
void f_c57ee0(Cpu *c);
void f_c57f14(Cpu *c);
void f_c58d7c(Cpu *c);
void f_c58e70(Cpu *c);
void f_c58fa8(Cpu *c);
void f_c59268(Cpu *c);
void f_c59ce4(Cpu *c);
void f_c5a384(Cpu *c);
void f_c5b224(Cpu *c);
void f_c5b2b8(Cpu *c);
void f_c5b658(Cpu *c);
void f_c5b880(Cpu *c);
void f_c5ca24(Cpu *c);
void f_c62db8(Cpu *c);
void f_c64670(Cpu *c);
void f_c67b10(Cpu *c);
void f_c69104(Cpu *c);
void f_c6a2a4(Cpu *c);
void f_c6a2cc(Cpu *c);
void f_c6a2d0(Cpu *c);
void f_c6a434(Cpu *c);
void f_c6adac(Cpu *c);
void f_c6b3c0(Cpu *c);
void f_c6b59c(Cpu *c);
void f_c6b824(Cpu *c);
void f_c6bc0c(Cpu *c);
void f_c6be40(Cpu *c);
void f_c6c268(Cpu *c);
void f_c6cab8(Cpu *c);
void f_c74838(Cpu *c);
void f_c74880(Cpu *c);
void f_c7491c(Cpu *c);
void f_c99a38(Cpu *c);
void f_c99f40(Cpu *c);
void f_c9a280(Cpu *c);
void f_c9a6bc(Cpu *c);
void f_c9a800(Cpu *c);
void f_c9ada0(Cpu *c);
void f_c9b41c(Cpu *c);
void f_c9b79c(Cpu *c);
void f_c9c1f4(Cpu *c);
void f_c9c6ac(Cpu *c);
void f_c9df44(Cpu *c);
void f_ca0cdc(Cpu *c);
void f_ca130c(Cpu *c);
void f_cec454(Cpu *c);
void f_ced74c(Cpu *c);
void f_cef1e4(Cpu *c);
void f_cef538(Cpu *c);
void f_cef728(Cpu *c);
void f_cf7958(Cpu *c);
void f_cf938c(Cpu *c);
void f_cfb2bc(Cpu *c);
void f_cfcce8(Cpu *c);
void f_cfd42c(Cpu *c);
void f_d49090(Cpu *c);
void f_d93b70(Cpu *c);
void f_dae520(Cpu *c);
void f_e90094(Cpu *c);
void f_ea99ec(Cpu *c);
void f_eaf088(Cpu *c);
void f_15efddc(Cpu *c);
void f_c9958c(Cpu *restrict c) {
    FN_ENTER(0xc9958cu);
L_c9958c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x8cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[2];
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xc995acu; f_c5ca24(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_c99a20; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc995ccu; f_c99a38(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1fe0u;
    c->r[0] = c->r[2] & (c->r[0] >> 19);
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] >> 20);
    c->r[0] = (c->r[0] & 0xffff0fffu) | ((c->r[1] << 12) & 0xf000u);
    { uint32_t ea = c->r[2] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[9] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc99628u; f_c6a2a4(c);
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_NE) { c->r[7] = c->r[9] + (c->r[0] >> 16); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_c996b0; }
    c->r[1] = 0xda9488u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xc99654u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xc9966cu; f_ced74c(c);
    c->r[6] = (uint32_t)(uint8_t)(c->r[10]);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[10] & 0x100u; }
    c->r[3] = c->r[6];
    c->r[14] = 0xc9968cu; f_cf938c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->r[1] = c->r[1] | 0x20000u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x6u; ST16(ea, c->r[6]); }
    goto L_c996c0;
L_c996b0:;
    c->r[0] = c->r[13] + 0x20u;
    c->r[1] = c->r[5];
    c->r[14] = 0xc996bcu; f_c6be40(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c996c0:;
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[2] + 0x40u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 12);
    c->r[1] = c->r[1] | (c->r[2] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99778; }
    c->v.s[0] = 0x43800000u;
    c->v.s[2] = LD32(c->r[8] + 32u);
    c->r[2] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[2], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_c99778; }
    c->r[1] = c->v.s[0];
    c->r[3] = 0x1u;
    c->r[7] = 0xaau;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9975c; }
    c->r[7] = 0x154u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99778; }
    c->r[2] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[0];
    c->r[7] = ~0xff0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8) & 0xffu;
    c->r[6] = c->r[2] | c->r[3];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->r[3] = 0x10u;
    c->r[0] = c->r[6];
    goto L_c99768;
L_c9975c:;
    c->r[2] = (c->r[0] >> 24);
    c->r[7] = ~0xff000000u;
    c->r[3] = 0x18u;
L_c99768:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[7] & c->r[0];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[3]);
L_c99778:;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc99790u; f_c6a2d0(c);
    c->r[6] = 0x0u;
    c->r[0] = 0x132u;
    c->r[1] = c->r[9] + 0xa8u;
    c->r[2] = c->r[9] + 0x90u;
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc997ccu; f_c6b59c(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[4] + 0xd0u;
    c->r[8] = c->r[9] + 0x130u;
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_c99828; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_c99828:;
    { uint32_t ea = c->r[8]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + 0xd0u;
    c->r[3] = c->r[9] + 0xe8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc99844u; f_c6adac(c);
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xdau; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD16(ea); c->r[10] = ea; c->r[2] = v; }
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[6] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c99890; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc99890u; f_15efddc(c);
L_c99890:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c998ac; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_c998d8;
L_c998ac:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c998d8:;
    c->r[3] = 0x0u;
    c->r[12] = c->r[4] + 0x84u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x94u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c99910; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9990cu; f_c99f40(c);
    goto L_c99924;
L_c99910:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[0] = c->r[0] & 0xfffff0ffu;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
L_c99924:;
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c999a0; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0xd0u;
    c->r[2] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[3] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + (c->r[2] << 4);
    c->v.s[0] = LD32(c->r[3] + 64u);
    { uint32_t ea = c->r[9] + 0x3eu; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = c->r[0] + 0x80u;
    c->r[3] = c->r[0] + 0x60u;
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[5];
    c->r[14] = 0xc9997cu; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[13] + 0x20u;
    if (COND_NE) { c->r[6] = c->r[9] + c->r[6]; }
    { uint32_t r = c->r[1] * c->r[0] + c->r[7]; c->r[0] = r; }
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0xc999a0u; f_cec454(c);
L_c999a0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99a0c; }
    { uint32_t ea = c->r[10] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xf0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0xc999f4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_c99a0c:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc99a18u; f_c74838(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 26) & 0x1u;
L_c99a20:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_c99a38(Cpu *restrict c) {
    FN_ENTER(0xc99a38u);
L_c99a38:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->r[0];
    c->r[11] = c->r[1];
    c->r[4] = 0x100000u;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[7];
    { uint32_t ea = c->r[7] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[2] = c->r[7] + 0x40u;
    { uint32_t ea = c->r[10] + 0x130u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    if (COND_NE) { c->r[6] = c->r[7] + (uint32_t)(uint16_t)(c->r[0]); }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[9] = c->r[7] + c->r[9]; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_c99b14; }
    c->r[8] = c->r[6];
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x100000u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD16(ea); c->r[8] = ea; c->r[4] = v; }
    if (COND_NE) { { uint32_t r = c->r[0] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    c->r[1] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c99b2c; }
    c->r[0] = 0xda9014u;
    c->r[1] = c->r[1] & 0xfffu;
    { uint32_t ea = 0xc99accu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->v.s[16] = LD32(c->r[0]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c99b74; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[11];
    c->r[14] = 0xc99af0u; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xc99b00u; f_cf7958(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c99c04; }
    c->v.s[0] = 0x0u;
    goto L_c99c14;
L_c99b14:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint64_t t0 = c->v.d[0] | c->v.d[0]; c->v.d[1] = t0; }
    c->v.s[16] = c->v.s[0];
    goto L_c99c8c;
L_c99b2c:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[3], (c->r[2] >> 16));
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    if (COND_EQ) { goto L_c99b64; }
    c->r[3] = 0xda8f84u;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[2] = (c->r[2] >> 16);
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = 0xc99b58u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = udiv32(c->r[1], c->r[2]);
    c->r[1] = c->r[1] - c->r[3] * c->r[2];
    c->r[0] = c->r[1] + c->r[0];
L_c99b64:;
    c->v.s[0] = c->r[0];
    c->v.s[16] = 0x0u;
    c->v.f[0] = (float)c->v.s[0];
    goto L_c99c34;
L_c99b74:;
    c->r[0] = c->r[2] + 0x2u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (uint32_t)(uint16_t)(c->r[1]);
    if (COND_EQ) { goto L_c99bb4; }
    c->r[2] = 0xda8f34u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = (c->r[1] >> 16);
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = 0xc99ba8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    c->r[6] = c->r[0] + c->r[6];
L_c99bb4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[11];
    c->r[14] = 0xc99bc4u; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xc99bd4u; f_cf7958(c);
    c->v.s[2] = 0x0u;
    c->v.s[4] = c->r[6];
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[2] = t0; c->v.f[3] = t1; }
    c->v.f[0] = (float)c->v.s[4];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_c99c38; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[4] | 0x1u;
    c->r[0] = c->r[0] | 0x80000u;
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    goto L_c99c38;
L_c99c04:;
    c->v.s[2] = LD32(c->r[6] + 76u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[2]; }
L_c99c14:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_c99c34; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x80000u;
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8001u;
    c->r[4] = c->r[4] | c->r[0];
L_c99c34:;
    c->v.s[2] = LD32(c->r[6] + 72u);
L_c99c38:;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], (c->r[2] >> 24));
    c->r[0] = (c->r[2] >> 16) & 0xffu;
    if (COND_EQ) { goto L_c99c88; }
    c->r[3] = 0xda8e64u;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[2] = (c->r[2] >> 24);
    c->r[4] = 0x100000u;
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = 0xc99c78u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = udiv32(c->r[1], c->r[2]);
    c->r[1] = c->r[1] - c->r[3] * c->r[2];
    c->r[0] = c->r[1] + c->r[0];
    goto L_c99c8c;
L_c99c88:;
    c->r[4] = 0x100000u;
L_c99c8c:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 12u, c->v.s[0]);
    ST32(c->r[13] + 16u, c->v.s[2]);
    ST32(c->r[13] + 20u, c->v.s[16]);
    c->r[2] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xau; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11];
    c->r[14] = 0xc99cb4u; f_eaf088(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[7] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99cf0; }
    c->r[1] = 0xda8e04u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc99cd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[0] = c->r[1] & (c->r[0] << 2);
    c->r[6] = c->r[0] | c->r[6];
L_c99cf0:;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[11] + 0xceu; ST16(ea, c->r[6]); }
    if (COND_EQ) { goto L_c99d08; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99d64; }
L_c99d08:;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], (c->r[2] >> 22));
    c->r[0] = (c->r[2] >> 12) & 0x3ffu;
    if (COND_EQ) { goto L_c99d4c; }
    c->r[3] = 0xda8d9cu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[2] = (c->r[2] >> 22);
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = 0xc99d40u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = udiv32(c->r[1], c->r[2]);
    c->r[1] = c->r[1] - c->r[3] * c->r[2];
    c->r[0] = c->r[1] + c->r[0];
L_c99d4c:;
    c->v.s[0] = c->r[0];
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[18] = (float)c->v.s[0];
    if (COND_NE) { goto L_c99e78; }
    c->v.s[16] = 0x0u;
    goto L_c99e88;
L_c99d64:;
    c->r[2] = 0xda8d6cu;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xc99d74u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] & 0xfffu;
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[16] = LD32(c->r[1]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c99dcc; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[11];
    c->r[14] = 0xc99da4u; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xc99db4u; f_cf7958(c);
    c->v.s[18] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c99e30; }
    c->v.s[18] = 0x0u;
    goto L_c99e40;
L_c99dcc:;
    c->r[1] = c->r[0] + 0x2u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x100u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], (c->r[2] >> 22));
    c->r[0] = (c->r[2] >> 12) & 0x3ffu;
    if (COND_EQ) { goto L_c99e0c; }
    c->r[3] = 0xda8cdcu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[2] = (c->r[2] >> 22);
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = 0xc99e00u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = udiv32(c->r[1], c->r[2]);
    c->r[1] = c->r[1] - c->r[3] * c->r[2];
    c->r[0] = c->r[1] + c->r[0];
L_c99e0c:;
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[18] = (float)c->v.s[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_c99e58; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0xcu;
    c->r[0] = c->r[0] | 0x2000000u;
    goto L_c99e84;
L_c99e30:;
    c->v.s[0] = LD32(c->r[7] + 260u);
    vfp_cmp_f(c, c->v.f[18], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[18] = c->v.s[0]; }
L_c99e40:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_c99e68; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1000000u;
    goto L_c99e84;
L_c99e58:;
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c99ef0; }
    c->v.s[16] = 0x0u;
    goto L_c99e88;
L_c99e68:;
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c99e78; }
    c->v.s[16] = 0x0u;
    goto L_c99e88;
L_c99e78:;
    c->v.s[16] = LD32(c->r[7] + 264u);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c99e80:;
    c->r[0] = c->r[0] | 0xcu;
L_c99e84:;
    { uint32_t ea = c->r[11] + 0x10u; ST32(ea, c->r[0]); }
L_c99e88:;
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[18]);
    c->r[1] = c->v.s[0];
    c->r[14] = 0xc99e9cu; f_d49090(c);
    (void)f_subs(c, c->r[8], 0x0u);
    ST32(c->r[11] + 264u, c->v.s[18]);
    ST32(c->r[11] + 268u, c->v.s[16]);
    { uint32_t ea = c->r[11] + 0x100u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_c99ec4; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1000000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c99ee0; }
L_c99ec4:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] | 0x8000000u;
L_c99ecc:;
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_c99ee0:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[1] = c->r[1] & 0xf7ffffffu;
    goto L_c99ecc;
L_c99ef0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[9];
    c->r[2] = c->r[11];
    c->r[14] = 0xc99f00u; f_ced74c(c);
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xc99f10u; f_cf7958(c);
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[0];
    goto L_c99e80;
}
void f_c99f40(Cpu *restrict c) {
    FN_ENTER(0xc99f40u);
L_c99f40:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x134u;
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[0] = c->r[4];
    c->r[3] = c->r[6];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = c->r[7] + c->r[2]; }
    c->r[14] = 0xc99f74u; f_c6b824(c);
    c->r[1] = c->r[7] + 0x130u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c99f8c; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
L_c99f8c:;
    c->r[0] = c->r[9];
    c->r[5] = 0x0u;
    c->r[12] = ~0xf00u;
    c->r[14] = 0xffffu;
    { uint32_t ea = c->r[0] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] & 0xffff0000u;
    c->r[3] = c->r[3] & 0xfffff3ffu;
    c->r[6] = c->r[2] | c->r[6];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a13c; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x200000u;
    c->r[3] = c->r[3] & c->r[12];
    c->r[6] = c->r[6] & c->r[14];
    c->r[8] = c->r[2] + (c->r[8] << 16);
    c->r[2] = 0xc00u;
    c->r[6] = c->r[6] | c->r[8];
    c->r[2] = c->r[2] & (c->r[5] >> 18);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[2] = c->r[3] | c->r[2];
    c->r[3] = 0x300u;
    c->r[3] = c->r[3] & (c->r[5] >> 16);
    c->r[2] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xf000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a148; }
    c->r[3] = 0xda8ac0u;
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = 0xc9a020u + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0xda8aa0u;
    c->r[0] = c->r[7] + c->r[2];
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = c->r[9] + (c->r[8] >> 16);
    c->r[0] = c->r[0] + 0x20u;
    if (COND_EQ) { c->r[0] = 0x20u; }
    c->r[2] = c->r[2] + 0x1cu;
    { uint32_t ea = 0xc9a040u + c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x0u;
L_c9a040:;
    { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[12]); }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] & 0xfffu;
    c->v.s[0] = LD32(c->r[0] - 28u);
    c->v.s[2] = LD32(c->r[0] - 32u);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->v.s[4] = LD32(c->r[7]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[0]);
    ST32(c->r[2] - 20u, c->v.s[2]);
    ST32(c->r[2] - 28u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] & 0xfffu;
    c->v.s[0] = LD32(c->r[0] - 16u);
    c->v.s[2] = LD32(c->r[0] - 12u);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->v.s[4] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[2] - 12u, c->v.s[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_NE) { { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_NE) { c->r[7] = c->r[7] | 0x800u; }
    if (COND_NE) { { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[7]); } }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] & 0xfffu;
    c->v.s[0] = LD32(c->r[0] - 24u);
    c->v.s[2] = LD32(c->r[0] - 20u);
    c->r[7] = c->r[5] + (c->r[7] << 2);
    c->v.s[4] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[2] - 16u, c->v.s[0]);
    ST32(c->r[2] - 24u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[7] & 0xfffu;
    c->v.s[0] = LD32(c->r[0] - 8u);
    c->v.s[2] = LD32(c->r[0] - 4u);
    c->r[0] = c->r[0] + 0x30u;
    c->r[7] = c->r[5] + (c->r[7] << 2);
    c->v.s[4] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[2] - 8u, c->v.s[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_NE) { { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[7] = v; } }
    if (COND_NE) { c->r[7] = c->r[7] | 0x1000u; }
    if (COND_NE) { { uint32_t ea = c->r[2] - 0x4u; ST32(ea, c->r[7]); } }
    c->r[2] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[1] + 0xbu; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0xfu;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_CC) { goto L_c9a040; }
    goto L_c9a148;
L_c9a13c:;
    c->r[1] = c->r[6] & c->r[14];
    c->r[2] = c->r[3] & c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_c9a148:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9a154(Cpu *restrict c) {
    FN_ENTER(0xc9a154u);
L_c9a154:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[14] = 0xc9a164u; f_c62db8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c9a274; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9a1f4; }
    c->r[6] = c->r[8] + 0xd0u;
L_c9a180:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9a1a0; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_c9a1a0:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xc9a1acu; f_c9a280(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c9a1bc; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_c9a1cc;
L_c9a1bc:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xc9a1c8u; f_c5b224(c);
    c->r[5] = c->r[0];
L_c9a1cc:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[14] = c->r[6] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = c->r[0] + 0x10000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    if (COND_NE) { goto L_c9a180; }
L_c9a1f4:;
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a254; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9a254; }
L_c9a20c:;
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x50u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0xf0u;
    c->r[1] = c->r[8];
    c->r[3] = 0x1u;
    c->pc = c->r[7]; c->r[14] = 0xc9a23cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_c9a20c; }
L_c9a254:;
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9a274; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[8]; }
    if (COND_NE) { c->r[14] = 0xc9a274u; f_c9a6bc(c); }
L_c9a274:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9a280(Cpu *restrict c) {
    FN_ENTER(0xc9a280u);
L_c9a280:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x20u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x8000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a2c4; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9a2b8u; f_c9a800(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c9a6a4; }
L_c9a2c4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9a2d0u; f_c6a2cc(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a330; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0xc9a304u; f_ced74c(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x102u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0xc9a31cu; f_cf938c(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
L_c9a330:;
    { uint32_t r = c->r[7] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a350; }
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    goto L_c9a438;
L_c9a350:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[1] = (c->r[2] >> 12);
    c->r[2] = c->r[1] | (c->r[3] << 20);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a400; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->v.s[0] = 0x43800000u;
    c->r[2] = c->r[2] & 0xfu;
    (void)f_subs(c, c->r[2], 0x8u);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t r = c->r[3] * c->r[0] + c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[12] + c->r[0];
    c->r[12] = (c->r[9] >> 24);
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_c9a424; }
    c->r[3] = c->v.s[0];
    c->r[7] = 0x1u;
    c->r[0] = 0xaau;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[7], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a408; }
    c->r[0] = 0x154u;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[7], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a424; }
    c->r[0] = (c->r[1] >> 8) & 0xffu;
    c->r[2] = c->r[1];
    { uint32_t r = c->r[3] * c->r[0]; c->r[0] = r; }
    c->r[2] = c->r[2] & 0xffff0000u;
    c->r[0] = c->r[0] & 0xff00u;
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[1] >> 16) & 0xffu;
    c->r[14] = c->r[0] | c->r[2];
    c->r[2] = ~0xff0000u;
    c->r[0] = 0x10u;
    c->r[1] = c->r[14];
    goto L_c9a414;
L_c9a400:;
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[12] = v; }
    goto L_c9a424;
L_c9a408:;
    c->r[7] = (c->r[1] >> 24);
    c->r[2] = ~0xff000000u;
    c->r[0] = 0x18u;
L_c9a414:;
    c->r[1] = c->r[2] & c->r[1];
    { uint32_t r = c->r[7] * c->r[3]; c->r[2] = r; }
    c->r[2] = (c->r[2] >> 8) & 0xffu;
    c->r[1] = c->r[1] | sh_lsl(c->r[2], c->r[0]);
L_c9a424:;
    c->r[0] = c->r[12] & 0x1u;
    c->r[6] = c->r[6] | 0x2u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
L_c9a438:;
    c->r[0] = 0x100u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    { uint32_t r = c->r[6] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a468; }
    c->v.s[0] = 0x0u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9a458u; f_c6a434(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c9a6a4; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
L_c9a468:;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a504; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[0] = 0x10u;
    c->r[7] = c->r[4] + 0xd0u;
    c->v.s[0] = LD32(c->r[4] + 272u);
    c->v.s[2] = LD32(c->r[4] + 276u);
    c->v.s[4] = LD32(c->r[4] + 280u);
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[0] & (c->r[3] >> 21);
    c->r[0] = c->r[0] & (c->r[3] >> 20);
    c->r[1] = c->r[7] + c->r[1];
    c->r[0] = c->r[7] + c->r[0];
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    ST32(c->r[0], c->v.s[0]);
    ST32(c->r[0] + 4u, c->v.s[2]);
    ST32(c->r[0] + 8u, c->v.s[4]);
    if (COND_EQ) { goto L_c9a580; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 272u);
    c->v.s[2] = LD32(c->r[0] + 192u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[4] + 272u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 276u);
    c->v.s[2] = LD32(c->r[0] + 196u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[4] + 276u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[4] + 280u);
    c->v.s[2] = LD32(c->r[0] + 200u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[4] + 280u, c->v.s[0]);
    goto L_c9a580;
L_c9a504:;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0xc9a52cu; f_ced74c(c);
    c->r[3] = c->r[4] + 0x110u;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[3] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xc9a550u; f_cfb2bc(c);
    { uint32_t ea = c->r[8] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
L_c9a580:;
    c->r[0] = 0x400u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x200000u;
    { uint32_t r = c->r[6] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a5b0; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x130u;
    c->v.s[0] = LD32(c->r[0] + 280u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9a5acu; f_c6b3c0(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
L_c9a5b0:;
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xdau; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[6] = c->r[0] + c->r[1];
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9a5f8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9a5f8u; f_15efddc(c);
L_c9a5f8:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9a614; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    goto L_c9a640;
L_c9a614:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9a640:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x10u;
    c->r[12] = 0x0u;
    c->r[3] = c->r[6] & (c->r[7] >> 20);
    c->r[3] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[3] + 0x80u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[3] + 0x84u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x110u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x43u; uint32_t v = LD8(ea); c->r[3] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[3] & 0x20u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_c9a68c; }
    c->r[3] = c->r[6] & (c->r[7] >> 21);
    c->r[3] = c->r[4] + c->r[3];
    { uint32_t ea = c->r[3] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[3] + 0x84u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[12]); }
L_c9a68c:;
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[5]; }
    if (COND_NE) { c->r[1] = c->r[4]; }
    if (COND_NE) { c->r[14] = 0xc9a6a4u; f_c9ada0(c); }
L_c9a6a4:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9a6bc(Cpu *restrict c) {
    FN_ENTER(0xc9a6bcu);
L_c9a6bc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x60u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_c9a7f8; }
    c->r[7] = c->r[4] + 0xd0u;
    c->r[5] = 0x0u;
    c->r[9] = c->r[13] + 0x10u;
    c->r[8] = c->r[13] + 0x20u;
L_c9a6ec:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9a70c; }
    /* pld */
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_c9a70c:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 24) & 0x1u;
    c->r[2] = c->r[6] + (c->r[1] << 2);
    c->r[1] = c->r[6] + (c->r[1] << 4);
    c->v.s[6] = LD32(c->r[2] + 64u);
    c->v.s[0] = LD32(c->r[1] + 208u);
    c->v.s[2] = LD32(c->r[1] + 212u);
    c->v.s[4] = LD32(c->r[1] + 216u);
    c->r[2] = c->r[1] + 0x80u;
    c->r[3] = c->r[1] + 0x60u;
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    ST32(c->r[13] + 16u, c->v.s[0]);
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 20u, c->v.s[2]);
    ST32(c->r[13] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[9]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0xc9a764u; f_c6cab8(c);
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.s[14] = LD32(c->r[13] + 52u);
    c->v.s[0] = LD32(c->r[13] + 32u);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->v.s[6] = LD32(c->r[13] + 48u);
    c->v.s[1] = LD32(c->r[13] + 56u);
    c->v.s[3] = LD32(c->r[13] + 64u);
    c->v.s[5] = LD32(c->r[13] + 68u);
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[6] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->r[1] = c->r[1] & 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.f[14] = c->v.f[10] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 72u);
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[5]); }
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[0] = c->v.f[10] * c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[4]);
    ST32(c->r[0] + 16u, c->v.s[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[2]);
    ST32(c->r[0] + 20u, c->v.s[14]);
    ST32(c->r[0] + 24u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_c9a6ec; }
L_c9a7f8:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9a800(Cpu *restrict c) {
    FN_ENTER(0xc9a800u);
L_c9a800:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9a87c; }
    c->r[1] = 0x138u;
    c->r[5] = c->r[4] + 0xb0u;
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[7] = c->r[10] + c->r[7]; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_c9a85c; }
    c->r[0] = c->r[0] & 0xfff7ffffu;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] & 0xfffffffeu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_c9a85c:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a884; }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[3] = (c->r[2] >> 16);
L_c9a86c:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9aa80; }
L_c9a874:;
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c9ab2c;
L_c9a87c:;
    c->r[8] = c->r[0] & 0x4u;
    goto L_c9ab40;
L_c9a884:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[10] + c->r[6]; }
    c->r[1] = c->r[6];
    c->r[14] = 0xc9a8a4u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 200u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xc9a8b4u; f_cf7958(c);
    { uint32_t sc = 0; uint32_t r = c->r[11] & 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a8d0; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9a940; }
    c->v.s[0] = 0x0u;
    goto L_c9a950;
L_c9a8d0:;
    c->v.s[2] = 0x0u;
    { float t0 = nftz(vmax_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmax_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    ST32(c->r[4] + 188u, c->v.s[0]);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a86c; }
    c->v.s[2] = LD32(c->r[4] + 184u);
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a9b0; }
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[2] = c->r[0];
    ST32(c->r[4] + 184u, c->v.s[0]);
    c->v.f[2] = (float)c->v.s[2];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_c9a86c; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9aa5c; }
    c->r[3] = (c->r[2] >> 16);
    c->v.s[0] = 0x3f7fff58u;
    c->r[0] = 0x0u;
    c->v.s[2] = c->r[3];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 184u, c->v.s[0]);
    goto L_c9a9d4;
L_c9a940:;
    c->v.s[2] = LD32(c->r[7] + 76u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.d[0] = c->v.d[1]; }
L_c9a950:;
    ST32(c->r[4] + 184u, c->v.s[0]);
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a98c; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9a9e0; }
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9aa0c; }
    c->r[0] = 0x0u;
    c->r[3] = (c->r[2] >> 16);
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a874; }
    goto L_c9aa80;
L_c9a98c:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[2] = c->r[0];
    vfp_mrs_flags(c);
    c->v.f[2] = (float)c->v.s[2];
    if (COND_PL) { goto L_c9a9f4; }
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->r[3] = (c->r[2] >> 16);
    goto L_c9aa74;
L_c9a9b0:;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    ST32(c->r[4] + 184u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9a86c; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9aa64; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
L_c9a9d4:;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a86c; }
    goto L_c9ac14;
L_c9a9e0:;
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9aa34; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    goto L_c9ac14;
L_c9a9f4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->r[3] = (c->r[2] >> 16);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_c9a86c; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    goto L_c9aa74;
L_c9aa0c:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->r[3] = (c->r[2] >> 16);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_c9a86c; }
    c->v.s[0] = 0x3f7fff58u;
    c->v.s[2] = c->r[3];
    goto L_c9aa6c;
L_c9aa34:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_c9acf4; }
    c->r[3] = (c->r[2] >> 16);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a874; }
    goto L_c9aa80;
L_c9aa5c:;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    goto L_c9aa74;
L_c9aa64:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[2] = c->r[0];
L_c9aa6c:;
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
L_c9aa74:;
    ST32(c->r[4] + 184u, c->v.s[0]);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9a874; }
L_c9aa80:;
    c->v.s[0] = LD32(c->r[4] + 184u);
    c->v.s[2] = LD32(c->r[4] + 188u);
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9aadc; }
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[2] = c->r[0];
    ST32(c->r[4] + 184u, c->v.s[0]);
    c->v.f[2] = (float)c->v.s[2];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_c9ab28; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ab0c; }
    c->v.s[2] = c->r[3];
    c->v.s[0] = 0x3f7fff58u;
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 184u, c->v.s[0]);
    if (COND_EQ) { goto L_c9ab28; }
    goto L_c9ac14;
L_c9aadc:;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    ST32(c->r[4] + 184u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9ab28; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ab14; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c9ab2c; }
    goto L_c9ac14;
L_c9ab0c:;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    goto L_c9ab24;
L_c9ab14:;
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
L_c9ab24:;
    ST32(c->r[4] + 184u, c->v.s[0]);
L_c9ab28:;
    c->r[0] = c->v.s[0];
L_c9ab2c:;
    c->r[1] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x1u;
    c->r[1] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0xc0u; ST32(ea, c->r[0]); }
L_c9ab40:;
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[1] = 0xfff3u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xfcff0000u; }
    if (COND_NE) { c->r[0] = c->r[0] & c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); } }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ab8c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9abd0; }
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[16] = LD32(c->r[4] + 264u);
    { uint32_t ea = c->r[4] + 0xceu; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[8] = v; }
    if (COND_NE) { goto L_c9ac20; }
    c->v.s[0] = LD32(c->r[4] + 268u);
    goto L_c9ac5c;
L_c9ab8c:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[10] + c->r[6]; }
    c->r[1] = c->r[6];
    c->r[14] = 0xc9aba8u; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 268u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xc9abb8u; f_cf7958(c);
    c->v.s[16] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9abd8; }
    c->v.s[16] = 0x0u;
    goto L_c9abe8;
L_c9abd0:;
    c->r[0] = c->r[0] & 0xfffffffbu;
    goto L_c9ac0c;
L_c9abd8:;
    c->v.s[0] = LD32(c->r[10] + 260u);
    vfp_cmp_f(c, c->v.f[16], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[16] = c->v.s[0]; }
L_c9abe8:;
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[1] = c->v.s[0];
L_c9abf8:;
    c->r[14] = 0xc9abfcu; f_d49090(c);
    ST32(c->r[4] + 264u, c->v.s[16]);
    { uint32_t ea = c->r[4] + 0x100u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
L_c9ac0c:;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_c9ac10:;
    c->r[0] = 0x1u;
L_c9ac14:;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_c9ac20:;
    { uint32_t ea = c->r[10] + 0x44u; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[2] = c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { c->r[6] = c->r[10] + c->r[6]; }
    c->r[1] = c->r[6];
    c->r[14] = 0xc9ac3cu; f_ced74c(c);
    c->v.s[0] = LD32(c->r[4] + 268u);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xc9ac4cu; f_cf7958(c);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->r[0] = 0x1u;
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_c9ac14; }
L_c9ac5c:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_c9ac10; }
    { uint32_t r = c->r[5] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9acbc; }
    c->v.s[2] = c->r[8];
    c->v.f[16] = c->v.f[16] + c->v.f[0];
    c->v.f[2] = (float)c->v.s[2];
    vfp_cmp_f(c, c->v.f[16], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_c9ad18; }
    { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ad14; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[5] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ac14; }
    c->r[1] = c->r[8] - 0x1u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[1];
    c->v.f[16] = (float)c->v.s[0];
    c->r[0] = c->r[0] & 0xfffffff7u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_c9ad18;
L_c9acbc:;
    c->v.f[16] = c->v.f[16] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[16], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9ad34; }
    { uint32_t r = c->r[5] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ad28; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[5] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ac14; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffff7u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    goto L_c9ad34;
L_c9acf4:;
    c->r[0] = (c->r[2] >> 16);
    c->v.s[0] = 0x3f7fff58u;
    c->v.s[2] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 184u, c->v.s[0]);
    goto L_c9ac14;
L_c9ad14:;
    c->v.f[16] = c->v.f[16] - c->v.f[2];
L_c9ad18:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[1] = c->v.s[0];
    goto L_c9ad68;
L_c9ad28:;
    c->v.s[0] = c->r[8];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[16] = c->v.f[0] + c->v.f[16];
L_c9ad34:;
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[16]);
    c->v.s[2] = vcvt_u32_f64((double)c->v.f[16]);
    c->v.s[4] = 0x3dcccccdu;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    c->r[1] = c->v.s[2];
    c->v.f[0] = c->v.f[16] - c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c9ad68; }
    c->r[0] = c->r[8] - 0x1u;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { c->r[1] = 0x0u; }
L_c9ad68:;
    c->v.s[0] = c->r[1];
    c->v.f[0] = (float)c->v.s[0];
    c->v.s[2] = LD32(c->r[4] + 264u);
    vfp_cmp_f(c, c->v.f[16], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { vfp_cmp_f(c, c->v.f[0], c->v.f[2]); }
    if (COND_EQ) { vfp_mrs_flags(c); }
    if (COND_EQ) { goto L_c9ac10; }
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_c9abf8;
}
void f_c9ada0(Cpu *restrict c) {
    FN_ENTER(0xc9ada0u);
L_c9ada0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x134u;
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = c->r[1] + c->r[2]; }
    c->r[1] = c->r[4];
    c->r[14] = 0xc9adc8u; f_c6bc0c(c);
    { uint32_t ea = c->r[4] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t r = c->r[1] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9af3c; }
    { uint32_t ea = c->r[4] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = (c->r[0] >> 8) & 0x3u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[2] = (c->r[3] >> 25) & 0x1u;
    c->r[3] = (c->r[3] >> 24) & 0x1u;
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = c->r[4] + (c->r[1] >> 16);
    c->v.s[0] = 0x40000000u;
    c->v.s[2] = 0xc0000000u;
    c->r[2] = (c->r[2] << 3);
    c->r[3] = (c->r[3] << 3);
    c->r[4] = 0x0u;
    c->r[1] = c->r[1] + 0x1cu;
L_c9ae14:;
    { uint32_t ea = c->r[1] - 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9aea0; }
    c->r[0] = c->r[1] + c->r[2];
    c->v.s[4] = LD32(c->r[1] - 12u);
    c->v.s[6] = LD32(c->r[0] - 28u);
    c->r[0] = c->r[1] + c->r[3];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] - 28u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] - 12u);
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    ST32(c->r[1] - 12u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1] - 28u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c9ae74; }
    c->v.s[6] = LD32(c->r[1] - 20u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c9ae74; }
    c->v.f[4] = c->v.f[4] + c->v.f[2];
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    goto L_c9ae98;
L_c9ae74:;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9aea0; }
    c->v.s[6] = LD32(c->r[1] - 20u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9aea0; }
    c->v.f[4] = c->v.f[4] + c->v.f[0];
    c->v.f[6] = c->v.f[6] + c->v.f[0];
L_c9ae98:;
    ST32(c->r[1] - 28u, c->v.s[4]);
    ST32(c->r[1] - 20u, c->v.s[6]);
L_c9aea0:;
    { uint32_t ea = c->r[1] - 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9af2c; }
    c->r[0] = c->r[1] + c->r[2];
    c->v.s[4] = LD32(c->r[1] - 8u);
    c->v.s[6] = LD32(c->r[0] - 24u);
    c->r[0] = c->r[1] + c->r[3];
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    ST32(c->r[0] - 24u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[6] = LD32(c->r[1] - 8u);
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    ST32(c->r[1] - 8u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[1] - 24u);
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c9af00; }
    c->v.s[6] = LD32(c->r[1] - 16u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_c9af00; }
    c->v.f[4] = c->v.f[4] + c->v.f[2];
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    goto L_c9af24;
L_c9af00:;
    vfp_cmp_f(c, c->v.f[4], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9af2c; }
    c->v.s[6] = LD32(c->r[1] - 16u);
    vfp_cmp_f(c, c->v.f[6], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9af2c; }
    c->v.f[4] = c->v.f[4] + c->v.f[0];
    c->v.f[6] = c->v.f[6] + c->v.f[0];
L_c9af24:;
    ST32(c->r[1] - 24u, c->v.s[4]);
    ST32(c->r[1] - 16u, c->v.s[6]);
L_c9af2c:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[1] + 0x20u;
    (void)f_subs(c, c->r[4], c->r[12]);
    if (COND_CC) { goto L_c9ae14; }
L_c9af3c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9af40(Cpu *restrict c) {
    FN_ENTER(0xc9af40u);
L_c9af40:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x3cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[10] = c->r[1];
    c->r[1] = 0xffffu;
    c->r[9] = c->r[2];
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b028; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[4] + (uint32_t)(uint16_t)(c->r[0]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9afb4; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_c9afb8;
L_c9afb4:;
    c->r[7] = 0x0u;
L_c9afb8:;
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x20u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c9affc; }
    c->r[0] = c->r[7];
    c->r[1] = 0x20u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[8] = c->r[14];
    c->r[14] = 0xc9afe8u; f_a82674(c);
    c->r[14] = c->r[8];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9affc:;
    c->r[1] = c->r[0] + 0x20u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c9b028; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[8]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[9] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0xc4u; ST8(ea, c->r[0]); }
L_c9b028:;
    { uint32_t ea = c->r[6] + 0xa0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9b0c4; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9b060; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_c9b064;
L_c9b060:;
    c->r[7] = 0x0u;
L_c9b064:;
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_c9b0a0; }
    c->r[0] = c->r[7];
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[12];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[14] = 0xc9b090u; f_a82674(c);
    c->r[12] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9b0a0:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[8]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xa0u; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0xc4u; ST8(ea, c->r[0]); } }
L_c9b0c4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b0fc; }
    c->v.s[0] = LD32(c->r[4] + 296u);
    c->v.s[2] = LD32(c->r[4] + 300u);
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    ST32(c->r[13] + 52u, c->v.s[0]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[2] : c->v.s[0];
    ST32(c->r[13] + 56u, c->v.s[2]);
L_c9b0fc:;
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[3] >> 20) & 0xfu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[3] = c->r[13] + 0x20u;
    c->r[1] = c->r[10];
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xc9b164u; f_e90094(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_c9b16c(Cpu *restrict c) {
    FN_ENTER(0xc9b16cu);
L_c9b16c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_c9b170(Cpu *restrict c) {
    FN_ENTER(0xc9b170u);
L_c9b170:;
    c->r[0] = 0xda22c4u;
    { uint32_t ea = 0xc9b17cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_c9b180(Cpu *restrict c) {
    FN_ENTER(0xc9b180u);
L_c9b180:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x168886cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0xc9b1a4u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xd9e310u;
    c->r[3] = 0x1d0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xda2238u;
    { uint32_t ea = 0xc9b200u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xadd0d9u;
    { uint32_t ea = 0xc9b208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc9b20cu + c->r[1];
    c->r[14] = 0xc9b20cu; f_9aedcc(c);
    c->r[1] = 0xda881cu;
    { uint32_t ea = 0xc9b218u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9b238(Cpu *restrict c) {
    FN_ENTER(0xc9b238u);
L_c9b238:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xda87f0u;
    { uint32_t ea = 0xc9b248u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc9b24cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1d0u;
    c->pc = c->r[4]; c->r[14] = 0xc9b264u; rt_dispatch(c);
    c->r[14] = 0xc9b268u; f_c58d7c(c);
    c->r[1] = 0xda87c8u;
    { uint32_t ea = 0xc9b274u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9b284(Cpu *restrict c) {
    FN_ENTER(0xc9b284u);
L_c9b284:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xda879cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xc9b29cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xc9b2a0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_c9b2c0(Cpu *restrict c) {
    FN_ENTER(0xc9b2c0u);
L_c9b2c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xc9b2c8u; f_c58d7c(c);
    c->r[1] = 0xda8768u;
    { uint32_t ea = 0xc9b2d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9b2e0(Cpu *restrict c) {
    FN_ENTER(0xc9b2e0u);
L_c9b2e0:;
    __attribute__((musttail)) return f_c58e70(c);
}
void f_c9b2e4(Cpu *restrict c) {
    FN_ENTER(0xc9b2e4u);
L_c9b2e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9b2f0u; f_c58e70(c);
    c->r[0] = 0xda873cu;
    { uint32_t ea = 0xc9b2fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9b2fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_c9b314(Cpu *restrict c) {
    FN_ENTER(0xc9b314u);
L_c9b314:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9b320u; f_c58fa8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0x70u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c5b658(c);
}
void f_c9b340(Cpu *restrict c) {
    FN_ENTER(0xc9b340u);
L_c9b340:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9b34cu; f_c59268(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xc9b354u; f_c5b880(c);
    c->r[1] = 0x150000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x2d0000u; }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x194u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9b38c(Cpu *restrict c) {
    FN_ENTER(0xc9b38cu);
L_c9b38c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xda1814u;
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0xc9b3a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9b3a8u; f_d93b70(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c9b3c4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c59ce4(c);
L_c9b3c4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9b3e0(Cpu *restrict c) {
    FN_ENTER(0xc9b3e0u);
L_c9b3e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xc9b3f0u; f_c5a384(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_c67b10(c);
}
void f_c9b400(Cpu *restrict c) {
    FN_ENTER(0xc9b400u);
L_c9b400:;
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x2du);
    if (COND_EQ) { goto L_c9b418; }
    (void)f_subs(c, c->r[3], 0x15u);
    if (COND_NE) { return; }
    __attribute__((musttail)) return f_c9b41c(c);
L_c9b418:;
    __attribute__((musttail)) return f_c9b79c(c);
}
void f_c9b41c(Cpu *restrict c) {
    FN_ENTER(0xc9b41cu);
L_c9b41c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_c9b78c; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[14] = 0xc9b450u; f_c74880(c);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[16] = LD32(c->r[12] + 152u);
    { uint32_t ea = c->r[12] + 0xb0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[12] + 0x9cu; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_c9b490; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_c9b48c; }
    c->r[2] = c->r[0] & 0x3u;
L_c9b474:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b490; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_c9b474; }
L_c9b48c:;
    c->r[8] = 0x0u;
L_c9b490:;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[9] = c->r[0] & 0x3u;
    c->r[14] = 0x0u;
    c->r[1] = c->r[1] + 0x10u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9b5e4; }
    goto L_c9b664;
L_c9b4b8:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = (c->r[1] >> 25);
    c->r[0] = (c->r[1] >> 24);
L_c9b4c4:;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[10]);
    c->r[2] = (uint32_t)(uint8_t)(c->r[5]);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[10] = c->r[12] & 0x1u;
    c->r[2] = c->r[3] - c->r[2];
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->r[3] = c->r[0] - c->r[1];
    c->r[1] = (c->r[5] >> 8);
    c->r[0] = c->r[7] + 0x20u;
    { uint32_t r = c->r[3] * c->r[4]; c->r[3] = r; }
    c->r[2] = c->r[5] + (c->r[2] >> 8);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = c->r[3] + (c->r[1] << 8);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] & 0xff00u;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[0] + (c->r[10] << 4);
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->v.s[6] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[3] + 4u);
    c->v.s[10] = LD32(c->r[3] + 8u);
    c->r[3] = 0x0u;
    c->r[2] = (c->r[2] >> 8);
    c->r[2] = c->r[2] + (c->r[5] >> 16);
    c->r[2] = (c->r[2] << 16);
    c->r[2] = uxtb16(c->r[2]);
    c->r[1] = c->r[1] | c->r[2];
    c->r[14] = c->r[1] | (c->r[14] << 24);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[1] & 0x1u;
    c->r[1] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->r[1] = c->r[7] + 0x50u;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] - c->r[1];
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[2]);
    ST32(c->r[13] + 72u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    { uint32_t r = c->r[2] * c->r[4]; c->r[2] = r; }
    c->r[1] = c->r[1] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[12]; c->r[14] = 0xc9b5ccu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[14] + 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9b664; }
L_c9b5e4:;
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c9b72c; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_c9b614; }
L_c9b5fc:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b61c; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_c9b5fc; }
L_c9b614:;
    c->r[8] = 0x0u;
    goto L_c9b620;
L_c9b61c:;
    /* pld */
L_c9b620:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0x60u;
    c->r[2] = (c->r[3] >> 25) & 0x1u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[3] >> 24) & 0x1u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0xffu;
    c->r[1] = (c->r[10] >> 24);
    c->r[1] = c->r[1] - (c->r[5] >> 24);
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 8);
    c->r[1] = c->r[1] + (c->r[5] >> 24);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    { uint32_t sc = ((c->r[1] >> 7) & 1); uint32_t r = c->r[2] & (uint32_t)((int32_t)c->r[1] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b5e4; }
    goto L_c9b6c8;
L_c9b664:;
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_c9b72c; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_c9b684; }
    /* pld */
    goto L_c9b688;
L_c9b684:;
    c->r[8] = 0x0u;
L_c9b688:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0x60u;
    c->r[2] = (c->r[3] >> 25) & 0x1u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[3] >> 24) & 0x1u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0xffu;
    c->r[1] = (c->r[10] >> 24);
    c->r[1] = c->r[1] - (c->r[5] >> 24);
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 8);
    c->r[1] = c->r[1] + (c->r[5] >> 24);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    { uint32_t sc = ((c->r[1] >> 7) & 1); uint32_t r = c->r[2] & (uint32_t)((int32_t)c->r[1] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b664; }
L_c9b6c8:;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 8);
    (void)f_subs(c, c->r[14], 0x0u);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[5] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[10] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[5] >> 16) & 0xffu;
    c->r[2] = (c->r[10] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_c9b70c; }
    c->r[0] = (c->r[3] >> 24);
    c->r[12] = (c->r[3] >> 25);
    goto L_c9b4c4;
L_c9b70c:;
    { uint32_t ea = c->r[12] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc9b720u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9b4b8; }
    goto L_c9b78c;
L_c9b72c:;
    { uint32_t ea = c->r[12] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[12] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1fe0u;
    c->r[0] = c->r[1] & (c->r[0] >> 19);
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12];
    c->r[14] = 0xc9b76cu; f_cef538(c);
    c->r[1] = c->r[13] + 0x40u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[2] = (c->r[4] >> 8) & 0xffu;
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->pc = c->r[8]; c->r[14] = 0xc9b78cu; rt_dispatch(c);
L_c9b78c:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_c9b79c(Cpu *restrict c) {
    FN_ENTER(0xc9b79cu);
L_c9b79c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xb8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9be6c; }
    c->r[1] = c->r[13] + 0x88u;
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0xc9b7dcu; f_cef728(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9b7e8u; f_c74880(c);
    { uint32_t ea = c->r[5] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->v.s[18] = LD32(c->r[5] + 152u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c9b840; }
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_c9b844; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x3u;
L_c9b81c:;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9b840; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_c9b81c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_c9b844;
L_c9b840:;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
L_c9b844:;
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    c->r[14] = 0xc9b850u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9ba00; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9b8c4; }
    c->r[14] = 0xc9b8c0u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9b8c4:;
    c->v.s[2] = LD32(c->r[13] + 100u);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 104u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9b8f4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9b8f4u; f_15efddc(c);
L_c9b8f4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9b914; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9b940;
L_c9b914:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 100u);
    c->v.s[6] = LD32(c->r[13] + 104u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9b940:;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9b9c0; }
    { uint32_t ea = c->r[5] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
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
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    goto L_c9b9e0;
L_c9b9c0:;
    c->r[0] = 0xd9d88cu;
    { uint32_t ea = 0xc9b9ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
L_c9b9e0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x60u;
    c->r[2] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x88u;
    c->r[14] = 0xc9ba00u; f_ea99ec(c);
L_c9ba00:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9be6c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[5] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->r[8] = c->r[0] & 0x3u;
    c->r[0] = c->r[10] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x40u;
    c->r[0] = c->r[0] + 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
L_c9ba54:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_c9baa8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9ba9c; }
L_c9ba78:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9ba9c; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_c9ba78; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    goto L_c9baa8;
L_c9ba9c:;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    /* pld */
L_c9baa8:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    c->r[4] = c->r[9] + 0x8u;
    c->r[1] = c->r[3] & (c->r[7] >> 21);
    c->r[3] = c->r[3] & (c->r[7] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[26] = c->v.f[18] * c->v.f[4];
    c->v.f[28] = c->v.f[18] * c->v.f[2];
    c->v.f[30] = c->v.f[18] * c->v.f[0];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[22] * c->v.f[6]);
    if (COND_EQ) { goto L_c9bc5c; }
    c->v.s[2] = LD32(c->r[13] + 116u);
    c->v.s[0] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 120u);
    c->v.f[6] = c->v.f[0] - c->v.f[30];
    c->v.f[2] = c->v.f[2] - c->v.f[28];
    c->v.f[4] = c->v.f[4] - c->v.f[26];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9bb50; }
    c->r[14] = 0xc9bb4cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_c9bb50:;
    c->v.s[2] = LD32(c->r[13] + 100u);
    c->v.s[0] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 104u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9bb80; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9bb80u; f_15efddc(c);
L_c9bb80:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9bb9c; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_c9bbc4;
L_c9bb9c:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 96u);
    c->v.s[4] = LD32(c->r[13] + 100u);
    c->v.s[6] = LD32(c->r[13] + 104u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9bbc4:;
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0x60u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 64u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 68u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x88u;
    c->r[2] = c->r[13] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 72u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xc9bc5cu; f_ea99ec(c);
L_c9bc5c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9bdf8; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[9] + 0x60u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[3] >> 25) & 0x1u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = (c->r[3] >> 24) & 0x1u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = (c->r[5] >> 8) & 0xffu;
    c->r[6] = (c->r[4] >> 8) & 0xffu;
    c->r[7] = (c->r[5] >> 16) & 0xffu;
    c->r[12] = (c->r[4] >> 16) & 0xffu;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[4] >> 24);
    c->r[1] = c->r[1] - (c->r[5] >> 24);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[1] = (c->r[1] >> 8);
    c->r[1] = c->r[1] + (c->r[5] >> 24);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t r = c->r[1] * c->r[0]; c->r[10] = r; }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[10] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[10] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9bcdc; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9bcec; }
    c->r[1] = (c->r[3] >> 25);
    c->r[2] = (c->r[3] >> 24);
    goto L_c9bd2c;
L_c9bcdc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = 0x0u;
    goto L_c9bdf8;
L_c9bcec:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0xc9bd0cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9be6c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 25);
    c->r[2] = (c->r[0] >> 24);
L_c9bd2c:;
    c->r[3] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = (uint32_t)(uint8_t)(c->r[5]);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = (c->r[5] >> 8);
    c->r[2] = c->r[2] & 0x1u;
    c->r[1] = c->r[1] & 0x1u;
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[3] = c->r[3] - c->r[14];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[0] = c->r[5] + (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[4] << 8);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[0] = c->r[3] | c->r[0];
    c->r[3] = c->r[12] - c->r[7];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[3] = c->r[3] + (c->r[5] >> 16);
    c->r[5] = c->r[9] + 0x50u;
    { uint32_t ea = c->r[5] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->r[3] = (c->r[3] << 16);
    c->r[3] = uxtb16(c->r[3]);
    c->r[0] = c->r[0] | c->r[3];
    c->r[3] = (uint32_t)((int32_t)c->r[10] >> 8);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = c->r[2] - c->r[1];
    c->r[3] = c->r[0] | (c->r[3] << 24);
    { uint32_t r = c->r[2] * c->r[6]; c->r[2] = r; }
    { uint32_t ea = c->r[10] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 64u, c->v.s[30]);
    ST32(c->r[13] + 68u, c->v.s[28]);
    ST32(c->r[13] + 72u, c->v.s[26]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[7]; c->r[14] = 0xc9bde8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9bdf8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_c9ba54; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9be6c; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1fe0u;
    c->r[1] = c->r[1] & (c->r[2] >> 19);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0xc9be4cu; f_cef538(c);
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[2] = (c->r[4] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->pc = c->r[5]; c->r[14] = 0xc9be6cu; rt_dispatch(c);
L_c9be6c:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_c9be80(Cpu *restrict c) {
    FN_ENTER(0xc9be80u);
L_c9be80:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[8] = c->r[2];
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xc9be98u; f_c5ca24(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_c9c0e0; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1fe0u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] & (c->r[0] >> 19);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9bed0u; f_c6a2a4(c);
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    if (COND_NE) { c->r[7] = c->r[9] + (c->r[0] >> 16); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_c9bf60; }
    c->r[1] = 0xda6be0u;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0xc9befcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xfffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0xc9bf14u; f_ced74c(c);
    c->r[6] = (uint32_t)(uint8_t)(c->r[10]);
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[10] & 0x100u; }
    c->r[3] = c->r[6];
    c->r[14] = 0xc9bf34u; f_cf938c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { c->r[1] = c->r[1] | 0x20000u; }
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff0000u;
    c->r[1] = c->r[1] | c->r[6];
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[1]); }
    goto L_c9bf70;
L_c9bf60:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[5];
    c->r[14] = 0xc9bf6cu; f_c6be40(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_c9bf70:;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x40u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 12);
    c->r[1] = c->r[1] | (c->r[2] << 20);
    { uint32_t r = c->r[1] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c024; }
    c->v.s[0] = 0x43800000u;
    c->v.s[2] = LD32(c->r[8] + 32u);
    c->r[2] = c->r[1] & 0xfu;
    (void)f_subs(c, c->r[2], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_c9c024; }
    c->r[1] = c->v.s[0];
    c->r[3] = 0x1u;
    c->r[7] = 0xaau;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9c008; }
    c->r[7] = 0x154u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[3], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c024; }
    c->r[2] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[0];
    c->r[7] = ~0xff0000u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[3] = c->r[3] & 0xffff0000u;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t r = c->r[1] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8) & 0xffu;
    c->r[12] = c->r[2] | c->r[3];
    c->r[2] = (c->r[0] >> 16) & 0xffu;
    c->r[3] = 0x10u;
    c->r[0] = c->r[12];
    goto L_c9c014;
L_c9c008:;
    c->r[2] = (c->r[0] >> 24);
    c->r[7] = ~0xff000000u;
    c->r[3] = 0x18u;
L_c9c014:;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[0] = c->r[7] & c->r[0];
    c->r[1] = (c->r[1] >> 8) & 0xffu;
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[3]);
L_c9c024:;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9c060; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xdcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[9] + 0x3eu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[9] + c->r[1]; }
    c->r[14] = 0xc9c060u; f_cec454(c);
L_c9c060:;
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c0c8; }
    { uint32_t ea = c->r[4] + 0xfu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x60u;
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = 0x1u;
    c->r[1] = c->r[1] & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0xc9c0b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_c9c0c8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[6] = c->r[4] + 0x8u;
    c->r[14] = 0xc9c0d8u; f_c74838(c);
    { uint32_t ea = c->r[6] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 2) & 0x1u;
L_c9c0e0:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9c0f0(Cpu *restrict c) {
    FN_ENTER(0xc9c0f0u);
L_c9c0f0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[14] = 0xc9c100u; f_c62db8(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_c9c1e8; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9c174; }
    c->r[6] = c->r[8] + 0xd0u;
L_c9c11c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9c13c; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    /* pld */
L_c9c13c:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0xc9c148u; f_c9c1f4(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    c->r[14] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[12] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->r[1] = c->r[0] + 0x10000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | (c->r[1] & 0xFFFF0000u);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); }
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    if (COND_NE) { goto L_c9c11c; }
L_c9c174:;
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c1c8; }
    { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9c1c8; }
L_c9c18c:;
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[1] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x50u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] + 0x60u;
    c->r[1] = c->r[8];
    c->r[3] = 0x1u;
    c->pc = c->r[7]; c->r[14] = 0xc9c1bcu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_c9c18c; }
L_c9c1c8:;
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_c9c1e8; }
    c->r[0] = c->r[8];
    c->r[14] = 0xc9c1e8u; f_c64670(c);
L_c9c1e8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9c1f4(Cpu *restrict c) {
    FN_ENTER(0xc9c1f4u);
L_c9c1f4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9c218u; f_c6a2cc(c);
    { uint32_t ea = c->r[4] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c268; }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], (c->r[1] >> 16));
    c->r[6] = (c->r[1] >> 16);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[6] = c->r[0] + (c->r[1] >> 16); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0xc9c24cu; f_ced74c(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    c->r[14] = 0xc9c260u; f_cf938c(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_c9c268:;
    { uint32_t r = c->r[8] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9c288; }
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    goto L_c9c368;
L_c9c288:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = (c->r[0] >> 12);
    c->r[2] = c->r[0] | (c->r[1] << 20);
    { uint32_t r = c->r[2] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c338; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[8] = v; c->r[9] = v2; }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0xd8u; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x43800000u;
    c->r[7] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t r = c->r[6] * c->r[7] + c->r[3]; c->r[3] = r; }
    c->r[1] = c->r[1] + c->r[3];
    c->r[3] = c->r[2] & 0xfu;
    c->v.s[2] = LD32(c->r[1]);
    c->r[1] = (c->r[9] >> 24);
    (void)f_subs(c, c->r[3], 0x8u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    if (COND_HI) { goto L_c9c35c; }
    c->r[2] = c->v.s[0];
    c->r[7] = 0x1u;
    c->r[6] = 0xaau;
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[7], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9c340; }
    c->r[6] = 0x154u;
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[7], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c35c; }
    c->r[3] = (c->r[12] >> 8) & 0xffu;
    c->r[0] = c->r[12];
    c->r[6] = ~0xff0000u;
    c->r[7] = 0x10u;
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    c->r[0] = c->r[0] & 0xffff0000u;
    c->r[3] = c->r[3] & 0xff00u;
    c->r[0] = c->r[3] | c->r[0];
    c->r[3] = (uint32_t)(uint8_t)(c->r[12]);
    { uint32_t r = c->r[2] * c->r[3]; c->r[3] = r; }
    c->r[3] = (c->r[3] >> 8) & 0xffu;
    c->r[0] = c->r[0] | c->r[3];
    c->r[3] = (c->r[12] >> 16) & 0xffu;
    c->r[12] = c->r[0];
    goto L_c9c34c;
L_c9c338:;
    { uint32_t ea = c->r[7] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_c9c35c;
L_c9c340:;
    c->r[3] = (c->r[12] >> 24);
    c->r[6] = ~0xff000000u;
    c->r[7] = 0x18u;
L_c9c34c:;
    { uint32_t r = c->r[3] * c->r[2]; c->r[2] = r; }
    c->r[0] = c->r[6] & c->r[12];
    c->r[2] = (c->r[2] >> 8) & 0xffu;
    c->r[12] = c->r[0] | sh_lsl(c->r[2], c->r[7]);
L_c9c35c:;
    c->r[0] = c->r[1] & 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[12]); }
L_c9c368:;
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9c378(Cpu *restrict c) {
    FN_ENTER(0xc9c378u);
L_c9c378:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_c9c37c(Cpu *restrict c) {
    FN_ENTER(0xc9c37cu);
L_c9c37c:;
    c->r[0] = 0xda76b0u;
    { uint32_t ea = 0xc9c388u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_c9c38c(Cpu *restrict c) {
    FN_ENTER(0xc9c38cu);
L_c9c38c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x16876b0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0xc9c3b0u + c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[14] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xd9d104u;
    c->r[3] = 0x1d0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xda7624u;
    { uint32_t ea = 0xc9c40cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xadbee5u;
    { uint32_t ea = 0xc9c414u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc9c418u + c->r[1];
    c->r[14] = 0xc9c418u; f_9aedcc(c);
    c->r[1] = 0xda761cu;
    { uint32_t ea = 0xc9c424u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9c444(Cpu *restrict c) {
    FN_ENTER(0xc9c444u);
L_c9c444:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xda75f0u;
    { uint32_t ea = 0xc9c454u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xc9c458u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1d0u;
    c->pc = c->r[4]; c->r[14] = 0xc9c470u; rt_dispatch(c);
    c->r[14] = 0xc9c474u; f_c58d7c(c);
    c->r[1] = 0xda75c8u;
    { uint32_t ea = 0xc9c480u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9c490(Cpu *restrict c) {
    FN_ENTER(0xc9c490u);
L_c9c490:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xda759cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xc9c4a8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xc9c4acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_c9c4cc(Cpu *restrict c) {
    FN_ENTER(0xc9c4ccu);
L_c9c4cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xc9c4d4u; f_c58d7c(c);
    c->r[1] = 0xda7568u;
    { uint32_t ea = 0xc9c4e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_c9c4ec(Cpu *restrict c) {
    FN_ENTER(0xc9c4ecu);
L_c9c4ec:;
    __attribute__((musttail)) return f_c58e70(c);
}
void f_c9c4f0(Cpu *restrict c) {
    FN_ENTER(0xc9c4f0u);
L_c9c4f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9c4fcu; f_c58e70(c);
    c->r[0] = 0xda753cu;
    { uint32_t ea = 0xc9c508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9c508u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_c9c520(Cpu *restrict c) {
    FN_ENTER(0xc9c520u);
L_c9c520:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9c52cu; f_c58fa8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[0] + 0x1a8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x20u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c5b658(c);
}
void f_c9c558(Cpu *restrict c) {
    FN_ENTER(0xc9c558u);
L_c9c558:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9c564u; f_c59268(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] - 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] >> 4) & 0xffffu;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[3] = (c->r[3] & 0xfff0ffffu) | ((c->r[2] << 16) & 0xf0000u);
    c->r[2] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[3] = c->r[3] & 0xff0fffffu;
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = c->r[2] & 0xfu;
    c->r[2] = c->r[3] | (c->r[2] << 20);
    c->r[3] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[2] = c->r[2] & 0xf0ffffffu;
    { uint32_t ea = c->r[7] + 0x1a0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] >> 8) & 0xfu;
    c->r[7] = c->r[2] | (c->r[3] << 24);
    (void)f_subs(c, c->r[3], 0x6u);
    if (COND_EQ) { goto L_c9c608; }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbfff0000u;
    c->r[2] = c->r[1] & c->r[2];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[1] | c->r[2];
    c->r[1] = c->r[1] | 0x40000000u;
L_c9c608:;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[12]); ST32(ea + 4u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[9]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xc9c620u; f_c5b880(c);
    c->r[1] = 0x20000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x1b0000u; }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x194u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_c9c658(Cpu *restrict c) {
    FN_ENTER(0xc9c658u);
L_c9c658:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0xc9c668u; f_c5a384(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_c67b10(c);
}
void f_c9c678(Cpu *restrict c) {
    FN_ENTER(0xc9c678u);
L_c9c678:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xc9c684u; f_c5b2b8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_c69104(c);
}
void f_c9c690(Cpu *restrict c) {
    FN_ENTER(0xc9c690u);
L_c9c690:;
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1bu);
    if (COND_EQ) { goto L_c9c6a8; }
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { return; }
    __attribute__((musttail)) return f_c9c6ac(c);
L_c9c6a8:;
    __attribute__((musttail)) return f_c9df44(c);
}
void f_c9c6ac(Cpu *restrict c) {
    FN_ENTER(0xc9c6acu);
L_c9c6ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x358u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[6] = c->r[0];
    c->r[0] = 0xda04d0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[6] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xc9c6e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[8];
    c->r[14] = 0xc9c6f0u; f_dae520(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[2] = c->r[4];
    c->r[14] = 0xc9c704u; f_cef1e4(c);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[14] = 0xc9c714u; f_c74880(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xc9c728u; f_c7491c(c);
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x10000u;
    c->r[5] = 0x20000u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[16] = LD32(c->r[6] + 152u);
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf0u;
    { uint32_t ea = c->r[3] + 0x1a0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[0] & (c->r[2] >> 12);
    c->r[0] = 0xf00u;
    c->r[4] = c->r[4] & (c->r[2] >> 12);
    c->r[5] = c->r[5] & (c->r[2] >> 12);
    c->r[0] = c->r[0] & (c->r[2] >> 16);
    c->r[2] = (c->r[2] >> 20) & 0xfu;
    c->r[4] = c->r[4] | c->r[2];
    c->r[7] = c->r[0] | c->r[7];
    c->r[5] = c->r[4] | c->r[5];
    c->r[7] = c->r[7] | c->r[5];
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x1b8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[3]); }
    c->r[3] = 0xd9ca88u;
    { uint32_t ea = 0xc9c7ccu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_c9c818; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c9c820; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] & 0x3u;
L_c9c7f4:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[3] & c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9c810; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_c9c7f4; }
    c->r[10] = 0x0u;
L_c9c810:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_c9c828;
L_c9c818:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_c9c828;
L_c9c820:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = 0x0u;
L_c9c828:;
    c->r[1] = c->r[1] & 0x80u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_c9c8c8; }
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[8];
    c->r[14] = 0xc9c86cu; f_c57e4c(c);
    c->v.s[2] = LD32(c->r[13] + 132u);
    c->v.s[0] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 136u);
    c->v.s[6] = LD32(c->r[13] + 140u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9c8a4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xc9c8a4u; f_15efddc(c);
L_c9c8a4:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_c9cdb8; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_c9cdf0;
L_c9c8c8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9db10; }
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[8];
    c->r[14] = 0xc9c8dcu; f_c57ee0(c);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c9df34; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x250u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_c9ca0c;
L_c9c930:;
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9cdac; }
    c->r[2] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x250u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9ca08u; f_a8c0c8(c);
    goto L_c9cdac;
L_c9ca0c:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9ca5c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9ca50; }
L_c9ca2c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9ca50; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9ca2c; }
    c->r[10] = 0x0u;
    goto L_c9ca5c;
L_c9ca50:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_c9ca5c:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
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
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9cdac; }
    c->r[6] = c->r[8] + 0x8u;
    c->r[4] = 0x10u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[3] = c->r[4] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[4] & (c->r[1] >> 21);
    c->r[1] = c->r[4] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 184u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x250u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0xb0u;
    c->r[3] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xc9cc08u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] + 0x20u;
    c->r[3] = c->r[13] + 0x1e0u;
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] & (c->r[0] >> 21);
    c->r[0] = c->r[4] & (c->r[0] >> 20);
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0xd0u;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->r[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 528u, c->v.s[0]);
    ST32(c->r[13] + 532u, c->v.s[2]);
    ST32(c->r[13] + 536u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9cd00u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9cd74; }
    c->v.s[2] = LD32(c->r[13] + 532u);
    c->v.s[10] = LD32(c->r[13] + 116u);
    c->v.s[0] = LD32(c->r[13] + 528u);
    c->v.s[8] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 536u);
    c->v.s[12] = LD32(c->r[13] + 120u);
    c->v.s[6] = LD32(c->r[13] + 540u);
    c->v.s[14] = LD32(c->r[13] + 124u);
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[4] = c->v.f[14] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9cd64; }
    c->r[14] = 0xc9cd60u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c9cd64:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LS) { goto L_c9c930; }
L_c9cd74:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[3] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9cda8u; f_ca130c(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
L_c9cdac:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_c9ca0c; }
    goto L_c9df34;
L_c9cdb8:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.s[4] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 136u);
    c->v.s[8] = LD32(c->r[13] + 140u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_c9cdf0:;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[0] & 0xfu;
    c->r[0] = c->r[13] + 0x70u;
    c->r[14] = 0xc9ce10u; f_cfcce8(c);
    { uint32_t ea = c->r[13] + 0x241u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9d4f4; }
    c->r[0] = c->r[13] + 0xb0u;
    c->r[1] = c->r[8];
    c->r[14] = 0xc9ce28u; f_c57ee0(c);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c9df34; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[4] = 0x0u;
    c->r[5] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[8] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x250u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_c9ce80:;
    c->r[9] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9cecc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9cec0; }
L_c9cea0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9cec0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9cea0; }
    c->r[10] = 0x0u;
    goto L_c9cecc;
L_c9cec0:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_c9cecc:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
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
    c->r[7] = c->r[13] + 0x250u;
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9d404; }
    c->r[6] = c->r[9] + 0x8u;
    c->r[2] = c->r[9] + 0x60u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = 0x10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 80u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[7];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0x50u;
    c->r[3] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xc9d080u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9d128; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9d23c; }
    c->r[4] = c->r[13] + 0x1e0u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    goto L_c9d24c;
L_c9d128:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[9] + 0x20u;
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[13] + 0x70u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[0] & 0xfu;
    c->r[0] = c->r[5];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x1d0u;
    c->r[2] = c->r[13] + 0xc0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 464u, c->v.s[0]);
    ST32(c->r[13] + 468u, c->v.s[2]);
    ST32(c->r[13] + 472u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[4]); }
    c->r[14] = 0xc9d198u; f_cfd42c(c);
    c->r[4] = c->r[13] + 0x1e0u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9d1acu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    goto L_c9d328;
L_c9d23c:;
    c->r[4] = c->r[13] + 0x1e0u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[4];
L_c9d24c:;
    c->r[14] = 0xc9d250u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->r[3] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9d328:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[13] + 0xd0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    c->r[14] = 0xc9d358u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_c9d3cc; }
    c->v.s[2] = LD32(c->r[13] + 532u);
    c->v.s[10] = LD32(c->r[13] + 180u);
    c->v.s[0] = LD32(c->r[13] + 528u);
    c->v.s[8] = LD32(c->r[13] + 176u);
    c->v.s[4] = LD32(c->r[13] + 536u);
    c->v.s[12] = LD32(c->r[13] + 184u);
    c->v.s[6] = LD32(c->r[13] + 540u);
    c->v.s[14] = LD32(c->r[13] + 188u);
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[8] = c->v.f[8] - c->v.f[0];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[4] = c->v.f[14] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_c9d3bc; }
    c->r[14] = 0xc9d3b8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_c9d3bc:;
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    c->r[0] = c->v.s[0];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LS) { goto L_c9d410; }
L_c9d3cc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[3] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9d3fcu; f_ca130c(c);
    c->r[4] = 0x0u;
    c->r[5] = 0x10u;
L_c9d404:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_c9ce80; }
    goto L_c9df34;
L_c9d410:;
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[5] = 0x10u;
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9d404; }
    c->r[2] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = c->r[13] + 0x250u;
    c->r[3] = c->r[9] + 0x18u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9d4e0u; f_a8c0c8(c);
    c->r[5] = 0x10u;
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_c9ce80; }
    goto L_c9df34;
L_c9d4f4:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c9df34; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[4] = 0x0u;
    c->r[5] = 0x10u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x250u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_c9d54c:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9d5a0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9d594; }
L_c9d56c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9d594; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9d56c; }
    c->r[10] = 0x0u;
    goto L_c9d5a0;
L_c9d594:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_c9d5a0:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
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
    c->r[7] = c->r[13] + 0x250u;
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[2]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9db04; }
    c->r[6] = c->r[8] + 0x8u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 176u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 184u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = 0x10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 100u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 104u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[7];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0x60u;
    c->r[3] = c->r[13] + 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xc9d754u; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9d7fc; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_c9d910; }
    c->r[4] = c->r[13] + 0x1e0u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[13] + 0x70u;
    c->r[1] = c->r[4];
    goto L_c9d920;
L_c9d7fc:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[8] + 0x20u;
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[5] = c->r[13] + 0x70u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->r[3] = c->r[0] & 0xfu;
    c->r[0] = c->r[5];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[2] + 4u);
    c->v.s[10] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x1d0u;
    c->r[2] = c->r[13] + 0xc0u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 464u, c->v.s[0]);
    ST32(c->r[13] + 468u, c->v.s[2]);
    ST32(c->r[13] + 472u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[4]); }
    c->r[14] = 0xc9d86cu; f_cfd42c(c);
    c->r[4] = c->r[13] + 0x1e0u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xc9d880u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    goto L_c9d9fc;
L_c9d910:;
    c->r[4] = c->r[13] + 0x1e0u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = c->r[4];
L_c9d920:;
    c->r[14] = 0xc9d924u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[8] + 0x20u;
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->r[3] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_c9d9fc:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[3]); }
    c->r[2] = c->r[13] + 0xd0u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0xc9da2cu; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[5] = 0x10u;
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9db04; }
    c->r[2] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = c->r[13] + 0x250u;
    c->r[3] = c->r[8] + 0x18u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9dafcu; f_a8c0c8(c);
    c->r[5] = 0x10u;
    c->r[4] = 0x0u;
L_c9db04:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_c9d54c; }
    goto L_c9df34;
L_c9db10:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_c9df34; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[18] = c->v.f[0] - c->v.f[16];
    c->r[9] = c->r[0] & 0x3u;
    c->r[0] = c->r[13] + 0x250u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_c9db60:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_c9dbac; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_c9dba0; }
L_c9db80:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9dba0; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_c9db80; }
    c->r[10] = 0x0u;
    goto L_c9dbac;
L_c9dba0:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_c9dbac:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
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
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_c9df2c; }
    c->r[6] = c->r[8] + 0x8u;
    c->r[4] = c->r[5];
    c->r[5] = 0x10u;
    c->r[7] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[3] = c->r[5] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[5] & (c->r[1] >> 21);
    c->r[1] = c->r[5] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[3] = c->r[1] + (c->r[3] << 2);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x250u;
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[3]);
    c->r[1] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[2]);
    c->r[14] = 0xc9dd5cu; f_c6c268(c);
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] + 0x20u;
    c->r[3] = c->r[13] + 0x1e0u;
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x278u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x27cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] & (c->r[0] >> 21);
    c->r[0] = c->r[5] & (c->r[0] >> 20);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->r[0] = c->r[2] + c->r[1];
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0xd0u;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->r[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[10]);
    ST32(c->r[13] + 528u, c->v.s[0]);
    ST32(c->r[13] + 532u, c->v.s[2]);
    ST32(c->r[13] + 536u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xc9de5cu; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_c9df2c; }
    c->r[2] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x250u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xc9df2cu; f_a8c0c8(c);
L_c9df2c:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_c9db60; }
L_c9df34:;
    c->r[13] = c->r[11] - 0x30u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
