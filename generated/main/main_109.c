#include "cpu.h"
#include "neon_rt.h"
void f_212710(Cpu *c);
void f_237eb4(Cpu *c);
void f_23805c(Cpu *c);
void f_238414(Cpu *c);
void f_23863c(Cpu *c);
void f_23864c(Cpu *c);
void f_238690(Cpu *c);
void f_474380(Cpu *c);
void f_474488(Cpu *c);
void f_475a30(Cpu *c);
void f_5df760(Cpu *c);
void f_5df8cc(Cpu *c);
void f_5df924(Cpu *c);
void f_5dfadc(Cpu *c);
void f_5e0a58(Cpu *c);
void f_5e6434(Cpu *c);
void f_5e7c2c(Cpu *c);
void f_5f8534(Cpu *c);
void f_5f856c(Cpu *c);
void f_5f85fc(Cpu *c);
void f_6ab984(Cpu *c);
void f_6ab9c0(Cpu *c);
void f_6abd14(Cpu *c);
void f_6ac3bc(Cpu *c);
void f_6ad0e8(Cpu *c);
void f_6af894(Cpu *c);
void f_6af8a0(Cpu *c);
void f_6df23c(Cpu *c);
void f_6df270(Cpu *c);
void f_6e8b54(Cpu *c);
void f_722c64(Cpu *c);
void f_74edec(Cpu *c);
void f_74ee98(Cpu *c);
void f_74f260(Cpu *c);
void f_74fa40(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75bd0c(Cpu *c);
void f_85ca80(Cpu *c);
void f_85cb3c(Cpu *c);
void f_85cb48(Cpu *c);
void f_85cb74(Cpu *c);
void f_85cba0(Cpu *c);
void f_85cbc4(Cpu *c);
void f_85d424(Cpu *c);
void f_85d464(Cpu *c);
void f_85e5bc(Cpu *c);
void f_85e794(Cpu *c);
void f_85f118(Cpu *c);
void f_85f190(Cpu *c);
void f_85f234(Cpu *c);
void f_85f270(Cpu *c);
void f_87b3a4(Cpu *c);
void f_87e130(Cpu *c);
void f_87e6b4(Cpu *c);
void f_87ecc0(Cpu *c);
void f_87ed84(Cpu *c);
void f_87efc8(Cpu *c);
void f_87f294(Cpu *c);
void f_87f9d8(Cpu *c);
void f_880214(Cpu *c);
void f_8808b4(Cpu *c);
void f_880f28(Cpu *c);
void f_8810c4(Cpu *c);
void f_8a6e34(Cpu *c);
void f_8ba920(Cpu *c);
void f_8bb820(Cpu *c);
void f_15efdc4(Cpu *c);
void f_87b544(Cpu *restrict c) {
    FN_ENTER(0x87b544u);
L_87b544:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x108u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87b574; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); } }
L_87b574:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87b57cu; f_85ca80(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x87b584u; f_87e130(c);
    c->r[0] = 0x11bdd88u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x87b594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x11bd610u;
    { uint32_t ea = 0x87b5a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87b5a8u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87b5d8; }
    c->v.s[0] = LD32(c->r[4] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_87b5d8; }
    c->r[0] = 0x11bd7b8u;
    { uint32_t ea = 0x87b5ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    ST32(c->r[4] + 104u, c->v.s[0]);
L_87b5d8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], 0x1fu);
    if (COND_HI) { goto L_87b77c; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x87b5f4u + 0xcu;
    c->r[6] = 0x2000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x1000000u;
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x87b680u: goto L_87b680; case 0x87b6a4u: goto L_87b6a4; case 0x87b70cu: goto L_87b70c; case 0x87b744u: goto L_87b744; case 0x87b77cu: goto L_87b77c; case 0x87b790u: goto L_87b790; case 0x87b838u: goto L_87b838; case 0x87b84cu: goto L_87b84c; case 0x87b890u: goto L_87b890; case 0x87b8bcu: goto L_87b8bc; case 0x87b904u: goto L_87b904; case 0x87b930u: goto L_87b930; case 0x87b954u: goto L_87b954; case 0x87ba44u: goto L_87ba44; case 0x87ba80u: goto L_87ba80; case 0x87bb28u: goto L_87bb28; case 0x87bd54u: goto L_87bd54; case 0x87bd94u: goto L_87bd94; case 0x87bf10u: goto L_87bf10; case 0x87c054u: goto L_87c054; case 0x87c19cu: goto L_87c19c; case 0x87c25cu: goto L_87c25c; case 0x87c5acu: goto L_87c5ac; case 0x87c668u: goto L_87c668; case 0x87c6a0u: goto L_87c6a0; case 0x87c72cu: goto L_87c72c; case 0x87c950u: goto L_87c950; case 0x87c9d4u: goto L_87c9d4; case 0x87cb78u: goto L_87cb78; case 0x87cc28u: goto L_87cc28; case 0x87dd7cu: goto L_87dd7c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87b680:;
    c->r[0] = 0x11bd6f8u;
    c->r[2] = 0x366cu;
    { uint32_t ea = 0x87b690u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87cde4; }
    c->r[0] = 0x2u;
    goto L_87b780;
L_87b6a4:;
    c->r[0] = 0x11bd504u;
    { uint32_t ea = 0x87b6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87b6b4u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    c->v.s[0] = LD32(c->r[4] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_87b6dc; }
    { uint32_t r = c->r[5] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87dd7c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_87b6dc:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11bd4c4u;
    { uint32_t ea = 0x87b6f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_87b6ec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x41f00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5f856c(c);
L_87b70c:;
    c->r[0] = 0x11bd49cu;
    { uint32_t ea = 0x87b718u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87b71cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x3u;
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87b738u; f_85cb74(c);
    c->r[0] = 0x11bd470u;
    { uint32_t ea = 0x87b744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_87ba24;
L_87b744:;
    c->r[1] = c->r[1] & 0xff000000u;
    c->r[0] = c->r[1] | 0x7u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11bd764u;
    { uint32_t ea = 0x87b75cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6bu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_87cf90; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] | 0x5u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    goto L_87cf98;
L_87b77c:;
    c->r[0] = 0x20u;
L_87b780:;
    c->r[1] = (c->r[1] & 0xffffff00u) | ((c->r[0] << 0) & 0xffu);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87b790:;
    c->r[0] = 0x11bd410u;
    c->r[8] = c->r[13] + 0x8u;
    c->r[1] = 0x100u;
    { uint32_t ea = 0x87b7a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x87b7b0u; f_15efdc4(c);
    c->r[0] = 0x11bd410u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4du;
    { uint32_t ea = 0x87b7c4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87b7c8u; f_75bd0c(c);
    c->r[1] = 0xfc3384u;
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[7], 0x6u);
    c->r[0] = 0x1u;
    if (COND_HI) { c->r[0] = 0x2u; }
    c->r[0] = c->r[7] - c->r[0];
    c->r[1] = 0x87b7e8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x87b7f4u; f_75bd0c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[8];
    c->r[1] = 0xffu;
    c->r[2] = c->r[6];
    c->r[14] = 0x87b808u; f_74fa40(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x87b824u; f_85f190(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xdu;
    c->r[14] = 0x87b830u; f_74f260(c);
    c->r[0] = 0x6u;
    goto L_87b924;
L_87b838:;
    { uint32_t r = c->r[5] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87dd7c; }
    c->r[14] = 0x87b844u; f_85f118(c);
    c->r[0] = 0x7u;
    goto L_87b924;
L_87b84c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87b854u; f_87e6b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    c->r[0] = 0x11bd348u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87b86cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x9fu; ST8(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[4] + 0x47u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[1] = 0x8u; }
    c->r[0] = c->r[0] & 0xff000000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_87ce48;
L_87b890:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87b898u; f_87ecc0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x43u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85d424(c);
L_87b8bc:;
    c->r[0] = 0x11bd304u;
    c->r[1] = 0x1u;
    c->r[2] = 0x42u;
    { uint32_t ea = 0x87b8d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87b8d4u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x87b8f0u; f_85f190(c);
    c->r[0] = 0xbu;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42f00000u;
    goto L_87daf8;
L_87b904:;
    { uint32_t r = c->r[5] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87dd7c; }
    c->v.s[0] = LD32(c->r[4] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_87dd7c; }
    c->r[14] = 0x87b920u; f_85f118(c);
    c->r[0] = 0xeu;
L_87b924:;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87b930:;
    c->r[0] = 0xdu;
    c->r[1] = (c->r[1] & 0xffffff00u) | ((c->r[0] << 0) & 0xffu);
    c->r[0] = 0x11bd578u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x87b948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5df8cc(c);
L_87b954:;
    c->r[0] = 0x11bd560u;
    { uint32_t ea = 0x87b960u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87b964u; f_5e6434(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    { uint32_t ea = c->r[0] + 0x6bu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] ^ 0x1u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[1]); }
    c->r[14] = 0x87b984u; f_5e0a58(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[0] = (c->r[0] & 0xff000000u) | ((c->r[1] << 0) & 0xffffffu);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44e10000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87b9acu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87b9cc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87b9cc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87b9d8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87b9f8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87b9f8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87ba04u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87ba10u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x87ba1cu; f_85cb74(c);
    c->r[0] = 0x11bd18cu;
    { uint32_t ea = 0x87ba28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_87ba24:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x40000000u;
L_87ba2c:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5f8534(c);
L_87ba44:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87ba4cu; f_87ed84(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    c->r[0] = 0xfu;
    c->r[1] = 0x366cu;
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = 0x11bd31cu;
    { uint32_t ea = 0x87ba6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87ba80:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87ba88u; f_87efc8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    c->r[0] = 0x10u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44e10000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87bab0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bad0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bad0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87badcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bafc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bafc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bb08u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87bb14u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85cb74(c);
L_87bb28:;
    c->r[0] = 0x11bd0a8u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x87bb38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bb3cu; f_6e8b54(c);
    c->r[0] = 0x11bd06cu;
    { uint32_t ea = 0x87bb48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bb4cu; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87bbec; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x44u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87bb70u; f_87b3a4(c);
    c->r[0] = 0x11bd200u;
    c->r[1] = c->r[4] + 0x74u;
    { uint32_t ea = 0x87bb80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bb84u; f_474488(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bba4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x87bb9cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
L_87bba4:;
    c->r[0] = 0x690u;
    c->r[1] = 0x10u;
    c->r[14] = 0x87bbb0u; f_6ab984(c);
    c->r[14] = 0x87bbb4u; f_6ab9c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_87bbec; }
    c->r[1] = 0x0u;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bbe4u; f_6ac3bc(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bbecu; f_6abd14(c);
L_87bbec:;
    { uint32_t r = c->r[5] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87d384; }
    c->r[0] = 0x11bd184u;
    c->r[1] = 0x367cu;
    { uint32_t ea = 0x87bc04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffff00u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_87d84c; }
    c->r[0] = c->r[1] | 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87bc2cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bc4c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bc4c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bc58u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bc78; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bc78:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87bc84u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bca4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bca4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bcb0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bcd0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bcd0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87bcdcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bcfc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bcfc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bd08u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bd28; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bd28:;
    c->r[0] = 0x11bd050u;
    c->r[1] = 0x367du;
    { uint32_t ea = 0x87bd38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87cb24; }
    c->r[1] = 0x11bd16cu;
    { uint32_t ea = c->r[4] + 0x60eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x87bd54u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_87d784;
L_87bd54:;
    c->r[0] = 0x11bce7cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87bd64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bd68u; f_6e8b54(c);
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87ce54; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87bd7cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d424; }
    c->r[14] = 0x87bd88u; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_87d444; }
    goto L_87dd7c;
L_87bd94:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87bd9cu; f_87f294(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87cfa8; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_87cfc0; }
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87bdc0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bde0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bde0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bdecu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87be0c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87be0c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87be18u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87be38; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87be38:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87be44u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87be64; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87be64:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87be70u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87be90; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87be90:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87be9cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bebc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bebc:;
    c->r[0] = c->r[4] + 0x600u;
    c->r[1] = 0x5u;
    c->r[2] = 0xbu;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x87bed4u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x17u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x87befcu; f_85e5bc(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x87bf08u; f_74f260(c);
    goto L_87cfc0;
L_87bf10:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87bf18u; f_87f9d8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87d048; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_87d078; }
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87bf3cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bf5c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffbfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bf5c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bf68u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bf88; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffbfffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bf88:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87bf94u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bfb4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bfb4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87bfc0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87bfe0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87bfe0:;
    c->r[0] = 0x11bced4u;
    { uint32_t ea = 0x87bfecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87bff0u; f_5e0a58(c);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c00c; }
    c->r[14] = 0x87c004u; f_6af894(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c00cu; f_6ad0e8(c);
L_87c00c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x18u;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x87c038u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87c044u; f_85e794(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[14] = 0x87c050u; f_74f260(c);
    goto L_87d07c;
L_87c054:;
    c->r[0] = 0x11bcb7cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87c064u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c068u; f_6e8b54(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x87c070u; f_880214(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87c08cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c0ac; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff7fffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c0ac:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c0b8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c0d8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffff7fffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c0d8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c0e4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c104; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffeffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c104:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c110u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c130; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffeffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c130:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c13cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c15c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c15c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c168u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c188; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c188:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x19u;
    goto L_87c588;
L_87c19c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87c1a4u; f_8808b4(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x11bcbfcu;
    { uint32_t ea = 0x87c1b8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c1bcu; f_237eb4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c1c4u; f_23805c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c1ccu; f_238414(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c1d4u; f_23863c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c1dcu; f_23864c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c1e4u; f_238690(c);
    { uint32_t ea = c->r[4] + 0x810u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d67c; }
    c->r[0] = 0x11bccc4u;
    { uint32_t ea = 0x87c1fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x69u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d89c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x11bc998u;
    { uint32_t ea = c->r[4] + 0x810u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11bc984u;
    { uint32_t ea = 0x87c220u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x87c224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c228u; f_212710(c);
    c->r[0] = 0x11bc970u;
    c->v.s[0] = 0x40a00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x87c244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c248u; f_5f8534(c);
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    goto L_87d8ac;
L_87c25c:;
    c->r[0] = 0x11bc974u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87c26cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c270u; f_6e8b54(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x87c278u; f_8810c4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    c->r[0] = 0x11bd134u;
    { uint32_t ea = 0x87c290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x87c29cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c2a8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c2c8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffbffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c2c8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c2d4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c2f4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffbffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c2f4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c300u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c320; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfff7ffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c320:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c32cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c34c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfff7ffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c34c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c358u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c378; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffefffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c378:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c384u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c3a4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffefffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c3a4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c3b0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c3d4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffdfffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    c->r[14] = 0x87c3d4u; f_8bb820(c);
L_87c3d4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c3e0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c400; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffdfffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c400:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c40cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c42c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeffffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c42c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c438u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c458; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeffffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c458:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c464u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c484; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfdffffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c484:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c490u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c4b0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfdffffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c4b0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c4bcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c4dc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfbffffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c4dc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c4e8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c508; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfbffffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c508:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_87d24c; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87c52cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c54c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c54c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c558u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c578; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c578:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0xbu;
    c->r[3] = 0x0u;
L_87c588:;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x87c5a4u; f_85e5bc(c);
    goto L_87cf84;
L_87c5ac:;
    { uint32_t r = c->r[5] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87dd7c; }
    c->r[14] = 0x87c5b8u; f_85f118(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87c5c4u; f_85e794(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[0] = (c->r[0] & 0xff000000u) | ((c->r[1] << 0) & 0xffffffu);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44e10000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87c5ecu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c60c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c60c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c618u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c638; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c638:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c644u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c650u; f_85cba0(c);
    c->r[14] = 0x87c654u; f_85d424(c);
    c->r[14] = 0x87c658u; f_85d464(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    goto L_87d7f0;
L_87c668:;
    c->r[0] = 0x19u;
    c->r[2] = 0x5169u;
    c->r[1] = (c->r[1] & 0xffffff00u) | ((c->r[0] << 0) & 0xffu);
    c->r[0] = 0x11bc83cu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x87c684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x69u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5e7c2c(c);
L_87c6a0:;
    c->r[0] = 0x11bc814u;
    { uint32_t ea = 0x87c6acu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c6b0u; f_5e6434(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[1] = 0x5168u;
    c->r[2] = 0x0u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[2]); c->r[5] = ea; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_87d918; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_87da00; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_87dae8; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = 0x5169u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dae8; }
    goto L_87da18;
L_87c72c:;
    c->r[14] = 0x87c730u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_87d0e0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x312u;
    c->r[1] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87c758u; f_85cb48(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c764u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c784; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c784:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c790u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c7b0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c7b0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c7bcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c7dc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c7dc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c7e8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c808; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c808:;
    c->r[0] = c->r[4] + 0x600u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x1u;
    c->r[14] = 0x87c820u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[14] = 0x87c82cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c844; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_87c844:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x87c850u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c86c; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_87c86c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c878u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c898; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c898:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c8a4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c8c4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c8c4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87c8d0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c8f0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c8f0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87c8fcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87c91c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87c91c:;
    c->r[0] = 0x6e8u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = 0x11bc2a4u;
    { uint32_t ea = c->r[4] + 0x6e5u; ST8(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87c93cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c940u; f_6e8b54(c);
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85f118(c);
L_87c950:;
    c->r[14] = 0x87c954u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    c->r[14] = 0x87c960u; f_85f118(c);
    c->r[0] = 0x11c3f80u;
    { uint32_t ea = 0x87c96cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d1c4; }
    c->r[0] = 0x1cu;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11bc538u;
    { uint32_t ea = 0x87c988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c98cu; f_5df924(c);
    c->r[0] = 0x11bc234u;
    c->r[1] = 0x8u;
    c->r[2] = 0x32u;
    { uint32_t ea = 0x87c9a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c9a4u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    c->r[14] = 0x87c9c0u; f_85f190(c);
    goto L_87d238;
L_87c9d4:;
    c->r[0] = 0x11bc4e0u;
    { uint32_t ea = 0x87c9e0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87c9e4u; f_5e6434(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[14] = 0x87c9f8u; f_85f118(c);
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87ca0cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ca2c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87ca2c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87ca38u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ca58; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87ca58:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87ca64u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ca84; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87ca84:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87ca90u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cab0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cab0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87cabcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cadc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cadc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87cae8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cb08; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cb08:;
    c->r[0] = 0x11bc270u;
    c->r[1] = 0x367du;
    { uint32_t ea = 0x87cb18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d778; }
L_87cb24:;
    { uint32_t ea = c->r[4] + 0x60eu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = 0x610u;
    c->r[3] = 0x0u;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[2] = 0xbu;
    c->r[0] = 0x4u - c->r[0];
    { uint32_t ea = c->r[4] + 0x60du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_NE) { c->r[0] = 0x4u; }
    goto L_87d7cc;
L_87cb78:;
    c->r[0] = (c->r[1] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_EQ) { goto L_87cbbc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x11bc324u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x87cb9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87cba0u; f_5df760(c);
    c->r[0] = 0x11bc030u;
    c->v.s[0] = 0x40000000u;
    { uint32_t ea = 0x87cbb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87cbb4u; f_6df23c(c);
    c->r[0] = 0xau;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
L_87cbbc:;
    c->r[0] = 0x11bc2f8u;
    { uint32_t ea = 0x87cbc8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87cbccu; f_5e6434(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x11bbff8u;
    { uint32_t ea = 0x87cbe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87cbecu; f_6df270(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x11bc2c0u;
    { uint32_t ea = 0x87cc00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x69u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd84; }
    c->r[0] = 0x11bbf8cu;
    c->r[1] = 0x11bbf98u;
    { uint32_t ea = 0x87cc1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x87cc20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87cc24u; f_212710(c);
    goto L_87ddb4;
L_87cc28:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87cc30u; f_880f28(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_87d148; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87dd7c; }
    c->r[0] = 0x5188u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xffff0000u;
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_NE) { c->r[0] = c->r[1] | c->r[0]; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87cc68u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cc88; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cc88:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87cc94u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ccb4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87ccb4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x12u;
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_87dd7c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x87ccd0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x87cd10u: goto L_87cd10; case 0x87db08u: goto L_87db08; case 0x87db90u: goto L_87db90; case 0x87dcccu: goto L_87dccc; case 0x87dd24u: goto L_87dd24; case 0x87dd7cu: goto L_87dd7c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87cd10:;
    c->r[0] = c->r[4] + 0x600u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x87cd24u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87cd30u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cd50; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cd50:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87cd5cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cd7c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cd7c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87cd88u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cda8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cda8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87cdb4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cdd4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cdd4:;
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1bu;
    goto L_87d8e0;
L_87cde4:;
    c->r[0] = 0x11bbdc4u;
    { uint32_t ea = 0x87cdf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_87d764; }
    c->v.s[0] = 0x41f00000u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x87ce18u; f_5f8534(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xff0000ffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x11bc08cu;
    { uint32_t ea = 0x87ce34u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x6bu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] ^ 0x1u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[1]); }
    c->r[1] = 0x7u;
    c->r[0] = (c->r[0] & 0xff000000u) | ((c->r[1] << 0) & 0xffffffu);
L_87ce48:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87ce54:;
    c->r[0] = 0x10u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44e10000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87ce74u; f_85cb74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87ce80u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cea0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cea0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87ceacu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cecc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cecc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87ced8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cef8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cef8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87cf04u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cf24; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cf24:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87cf30u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cf50; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cf50:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87cf5cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87cf7c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87cf7c:;
    c->r[14] = 0x87cf80u; f_85d424(c);
    c->r[14] = 0x87cf84u; f_85d464(c);
L_87cf84:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_87d7f0;
L_87cf90:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[1]); }
L_87cf98:;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5e0a58(c);
L_87cfa8:;
    c->r[0] = 0x11bbdd4u;
    { uint32_t ea = 0x87cfb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87cfb8u; f_722c64(c);
    c->r[0] = 0x1du;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
L_87cfc0:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    c->r[1] = 0x11bbc00u;
    { uint32_t ea = 0x87cfd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x200u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_87d038; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_EQ) { goto L_87d008; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_EQ) { c->r[2] = c->r[2] & 0xff0000u; }
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0x100000u); }
    if (COND_NE) { goto L_87d038; }
L_87d008:;
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_HI) { goto L_87d038; }
    c->r[2] = 0x11bc2f8u;
    c->r[3] = 0x6bf4u;
    { uint32_t ea = 0x87d024u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xa0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = 0x10u; }
    if (COND_NE) { c->r[1] = c->r[1] & ~(c->r[2] >> 15); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x10u; }
L_87d038:;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_87d0d4;
L_87d048:;
    c->r[0] = 0x1du;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11bbd2cu;
    { uint32_t ea = 0x87d05cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87d060u; f_722c64(c);
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + 0x70u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d07c; }
    c->r[14] = 0x87d074u; f_6af8a0(c);
    goto L_87d07c;
L_87d078:;
    c->r[5] = c->r[4] + 0x70u;
L_87d07c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] & 0xff00u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x500u);
    if (COND_NE) { goto L_87d0cc; }
    { uint32_t ea = c->r[4] + 0x3eu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_HI) { goto L_87d0cc; }
    c->r[2] = 0x11bc264u;
    c->r[3] = 0x6bf4u;
    { uint32_t ea = 0x87d0b8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0xa0000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = 0x10u; }
    if (COND_NE) { c->r[1] = c->r[1] & ~(c->r[2] >> 15); }
    if (COND_NE) { c->r[1] = c->r[1] + 0x10u; }
L_87d0cc:;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_87d0d4:;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_6ad0e8(c);
L_87d0e0:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[14] = 0x87d0ecu; f_85f118(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d0f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d118; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d118:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d124u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87daf0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    goto L_87daf0;
L_87d148:;
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87d15cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d17c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d17c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d188u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
L_87d1a4:;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87d1c4:;
    c->r[1] = 0x11c371cu;
    c->r[0] = 0x11bb9fcu;
    { uint32_t ea = 0x87d1d4u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x87d1d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + 0x58u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87d1e8u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[4] = 0x0u;
    c->r[0] = 0x3u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x87d204u; f_85f190(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    if (COND_CC) { goto L_87d238; }
    c->r[0] = 0x11c36ccu;
    { uint32_t ea = 0x87d224u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x11c36bcu;
    { uint32_t ea = 0x87d230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_87d238:;
    c->r[0] = 0x6u;
    c->r[1] = 0x6u;
    goto L_87d7f0;
L_87d24c:;
    c->r[0] = 0x10u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44e10000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87d26cu; f_85cb74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d278u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d298; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d298:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d2a4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d2c4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d2c4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d2d0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d2f0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d2f0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d2fcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d31c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d31c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d328u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d348; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d348:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d354u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d374; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d374:;
    c->r[14] = 0x87d378u; f_85d424(c);
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85d464(c);
L_87d384:;
    c->v.s[0] = LD32(c->r[4] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87dd7c; }
    c->r[0] = 0xfu;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87d3a8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d3c8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d3c8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d3d4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d3f4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d3f4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d400u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d40cu; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x87d418u; f_85cb74(c);
    c->r[0] = 0x11bb790u;
    { uint32_t ea = 0x87d424u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_87b6ec;
L_87d424:;
    c->r[0] = 0x11bbee8u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x87d434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_87dd7c; }
L_87d444:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_87d82c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87d7fc; }
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x12u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[1] = c->r[1] & 0xffff0000u;
    if (COND_NE) { c->r[0] = c->r[1] | c->r[0]; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87d484u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d4a4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d4a4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d4b0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d4d0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d4d0:;
    c->r[0] = 0x11bb8a8u;
    c->r[1] = 0x367du;
    { uint32_t ea = 0x87d4e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_87d530; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x15u);
    if (COND_HI) { goto L_87d530; }
    c->r[2] = 0x1u;
    c->r[3] = 0x2c0000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = 0x5188u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1fu; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0xffffff00u) | ((c->r[1] << 0) & 0xffu); }
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x5184u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[13] = c->r[13] + 0x108u; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return; }
L_87d530:;
    c->r[1] = ~0x11u;
    c->r[0] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_87d7e8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x87d54cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x87d580u: goto L_87d580; case 0x87d7e8u: goto L_87d7e8; case 0x87de6cu: goto L_87de6c; case 0x87dee0u: goto L_87dee0; case 0x87e020u: goto L_87e020; case 0x87e07cu: goto L_87e07c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87d580:;
    c->r[0] = c->r[4] + 0x600u;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x87d594u; f_74edec(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d5a0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d5c0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d5c0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d5ccu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d5ec; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x20u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d5ec:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d5f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d618; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d618:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d624u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d644; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d644:;
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    c->r[0] = c->r[0] + 0x1bu;
    (void)f_subs(c, c->r[1], 0x15u);
    c->r[1] = 0x0u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    if (COND_EQ) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    goto L_87e00c;
L_87d67c:;
    c->r[0] = 0x11u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87d690u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d6b0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d6b0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d6bcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d6dc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d6dc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x87d6e8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0xbu;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { c->r[1] = c->r[1] | 0x20u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); } }
    c->r[0] = c->r[4] + 0x600u;
    c->r[1] = 0x5u;
    c->r[14] = 0x87d710u; f_74edec(c);
    { uint32_t ea = c->r[4] + 0x60eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x610u;
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1au;
    { uint32_t ea = c->r[4] + 0x60du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x87d754u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87d760u; f_85e794(c);
    goto L_87d8ac;
L_87d764:;
    c->r[2] = 0xcu;
    c->v.s[0] = 0x41f00000u;
    c->r[1] = (c->r[1] & 0xffff0000u) | ((c->r[2] << 0) & 0xffffu);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    goto L_87ba2c;
L_87d778:;
    c->r[1] = 0x11bb738u;
    { uint32_t ea = c->r[4] + 0x60eu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x87d788u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_87d784:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x610u;
    { uint32_t ea = c->r[1] + 0x6du; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[4] + c->r[3]; ST16(ea, c->r[2]); }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x60du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x17u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
L_87d7cc:;
    c->r[14] = 0x87d7d0u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87d7dcu; f_85e794(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0x87d7e8u; f_85cb48(c);
L_87d7e8:;
    c->r[0] = 0x6u;
    c->r[1] = 0x9u;
L_87d7f0:;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_74f260(c);
L_87d7fc:;
    c->r[0] = 0x11bbb0cu;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x87d810u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x600u;
    c->r[14] = 0x87d824u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
L_87d82c:;
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_87d8d8; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0xbu;
    c->r[3] = 0x0u;
    goto L_87dca8;
L_87d84c:;
    c->r[1] = c->r[1] | 0x1bu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x11c3088u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = 0x87d864u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_87ddbc; }
    { uint32_t r = c->r[0] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    c->r[3] = c->r[0] - 0x1u;
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_87ddcc; }
    c->r[4] = 0x2u;
    c->r[2] = 0x0u;
L_87d884:;
    c->r[6] = c->r[1];
    c->r[2] = c->r[2] + 0x1u;
    c->r[1] = c->r[4] + (uint32_t)(uint8_t)(c->r[6]);
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_NE) { goto L_87d884; }
    goto L_87ddd0;
L_87d89c:;
    c->r[0] = 0x1eu;
    { uint32_t ea = c->r[4] + 0x4u; ST16(ea, c->r[0]); }
    c->r[14] = 0x87d8a8u; f_85d464(c);
    c->r[14] = 0x87d8acu; f_85d424(c);
L_87d8ac:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x87d8b8u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x87d8c4u; f_85cbc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_85cbc4(c);
L_87d8d8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x17u;
L_87d8e0:;
    (void)f_subs(c, c->r[1], 0x15u);
    c->r[1] = 0x0u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = 0x1u;
    if (COND_EQ) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    goto L_87dcbc;
L_87d918:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = 0x11bb594u;
    { uint32_t ea = 0x87d92cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x6du; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_87dae8; }
    { uint32_t ea = c->r[0] + 0x69u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87dae8; }
    c->r[0] = 0x11bb434u;
    c->r[1] = 0x366cu;
    { uint32_t ea = 0x87d954u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87dae8; }
    c->r[0] = 0x1au;
    c->r[1] = 0x1u;
    c->r[2] = 0x2au;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11bb258u;
    { uint32_t ea = 0x87d97cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87d980u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xau;
    c->r[14] = 0x87d99cu; f_85f190(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xdu;
    c->r[14] = 0x87d9a8u; f_74f260(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87d9b4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d9d4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87d9d4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87d9e0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    goto L_87d1a4;
L_87da00:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x87da08u; f_5dfadc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_87dae8; }
L_87da18:;
    c->r[0] = 0x11bb360u;
    c->r[1] = 0x366cu;
    { uint32_t ea = 0x87da28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87dae8; }
    c->r[1] = c->r[1] | 0x10u;
    c->r[2] = 0x41u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x11bb184u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87da50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87da54u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x87da70u; f_85f190(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xdu;
    c->r[14] = 0x87da7cu; f_74f260(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87da88u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87daa8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87daa8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87dab4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dad4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dad4:;
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87dae0u; f_85e794(c);
    c->r[0] = 0x17u;
    goto L_87b924;
L_87dae8:;
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
L_87daf0:;
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x44e10000u;
L_87daf8:;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87db08:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87db14u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87db34; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87db34:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87db40u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87db60; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87db60:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x9u;
    goto L_87dca8;
L_87db90:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41700000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87dba8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dbc8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dbc8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87dbd4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dbf4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dbf4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87dc00u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dc20; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dc20:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87dc2cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dc4c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dc4c:;
    c->r[0] = 0x648u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x87dc64u; f_74edec(c);
    c->r[0] = 0x11baf40u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x87dc74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x87dc80u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dc98; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x300u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[5]); }
L_87dc98:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x46u;
L_87dca8:;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[0] = 0x2u; }
L_87dcbc:;
    if (COND_NE) { c->r[0] = 0x4u; }
    c->r[14] = 0x87dcc4u; f_85e5bc(c);
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87dccc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87dcd8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dcf8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dcf8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87dd04u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    goto L_87d1a4;
L_87dd24:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87dd30u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd50; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dd50:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87dd5cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dd7c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    goto L_87d1a4;
L_87dd7c:;
    c->r[13] = c->r[13] + 0x108u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_87dd84:;
    c->r[14] = 0x87dd88u; f_8a6e34(c);
    c->r[0] = 0x11bafecu;
    { uint32_t ea = 0x87dd94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87dd98u; f_475a30(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_87ddb4; }
    c->r[0] = 0x11bafd0u;
    { uint32_t ea = 0x87ddb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ddb4u; f_474380(c);
L_87ddb4:;
    c->r[0] = 0x20u;
    goto L_87b924;
L_87ddbc:;
    c->r[2] = 0x58u;
    goto L_87de0c;
L_87ddcc:;
    c->r[2] = 0x0u;
L_87ddd0:;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CC) { goto L_87de00; }
    c->r[3] = 0x2u;
L_87dddc:;
    c->r[6] = c->r[1];
    c->r[2] = c->r[2] + 0x4u;
    c->r[1] = c->r[6] + 0x6u;
    (void)f_subs(c, c->r[2], c->r[0]);
    c->r[1] = c->r[3] + (uint32_t)(uint8_t)(c->r[1]);
    if (COND_LT) { goto L_87dddc; }
    c->r[0] = c->r[6] + 0x4u;
    c->r[1] = 0x2u;
    c->r[6] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
L_87de00:;
    c->r[0] = c->r[6] + 0x2u;
    c->r[1] = 0x58u;
    c->r[2] = c->r[1] + (uint32_t)(uint8_t)(c->r[0]);
L_87de0c:;
    c->r[0] = 0x11badb4u;
    c->r[1] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = 0x87de20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87de24u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[14] = 0x87de40u; f_85f190(c);
    c->r[0] = 0x3cu;
    c->r[14] = 0x87de48u; f_85f234(c);
    c->r[0] = 0x11c2a98u;
    c->r[1] = 0x367cu;
    { uint32_t ea = 0x87de58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x11baf24u;
    { uint32_t ea = 0x87de64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[4]); }
    goto L_87d7e8;
L_87de6c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87de78u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87de98; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87de98:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87dea4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dec4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87dec4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x9u;
    goto L_87dff8;
L_87dee0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41700000u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87def8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87df18; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87df18:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87df24u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87df44; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87df44:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87df50u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87df70; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87df70:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87df7cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87df9c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87df9c:;
    c->r[0] = 0x648u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x87dfb4u; f_74edec(c);
    c->r[0] = 0x11babf0u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x87dfc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x87dfd0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87dfe8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x300u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[5]); }
L_87dfe8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x46u;
L_87dff8:;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { c->r[0] = 0x2u; }
L_87e00c:;
    if (COND_NE) { c->r[0] = 0x4u; }
    c->r[14] = 0x87e014u; f_85e5bc(c);
    goto L_87d7e8;
L_87e020:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87e02cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e04c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87e04c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87e058u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d7e8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000u;
    goto L_87e0d0;
L_87e07c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87e088u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e0a8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87e0a8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87e0b4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87d7e8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
L_87e0d0:;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    goto L_87d7e8;
}
