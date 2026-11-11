#include "cpu.h"
#include "neon_rt.h"
void f_3e79cc(Cpu *c);
void f_3e7aa8(Cpu *c);
void f_3e7bb0(Cpu *c);
void f_3e7cc0(Cpu *c);
void f_3e7de0(Cpu *c);
void f_3e7ee8(Cpu *c);
void f_3e7ffc(Cpu *c);
void f_3e8108(Cpu *c);
void f_3e82ac(Cpu *c);
void f_3e83e0(Cpu *c);
void f_3e853c(Cpu *c);
void f_3e8674(Cpu *c);
void f_3e879c(Cpu *c);
void f_3e88b0(Cpu *c);
void f_3e89c4(Cpu *c);
void f_3e8ad4(Cpu *c);
void f_3e8be8(Cpu *c);
void f_3e8cd4(Cpu *c);
void f_3f6c28(Cpu *c);
void f_3f6d10(Cpu *c);
void f_3f6df4(Cpu *c);
void f_3f6eec(Cpu *c);
void f_3f6fcc(Cpu *c);
void f_3f70b0(Cpu *c);
void f_3fb810(Cpu *c);
void f_3fb8fc(Cpu *c);
void f_3fb9e4(Cpu *c);
void f_3fbb08(Cpu *c);
void f_3fbbe4(Cpu *c);
void f_3fbcc0(Cpu *c);
void f_3fbda0(Cpu *c);
void f_3fbe84(Cpu *c);
void f_3fbf64(Cpu *c);
void f_3fc044(Cpu *c);
void f_3fc12c(Cpu *c);
void f_3fc20c(Cpu *c);
void f_3fc2e8(Cpu *c);
void f_3fc3c8(Cpu *c);
void f_3fc4a4(Cpu *c);
void f_3fc59c(Cpu *c);
void f_3fc6a8(Cpu *c);
void f_3fc784(Cpu *c);
void f_3fc86c(Cpu *c);
void f_3fc954(Cpu *c);
void f_3fca30(Cpu *c);
void f_3fcb10(Cpu *c);
void f_3fcbf8(Cpu *c);
void f_3fcce0(Cpu *c);
void f_3fcdbc(Cpu *c);
void f_3fcea4(Cpu *c);
void f_3fcfd4(Cpu *c);
void f_3fd104(Cpu *c);
void f_3fd234(Cpu *c);
void f_3fd364(Cpu *c);
void f_3fd440(Cpu *c);
void f_3fd51c(Cpu *c);
void f_3fd5f8(Cpu *c);
void f_3fd6d4(Cpu *c);
void f_3fd7b0(Cpu *c);
void f_3fd88c(Cpu *c);
void f_3fd968(Cpu *c);
void f_3fda44(Cpu *c);
void f_3fdb20(Cpu *c);
void f_3fdbfc(Cpu *c);
void f_3fdcd8(Cpu *c);
void f_3fddb4(Cpu *c);
void f_3fde90(Cpu *c);
void f_3fdf6c(Cpu *c);
void f_3fe048(Cpu *c);
void f_3fe124(Cpu *c);
void f_3fe200(Cpu *c);
void f_3fe2dc(Cpu *c);
void f_3fe3b8(Cpu *c);
void f_3fe494(Cpu *c);
void f_3fe57c(Cpu *c);
void f_3fe664(Cpu *c);
void f_3fe740(Cpu *c);
void f_3fe81c(Cpu *c);
void f_3fe8f8(Cpu *c);
void f_3fe9d4(Cpu *c);
void f_3feab0(Cpu *c);
void f_3feb8c(Cpu *c);
void f_3fec74(Cpu *c);
void f_3fed54(Cpu *c);
void f_413cf4(Cpu *c);
void f_413de4(Cpu *c);
void f_413ec4(Cpu *c);
void f_413fb4(Cpu *c);
void f_414094(Cpu *c);
void f_414178(Cpu *c);
void f_41425c(Cpu *c);
void f_414344(Cpu *c);
void f_414424(Cpu *c);
void f_414504(Cpu *c);
void f_4145e4(Cpu *c);
void f_4146d8(Cpu *c);
void f_4147b8(Cpu *c);
void f_414898(Cpu *c);
void f_41497c(Cpu *c);
void f_414a7c(Cpu *c);
void f_414b60(Cpu *c);
void f_414c44(Cpu *c);
void f_414d2c(Cpu *c);
void f_41b150(Cpu *c);
void f_41b234(Cpu *c);
void f_41b310(Cpu *c);
void f_41b3ec(Cpu *c);
void f_41cfec(Cpu *c);
void f_41d6a8(Cpu *c);
void f_41d798(Cpu *c);
void f_41d888(Cpu *c);
void f_41d98c(Cpu *c);
void f_41da7c(Cpu *c);
void f_41db6c(Cpu *c);
void f_41dc48(Cpu *c);
void f_bfbf4c(Cpu *c);
void f_bfc1b0(Cpu *c);
void f_428374(Cpu *restrict c) {
    FN_ENTER(0x428374u);
L_428374:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4284fc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428398u; f_3fb810(c);
    c->r[14] = 0x42839cu; f_bfbf4c(c);
    c->r[1] = 0x16130ecu;
    { uint32_t ea = 0x4283a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4283c0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4284fc; }
    goto L_4284bc;
L_4284bc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4284bc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4284f4; }
    c->r[0] = 0x16106a4u;
    { uint32_t ea = 0x4284e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4284f4u; rt_dispatch(c);
L_4284f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4284fc:;
    { uint32_t ea = c->r[4] + 0x3e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428588; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428514u; f_3fb8fc(c);
    c->r[14] = 0x428518u; f_bfbf4c(c);
    c->r[1] = 0x1612f80u;
    { uint32_t ea = 0x428524u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42853cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428588; }
L_428548:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428548; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428580; }
    c->r[0] = 0x1610618u;
    { uint32_t ea = 0x428570u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428580u; rt_dispatch(c);
L_428580:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428588:;
    { uint32_t ea = c->r[4] + 0x3e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428614; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4285a0u; f_3fb9e4(c);
    c->r[14] = 0x4285a4u; f_bfbf4c(c);
    c->r[1] = 0x1612f04u;
    { uint32_t ea = 0x4285b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4285c8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428614; }
L_4285d4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4285d4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42860c; }
    c->r[0] = 0x161058cu;
    { uint32_t ea = 0x4285fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42860cu; rt_dispatch(c);
L_42860c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428614:;
    { uint32_t ea = c->r[4] + 0x3ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4286a0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42862cu; f_3fbb08(c);
    c->r[14] = 0x428630u; f_bfbf4c(c);
    c->r[1] = 0x1612e88u;
    { uint32_t ea = 0x42863cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428654u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4286a0; }
L_428660:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428660; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428698; }
    c->r[0] = 0x1610500u;
    { uint32_t ea = 0x428688u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428698u; rt_dispatch(c);
L_428698:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4286a0:;
    { uint32_t ea = c->r[4] + 0x3f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42872c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4286b8u; f_3fbbe4(c);
    c->r[14] = 0x4286bcu; f_bfbf4c(c);
    c->r[1] = 0x1612e0cu;
    { uint32_t ea = 0x4286c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4286e0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42872c; }
L_4286ec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4286ec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428724; }
    c->r[0] = 0x1610474u;
    { uint32_t ea = 0x428714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428724u; rt_dispatch(c);
L_428724:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42872c:;
    { uint32_t ea = c->r[4] + 0x3f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4287b8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428744u; f_3fbcc0(c);
    c->r[14] = 0x428748u; f_bfbf4c(c);
    c->r[1] = 0x1612d90u;
    { uint32_t ea = 0x428754u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42876cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4287b8; }
L_428778:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428778; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4287b0; }
    c->r[0] = 0x16103e8u;
    { uint32_t ea = 0x4287a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4287b0u; rt_dispatch(c);
L_4287b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4287b8:;
    { uint32_t ea = c->r[4] + 0x3f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428844; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4287d0u; f_3fbda0(c);
    c->r[14] = 0x4287d4u; f_bfbf4c(c);
    c->r[1] = 0x1612d14u;
    { uint32_t ea = 0x4287e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4287f8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428844; }
L_428804:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428804; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42883c; }
    c->r[0] = 0x161035cu;
    { uint32_t ea = 0x42882cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42883cu; rt_dispatch(c);
L_42883c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428844:;
    { uint32_t ea = c->r[4] + 0x3fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4288d0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42885cu; f_3fbe84(c);
    c->r[14] = 0x428860u; f_bfbf4c(c);
    c->r[1] = 0x1612c98u;
    { uint32_t ea = 0x42886cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428884u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4288d0; }
L_428890:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428890; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4288c8; }
    c->r[0] = 0x16102d0u;
    { uint32_t ea = 0x4288b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4288c8u; rt_dispatch(c);
L_4288c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4288d0:;
    { uint32_t ea = c->r[4] + 0x400u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42895c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4288e8u; f_3fbf64(c);
    c->r[14] = 0x4288ecu; f_bfbf4c(c);
    c->r[1] = 0x1612c1cu;
    { uint32_t ea = 0x4288f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x400u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428910u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42895c; }
L_42891c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42891c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428954; }
    c->r[0] = 0x1610244u;
    { uint32_t ea = 0x428944u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428954u; rt_dispatch(c);
L_428954:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42895c:;
    { uint32_t ea = c->r[4] + 0x404u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4289e8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428974u; f_3fc044(c);
    c->r[14] = 0x428978u; f_bfbf4c(c);
    c->r[1] = 0x1612ba0u;
    { uint32_t ea = 0x428984u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x404u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42899cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4289e8; }
L_4289a8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4289a8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4289e0; }
    c->r[0] = 0x16101b8u;
    { uint32_t ea = 0x4289d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4289e0u; rt_dispatch(c);
L_4289e0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4289e8:;
    { uint32_t ea = c->r[4] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428a74; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428a00u; f_3fc2e8(c);
    c->r[14] = 0x428a04u; f_bfbf4c(c);
    c->r[1] = 0x1612b44u;
    { uint32_t ea = 0x428a10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x408u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428a28u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428a74; }
L_428a34:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428a34; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428a6c; }
    c->r[0] = 0x161012cu;
    { uint32_t ea = 0x428a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428a6cu; rt_dispatch(c);
L_428a6c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428a74:;
    { uint32_t ea = c->r[4] + 0x40cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428b00; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428a8cu; f_3fc3c8(c);
    c->r[14] = 0x428a90u; f_bfbf4c(c);
    c->r[1] = 0x1612ac8u;
    { uint32_t ea = 0x428a9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428ab4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428b00; }
L_428ac0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428ac0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428af8; }
    c->r[0] = 0x16100a0u;
    { uint32_t ea = 0x428ae8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428af8u; rt_dispatch(c);
L_428af8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428b00:;
    { uint32_t ea = c->r[4] + 0x410u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428b8c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428b18u; f_3fc12c(c);
    c->r[14] = 0x428b1cu; f_bfbf4c(c);
    c->r[1] = 0x1612a0cu;
    { uint32_t ea = 0x428b28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x410u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428b40u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428b8c; }
L_428b4c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428b4c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428b84; }
    c->r[0] = 0x1610014u;
    { uint32_t ea = 0x428b74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428b84u; rt_dispatch(c);
L_428b84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428b8c:;
    { uint32_t ea = c->r[4] + 0x414u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428c18; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428ba4u; f_3fc20c(c);
    c->r[14] = 0x428ba8u; f_bfbf4c(c);
    c->r[1] = 0x1612990u;
    { uint32_t ea = 0x428bb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x414u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428bccu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428c18; }
L_428bd8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428bd8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428c10; }
    c->r[0] = 0x160ff88u;
    { uint32_t ea = 0x428c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428c10u; rt_dispatch(c);
L_428c10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428c18:;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428ca4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428c30u; f_3fc4a4(c);
    c->r[14] = 0x428c34u; f_bfbf4c(c);
    c->r[1] = 0x1612934u;
    { uint32_t ea = 0x428c40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428c58u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428ca4; }
L_428c64:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428c64; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428c9c; }
    c->r[0] = 0x160fefcu;
    { uint32_t ea = 0x428c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428c9cu; rt_dispatch(c);
L_428c9c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428ca4:;
    { uint32_t ea = c->r[4] + 0x41cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428d30; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428cbcu; f_3fc59c(c);
    c->r[14] = 0x428cc0u; f_bfbf4c(c);
    c->r[1] = 0x16128b8u;
    { uint32_t ea = 0x428cccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x41cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428ce4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428d30; }
L_428cf0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428cf0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428d28; }
    c->r[0] = 0x160fe70u;
    { uint32_t ea = 0x428d18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428d28u; rt_dispatch(c);
L_428d28:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428d30:;
    { uint32_t ea = c->r[4] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428dbc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428d48u; f_3fc6a8(c);
    c->r[14] = 0x428d4cu; f_bfbf4c(c);
    c->r[1] = 0x161283cu;
    { uint32_t ea = 0x428d58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x420u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428d70u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428dbc; }
L_428d7c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428d7c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428db4; }
    c->r[0] = 0x160fde4u;
    { uint32_t ea = 0x428da4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428db4u; rt_dispatch(c);
L_428db4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428dbc:;
    { uint32_t ea = c->r[4] + 0x424u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428e48; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428dd4u; f_3fc784(c);
    c->r[14] = 0x428dd8u; f_bfbf4c(c);
    c->r[1] = 0x16127c0u;
    { uint32_t ea = 0x428de4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x424u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428dfcu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428e48; }
L_428e08:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428e08; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428e40; }
    c->r[0] = 0x160fd58u;
    { uint32_t ea = 0x428e30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428e40u; rt_dispatch(c);
L_428e40:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428e48:;
    { uint32_t ea = c->r[4] + 0x428u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428ed4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428e60u; f_3fc86c(c);
    c->r[14] = 0x428e64u; f_bfbf4c(c);
    c->r[1] = 0x1612744u;
    { uint32_t ea = 0x428e70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x428u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428e88u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428ed4; }
L_428e94:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428e94; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428ecc; }
    c->r[0] = 0x160fcccu;
    { uint32_t ea = 0x428ebcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428eccu; rt_dispatch(c);
L_428ecc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428ed4:;
    { uint32_t ea = c->r[4] + 0x42cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428f60; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428eecu; f_3fc954(c);
    c->r[14] = 0x428ef0u; f_bfbf4c(c);
    c->r[1] = 0x16126c8u;
    { uint32_t ea = 0x428efcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x42cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428f14u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428f60; }
L_428f20:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428f20; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428f58; }
    c->r[0] = 0x160fc40u;
    { uint32_t ea = 0x428f48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428f58u; rt_dispatch(c);
L_428f58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428f60:;
    { uint32_t ea = c->r[4] + 0x430u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_428fec; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x428f78u; f_3fca30(c);
    c->r[14] = 0x428f7cu; f_bfbf4c(c);
    c->r[1] = 0x161264cu;
    { uint32_t ea = 0x428f88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x430u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x428fa0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_428fec; }
L_428fac:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_428fac; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_428fe4; }
    c->r[0] = 0x160fbb4u;
    { uint32_t ea = 0x428fd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x428fe4u; rt_dispatch(c);
L_428fe4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_428fec:;
    { uint32_t ea = c->r[4] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429078; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429004u; f_3fcb10(c);
    c->r[14] = 0x429008u; f_bfbf4c(c);
    c->r[1] = 0x16125d0u;
    { uint32_t ea = 0x429014u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x434u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42902cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429078; }
L_429038:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429038; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429070; }
    c->r[0] = 0x160fb28u;
    { uint32_t ea = 0x429060u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429070u; rt_dispatch(c);
L_429070:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429078:;
    { uint32_t ea = c->r[4] + 0x438u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429104; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429090u; f_3fcbf8(c);
    c->r[14] = 0x429094u; f_bfbf4c(c);
    c->r[1] = 0x1612554u;
    { uint32_t ea = 0x4290a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x438u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4290b8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429104; }
L_4290c4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4290c4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4290fc; }
    c->r[0] = 0x160fa9cu;
    { uint32_t ea = 0x4290ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4290fcu; rt_dispatch(c);
L_4290fc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429104:;
    { uint32_t ea = c->r[4] + 0x43cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429190; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42911cu; f_3fcce0(c);
    c->r[14] = 0x429120u; f_bfbf4c(c);
    c->r[1] = 0x16124d8u;
    { uint32_t ea = 0x42912cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x43cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429144u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429190; }
L_429150:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429150; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429188; }
    c->r[0] = 0x160fa10u;
    { uint32_t ea = 0x429178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429188u; rt_dispatch(c);
L_429188:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429190:;
    { uint32_t ea = c->r[4] + 0x440u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42921c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4291a8u; f_3fcdbc(c);
    c->r[14] = 0x4291acu; f_bfbf4c(c);
    c->r[1] = 0x161245cu;
    { uint32_t ea = 0x4291b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x440u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4291d0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42921c; }
L_4291dc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4291dc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429214; }
    c->r[0] = 0x160f984u;
    { uint32_t ea = 0x429204u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429214u; rt_dispatch(c);
L_429214:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42921c:;
    { uint32_t ea = c->r[4] + 0x444u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4292a8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429234u; f_3fcea4(c);
    c->r[14] = 0x429238u; f_bfbf4c(c);
    c->r[1] = 0x16123e0u;
    { uint32_t ea = 0x429244u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x444u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42925cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4292a8; }
L_429268:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429268; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4292a0; }
    c->r[0] = 0x160f8f8u;
    { uint32_t ea = 0x429290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4292a0u; rt_dispatch(c);
L_4292a0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4292a8:;
    { uint32_t ea = c->r[4] + 0x448u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429334; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4292c0u; f_3fcfd4(c);
    c->r[14] = 0x4292c4u; f_bfbf4c(c);
    c->r[1] = 0x161236cu;
    { uint32_t ea = 0x4292d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x448u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4292e8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429334; }
L_4292f4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4292f4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42932c; }
    c->r[0] = 0x160f86cu;
    { uint32_t ea = 0x42931cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42932cu; rt_dispatch(c);
L_42932c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429334:;
    { uint32_t ea = c->r[4] + 0x44cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4293c0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42934cu; f_3fd104(c);
    c->r[14] = 0x429350u; f_bfbf4c(c);
    c->r[1] = 0x16122f8u;
    { uint32_t ea = 0x42935cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429374u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4293c0; }
L_429380:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429380; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4293b8; }
    c->r[0] = 0x160f7e0u;
    { uint32_t ea = 0x4293a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4293b8u; rt_dispatch(c);
L_4293b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4293c0:;
    { uint32_t ea = c->r[4] + 0x450u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42944c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4293d8u; f_3fd234(c);
    c->r[14] = 0x4293dcu; f_bfbf4c(c);
    c->r[1] = 0x1612284u;
    { uint32_t ea = 0x4293e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x450u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429400u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42944c; }
L_42940c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42940c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429444; }
    c->r[0] = 0x160f754u;
    { uint32_t ea = 0x429434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429444u; rt_dispatch(c);
L_429444:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42944c:;
    { uint32_t ea = c->r[4] + 0x454u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4295c8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429464u; f_3fd364(c);
    c->r[14] = 0x429468u; f_bfbf4c(c);
    c->r[1] = 0x1612210u;
    { uint32_t ea = 0x429474u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x454u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42948cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4295c8; }
L_429498:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429498; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4295c0; }
    c->r[0] = 0x160f6c8u;
    { uint32_t ea = 0x4294c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4294d0u; rt_dispatch(c);
    goto L_4295c0;
L_4295c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4295c8:;
    { uint32_t ea = c->r[4] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429654; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4295e0u; f_3fd440(c);
    c->r[14] = 0x4295e4u; f_bfbf4c(c);
    c->r[1] = 0x16120a4u;
    { uint32_t ea = 0x4295f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x458u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429608u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429654; }
L_429614:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429614; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42964c; }
    c->r[0] = 0x160f54cu;
    { uint32_t ea = 0x42963cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42964cu; rt_dispatch(c);
L_42964c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429654:;
    { uint32_t ea = c->r[4] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4296e0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42966cu; f_3fd51c(c);
    c->r[14] = 0x429670u; f_bfbf4c(c);
    c->r[1] = 0x1612028u;
    { uint32_t ea = 0x42967cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x45cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429694u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4296e0; }
L_4296a0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4296a0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4296d8; }
    c->r[0] = 0x160f4c0u;
    { uint32_t ea = 0x4296c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4296d8u; rt_dispatch(c);
L_4296d8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4296e0:;
    { uint32_t ea = c->r[4] + 0x460u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42976c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4296f8u; f_3fd5f8(c);
    c->r[14] = 0x4296fcu; f_bfbf4c(c);
    c->r[1] = 0x1611facu;
    { uint32_t ea = 0x429708u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x460u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429720u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42976c; }
L_42972c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42972c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429764; }
    c->r[0] = 0x160f434u;
    { uint32_t ea = 0x429754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429764u; rt_dispatch(c);
L_429764:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42976c:;
    { uint32_t ea = c->r[4] + 0x464u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_4297f8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429784u; f_3fd6d4(c);
    c->r[14] = 0x429788u; f_bfbf4c(c);
    c->r[1] = 0x1611f30u;
    { uint32_t ea = 0x429794u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x464u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4297acu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_4297f8; }
L_4297b8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4297b8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_4297f0; }
    c->r[0] = 0x160f3a8u;
    { uint32_t ea = 0x4297e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x4297f0u; rt_dispatch(c);
L_4297f0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_4297f8:;
    { uint32_t ea = c->r[4] + 0x468u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429884; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429810u; f_3fd7b0(c);
    c->r[14] = 0x429814u; f_bfbf4c(c);
    c->r[1] = 0x1611eb4u;
    { uint32_t ea = 0x429820u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x468u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429838u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429884; }
L_429844:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429844; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42987c; }
    c->r[0] = 0x160f31cu;
    { uint32_t ea = 0x42986cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42987cu; rt_dispatch(c);
L_42987c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429884:;
    { uint32_t ea = c->r[4] + 0x46cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429910; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42989cu; f_3fd88c(c);
    c->r[14] = 0x4298a0u; f_bfbf4c(c);
    c->r[1] = 0x1611e38u;
    { uint32_t ea = 0x4298acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x46cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4298c4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429910; }
L_4298d0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4298d0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429908; }
    c->r[0] = 0x160f290u;
    { uint32_t ea = 0x4298f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429908u; rt_dispatch(c);
L_429908:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429910:;
    { uint32_t ea = c->r[4] + 0x470u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42999c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429928u; f_3fd968(c);
    c->r[14] = 0x42992cu; f_bfbf4c(c);
    c->r[1] = 0x1611dbcu;
    { uint32_t ea = 0x429938u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x470u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429950u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42999c; }
L_42995c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42995c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429994; }
    c->r[0] = 0x160f204u;
    { uint32_t ea = 0x429984u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429994u; rt_dispatch(c);
L_429994:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42999c:;
    { uint32_t ea = c->r[4] + 0x474u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429a28; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x4299b4u; f_3fda44(c);
    c->r[14] = 0x4299b8u; f_bfbf4c(c);
    c->r[1] = 0x1611d40u;
    { uint32_t ea = 0x4299c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x474u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x4299dcu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429a28; }
L_4299e8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_4299e8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429a20; }
    c->r[0] = 0x160f178u;
    { uint32_t ea = 0x429a10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429a20u; rt_dispatch(c);
L_429a20:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429a28:;
    { uint32_t ea = c->r[4] + 0x478u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429ab4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429a40u; f_3fdb20(c);
    c->r[14] = 0x429a44u; f_bfbf4c(c);
    c->r[1] = 0x1611cc4u;
    { uint32_t ea = 0x429a50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x478u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429a68u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429ab4; }
L_429a74:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429a74; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429aac; }
    c->r[0] = 0x160f0ecu;
    { uint32_t ea = 0x429a9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429aacu; rt_dispatch(c);
L_429aac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429ab4:;
    { uint32_t ea = c->r[4] + 0x47cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429b40; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429accu; f_3fdbfc(c);
    c->r[14] = 0x429ad0u; f_bfbf4c(c);
    c->r[1] = 0x1611c48u;
    { uint32_t ea = 0x429adcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x47cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429af4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429b40; }
L_429b00:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429b00; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429b38; }
    c->r[0] = 0x160f060u;
    { uint32_t ea = 0x429b28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429b38u; rt_dispatch(c);
L_429b38:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429b40:;
    { uint32_t ea = c->r[4] + 0x480u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429bcc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429b58u; f_3fdcd8(c);
    c->r[14] = 0x429b5cu; f_bfbf4c(c);
    c->r[1] = 0x1611bccu;
    { uint32_t ea = 0x429b68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x480u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429b80u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429bcc; }
L_429b8c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429b8c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429bc4; }
    c->r[0] = 0x160efd4u;
    { uint32_t ea = 0x429bb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429bc4u; rt_dispatch(c);
L_429bc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429bcc:;
    { uint32_t ea = c->r[4] + 0x484u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429c58; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429be4u; f_3fddb4(c);
    c->r[14] = 0x429be8u; f_bfbf4c(c);
    c->r[1] = 0x1611b50u;
    { uint32_t ea = 0x429bf4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x484u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429c0cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429c58; }
L_429c18:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429c18; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429c50; }
    c->r[0] = 0x160ef48u;
    { uint32_t ea = 0x429c40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429c50u; rt_dispatch(c);
L_429c50:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429c58:;
    { uint32_t ea = c->r[4] + 0x488u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429ce4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429c70u; f_3fde90(c);
    c->r[14] = 0x429c74u; f_bfbf4c(c);
    c->r[1] = 0x1611ad4u;
    { uint32_t ea = 0x429c80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x488u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429c98u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429ce4; }
L_429ca4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429ca4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429cdc; }
    c->r[0] = 0x160eebcu;
    { uint32_t ea = 0x429cccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429cdcu; rt_dispatch(c);
L_429cdc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429ce4:;
    { uint32_t ea = c->r[4] + 0x48cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429d70; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429cfcu; f_3fdf6c(c);
    c->r[14] = 0x429d00u; f_bfbf4c(c);
    c->r[1] = 0x1611a58u;
    { uint32_t ea = 0x429d0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x48cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429d24u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429d70; }
L_429d30:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429d30; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429d68; }
    c->r[0] = 0x160ee30u;
    { uint32_t ea = 0x429d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429d68u; rt_dispatch(c);
L_429d68:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429d70:;
    { uint32_t ea = c->r[4] + 0x490u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429dfc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429d88u; f_3fe048(c);
    c->r[14] = 0x429d8cu; f_bfbf4c(c);
    c->r[1] = 0x16119dcu;
    { uint32_t ea = 0x429d98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x490u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429db0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429dfc; }
L_429dbc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429dbc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429df4; }
    c->r[0] = 0x160eda4u;
    { uint32_t ea = 0x429de4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429df4u; rt_dispatch(c);
L_429df4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429dfc:;
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429e88; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429e14u; f_3fe124(c);
    c->r[14] = 0x429e18u; f_bfbf4c(c);
    c->r[1] = 0x1611960u;
    { uint32_t ea = 0x429e24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x494u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429e3cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429e88; }
L_429e48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429e48; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429e80; }
    c->r[0] = 0x160ed18u;
    { uint32_t ea = 0x429e70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429e80u; rt_dispatch(c);
L_429e80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429e88:;
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429f14; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429ea0u; f_3fe200(c);
    c->r[14] = 0x429ea4u; f_bfbf4c(c);
    c->r[1] = 0x16118e4u;
    { uint32_t ea = 0x429eb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x498u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429ec8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429f14; }
L_429ed4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429ed4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429f0c; }
    c->r[0] = 0x160ec8cu;
    { uint32_t ea = 0x429efcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429f0cu; rt_dispatch(c);
L_429f0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429f14:;
    { uint32_t ea = c->r[4] + 0x49cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_429fa0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429f2cu; f_3fe2dc(c);
    c->r[14] = 0x429f30u; f_bfbf4c(c);
    c->r[1] = 0x1611868u;
    { uint32_t ea = 0x429f3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x49cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429f54u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_429fa0; }
L_429f60:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429f60; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_429f98; }
    c->r[0] = 0x160ec00u;
    { uint32_t ea = 0x429f88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x429f98u; rt_dispatch(c);
L_429f98:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_429fa0:;
    { uint32_t ea = c->r[4] + 0x4a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a02c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x429fb8u; f_3fe3b8(c);
    c->r[14] = 0x429fbcu; f_bfbf4c(c);
    c->r[1] = 0x16117ecu;
    { uint32_t ea = 0x429fc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x429fe0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a02c; }
L_429fec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_429fec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a024; }
    c->r[0] = 0x160eb74u;
    { uint32_t ea = 0x42a014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a024u; rt_dispatch(c);
L_42a024:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a02c:;
    { uint32_t ea = c->r[4] + 0x4a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a0b8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a044u; f_3fe494(c);
    c->r[14] = 0x42a048u; f_bfbf4c(c);
    c->r[1] = 0x1611770u;
    { uint32_t ea = 0x42a054u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a06cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a0b8; }
L_42a078:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a078; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a0b0; }
    c->r[0] = 0x160eae8u;
    { uint32_t ea = 0x42a0a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a0b0u; rt_dispatch(c);
L_42a0b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a0b8:;
    { uint32_t ea = c->r[4] + 0x4a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a144; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a0d0u; f_3fe57c(c);
    c->r[14] = 0x42a0d4u; f_bfbf4c(c);
    c->r[1] = 0x16116f4u;
    { uint32_t ea = 0x42a0e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a0f8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a144; }
L_42a104:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a104; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a13c; }
    c->r[0] = 0x160ea5cu;
    { uint32_t ea = 0x42a12cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a13cu; rt_dispatch(c);
L_42a13c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a144:;
    { uint32_t ea = c->r[4] + 0x4acu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a1d0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a15cu; f_3fe664(c);
    c->r[14] = 0x42a160u; f_bfbf4c(c);
    c->r[1] = 0x1611678u;
    { uint32_t ea = 0x42a16cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a184u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a1d0; }
L_42a190:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a190; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a1c8; }
    c->r[0] = 0x160e9d0u;
    { uint32_t ea = 0x42a1b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a1c8u; rt_dispatch(c);
L_42a1c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a1d0:;
    { uint32_t ea = c->r[4] + 0x4b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a25c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a1e8u; f_3fe740(c);
    c->r[14] = 0x42a1ecu; f_bfbf4c(c);
    c->r[1] = 0x16115fcu;
    { uint32_t ea = 0x42a1f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a210u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a25c; }
L_42a21c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a21c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a254; }
    c->r[0] = 0x160e944u;
    { uint32_t ea = 0x42a244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a254u; rt_dispatch(c);
L_42a254:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a25c:;
    { uint32_t ea = c->r[4] + 0x4b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a2e8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a274u; f_3fe81c(c);
    c->r[14] = 0x42a278u; f_bfbf4c(c);
    c->r[1] = 0x1611580u;
    { uint32_t ea = 0x42a284u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a29cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a2e8; }
L_42a2a8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a2a8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a2e0; }
    c->r[0] = 0x160e8b8u;
    { uint32_t ea = 0x42a2d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a2e0u; rt_dispatch(c);
L_42a2e0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a2e8:;
    { uint32_t ea = c->r[4] + 0x4b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a374; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a300u; f_3fe8f8(c);
    c->r[14] = 0x42a304u; f_bfbf4c(c);
    c->r[1] = 0x1611504u;
    { uint32_t ea = 0x42a310u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a328u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a374; }
L_42a334:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a334; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a36c; }
    c->r[0] = 0x160e82cu;
    { uint32_t ea = 0x42a35cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a36cu; rt_dispatch(c);
L_42a36c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a374:;
    { uint32_t ea = c->r[4] + 0x4bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a400; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a38cu; f_3fe9d4(c);
    c->r[14] = 0x42a390u; f_bfbf4c(c);
    c->r[1] = 0x1611488u;
    { uint32_t ea = 0x42a39cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a3b4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a400; }
L_42a3c0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a3c0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a3f8; }
    c->r[0] = 0x160e7a0u;
    { uint32_t ea = 0x42a3e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a3f8u; rt_dispatch(c);
L_42a3f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a400:;
    { uint32_t ea = c->r[4] + 0x4c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a48c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a418u; f_3feab0(c);
    c->r[14] = 0x42a41cu; f_bfbf4c(c);
    c->r[1] = 0x161140cu;
    { uint32_t ea = 0x42a428u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a440u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a48c; }
L_42a44c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a44c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a484; }
    c->r[0] = 0x160e714u;
    { uint32_t ea = 0x42a474u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a484u; rt_dispatch(c);
L_42a484:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a48c:;
    { uint32_t ea = c->r[4] + 0x4c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a518; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a4a4u; f_3feb8c(c);
    c->r[14] = 0x42a4a8u; f_bfbf4c(c);
    c->r[1] = 0x1611390u;
    { uint32_t ea = 0x42a4b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a4ccu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a518; }
L_42a4d8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a4d8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a510; }
    c->r[0] = 0x160e688u;
    { uint32_t ea = 0x42a500u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a510u; rt_dispatch(c);
L_42a510:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a518:;
    { uint32_t ea = c->r[4] + 0x4c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a5a4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a530u; f_3fec74(c);
    c->r[14] = 0x42a534u; f_bfbf4c(c);
    c->r[1] = 0x1611314u;
    { uint32_t ea = 0x42a540u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a558u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a5a4; }
L_42a564:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a564; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a59c; }
    c->r[0] = 0x160e5fcu;
    { uint32_t ea = 0x42a58cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a59cu; rt_dispatch(c);
L_42a59c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a5a4:;
    { uint32_t ea = c->r[4] + 0x4ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a70c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a5bcu; f_3fed54(c);
    c->r[14] = 0x42a5c0u; f_bfbf4c(c);
    c->r[1] = 0x1611298u;
    { uint32_t ea = 0x42a5ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a5e4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a70c; }
    goto L_42a6cc;
L_42a6cc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a6cc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a704; }
    c->r[0] = 0x160e494u;
    { uint32_t ea = 0x42a6f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a704u; rt_dispatch(c);
L_42a704:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a70c:;
    { uint32_t ea = c->r[4] + 0x4d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a798; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a724u; f_3e79cc(c);
    c->r[14] = 0x42a728u; f_bfbf4c(c);
    c->r[1] = 0x1610b1cu;
    { uint32_t ea = 0x42a734u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a74cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a798; }
L_42a758:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a758; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a790; }
    c->r[0] = 0x160e408u;
    { uint32_t ea = 0x42a780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a790u; rt_dispatch(c);
L_42a790:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a798:;
    { uint32_t ea = c->r[4] + 0x4d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a824; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a7b0u; f_3e7aa8(c);
    c->r[14] = 0x42a7b4u; f_bfbf4c(c);
    c->r[1] = 0x1610aa0u;
    { uint32_t ea = 0x42a7c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a7d8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a824; }
L_42a7e4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a7e4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a81c; }
    c->r[0] = 0x160e37cu;
    { uint32_t ea = 0x42a80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a81cu; rt_dispatch(c);
L_42a81c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a824:;
    { uint32_t ea = c->r[4] + 0x4d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a8b0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a83cu; f_3e7bb0(c);
    c->r[14] = 0x42a840u; f_bfbf4c(c);
    c->r[1] = 0x1610a24u;
    { uint32_t ea = 0x42a84cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a864u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a8b0; }
L_42a870:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a870; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a8a8; }
    c->r[0] = 0x160e2f0u;
    { uint32_t ea = 0x42a898u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a8a8u; rt_dispatch(c);
L_42a8a8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a8b0:;
    { uint32_t ea = c->r[4] + 0x4dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a93c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a8c8u; f_3e7cc0(c);
    c->r[14] = 0x42a8ccu; f_bfbf4c(c);
    c->r[1] = 0x16109a8u;
    { uint32_t ea = 0x42a8d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a8f0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a93c; }
L_42a8fc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a8fc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a934; }
    c->r[0] = 0x160e264u;
    { uint32_t ea = 0x42a924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a934u; rt_dispatch(c);
L_42a934:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a93c:;
    { uint32_t ea = c->r[4] + 0x4e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42a9c8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a954u; f_3e7de0(c);
    c->r[14] = 0x42a958u; f_bfbf4c(c);
    c->r[1] = 0x161092cu;
    { uint32_t ea = 0x42a964u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42a97cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42a9c8; }
L_42a988:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42a988; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42a9c0; }
    c->r[0] = 0x160e1d8u;
    { uint32_t ea = 0x42a9b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42a9c0u; rt_dispatch(c);
L_42a9c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42a9c8:;
    { uint32_t ea = c->r[4] + 0x4e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42aa54; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42a9e0u; f_3e7ee8(c);
    c->r[14] = 0x42a9e4u; f_bfbf4c(c);
    c->r[1] = 0x16108b0u;
    { uint32_t ea = 0x42a9f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42aa08u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42aa54; }
L_42aa14:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42aa14; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42aa4c; }
    c->r[0] = 0x160e14cu;
    { uint32_t ea = 0x42aa3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42aa4cu; rt_dispatch(c);
L_42aa4c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42aa54:;
    { uint32_t ea = c->r[4] + 0x4e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42aae0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42aa6cu; f_3e7ffc(c);
    c->r[14] = 0x42aa70u; f_bfbf4c(c);
    c->r[1] = 0x1610834u;
    { uint32_t ea = 0x42aa7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42aa94u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42aae0; }
L_42aaa0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42aaa0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42aad8; }
    c->r[0] = 0x160e0c0u;
    { uint32_t ea = 0x42aac8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42aad8u; rt_dispatch(c);
L_42aad8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42aae0:;
    { uint32_t ea = c->r[4] + 0x4ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42ab6c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42aaf8u; f_3e8108(c);
    c->r[14] = 0x42aafcu; f_bfbf4c(c);
    c->r[1] = 0x16107b8u;
    { uint32_t ea = 0x42ab08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42ab20u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42ab6c; }
L_42ab2c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42ab2c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42ab64; }
    c->r[0] = 0x160e034u;
    { uint32_t ea = 0x42ab54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42ab64u; rt_dispatch(c);
L_42ab64:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42ab6c:;
    { uint32_t ea = c->r[4] + 0x4f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42abf8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42ab84u; f_3e82ac(c);
    c->r[14] = 0x42ab88u; f_bfbf4c(c);
    c->r[1] = 0x161073cu;
    { uint32_t ea = 0x42ab94u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42abacu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42abf8; }
L_42abb8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42abb8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42abf0; }
    c->r[0] = 0x160dfa8u;
    { uint32_t ea = 0x42abe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42abf0u; rt_dispatch(c);
L_42abf0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42abf8:;
    { uint32_t ea = c->r[4] + 0x4f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42ac84; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42ac10u; f_3e83e0(c);
    c->r[14] = 0x42ac14u; f_bfbf4c(c);
    c->r[1] = 0x16106c0u;
    { uint32_t ea = 0x42ac20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42ac38u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42ac84; }
L_42ac44:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42ac44; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42ac7c; }
    c->r[0] = 0x160df1cu;
    { uint32_t ea = 0x42ac6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42ac7cu; rt_dispatch(c);
L_42ac7c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42ac84:;
    { uint32_t ea = c->r[4] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42ad10; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42ac9cu; f_3e853c(c);
    c->r[14] = 0x42aca0u; f_bfbf4c(c);
    c->r[1] = 0x1610644u;
    { uint32_t ea = 0x42acacu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42acc4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42ad10; }
L_42acd0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42acd0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42ad08; }
    c->r[0] = 0x160de90u;
    { uint32_t ea = 0x42acf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42ad08u; rt_dispatch(c);
L_42ad08:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42ad10:;
    { uint32_t ea = c->r[4] + 0x4fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42ad9c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42ad28u; f_3e8674(c);
    c->r[14] = 0x42ad2cu; f_bfbf4c(c);
    c->r[1] = 0x16105c8u;
    { uint32_t ea = 0x42ad38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42ad50u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42ad9c; }
L_42ad5c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42ad5c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42ad94; }
    c->r[0] = 0x160de04u;
    { uint32_t ea = 0x42ad84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42ad94u; rt_dispatch(c);
L_42ad94:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42ad9c:;
    { uint32_t ea = c->r[4] + 0x500u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42ae28; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42adb4u; f_3e879c(c);
    c->r[14] = 0x42adb8u; f_bfbf4c(c);
    c->r[1] = 0x161054cu;
    { uint32_t ea = 0x42adc4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x500u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42addcu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42ae28; }
L_42ade8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42ade8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42ae20; }
    c->r[0] = 0x160dd78u;
    { uint32_t ea = 0x42ae10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42ae20u; rt_dispatch(c);
L_42ae20:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42ae28:;
    { uint32_t ea = c->r[4] + 0x504u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42aeb4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42ae40u; f_3e88b0(c);
    c->r[14] = 0x42ae44u; f_bfbf4c(c);
    c->r[1] = 0x16104d0u;
    { uint32_t ea = 0x42ae50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x504u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42ae68u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42aeb4; }
L_42ae74:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42ae74; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42aeac; }
    c->r[0] = 0x160dcecu;
    { uint32_t ea = 0x42ae9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42aeacu; rt_dispatch(c);
L_42aeac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42aeb4:;
    { uint32_t ea = c->r[4] + 0x508u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42af40; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42aeccu; f_3e89c4(c);
    c->r[14] = 0x42aed0u; f_bfbf4c(c);
    c->r[1] = 0x1610454u;
    { uint32_t ea = 0x42aedcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x508u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42aef4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42af40; }
L_42af00:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42af00; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42af38; }
    c->r[0] = 0x160dc60u;
    { uint32_t ea = 0x42af28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42af38u; rt_dispatch(c);
L_42af38:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42af40:;
    { uint32_t ea = c->r[4] + 0x50cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42afcc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42af58u; f_3e8ad4(c);
    c->r[14] = 0x42af5cu; f_bfbf4c(c);
    c->r[1] = 0x16103d8u;
    { uint32_t ea = 0x42af68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x50cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42af80u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42afcc; }
L_42af8c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42af8c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42afc4; }
    c->r[0] = 0x160dbd4u;
    { uint32_t ea = 0x42afb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42afc4u; rt_dispatch(c);
L_42afc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42afcc:;
    { uint32_t ea = c->r[4] + 0x510u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b058; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42afe4u; f_3e8be8(c);
    c->r[14] = 0x42afe8u; f_bfbf4c(c);
    c->r[1] = 0x161035cu;
    { uint32_t ea = 0x42aff4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x510u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b00cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b058; }
L_42b018:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b018; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b050; }
    c->r[0] = 0x160db48u;
    { uint32_t ea = 0x42b040u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b050u; rt_dispatch(c);
L_42b050:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b058:;
    { uint32_t ea = c->r[4] + 0x514u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b0e4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b070u; f_3e8cd4(c);
    c->r[14] = 0x42b074u; f_bfbf4c(c);
    c->r[1] = 0x16102e0u;
    { uint32_t ea = 0x42b080u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x514u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b098u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b0e4; }
L_42b0a4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b0a4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b0dc; }
    c->r[0] = 0x160dabcu;
    { uint32_t ea = 0x42b0ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b0dcu; rt_dispatch(c);
L_42b0dc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b0e4:;
    { uint32_t ea = c->r[4] + 0x518u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b170; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b0fcu; f_3f6c28(c);
    c->r[14] = 0x42b100u; f_bfbf4c(c);
    c->r[1] = 0x16102f8u;
    { uint32_t ea = 0x42b10cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x518u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b124u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b170; }
L_42b130:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b130; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b168; }
    c->r[0] = 0x160da30u;
    { uint32_t ea = 0x42b158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b168u; rt_dispatch(c);
L_42b168:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b170:;
    { uint32_t ea = c->r[4] + 0x51cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b1fc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b188u; f_3f6d10(c);
    c->r[14] = 0x42b18cu; f_bfbf4c(c);
    c->r[1] = 0x161027cu;
    { uint32_t ea = 0x42b198u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x51cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b1b0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b1fc; }
L_42b1bc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b1bc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b1f4; }
    c->r[0] = 0x160d9a4u;
    { uint32_t ea = 0x42b1e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b1f4u; rt_dispatch(c);
L_42b1f4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b1fc:;
    { uint32_t ea = c->r[4] + 0x520u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b288; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b214u; f_3f6df4(c);
    c->r[14] = 0x42b218u; f_bfbf4c(c);
    c->r[1] = 0x1610200u;
    { uint32_t ea = 0x42b224u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x520u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b23cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b288; }
L_42b248:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b248; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b280; }
    c->r[0] = 0x160d918u;
    { uint32_t ea = 0x42b270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b280u; rt_dispatch(c);
L_42b280:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b288:;
    { uint32_t ea = c->r[4] + 0x524u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b314; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b2a0u; f_3f6eec(c);
    c->r[14] = 0x42b2a4u; f_bfbf4c(c);
    c->r[1] = 0x1610184u;
    { uint32_t ea = 0x42b2b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x524u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b2c8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b314; }
L_42b2d4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b2d4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b30c; }
    c->r[0] = 0x160d88cu;
    { uint32_t ea = 0x42b2fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b30cu; rt_dispatch(c);
L_42b30c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b314:;
    { uint32_t ea = c->r[4] + 0x528u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b3a0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b32cu; f_3f6fcc(c);
    c->r[14] = 0x42b330u; f_bfbf4c(c);
    c->r[1] = 0x1610108u;
    { uint32_t ea = 0x42b33cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x528u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b354u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b3a0; }
L_42b360:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b360; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b398; }
    c->r[0] = 0x160d800u;
    { uint32_t ea = 0x42b388u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b398u; rt_dispatch(c);
L_42b398:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b3a0:;
    { uint32_t ea = c->r[4] + 0x52cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b42c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b3b8u; f_3f70b0(c);
    c->r[14] = 0x42b3bcu; f_bfbf4c(c);
    c->r[1] = 0x161008cu;
    { uint32_t ea = 0x42b3c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x52cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b3e0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b42c; }
L_42b3ec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b3ec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b424; }
    c->r[0] = 0x160d774u;
    { uint32_t ea = 0x42b414u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b424u; rt_dispatch(c);
L_42b424:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b42c:;
    { uint32_t ea = c->r[4] + 0x530u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b4b8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b444u; f_413cf4(c);
    c->r[14] = 0x42b448u; f_bfbf4c(c);
    c->r[1] = 0x1610610u;
    { uint32_t ea = 0x42b454u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x530u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b46cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b4b8; }
L_42b478:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b478; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b4b0; }
    c->r[0] = 0x160d6e8u;
    { uint32_t ea = 0x42b4a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b4b0u; rt_dispatch(c);
L_42b4b0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b4b8:;
    { uint32_t ea = c->r[4] + 0x534u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b544; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b4d0u; f_413de4(c);
    c->r[14] = 0x42b4d4u; f_bfbf4c(c);
    c->r[1] = 0x1610594u;
    { uint32_t ea = 0x42b4e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x534u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b4f8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b544; }
L_42b504:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b504; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b53c; }
    c->r[0] = 0x160d65cu;
    { uint32_t ea = 0x42b52cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b53cu; rt_dispatch(c);
L_42b53c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b544:;
    { uint32_t ea = c->r[4] + 0x538u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b5d0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b55cu; f_413ec4(c);
    c->r[14] = 0x42b560u; f_bfbf4c(c);
    c->r[1] = 0x1610518u;
    { uint32_t ea = 0x42b56cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x538u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b584u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b5d0; }
L_42b590:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b590; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b5c8; }
    c->r[0] = 0x160d5d0u;
    { uint32_t ea = 0x42b5b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b5c8u; rt_dispatch(c);
L_42b5c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b5d0:;
    { uint32_t ea = c->r[4] + 0x53cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b65c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b5e8u; f_413fb4(c);
    c->r[14] = 0x42b5ecu; f_bfbf4c(c);
    c->r[1] = 0x161049cu;
    { uint32_t ea = 0x42b5f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x53cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b610u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b65c; }
L_42b61c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b61c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b654; }
    c->r[0] = 0x160d544u;
    { uint32_t ea = 0x42b644u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b654u; rt_dispatch(c);
L_42b654:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b65c:;
    { uint32_t ea = c->r[4] + 0x540u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b6e8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b674u; f_414094(c);
    c->r[14] = 0x42b678u; f_bfbf4c(c);
    c->r[1] = 0x1610420u;
    { uint32_t ea = 0x42b684u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x540u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b69cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b6e8; }
L_42b6a8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b6a8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b6e0; }
    c->r[0] = 0x160d4b8u;
    { uint32_t ea = 0x42b6d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b6e0u; rt_dispatch(c);
L_42b6e0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b6e8:;
    { uint32_t ea = c->r[4] + 0x544u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b774; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b700u; f_414178(c);
    c->r[14] = 0x42b704u; f_bfbf4c(c);
    c->r[1] = 0x16103a4u;
    { uint32_t ea = 0x42b710u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x544u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b728u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b774; }
L_42b734:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b734; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b76c; }
    c->r[0] = 0x160d42cu;
    { uint32_t ea = 0x42b75cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b76cu; rt_dispatch(c);
L_42b76c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b774:;
    { uint32_t ea = c->r[4] + 0x548u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b800; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b78cu; f_41425c(c);
    c->r[14] = 0x42b790u; f_bfbf4c(c);
    c->r[1] = 0x1610328u;
    { uint32_t ea = 0x42b79cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x548u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b7b4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b800; }
L_42b7c0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b7c0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b7f8; }
    c->r[0] = 0x160d3a0u;
    { uint32_t ea = 0x42b7e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b7f8u; rt_dispatch(c);
L_42b7f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b800:;
    { uint32_t ea = c->r[4] + 0x54cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b88c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b818u; f_414344(c);
    c->r[14] = 0x42b81cu; f_bfbf4c(c);
    c->r[1] = 0x16102acu;
    { uint32_t ea = 0x42b828u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b840u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b88c; }
L_42b84c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b84c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b884; }
    c->r[0] = 0x160d314u;
    { uint32_t ea = 0x42b874u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b884u; rt_dispatch(c);
L_42b884:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b88c:;
    { uint32_t ea = c->r[4] + 0x550u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b918; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b8a4u; f_414424(c);
    c->r[14] = 0x42b8a8u; f_bfbf4c(c);
    c->r[1] = 0x1610230u;
    { uint32_t ea = 0x42b8b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x550u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b8ccu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b918; }
L_42b8d8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b8d8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b910; }
    c->r[0] = 0x160d288u;
    { uint32_t ea = 0x42b900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b910u; rt_dispatch(c);
L_42b910:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b918:;
    { uint32_t ea = c->r[4] + 0x554u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42b9a4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b930u; f_414504(c);
    c->r[14] = 0x42b934u; f_bfbf4c(c);
    c->r[1] = 0x16101b4u;
    { uint32_t ea = 0x42b940u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x554u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b958u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42b9a4; }
L_42b964:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b964; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42b99c; }
    c->r[0] = 0x160d1fcu;
    { uint32_t ea = 0x42b98cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42b99cu; rt_dispatch(c);
L_42b99c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42b9a4:;
    { uint32_t ea = c->r[4] + 0x558u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42ba30; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42b9bcu; f_4145e4(c);
    c->r[14] = 0x42b9c0u; f_bfbf4c(c);
    c->r[1] = 0x1610138u;
    { uint32_t ea = 0x42b9ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x558u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42b9e4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42ba30; }
L_42b9f0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42b9f0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42ba28; }
    c->r[0] = 0x160d170u;
    { uint32_t ea = 0x42ba18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42ba28u; rt_dispatch(c);
L_42ba28:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42ba30:;
    { uint32_t ea = c->r[4] + 0x55cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42babc; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42ba48u; f_4146d8(c);
    c->r[14] = 0x42ba4cu; f_bfbf4c(c);
    c->r[1] = 0x16100bcu;
    { uint32_t ea = 0x42ba58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x55cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42ba70u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42babc; }
L_42ba7c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42ba7c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bab4; }
    c->r[0] = 0x160d0e4u;
    { uint32_t ea = 0x42baa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bab4u; rt_dispatch(c);
L_42bab4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42babc:;
    { uint32_t ea = c->r[4] + 0x560u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bb48; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bad4u; f_4147b8(c);
    c->r[14] = 0x42bad8u; f_bfbf4c(c);
    c->r[1] = 0x1610040u;
    { uint32_t ea = 0x42bae4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x560u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bafcu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bb48; }
L_42bb08:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bb08; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bb40; }
    c->r[0] = 0x160d058u;
    { uint32_t ea = 0x42bb30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bb40u; rt_dispatch(c);
L_42bb40:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bb48:;
    { uint32_t ea = c->r[4] + 0x564u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bbd4; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bb60u; f_414898(c);
    c->r[14] = 0x42bb64u; f_bfbf4c(c);
    c->r[1] = 0x160ffc4u;
    { uint32_t ea = 0x42bb70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x564u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bb88u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bbd4; }
L_42bb94:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bb94; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bbcc; }
    c->r[0] = 0x160cfccu;
    { uint32_t ea = 0x42bbbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bbccu; rt_dispatch(c);
L_42bbcc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bbd4:;
    { uint32_t ea = c->r[4] + 0x568u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bc60; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bbecu; f_41497c(c);
    c->r[14] = 0x42bbf0u; f_bfbf4c(c);
    c->r[1] = 0x160ff48u;
    { uint32_t ea = 0x42bbfcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x568u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bc14u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bc60; }
L_42bc20:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bc20; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bc58; }
    c->r[0] = 0x160cf40u;
    { uint32_t ea = 0x42bc48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bc58u; rt_dispatch(c);
L_42bc58:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bc60:;
    { uint32_t ea = c->r[4] + 0x56cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bcec; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bc78u; f_414a7c(c);
    c->r[14] = 0x42bc7cu; f_bfbf4c(c);
    c->r[1] = 0x160feccu;
    { uint32_t ea = 0x42bc88u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x56cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bca0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bcec; }
L_42bcac:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bcac; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bce4; }
    c->r[0] = 0x160ceb4u;
    { uint32_t ea = 0x42bcd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bce4u; rt_dispatch(c);
L_42bce4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bcec:;
    { uint32_t ea = c->r[4] + 0x570u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bd78; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bd04u; f_414b60(c);
    c->r[14] = 0x42bd08u; f_bfbf4c(c);
    c->r[1] = 0x160fe50u;
    { uint32_t ea = 0x42bd14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x570u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bd2cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bd78; }
L_42bd38:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bd38; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bd70; }
    c->r[0] = 0x160ce28u;
    { uint32_t ea = 0x42bd60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bd70u; rt_dispatch(c);
L_42bd70:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bd78:;
    { uint32_t ea = c->r[4] + 0x574u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42be04; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bd90u; f_414c44(c);
    c->r[14] = 0x42bd94u; f_bfbf4c(c);
    c->r[1] = 0x160fdd4u;
    { uint32_t ea = 0x42bda0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x574u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bdb8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42be04; }
L_42bdc4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bdc4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bdfc; }
    c->r[0] = 0x160cd9cu;
    { uint32_t ea = 0x42bdecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bdfcu; rt_dispatch(c);
L_42bdfc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42be04:;
    { uint32_t ea = c->r[4] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42be90; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42be1cu; f_414d2c(c);
    c->r[14] = 0x42be20u; f_bfbf4c(c);
    c->r[1] = 0x160fd58u;
    { uint32_t ea = 0x42be2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x578u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42be44u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42be90; }
L_42be50:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42be50; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42be88; }
    c->r[0] = 0x160cd10u;
    { uint32_t ea = 0x42be78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42be88u; rt_dispatch(c);
L_42be88:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42be90:;
    { uint32_t ea = c->r[4] + 0x57cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bf1c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bea8u; f_41b150(c);
    c->r[14] = 0x42beacu; f_bfbf4c(c);
    c->r[1] = 0x160fd74u;
    { uint32_t ea = 0x42beb8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x57cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bed0u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bf1c; }
L_42bedc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bedc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bf14; }
    c->r[0] = 0x160cc84u;
    { uint32_t ea = 0x42bf04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bf14u; rt_dispatch(c);
L_42bf14:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bf1c:;
    { uint32_t ea = c->r[4] + 0x580u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42bfa8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bf34u; f_41b234(c);
    c->r[14] = 0x42bf38u; f_bfbf4c(c);
    c->r[1] = 0x160fcf8u;
    { uint32_t ea = 0x42bf44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x580u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bf5cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42bfa8; }
L_42bf68:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bf68; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42bfa0; }
    c->r[0] = 0x160cbf8u;
    { uint32_t ea = 0x42bf90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42bfa0u; rt_dispatch(c);
L_42bfa0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42bfa8:;
    { uint32_t ea = c->r[4] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c034; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42bfc0u; f_41b310(c);
    c->r[14] = 0x42bfc4u; f_bfbf4c(c);
    c->r[1] = 0x160fc7cu;
    { uint32_t ea = 0x42bfd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x584u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42bfe8u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c034; }
L_42bff4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42bff4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c02c; }
    c->r[0] = 0x160cb6cu;
    { uint32_t ea = 0x42c01cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c02cu; rt_dispatch(c);
L_42c02c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c034:;
    { uint32_t ea = c->r[4] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c0c0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c04cu; f_41b3ec(c);
    c->r[14] = 0x42c050u; f_bfbf4c(c);
    c->r[1] = 0x160fc00u;
    { uint32_t ea = 0x42c05cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x588u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c074u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c0c0; }
L_42c080:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c080; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c0b8; }
    c->r[0] = 0x160cae0u;
    { uint32_t ea = 0x42c0a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c0b8u; rt_dispatch(c);
L_42c0b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c0c0:;
    { uint32_t ea = c->r[4] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c14c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c0d8u; f_41d6a8(c);
    c->r[14] = 0x42c0dcu; f_bfbf4c(c);
    c->r[1] = 0x160fbbcu;
    { uint32_t ea = 0x42c0e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x58cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c100u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c14c; }
L_42c10c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c10c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c144; }
    c->r[0] = 0x160ca54u;
    { uint32_t ea = 0x42c134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c144u; rt_dispatch(c);
L_42c144:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c14c:;
    { uint32_t ea = c->r[4] + 0x590u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c1d8; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c164u; f_41d798(c);
    c->r[14] = 0x42c168u; f_bfbf4c(c);
    c->r[1] = 0x160fb40u;
    { uint32_t ea = 0x42c174u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x590u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c18cu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c1d8; }
L_42c198:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c198; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c1d0; }
    c->r[0] = 0x160c9c8u;
    { uint32_t ea = 0x42c1c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c1d0u; rt_dispatch(c);
L_42c1d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c1d8:;
    { uint32_t ea = c->r[4] + 0x594u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c264; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c1f0u; f_41d888(c);
    c->r[14] = 0x42c1f4u; f_bfbf4c(c);
    c->r[1] = 0x160fac4u;
    { uint32_t ea = 0x42c200u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x594u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c218u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c264; }
L_42c224:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c224; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c25c; }
    c->r[0] = 0x160c93cu;
    { uint32_t ea = 0x42c24cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c25cu; rt_dispatch(c);
L_42c25c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c264:;
    { uint32_t ea = c->r[4] + 0x598u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c2f0; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c27cu; f_41d98c(c);
    c->r[14] = 0x42c280u; f_bfbf4c(c);
    c->r[1] = 0x160fa48u;
    { uint32_t ea = 0x42c28cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x598u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c2a4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c2f0; }
L_42c2b0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c2b0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c2e8; }
    c->r[0] = 0x160c8b0u;
    { uint32_t ea = 0x42c2d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c2e8u; rt_dispatch(c);
L_42c2e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c2f0:;
    { uint32_t ea = c->r[4] + 0x59cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c37c; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c308u; f_41da7c(c);
    c->r[14] = 0x42c30cu; f_bfbf4c(c);
    c->r[1] = 0x160f9ccu;
    { uint32_t ea = 0x42c318u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x59cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c330u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c37c; }
L_42c33c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c33c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c374; }
    c->r[0] = 0x160c824u;
    { uint32_t ea = 0x42c364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c374u; rt_dispatch(c);
L_42c374:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c37c:;
    { uint32_t ea = c->r[4] + 0x5a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c408; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c394u; f_41cfec(c);
    c->r[14] = 0x42c398u; f_bfbf4c(c);
    c->r[1] = 0x160f8e8u;
    { uint32_t ea = 0x42c3a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c3bcu; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c408; }
L_42c3c8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c3c8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c400; }
    c->r[0] = 0x160c798u;
    { uint32_t ea = 0x42c3f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c400u; rt_dispatch(c);
L_42c400:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c408:;
    { uint32_t ea = c->r[4] + 0x5a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c494; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c420u; f_41db6c(c);
    c->r[14] = 0x42c424u; f_bfbf4c(c);
    c->r[1] = 0x160f8c4u;
    { uint32_t ea = 0x42c430u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c448u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c494; }
L_42c454:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c454; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c48c; }
    c->r[0] = 0x160c70cu;
    { uint32_t ea = 0x42c47cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c48cu; rt_dispatch(c);
L_42c48c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c494:;
    { uint32_t ea = c->r[4] + 0x5a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_42c520; }
    c->r[0] = 0x4cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x42c4acu; f_41dc48(c);
    c->r[14] = 0x42c4b0u; f_bfbf4c(c);
    c->r[1] = 0x160f848u;
    { uint32_t ea = 0x42c4bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x42c4d4u; f_bfc1b0(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_42c520; }
L_42c4e0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_42c4e0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_42c518; }
    c->r[0] = 0x160c680u;
    { uint32_t ea = 0x42c508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[2]; c->r[14] = 0x42c518u; rt_dispatch(c);
L_42c518:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_42c520:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
