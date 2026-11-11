#include "cpu.h"
#include "neon_rt.h"
void f_3da3f4(Cpu *c);
void f_3da718(Cpu *c);
void f_3da890(Cpu *c);
void f_3dad6c(Cpu *c);
void f_3db20c(Cpu *c);
void f_3e1c04(Cpu *c);
void f_3e6e28(Cpu *c);
void f_7548ac(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9c9198(Cpu *c);
void f_9cc110(Cpu *c);
void f_a0c710(Cpu *c);
void f_a0c958(Cpu *c);
void f_a0ca9c(Cpu *c);
void f_a103b8(Cpu *c);
void f_a38574(Cpu *c);
void f_a38634(Cpu *c);
void f_a38750(Cpu *c);
void f_a389e0(Cpu *c);
void f_d21388(Cpu *c);
void f_d213cc(Cpu *c);
void f_d2bbd0(Cpu *c);
void f_d2be3c(Cpu *c);
void f_d2bf40(Cpu *c);
void f_d2d93c(Cpu *c);
void f_da84f0(Cpu *c);
void f_da87c0(Cpu *c);
void f_da8810(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdc4(Cpu *c);
void f_3d9f74(Cpu *restrict c) {
    FN_ENTER(0x3d9f74u);
L_3d9f74:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3d9fb0; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_3d9f94:;
    { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[1] << 3);
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2d4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_3d9f94; }
L_3d9fb0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x344u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_3da00c; }
    c->r[0] = 0x165eb88u;
    { uint32_t ea = 0x3d9fd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3d9fd4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = (c->r[7] << 3);
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0x3d9fecu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_3da008; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3da004u; f_15efd7c(c);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
L_3da008:;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
L_3da00c:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0x3da018u; f_7548ac(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); } }
    c->r[0] = 0x928u;
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = 0x165ed38u;
    { uint32_t ea = 0x3da044u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x3da050u; f_3e6e28(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x920u; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_3da08c; }
    c->r[0] = 0x165eae0u;
    { uint32_t ea = 0x3da07cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da07cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x3da08cu; rt_dispatch(c);
L_3da08c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3da0a0(Cpu *restrict c) {
    FN_ENTER(0x3da0a0u);
L_3da0a0:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xau);
    if (COND_NE) { goto L_3da260; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xc3u);
    if (COND_NE) { goto L_3da0d4; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3da25c; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
L_3da0d4:;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xffffffefu;
    c->r[1] = c->r[0] - 0x6bu;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { return; }
    c->r[1] = c->r[2] - 0x67u;
    (void)f_subs(c, c->r[1], 0x54u);
    if (COND_HI) { goto L_3da25c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x3da104u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x3da25cu: goto L_3da25c; case 0x3da260u: goto L_3da260; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_3da25c:;
    c->r[0] = 0x0u;
L_3da260:;
    return;
}
void f_3da264(Cpu *restrict c) {
    FN_ENTER(0x3da264u);
L_3da264:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_3da2e0; }
    c->r[6] = c->r[13];
    c->r[0] = c->r[5];
    c->r[2] = 0x28u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3da298u; f_a0ca9c(c);
    c->r[0] = 0x41cu;
    c->r[1] = 0x13u;
    c->r[2] = c->r[6];
    c->r[3] = 0x28u;
    c->r[7] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 4) - c->r[0];
    c->r[0] = c->r[7] + (c->r[0] << 3);
    c->r[14] = 0x3da2bcu; f_a0c958(c);
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[0] = (c->r[0] << 4) - c->r[0];
    c->r[0] = c->r[7] + (c->r[0] << 3);
    c->r[14] = 0x3da2d0u; f_a0c710(c);
    { uint32_t ea = c->r[4] + 0x418u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x418u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_3da2e0:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3da2e8(Cpu *restrict c) {
    FN_ENTER(0x3da2e8u);
L_3da2e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x16802f8u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x3da308u + c->r[0];
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
    c->r[14] = 0x3da350u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x3da368u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x3da380u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[1] = 0x10000u;
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = 0x1660e20u;
    { uint32_t ea = 0x3da3ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3da3ec(Cpu *restrict c) {
    FN_ENTER(0x3da3ecu);
L_3da3ec:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_3da3f4(c);
}
void f_3da3f4(Cpu *restrict c) {
    FN_ENTER(0x3da3f4u);
L_3da3f4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    c->r[0] = 0x165efb4u;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x3da410u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da414u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_3da608; }
    c->r[0] = 0x165f784u;
    { uint32_t ea = 0x3da430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da430u; f_9cc110(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x1660db0u;
    { uint32_t ea = 0x3da440u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da440u; f_a103b8(c);
    c->r[1] = 0x1660d9cu;
    c->r[0] = c->r[6] + c->r[0];
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3da458u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1660d90u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x3da468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4] + 0x20u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x3da474u; f_a389e0(c);
    c->r[0] = c->r[4] + 0x3cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3da484u; f_a389e0(c);
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[6]); c->r[4] = ea; }
    c->r[1] = 0x2816u;
    c->r[0] = c->r[4] + 0x70u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[6]); }
    c->r[14] = 0x3da49cu; f_15efdc4(c);
    c->r[0] = 0x2896u;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2894u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = 0x2890u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x288cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x2888u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x2898u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3da4d4u; f_15efdc4(c);
    c->r[0] = 0x50beu;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x50bcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = 0x50b8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x50b4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x50b0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x50c0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3da50cu; f_15efdc4(c);
    c->r[0] = 0x78e6u;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x78e4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[6]); }
    c->r[0] = 0x78e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x78dcu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x78d8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[6]); }
    c->r[0] = 0x78e8u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3da544u; f_15efdc4(c);
    c->r[0] = c->r[4] + 0xa100u;
    c->r[1] = 0x198u;
    { uint32_t ea = c->r[4] + 0x20u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x38u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x50u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6eu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    c->r[14] = 0x3da5a8u; f_15efdac(c);
    c->r[0] = 0xa298u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xa29cu;
    c->r[1] = 0xa164u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3da5c4u; f_15efd7c(c);
    c->r[0] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[4] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3da6ec; }
    c->r[0] = 0x165f5d4u;
    { uint32_t ea = 0x3da5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1660c08u;
    { uint32_t ea = 0x3da5e8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_3da5e4:;
    c->r[0] = c->r[5];
    c->r[14] = 0x3da5ecu; f_9cc110(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x3da5f8u; f_a103b8(c);
    c->r[0] = f_adds(c, c->r[7], c->r[0]);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_3da5e4; }
    goto L_3da6ec;
L_3da608:;
    c->r[1] = c->r[4] + 0x3cu;
    c->r[0] = c->r[13];
    c->r[14] = 0x3da614u; f_d21388(c);
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3da664; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da634u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da648u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3da664; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[0]); }
    goto L_3da6cc;
L_3da664:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x2fu;
    c->pc = c->r[3]; c->r[14] = 0x3da680u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3da6cc; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da6a0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da6b4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3da6cc; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    goto L_3da6e4;
L_3da6cc:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x2fu;
    c->pc = c->r[3]; c->r[14] = 0x3da6e4u; rt_dispatch(c);
L_3da6e4:;
    c->r[0] = c->r[13];
    c->r[14] = 0x3da6ecu; f_d213cc(c);
L_3da6ec:;
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3da710(Cpu *restrict c) {
    FN_ENTER(0x3da710u);
L_3da710:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_3da718(c);
}
void f_3da718(Cpu *restrict c) {
    FN_ENTER(0x3da718u);
L_3da718:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[1];
    c->r[1] = c->r[0] + 0x3cu;
    c->r[0] = c->r[13];
    c->r[14] = 0x3da730u; f_d21388(c);
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3da784; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da750u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da764u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3da784; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[0]); }
    goto L_3da7ec;
L_3da784:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x2fu;
    c->pc = c->r[3]; c->r[14] = 0x3da79cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3da7ec; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da7c0u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3da7d4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3da7ec; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    goto L_3da804;
L_3da7ec:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x2fu;
    c->pc = c->r[3]; c->r[14] = 0x3da804u; rt_dispatch(c);
L_3da804:;
    c->r[0] = c->r[13];
    c->r[14] = 0x3da80cu; f_d213cc(c);
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3da814(Cpu *restrict c) {
    FN_ENTER(0x3da814u);
L_3da814:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16609d8u;
    { uint32_t ea = 0x3da824u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3da828u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4458u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->pc = c->r[4]; c->r[14] = 0x3da844u; rt_dispatch(c);
    c->r[1] = 0xfu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_3da890(c);
}
void f_3da854(Cpu *restrict c) {
    FN_ENTER(0x3da854u);
L_3da854:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1660990u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3da86cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3da870u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3da890(Cpu *restrict c) {
    FN_ENTER(0x3da890u);
L_3da890:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1660948u;
    c->r[7] = c->r[1];
    c->r[1] = 0x2900u;
    c->r[2] = 0x6u;
    c->r[8] = c->r[4] + 0x20u;
    { uint32_t ea = 0x3da8b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x165eb84u;
    { uint32_t ea = 0x3da8c8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x3da8d0u; f_a38574(c);
    { uint32_t ea = c->r[5] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = c->r[4] + 0x3cu;
    c->r[1] = 0x7b00u;
    c->r[2] = 0x6u;
    c->r[0] = c->r[9];
    c->r[14] = 0x3da8e8u; f_a38574(c);
    c->r[5] = 0x0u;
    c->r[0] = 0x8u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[5]); }
    c->r[14] = 0x3da8fcu; f_d2d93c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x16608f8u;
    { uint32_t ea = 0x3da90cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = 0x165eaa4u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x3da920u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da928u; f_d2bbd0(c);
    c->r[1] = 0x16608c4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x3da944u + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->r[14] = 0x3da948u; f_da87c0(c);
    c->r[0] = 0x165f254u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x3da960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da960u; f_9cc110(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x1660880u;
    { uint32_t ea = 0x3da970u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3da970u; f_a103b8(c);
    c->r[1] = 0x1660870u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3da984u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1660864u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x3da994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[14] = 0x3da9a0u; f_a389e0(c);
    c->r[0] = c->r[9];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3da9b0u; f_a389e0(c);
    c->r[0] = c->r[4] + 0xc8u;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x60u; ST8(ea, c->r[5]); }
    c->r[14] = 0x3da9c8u; f_15efdc4(c);
    c->r[0] = 0x28eeu;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x28ecu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x28e8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x28e4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x28e0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x28f0u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3daa00u; f_15efdc4(c);
    c->r[0] = 0x5116u;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x5114u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x5110u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x510cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x5108u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x5118u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3daa38u; f_15efdc4(c);
    c->r[0] = 0x793eu;
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x793cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x7938u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x7934u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x7930u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x7940u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3daa70u; f_15efdc4(c);
    c->r[0] = 0xa158u;
    c->r[1] = 0x198u;
    { uint32_t ea = c->r[4] + 0x78u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3daad8u; f_15efdac(c);
    c->r[0] = 0xa2f0u;
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xa2f4u;
    c->r[1] = 0xa164u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x3daaf4u; f_15efd7c(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3dab24(Cpu *restrict c) {
    FN_ENTER(0x3dab24u);
L_3dab24:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[4] = c->r[0];
    c->r[7] = c->r[1];
    c->r[0] = c->r[13];
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[1] = c->r[4] + 0x3cu;
    c->r[14] = 0x3dab48u; f_d21388(c);
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2fu; ST8(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dab9c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dab68u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dab7cu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3dab9c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_3dabbc; }
    goto L_3dac1c;
L_3dab9c:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x2fu;
    c->pc = c->r[3]; c->r[14] = 0x3dabb4u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3dac1c; }
L_3dabbc:;
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3dac04; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dabd8u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dabecu; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3dac04; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x29u; ST8(ea, c->r[0]); }
    goto L_3dac28;
L_3dac04:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x3dac1cu; rt_dispatch(c);
L_3dac1c:;
    { uint32_t ea = c->r[13] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dac38; }
L_3dac28:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); } }
L_3dac38:;
    c->r[0] = c->r[13];
    c->r[14] = 0x3dac40u; f_d213cc(c);
    c->r[13] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3dac48(Cpu *restrict c) {
    FN_ENTER(0x3dac48u);
L_3dac48:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16605a4u;
    { uint32_t ea = 0x3dac5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x165e754u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x3dac70u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dac74u; f_da8810(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dac84u; f_d2be3c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dac9c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dac9cu; rt_dispatch(c);
L_3dac9c:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x3daca4u; f_a38634(c);
    c->r[0] = c->r[4] + 0x20u;
    c->r[14] = 0x3dacacu; f_a38634(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3dacbc(Cpu *restrict c) {
    FN_ENTER(0x3dacbcu);
L_3dacbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1660530u;
    { uint32_t ea = 0x3dacd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x165e6e0u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x3dace4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dace8u; f_da8810(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dacf8u; f_d2be3c(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dad10; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dad10u; rt_dispatch(c);
L_3dad10:;
    c->r[0] = c->r[4] + 0x3cu;
    c->r[14] = 0x3dad18u; f_a38634(c);
    c->r[0] = c->r[4] + 0x20u;
    c->r[14] = 0x3dad20u; f_a38634(c);
    c->r[0] = 0x16604d0u;
    { uint32_t ea = 0x3dad2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dad2cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3dad4c(Cpu *restrict c) {
    FN_ENTER(0x3dad4cu);
L_3dad4c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x3dad58u; f_3dad6c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x3dad60u; f_3db20c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_3e1c04(c);
}
void f_3dad6c(Cpu *restrict c) {
    FN_ENTER(0x3dad6cu);
L_3dad6c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165e640u;
    { uint32_t ea = 0x3dad84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dad88u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3db1ac; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[4] = 0x41ccu;
    c->r[8] = c->r[13] + 0x20u;
    c->r[9] = c->r[13] + 0x18u;
    c->r[5] = c->r[0] + 0x5cu;
    c->r[11] = c->r[0] + 0x20u;
    c->r[0] = 0x165e60cu;
    { uint32_t ea = 0x3dadb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165e600u;
    { uint32_t ea = 0x3dadc4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x165e5f8u;
    { uint32_t ea = 0x3dadccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_3dadcc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3dae28; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dade4u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_3dae24; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3dae00u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = f_subs(c, c->r[4], c->r[0]);
    c->r[4] = 0x41ccu;
    c->r[0] = f_sbcs(c, c->r[7], c->r[1]);
    if (COND_GE) { goto L_3dae24; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    goto L_3dae30;
L_3dae24:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_3dae28:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3daf34; }
L_3dae30:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dae38u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_3daf2c; }
    c->r[0] = c->r[11];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x3dae54u; f_a389e0(c);
    c->r[0] = c->r[8];
    c->r[1] = c->r[11];
    c->r[14] = 0x3dae60u; f_d21388(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[13] + 0x18u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3daeb0; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dae84u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3dae98u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CS) { goto L_3daeb0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x49u; ST8(ea, c->r[0]); }
    goto L_3daec8;
L_3daeb0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[3]; c->r[14] = 0x3daec8u; rt_dispatch(c);
L_3daec8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[11];
    c->r[14] = 0x3daee4u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3daf08u; f_d2bf40(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x3daf10u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x3daf28u; f_d213cc(c);
    c->r[4] = 0x41ccu;
L_3daf2c:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_3daf34:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[5] = c->r[5] + 0x18u;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_3dadcc; }
    c->r[0] = 0x165e474u;
    { uint32_t ea = 0x3daf50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3daf54u; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3db0f0; }
    c->r[0] = 0x165e444u;
    { uint32_t ea = 0x3daf80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3daf84u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dafa8; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dafa8; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3db0f0; }
L_3dafa8:;
    c->r[0] = 0x165e410u;
    { uint32_t ea = 0x3dafb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dafb8u; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3db0bc; }
L_3dafc8:;
    c->r[0] = 0x165e3f0u;
    { uint32_t ea = 0x3dafd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3dafd8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3db0d8; }
L_3dafe4:;
    c->r[0] = 0x165e3d4u;
    { uint32_t ea = 0x3daff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3daff4u; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_3db01c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3db01c; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LE) { goto L_3db0f0; }
L_3db01c:;
    c->r[0] = 0x165e39cu;
    { uint32_t ea = 0x3db028u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db02cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db04cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3db0f0; }
    c->r[0] = 0x165e364u;
    { uint32_t ea = 0x3db060u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db064u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3db0f0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3db0a8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3db0a8:;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[7]; c->r[14] = 0x3db0b8u; rt_dispatch(c);
    goto L_3db0f0;
L_3db0bc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dafc8; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3db0f0; }
    goto L_3dafc8;
L_3db0d8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3dafe4; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_GE) { goto L_3dafe4; }
L_3db0f0:;
    c->r[0] = 0x165e2c8u;
    { uint32_t ea = 0x3db0fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db100u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3db1ac; }
    c->r[0] = 0x165e2b0u;
    { uint32_t ea = 0x3db114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3db118u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3db1ac; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xa168u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[13] + 0x20u;
    c->r[4] = c->r[1] + c->r[0];
L_3db14c:;
    { uint32_t ea = c->r[4] - 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_3db19c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { { uint32_t ea = c->r[4] - 0x8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], c->r[0]); }
    if (COND_LS) { goto L_3db19c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x3db17cu; f_9c9198(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = f_adds(c, c->r[0], 0x15u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    c->r[0] = f_subs(c, c->r[2], c->r[0]);
    c->r[0] = f_sbcs(c, c->r[3], c->r[1]);
    if (COND_GE) { goto L_3db1b4; }
L_3db19c:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[4] = c->r[4] + 0x18u;
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_LT) { goto L_3db14c; }
L_3db1ac:;
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3db1b4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3db1ac; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
