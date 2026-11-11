#include "cpu.h"
#include "neon_rt.h"
void f_2e79ac(Cpu *c);
void f_2e79b0(Cpu *c);
void f_2e79b4(Cpu *c);
void f_2e79c8(Cpu *c);
void f_341d30(Cpu *c);
void f_341df0(Cpu *c);
void f_361ac8(Cpu *c);
void f_4282a8(Cpu *c);
void f_45f0a8(Cpu *c);
void f_46f4dc(Cpu *c);
void f_474380(Cpu *c);
void f_474488(Cpu *c);
void f_476790(Cpu *c);
void f_5df7e0(Cpu *c);
void f_5df850(Cpu *c);
void f_5e0a58(Cpu *c);
void f_5e6434(Cpu *c);
void f_6abd14(Cpu *c);
void f_6ac3bc(Cpu *c);
void f_6af894(Cpu *c);
void f_6aff78(Cpu *c);
void f_6cf2d0(Cpu *c);
void f_6df23c(Cpu *c);
void f_6df270(Cpu *c);
void f_6e8b54(Cpu *c);
void f_722988(Cpu *c);
void f_723150(Cpu *c);
void f_723194(Cpu *c);
void f_74ecc0(Cpu *c);
void f_74edec(Cpu *c);
void f_74ee98(Cpu *c);
void f_74f260(Cpu *c);
void f_7530b8(Cpu *c);
void f_753a74(Cpu *c);
void f_75bba0(Cpu *c);
void f_75bd0c(Cpu *c);
void f_75c494(Cpu *c);
void f_85cb3c(Cpu *c);
void f_85cb74(Cpu *c);
void f_85e5bc(Cpu *c);
void f_85e67c(Cpu *c);
void f_85e794(Cpu *c);
void f_85f118(Cpu *c);
void f_85f190(Cpu *c);
void f_85f270(Cpu *c);
void f_881a78(Cpu *c);
void f_88584c(Cpu *c);
void f_887704(Cpu *c);
void f_8877e4(Cpu *c);
void f_8b84cc(Cpu *c);
void f_8b8828(Cpu *c);
void f_8ba920(Cpu *c);
void f_8bad68(Cpu *c);
void f_b50bcc(Cpu *c);
void f_15efd88(Cpu *c);
void f_881f50(Cpu *restrict c) {
    FN_ENTER(0x881f50u);
L_881f50:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[0] = 0x11b73acu;
    c->r[1] = 0x6bfcu;
    c->r[7] = 0x1u;
    { uint32_t ea = 0x881f70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x6c34u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0x3eu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x13u);
    if (COND_HI) { goto L_881fb8; }
    c->r[0] = 0x11b6decu;
    { uint32_t ea = 0x881f94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881f98u; f_476790(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881fc0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x881facu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_881fc0; }
    { uint32_t ea = c->r[8] + 0x3eu; uint32_t v = LD8(ea); c->r[1] = v; }
L_881fb8:;
    c->r[0] = c->r[6];
    goto L_881fd8;
L_881fc0:;
    { uint32_t ea = c->r[8] + 0x3eu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[7] = 0x0u;
    c->r[0] = c->r[0] & 0xffffbfffu;
    (void)f_subs(c, c->r[1], 0xfu);
    if (COND_EQ) { c->r[0] = c->r[6]; }
L_881fd8:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x16u);
    if (COND_HI) { goto L_88427c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x881ff0u + 0x8u;
    c->r[6] = c->r[4] | c->r[6];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x882054u: goto L_882054; case 0x88206cu: goto L_88206c; case 0x882214u: goto L_882214; case 0x882234u: goto L_882234; case 0x88227cu: goto L_88227c; case 0x8822b4u: goto L_8822b4; case 0x882304u: goto L_882304; case 0x88232cu: goto L_88232c; case 0x882508u: goto L_882508; case 0x882534u: goto L_882534; case 0x882560u: goto L_882560; case 0x88257cu: goto L_88257c; case 0x882730u: goto L_882730; case 0x882770u: goto L_882770; case 0x8828f4u: goto L_8828f4; case 0x882948u: goto L_882948; case 0x882974u: goto L_882974; case 0x8829b4u: goto L_8829b4; case 0x882a1cu: goto L_882a1c; case 0x882a34u: goto L_882a34; case 0x882b38u: goto L_882b38; case 0x882b78u: goto L_882b78; case 0x88427cu: goto L_88427c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_882054:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x4u;
    c->r[14] = 0x882064u; f_85e67c(c);
    c->r[0] = 0x1u;
    goto L_882208;
L_88206c:;
    c->r[0] = 0x11b6e48u;
    { uint32_t ea = 0x882078u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88207cu; f_5e6434(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t r = c->r[7] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_88427c; }
    c->r[0] = 0x3u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x8820a4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8820d0; }
    c->r[1] = 0xb7u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x11ba1d8u;
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x8820c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x8000u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
L_8820d0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8820dcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8820fc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8820fc:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882108u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882128; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882128:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882134u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882154; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882154:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882160u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882180; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882180:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88218cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8821ac; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8821ac:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8821b8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8821d8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8821d8:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x18u;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x882204u; f_85e5bc(c);
    c->r[0] = 0x3du;
L_882208:;
    c->r[1] = 0x1u;
    c->r[14] = 0x882210u; f_85e794(c);
    goto L_88427c;
L_882214:;
    c->r[14] = 0x882218u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_883180; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[14] = 0x88222cu; f_85f118(c);
    c->r[5] = 0x2u;
    goto L_88427c;
L_882234:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_882bb8; }
    { uint32_t ea = c->r[8] + 0x6c8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->r[1] = 0x2u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x8u);
    c->r[0] = c->r[8];
    if (COND_HI) { c->r[6] = c->r[6] & ~0xa0u; }
    c->r[14] = 0x882264u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883478; }
    c->r[14] = 0x882270u; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_883498; }
    goto L_88427c;
L_88227c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x882284u; f_88584c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_88324c; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_883264; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_88427c; }
    { uint32_t ea = c->r[8] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8832b8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_8832b4;
L_8822b4:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_88427c; }
    c->r[0] = 0x3u;
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x21u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x8822f0u; f_85e5bc(c);
    c->r[14] = 0x8822f4u; f_85f118(c);
L_8822f4:;
    c->r[0] = 0x3du;
    c->r[1] = 0x1u;
    c->r[14] = 0x882300u; f_85e794(c);
    goto L_88426c;
L_882304:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_88427c; }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[14] = 0x882318u; f_85f118(c);
L_882318:;
    c->r[0] = 0x3du;
    c->r[1] = 0x1u;
    c->r[14] = 0x882324u; f_85e794(c);
L_882324:;
    c->r[5] = 0x0u;
    goto L_88293c;
L_88232c:;
    c->r[14] = 0x882330u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_883188; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[0] = 0x8u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x3u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x6b4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x88236cu; f_753a74(c);
    { uint32_t ea = c->r[8] + 0x54du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_882390; }
    c->r[1] = 0xfbc900u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = 0x882390u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
L_882390:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[4]); }
    c->r[14] = 0x8823a0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8823b4; }
    c->r[1] = 0xece9c2u;
    c->r[1] = 0x8823b4u + c->r[1];
    c->r[14] = 0x8823b4u; f_8b8828(c);
L_8823b4:;
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6cbu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = 0x6ccu;
    c->r[2] = (uint32_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[3] = udiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[3] * c->r[2];
    { uint32_t ea = c->r[8] + c->r[7]; ST16(ea, c->r[3]); }
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x6c8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[8] + 0x6c9u; ST8(ea, c->r[2]); }
    c->r[14] = 0x8823f0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882410; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882410:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x88241cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88243c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_88243c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882448u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882468; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882468:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882474u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882494; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882494:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8824a0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8824c0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8824c0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8824ccu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8824ec; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8824ec:;
    c->r[14] = 0x8824f0u; f_85f118(c);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2du;
    goto L_883c50;
L_882508:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_882c00; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88251cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883520; }
    c->r[14] = 0x882528u; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_883540; }
    goto L_88427c;
L_882534:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_882dd4; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882548u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883568; }
    c->r[14] = 0x882554u; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_883588; }
    goto L_88427c;
L_882560:;
    c->r[0] = 0xbu;
    c->r[1] = 0x2u;
    c->r[2] = 0x41u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b6658u;
    { uint32_t ea = 0x88257cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_882748;
L_88257c:;
    c->r[14] = 0x882580u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_883198; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88259cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8825bc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8825bc:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8825c8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8825e8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8825e8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8825f4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882614; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882614:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882620u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882640; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882640:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88264cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88266c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffefffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_88266c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882678u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882698; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffefffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882698:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8826a4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8826c4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8826c4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8826d0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8826f0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8826f0:;
    c->r[0] = 0x10u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b64d0u;
    { uint32_t ea = 0x882708u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1f4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x882710u; f_85f118(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x88271cu; f_85e794(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->r[14] = 0x88272cu; f_6af894(c);
    goto L_88427c;
L_882730:;
    c->r[0] = 0xdu;
    c->r[1] = 0x2u;
    c->r[2] = 0x56u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b6488u;
    { uint32_t ea = 0x88274cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_882748:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882750u; f_75bd0c(c);
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x88276cu; f_85f190(c);
    goto L_88427c;
L_882770:;
    c->r[14] = 0x882774u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_883224; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882790u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8827b0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8827b0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8827bcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8827dc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8827dc:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8827e8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882808; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882808:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882814u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882834; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882834:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882840u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882860; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffefffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882860:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x88286cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88288c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffefffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_88288c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882898u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8828b8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8828b8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8828c4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8828e4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8828e4:;
    c->r[0] = 0x10u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    goto L_884288;
L_8828f4:;
    c->r[1] = 0x2000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1000000u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_88427c; }
    c->r[0] = 0xfu;
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x67cu;
    { uint32_t ea = c->r[8] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x66cu;
    { uint32_t ea = c->r[8] + 0x679u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x88292cu; f_74ecc0(c);
    c->r[14] = 0x882930u; f_85f118(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x88293cu; f_85e794(c);
L_88293c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_884278;
L_882948:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_882e48; }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88295cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8835e8; }
    c->r[14] = 0x882968u; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_883608; }
    goto L_88427c;
L_882974:;
    c->r[0] = 0x11u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883070; }
    { uint32_t ea = c->r[8] + 0x632u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x3du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x634u;
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[8] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x631u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[14] = 0x8829b0u; f_85e794(c);
    goto L_8830d8;
L_8829b4:;
    c->r[0] = 0x11b6500u;
    { uint32_t ea = 0x8829c0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8829c4u; f_5e6434(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_88427c; }
    { uint32_t ea = c->r[0] + 0x6bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_8829ec; }
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_883c70; }
L_8829ec:;
    c->r[0] = 0x13u;
    c->r[1] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x882a04u; f_74f260(c);
    c->r[0] = 0x11b61ccu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x882a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882a18u; f_6e8b54(c);
    goto L_88427c;
L_882a1c:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[0] = 0x14u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    goto L_88429c;
L_882a34:;
    c->r[0] = 0x11b6340u;
    { uint32_t ea = 0x882a40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882a44u; f_476790(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882a60; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x882a58u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
L_882a60:;
    c->r[0] = 0x15u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x882a74u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882a94; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882a94:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882aa0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882ac0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882ac0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882accu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882aec; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffbfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882aec:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882af8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882b18; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffbfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882b18:;
    c->r[0] = c->r[8];
    c->r[14] = 0x882b20u; f_8877e4(c);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0xcu;
    goto L_883c50;
L_882b38:;
    c->v.s[0] = LD32(c->r[8] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_88427c; }
    c->r[0] = 0x11b608cu;
    { uint32_t ea = 0x882b54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882b58u; f_6df270(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[0] = 0x11b6354u;
    { uint32_t ea = 0x882b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882b70u; f_5e0a58(c);
    c->r[5] = 0x1u;
    goto L_88427c;
L_882b78:;
    c->r[0] = 0x11b61fcu;
    { uint32_t ea = 0x882b84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882b88u; f_476790(c);
    c->r[0] = c->r[0] + 0x4b0u;
    c->r[14] = 0x882b90u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88427c; }
    c->r[0] = 0x16u;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b6030u;
    { uint32_t ea = 0x882bb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882bb4u; f_6df23c(c);
    goto L_88427c;
L_882bb8:;
    c->r[0] = 0x2u;
    c->r[1] = 0x2u;
    c->r[2] = 0x3eu;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x43u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b5ff8u;
    { uint32_t ea = 0x882bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882be0u; f_75bd0c(c);
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x882bfcu; f_85f190(c);
    goto L_884270;
L_882c00:;
    c->r[0] = 0x3u;
    c->r[1] = 0xcu;
    c->r[2] = 0x3u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6b4u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x882c2cu; f_753a74(c);
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6cbu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x39u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = 0x6ccu;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[3] = udiv32(c->r[2], c->r[1]);
    c->r[1] = c->r[2] - c->r[3] * c->r[1];
    { uint32_t ea = c->r[8] + c->r[7]; ST16(ea, c->r[3]); }
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x6c8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[8] + 0x6c9u; ST8(ea, c->r[2]); }
    c->r[14] = 0x882c68u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882c88; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882c88:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882c94u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882cb4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882cb4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882cc0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882ce0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882ce0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882cecu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882d0c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882d0c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882d18u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882d38; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882d38:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882d44u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882d64; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882d64:;
    { uint32_t ea = c->r[8] + 0x54du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] - 0x1u;
    c->r[1] = 0x0u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[3], 0x4u);
    if (COND_HI) { goto L_882d90; }
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[2]);
    c->r[2] = 0xfbbf00u;
    c->r[2] = 0x882d90u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
L_882d90:;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_884220; }
    c->r[1] = ~0x0u;
    c->r[1] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_884208; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x882db4u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x882dccu: goto L_882dcc; case 0x884218u: goto L_884218; case 0x88421cu: goto L_88421c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_882dcc:;
    c->r[0] = 0x5u;
    goto L_88421c;
L_882dd4:;
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883694; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[8] + 0x78u;
    c->r[2] = 0x0u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[8] + 0x42u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x882dfcu; f_2e79b4(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882e08u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882e1c; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x882e1cu; f_8bad68(c);
L_882e1c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882e28u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88426c; }
    { uint32_t ea = c->r[8] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[14] = 0x882e3cu; f_8b84cc(c);
    goto L_88426c;
L_882e48:;
    c->r[0] = 0x9u;
    c->r[1] = 0x3u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x66cu;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x882e68u; f_74edec(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882e74u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882e94; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882e94:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882ea0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882ec0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882ec0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882eccu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882eec; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882eec:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882ef8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882f18; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882f18:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882f24u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882f44; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882f44:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882f50u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882f70; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882f70:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x882f7cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882f9c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882f9c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x882fa8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882fc8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_882fc8:;
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883024; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x882fe4u; f_881a78(c);
    c->r[0] = 0x11b5d8cu;
    c->r[1] = c->r[8] + 0x74u;
    { uint32_t ea = 0x882ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x882ff8u; f_474488(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883014u; f_6ac3bc(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88301cu; f_6abd14(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
L_883024:;
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883fa0; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[5] = c->r[8] + 0x78u;
    { uint32_t ea = c->r[8] + 0x42u; ST8(ea, c->r[0]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0x883048u; f_2e79c8(c);
    (void)f_subs(c, c->r[0], 0x1au);
    if (COND_EQ) { goto L_883ee0; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_883eec; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_883f08; }
    c->r[0] = 0x1u;
    goto L_883ef0;
L_883070:;
    c->r[0] = 0x634u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x631u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88308cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8830ac; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8830ac:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8830b8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8830d8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8830d8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8830e4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883104; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883104:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883110u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883130; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883130:;
    { uint32_t ea = c->r[8] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_NE) { goto L_883234; }
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_883174; }
    c->r[0] = 0x11b5c2cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x88315cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0x883168u; f_722988(c);
    { uint32_t ea = c->r[8] + 0x48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883a44; }
L_883174:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x48u; ST8(ea, c->r[0]); }
    goto L_883a84;
L_883180:;
    c->r[0] = 0x3u;
    goto L_883228;
L_883188:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[14] = 0x883194u; f_85f118(c);
    goto L_88383c;
L_883198:;
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883208; }
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[8] + 0x78u;
    c->r[2] = 0x0u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[8] + 0x42u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x8831c8u; f_2e79b4(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8831d4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8831e8; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x8831e8u; f_8bad68(c);
L_8831e8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8831f4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883208; }
    { uint32_t ea = c->r[8] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[14] = 0x883208u; f_8b84cc(c);
L_883208:;
    c->r[14] = 0x88320cu; f_85f118(c);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2eu;
    goto L_883c50;
L_883224:;
    c->r[0] = 0x8u;
L_883228:;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[14] = 0x883230u; f_85f118(c);
    goto L_88427c;
L_883234:;
    c->r[0] = 0x11b5b44u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x883244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883248u; f_722988(c);
    goto L_883a84;
L_88324c:;
    { uint32_t ea = c->r[8] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8832b8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_8832b4;
L_883264:;
    c->r[0] = 0x6u;
    c->r[1] = 0x1u;
    c->r[2] = 0x7u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b5954u;
    { uint32_t ea = 0x883280u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883284u; f_75bba0(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[14] = 0x8832a0u; f_85f190(c);
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x8832acu; f_85e794(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
L_8832b4:;
    c->r[14] = 0x8832b8u; f_74f260(c);
L_8832b8:;
    { uint32_t ea = c->r[8] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_8832dc; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_8832e4; }
    goto L_883348;
L_8832dc:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
L_8832e4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8832f0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883310; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883310:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x88331cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88333c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_88333c:;
    c->r[0] = 0x3du;
    c->r[1] = 0x1u;
    c->r[14] = 0x883348u; f_85e794(c);
L_883348:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883354u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883374; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883374:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883380u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8833a0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8833a0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x4u;
    c->r[14] = 0x8833acu; f_85cb74(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xcu;
    c->r[2] = 0x3u;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6b4u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x8833d0u; f_753a74(c);
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6cbu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x39u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[3] = 0x6ccu;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[2] = udiv32(c->r[4], c->r[1]);
    c->r[1] = c->r[4] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[8] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x6c8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[8] + 0x6c9u; ST8(ea, c->r[2]); }
    c->r[14] = 0x88340cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883424; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[4]); }
L_883424:;
    { uint32_t ea = c->r[8] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    c->r[0] = c->r[0] + 0x18u;
    (void)f_subs(c, c->r[1], 0x15u);
    c->r[1] = 0x0u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    if (COND_NE) { c->r[0] = 0x4u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x883458u; f_85e5bc(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->v.s[0] = 0x41800000u;
    c->r[1] = 0x1u;
    c->r[14] = 0x883474u; f_6ac3bc(c);
    goto L_88427c;
L_883478:;
    c->r[0] = 0x11b5e94u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x883488u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_88427c; }
L_883498:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_88380c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8837f4; }
    { uint32_t ea = c->r[8] + 0x6c8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] * c->r[1] + c->r[0]; c->r[0] = r; }
    { uint32_t ea = c->r[8] + 0x39u; ST8(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_CC) { goto L_883fb8; }
    c->r[0] = 0x588u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x8834d4u; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_8842b8; }
    c->r[0] = 0x7u;
    c->r[4] = 0x0u;
    c->r[1] = 0x2u;
    c->r[2] = 0x40u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b56d4u;
    { uint32_t ea = c->r[8] + 0x43u; ST8(ea, c->r[4]); }
    { uint32_t ea = 0x883500u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883504u; f_75bd0c(c);
    { uint32_t ea = c->r[8] + 0x43u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x88351cu; f_85f190(c);
    goto L_882324;
L_883520:;
    c->r[0] = 0x11b5decu;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x883530u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_88427c; }
L_883540:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_88387c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8838d0; }
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_884028; }
    c->r[0] = 0xcu;
    goto L_8841f8;
L_883568:;
    c->r[0] = 0x11b5da4u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x883578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_88427c; }
L_883588:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_88393c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_883988; }
    c->r[1] = 0xfbb40cu;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[6] = c->r[8] + 0x78u;
    c->r[1] = 0x8835b0u + c->r[1];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_EQ) { goto L_884188; }
    c->r[4] = 0x0u;
L_8835bc:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = c->r[6];
    c->r[14] = 0x8835c8u; f_2e79c8(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_8842a8; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_CC) { goto L_8835bc; }
    c->r[7] = c->r[1];
    goto L_88418c;
L_8835e8:;
    c->r[0] = 0x11b5d24u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x8835f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_88427c; }
L_883608:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_883a04; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8839ec; }
    c->r[1] = 0x11b55a8u;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x883630u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1f4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883640u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883660; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883660:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x88366cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882324; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    goto L_88401c;
L_883694:;
    c->r[0] = 0x8u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x3u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x6b4u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x8836c0u; f_753a74(c);
    { uint32_t ea = c->r[8] + 0x54du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_8836e4; }
    c->r[1] = 0xfbb5acu;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = 0x8836e4u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
L_8836e4:;
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6cbu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x6ccu;
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    c->r[2] = udiv32(c->r[4], c->r[1]);
    c->r[1] = c->r[4] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[8] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x6c8u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[8] + 0x6c9u; ST8(ea, c->r[2]); }
    c->r[14] = 0x88371cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883730; }
    c->r[1] = 0xecd646u;
    c->r[1] = 0x883730u + c->r[1];
    c->r[14] = 0x883730u; f_8b8828(c);
L_883730:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x88373cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88375c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffefffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_88375c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883768u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883788; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffefffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883788:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883794u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8837b4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8837b4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8837c0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8837e0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x800u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8837e0:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2du;
    goto L_884250;
L_8837f4:;
    c->r[0] = 0x6b4u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x883804u; f_7530b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
L_88380c:;
    { uint32_t ea = c->r[8] + 0x6c8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[2] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[8] + 0x39u; ST8(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_88383c; }
    c->r[1] = 0x18u;
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    goto L_883a10;
L_88383c:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_NE) { goto L_88385c; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    goto L_883868;
L_88385c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[0] = 0x4u;
L_883868:;
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x21u;
    c->r[14] = 0x883878u; f_85e5bc(c);
    goto L_88427c;
L_88387c:;
    { uint32_t ea = c->r[8] + 0x6c8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = ~0x0u;
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_884304; }
    c->r[1] = (c->r[2] << 2);
    c->r[2] = 0x8838b0u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x8838c8u: goto L_8838c8; case 0x8842f8u: goto L_8842f8; case 0x884300u: goto L_884300; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_8838c8:;
    c->r[1] = c->r[0];
    goto L_884304;
L_8838d0:;
    c->r[0] = 0x6b4u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x8838e0u; f_7530b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    { uint32_t ea = c->r[8] + 0x6c8u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x6c9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x6cau; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = 0x0u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[2] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[0]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = ~0x0u;
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_884424; }
    c->r[1] = (c->r[2] << 2);
    c->r[2] = 0x88391cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x883934u: goto L_883934; case 0x884418u: goto L_884418; case 0x884420u: goto L_884420; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_883934:;
    c->r[1] = c->r[0];
    goto L_884424;
L_88393c:;
    c->r[1] = 0xfbb070u;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x88394cu + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x11b526cu;
    { uint32_t ea = 0x88395cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883960u; f_6cf2d0(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x88396cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->r[1] = 0xecd3f6u;
    c->r[1] = 0x883980u + c->r[1];
    c->r[14] = 0x883980u; f_8b8828(c);
    goto L_88427c;
L_883988:;
    c->r[0] = 0x66cu;
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x883998u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->r[1] = 0xfbb00cu;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x8839b0u + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x11b5208u;
    { uint32_t ea = 0x8839c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8839c4u; f_6cf2d0(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8839d0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->r[1] = 0xecd392u;
    c->r[1] = 0x8839e4u + c->r[1];
    c->r[14] = 0x8839e4u; f_8b8828(c);
    goto L_88427c;
L_8839ec:;
    c->r[0] = 0x66cu;
    c->r[1] = c->r[6];
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x8839fcu; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
L_883a04:;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x2fu;
L_883a10:;
    (void)f_subs(c, c->r[1], 0x15u);
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    if (COND_EQ) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    goto L_883c60;
L_883a44:;
    c->r[0] = 0x11b5338u;
    { uint32_t ea = 0x883a50u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = 0x0u - c->r[1];
    c->r[14] = 0x883a5cu; f_723150(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x883a68u; f_723150(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = 0x0u - c->r[1];
    c->r[14] = 0x883a78u; f_723194(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x883a84u; f_723194(c);
L_883a84:;
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_883aa0; }
    c->r[0] = 0x11b513cu;
    { uint32_t ea = 0x883a9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883aa0u; f_75c494(c);
L_883aa0:;
    c->r[0] = 0x11b52d0u;
    { uint32_t ea = 0x883aacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883ab0u; f_4282a8(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883ba4; }
    c->r[0] = 0x11b52b4u;
    c->r[4] = 0x9c5cu;
    { uint32_t ea = 0x883accu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_883afc; }
    c->r[0] = 0x11b50d0u;
    { uint32_t ea = 0x883aecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883af0u; f_45f0a8(c);
    c->r[0] = 0x11b5284u;
    { uint32_t ea = 0x883afcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_883afc:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[4]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[4] = 0x1u;
    c->r[14] = 0x883b14u; f_881a78(c);
    { uint32_t ea = c->r[8] + 0x550u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[8] + 0x74u;
    (void)f_subs(c, c->r[0], 0xeu);
    if (COND_NE) { goto L_883b30; }
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x883b30u; f_46f4dc(c);
L_883b30:;
    c->r[0] = 0x11b5240u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x883b40u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883b44u; f_474488(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x883b54u; f_6aff78(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883b70u; f_6ac3bc(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883b78u; f_6abd14(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883b88u; f_476790(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x2739u; }
    if (COND_NE) { c->r[2] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); } }
    goto L_883ba8;
L_883ba4:;
    c->r[5] = c->r[8] + 0x74u;
L_883ba8:;
    c->r[6] = c->r[8] + 0x78u;
    c->r[0] = c->r[6];
    c->r[14] = 0x883bb4u; f_2e79b0(c);
    { uint32_t ea = c->r[8] + 0x548u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x54du; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x883bc4u; f_2e79ac(c);
    c->r[0] = 0x11b51acu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x883bd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883bd8u; f_474380(c);
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_883bf4; }
    c->r[0] = 0x11b57a4u;
    { uint32_t ea = 0x883bf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883bf4u; f_341df0(c);
L_883bf4:;
    c->r[0] = 0x11b6cdcu;
    c->r[1] = 0xffu;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x883c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883c10u; f_361ac8(c);
    c->r[0] = 0x11b52a0u;
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x883c20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_883c38; }
    c->r[14] = 0x883c2cu; f_5df850(c);
    c->r[0] = 0x4u;
    c->r[14] = 0x883c34u; f_85e67c(c);
    goto L_88427c;
L_883c38:;
    c->r[14] = 0x883c3cu; f_5df7e0(c);
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x9u;
L_883c50:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_EQ) { c->r[0] = 0x2u; }
L_883c60:;
    if (COND_NE) { c->r[0] = 0x4u; }
    c->r[14] = 0x883c68u; f_85e5bc(c);
    goto L_88427c;
L_883c70:;
    c->r[14] = 0x883c74u; f_5e0a58(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883ca4; }
    c->r[14] = 0x883c84u; f_6af894(c);
    c->r[0] = 0x11b50f0u;
    { uint32_t ea = 0x883c90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883c94u; f_476790(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x2739u; }
    if (COND_NE) { c->r[2] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); } }
L_883ca4:;
    { uint32_t ea = c->r[8] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_883cc0; }
    c->r[0] = 0x11b56d8u;
    { uint32_t ea = 0x883cbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883cc0u; f_341d30(c);
L_883cc0:;
    c->r[0] = 0x9u;
    c->r[1] = 0x3u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x66cu;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x883ce0u; f_74edec(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883cecu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883d0c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883d0c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883d18u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883d38; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffdfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883d38:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883d44u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883d64; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883d64:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883d70u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883d90; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883d90:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883d9cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883dbc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883dbc:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883dc8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883de8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883de8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883df4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883e14; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883e14:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883e20u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883e40; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883e40:;
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883e9c; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x883e5cu; f_881a78(c);
    c->r[0] = 0x11b4f14u;
    c->r[1] = c->r[8] + 0x74u;
    { uint32_t ea = 0x883e6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883e70u; f_474488(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883e8cu; f_6ac3bc(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883e94u; f_6abd14(c);
    { uint32_t ea = c->r[8] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
L_883e9c:;
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8843e8; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[5] = c->r[8] + 0x78u;
    { uint32_t ea = c->r[8] + 0x42u; ST8(ea, c->r[0]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0x883ec0u; f_2e79c8(c);
    (void)f_subs(c, c->r[0], 0x1au);
    if (COND_EQ) { goto L_88432c; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_884334; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_884350; }
    c->r[0] = 0x1u;
    goto L_884338;
L_883ee0:;
    c->r[0] = 0x0u;
    goto L_883ef0;
L_883eec:;
    c->r[0] = 0x2u;
L_883ef0:;
    { uint32_t ea = c->r[8] + 0x67au; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x67cu;
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[8] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x679u; ST8(ea, c->r[0]); }
L_883f08:;
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x883f1cu; f_2e79b4(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x883f28u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883f3c; }
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x883f3cu; f_8bad68(c);
L_883f3c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883f48u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883f5c; }
    { uint32_t ea = c->r[8] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[14] = 0x883f5cu; f_8b84cc(c);
L_883f5c:;
    c->r[1] = 0xfbaa50u;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x883f6cu + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x11b4c4cu;
    { uint32_t ea = 0x883f7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x883f80u; f_6cf2d0(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x883f8cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883fa0; }
    c->r[1] = 0xeccdd6u;
    c->r[1] = 0x883fa0u + c->r[1];
    c->r[14] = 0x883fa0u; f_8b8828(c);
L_883fa0:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2eu;
    goto L_884250;
L_883fb8:;
    c->r[0] = 0x4u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3fu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x883fd4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_883ff4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_883ff4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x884000u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_882324; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
L_88401c:;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    goto L_882324;
L_884028:;
    c->r[0] = 0x9u;
    c->r[1] = 0x3u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x66cu;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x884048u; f_74edec(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x884054u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_884074; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_884074:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x884080u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8840a0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffff7ffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8840a0:;
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8840acu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8840cc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8840cc:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8840d8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8840f8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8840f8:;
    { uint32_t ea = c->r[8] + 0x54du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] - 0x1u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_884124; }
    c->r[7] = 0xfbab6cu;
    c->r[3] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[7] = 0x884124u + c->r[7];
    { uint32_t ea = c->r[7] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
L_884124:;
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_88414c; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { goto L_884148; }
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[1]);
    c->r[1] = 0xfbab48u;
    c->r[1] = 0x884148u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
L_884148:;
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[0]); }
L_88414c:;
    c->r[1] = ~0x0u;
    c->r[1] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_88444c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x884168u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x884180u: goto L_884180; case 0x884458u: goto L_884458; case 0x88445cu: goto L_88445c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_884180:;
    c->r[0] = 0x5u;
    goto L_88445c;
L_884188:;
    c->r[1] = 0x0u;
L_88418c:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[0] = c->r[6];
    c->r[14] = 0x884198u; f_2e79b4(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x8841a4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8841b8; }
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x8841b8u; f_8bad68(c);
L_8841b8:;
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x42u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x8841d0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8841e4; }
    { uint32_t ea = c->r[8] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[14] = 0x8841e4u; f_8b84cc(c);
L_8841e4:;
    { uint32_t ea = c->r[8] + 0x41u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_882324; }
    c->r[0] = 0xau;
L_8841f8:;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x43u; ST8(ea, c->r[0]); }
    goto L_882324;
L_884208:;
    c->r[0] = 0x0u;
    goto L_88421c;
L_884218:;
    c->r[0] = 0x4u;
L_88421c:;
    { uint32_t ea = c->r[8] + 0x54du; ST8(ea, c->r[0]); }
L_884220:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x88422cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_884240; }
    c->r[1] = 0x588u;
    c->r[1] = c->r[8] + c->r[1];
    c->r[14] = 0x884240u; f_8b8828(c);
L_884240:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x21u;
L_884250:;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x88426cu; f_85e5bc(c);
L_88426c:;
    c->r[5] = 0x0u;
L_884270:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_884278:;
    c->r[14] = 0x88427cu; f_74f260(c);
L_88427c:;
    { uint32_t ea = c->r[8] + 0x3eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x13u);
    if (COND_HI) { goto L_88429c; }
L_884288:;
    c->r[0] = 0x11b4948u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x884298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88429cu; f_6e8b54(c);
L_88429c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_8842a8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x3u;
    c->r[5] = 0x0u;
    goto L_884278;
L_8842b8:;
    c->r[0] = 0x5u;
    c->r[1] = 0x2u;
    c->r[2] = 0x3fu;
    { uint32_t ea = c->r[8] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b4900u;
    { uint32_t ea = 0x8842d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8842d8u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[14] = 0x8842f4u; f_85f190(c);
    goto L_882318;
L_8842f8:;
    c->r[1] = 0x5u;
    goto L_884304;
L_884300:;
    c->r[1] = 0x4u;
L_884304:;
    { uint32_t ea = c->r[8] + 0x54du; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x884314u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->r[1] = 0xecca4eu;
    c->r[1] = 0x884328u + c->r[1];
    c->r[14] = 0x884328u; f_8b8828(c);
    goto L_88427c;
L_88432c:;
    c->r[0] = 0x0u;
    goto L_884338;
L_884334:;
    c->r[0] = 0x2u;
L_884338:;
    { uint32_t ea = c->r[8] + 0x67au; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x67cu;
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[8] + c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x679u; ST8(ea, c->r[0]); }
L_884350:;
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x0u;
    c->r[1] = c->r[6];
    c->r[14] = 0x884364u; f_2e79b4(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[14] = 0x884370u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_884384; }
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x884384u; f_8bad68(c);
L_884384:;
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x884390u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8843a4; }
    { uint32_t ea = c->r[8] + 0x41u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x42u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[14] = 0x8843a4u; f_8b84cc(c);
L_8843a4:;
    c->r[1] = 0xfba608u;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x8843b4u + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x11b4804u;
    { uint32_t ea = 0x8843c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8843c8u; f_6cf2d0(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x8843d4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8843e8; }
    c->r[1] = 0xecc98eu;
    c->r[1] = 0x8843e8u + c->r[1];
    c->r[14] = 0x8843e8u; f_8b8828(c);
L_8843e8:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2eu;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x884414u; f_85e5bc(c);
    goto L_8822f4;
L_884418:;
    c->r[1] = 0x5u;
    goto L_884424;
L_884420:;
    c->r[1] = 0x4u;
L_884424:;
    { uint32_t ea = c->r[8] + 0x54du; ST8(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x884434u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88427c; }
    c->r[1] = 0xecc92eu;
    c->r[1] = 0x884448u + c->r[1];
    c->r[14] = 0x884448u; f_8b8828(c);
    goto L_88427c;
L_88444c:;
    c->r[0] = 0x0u;
    goto L_88445c;
L_884458:;
    c->r[0] = 0x4u;
L_88445c:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[8];
    c->r[14] = 0x884468u; f_887704(c);
    c->r[1] = 0xfba544u;
    { uint32_t ea = c->r[8] + 0x679u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x884478u + c->r[1];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x11b4740u;
    { uint32_t ea = 0x884488u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88448cu; f_6cf2d0(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x1u;
    c->r[14] = 0x884498u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8844ac; }
    c->r[1] = 0xecc8cau;
    c->r[1] = 0x8844acu + c->r[1];
    c->r[14] = 0x8844acu; f_8b8828(c);
L_8844ac:;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x2u;
    c->r[3] = 0x2eu;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x8844d8u; f_85e5bc(c);
    goto L_882324;
}
