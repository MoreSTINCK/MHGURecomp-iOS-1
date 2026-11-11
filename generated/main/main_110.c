#include "cpu.h"
#include "neon_rt.h"
void f_212710(Cpu *c);
void f_22cd34(Cpu *c);
void f_236fc4(Cpu *c);
void f_23b714(Cpu *c);
void f_2daba4(Cpu *c);
void f_2dac14(Cpu *c);
void f_2dad24(Cpu *c);
void f_2e100c(Cpu *c);
void f_3421b4(Cpu *c);
void f_42d644(Cpu *c);
void f_45ffa0(Cpu *c);
void f_46e354(Cpu *c);
void f_46e50c(Cpu *c);
void f_46e600(Cpu *c);
void f_46e964(Cpu *c);
void f_46eaa8(Cpu *c);
void f_46f3e0(Cpu *c);
void f_46f4dc(Cpu *c);
void f_46f728(Cpu *c);
void f_46f958(Cpu *c);
void f_474380(Cpu *c);
void f_474488(Cpu *c);
void f_475a30(Cpu *c);
void f_476790(Cpu *c);
void f_477454(Cpu *c);
void f_5df640(Cpu *c);
void f_5df760(Cpu *c);
void f_5df924(Cpu *c);
void f_5df97c(Cpu *c);
void f_5e0a58(Cpu *c);
void f_5e0ab8(Cpu *c);
void f_5e0b48(Cpu *c);
void f_5e0d10(Cpu *c);
void f_5e1208(Cpu *c);
void f_5e6434(Cpu *c);
void f_5e7d10(Cpu *c);
void f_5e7f38(Cpu *c);
void f_5f8534(Cpu *c);
void f_5f856c(Cpu *c);
void f_5f85fc(Cpu *c);
void f_6abd14(Cpu *c);
void f_6ac3bc(Cpu *c);
void f_6ad0e8(Cpu *c);
void f_6af894(Cpu *c);
void f_6af8a0(Cpu *c);
void f_6aff78(Cpu *c);
void f_6df23c(Cpu *c);
void f_6df270(Cpu *c);
void f_6e0ebc(Cpu *c);
void f_6e0ec8(Cpu *c);
void f_6e8b54(Cpu *c);
void f_722a94(Cpu *c);
void f_724018(Cpu *c);
void f_7279cc(Cpu *c);
void f_74edec(Cpu *c);
void f_74ee98(Cpu *c);
void f_74f260(Cpu *c);
void f_74fbb0(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75bd0c(Cpu *c);
void f_75c5f4(Cpu *c);
void f_7605f8(Cpu *c);
void f_827aac(Cpu *c);
void f_85c9d4(Cpu *c);
void f_85cb3c(Cpu *c);
void f_85cb48(Cpu *c);
void f_85cb74(Cpu *c);
void f_85cba0(Cpu *c);
void f_85d424(Cpu *c);
void f_85e5bc(Cpu *c);
void f_85e67c(Cpu *c);
void f_85e794(Cpu *c);
void f_85f118(Cpu *c);
void f_85f190(Cpu *c);
void f_85f270(Cpu *c);
void f_85f32c(Cpu *c);
void f_87b3a4(Cpu *c);
void f_880f28(Cpu *c);
void f_881a78(Cpu *c);
void f_881f50(Cpu *c);
void f_884588(Cpu *c);
void f_8877e4(Cpu *c);
void f_888b70(Cpu *c);
void f_888d54(Cpu *c);
void f_888fa0(Cpu *c);
void f_8890cc(Cpu *c);
void f_88916c(Cpu *c);
void f_889910(Cpu *c);
void f_889c78(Cpu *c);
void f_889e5c(Cpu *c);
void f_88a58c(Cpu *c);
void f_88a6bc(Cpu *c);
void f_88a7b8(Cpu *c);
void f_88a9f0(Cpu *c);
void f_88aaac(Cpu *c);
void f_88b104(Cpu *c);
void f_88b5c4(Cpu *c);
void f_88ccc4(Cpu *c);
void f_88d988(Cpu *c);
void f_88dff8(Cpu *c);
void f_88e61c(Cpu *c);
void f_88f154(Cpu *c);
void f_88f5a0(Cpu *c);
void f_88fdb0(Cpu *c);
void f_890d64(Cpu *c);
void f_8917e8(Cpu *c);
void f_892940(Cpu *c);
void f_8b810c(Cpu *c);
void f_8b8828(Cpu *c);
void f_8ba920(Cpu *c);
void f_8bad84(Cpu *c);
void f_8bb218(Cpu *c);
void f_8bb804(Cpu *c);
void f_9c8e2c(Cpu *c);
void f_a24868(Cpu *c);
void f_a87660(Cpu *c);
void f_b50bcc(Cpu *c);
void f_b58d94(Cpu *c);
void f_b58dd4(Cpu *c);
void f_b59e74(Cpu *c);
void f_b5a15c(Cpu *c);
void f_b5a214(Cpu *c);
void f_b5ae00(Cpu *c);
void f_b5ae90(Cpu *c);
void f_b5af4c(Cpu *c);
void f_b5af54(Cpu *c);
void f_da7d68(Cpu *c);
void f_da8174(Cpu *c);
void f_da82a4(Cpu *c);
void f_da86c0(Cpu *c);
void f_dad28c(Cpu *c);
void f_e067ec(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efe3c(Cpu *c);
void f_87e130(Cpu *restrict c) {
    FN_ENTER(0x87e130u);
L_87e130:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[8] = c->r[0];
    c->r[0] = 0x11bb27cu;
    { uint32_t ea = 0x87e148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e14cu; f_da86c0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e1a8; }
    c->r[0] = 0x11bb264u;
    { uint32_t ea = 0x87e160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e164u; f_da7d68(c);
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_87e1cc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x87e178u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x87e19cu: goto L_87e19c; case 0x87e1ccu: goto L_87e1cc; case 0x87e1f4u: goto L_87e1f4; case 0x87e654u: goto L_87e654; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87e19c:;
    c->r[0] = 0xb744u;
    c->r[1] = 0x0u;
    goto L_87e1c0;
L_87e1a8:;
    c->r[0] = 0xb758u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0xb754u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xb744u;
L_87e1c0:;
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_87e1cc:;
    c->r[0] = 0xb744u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x11bb1dcu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x87e1e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_da82a4(c);
L_87e1f4:;
    c->r[0] = 0xb744u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x11bb1b8u;
    { uint32_t ea = 0x87e20cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e210u; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e22c; }
    c->r[0] = 0x11bb19cu;
    { uint32_t ea = 0x87e228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e22cu; f_da86c0(c);
L_87e22c:;
    c->r[0] = 0x11bb18cu;
    { uint32_t ea = 0x87e238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e23cu; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e55c; }
    c->r[0] = 0xb740u;
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[2] = 0xed2b0eu; }
    if (COND_NE) { c->r[1] = c->r[0] + 0x8u; }
    if (COND_NE) { c->r[2] = 0x87e268u + c->r[2]; }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[2]); }
    if (COND_EQ) { goto L_87e2ac; }
L_87e26c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_87e26c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_87e2a4; }
    c->r[0] = 0x11ba8f0u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x87e298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x87e2a4u; rt_dispatch(c);
L_87e2a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_87e2ac:;
    c->r[0] = 0x533cu;
    c->r[9] = c->r[8];
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_87e54c; }
    c->r[0] = 0x11ba8b4u;
    c->r[10] = 0x1u;
    c->r[11] = 0x0u;
    { uint32_t ea = 0x87e2d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba8a8u;
    { uint32_t ea = 0x87e2e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba89cu;
    { uint32_t ea = 0x87e2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba890u;
    { uint32_t ea = 0x87e2f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba884u;
    { uint32_t ea = 0x87e304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba878u;
    { uint32_t ea = 0x87e310u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
L_87e310:;
    c->r[0] = 0x190u;
    c->r[1] = 0x5344u;
    { uint32_t r = c->r[11] * c->r[0] + c->r[8]; c->r[0] = r; }
    c->r[7] = c->r[0] + c->r[1];
    c->r[0] = c->r[7];
    c->r[14] = 0x87e328u; f_15efd88(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_87e428; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x87e350u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[1] = c->r[7];
    c->r[0] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x87e368u; f_15efd94(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_87e428; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_87e3dc; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x87e388u; f_9c8e2c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e3d4; }
L_87e398:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_87e398; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_87e3cc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x87e3ccu; rt_dispatch(c);
L_87e3cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_87e3d4:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    goto L_87e3f4;
L_87e3dc:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
L_87e3e0:;
    c->r[0] = ldrex32(c, c->r[6]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[6], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_87e3e0; }
L_87e3f4:;
    c->r[0] = ldrex32(c, c->r[6]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[6], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_87e3f4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87e428; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x87e428u; rt_dispatch(c);
L_87e428:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xdu;
    c->pc = c->r[3]; c->r[14] = 0x87e444u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0xau;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[0]); }
    if (COND_EQ) { goto L_87e520; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_87e4d4; }
    c->r[0] = c->r[5];
    c->r[2] = c->r[6];
    c->r[14] = 0x87e480u; f_9c8e2c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e4cc; }
L_87e490:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_87e490; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_87e4c4; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x87e4c4u; rt_dispatch(c);
L_87e4c4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_87e4cc:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    goto L_87e4ec;
L_87e4d4:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[6]); }
L_87e4d8:;
    c->r[0] = ldrex32(c, c->r[6]);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = strex32(c, c->r[6], c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_87e4d8; }
L_87e4ec:;
    c->r[0] = ldrex32(c, c->r[6]);
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = strex32(c, c->r[6], c->r[1]);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_87e4ec; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87e520; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x87e520u; rt_dispatch(c);
L_87e520:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[11], c->r[0]);
    if (COND_LT) { goto L_87e310; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_87e54c; }
    c->r[0] = 0x51a8u;
    c->r[1] = 0x5340u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[1] = c->r[8] + c->r[1];
    c->r[14] = 0x87e54cu; f_a24868(c);
L_87e54c:;
    c->r[0] = 0x11bae6cu;
    { uint32_t ea = 0x87e558u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e55cu; f_da86c0(c);
L_87e55c:;
    c->r[0] = 0x11bae5cu;
    { uint32_t ea = 0x87e568u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e56cu; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e590; }
    c->r[0] = 0x11bae40u;
    { uint32_t ea = 0x87e584u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e588u; f_da86c0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e590u; f_da86c0(c);
L_87e590:;
    c->r[0] = 0x11bae28u;
    { uint32_t ea = 0x87e59cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e5a0u; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e5bc; }
    c->r[0] = 0x11bae0cu;
    { uint32_t ea = 0x87e5b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e5bcu; f_da86c0(c);
L_87e5bc:;
    c->r[0] = 0x11badfcu;
    { uint32_t ea = 0x87e5c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e5ccu; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87e5e8; }
    c->r[0] = 0x11bade0u;
    { uint32_t ea = 0x87e5e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e5e8u; f_da86c0(c);
L_87e5e8:;
    c->r[0] = 0x11badd0u;
    { uint32_t ea = 0x87e5f4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e5f8u; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xb754u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e60cu; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xb755u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e620u; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xb756u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e634u; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xb757u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e648u; f_da86c0(c);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0xb758u;
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[0]); }
L_87e654:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_87e6b4(Cpu *restrict c) {
    FN_ENTER(0x87e6b4u);
L_87e6b4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[0];
    c->r[9] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (c->r[0] >> 16) & 0xffu;
    (void)f_subs(c, c->r[4], 0x14u);
    if (COND_EQ) { c->r[9] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_87ec44; }
    c->r[2] = 0x11bac24u;
    c->r[3] = 0x6bfcu;
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = 0x87e6f8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = 0x87e704u + 0xcu;
    c->r[2] = 0x2000u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1000000u;
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x87e734u: goto L_87e734; case 0x87e748u: goto L_87e748; case 0x87e76cu: goto L_87e76c; case 0x87e778u: goto L_87e778; case 0x87e7f8u: goto L_87e7f8; case 0x87e85cu: goto L_87e85c; case 0x87e8a4u: goto L_87e8a4; case 0x87e95cu: goto L_87e95c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87e734:;
    { uint32_t r = c->r[6] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87ec44; }
    c->r[14] = 0x87e740u; f_85f118(c);
    c->r[8] = 0x1u;
    goto L_87e9bc;
L_87e748:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    (void)f_subs(c, c->r[4], 0x14u);
    if (COND_EQ) { goto L_87e9cc; }
    c->r[0] = c->r[0] | 0x10000u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42700000u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    goto L_87ec44;
L_87e76c:;
    c->r[14] = 0x87e770u; f_85f118(c);
    c->r[8] = 0x1u;
    goto L_87ec44;
L_87e778:;
    (void)f_subs(c, c->r[4], 0x14u);
    if (COND_EQ) { goto L_87ea54; }
    c->r[7] = c->r[5];
    c->r[4] = 0x0u;
    c->r[1] = c->r[6];
    c->r[2] = 0x80u;
    c->r[3] = 0x20u;
    { uint32_t ea = c->r[7] + 0x43u; uint32_t v = LD8(ea); c->r[7] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x87e7a4u; f_74fbb0(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_87eb3c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87eb8c; }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[2] = 0x8fu;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba3f8u;
    { uint32_t ea = 0x87e7dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e7e0u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf18e84u;
    c->r[0] = 0x87e7f8u + c->r[0];
    goto L_87eb7c;
L_87e7f8:;
    c->r[0] = 0x11be3f0u;
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x87e80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x87e814u; f_dad28c(c);
    c->r[1] = 0xb50u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1d1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xcu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87e88c; }
    c->v.s[0] = LD32(c->r[5] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87ec44; }
    c->v.s[2] = 0x44340000u;
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[4], 0x14u);
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[5] + 104u, c->v.s[0]);
    if (COND_NE) { goto L_87ec44; }
    c->r[0] = 0x4u;
    goto L_87ec3c;
L_87e85c:;
    c->r[0] = 0x11be38cu;
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = 0x87e870u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x87e878u; f_dad28c(c);
    c->r[1] = 0xb50u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[7]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1d1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xcu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87eac0; }
L_87e88c:;
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42340000u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    goto L_87ec44;
L_87e8a4:;
    c->v.s[0] = LD32(c->r[5] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87ec44; }
    c->r[1] = 0x7u;
    c->r[7] = 0x0u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba2e0u;
    { uint32_t ea = 0x87e8d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[1]); }
    c->r[0] = 0x11be314u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x87e8e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x87e8f0u; f_dad28c(c);
    c->r[1] = 0xf18d80u;
    c->r[1] = 0x87e8fcu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0xb50u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x1d1u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x11ba2c0u;
    { uint32_t ea = 0x87e914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x1u;
    if (COND_EQ) { c->r[2] = 0x92u; }
    if (COND_NE) { c->r[2] = 0x93u; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e928u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x87e940u; f_85f190(c);
    (void)f_subs(c, c->r[4], 0x14u);
    if (COND_NE) { goto L_87e954; }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87e954u; f_85e794(c);
L_87e954:;
    c->r[8] = 0x0u;
    goto L_87e9bc;
L_87e95c:;
    { uint32_t r = c->r[6] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87ec44; }
    c->r[1] = 0x8u;
    c->r[8] = 0x0u;
    c->r[2] = 0x91u;
    c->r[0] = (c->r[0] & 0xff00ffffu) | ((c->r[1] << 16) & 0xff0000u);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba22cu;
    { uint32_t ea = 0x87e988u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[8]); }
    c->r[0] = 0x11ba23cu;
    { uint32_t ea = 0x87e998u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e99cu; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18cc4u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = 0x87e9b8u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87e9bcu; f_85f190(c);
L_87e9bc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_87e9c4:;
    c->r[14] = 0x87e9c8u; f_74f260(c);
    goto L_87ec44;
L_87e9cc:;
    c->r[0] = c->r[0] | 0x20000u;
    c->r[1] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba1ccu;
    { uint32_t ea = 0x87e9e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[5] + 0x43u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11be1f4u;
    { uint32_t ea = 0x87ea08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x87ea10u; f_dad28c(c);
    c->r[1] = 0xb50u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[6]; c->r[0] = r; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 10) & 0x1u;
    c->r[2] = c->r[0] + 0x8du;
    c->r[0] = 0x11ba19cu;
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0x87ea38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ea3cu; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18c28u;
    { uint32_t ea = c->r[5] + 0x43u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = 0x87ea54u + c->r[0];
    goto L_87ebcc;
L_87ea54:;
    c->r[14] = 0x87ea58u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_87ebe4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87ec44; }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[2] = 0x8fu;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11ba144u;
    { uint32_t ea = 0x87ea90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ea94u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18bc8u;
    c->r[8] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = 0x87eab4u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87eab8u; f_85f190(c);
    c->r[0] = 0x1u;
    goto L_87ec3c;
L_87eac0:;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87ead8; }
    c->v.s[0] = LD32(c->r[5] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87ec44; }
L_87ead8:;
    c->r[0] = 0x6u;
    c->r[1] = 0x1u;
    c->r[2] = 0x90u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11ba0e0u;
    { uint32_t ea = 0x87eaf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87eaf8u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18b64u;
    c->r[8] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = 0x87eb18u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87eb1cu; f_85f190(c);
    (void)f_subs(c, c->r[4], 0x14u);
    if (COND_NE) { goto L_87eb30; }
    c->r[0] = 0x3u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87eb30u; f_85e794(c);
L_87eb30:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_87e9c4;
L_87eb3c:;
    c->r[0] = 0x8u;
    c->r[1] = 0x1u;
    c->r[2] = 0x91u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11ba05cu;
    { uint32_t ea = 0x87eb58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[4]); }
    c->r[0] = 0x11ba06cu;
    { uint32_t ea = 0x87eb68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87eb6cu; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18afcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[0] = 0x87eb80u + c->r[0];
L_87eb7c:;
    { uint32_t ea = c->r[0] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x87eb8cu; f_85f190(c);
L_87eb8c:;
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_EQ) { goto L_87ec44; }
    c->r[0] = 0x11ba024u;
    { uint32_t ea = c->r[5] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87ebb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ebb4u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18aacu;
    { uint32_t ea = c->r[5] + 0x43u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = 0x87ebd0u + c->r[0];
L_87ebcc:;
    c->r[0] = c->r[0] + (c->r[9] << 3);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ebdcu; f_85f190(c);
    goto L_87ec44;
L_87ebe4:;
    c->r[0] = 0x8u;
    c->r[8] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x91u;
    { uint32_t ea = c->r[5] + 0x6u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b9fb0u;
    { uint32_t ea = 0x87ec04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[8]); }
    c->r[0] = 0x11b9fc0u;
    { uint32_t ea = 0x87ec14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ec18u; f_75bc4c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0xf18a48u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[0] = 0x87ec34u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[9] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ec38u; f_85f190(c);
    c->r[0] = 0x3u;
L_87ec3c:;
    c->r[1] = 0x1u;
    c->r[14] = 0x87ec44u; f_85e794(c);
L_87ec44:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_87ecc0(Cpu *restrict c) {
    FN_ENTER(0x87ecc0u);
L_87ecc0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87ed54; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87ed4c; }
    c->r[0] = 0x11b9ec8u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x87ececu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; ST8(ea, c->r[1]); }
    c->r[0] = 0x11ba088u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x87ed00u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ed04u; f_724018(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x87ed14u; f_724018(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[14] = 0x87ed20u; f_724018(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[14] = 0x87ed2cu; f_724018(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[14] = 0x87ed38u; f_724018(c);
    c->r[0] = 0x11ba17cu;
    { uint32_t ea = 0x87ed44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ed48u; f_5df97c(c);
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[5]); }
L_87ed4c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_87ed54:;
    c->r[0] = 0x11ba160u;
    { uint32_t ea = 0x87ed60u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ed64u; f_5e6434(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_87ed84(Cpu *restrict c) {
    FN_ENTER(0x87ed84u);
L_87ed84:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x11b9e1cu;
    { uint32_t ea = 0x87ed98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ed9cu; f_5f85fc(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87edb0; }
L_87eda8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_87edb0:;
    c->r[0] = 0x11ba55cu;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x87edc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x87edd0u; f_85cb3c(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = (c->r[1] >> 8);
    if (COND_EQ) { goto L_87ee34; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[2], 0x8u);
    if (COND_HI) { goto L_87eda8; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x87edf8u + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x87eda8u: goto L_87eda8; case 0x87ee20u: goto L_87ee20; case 0x87ee68u: goto L_87ee68; case 0x87ee98u: goto L_87ee98; case 0x87eebcu: goto L_87eebc; case 0x87ef08u: goto L_87ef08; case 0x87ef2cu: goto L_87ef2c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87ee20:;
    c->r[0] = 0x2u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_87ee34:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { goto L_87ef38; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87eda8; }
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87eda8; }
    c->r[0] = 0x8u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = 0x11b9d4cu;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x87ee68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_87ef88;
L_87ee68:;
    c->r[0] = 0x3u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42700000u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x87ee8cu; f_85cb48(c);
    c->r[0] = 0x11b9d1cu;
    { uint32_t ea = 0x87ee98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_87eee4;
L_87ee98:;
    c->v.s[0] = LD32(c->r[5] + 104u);
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87ef44; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_87ef44; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    goto L_87ef50;
L_87eebc:;
    c->r[2] = 0x7u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[2] << 8) & 0xff00u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x44070000u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[14] = 0x87eedcu; f_8b810c(c);
    c->r[0] = 0x11b9cccu;
    { uint32_t ea = 0x87eee8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_87eee4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x41f00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x87ef00u; f_5f8534(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_87ef08:;
    c->v.s[0] = LD32(c->r[5] + 104u);
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x2000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_87ef68; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_87ef68; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    goto L_87ef74;
L_87ef2c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[14] = 0x87ef38u; f_85cb74(c);
L_87ef38:;
    c->r[4] = 0x1u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_87ef44:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87eda8; }
L_87ef50:;
    c->r[0] = 0x4u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = 0x11b9c4cu;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x87ef68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_87ef88;
L_87ef68:;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87eda8; }
L_87ef74:;
    c->r[0] = 0x8u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = 0x11b9c28u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x87ef8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_87ef88:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x41f00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x87efa4u; f_5f856c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_87efc8(Cpu *restrict c) {
    FN_ENTER(0x87efc8u);
L_87efc8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x11b9bd4u;
    { uint32_t ea = 0x87efe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87efe4u; f_5f85fc(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87effc; }
L_87eff0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_87effc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[1] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_87eff0; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x87f018u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x87f02cu: goto L_87f02c; case 0x87f110u: goto L_87f110; case 0x87f170u: goto L_87f170; case 0x87f1f4u: goto L_87f1f4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87f02c:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f060; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_87f058; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x87f058u; rt_dispatch(c);
L_87f058:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_87f060:;
    c->r[0] = 0xd0u;
    c->r[1] = 0x10u;
    c->r[14] = 0x87f06cu; f_b58d94(c);
    c->r[14] = 0x87f070u; f_b58dd4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_87eff0; }
    c->r[0] = 0x1u;
    c->r[2] = 0xeecfd2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11ba3b4u;
    c->r[2] = 0x87f098u + c->r[2];
    { uint32_t ea = 0x87f09cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x11bb7a0u;
    { uint32_t ea = 0x87f0b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[6]; c->r[14] = 0x87f0b0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    c->r[14] = 0x87f0c0u; f_b5ae00(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[14] = 0x87f0ccu; f_b5af54(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x87f0dcu; f_b5af4c(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_87f0ec; }
    c->r[0] = c->r[6];
    c->r[14] = 0x87f0ecu; f_a87660(c);
L_87f0ec:;
    c->r[0] = 0x11b9c24u;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x87f108u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f10cu; f_e067ec(c);
    goto L_87eff0;
L_87f110:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f118u; f_b5a214(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_87eff0; }
    c->r[0] = 0x2u;
    c->v.s[0] = 0x40800000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b9a6cu;
    { uint32_t ea = 0x87f148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f14cu; f_5f8534(c);
    c->r[0] = 0x11b9c24u;
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x42700000u;
    { uint32_t ea = 0x87f160u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f16cu; f_b59e74(c);
    goto L_87eff0;
L_87f170:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_87f1b4; }
    c->r[1] = 0x11ba18cu;
    c->r[2] = 0x6bfcu;
    { uint32_t ea = 0x87f190u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0x87f198u; f_b5a214(c);
    c->r[1] = 0x2000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1000000u;
    { uint32_t r = c->r[6] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87f1b0; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_87eff0; }
L_87f1b0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_87f1b4:;
    c->r[0] = 0x3u;
    c->v.s[0] = 0x40800000u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    c->r[0] = 0x11b99d4u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = 0x87f1e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f1e4u; f_5f856c(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[14] = 0x87f1f0u; f_b5ae90(c);
    goto L_87eff0;
L_87f1f4:;
    c->r[0] = 0x11b99b4u;
    { uint32_t ea = 0x87f200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f204u; f_5f85fc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87eff0; }
    c->r[0] = 0x11b9b64u;
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = 0x87f220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f22cu; f_b5a15c(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x87f23cu; rt_dispatch(c);
    c->r[0] = 0x11b9958u;
    c->v.s[0] = 0x41f00000u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x87f25cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f260u; f_5f8534(c);
    goto L_87eff0;
}
void f_87f294(Cpu *restrict c) {
    FN_ENTER(0x87f294u);
L_87f294:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_87f338; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x87f2b8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x87f2ccu: goto L_87f2cc; case 0x87f340u: goto L_87f340; case 0x87f398u: goto L_87f398; case 0x87f510u: goto L_87f510; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87f2cc:;
    c->r[0] = 0x11b9900u;
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    { uint32_t ea = 0x87f2e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f2e4u; f_6e8b54(c);
    c->r[0] = 0x11ba018u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0x87f2f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[4] + 0x5d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x5f8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x5fcu; ST32(ea, c->r[1]); }
    c->r[14] = 0x87f324u; f_87b3a4(c);
    c->r[0] = 0x11b9a4cu;
    c->r[1] = c->r[4] + 0x74u;
    { uint32_t ea = 0x87f334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f338u; f_474488(c);
L_87f338:;
    c->r[5] = 0x0u;
    goto L_87f99c;
L_87f340:;
    c->r[0] = 0x11b9fccu;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x87f350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x11b987cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87f364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f368u; f_6e8b54(c);
    c->r[5] = 0x2u;
    { uint32_t sc = 0; uint32_t r = c->r[6] & 0x4000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_87f99c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87f380u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f6d8; }
    c->r[14] = 0x87f38cu; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_87f6f8; }
    goto L_87f860;
L_87f398:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87f3a0u; f_881f50(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87f608; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_87f620; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87f3c4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f3e4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f3e4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f3f0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f410; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f410:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87f41cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f43c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f43c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f448u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f468; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f468:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87f474u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f494; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f494:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f4a0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f4c0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f4c0:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f4d0; }
    c->r[14] = 0x87f4d0u; f_6af894(c);
L_87f4d0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1bu;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x87f4fcu; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87f508u; f_85e794(c);
    c->r[5] = 0x0u;
    goto L_87f99c;
L_87f510:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87f518u; f_884588(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87f608; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_87f628; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_87f99c; }
    c->r[0] = 0x1u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x48u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87f550u; f_85cb74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x87f55cu; f_85cb74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87f568u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f588; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f588:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f594u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f5b4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f5b4:;
    c->r[0] = 0x11b9900u;
    { uint32_t ea = 0x87f5c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f5c4u; f_5e0a58(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1du;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x87f5f0u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87f5fcu; f_85e794(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_87f994;
L_87f608:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f99c; }
    c->r[14] = 0x87f61cu; f_6af8a0(c);
    goto L_87f99c;
L_87f620:;
    c->r[5] = 0x0u;
    goto L_87f99c;
L_87f628:;
    c->r[0] = 0x1u;
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x48u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87f644u; f_85cb74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x87f650u; f_85cb74(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87f65cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f67c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f67c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f688u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f6a8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f6a8:;
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x87f6b4u; f_85e794(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x1du;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x15u);
    goto L_87f8dc;
L_87f6d8:;
    c->r[0] = 0x11b9c34u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x87f6e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_87f860; }
L_87f6f8:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_87f868; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87f878; }
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x200u;
    c->r[0] = c->r[0] + (c->r[5] << 8);
    c->r[1] = c->r[1] & 0xff0000ffu;
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_87f8ec; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_87f98c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x49u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3eu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87f750u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f770; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f770:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f77cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f79c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f79c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87f7a4u; f_87b3a4(c);
    c->r[0] = 0x6ccu;
    c->r[5] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x6c8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6c9u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x39u; ST8(ea, c->r[5]); }
    c->r[14] = 0x87f7c8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f7e0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[5]); }
L_87f7e0:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f83c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x87f7fcu; f_881a78(c);
    c->r[0] = 0x11b9574u;
    c->r[1] = c->r[4] + 0x74u;
    { uint32_t ea = 0x87f80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f810u; f_474488(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[5]); }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f82cu; f_6ac3bc(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f834u; f_6abd14(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[5]); }
L_87f83c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f848u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f98c; }
    c->r[1] = 0x588u;
    c->r[1] = c->r[4] + c->r[1];
    c->r[14] = 0x87f85cu; f_8b8828(c);
    goto L_87f98c;
L_87f860:;
    c->r[5] = 0x0u;
    goto L_87f99c;
L_87f868:;
    c->r[1] = 0xf20ce0u;
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x87f878u + c->r[1];
    goto L_87f8b8;
L_87f878:;
    c->r[0] = 0x11b9a90u;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x87f88cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = c->r[4] + 0x600u;
    c->r[14] = 0x87f8a0u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_87f99c; }
    c->r[1] = 0xf20c9cu;
    { uint32_t ea = c->r[4] + 0x60du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x87f8bcu + c->r[1];
L_87f8b8:;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = 0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[1], 0x15u);
    c->r[3] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[1] = 0x5u;
L_87f8dc:;
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_NE) { c->r[0] = 0x4u; }
    c->r[14] = 0x87f8e8u; f_85e5bc(c);
    goto L_87f99c;
L_87f8ec:;
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    c->r[14] = 0x87f8f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f910; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_87f910:;
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x87f91cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f934; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
L_87f934:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87f940u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f960; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f960:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87f96cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87f98c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87f98c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_87f994:;
    c->r[5] = 0x0u;
    c->r[14] = 0x87f99cu; f_74f260(c);
L_87f99c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_87f9d8(Cpu *restrict c) {
    FN_ENTER(0x87f9d8u);
L_87f9d8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x11b9390u;
    { uint32_t ea = 0x87f9f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87f9f4u; f_476790(c);
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_87fa1c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x87fa18u; rt_dispatch(c);
    c->r[6] = c->r[0];
L_87fa1c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_HI) { goto L_87ffb4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x87fa38u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x87fa60u: goto L_87fa60; case 0x87fb98u: goto L_87fb98; case 0x87fc70u: goto L_87fc70; case 0x87fc80u: goto L_87fc80; case 0x87fd28u: goto L_87fd28; case 0x87fd68u: goto L_87fd68; case 0x87feacu: goto L_87feac; case 0x87fee4u: goto L_87fee4; case 0x87ff04u: goto L_87ff04; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_87fa60:;
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[1] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_87ffb4; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11b92f8u;
    { uint32_t ea = 0x87fa90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fa94u; f_722a94(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x87fa9cu; f_87b3a4(c);
    c->r[0] = 0x11b9414u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87faacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fab0u; f_5df760(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ffb4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x87faccu; f_881a78(c);
    c->r[0] = 0x3u;
    c->r[6] = c->r[4] + 0x74u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b93d4u;
    c->r[2] = c->r[6];
    { uint32_t ea = 0x87faecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87faf0u; f_5e1208(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87fb40; }
    c->r[0] = 0x11b93b0u;
    c->r[1] = 0x1u;
    c->r[2] = c->r[6];
    c->r[5] = 0x1u;
    { uint32_t ea = 0x87fb10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fb14u; f_5e1208(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87fb40; }
    c->r[0] = 0x11b938cu;
    c->r[1] = 0x2u;
    c->r[2] = c->r[6];
    c->r[5] = 0x2u;
    { uint32_t ea = 0x87fb34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fb38u; f_5e1208(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880170; }
L_87fb40:;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[5]); }
L_87fb44:;
    c->r[0] = c->r[6];
    c->r[14] = 0x87fb4cu; f_46f728(c);
    c->r[0] = 0x11b9224u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x87fb5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fb60u; f_474488(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fb7cu; f_6ac3bc(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fb84u; f_6abd14(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    goto L_87ffb4;
L_87fb98:;
    c->r[0] = 0x11b931cu;
    { uint32_t ea = 0x87fba4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x51u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[7] = r; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_87ff4c; }
L_87fbc4:;
    c->r[0] = 0x11b92f0u;
    { uint32_t ea = 0x87fbd0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fbd4u; f_5e6434(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_87ffb4; }
    { uint32_t ea = c->r[0] + 0x6bu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_87ffb4; }
    c->r[14] = 0x87fbf8u; f_85f32c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880020; }
    c->r[1] = 0x11b92b4u;
    { uint32_t ea = 0x87fc0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x51u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x52u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[2] + c->r[3]; c->r[1] = r; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[14] = 0x87fc24u; f_827aac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_880020; }
    c->r[0] = 0x11b9288u;
    { uint32_t ea = 0x87fc38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x51u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[1] = c->r[1] & 0xffff00ffu;
    if (COND_NE) { goto L_880184; }
    c->r[0] = c->r[1] | 0x700u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    goto L_87ffb4;
L_87fc70:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_87ffb4; }
    c->r[1] = 0x3u;
    goto L_87feb8;
L_87fc80:;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_87ffb4; }
    c->r[1] = 0x4u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87fca4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fcc4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fcc4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87fcd0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fcf0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fcf0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87fcf8u; f_8877e4(c);
L_87fcf8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_NE) { c->r[0] = 0x4u; }
    c->r[14] = 0x87fd24u; f_85e5bc(c);
    goto L_87ffb4;
L_87fd28:;
    c->r[0] = 0x11b904cu;
    { uint32_t ea = 0x87fd34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fd38u; f_476790(c);
    c->r[0] = c->r[0] + 0x4b0u;
    c->r[14] = 0x87fd40u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87ffb4; }
    c->r[0] = 0x8u;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b8e80u;
    { uint32_t ea = 0x87fd60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87fd64u; f_6df23c(c);
    goto L_87ffb4;
L_87fd68:;
    c->r[0] = c->r[4];
    c->r[14] = 0x87fd70u; f_881f50(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_87ffa0; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_87ffb4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x49u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87fd98u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fdb8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fdb8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87fdc4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fde4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fde4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87fdf0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fe10; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fe10:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87fe1cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fe3c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffbffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fe3c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x87fe48u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fe68; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fe68:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x87fe74u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fe94; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_87fe94:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ffb4; }
    c->r[14] = 0x87fea8u; f_6af894(c);
    goto L_87ffb4;
L_87feac:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_87ffb4; }
    c->r[1] = 0x7u;
L_87feb8:;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ffb4; }
    c->r[1] = c->r[4] + 0x74u;
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0x87fee0u; f_6aff78(c);
    goto L_87ffb4;
L_87fee4:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_87ffb4; }
    c->r[1] = 0x5u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x87ff00u; f_888b70(c);
    goto L_87ffb4;
L_87ff04:;
    c->v.s[0] = LD32(c->r[4] + 104u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_87ffb4; }
    c->r[0] = 0x11b8cc0u;
    { uint32_t ea = 0x87ff20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ff24u; f_6df270(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_87ffb4; }
    c->r[0] = 0x11b8f84u;
    { uint32_t ea = 0x87ff3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ff40u; f_5e0a58(c);
    c->r[5] = 0x1u;
    goto L_87ffb4;
L_87ff4c:;
    c->r[8] = c->r[4] + 0x74u;
    c->r[2] = c->r[8];
    c->r[14] = 0x87ff58u; f_5e1208(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_87fff8; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87fbc4; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_880060; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_87fbc4; }
    c->r[0] = c->r[8];
    c->r[14] = 0x87ff88u; f_46f728(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    c->r[14] = 0x87ff98u; f_6aff78(c);
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[7]); }
    goto L_87fbc4;
L_87ffa0:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ffb4; }
    c->r[14] = 0x87ffb4u; f_6af8a0(c);
L_87ffb4:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_87ffc4; }
    c->r[14] = 0x87ffc4u; f_6ad0e8(c);
L_87ffc4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xfe00u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 9));
    if (COND_NE) { goto L_87ffec; }
    c->r[0] = 0x11b8bf8u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x87ffe8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x87ffecu; f_6e8b54(c);
L_87ffec:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_87fff8:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_87fbc4; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880014; }
    c->r[14] = 0x880014u; f_6af894(c);
L_880014:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[0]); }
    goto L_87fbc4;
L_880020:;
    c->r[0] = 0x11b8e94u;
    { uint32_t ea = 0x88002cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x51u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[1] = c->r[1] & 0xffff00ffu;
    if (COND_NE) { goto L_8800b4; }
    c->r[0] = c->r[1] | 0x300u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    goto L_8800dc;
L_880060:;
    c->r[0] = c->r[8];
    c->r[14] = 0x880068u; f_46f728(c);
    c->r[0] = 0x11b8d08u;
    c->r[1] = c->r[8];
    { uint32_t ea = 0x880078u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88007cu; f_474488(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880098u; f_6ac3bc(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8800a0u; f_6abd14(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[7]); }
    goto L_87fbc4;
L_8800b4:;
    c->r[1] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x51u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[2] = c->r[4] + 0x74u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[14] = 0x8800dcu; f_5e1208(c);
L_8800dc:;
    c->r[0] = 0x11b8c98u;
    { uint32_t ea = 0x8800e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8800ecu; f_475a30(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_880108; }
    c->r[0] = 0x11b8c7cu;
    { uint32_t ea = 0x880104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880108u; f_474380(c);
L_880108:;
    c->r[0] = 0x11b8aa0u;
    c->r[1] = 0x3849u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x88011cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_88013c; }
    c->r[1] = 0x0u;
    c->r[14] = 0x880130u; f_45ffa0(c);
    c->r[0] = 0x11b8a80u;
    { uint32_t ea = 0x88013cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_88013c:;
    c->r[1] = 0x384au;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_880158; }
    c->r[1] = 0x1u;
    c->r[14] = 0x880158u; f_45ffa0(c);
L_880158:;
    c->r[0] = 0x11b8a78u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x880168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88016cu; f_6e8b54(c);
    goto L_87fcf8;
L_880170:;
    { uint32_t ea = c->r[4] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_87fb44; }
    goto L_87ffb4;
L_880184:;
    c->r[1] = c->r[1] | 0x600u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x51u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] * c->r[1] + c->r[2]; c->r[1] = r; }
    c->r[2] = c->r[4] + 0x74u;
    { uint32_t ea = c->r[4] + 0x3du; ST8(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[14] = 0x8801acu; f_5e1208(c);
    c->r[5] = 0x0u;
    goto L_87ffb4;
}
void f_880214(Cpu *restrict c) {
    FN_ENTER(0x880214u);
L_880214:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_8806a8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x88023cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x88025cu: goto L_88025c; case 0x88029cu: goto L_88029c; case 0x8802e0u: goto L_8802e0; case 0x8803b8u: goto L_8803b8; case 0x88046cu: goto L_88046c; case 0x880558u: goto L_880558; case 0x880598u: goto L_880598; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_88025c:;
    c->v.s[0] = LD32(c->r[4] + 104u);
    c->r[5] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_8806ac; }
    c->r[1] = 0x1u;
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0xfab5dcu;
    (void)f_subs(c, c->r[2], 0x15u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x880294u + c->r[1];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_8807c0; }
    goto L_8807cc;
L_88029c:;
    c->r[0] = 0x11b906cu;
    c->r[1] = 0x6bfdu;
    c->r[5] = 0x2u;
    { uint32_t ea = 0x8802b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_8806ac; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8802c8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8806b8; }
    c->r[14] = 0x8802d4u; f_8ba920(c);
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_8806d8; }
    goto L_8806a8;
L_8802e0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8802e8u; f_888d54(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8806a8; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x880304u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880324; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffbfffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880324:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x880330u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880350; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffbfffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880350:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x88035cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88037c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_88037c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x880388u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8803a8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8803a8:;
    c->r[1] = 0xfab4b8u;
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x8803b8u + c->r[1];
    goto L_88051c;
L_8803b8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8803c0u; f_888fa0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8806a8; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x8803dcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8803fc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8803fc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x880408u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880428; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880428:;
    c->r[0] = 0x11b877cu;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x880438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x880444u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88045c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x300u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[5]); }
L_88045c:;
    c->r[1] = 0xfab404u;
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x88046cu + c->r[1];
    goto L_88051c;
L_88046c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880474u; f_8890cc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8806a8; }
    c->r[0] = 0x1u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x880490u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8804b0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8804b0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x8804bcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8804dc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8804dc:;
    c->r[0] = 0x11b86c8u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x8804ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5du; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x8804f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880510; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x300u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[5]); }
L_880510:;
    c->r[1] = 0xfab350u;
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x880520u + c->r[1];
L_88051c:;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x880548u; f_85e5bc(c);
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[14] = 0x880554u; f_85e794(c);
    goto L_8806a8;
L_880558:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880560u; f_88916c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8806a8; }
    c->r[0] = 0x11b863cu;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x880578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xacu; ST8(ea, c->r[1]); }
    c->r[0] = 0x11b861cu;
    c->r[1] = 0x11b8628u;
    { uint32_t ea = 0x88058cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x880590u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880594u; f_212710(c);
    goto L_8806a8;
L_880598:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8805a0u; f_880f28(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8806a0; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[5] = 0x0u;
    if (COND_NE) { goto L_8806ac; }
    c->r[0] = 0x5188u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = (c->r[1] << 8);
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x200u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_8807f4; }
    c->r[0] = 0x11b87a0u;
    c->r[1] = 0x367eu;
    { uint32_t ea = 0x8805e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
L_8805ec:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8805f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880608; }
    c->r[1] = c->r[5];
    c->r[14] = 0x880608u; f_8bb804(c);
L_880608:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x880614u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880634; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880634:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x880640u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880660; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x400000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880660:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4au;
    (void)f_subs(c, c->r[0], 0x15u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x4u; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    c->r[14] = 0x88068cu; f_85e5bc(c);
    c->r[0] = 0xd4u;
    c->r[1] = 0x1u;
    c->r[14] = 0x880698u; f_85e794(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_8807f4;
L_8806a0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
L_8806a8:;
    c->r[5] = 0x0u;
L_8806ac:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_8806b8:;
    c->r[0] = 0x11b8c54u;
    c->r[1] = 0x6bfcu;
    { uint32_t ea = 0x8806c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 13) & 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_8806a8; }
L_8806d8:;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_88075c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_88076c; }
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[5] = 0x11b8680u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x200u;
    c->r[3] = c->r[0] + (c->r[2] << 8);
    c->r[0] = c->r[1];
    { uint32_t ea = 0x880708u + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[12] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = 0x367du;
    { uint32_t ea = c->r[14] + c->r[5]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_8807ec; }
    c->r[5] = 0xfeu;
    c->r[3] = c->r[5] & (c->r[3] >> 8);
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_NE) { goto L_8807ec; }
    c->r[1] = c->r[1] & 0xffff00ffu;
    c->r[0] = (uint32_t)(uint8_t)(c->r[12]);
    c->r[2] = 0x5188u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] | 0x600u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5184u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    goto L_8806ac;
L_88075c:;
    c->r[1] = 0xfab104u;
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x88076cu + c->r[1];
    goto L_8807b0;
L_88076c:;
    c->r[0] = 0x11b8b9cu;
    c->r[1] = 0x6bfcu;
    c->r[2] = 0x6c34u;
    { uint32_t ea = 0x880780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    c->r[0] = 0x648u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x880798u; f_74ee98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[5] = 0x0u;
    if (COND_EQ) { goto L_8806ac; }
    c->r[1] = 0xfab0bcu;
    { uint32_t ea = c->r[4] + 0x655u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x8807b4u + c->r[1];
L_8807b0:;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x15u);
    if (COND_NE) { goto L_8807cc; }
L_8807c0:;
    c->r[5] = 0x0u;
    c->r[0] = 0x2u;
    goto L_8807d4;
L_8807cc:;
    c->r[5] = 0x0u;
    c->r[0] = 0x4u;
L_8807d4:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = 0x5u;
    c->r[2] = 0x1u;
    c->r[14] = 0x8807e8u; f_85e5bc(c);
    goto L_8806ac;
L_8807ec:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_880868; }
L_8807f4:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x880808u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880828; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffeffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880828:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x880834u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880854; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffeffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880854:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    c->r[5] = 0x0u;
    c->r[14] = 0x880864u; f_74f260(c);
    goto L_8806ac;
L_880868:;
    c->r[0] = 0x367eu;
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = v; }
    goto L_8805ec;
}
void f_8808b4(Cpu *restrict c) {
    FN_ENTER(0x8808b4u);
L_8808b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[6] = 0xffu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xff000000u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_880918; }
    c->r[2] = ~0x10u;
    c->r[2] = c->r[2] + (uint32_t)(uint8_t)(ROR32(c->r[0], 16));
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_CC) { goto L_880918; }
    c->r[2] = 0x11b85d4u;
    { uint32_t ea = 0x8808ecu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_880918; }
    (void)f_subs(c, c->r[1], 0x800u);
    if (COND_EQ) { goto L_880918; }
    { uint32_t ea = c->r[4] + 0x814u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xde5u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] & c->r[6]; }
    if (COND_NE) { c->r[0] = c->r[0] | 0x800u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); } }
L_880918:;
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_HI) { goto L_880d04; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x880934u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x88095cu: goto L_88095c; case 0x88099cu: goto L_88099c; case 0x880a5cu: goto L_880a5c; case 0x880a78u: goto L_880a78; case 0x880a94u: goto L_880a94; case 0x880afcu: goto L_880afc; case 0x880bbcu: goto L_880bbc; case 0x880c24u: goto L_880c24; case 0x880cf0u: goto L_880cf0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_88095c:;
    { uint32_t ea = c->r[4] + 0x814u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x88096cu; rt_dispatch(c);
    c->r[0] = 0x6ccu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x6c8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x100u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    c->r[14] = 0x880998u; f_85e67c(c);
    goto L_880d04;
L_88099c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x8809a4u; f_88b5c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880d04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x8809b8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8809d8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8809d8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x8809e4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880a04; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffff7u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
L_880a04:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880a10u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880a30; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880a30:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880a3cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880ce4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffefu;
    goto L_880ce0;
L_880a5c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880a64u; f_889910(c);
    c->r[1] = c->r[0] - 0x2u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { goto L_880d4c; }
    c->r[5] = 0x2u;
    goto L_880d04;
L_880a78:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880a80u; f_889e5c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_880ddc; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { c->r[5] = 0x2u; }
    goto L_880d04;
L_880a94:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880a9cu; f_88b104(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880d04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880ab0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880ad0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880ad0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880adcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880ce4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffdu;
    goto L_880ce0;
L_880afc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880b04u; f_88ccc4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880d04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880b18u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880b38; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880b38:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880b44u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880b64; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffdfu;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
L_880b64:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880b70u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880b90; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880b90:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880b9cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880ce4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffffbfu;
    goto L_880ce0;
L_880bbc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880bc4u; f_88d988(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880d04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880bd8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880bf8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffff7fu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880bf8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880c04u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880ce4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xffffff7fu;
    goto L_880ce0;
L_880c24:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880c2cu; f_88dff8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880d04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880c40u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880c60; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffeffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880c60:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880c6cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880c8c; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffeffu;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
L_880c8c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880c98u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880cb8; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffdffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880cb8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880cc4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880ce4; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffdffu;
L_880ce0:;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
L_880ce4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880cecu; f_889c78(c);
    goto L_880d04;
L_880cf0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880cf8u; f_88e61c(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x2u; }
L_880d04:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_880d20; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x8u); }
    if (COND_NE) { goto L_880d30; }
L_880d20:;
    c->r[0] = 0x11b7eb0u;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x880d30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_880d3c;
L_880d30:;
    c->r[0] = 0x11b7ea0u;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x880d40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_880d3c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880d44u; f_6e8b54(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_880d4c:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_880d04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880d60u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880d7c; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
L_880d7c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880d88u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880da4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_880da4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880db0u; f_85cba0(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880dbcu; f_85cba0(c);
    c->r[0] = 0x11b7fecu;
    { uint32_t ea = 0x880dc8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880dccu; f_236fc4(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880dd4u; f_23b714(c);
    { uint32_t ea = c->r[4] + 0x80cu; ST8(ea, c->r[0]); }
    goto L_880ce4;
L_880ddc:;
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x300u;
    c->r[1] = c->r[2] + (c->r[1] << 8);
    c->r[0] = c->r[0] & c->r[6];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = 0x6a0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x69du; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x6u;
    c->r[14] = 0x880e1cu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880e3c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_880e3c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[14] = 0x880e48u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_880e68; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
L_880e68:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x730u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x72cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x728u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x724u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x720u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x760u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_880d04; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x880ea0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x880eb8u: goto L_880eb8; case 0x880ec4u: goto L_880ec4; case 0x880ed0u: goto L_880ed0; case 0x880ee8u: goto L_880ee8; case 0x880f00u: goto L_880f00; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_880eb8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880ec0u; f_88a58c(c);
    goto L_880d04;
L_880ec4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x880eccu; f_88a6bc(c);
    goto L_880d04;
L_880ed0:;
    c->r[0] = 0x42u;
    c->r[1] = 0x1u;
    c->r[14] = 0x880edcu; f_85e794(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x880ee4u; f_88a7b8(c);
    goto L_880d04;
L_880ee8:;
    c->r[0] = 0x45u;
    c->r[1] = 0x1u;
    c->r[14] = 0x880ef4u; f_85e794(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x880efcu; f_88a9f0(c);
    goto L_880d04;
L_880f00:;
    c->r[0] = 0x45u;
    c->r[1] = 0x1u;
    c->r[14] = 0x880f0cu; f_85e794(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x880f14u; f_88aaac(c);
    goto L_880d04;
}
void f_880f28(Cpu *restrict c) {
    FN_ENTER(0x880f28u);
L_880f28:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x5184u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_8810a0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x880f54u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x880f70u: goto L_880f70; case 0x880fbcu: goto L_880fbc; case 0x88101cu: goto L_88101c; case 0x881024u: goto L_881024; case 0x881044u: goto L_881044; case 0x88108cu: goto L_88108c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_880f70:;
    c->r[0] = 0x11b7c50u;
    c->r[1] = 0xbu;
    c->r[2] = 0x39u;
    { uint32_t ea = 0x880f84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880f88u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0xcu;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x880fa8u; f_85f190(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[14] = 0x880fb4u; f_85e794(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    goto L_8810a0;
L_880fbc:;
    c->r[0] = 0x11b7c04u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    { uint32_t ea = 0x880fd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x880fd4u; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0x9u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x880ff0u; f_85f190(c);
    c->r[0] = 0x11b7d88u;
    c->r[1] = 0x367du;
    { uint32_t ea = 0x881000u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[5]); }
    c->r[0] = 0x11b7eb0u;
    { uint32_t ea = 0x881010u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881014u; f_5df924(c);
    c->r[0] = 0x3u;
    goto L_88109c;
L_88101c:;
    c->r[5] = 0x2u;
    goto L_8810a0;
L_881024:;
    c->r[14] = 0x881028u; f_85f270(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_881094; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8810a0; }
    c->r[14] = 0x88103cu; f_85f118(c);
    c->r[0] = 0x2u;
    goto L_88109c;
L_881044:;
    c->r[0] = 0x11b7e70u;
    { uint32_t ea = 0x881050u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881054u; f_5e6434(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8810a0; }
    c->r[14] = 0x881068u; f_85f118(c);
    c->r[0] = 0x11b7e48u;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x881078u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x5u; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    goto L_8810a0;
L_88108c:;
    c->r[5] = 0x1u;
    goto L_8810a0;
L_881094:;
    c->r[14] = 0x881098u; f_85f118(c);
    c->r[0] = 0x4u;
L_88109c:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_8810a0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_8810c4(Cpu *restrict c) {
    FN_ENTER(0x8810c4u);
L_8810c4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[4] = c->r[0];
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = (c->r[8] >> 8) & 0xffu;
    (void)f_subs(c, c->r[5], 0x9u);
    if (COND_HI) { goto L_8815a4; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x8810f0u + 0xcu;
    c->r[6] = 0xffu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xff000000u;
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x881124u: goto L_881124; case 0x8811e8u: goto L_8811e8; case 0x881284u: goto L_881284; case 0x8812a0u: goto L_8812a0; case 0x881424u: goto L_881424; case 0x88144cu: goto L_88144c; case 0x881488u: goto L_881488; case 0x881508u: goto L_881508; case 0x881530u: goto L_881530; case 0x8815a4u: goto L_8815a4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_881124:;
    c->r[0] = c->r[8] & c->r[6];
    c->r[0] = c->r[0] | 0x100u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[14] = 0x881134u; f_85d424(c);
    c->r[0] = 0x11b7a8cu;
    c->r[1] = 0x4u;
    c->r[2] = 0x41u;
    { uint32_t ea = 0x881148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88114cu; f_75bd0c(c);
    c->r[1] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = 0x9u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[14] = 0x881168u; f_85f190(c);
    c->r[0] = 0x1u;
    c->r[1] = 0x1u;
    c->r[14] = 0x881174u; f_85e794(c);
    c->r[0] = 0x11b7d40u;
    { uint32_t ea = 0x881180u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881184u; f_5e7f38(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x11b82b8u;
    { uint32_t ea = 0x881194u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x8811acu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[2] = 0x10u;
    c->pc = c->r[11]; c->r[14] = 0x8811c0u; rt_dispatch(c);
    c->r[7] = 0x5174u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4] + c->r[7]; ST32(ea, c->r[0]); }
    c->r[14] = 0x8811d0u; f_15efdac(c);
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8811dcu; f_5df640(c);
    c->r[0] = 0x519cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    goto L_8815a4;
L_8811e8:;
    c->r[0] = 0x11b81ccu;
    c->r[9] = 0x0u;
    { uint32_t ea = 0x8811f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x22cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_881214; }
    c->r[1] = c->r[8];
    c->r[9] = 0x2u;
    c->r[1] = c->r[1] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_881214:;
    c->r[14] = 0x881218u; f_da7d68(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881238; }
    c->r[0] = 0x11b8198u;
    { uint32_t ea = 0x88122cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881230u; f_da7d68(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_881270; }
L_881238:;
    c->r[0] = 0x11b8180u;
    { uint32_t ea = 0x881244u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x11b7b2cu;
    { uint32_t ea = 0x881250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881254u; f_42d644(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x10u;
    c->r[2] = 0x2u;
    c->r[3] = 0x13u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x881270u; f_da8174(c);
L_881270:;
    c->r[0] = 0xb744u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_881414; }
    goto L_8815a4;
L_881284:;
    c->r[0] = c->r[4];
    c->r[14] = 0x88128cu; f_88fdb0(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_8814a8; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_8814a0; }
    goto L_881590;
L_8812a0:;
    c->r[0] = 0x11b7c14u;
    { uint32_t ea = 0x8812acu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8812b0u; f_5e6434(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_8815a4; }
    c->r[14] = 0x8812c4u; f_85d424(c);
    c->r[14] = 0x8812c8u; f_85f118(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x11b7ad4u;
    { uint32_t ea = 0x8812dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11b78ecu;
    { uint32_t ea = 0x8812f4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8812f8u; f_6e0ebc(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11b7a7cu;
    c->r[1] = 0x367fu;
    { uint32_t ea = 0x88130cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x367eu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11b7b94u;
    { uint32_t ea = 0x88132cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881330u; f_5e7f38(c);
    c->r[2] = c->r[0];
    c->r[0] = 0x5174u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881348u; f_5e7d10(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x881358u; f_5e0d10(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[3] = c->r[1];
    c->r[14] = 0x881368u; f_7279cc(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x367eu;
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    c->r[2] = 0x367fu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x200u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x8813a8u; f_6e0ec8(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8813b4u; f_85cb3c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_881414; }
    c->r[0] = 0x11b7af0u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x8813d0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x8813d4u; f_5e0ab8(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = 0xau;
    c->r[14] = 0x8813e4u; f_8bad84(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x8813f0u; f_8bb218(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[2] = 0xau;
    c->r[14] = 0x881400u; f_8bad84(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x88140cu; f_8bb218(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881414u; f_5e0b48(c);
L_881414:;
    c->r[14] = 0x881418u; f_85f118(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    goto L_8815a4;
L_881424:;
    c->r[0] = c->r[4];
    c->r[14] = 0x88142cu; f_88f154(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_8818f4; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_8815a4; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x2u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    goto L_8815a0;
L_88144c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x881454u; f_88f5a0(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_88192c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8815a4; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[1], (c->r[0] >> 24));
    if (COND_EQ) { goto L_8819ac; }
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_8819bc; }
    c->r[1] = 0x600u;
    goto L_8819b0;
L_881488:;
    c->r[0] = c->r[4];
    c->r[14] = 0x881490u; f_890d64(c);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_8814a8; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_881590; }
L_8814a0:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8815a4; }
L_8814a8:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8814b4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8814d4; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xff7fffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_8814d4:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x8814e0u; f_85cb3c(c);
    c->r[1] = 0x300u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881594; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0xff7fffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    goto L_881594;
L_881508:;
    c->r[0] = c->r[4];
    c->r[14] = 0x881510u; f_8917e8(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_8818d8; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8815a4; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    goto L_8815a0;
L_881530:;
    c->r[0] = c->r[4];
    c->r[14] = 0x881538u; f_892940(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_88199c; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_8815a4; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    c->r[0] = c->r[0] & 0xff00ffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x11b7650u;
    { uint32_t ea = 0x881564u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_8815a4; }
    { uint32_t ea = c->r[0] + 0xacu; ST8(ea, c->r[9]); }
    c->r[0] = 0x11b7624u;
    c->r[1] = 0x11b7630u;
    { uint32_t ea = 0x881584u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x881588u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x88158cu; f_212710(c);
    goto L_8815a4;
L_881590:;
    c->r[1] = 0x500u;
L_881594:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | c->r[1];
L_8815a0:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_8815a4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_8818cc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8815c0u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8815ec; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x3u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfffbffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x40000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_8815ec:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x8815f8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881624; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x3u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfffbffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x40000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_881624:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x881634u; f_85cb3c(c);
    c->r[5] = c->r[5] & 0xff00u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881664; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x500u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfff7ffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x80000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_881664:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x881670u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88169c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x500u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfff7ffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x80000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_88169c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8816acu; f_85cb3c(c);
    c->r[5] = c->r[5] & 0xff00u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8816dc; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x800u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfeffffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x1000000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_8816dc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x8816e8u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881714; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x800u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfeffffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x1000000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_881714:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x881724u; f_85cb3c(c);
    c->r[5] = c->r[5] & 0xff00u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881754; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x900u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfdffffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x2000000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_881754:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x881760u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_88178c; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x900u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfdffffffu;
    if (COND_EQ) { c->r[2] = c->r[1] | 0x2000000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_88178c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x4u;
    c->r[5] = c->r[1] + (uint32_t)(uint8_t)(ROR32(c->r[0], 8));
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x8817a4u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_8817d0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x3u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfbffffffu;
    if (COND_CC) { c->r[2] = c->r[1] | 0x4000000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_8817d0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x8817dcu; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881808; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x3u);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfbffffffu;
    if (COND_CC) { c->r[2] = c->r[1] | 0x4000000u; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
L_881808:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    (void)f_subs(c, c->r[0], 0x300u);
    if (COND_NE) { goto L_8818a4; }
    c->r[0] = 0x6fcu;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[6] = (c->r[8] >> 8);
    c->r[5] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x881838u; f_74edec(c);
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_EQ) { goto L_881864; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_EQ) { goto L_881884; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { c->r[0] = 0x70cu; }
    if (COND_EQ) { c->r[1] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); } }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x709u; ST8(ea, c->r[1]); } }
    goto L_8818a4;
L_881864:;
    { uint32_t ea = c->r[4] + 0x70au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x70cu;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { c->r[5] = 0x1u; }
    { uint32_t ea = c->r[4] + c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x709u; ST8(ea, c->r[5]); }
    goto L_8818a4;
L_881884:;
    { uint32_t ea = c->r[4] + 0x70au; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x70cu;
    c->r[1] = udiv32(c->r[1], c->r[0]);
    c->r[0] = (uint32_t)((int32_t)(int16_t)(c->r[1] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0));
    { uint32_t ea = c->r[4] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[0] = 0x2u - c->r[0];
    { uint32_t ea = c->r[4] + 0x709u; ST8(ea, c->r[0]); }
L_8818a4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    (void)f_subs(c, c->r[0], 0x500u);
    if (COND_NE) { goto L_8818cc; }
    c->r[0] = 0x6fcu;
    c->r[1] = 0x2u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x8818ccu; f_74edec(c);
L_8818cc:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_8818d8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[9] = 0x0u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] & 0xff00ffffu;
    goto L_8815a0;
L_8818f4:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[1] = (c->r[0] >> 24);
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_HI) { goto L_881924; }
    c->r[2] = 0xfbd334u;
    c->r[0] = c->r[0] & c->r[6];
    c->r[2] = 0x881918u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xff00ffffu;
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_881924:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    goto L_8815a0;
L_88192c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x881938u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881958; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xff7fffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_881958:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x881964u; f_85cb3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881984; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xff7fffffu;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
L_881984:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3u;
    c->r[0] = (c->r[0] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = ~0xff0000u;
    c->r[0] = c->r[1] & c->r[0];
    goto L_8815a0;
L_88199c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x300u;
    goto L_8815a0;
L_8819ac:;
    c->r[1] = 0x700u;
L_8819b0:;
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_8819bc:;
    c->r[0] = c->r[0] & 0xff00ffffu;
    c->r[1] = ~0xff000000u;
    c->r[0] = c->r[1] & c->r[0];
    goto L_8815a0;
}
void f_881a10(Cpu *restrict c) {
    FN_ENTER(0x881a10u);
L_881a10:;
    return;
}
void f_881a14(Cpu *restrict c) {
    FN_ENTER(0x881a14u);
L_881a14:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x11b71b0u;
    { uint32_t ea = 0x881a28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881a34; }
    c->r[14] = 0x881a34u; f_75c5f4(c);
L_881a34:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881a68; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_881a60; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x881a60u; rt_dispatch(c);
L_881a60:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
L_881a68:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_85c9d4(c);
}
void f_881a78(Cpu *restrict c) {
    FN_ENTER(0x881a78u);
L_881a78:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x19cu;
    c->r[13] = c->r[13] - 0x400u;
    c->r[5] = c->r[13] + 0x400u;
    c->r[7] = c->r[0];
    c->r[9] = c->r[13] + 0x570u;
    c->r[4] = c->r[1];
    c->r[0] = c->r[5] + 0x16cu;
    c->r[14] = 0x881a9cu; f_2daba4(c);
    c->r[14] = 0x881aa0u; f_2dac14(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[6] = 0xffe0u;
    (void)f_subs(c, c->r[4], 0x1u);
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[0]); }
    if (COND_NE) { goto L_881d28; }
    { uint32_t ea = c->r[7] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_881e2c; }
    c->r[0] = 0x11b72a4u;
    { uint32_t ea = 0x881adcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881ae0u; f_477454(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_881f04; }
    c->r[0] = 0x11b7284u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x881afcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881b00u; f_474380(c);
    c->r[5] = c->r[13] + 0x8u;
    c->r[0] = c->r[5];
    c->r[14] = 0x881b0cu; f_46e354(c);
    c->r[4] = c->r[7] + 0x74u;
    c->r[2] = 0x560u;
    c->r[1] = c->r[4];
    c->r[14] = 0x881b1cu; f_15efdd0(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x881b28u; f_46e600(c);
    { uint32_t ea = c->r[6] + 0x4d8u; uint32_t v = LD8(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x4e0u; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x881b3cu; f_46e600(c);
    c->r[0] = 0x588u;
    c->r[1] = 0x514u;
    c->r[2] = 0x20u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[1] = c->r[5] + c->r[1];
    c->r[14] = 0x881b54u; f_15efe3c(c);
    c->r[10] = 0x0u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[7] + 0x5a7u; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4e1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4ddu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x549u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4deu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4dfu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4e0u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4e2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4e3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4e4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x550u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x881ba8u; f_46f3e0(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x4f4u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[2] = c->r[5] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x881bc4u; f_46f958(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x6u;
    c->r[14] = 0x881bd0u; f_46f3e0(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x4f8u;
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[2] = c->r[5] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x881becu; f_46f958(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x7u;
    c->r[14] = 0x881bf8u; f_46f3e0(c);
    c->r[3] = c->r[0];
    c->r[0] = 0x4fcu;
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[2] = c->r[5] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x881c14u; f_46f958(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x8u;
    c->r[14] = 0x881c20u; f_46f3e0(c);
    c->r[3] = c->r[0];
    c->r[2] = c->r[5] + 0x500u;
    c->r[0] = c->r[4];
    c->r[1] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x881c38u; f_46f958(c);
    c->r[0] = 0x11b6f88u;
    { uint32_t ea = c->r[13] + 0x4e1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x54du; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = 0x881c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x54du; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881c58u; f_7605f8(c);
    (void)f_subs(c, c->r[11], c->r[8]);
    if (COND_EQ) { goto L_881c74; }
    c->r[0] = 0x11b7710u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x881c70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881c74u; f_22cd34(c);
L_881c74:;
    c->r[0] = 0xfbcf00u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[5] = c->r[6] + 0x4u;
    c->r[11] = 0xffe0u;
    c->r[7] = 0x0u;
    c->r[8] = c->r[14] + 0x16cu;
    c->r[10] = 0x881c94u + c->r[0];
L_881c90:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x881c9cu; f_2e100c(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[7], 0x6u);
    if (COND_EQ) { goto L_881ef0; }
    c->r[0] = 0xffffu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_881ce8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[7] & 0x1fu;
    c->r[2] = 0xffffu;
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] & c->r[11];
    c->r[0] = c->r[0] | c->r[1];
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x881ce4u; f_46e964(c);
    goto L_881cf4;
L_881ce8:;
    c->r[0] = c->r[4];
    c->r[2] = 0x1u;
    c->r[14] = 0x881cf4u; f_46eaa8(c);
L_881cf4:;
    { uint32_t ea = c->r[10] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x881d04u; f_46f3e0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_881d18; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x881d18u; f_46f4dc(c);
L_881d18:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x7u);
    if (COND_NE) { goto L_881c90; }
    goto L_881efc;
L_881d28:;
    c->r[8] = c->r[13] + 0x400u;
    c->r[4] = c->r[7] + 0x74u;
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = c->r[8] + 0x16cu;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x881d4cu; f_46e964(c);
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[7]); }
    c->r[1] = c->r[5];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x881d74u; f_46e964(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x881d98u; f_46e964(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x881dbcu; f_46e964(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x881de0u; f_46e964(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x5u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x881e04u; f_46e964(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[0] = c->r[0] & c->r[6];
    c->r[0] = c->r[0] | 0x6u;
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
L_881e18:;
    c->r[0] = c->r[4];
    c->r[2] = 0xffffu;
    c->r[3] = 0x0u;
    c->r[14] = 0x881e28u; f_46e964(c);
    goto L_881f04;
L_881e2c:;
    c->r[0] = 0x11b754cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x881e48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x881e4cu; f_3421b4(c);
    c->r[6] = c->r[13] + 0x400u;
    c->r[4] = c->r[7] + 0x74u;
    c->r[2] = c->r[0];
    c->r[3] = 0x1u;
    c->r[8] = c->r[6] + 0x16cu;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0x881e6cu; f_46e964(c);
    c->r[0] = 0x3u;
    c->r[10] = 0xffe0u;
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[0]); }
    c->r[0] = 0x11b7510u;
    { uint32_t ea = 0x881e84u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0xfbcd08u;
    c->r[7] = 0x881e8cu + c->r[0];
L_881e88:;
    { uint32_t ea = c->r[9]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[6] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x5u);
    c->r[1] = c->r[6] & 0x1fu;
    c->r[0] = c->r[0] & c->r[10];
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[9]; ST16(ea, c->r[0]); }
    if (COND_EQ) { goto L_881f1c; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = 0x0u;
    c->r[14] = 0x881ebcu; f_3421b4(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[3] = 0x1u;
    c->r[14] = 0x881ed0u; f_46e964(c);
    c->r[0] = c->r[7] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x881ee0u; f_46f4dc(c);
    (void)f_subs(c, c->r[6], 0x6u);
    c->r[5] = c->r[6];
    if (COND_NE) { goto L_881e88; }
    goto L_881f04;
L_881ef0:;
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x881efcu; f_46eaa8(c);
L_881efc:;
    c->r[0] = c->r[13] + 0x8u;
    c->r[14] = 0x881f04u; f_46e50c(c);
L_881f04:;
    c->r[4] = c->r[13] + 0x400u;
    c->r[0] = c->r[4] + 0x16cu;
    c->r[14] = 0x881f10u; f_2dad24(c);
    c->r[13] = c->r[13] + 0x19cu;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_881f1c:;
    c->r[0] = 0x0u;
    c->r[5] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[9] + 0x2u; ST16(ea, c->r[0]); }
    c->r[1] = c->r[5] + 0x16cu;
    goto L_881e18;
}
