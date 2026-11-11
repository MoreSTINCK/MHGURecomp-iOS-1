#include "cpu.h"
#include "neon_rt.h"
void f_2dad24(Cpu *c);
void f_3529a8(Cpu *c);
void f_352f6c(Cpu *c);
void f_353078(Cpu *c);
void f_35f284(Cpu *c);
void f_35f2c0(Cpu *c);
void f_35f51c(Cpu *c);
void f_35f520(Cpu *c);
void f_360078(Cpu *c);
void f_3603dc(Cpu *c);
void f_360630(Cpu *c);
void f_366330(Cpu *c);
void f_3668f0(Cpu *c);
void f_366918(Cpu *c);
void f_366a30(Cpu *c);
void f_5bd064(Cpu *c);
void f_74533c(Cpu *c);
void f_745600(Cpu *c);
void f_745a04(Cpu *c);
void f_745ac0(Cpu *c);
void f_745ce8(Cpu *c);
void f_7464dc(Cpu *c);
void f_746c40(Cpu *c);
void f_74ecc0(Cpu *c);
void f_74ed74(Cpu *c);
void f_74edec(Cpu *c);
void f_74ee64(Cpu *c);
void f_74ee98(Cpu *c);
void f_74f260(Cpu *c);
void f_753030(Cpu *c);
void f_7530b8(Cpu *c);
void f_753a74(Cpu *c);
void f_753b1c(Cpu *c);
void f_753b64(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75bc7c(Cpu *c);
void f_75c4d4(Cpu *c);
void f_75f1bc(Cpu *c);
void f_75f208(Cpu *c);
void f_75f760(Cpu *c);
void f_760ea4(Cpu *c);
void f_76d97c(Cpu *c);
void f_76da30(Cpu *c);
void f_76dc20(Cpu *c);
void f_76dc24(Cpu *c);
void f_76dd44(Cpu *c);
void f_76ddb4(Cpu *c);
void f_76df00(Cpu *c);
void f_76e04c(Cpu *c);
void f_76e1a8(Cpu *c);
void f_76e3b0(Cpu *c);
void f_76e4d8(Cpu *c);
void f_76e4ec(Cpu *c);
void f_76e528(Cpu *c);
void f_76e530(Cpu *c);
void f_76e538(Cpu *c);
void f_76e558(Cpu *c);
void f_76e5a8(Cpu *c);
void f_76e5b0(Cpu *c);
void f_76e5c8(Cpu *c);
void f_76e614(Cpu *c);
void f_76e6fc(Cpu *c);
void f_76e808(Cpu *c);
void f_76fd7c(Cpu *c);
void f_76fde0(Cpu *c);
void f_7701b0(Cpu *c);
void f_77033c(Cpu *c);
void f_770688(Cpu *c);
void f_770710(Cpu *c);
void f_7789cc(Cpu *c);
void f_79bb10(Cpu *c);
void f_79eaa0(Cpu *c);
void f_79f560(Cpu *c);
void f_79fe30(Cpu *c);
void f_7a0018(Cpu *c);
void f_7a01c8(Cpu *c);
void f_7a0280(Cpu *c);
void f_7a06ac(Cpu *c);
void f_7a0840(Cpu *c);
void f_7a09c0(Cpu *c);
void f_7a1040(Cpu *c);
void f_7a1238(Cpu *c);
void f_7a19c8(Cpu *c);
void f_7a3cbc(Cpu *c);
void f_7a3e30(Cpu *c);
void f_7a3ff8(Cpu *c);
void f_7a41a0(Cpu *c);
void f_7a4930(Cpu *c);
void f_7a6cb4(Cpu *c);
void f_7a7b00(Cpu *c);
void f_7a7ddc(Cpu *c);
void f_7a9320(Cpu *c);
void f_7a95d8(Cpu *c);
void f_7c4a74(Cpu *c);
void f_80097c(Cpu *c);
void f_800de4(Cpu *c);
void f_800e88(Cpu *c);
void f_801f18(Cpu *c);
void f_801f5c(Cpu *c);
void f_801fc8(Cpu *c);
void f_80217c(Cpu *c);
void f_8026bc(Cpu *c);
void f_802a54(Cpu *c);
void f_85d9e8(Cpu *c);
void f_85e794(Cpu *c);
void f_85eb68(Cpu *c);
void f_85ebb0(Cpu *c);
void f_85f190(Cpu *c);
void f_85f480(Cpu *c);
void f_85f808(Cpu *c);
void f_85f98c(Cpu *c);
void f_85f9dc(Cpu *c);
void f_938e6c(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af3e4(Cpu *c);
void f_9ca404(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efe30(Cpu *c);
void f_15eff08(Cpu *c);
void f_79d9e0(Cpu *restrict c) {
    FN_ENTER(0x79d9e0u);
L_79d9e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0xd8u;
    c->r[10] = c->r[0];
    c->r[0] = 0x84u;
    c->r[1] = 0x4u;
    c->r[14] = 0x79da00u; f_85e794(c);
    { uint32_t ea = c->r[10] + 0xe8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79da34; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79da24u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79da34u; f_76e538(c);
L_79da34:;
    { uint32_t ea = c->r[10] + 0xecu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79da68; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79da58u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79da68u; f_76e538(c);
L_79da68:;
    { uint32_t ea = c->r[10] + 0xf0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79da9c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79da8cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79da9cu; f_76e538(c);
L_79da9c:;
    { uint32_t ea = c->r[10] + 0xf4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79dad0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79dac0u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79dad0u; f_76e538(c);
L_79dad0:;
    { uint32_t ea = c->r[10] + 0xf8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79db04; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79daf4u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79db04u; f_76e538(c);
L_79db04:;
    { uint32_t ea = c->r[10] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79db38; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79db28u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79db38u; f_76e538(c);
L_79db38:;
    { uint32_t ea = c->r[10] + 0x100u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79db6c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79db5cu; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79db6cu; f_76e538(c);
L_79db6c:;
    { uint32_t ea = c->r[10] + 0x104u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79dba0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x79db90u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x79dba0u; f_76e538(c);
L_79dba0:;
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79dbb0u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x12u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79dbc0u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x22u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79dbd0u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x30u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79dbe0u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x24u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79dbf0u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x130u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], (c->r[1] >> 3));
    if (COND_NE) { goto L_79dc28; }
    c->r[0] = c->r[10];
    c->r[1] = 0x2bu;
    c->r[2] = 0x1u;
    c->r[14] = 0x79dc10u; f_76e528(c);
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->r[1] = 0x2bu;
    c->r[2] = 0x2du;
    c->r[14] = 0x79dc24u; f_77033c(c);
    goto L_79dc38;
L_79dc28:;
    c->r[0] = c->r[10];
    c->r[1] = 0x2bu;
    c->r[2] = 0x0u;
    c->r[14] = 0x79dc38u; f_76e528(c);
L_79dc38:;
    c->r[1] = 0x10932bcu;
    { uint32_t ea = c->r[10] + 0x10du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x79dc48u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x129af7cu;
    c->r[1] = 0x6u;
    { uint32_t ea = 0x79dc58u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79dc5cu; f_75bc7c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = 0x23u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79dc70u; f_76e808(c);
    c->r[6] = c->r[10] + 0xc4u;
    c->r[1] = 0x8u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x79dc88u; f_74edec(c);
    { uint32_t ea = c->r[10] + 0xb9u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x79dc9cu; f_74ee64(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x79dca8u; f_74ecc0(c);
    { uint32_t ea = c->r[10] + 0xd2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0xd4u; ST16(ea, c->r[1]); }
    c->r[1] = (uint32_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0));
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    c->r[1] = 0x38u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[10] + 0xd1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79dcd4u; f_74533c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x39u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79dce4u; f_74533c(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd3u;
    c->r[14] = 0x79dcf4u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd4u;
    c->r[14] = 0x79dd08u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd5u;
    c->r[14] = 0x79dd1cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd6u;
    c->r[14] = 0x79dd30u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd7u;
    c->r[14] = 0x79dd44u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd8u;
    c->r[14] = 0x79dd58u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd9u;
    c->r[14] = 0x79dd6cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdau;
    c->r[14] = 0x79dd80u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdbu;
    c->r[14] = 0x79dd94u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdcu;
    c->r[14] = 0x79dda8u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xddu;
    c->r[14] = 0x79ddbcu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdeu;
    c->r[14] = 0x79ddd0u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdfu;
    c->r[14] = 0x79dde4u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe0u;
    c->r[14] = 0x79ddf8u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe1u;
    c->r[14] = 0x79de0cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe2u;
    c->r[14] = 0x79de20u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe3u;
    c->r[14] = 0x79de34u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe4u;
    c->r[14] = 0x79de48u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe5u;
    c->r[14] = 0x79de5cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe6u;
    c->r[14] = 0x79de70u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe7u;
    c->r[14] = 0x79de84u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe8u;
    c->r[14] = 0x79de98u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe9u;
    c->r[14] = 0x79deacu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xeau;
    c->r[14] = 0x79dec0u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0xfb2e9eu;
    c->r[1] = 0x6u;
    c->r[2] = 0x107u;
    c->r[0] = 0x79ded8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79dee0u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] + 0xe8u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1087640u;
    c->r[4] = 0x79defcu + c->r[0];
    c->r[0] = 0x129c9e0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x79df08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129acc4u;
    { uint32_t ea = 0x79df14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129acb4u;
    { uint32_t ea = 0x79df20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_79df20:;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xb9u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 3);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_79e128; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[10] + c->r[0];
    { uint32_t ea = c->r[6] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79df50u; f_366330(c);
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x55u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    c->r[14] = 0x79df6cu; f_74533c(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79df80u; f_76e530(c);
    { uint32_t ea = c->r[6] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[1] = c->r[7];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[3] = c->r[0] + 0x1u;
    c->r[0] = c->r[10];
    c->r[14] = 0x79dfa4u; f_76fde0(c);
    c->r[5] = c->r[13] + 0x40u;
    c->r[1] = 0x30u;
    c->r[0] = c->r[5];
    c->r[14] = 0x79dfb4u; f_15efdc4(c);
    c->r[0] = 0x2cu;
    c->r[1] = 0xbu;
    c->r[2] = c->r[5];
    c->r[3] = 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[9] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[9] = (uint32_t)p; }
    c->r[0] = 0x18dcu;
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = 0x79dfd8u; f_9ca404(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[2] = 0x5u;
    c->r[3] = c->r[5];
    c->r[14] = 0x79dfecu; f_76e808(c);
    c->r[4] = c->r[13] + 0x20u;
    c->r[0] = c->r[11] + 0xau;
    c->r[1] = 0xau;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[2] = c->r[4];
    c->r[14] = 0x79e028u; f_9ca404(c);
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[2] = 0x6u;
    c->r[3] = c->r[4];
    c->r[14] = 0x79e03cu; f_76e808(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e04cu; f_760ea4(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xau;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[14] = 0x79e06cu; f_76e530(c);
    c->r[0] = 0x18f8u;
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = 0xbu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[14] = 0x79e08cu; f_76e808(c);
    c->r[0] = 0x18dau;
    c->r[1] = c->r[7];
    c->r[2] = 0xeu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x79e0acu; f_76fde0(c);
    c->r[0] = 0x18d9u;
    c->r[1] = c->r[7];
    c->r[2] = 0xfu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x79e0ccu; f_76fde0(c);
    c->r[0] = 0x18d8u;
    c->r[1] = c->r[7];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x79e0ecu; f_76fde0(c);
    c->r[0] = 0x18f4u;
    c->r[1] = 0x6u;
    c->r[2] = 0x108u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e108u; f_75bc7c(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[0];
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[2] = 0x14u;
    c->r[14] = 0x79e124u; f_76fd7c(c);
    goto L_79e138;
L_79e128:;
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    c->r[2] = 0x0u;
    c->r[14] = 0x79e138u; f_74533c(c);
L_79e138:;
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], 0x8u);
    if (COND_NE) { goto L_79df20; }
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x49u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79e154u; f_74533c(c);
    c->v.s[16] = LD32(c->r[10] + 300u);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4au;
    c->r[14] = 0x79e164u; f_745a04(c);
    { uint32_t ea = c->r[10] + 0x131u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0] + 4u);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[1];
    c->r[1] = 0x49u;
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x79e188u; f_745ac0(c);
    c->r[13] = c->r[13] + 0xd8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_79e1b4(Cpu *restrict c) {
    FN_ENTER(0x79e1b4u);
L_79e1b4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x98u;
    c->r[4] = c->r[0];
    c->r[14] = 0x79e1c4u; f_79bb10(c);
    c->r[0] = c->r[4] + 0xc4u;
    c->r[1] = 0x1u;
    c->r[14] = 0x79e1d0u; f_74ecc0(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x79e1e4u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x39u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79e1f4u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2cu;
    c->r[0] = c->r[1] + (c->r[0] << 3);
    c->r[1] = 0x129c6d0u;
    c->r[0] = c->r[4] + (uint32_t)(uint8_t)(c->r[0]);
    c->r[4] = c->r[13] + 0x68u;
    { uint32_t ea = 0x79e218u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[1]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    c->r[1] = 0x18dcu;
    c->r[2] = 0x18u;
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[4];
    c->r[14] = 0x79e24cu; f_15efe30(c);
    c->r[0] = ~0x0u;
    c->r[14] = 0x79e254u; f_85f480(c);
    c->r[0] = 0x129a978u;
    { uint32_t ea = 0x79e260u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e264u; f_75f1bc(c);
    c->r[0] = 0x129b08cu;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    c->r[2] = 0xbu;
    c->v.s[1] = c->v.s[0];
    { uint32_t ea = 0x79e280u + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e284u; f_75f208(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[1] = 0x60u;
    c->r[0] = c->r[5];
    c->r[14] = 0x79e294u; f_15efdc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x18u;
    c->r[2] = c->r[5];
    c->r[3] = 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0x79e2acu; f_9ca404(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[14] = 0x79e2bcu; f_75f760(c);
    c->r[13] = c->r[13] + 0x98u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_79e2d0(Cpu *restrict c) {
    FN_ENTER(0x79e2d0u);
L_79e2d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x68u;
    c->r[4] = c->r[0];
    c->r[14] = 0x79e2e0u; f_79bb10(c);
    c->r[0] = 0x85u;
    c->r[1] = 0x4u;
    c->r[14] = 0x79e2ecu; f_85e794(c);
    c->r[0] = 0x129a8d4u;
    c->r[1] = 0x6u;
    c->r[2] = 0xd3u;
    { uint32_t ea = 0x79e300u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e304u; f_75bc7c(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd4u;
    c->r[14] = 0x79e318u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd5u;
    c->r[14] = 0x79e32cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd6u;
    c->r[14] = 0x79e340u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd7u;
    c->r[14] = 0x79e354u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd8u;
    c->r[14] = 0x79e368u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xd9u;
    c->r[14] = 0x79e37cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdau;
    c->r[14] = 0x79e390u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdbu;
    c->r[14] = 0x79e3a4u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdcu;
    c->r[14] = 0x79e3b8u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xddu;
    c->r[14] = 0x79e3ccu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdeu;
    c->r[14] = 0x79e3e0u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xdfu;
    c->r[14] = 0x79e3f4u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe0u;
    c->r[14] = 0x79e408u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe1u;
    c->r[14] = 0x79e41cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe2u;
    c->r[14] = 0x79e430u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe3u;
    c->r[14] = 0x79e444u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe4u;
    c->r[14] = 0x79e458u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe5u;
    c->r[14] = 0x79e46cu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe6u;
    c->r[14] = 0x79e480u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe7u;
    c->r[14] = 0x79e494u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe8u;
    c->r[14] = 0x79e4a8u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xe9u;
    c->r[14] = 0x79e4bcu; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xeau;
    c->r[14] = 0x79e4d0u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xfb288eu;
    c->r[1] = 0x6u;
    c->r[2] = 0x107u;
    c->r[0] = 0x79e4e8u + c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e4f0u; f_75bc7c(c);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[4] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1087028u;
    c->r[2] = 0xbu;
    c->r[5] = 0x79e514u + c->r[1];
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x79e51cu; f_76e808(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[5] = 0x1u;
    c->r[14] = 0x79e538u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + 0xc4u;
    c->r[14] = 0x79e554u; f_74ecc0(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79e564u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x39u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79e574u; f_74533c(c);
    c->r[13] = c->r[13] + 0x68u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_79e588(Cpu *restrict c) {
    FN_ENTER(0x79e588u);
L_79e588:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[14] = 0x79e598u; f_79bb10(c);
    c->r[0] = c->r[4] + 0xc4u;
    c->r[1] = 0x1u;
    c->r[14] = 0x79e5a4u; f_74ecc0(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79e5b4u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x39u;
    c->r[2] = 0x0u;
    c->r[14] = 0x79e5c4u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e5ccu; f_76ddb4(c);
    { uint32_t ea = c->r[4] + 0x148u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x3u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { c->r[0] = 0x81u; }
    if (COND_HI) { c->r[1] = 0x0u; }
    if (COND_LS) { c->r[0] = 0x3u; }
    if (COND_LS) { c->r[1] = 0x1u; }
    c->r[14] = 0x79e5f0u; f_85e794(c);
    c->r[0] = 0x148u;
    c->r[1] = 0x109289cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[2] = 0x79e604u + c->r[1];
    { uint32_t ea = c->r[2] + (c->r[0] << 4); uint32_t v = LD8(ea); c->r[2] = ea; c->r[4] = v; }
    c->r[0] = 0x129a5c0u;
    { uint32_t ea = c->r[2] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = 0x79e614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e618u; f_75bc7c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79e634u; f_85f190(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_79e644(Cpu *restrict c) {
    FN_ENTER(0x79e644u);
L_79e644:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x12a10b4u;
    { uint32_t ea = 0x79e654u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x79e658u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x90u;
    c->pc = c->r[4]; c->r[14] = 0x79e670u; rt_dispatch(c);
    c->r[14] = 0x79e674u; f_801fc8(c);
    c->r[1] = 0x12a1088u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x79e684u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x129ae80u;
    { uint32_t ea = 0x79e694u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_79e6ac(Cpu *restrict c) {
    FN_ENTER(0x79e6acu);
L_79e6ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x79e6b8u; f_8026bc(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
L_79e6cc:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x79e6e4u; f_76e6fc(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x1cu;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_79e6cc; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_79e6fc(Cpu *restrict c) {
    FN_ENTER(0x79e6fcu);
L_79e6fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_79e700(Cpu *restrict c) {
    FN_ENTER(0x79e700u);
L_79e700:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_79e704(Cpu *restrict c) {
    FN_ENTER(0x79e704u);
L_79e704:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x79e710u; f_80217c(c);
    c->r[0] = 0x12a0fecu;
    { uint32_t ea = 0x79e71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79e71cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_79e734(Cpu *restrict c) {
    FN_ENTER(0x79e734u);
L_79e734:;
    c->r[0] = 0x12a0fc8u;
    { uint32_t ea = 0x79e740u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_79e744(Cpu *restrict c) {
    FN_ENTER(0x79e744u);
L_79e744:;
    c->r[0] = 0x12a0fb0u;
    { uint32_t ea = 0x79e750u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_79e754(Cpu *restrict c) {
    FN_ENTER(0x79e754u);
L_79e754:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x12fcba8u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x79e778u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x79e7c0u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x79e7d8u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79e7f0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x129a5a0u;
    c->r[3] = 0x150u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a0ea8u;
    { uint32_t ea = 0x79e850u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfcbe30u;
    { uint32_t ea = 0x79e858u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x79e85cu + c->r[1];
    c->r[14] = 0x79e85cu; f_9aedcc(c);
    c->r[1] = 0x12a0e98u;
    c->r[3] = 0x90u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x79e878u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x12a0a5cu;
    c->r[0] = 0x12a0e74u;
    { uint32_t ea = 0x79e88cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xfcbe06u;
    { uint32_t ea = 0x79e894u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x79e898u + c->r[1];
    c->r[14] = 0x79e898u; f_9aedcc(c);
    c->r[1] = 0x12a0e70u;
    { uint32_t ea = 0x79e8a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_79e8d4(Cpu *restrict c) {
    FN_ENTER(0x79e8d4u);
L_79e8d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x12a0e34u;
    { uint32_t ea = 0x79e8e4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x79e8e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x678u;
    c->pc = c->r[6]; c->r[14] = 0x79e900u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x79e908u; f_76d97c(c);
    c->r[0] = 0x12a0e04u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x79e918u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x5cu;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    c->r[14] = 0x79e934u; f_74ed74(c);
    c->r[0] = 0xffu;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x310u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x89u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8bu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2e6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2e7u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2f0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2f8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x300u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x304u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x308u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x79e9a4u; f_74ed74(c);
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[4] + 0x354u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x358u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x360u;
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x79e9bcu; f_753030(c);
    c->r[0] = 0x644u;
    { uint32_t ea = c->r[4] + 0x414u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x41cu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x420u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x580u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5b0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5f8u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x79e9ecu; f_753b1c(c);
    c->r[0] = c->r[4] + 0xc0u;
    c->r[1] = 0x1b8u;
    c->r[14] = 0x79e9f8u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0x278u;
    c->r[1] = 0x6eu;
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x79ea18u; f_15eff08(c);
    c->r[0] = 0x424u;
    c->r[1] = 0x15cu;
    { uint32_t ea = c->r[4] + 0x2e8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2ecu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x79ea30u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0x384u;
    c->r[1] = 0x90u;
    { uint32_t ea = c->r[4] + 0x8au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x334u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x338u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x33cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x340u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x344u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x348u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x350u; ST32(ea, c->r[5]); }
    c->r[14] = 0x79ea60u; f_15efd7c(c);
    c->r[0] = 0x58cu;
    c->r[1] = 0x24u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x79ea70u; f_15efd7c(c);
    c->r[0] = 0x5b4u;
    c->r[1] = 0x44u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x79ea80u; f_15efd7c(c);
    c->r[0] = 0x5fcu;
    c->r[1] = 0x45u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x79ea90u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_79eaa0(Cpu *restrict c) {
    FN_ENTER(0x79eaa0u);
L_79eaa0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x12a0c68u;
    { uint32_t ea = 0x79eab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79ead8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79ead0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_79ead8:;
    { uint32_t ea = c->r[4] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79eaf8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79eaf0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x334u; ST32(ea, c->r[0]); }
L_79eaf8:;
    { uint32_t ea = c->r[4] + 0x338u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79eb18; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79eb10u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x338u; ST32(ea, c->r[0]); }
L_79eb18:;
    { uint32_t ea = c->r[4] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79eb38; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79eb30u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x33cu; ST32(ea, c->r[0]); }
L_79eb38:;
    c->r[6] = 0x30u;
    c->r[7] = 0x0u;
L_79eb40:;
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79eb68; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79eb5c; }
    c->r[14] = 0x79eb5cu; f_9af3e4(c);
L_79eb5c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x79eb64u; f_9af3c4(c);
    { uint32_t ea = c->r[4] + (c->r[6] << 2); ST32(ea, c->r[7]); }
L_79eb68:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x9eu);
    if (COND_NE) { goto L_79eb40; }
    c->r[5] = 0x109u;
    c->r[6] = 0x0u;
L_79eb7c:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79eb90; }
    c->r[14] = 0x79eb8cu; f_9af3c4(c);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[6]); }
L_79eb90:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x160u);
    if (COND_NE) { goto L_79eb7c; }
    c->r[5] = ~0x43u;
    c->r[6] = 0x0u;
L_79eba4:;
    c->r[7] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[7] + 0x5f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79ebbc; }
    c->r[14] = 0x79ebb8u; f_9af3c4(c);
    { uint32_t ea = c->r[7] + 0x5f8u; ST32(ea, c->r[6]); }
L_79ebbc:;
    c->r[5] = f_adds(c, c->r[5], 0x4u);
    if (COND_NE) { goto L_79eba4; }
    c->r[0] = 0x129a1a0u;
    c->r[5] = 0x17fu;
    c->r[7] = 0x0u;
    { uint32_t ea = 0x79ebd8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_79ebd4:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79ebf0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[14] = 0x79ebecu; f_352f6c(c);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[7]); }
L_79ebf0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x190u);
    if (COND_NE) { goto L_79ebd4; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x640u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79ec2c; }
    c->r[0] = 0x129a830u;
    { uint32_t ea = 0x79ec1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x79ec28u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[5]); }
L_79ec2c:;
    c->r[0] = 0x12a0508u;
    { uint32_t ea = 0x79ec38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0x644u; ST32(ea, c->r[0]); }
    c->r[0] = 0x648u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x79ec48u; f_2dad24(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_76da30(c);
}
void f_79ec64(Cpu *restrict c) {
    FN_ENTER(0x79ec64u);
L_79ec64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x79ec70u; f_79eaa0(c);
    c->r[0] = 0x12a0a9cu;
    { uint32_t ea = 0x79ec7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79ec7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_79ec94(Cpu *restrict c) {
    FN_ENTER(0x79ec94u);
L_79ec94:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x13cu;
    c->r[5] = c->r[13] + 0x18u;
    c->r[4] = c->r[0];
    c->r[7] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[7]); }
    c->r[14] = 0x79ecb4u; f_801f18(c);
    c->r[0] = 0x1299eecu;
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = 0x79ecc8u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    c->r[0] = 0x10922e4u;
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[9] = 0x79ece4u + c->r[0];
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1du;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a05ecu;
    { uint32_t ea = 0x79ecfcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x79ed04u; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79ed14u; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x79ed1cu; f_801f5c(c);
    c->r[14] = 0x79ed20u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1fu;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79ed58u; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79ed68u; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x79ed70u; f_801f5c(c);
    c->r[14] = 0x79ed74u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79edacu; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79edbcu; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x79edc4u; f_801f5c(c);
    c->r[14] = 0x79edc8u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x21u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79ee00u; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79ee10u; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x79ee18u; f_801f5c(c);
    c->r[5] = c->r[13] + 0x18u;
    c->r[0] = c->r[5];
    c->r[14] = 0x79ee24u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x64u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a08c4u;
    { uint32_t ea = 0x79ee5cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x79ee64u; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0x348u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79ee74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x348u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x6u;
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x348u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x79ee90u; f_801f5c(c);
    c->r[14] = 0x79ee94u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x69u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79eeccu; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0x34cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79eedcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x79eef4u; f_801f5c(c);
    c->r[14] = 0x79eef8u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x68u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79ef30u; f_76dd44(c);
    { uint32_t ea = c->r[4] + 0x350u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79ef40u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x79ef5cu; f_801f5c(c);
    c->r[0] = 0x1299c40u;
    c->r[6] = c->r[13] + 0xc0u;
    c->r[9] = 0x1u;
    c->r[10] = 0x7u;
    { uint32_t ea = 0x79ef74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1092048u;
    c->r[0] = 0x79ef80u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1091f90u;
    c->r[11] = 0x79ef8cu + c->r[0];
    c->r[0] = 0x12a0354u;
    { uint32_t ea = 0x79ef94u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
L_79ef90:;
    c->r[0] = c->r[6];
    c->r[14] = 0x79ef98u; f_801f18(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x79efdcu; f_76dd44(c);
    c->r[4] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[4] + 0x384u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79eff0u; rt_dispatch(c);
    c->r[0] = 0xaau;
    c->r[1] = 0x1u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa8u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa7u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbau;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbbu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa9u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79f0c0u; f_802a54(c);
    { uint32_t ea = c->r[4] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5eu; ST8(ea, c->r[9]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x79f0d0u; f_801f5c(c);
    c->r[7] = c->r[7] + 0x1u;
    c->r[5] = c->r[5] + 0x1cu;
    (void)f_subs(c, c->r[7], 0x6u);
    if (COND_NE) { goto L_79ef90; }
    c->r[0] = 0x1299ab4u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[13] + 0x18u;
    c->r[11] = 0x1u;
    c->r[10] = 0x57u;
    { uint32_t ea = 0x79f100u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1091ebcu;
    c->r[0] = 0x79f10cu + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x12a01d0u;
    { uint32_t ea = 0x79f118u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1091e14u;
    c->r[8] = 0x79f120u + c->r[0];
L_79f11c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x79f124u; f_801f18(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[10]); }
    c->r[14] = 0x79f160u; f_76dd44(c);
    c->r[9] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[9] + 0x39cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f174u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[10]); }
    c->r[1] = 0x1u;
    c->r[2] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[9] + 0x39cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79f1a4u; f_802a54(c);
    { uint32_t ea = c->r[9] + 0x39cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5eu; ST8(ea, c->r[11]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x79f1b4u; f_801f5c(c);
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x1eu);
    if (COND_NE) { goto L_79f11c; }
    c->r[7] = 0x0u;
    c->r[0] = 0x1u;
    c->r[1] = 0x6u;
    c->r[2] = 0x3u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[10] + 0x360u;
    c->r[0] = c->r[5];
    c->r[14] = 0x79f1e8u; f_753a74(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x79f1f4u; f_74ecc0(c);
    c->r[0] = 0x378u;
    c->r[5] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x374u;
    { uint32_t ea = c->r[10] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x12999a0u;
    { uint32_t ea = 0x79f214u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1091dacu;
    c->r[9] = 0x79f21cu + c->r[0];
    c->r[0] = 0x1091d88u;
    c->r[4] = 0x79f224u + c->r[0];
    c->r[0] = 0x12a00bcu;
    { uint32_t ea = 0x79f22cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_79f228:;
    c->r[0] = c->r[5];
    c->r[14] = 0x79f230u; f_801f18(c);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { c->r[1] = 0x0u; }
    { uint32_t ea = c->r[9] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0x79f268u; f_76dd44(c);
    c->r[1] = c->r[10] + c->r[7];
    { uint32_t ea = c->r[1] + 0x594u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f27cu; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x79f284u; f_801f5c(c);
    c->r[7] = c->r[7] + 0x4u;
    (void)f_subs(c, c->r[7], 0x1cu);
    if (COND_NE) { goto L_79f228; }
    c->r[6] = c->r[13] + 0x18u;
    c->r[0] = c->r[6];
    c->r[14] = 0x79f29cu; f_80097c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0xdu;
    c->r[5] = c->r[10] + 0x5cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x8u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[7]); }
    c->r[14] = 0x79f2d4u; f_74edec(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x79f2e0u; f_74ecc0(c);
    c->r[0] = 0x129ff40u;
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[10] + 0x6cu; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x69u; ST8(ea, c->r[7]); }
    { uint32_t ea = 0x79f2fcu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x79f300u; f_76dd44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_79f328; }
    c->r[1] = 0x1u;
    c->r[14] = 0x79f314u; f_800de4(c);
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79f328u; f_800e88(c);
L_79f328:;
    c->r[0] = c->r[13] + 0x18u;
    c->r[14] = 0x79f330u; f_770710(c);
    c->r[5] = c->r[13] + 0x18u;
    c->r[0] = c->r[5];
    c->r[14] = 0x79f33cu; f_80097c(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xb3u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129fed0u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x79f36cu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x79f370u; f_76dd44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x308u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_79f39c; }
    c->r[1] = 0x2u;
    c->r[14] = 0x79f384u; f_800de4(c);
    { uint32_t ea = c->r[10] + 0x308u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + 0x310u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x308u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79f39cu; f_800e88(c);
L_79f39c:;
    c->r[0] = c->r[13] + 0x18u;
    c->r[14] = 0x79f3a4u; f_770710(c);
    c->r[5] = c->r[13] + 0x18u;
    c->r[0] = c->r[5];
    c->r[14] = 0x79f3b0u; f_770688(c);
    c->r[0] = 0x12a0360u;
    c->r[2] = c->r[5];
    c->r[3] = 0x0u;
    { uint32_t ea = 0x79f3c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x129ffc8u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x79f3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0x79f3dcu; f_76dd44(c);
    { uint32_t ea = c->r[10] + 0x420u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x79f3e8u; f_770710(c);
    c->r[0] = 0x58u;
    c->r[1] = 0x10u;
    c->r[14] = 0x79f3f4u; f_35f284(c);
    c->r[14] = 0x79f3f8u; f_35f2c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x4cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_79f408; }
    c->r[14] = 0x79f408u; f_35f51c(c);
L_79f408:;
    c->r[0] = c->r[10];
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x79f418u; f_7701b0(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x11u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f42cu; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x64u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f440u; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x68u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f454u; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x69u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f468u; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x71u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f47cu; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x70u;
    c->r[2] = 0x35u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f490u; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x72u;
    c->r[2] = 0x12u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f4a4u; f_7464dc(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x72u;
    c->r[2] = 0x13u;
    c->r[3] = 0x0u;
    c->r[14] = 0x79f4b8u; f_7464dc(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x79f4c0u; f_76e3b0(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79f4d0u; f_76e4ec(c);
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x25u;
    c->r[2] = 0x2u;
    c->r[14] = 0x79f4e0u; f_746c40(c);
    ST32(c->r[10] + 160u, c->v.s[0]);
    c->r[1] = 0x25u;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[10] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79f4f4u; f_745ce8(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[10] + 0x88u; ST8(ea, c->r[5]); }
    c->r[14] = 0x79f508u; f_79f560(c);
    c->r[13] = c->r[13] + 0x13cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_79f560(Cpu *restrict c) {
    FN_ENTER(0x79f560u);
L_79f560:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f580; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f580u; rt_dispatch(c);
L_79f580:;
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f598; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f598u; rt_dispatch(c);
L_79f598:;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f5b0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f5b0u; rt_dispatch(c);
L_79f5b0:;
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f5c8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f5c8u; rt_dispatch(c);
L_79f5c8:;
    { uint32_t ea = c->r[4] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f5e0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f5e0u; rt_dispatch(c);
L_79f5e0:;
    { uint32_t ea = c->r[4] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f5f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f5f8u; rt_dispatch(c);
L_79f5f8:;
    { uint32_t ea = c->r[4] + 0x340u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f610; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f610u; rt_dispatch(c);
L_79f610:;
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f628; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f628u; rt_dispatch(c);
L_79f628:;
    { uint32_t ea = c->r[4] + 0x348u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f640; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f640u; rt_dispatch(c);
L_79f640:;
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f658; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f658u; rt_dispatch(c);
L_79f658:;
    { uint32_t ea = c->r[4] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f670; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f670u; rt_dispatch(c);
L_79f670:;
    { uint32_t ea = c->r[4] + 0x384u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f6b8; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_NE) { goto L_79f69c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79f6ac; }
    c->r[1] = 0x1u;
    goto L_79f6a8;
L_79f69c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79f6ac; }
    c->r[1] = 0x0u;
L_79f6a8:;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
L_79f6ac:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f6b8u; rt_dispatch(c);
L_79f6b8:;
    { uint32_t ea = c->r[4] + 0x388u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f700; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_NE) { goto L_79f6e4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79f6f4; }
    c->r[1] = 0x1u;
    goto L_79f6f0;
L_79f6e4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79f6f4; }
    c->r[1] = 0x0u;
L_79f6f0:;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
L_79f6f4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f700u; rt_dispatch(c);
L_79f700:;
    { uint32_t ea = c->r[4] + 0x38cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f748; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_NE) { goto L_79f72c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79f73c; }
    c->r[1] = 0x1u;
    goto L_79f738;
L_79f72c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79f73c; }
    c->r[1] = 0x0u;
L_79f738:;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
L_79f73c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f748u; rt_dispatch(c);
L_79f748:;
    { uint32_t ea = c->r[4] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f790; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_NE) { goto L_79f774; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79f784; }
    c->r[1] = 0x1u;
    goto L_79f780;
L_79f774:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79f784; }
    c->r[1] = 0x0u;
L_79f780:;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
L_79f784:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f790u; rt_dispatch(c);
L_79f790:;
    { uint32_t ea = c->r[4] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f7d8; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_NE) { goto L_79f7bc; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79f7cc; }
    c->r[1] = 0x1u;
    goto L_79f7c8;
L_79f7bc:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79f7cc; }
    c->r[1] = 0x0u;
L_79f7c8:;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
L_79f7cc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f7d8u; rt_dispatch(c);
L_79f7d8:;
    { uint32_t ea = c->r[4] + 0x398u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f820; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_NE) { goto L_79f804; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79f814; }
    c->r[1] = 0x1u;
    goto L_79f810;
L_79f804:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79f814; }
    c->r[1] = 0x0u;
L_79f810:;
    { uint32_t ea = c->r[0] + 0x5cu; ST8(ea, c->r[1]); }
L_79f814:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f820u; rt_dispatch(c);
L_79f820:;
    c->r[0] = 0xe7u;
    c->r[1] = 0x105u;
    c->r[12] = 0x1u;
    c->r[14] = 0x0u;
L_79f830:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79f860; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x5u);
    if (COND_NE) { goto L_79f858; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[5] + 0x5cu; ST8(ea, c->r[12]); } }
    goto L_79f860;
L_79f858:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x5cu; ST8(ea, c->r[14]); } }
L_79f860:;
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_79f830; }
    { uint32_t ea = c->r[4] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f884; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f884u; rt_dispatch(c);
L_79f884:;
    { uint32_t ea = c->r[4] + 0x590u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f89c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f89cu; rt_dispatch(c);
L_79f89c:;
    { uint32_t ea = c->r[4] + 0x594u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f8b4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f8b4u; rt_dispatch(c);
L_79f8b4:;
    { uint32_t ea = c->r[4] + 0x598u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f8cc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f8ccu; rt_dispatch(c);
L_79f8cc:;
    { uint32_t ea = c->r[4] + 0x59cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f8e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f8e4u; rt_dispatch(c);
L_79f8e4:;
    { uint32_t ea = c->r[4] + 0x5a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f8fc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f8fcu; rt_dispatch(c);
L_79f8fc:;
    { uint32_t ea = c->r[4] + 0x5a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f914; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f914u; rt_dispatch(c);
L_79f914:;
    { uint32_t ea = c->r[4] + 0x5a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f92c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f92cu; rt_dispatch(c);
L_79f92c:;
    { uint32_t ea = c->r[4] + 0x5acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79f944; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79f944u; rt_dispatch(c);
L_79f944:;
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x6u); }
    if (COND_EQ) { goto L_79f9b0; }
    c->r[1] = 0x9u;
    c->r[14] = 0x79f960u; f_7c4a74(c);
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x79f978u; f_74533c(c);
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x79f988u; f_76e558(c);
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x79f9a0u; f_74533c(c);
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x79f9b0u; f_76e558(c);
L_79f9b0:;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x7u);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[5] = 0x1u; }
    c->r[2] = c->r[5];
    c->r[14] = 0x79f9d0u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    c->r[14] = 0x79f9e4u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79fa00u; f_74533c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[14] = 0x79fa10u; f_74533c(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    c->r[14] = 0x79fa24u; f_76e530(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x79fa38u; f_76e530(c);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fa4c; }
    c->r[1] = 0x0u;
    c->r[14] = 0x79fa4cu; f_360630(c);
L_79fa4c:;
    { uint32_t ea = c->r[4] + 0x8au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fa64; }
L_79fa58:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a3ff8(c);
L_79fa64:;
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_79faac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x79fa7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x79fa58u: goto L_79fa58; case 0x79faa0u: goto L_79faa0; case 0x79fab0u: goto L_79fab0; case 0x79fabcu: goto L_79fabc; case 0x79fac8u: goto L_79fac8; case 0x79fad4u: goto L_79fad4; case 0x79fae0u: goto L_79fae0; case 0x79faecu: goto L_79faec; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_79faa0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a41a0(c);
L_79faac:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_79fab0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a4930(c);
L_79fabc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a6cb4(c);
L_79fac8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a7b00(c);
L_79fad4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a7ddc(c);
L_79fae0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a9320(c);
L_79faec:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a95d8(c);
}
void f_79faf8(Cpu *restrict c) {
    FN_ENTER(0x79faf8u);
L_79faf8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[10] = c->r[0];
    c->r[14] = 0x79fb04u; f_76e4d8(c);
    { uint32_t ea = c->r[10] + 0x640u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x358u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_79fb60; }
    c->r[0] = 0x5fcu;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = c->r[10] + c->r[0];
    c->r[0] = 0x1299244u;
    { uint32_t ea = 0x79fb34u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
L_79fb30:;
    { uint32_t ea = c->r[5] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79fb48; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79fb44u; f_353078(c);
    c->r[7] = c->r[7] | c->r[0];
L_79fb48:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_NE) { goto L_79fb30; }
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] & ~c->r[7];
    { uint32_t ea = c->r[10] + 0x640u; ST8(ea, c->r[0]); }
L_79fb60:;
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fb78; }
    c->r[5] = c->r[10] + 0x84u;
    c->r[6] = 0x0u;
    goto L_79fcb8;
L_79fb78:;
    { uint32_t ea = c->r[10] + 0x8au; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x7u);
    c->r[0] = 0x0u;
    c->r[8] = 0x0u;
    c->r[5] = c->r[10] + 0x84u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[0] | c->r[1];
    c->r[0] = c->r[7] | c->r[0];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_79fc48; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[14] = 0x79fbb0u; f_85d9e8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_79fbe0; }
    c->r[0] = 0x1299750u;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x79fbccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[10] + 0x5cu;
    c->r[14] = 0x79fbe0u; f_74ee98(c);
L_79fbe0:;
    { uint32_t ea = c->r[10] + 0x69u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    { uint32_t ea = c->r[10] + 0x84u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_79fc48; }
    c->r[0] = 0x0u;
    c->r[1] = 0x378u;
    { uint32_t ea = c->r[10] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x2fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x300u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[0]); }
    c->r[1] = 0x374u;
    { uint32_t ea = c->r[10] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x334u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_79fc30; }
    { uint32_t ea = c->r[10] + 0x338u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79fdec; }
L_79fc30:;
    { uint32_t ea = c->r[10] + 0x2f8u; ST32(ea, c->r[0]); }
L_79fc34:;
    c->r[0] = 0x1298f98u;
    { uint32_t ea = 0x79fc40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79fc44u; f_75c4d4(c);
    c->r[8] = 0x1u;
L_79fc48:;
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fc64; }
L_79fc54:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_EQ) { goto L_79fc94; }
    goto L_79fcb8;
L_79fc64:;
    { uint32_t ea = c->r[10] + 0x8au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fd54; }
    c->r[0] = 0x129969cu;
    c->r[1] = 0x6bfdu;
    { uint32_t ea = 0x79fc80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_79fc54; }
    c->r[0] = 0x0u;
L_79fc90:;
    { uint32_t ea = c->r[10] + 0x8au; ST8(ea, c->r[0]); }
L_79fc94:;
    c->r[0] = 0x0u;
    c->r[1] = 0x7u;
    c->r[4] = 0x0u;
    c->r[14] = 0x79fca4u; f_74f260(c);
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[10] + 0x8cu; ST8(ea, c->r[4]); }
    c->r[14] = 0x79fcb0u; f_79f560(c);
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[10] + 0x8bu; ST8(ea, c->r[4]); }
L_79fcb8:;
    { uint32_t ea = c->r[10] + 0x8bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[10]; }
    if (COND_NE) { c->r[14] = 0x79fcc8u; f_7a0018(c); }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_79fcf4; }
    { uint32_t ea = c->r[10] + 0x8au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fd0c; }
L_79fcdc:;
    c->r[0] = 0x644u;
    c->r[0] = c->r[10] + c->r[0];
    c->r[14] = 0x79fce8u; f_753b64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = c->r[10]; }
    if (COND_EQ) { c->r[14] = 0x79fcf4u; f_79f560(c); }
L_79fcf4:;
    { uint32_t ea = c->r[10] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fd08; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_35f520(c);
L_79fd08:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_79fd0c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_79fcdc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x79fd24u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x79fcdcu: goto L_79fcdc; case 0x79fd48u: goto L_79fd48; case 0x79fda4u: goto L_79fda4; case 0x79fdb0u: goto L_79fdb0; case 0x79fdbcu: goto L_79fdbc; case 0x79fdc8u: goto L_79fdc8; case 0x79fdd4u: goto L_79fdd4; case 0x79fde0u: goto L_79fde0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_79fd48:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fd50u; f_7a01c8(c);
    goto L_79fcdc;
L_79fd54:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x7u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_79fc54; }
    c->r[0] = 0x12995a0u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x79fd7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[4] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_79fe00; }
    c->r[14] = 0x79fd8cu; f_85f808(c);
    { uint32_t r = c->r[0] & c->r[4]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_79fe0c; }
    c->r[0] = 0x1u;
    goto L_79fc90;
L_79fda4:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fdacu; f_7a0280(c);
    goto L_79fcdc;
L_79fdb0:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fdb8u; f_7a06ac(c);
    goto L_79fcdc;
L_79fdbc:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fdc4u; f_7a0840(c);
    goto L_79fcdc;
L_79fdc8:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fdd0u; f_7a09c0(c);
    goto L_79fcdc;
L_79fdd4:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fddcu; f_7a1040(c);
    goto L_79fcdc;
L_79fde0:;
    c->r[0] = c->r[10];
    c->r[14] = 0x79fde8u; f_7a1238(c);
    goto L_79fcdc;
L_79fdec:;
    { uint32_t ea = c->r[10] + 0x33cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x2f8u; ST32(ea, c->r[0]); } }
    goto L_79fc34;
L_79fe00:;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_79fe30(c);
L_79fe0c:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_79fc94; }
    goto L_79fcb8;
}
void f_79fe30(Cpu *restrict c) {
    FN_ENTER(0x79fe30u);
L_79fe30:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0x79fe48u; f_85e794(c);
    { uint32_t ea = c->r[8] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fe58; }
    c->r[14] = 0x79fe58u; f_3603dc(c);
L_79fe58:;
    c->r[7] = c->r[8] + 0xc0u;
    c->r[4] = 0x0u;
L_79fe60:;
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_79fe88; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fe7c; }
    c->r[14] = 0x79fe7cu; f_9af3e4(c);
L_79fe7c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x79fe84u; f_9af3c4(c);
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[6]); }
L_79fe88:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x6eu);
    if (COND_NE) { goto L_79fe60; }
    { uint32_t ea = c->r[8] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79feb4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79feacu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x334u; ST32(ea, c->r[0]); }
L_79feb4:;
    { uint32_t ea = c->r[8] + 0x338u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fed4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79feccu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x338u; ST32(ea, c->r[0]); }
L_79fed4:;
    { uint32_t ea = c->r[8] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79fef4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x79feecu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x33cu; ST32(ea, c->r[0]); }
L_79fef4:;
    c->r[0] = 0x424u;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    c->r[4] = c->r[8] + c->r[0];
L_79ff04:;
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79ff18; }
    c->r[14] = 0x79ff14u; f_9af3c4(c);
    { uint32_t ea = c->r[4] + (c->r[6] << 2); ST32(ea, c->r[5]); }
L_79ff18:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x57u);
    if (COND_NE) { goto L_79ff04; }
    c->r[0] = 0x5b4u;
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    c->r[4] = c->r[8] + c->r[0];
L_79ff34:;
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79ff48; }
    c->r[14] = 0x79ff44u; f_9af3c4(c);
    { uint32_t ea = c->r[4] + (c->r[6] << 2); ST32(ea, c->r[5]); }
L_79ff48:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_NE) { goto L_79ff34; }
    c->r[0] = 0x5fcu;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    c->r[4] = c->r[8] + c->r[0];
    c->r[0] = 0x1298e08u;
    { uint32_t ea = 0x79ff70u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_79ff6c:;
    { uint32_t ea = c->r[4] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79ff88; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[14] = 0x79ff84u; f_352f6c(c);
    { uint32_t ea = c->r[4] + (c->r[7] << 2); ST32(ea, c->r[5]); }
L_79ff88:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x11u);
    if (COND_NE) { goto L_79ff6c; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[8] + 0x640u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_79ffc4; }
    c->r[0] = 0x1299498u;
    { uint32_t ea = 0x79ffb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x79ffc0u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x50u; ST32(ea, c->r[5]); }
L_79ffc4:;
    { uint32_t ea = c->r[8] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x79ffccu; f_85eb68(c);
    c->r[14] = 0x79ffd0u; f_938e6c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_79ffe8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x5eu; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[5] = c->r[0] ^ 0x1u; }
L_79ffe8:;
    c->r[0] = 0x1298bc0u;
    { uint32_t ea = 0x79fff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST8(ea, c->r[5]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x7a0000u; f_76e04c(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8] + 0x88u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_7a0018(Cpu *restrict c) {
    FN_ENTER(0x7a0018u);
L_7a0018:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1298d44u;
    c->r[1] = 0x1298b90u;
    c->r[2] = 0x2u;
    c->v.s[0] = LD32(c->r[4] + 144u);
    { uint32_t ea = 0x7a0040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x7a0044u + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 144u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x870u;
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[16] = (float)c->v.s[0];
    c->r[14] = 0x7a006cu; f_75bc4c(c);
    c->r[5] = c->r[0];
    c->v.s[18] = LD32(c->r[4] + 144u);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0xfu;
    c->r[14] = 0x7a0084u; f_75bc7c(c);
    c->r[3] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[2] = 0x4u;
    c->r[14] = 0x7a0098u; f_76e808(c);
    c->v.s[20] = 0x3ea8f5c3u;
    c->v.s[22] = 0x41200000u;
    c->v.s[0] = 0x461c4000u;
    c->r[0] = c->r[4];
    c->r[1] = 0x7u;
    c->r[2] = 0x7u;
    c->r[3] = c->r[5];
    c->v.f[2] = c->v.f[18] * c->v.f[20];
    c->v.f[2] = c->v.f[2] / c->v.f[22];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[16] : c->v.s[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13], c->v.s[0]);
    c->r[14] = 0x7a00d8u; f_76fd7c(c);
    c->r[0] = 0x869fu;
    c->r[1] = 0x7u;
    c->r[2] = 0x8u;
    c->r[3] = c->r[5];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x7a00f8u; f_76fd7c(c);
    c->v.s[0] = 0x47c34f80u;
    c->v.s[2] = 0x3f800000u;
    c->r[3] = 0xcccdu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xcccc0000u;
    c->v.f[0] = c->v.f[16] / c->v.f[0];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[0] = t0; c->v.f[1] = t1; }
    c->v.s[2] = LD32(c->r[4] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->v.f[0] = c->v.f[2] * c->v.f[20];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[1] = (c->r[0] << 1);
    c->r[2] = c->v.s[0];
    { uint64_t r = (uint64_t)c->r[2] * c->r[3]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[2] = (c->r[3] >> 3);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    (void)f_subs(c, c->r[1], (c->r[2] << 1));
    c->r[5] = (c->r[2] << 1);
    c->r[1] = 0x1au;
    c->r[2] = 0x0u;
    if (COND_CC) { c->r[5] = (c->r[0] << 1); }
    c->r[0] = c->r[4];
    c->v.s[0] = c->r[5];
    c->v.f[0] = (float)c->v.s[0];
    c->r[14] = 0x7a0164u; f_76e614(c);
    (void)f_subs(c, c->r[5], 0x64u);
    if (COND_NE) { goto L_7a0180; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1bu;
    c->r[14] = 0x7a0178u; f_745600(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a018c; }
L_7a0180:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_7a018c:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1bu;
    c->r[2] = 0x1u;
    c->r[14] = 0x7a019cu; f_74533c(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x83u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_74f260(c);
}
void f_7a01c8(Cpu *restrict c) {
    FN_ENTER(0x7a01c8u);
L_7a01c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x129913cu;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x7a01e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a024c; }
    c->r[14] = 0x7a01f4u; f_85f98c(c);
    c->r[5] = c->r[0];
    c->r[14] = 0x7a01fcu; f_85f9dc(c);
    c->r[0] = c->r[5] | c->r[0];
    c->r[1] = 0xf309u;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t r = c->r[0] & c->r[6]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a022c; }
    c->r[0] = 0x12990fcu;
    c->r[1] = 0x6ba4u;
    { uint32_t ea = 0x7a0220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7a0274; }
L_7a022c:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] ^ 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_7a025c; }
    c->r[0] = 0x0u;
    c->r[1] = 0xdu;
    goto L_7a0264;
L_7a024c:;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[0]); }
L_7a025c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
L_7a0264:;
    c->r[14] = 0x7a0268u; f_74f260(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_79f560(c);
L_7a0274:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_7a0280(Cpu *restrict c) {
    FN_ENTER(0x7a0280u);
L_7a0280:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[0] = 0x129907cu;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x7a02a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[10] = c->r[0] | c->r[1];
    c->r[0] = 0x129a628u;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a02c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a02c4u; f_3668f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_7a0318; }
    c->r[0] = 0x129a608u;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a02e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a02e4u; f_3668f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_7a0318; }
    c->r[0] = 0x129a5e8u;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = 0x7a0300u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a0304u; f_3668f0(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    if (COND_NE) { goto L_7a03bc; }
L_7a0318:;
    { uint32_t ea = c->r[4] + 0x2f4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[10] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0378; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[10] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[7];
    if (COND_EQ) { goto L_7a03ac; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x4u);
    c->r[1] = 0x6eu;
    c->r[2] = 0x5u;
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x7a0354u; f_76e538(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6du;
    c->r[14] = 0x7a0360u; f_76e5b0(c);
    { uint32_t ea = c->r[4] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[7] = 0x1u;
    if (COND_NE) { c->r[6] = 0x1u; }
    goto L_7a03fc;
L_7a0378:;
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[1] = 0x6du;
    c->r[2] = 0x5u;
    if (COND_EQ) { c->r[0] = 0x4u; }
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x7a0398u; f_76e538(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6du;
    c->r[14] = 0x7a03a4u; f_76e5b0(c);
    { uint32_t ea = c->r[4] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
L_7a03ac:;
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[6] = 0x0u;
    c->r[7] = 0x1u;
    if (COND_NE) { c->r[6] = 0x1u; }
L_7a03bc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6eu;
    c->r[14] = 0x7a03c8u; f_76e5a8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a03f4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6eu;
    c->r[14] = 0x7a03dcu; f_76e5c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a03f4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6eu;
    c->r[2] = 0x1u;
    c->r[14] = 0x7a03f4u; f_76e538(c);
L_7a03f4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_7a0440; }
L_7a03fc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6du;
    c->r[14] = 0x7a0408u; f_76e5a8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a0440; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6du;
    c->r[14] = 0x7a041cu; f_76e5c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0440; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6du;
    c->r[2] = 0x1u;
    c->r[14] = 0x7a0434u; f_76e538(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_7a0448; }
    goto L_7a0470;
L_7a0440:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_7a0470; }
L_7a0448:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[5] = 0x0u;
    c->r[14] = 0x7a0458u; f_74f260(c);
    { uint32_t ea = c->r[4] + 0x2fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_7a4930(c);
L_7a0470:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_7a0690; }
    c->r[0] = 0x129a444u;
    c->r[5] = 0x2u;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2f8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a04a4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a04a8u; f_3668f0(c);
    c->r[11] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0x2u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x7a04c8u; f_3668f0(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[13] + 0x5u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x6u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x7a04e8u; f_3668f0(c);
    c->r[8] = c->r[0];
    { uint32_t r = c->r[10] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[8]); }
    if (COND_NE) { goto L_7a05a0; }
    { uint32_t r = c->r[10] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a05c8; }
    { uint32_t ea = c->r[4] + 0x348u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0530; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a0518u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0530; }
    c->r[1] = c->r[11] ^ 0x1u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_7a05f0; }
L_7a0530:;
    { uint32_t ea = c->r[4] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0560; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a0548u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0560; }
    c->r[1] = c->r[5] ^ 0x1u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_7a05f0; }
L_7a0560:;
    { uint32_t ea = c->r[4] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0590; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a0578u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0590; }
    c->r[1] = c->r[8] ^ 0x1u;
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_7a05f0; }
L_7a0590:;
    { uint32_t ea = c->r[4] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_EQ) { goto L_7a05fc; }
    goto L_7a0638;
L_7a05a0:;
    { uint32_t ea = c->r[4] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
L_7a05a8:;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + (c->r[0] << 1);
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_7a05a8; }
    goto L_7a05f0;
L_7a05c8:;
    { uint32_t ea = c->r[4] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
L_7a05d0:;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + (c->r[0] << 1);
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_7a05d0; }
L_7a05f0:;
    { uint32_t ea = c->r[4] + 0x2f8u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { goto L_7a0638; }
L_7a05fc:;
    { uint32_t ea = c->r[4] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_7a0690; }
    c->r[0] = 0x324u;
    { uint32_t sc = 0; uint32_t r = c->r[10] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x2fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_7a0644; }
    c->r[2] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[10] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0654; }
    c->r[1] = c->r[0];
    goto L_7a0670;
L_7a0638:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    goto L_7a0684;
L_7a0644:;
    c->r[2] = 0x1u;
    c->r[3] = ~0x0u;
    c->r[7] = 0x0u;
    goto L_7a0664;
L_7a0654:;
    c->r[7] = c->r[1];
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    c->r[1] = 0x0u;
L_7a0664:;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { c->r[1] = c->r[3] + c->r[0]; }
    { uint32_t ea = c->r[4] + 0x2fcu; ST32(ea, c->r[1]); }
L_7a0670:;
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_7a0690; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1bu;
L_7a0684:;
    c->r[14] = 0x7a0688u; f_74f260(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x7a0690u; f_79f560(c);
L_7a0690:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_7a06ac(Cpu *restrict c) {
    FN_ENTER(0x7a06acu);
L_7a06ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a06dc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a06ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a06dc; }
    c->r[0] = 0x0u;
    goto L_7a0750;
L_7a06dc:;
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0704; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a06f4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0704; }
    c->r[0] = 0x1u;
    goto L_7a0750;
L_7a0704:;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a072c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a071cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a072c; }
    c->r[0] = 0x2u;
    goto L_7a0750;
L_7a072c:;
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0770; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a0744u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0770; }
    c->r[0] = 0x3u;
L_7a0750:;
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
L_7a0758:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[14] = 0x7a0764u; f_74f260(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_79f560(c);
L_7a0770:;
    c->r[0] = 0x1298b98u;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x7a0784u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_7a07e0; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a07c8; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7a07e0; }
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[2] = 0x3u; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[2]); }
    goto L_7a07dc;
L_7a07c8:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[3] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[3]); }
L_7a07dc:;
    c->r[1] = 0x1u;
L_7a07e0:;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a07fc; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0814; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    goto L_7a0758;
L_7a07fc:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1] - 0x1u;
    c->r[1] = 0x3u;
    goto L_7a0828;
L_7a0814:;
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[2] = c->r[2] + 0x1u;
L_7a0828:;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = c->r[1]; }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[2]); }
    goto L_7a0758;
}
void f_7a0840(Cpu *restrict c) {
    FN_ENTER(0x7a0840u);
L_7a0840:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x2e6u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xcu);
    if (COND_CC) { goto L_7a09b8; }
    c->r[1] = 0x1298ab0u;
    c->r[2] = 0x6bfcu;
    c->r[3] = 0x6c34u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x7a086cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xf0u;
    c->r[3] = c->r[1] | c->r[2];
    c->r[1] = 0x0u;
    { uint32_t r = c->r[3] & 0x10u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[3] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0898; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_7a093c; }
L_7a0898:;
    { uint32_t ea = c->r[4] + 0x2e7u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_7a08e8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_7a0934; }
    c->r[0] = c->r[1] - 0x1u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2e7u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x7a08c0u; f_74f260(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x7a08c8u; f_7a7b00(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xadu;
    c->r[2] = 0x5u;
    c->r[14] = 0x7a08d8u; f_76e538(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xadu;
    c->r[14] = 0x7a08e4u; f_76e5b0(c);
    goto L_7a097c;
L_7a08e8:;
    c->r[2] = c->r[1] + 0xbu;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_7a0934; }
    c->r[0] = c->r[1] + 0x1u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2e7u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x7a0908u; f_74f260(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x7a0910u; f_7a7b00(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xaeu;
    c->r[2] = 0x5u;
    c->r[14] = 0x7a0920u; f_76e538(c);
    c->r[0] = c->r[4];
    c->r[1] = 0xaeu;
    c->r[14] = 0x7a092cu; f_76e5b0(c);
    c->r[5] = 0x1u;
    goto L_7a093c;
L_7a0934:;
    c->r[0] = c->r[4];
    c->r[14] = 0x7a093cu; f_7a7b00(c);
L_7a093c:;
    c->r[0] = c->r[4];
    c->r[1] = 0xadu;
    c->r[14] = 0x7a0948u; f_76e5a8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a0974; }
    c->r[0] = c->r[4];
    c->r[1] = 0xadu;
    c->r[14] = 0x7a095cu; f_76e5c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0974; }
    c->r[0] = c->r[4];
    c->r[1] = 0xadu;
    c->r[2] = 0x1u;
    c->r[14] = 0x7a0974u; f_76e538(c);
L_7a0974:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_7a09b8; }
L_7a097c:;
    c->r[0] = c->r[4];
    c->r[1] = 0xaeu;
    c->r[14] = 0x7a0988u; f_76e5a8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    c->r[1] = 0xaeu;
    c->r[14] = 0x7a099cu; f_76e5c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a09b8; }
    c->r[0] = c->r[4];
    c->r[1] = 0xaeu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_76e538(c);
L_7a09b8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_7a09c0(Cpu *restrict c) {
    FN_ENTER(0x7a09c0u);
L_7a09c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1298940u;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x7a09dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_7a0a2c; }
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0b14; }
    c->r[0] = c->r[4] + 0x360u;
    c->r[1] = c->r[5];
    c->r[14] = 0x7a0a08u; f_7530b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0a24; }
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[14] = 0x7a0a1cu; f_74f260(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x7a0a24u; f_79f560(c);
L_7a0a24:;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a0b54;
L_7a0a2c:;
    c->r[7] = 0x0u;
L_7a0a30:;
    c->r[0] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + 0x39cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_7a0a70; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x7a0a50u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a0b68; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x7a0a68u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a0b70; }
L_7a0a70:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x1eu);
    if (COND_CC) { goto L_7a0a30; }
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0be4; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[5] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0c4c; }
    { uint32_t r = c->r[5] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0cb4; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a0d1c; }
    { uint32_t r = c->r[5] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[6];
    if (COND_EQ) { goto L_7a0fbc; }
    c->r[0] = 0x1299e2cu;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a0abcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x20u;
    c->r[14] = 0x7a0ac4u; f_366a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0f94; }
    c->r[0] = 0x1090e3cu;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7a0ae0u + c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x19u); }
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_7a0f64; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0f60; }
    c->r[1] = 0x8b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = 0x65u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x64u; }
    goto L_7a0f64;
L_7a0b14:;
    c->r[0] = 0x378u;
    { uint32_t ea = c->r[4] + 0x376u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x374u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x375u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x377u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t r = c->r[3] * c->r[2] + c->r[1]; c->r[1] = r; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[0] + (uint32_t)(uint8_t)(c->r[1]);
    c->r[1] = 0x10906e0u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = 0x7a0b4cu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x414u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x358u; ST32(ea, c->r[0]); }
L_7a0b54:;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = 0x1u;
    c->r[1] = 0x71u;
    goto L_7a0fd0;
L_7a0b68:;
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[7]); }
    goto L_7a0fc8;
L_7a0b70:;
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_7a0e0c; }
    c->r[0] = 0x1299d5cu;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a0b8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x20u;
    c->r[14] = 0x7a0b94u; f_366a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0e0c; }
    c->r[0] = 0x1090d6cu;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7a0bb0u + c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x19u); }
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_7a0ddc; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0dd8; }
    c->r[1] = 0x8b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = 0x65u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x64u; }
    goto L_7a0ddc;
L_7a0be4:;
    c->r[0] = 0x1299cf4u;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a0bf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x20u;
    c->r[14] = 0x7a0bfcu; f_366a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0db8; }
    c->r[0] = 0x1090d04u;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7a0c18u + c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x19u); }
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_7a0d88; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0d84; }
    c->r[1] = 0x8b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = 0x65u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x64u; }
    goto L_7a0d88;
L_7a0c4c:;
    c->r[0] = 0x1299c8cu;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a0c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x20u;
    c->r[14] = 0x7a0c64u; f_366a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0e48; }
    c->r[0] = 0x1090c9cu;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7a0c80u + c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x19u); }
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_7a0e18; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0e14; }
    c->r[1] = 0x8b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = 0x65u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x64u; }
    goto L_7a0e18;
L_7a0cb4:;
    c->r[0] = 0x1299c24u;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a0cc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x20u;
    c->r[14] = 0x7a0cccu; f_366a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0ec8; }
    c->r[0] = 0x1090c34u;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7a0ce8u + c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x19u); }
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_7a0e98; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0e94; }
    c->r[1] = 0x8b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = 0x65u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x64u; }
    goto L_7a0e98;
L_7a0d1c:;
    c->r[0] = 0x1299bbcu;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x7a0d2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x20u;
    c->r[14] = 0x7a0d34u; f_366a30(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a0f3c; }
    c->r[0] = 0x1090bccu;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7a0d50u + c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x19u); }
    c->r[0] = c->r[0] + c->r[1];
    if (COND_NE) { goto L_7a0f0c; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a0f08; }
    c->r[1] = 0x8b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    c->r[0] = 0x65u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { c->r[0] = 0x64u; }
    goto L_7a0f0c;
L_7a0d84:;
    c->r[0] = 0x65u;
L_7a0d88:;
    c->r[3] = 0x1297fecu;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a0d9cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7u;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = sh_lsl(c->r[2], c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[3] & ~c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_7a0db8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    c->r[5] = 0x0u;
    c->r[14] = 0x7a0dc8u; f_74f260(c);
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[4] + 0x358u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[5]); }
    goto L_7a0fd4;
L_7a0dd8:;
    c->r[0] = 0x65u;
L_7a0ddc:;
    c->r[3] = 0x1297f98u;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a0df0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7u;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = sh_lsl(c->r[2], c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[3] & ~c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_7a0e0c:;
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[7]); }
    goto L_7a0fd4;
L_7a0e14:;
    c->r[0] = 0x65u;
L_7a0e18:;
    c->r[3] = 0x1297f5cu;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a0e2cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7u;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = sh_lsl(c->r[2], c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[3] & ~c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_7a0e48:;
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_7a0e8c; }
    c->r[2] = 0x1090420u;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7a0e64u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xcccdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xcccc0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[2]; c->r[2] = (uint32_t)r; c->r[3] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[1] - 0x1u;
    c->r[2] = (c->r[3] >> 3);
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 1);
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[0]); }
    if (COND_LS) { goto L_7a0fbc; }
L_7a0e8c:;
    c->r[0] = c->r[0] - 0xau;
    goto L_7a0fb8;
L_7a0e94:;
    c->r[0] = 0x65u;
L_7a0e98:;
    c->r[3] = 0x1297edcu;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a0eacu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7u;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = sh_lsl(c->r[2], c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[3] & ~c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_7a0ec8:;
    c->r[2] = 0x10903a8u;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7a0edcu + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = c->r[1] + 0xau;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LS) { goto L_7a0fb8; }
    c->r[0] = 0xcccdu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xcccc0000u;
    { uint64_t r = (uint64_t)c->r[1] * c->r[0]; c->r[0] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[0] = (c->r[2] >> 3);
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[1] - (c->r[0] << 1);
    goto L_7a0fb8;
L_7a0f08:;
    c->r[0] = 0x65u;
L_7a0f0c:;
    c->r[3] = 0x1297e68u;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a0f20u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7u;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = sh_lsl(c->r[2], c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[3] & ~c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_7a0f3c:;
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_7a0f58; }
    c->r[1] = 0x109032cu;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7a0f58u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
L_7a0f58:;
    c->r[0] = c->r[0] - 0x1u;
    goto L_7a0fb8;
L_7a0f60:;
    c->r[0] = 0x65u;
L_7a0f64:;
    c->r[3] = 0x1297e10u;
    c->r[1] = c->r[0] & 0x1fu;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x7a0f78u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] >> 5) & 0x7u;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xc50u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[1] = sh_lsl(c->r[2], c->r[1]); }
    if (COND_NE) { c->r[1] = c->r[3] & ~c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
L_7a0f94:;
    c->r[2] = 0x10902dcu;
    { uint32_t ea = c->r[4] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x7a0fa8u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { c->r[0] = 0x0u; }
L_7a0fb8:;
    { uint32_t ea = c->r[4] + 0x35cu; ST32(ea, c->r[0]); }
L_7a0fbc:;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_7a0fc8; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_7a0fc8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
L_7a0fd0:;
    c->r[14] = 0x7a0fd4u; f_74f260(c);
L_7a0fd4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_79f560(c);
}
void f_7a1040(Cpu *restrict c) {
    FN_ENTER(0x7a1040u);
L_7a1040:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x12982c8u;
    { uint32_t ea = 0x7a1054u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6bfcu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x580u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_CC) { goto L_7a11f0; }
    c->r[2] = 0x6c34u;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x8e39u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x38e30000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = ~0x0u;
    c->r[7] = (c->r[2] >> 1);
    c->r[3] = c->r[7] + (c->r[7] << 3);
    c->r[0] = f_subs(c, c->r[0], c->r[3]);
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[7] = c->r[1] + (c->r[2] >> 1); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a10a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a10c8; }
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[7];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[1] - 0x1u;
    goto L_7a10f8;
L_7a10c8:;
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a10dcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a1108; }
    (void)f_subs(c, c->r[7], c->r[1]);
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] + 0x1u;
L_7a10f8:;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[2]; }
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[1]); }
L_7a1108:;
    (void)f_subs(c, c->r[8], c->r[1]);
    if (COND_NE) { goto L_7a11fc; }
    c->r[6] = c->r[6] | c->r[5];
    { uint32_t r = c->r[6] & 0x20u; c->nf = r >> 31; c->zf = r == 0; c->r[9] = r; }
    if (COND_EQ) { goto L_7a1140; }
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a1130u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1180; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_7a1174;
L_7a1140:;
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a1158; }
    c->r[0] = c->r[5];
    c->r[14] = 0x7a1154u; f_7789cc(c);
    goto L_7a1180;
L_7a1158:;
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x7a1168u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1180; }
    { uint32_t ea = c->r[5] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
L_7a1174:;
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x5u;
    c->r[14] = 0x7a1180u; f_76e558(c);
L_7a1180:;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a11a8; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_7a11d0; }
    (void)f_subs(c, c->r[7], c->r[0]);
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[7] = 0x0u;
    goto L_7a11b4;
L_7a11a8:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = ~0x0u;
L_7a11b4:;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[7] = c->r[0] + c->r[2]; }
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_EQ) { goto L_7a11dc; }
    goto L_7a11fc;
L_7a11d0:;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[8], c->r[7]);
    if (COND_NE) { goto L_7a11fc; }
L_7a11dc:;
    c->r[0] = 0x1298130u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x7a11ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
L_7a11f0:;
    { uint32_t sc = 0; uint32_t r = c->r[5] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a120c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_7a11fc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[14] = 0x7a1208u; f_74f260(c);
    goto L_7a1224;
L_7a120c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x6u;
    c->r[14] = 0x7a1218u; f_74f260(c);
    { uint32_t ea = c->r[4] + 0x41cu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[4] + 0x41cu; ST8(ea, c->r[0]); }
L_7a1224:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_79f560(c);
}
void f_7a1238(Cpu *restrict c) {
    FN_ENTER(0x7a1238u);
L_7a1238:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x12980c8u;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x7a1254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[4] + 0x5f8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_CC) { goto L_7a13a8; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a1318; }
    c->r[5] = 0x0u;
    { uint32_t r = c->r[6] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7a12a0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x54u;
    c->r[2] = 0x5u;
    c->r[14] = 0x7a1290u; f_76e538(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[14] = 0x7a129cu; f_76e5b0(c);
    c->r[5] = 0x1u;
L_7a12a0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[14] = 0x7a12acu; f_76e5a8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a12d8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[14] = 0x7a12c0u; f_76e5c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a12d8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[2] = 0x1u;
    c->r[14] = 0x7a12d8u; f_76e538(c);
L_7a12d8:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a133c; }
    { uint32_t ea = c->r[4] + 0x5f8u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = 0x2493u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x92490000u;
    c->r[0] = c->r[2] - 0x1u;
    c->r[1] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[3] = (c->r[1] >> 2);
    c->r[3] = c->r[3] + (c->r[1] >> 31);
    c->r[6] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[4] + 0x584u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_NE) { goto L_7a15c4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[0]); }
    goto L_7a15f4;
L_7a1318:;
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[2] = 0x5u;
    c->r[14] = 0x7a1328u; f_76e538(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x50u;
    c->r[14] = 0x7a1334u; f_76e5b0(c);
    c->r[5] = 0x1u;
    goto L_7a1340;
L_7a133c:;
    c->r[5] = 0x0u;
L_7a1340:;
    c->r[0] = c->r[4];
    c->r[1] = 0x54u;
    c->r[14] = 0x7a134cu; f_76e5a8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1384; }
    c->r[0] = c->r[4];
    c->r[1] = 0x54u;
    c->r[14] = 0x7a1360u; f_76e5c8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a1384; }
    c->r[0] = c->r[4];
    c->r[1] = 0x54u;
    c->r[2] = 0x1u;
    c->r[14] = 0x7a1378u; f_76e538(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_7a138c; }
    goto L_7a13a8;
L_7a1384:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_7a13a8; }
L_7a138c:;
    { uint32_t ea = c->r[4] + 0x584u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5f8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_7a1584; }
    c->r[0] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[0]); }
    goto L_7a15f4;
L_7a13a8:;
    { uint32_t ea = c->r[4] + 0x594u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a13ec; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a13c4u; rt_dispatch(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a13e0u; rt_dispatch(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1620; }
L_7a13ec:;
    { uint32_t ea = c->r[4] + 0x598u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a1430; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1408u; rt_dispatch(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1424u; rt_dispatch(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1620; }
L_7a1430:;
    { uint32_t ea = c->r[4] + 0x59cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a1474; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a144cu; rt_dispatch(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1468u; rt_dispatch(c);
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1620; }
L_7a1474:;
    { uint32_t ea = c->r[4] + 0x5a0u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a14b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1490u; rt_dispatch(c);
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a14acu; rt_dispatch(c);
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1620; }
L_7a14b8:;
    { uint32_t ea = c->r[4] + 0x5a4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a14fc; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a14d4u; rt_dispatch(c);
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a14f0u; rt_dispatch(c);
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1620; }
L_7a14fc:;
    { uint32_t ea = c->r[4] + 0x5a8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a1540; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1518u; rt_dispatch(c);
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1534u; rt_dispatch(c);
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_7a1620; }
L_7a1540:;
    { uint32_t ea = c->r[4] + 0x5acu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_7a1630; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a155cu; rt_dispatch(c);
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a1604; }
L_7a1568:;
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[1]); }
L_7a156c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[14] = 0x7a1578u; f_74f260(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_79f560(c);
L_7a1584:;
    c->r[1] = 0x2493u;
    c->r[2] = c->r[0] - 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x92490000u;
    c->r[2] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[2] << 32) + (int64_t)(int32_t)c->r[2] * (int32_t)c->r[1]) >> 32);
    c->r[3] = (c->r[2] >> 2);
    c->r[2] = c->r[3] + (c->r[2] >> 31);
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[2]); }
    c->r[2] = (c->r[2] << 3) - c->r[2];
    { uint32_t ea = c->r[4] + 0x588u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_7a15f4; }
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    goto L_7a15e0;
L_7a15c4:;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[3] << 3) - c->r[3];
    { uint32_t ea = c->r[4] + 0x588u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[6] + c->r[3];
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_7a15f4; }
L_7a15e0:;
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 2);
    c->r[1] = c->r[2] + (c->r[1] >> 31);
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[0]); }
L_7a15f4:;
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    c->r[14] = 0x7a1600u; f_74f260(c);
    goto L_7a1624;
L_7a1604:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x7a1614u; rt_dispatch(c);
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a1630; }
L_7a1620:;
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[1]); }
L_7a1624:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_7a95d8(c);
L_7a1630:;
    { uint32_t ea = c->r[4] + 0x5f8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[1] = 0x2493u;
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x584u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x92490000u;
    c->r[1] = (uint32_t)((uint64_t)(((int64_t)(int32_t)c->r[0] << 32) + (int64_t)(int32_t)c->r[0] * (int32_t)c->r[1]) >> 32);
    c->r[2] = (c->r[1] >> 2);
    c->r[1] = c->r[2] + (c->r[1] >> 31);
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_7a168c; }
    c->r[1] = 0x4925u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x24920000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = c->r[0] - c->r[2];
    c->r[1] = c->r[2] + (c->r[1] >> 1);
    c->r[2] = (c->r[1] >> 2);
    c->r[2] = (c->r[2] << 3);
    c->r[1] = c->r[2] - (c->r[1] >> 2);
    c->r[1] = c->r[0] - c->r[1];
L_7a168c:;
    { uint32_t ea = c->r[4] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[6] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_7a16b8; }
    { uint32_t r = c->r[6] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[0];
    if (COND_EQ) { goto L_7a16c8; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { c->r[2] = 0x0u; }
    goto L_7a16c4;
L_7a16b8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = c->r[0] - 0x1u; }
    if (COND_EQ) { c->r[2] = (uint32_t)(uint8_t)(c->r[1]); }
L_7a16c4:;
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[2]); }
L_7a16c8:;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { goto L_7a156c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_7a16d8(Cpu *restrict c) {
    FN_ENTER(0x7a16d8u);
L_7a16d8:;
    __attribute__((musttail)) return f_76dc20(c);
}
void f_7a16dc(Cpu *restrict c) {
    FN_ENTER(0x7a16dcu);
L_7a16dc:;
    __attribute__((musttail)) return f_76dc24(c);
}
void f_7a16e0(Cpu *restrict c) {
    FN_ENTER(0x7a16e0u);
L_7a16e0:;
    c->r[1] = 0x12974c8u;
    { uint32_t ea = 0x7a16ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x6u);
    c->r[1] = 0x108f8c0u;
    if (COND_HI) { c->r[2] = 0x0u; }
    c->r[1] = 0x7a1708u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    __attribute__((musttail)) return f_76e1a8(c);
}
void f_7a1714(Cpu *restrict c) {
    FN_ENTER(0x7a1714u);
L_7a1714:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[0] = 0x12991b4u;
    c->r[8] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x7a1734u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a1738u; f_366918(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a19a0; }
    c->r[0] = 0x1297d00u;
    { uint32_t ea = 0x7a174cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x7a1764u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = 0x18b8u;
    c->r[2] = 0x10u;
    c->pc = c->r[5]; c->r[14] = 0x7a1778u; rt_dispatch(c);
    c->r[1] = c->r[6];
    c->r[2] = 0x18b8u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    c->r[14] = 0x7a1788u; f_15efdd0(c);
    c->r[6] = 0x0u;
    c->r[5] = 0x1u;
    c->r[1] = 0x1bu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x69u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8au; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8bu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a17bcu; f_74533c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[6]); }
    c->r[14] = 0x7a17c8u; f_7a19c8(c);
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_7a17e0; }
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8];
    c->r[14] = 0x7a17e0u; f_360078(c);
L_7a17e0:;
    c->r[0] = 0x378u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = 0x374u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x7a17f8u; f_7a3cbc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x2f4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2fcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[6]); }
    c->r[14] = 0x7a180cu; f_7a3e30(c);
    c->r[0] = 0x1297548u;
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x41cu; ST8(ea, c->r[5]); }
    c->r[5] = 0x17fu;
    { uint32_t ea = c->r[4] + 0x5b0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x7a1830u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_7a182c:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_7a1848; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    c->r[14] = 0x7a1844u; f_352f6c(c);
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[6]); }
L_7a1848:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x190u);
    if (COND_NE) { goto L_7a182c; }
    c->r[0] = 0x108f76cu;
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x640u; ST8(ea, c->r[7]); }
    c->r[9] = 0x7a1870u + c->r[0];
    c->r[0] = 0x12974fcu;
    { uint32_t ea = 0x7a1878u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x12974f8u;
    { uint32_t ea = 0x7a1880u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_7a187c:;
    c->r[8] = (uint32_t)(uint8_t)(c->r[5]);
    (void)f_subs(c, c->r[8], 0x11u);
    if (COND_CS) { goto L_7a18d4; }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x7a1898u; f_5bd064(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_7a18c8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0x7a18b8u; f_3529a8(c);
    c->r[1] = c->r[4] + (c->r[8] << 2);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[5] = c->r[5] + 0x1u; }
    { uint32_t ea = c->r[1] + 0x5fcu; ST32(ea, c->r[0]); }
L_7a18c8:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x3cu);
    if (COND_CC) { goto L_7a187c; }
L_7a18d4:;
    c->r[0] = 0x5b4u;
    c->r[1] = 0x45u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x7a18e4u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = 0xffffu;
    c->r[1] = 0x1224u;
    c->r[7] = 0x0u;
    c->r[6] = 0x0u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x30000u;
    c->r[5] = c->r[0] + c->r[1];
L_7a1904:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & c->r[9]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_7a1934; }
    c->r[0] = 0x1u;
    c->r[14] = 0x7a1918u; f_9af37c(c);
    c->r[1] = (uint32_t)(uint8_t)(c->r[7]);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x5b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5f8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x5f8u; ST8(ea, c->r[7]); }
L_7a1934:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x14u;
    (void)f_subs(c, c->r[6], 0x11u);
    if (COND_NE) { goto L_7a1904; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x88u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x7a1954u; f_76df00(c);
    c->r[14] = 0x7a1958u; f_85ebb0(c);
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[14] = 0x7a1964u; f_85eb68(c);
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_7a1980; }
    c->r[0] = 0x1297238u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x7a197cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; ST8(ea, c->r[1]); }
L_7a1980:;
    c->r[0] = 0x129724cu;
    { uint32_t ea = 0x7a198cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x7a1990u; f_75c4d4(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_79f560(c);
L_7a19a0:;
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
