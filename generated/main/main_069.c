#include "cpu.h"
#include "neon_rt.h"
void f_200690(Cpu *c);
void f_212c20(Cpu *c);
void f_212c5c(Cpu *c);
void f_212c88(Cpu *c);
void f_212cec(Cpu *c);
void f_213c00(Cpu *c);
void f_2140d4(Cpu *c);
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_250b64(Cpu *c);
void f_342a38(Cpu *c);
void f_38e7f8(Cpu *c);
void f_38e930(Cpu *c);
void f_38e958(Cpu *c);
void f_394228(Cpu *c);
void f_399390(Cpu *c);
void f_39945c(Cpu *c);
void f_39b670(Cpu *c);
void f_39c27c(Cpu *c);
void f_39cf50(Cpu *c);
void f_39e234(Cpu *c);
void f_458ffc(Cpu *c);
void f_45f840(Cpu *c);
void f_45f880(Cpu *c);
void f_46e354(Cpu *c);
void f_46e50c(Cpu *c);
void f_46e600(Cpu *c);
void f_475a30(Cpu *c);
void f_476278(Cpu *c);
void f_4772c4(Cpu *c);
void f_477454(Cpu *c);
void f_47c6f8(Cpu *c);
void f_58d694(Cpu *c);
void f_59ab64(Cpu *c);
void f_5a5ed0(Cpu *c);
void f_5a8bb4(Cpu *c);
void f_5a8c04(Cpu *c);
void f_5a8d68(Cpu *c);
void f_5a8e18(Cpu *c);
void f_5a9e54(Cpu *c);
void f_5abb14(Cpu *c);
void f_5ae3b4(Cpu *c);
void f_5c7b7c(Cpu *c);
void f_5cafe8(Cpu *c);
void f_5cb008(Cpu *c);
void f_5cb8d8(Cpu *c);
void f_5ccbe4(Cpu *c);
void f_5ccd50(Cpu *c);
void f_5cce34(Cpu *c);
void f_5cd23c(Cpu *c);
void f_5cd414(Cpu *c);
void f_5ce9dc(Cpu *c);
void f_5cebdc(Cpu *c);
void f_5ceed0(Cpu *c);
void f_5cf048(Cpu *c);
void f_5cf294(Cpu *c);
void f_5d05a4(Cpu *c);
void f_5dd72c(Cpu *c);
void f_5df2a8(Cpu *c);
void f_5df378(Cpu *c);
void f_5f8634(Cpu *c);
void f_5f865c(Cpu *c);
void f_5f8678(Cpu *c);
void f_723150(Cpu *c);
void f_725e44(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3a0(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af3e4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9af6e4(Cpu *c);
void f_9bb638(Cpu *c);
void f_9bdb48(Cpu *c);
void f_9bdb84(Cpu *c);
void f_9bdbb0(Cpu *c);
void f_9bdd54(Cpu *c);
void f_9bdee0(Cpu *c);
void f_9bdee8(Cpu *c);
void f_9bdef0(Cpu *c);
void f_9bdf78(Cpu *c);
void f_9ca854(Cpu *c);
void f_a260d4(Cpu *c);
void f_a26130(Cpu *c);
void f_a261fc(Cpu *c);
void f_a262e8(Cpu *c);
void f_a263f8(Cpu *c);
void f_a2666c(Cpu *c);
void f_a26780(Cpu *c);
void f_a269f4(Cpu *c);
void f_a26c38(Cpu *c);
void f_a273ac(Cpu *c);
void f_a2772c(Cpu *c);
void f_a277c4(Cpu *c);
void f_a278e0(Cpu *c);
void f_a27998(Cpu *c);
void f_a27a80(Cpu *c);
void f_a27ad4(Cpu *c);
void f_a27bbc(Cpu *c);
void f_a27c9c(Cpu *c);
void f_a283a8(Cpu *c);
void f_a2fb08(Cpu *c);
void f_a2fb10(Cpu *c);
void f_a2fb14(Cpu *c);
void f_a31b90(Cpu *c);
void f_a38538(Cpu *c);
void f_a38574(Cpu *c);
void f_a385e8(Cpu *c);
void f_a38634(Cpu *c);
void f_a38798(Cpu *c);
void f_a870b8(Cpu *c);
void f_a87100(Cpu *c);
void f_a871d4(Cpu *c);
void f_a871d8(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a877e4(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_a878e8(Cpu *c);
void f_d38f14(Cpu *c);
void f_d38f50(Cpu *c);
void f_d3927c(Cpu *c);
void f_d392b8(Cpu *c);
void f_d39448(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdb8(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efe00(Cpu *c);
void f_15efe0c(Cpu *c);
void f_15efe30(Cpu *c);
void f_15efe3c(Cpu *c);
void f_15efef0(Cpu *c);
void f_15eff08(Cpu *c);
void f_15eff38(Cpu *c);
void f_15effa4(Cpu *c);
void f_15effb0(Cpu *c);
void f_15f004c(Cpu *c);
void f_5c6294(Cpu *restrict c) {
    FN_ENTER(0x5c6294u);
L_5c6294:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1472910u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x5c62acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c62b0u; f_458ffc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5c62f8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5c62ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c62f8; }
    c->r[2] = 0x3328u;
    { uint32_t ea = c->r[4] + 0xb17u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x5e0u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ 0x1u;
    { uint32_t ea = c->r[1] + 0xb18u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb17u; ST8(ea, c->r[0]); }
L_5c62f8:;
    c->r[0] = 0x14728b4u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x5c6308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c630cu; f_458ffc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5c6354; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5c6328u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c6354; }
    c->r[2] = 0x3328u;
    { uint32_t ea = c->r[4] + 0xb17u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x5e0u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ 0x1u;
    { uint32_t ea = c->r[1] + 0xb18u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb17u; ST8(ea, c->r[0]); }
L_5c6354:;
    c->r[0] = 0x1472858u;
    c->r[1] = 0x2u;
    { uint32_t ea = 0x5c6364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6368u; f_458ffc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5c63b0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5c6384u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c63b0; }
    c->r[2] = 0x3328u;
    { uint32_t ea = c->r[4] + 0xb17u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x5e0u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ 0x1u;
    { uint32_t ea = c->r[1] + 0xb18u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb17u; ST8(ea, c->r[0]); }
L_5c63b0:;
    c->r[0] = 0x14727fcu;
    c->r[1] = 0x3u;
    { uint32_t ea = 0x5c63c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c63c4u; f_458ffc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5c640c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5c63e0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[2] = 0x3328u;
    { uint32_t ea = c->r[4] + 0xb17u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[0];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[2] + 0x5e0u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[2] = c->r[2] ^ 0x1u;
    { uint32_t ea = c->r[1] + 0xb18u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb17u; ST8(ea, c->r[0]); }
L_5c640c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c6420(Cpu *restrict c) {
    FN_ENTER(0x5c6420u);
L_5c6420:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1472948u;
    { uint32_t ea = 0x5c6438u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c643cu; f_476278(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c680c; }
    c->r[0] = 0x14743d4u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5c6454u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14743ccu;
    { uint32_t ea = 0x5c645cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x14743c4u;
    { uint32_t ea = 0x5c6464u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1472764u;
    { uint32_t ea = 0x5c646cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x14743b4u;
    { uint32_t ea = 0x5c6474u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_5c6470:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x5c6480u; f_39b670(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[4] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[4], 0x0u); }
    if (COND_EQ) { goto L_5c6558; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c649cu; f_39cf50(c);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_5c64ac; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5c6550;
L_5c64ac:;
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c64b8u; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5c6558; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x95u);
    if (COND_HI) { goto L_5c654c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1] + 0xad8u; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_EQ) { goto L_5c6510; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[12] + 0x2u;
    c->r[4] = 0x0u;
L_5c64f4:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_EQ) { goto L_5c653c; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { goto L_5c64f4; }
L_5c6510:;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[12] + c->r[0]; ST16(ea, c->r[2]); c->r[12] = ea; }
    { uint32_t ea = c->r[12] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xb10u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + 0xb10u; ST8(ea, c->r[0]); }
    goto L_5c654c;
L_5c653c:;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
L_5c654c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5c6550:;
    c->r[1] = c->r[5];
    c->r[14] = 0x5c6558u; f_39c27c(c);
L_5c6558:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x28u);
    if (COND_NE) { goto L_5c6470; }
    c->r[0] = 0x1472640u;
    c->r[9] = 0x0u;
    c->r[5] = 0x60eu;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5c657cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x14727a4u;
    { uint32_t ea = 0x5c6584u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x147263cu;
    { uint32_t ea = 0x5c6594u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5c6590:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x5c659cu; f_458ffc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5c6800; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x5c65b8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c6800; }
    c->r[0] = 0x3328u;
    c->r[1] = 0xb12u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[6] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (uint32_t)(uint8_t)(c->r[4]);
    c->r[11] = c->r[0] + c->r[1];
    c->r[1] = 0xb14u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_5c65fc:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[4] << 2);
    c->r[10] = c->r[8];
    { uint32_t ea = c->r[10] + c->r[5]; uint32_t v = LD16(ea); c->r[10] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c671c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c661cu; f_394228(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c671c; }
    { uint32_t ea = c->r[0] + 0x12u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c66a8; }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_5c671c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[1] + 0xae8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { goto L_5c6680; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0x2u;
    c->r[7] = 0x0u;
L_5c6664:;
    { uint32_t ea = c->r[2] - 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_EQ) { goto L_5c6700; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[2] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5c6664; }
L_5c6680:;
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = c->r[3] | (c->r[2] << 16);
    { uint32_t ea = c->r[1] + c->r[0]; ST16(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    goto L_5c6714;
L_5c66a8:;
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5c671c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xaf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[12] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = (c->r[3] << 2);
    { uint32_t ea = c->r[0] + c->r[3]; ST16(ea, c->r[12]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    goto L_5c671c;
L_5c6700:;
    c->r[0] = 0x610u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
L_5c6714:;
    c->r[5] = 0x60eu;
    c->r[7] = c->r[12];
L_5c671c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_NE) { goto L_5c65fc; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c673cu; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5c67f4; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x604u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xaf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
L_5c67f4:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[4] + 0x1u;
L_5c6800:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_NE) { goto L_5c6590; }
L_5c680c:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5c6838(Cpu *restrict c) {
    FN_ENTER(0x5c6838u);
L_5c6838:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[0] = 0x1473fd4u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5c6854u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1472374u;
    { uint32_t ea = 0x5c685cu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x14724c4u;
    { uint32_t ea = 0x5c6864u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1473fbcu;
    { uint32_t ea = 0x5c686cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_5c6868:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x5c6878u; f_39b670(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5c6928; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6894u; f_394228(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5c6928; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[14] = 0x5c68b8u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c68d0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5c68c8u; f_38e7f8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5c691c; }
L_5c68d0:;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_5c691c; }
    { uint32_t ea = c->r[4] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
L_5c68e4:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x95u);
    if (COND_HI) { goto L_5c691c; }
    { uint32_t ea = c->r[4] + 0xb08u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0xb16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_5c68e4; }
L_5c691c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x5c6928u; f_39c27c(c);
L_5c6928:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x28u);
    if (COND_NE) { goto L_5c6868; }
    c->r[0] = 0x1472278u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x5c6944u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1472280u;
    { uint32_t ea = 0x5c6950u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x14723d0u;
    { uint32_t ea = 0x5c6958u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_5c6958:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6968u; f_458ffc(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5c6a58; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x5c6984u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c6a58; }
    c->r[0] = 0x3328u;
    c->r[9] = 0x0u;
    c->r[8] = c->r[6] + c->r[0];
L_5c6998:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + (c->r[9] << 2);
    c->r[0] = 0x60eu;
    c->r[11] = c->r[10];
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD16(ea); c->r[11] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c6a4c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c69bcu; f_394228(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5c6a4c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c69e4u; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c69fc; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5c69f4u; f_38e7f8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5c6a4c; }
L_5c69fc:;
    c->r[0] = 0x610u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_5c6a4c; }
    { uint32_t ea = c->r[4] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
L_5c6a14:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x95u);
    if (COND_HI) { goto L_5c6a4c; }
    { uint32_t ea = c->r[4] + 0xb08u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0xb16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_5c6a14; }
L_5c6a4c:;
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x8u);
    if (COND_NE) { goto L_5c6998; }
L_5c6a58:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x4u);
    if (COND_NE) { goto L_5c6958; }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5c6a88(Cpu *restrict c) {
    FN_ENTER(0x5c6a88u);
L_5c6a88:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[4] = c->r[0];
    c->r[0] = 0x1473d7cu;
    c->r[5] = 0x20u;
    c->r[8] = 0x0u;
    c->r[10] = c->r[13] + 0x8u;
    { uint32_t ea = 0x5c6aacu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x1473d68u;
    { uint32_t ea = 0x5c6ab4u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1473d6cu;
    { uint32_t ea = 0x5c6abcu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_5c6ab8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x5c6ac8u; f_39b670(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5c6b44; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x5c6af8u; f_39945c(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_5c6b38; }
    { uint32_t ea = c->r[4] + 0xb11u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xae0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xb11u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xae0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xb11u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xb11u; ST8(ea, c->r[0]); }
L_5c6b38:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x5c6b44u; f_39c27c(c);
L_5c6b44:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x28u);
    if (COND_NE) { goto L_5c6ab8; }
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5c6b64(Cpu *restrict c) {
    FN_ENTER(0x5c6b64u);
L_5c6b64:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x95u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0] + 0xad8u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5c6ba8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[3] = c->r[12] + 0x2u;
    c->r[4] = 0x0u;
L_5c6b8c:;
    { uint32_t ea = c->r[3] - 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_EQ) { goto L_5c6bd0; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[3] = c->r[3] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_CC) { goto L_5c6b8c; }
L_5c6ba8:;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 2);
    c->r[1] = c->r[1] | (c->r[3] << 16);
    { uint32_t ea = c->r[12] + c->r[2]; ST16(ea, c->r[1]); c->r[12] = ea; }
    { uint32_t ea = c->r[12] + 0x2u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0xb10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5c6bd0:;
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[3]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c6be4(Cpu *restrict c) {
    FN_ENTER(0x5c6be4u);
L_5c6be4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[12] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[12] + 0xb12u; uint32_t v = LD8(ea); c->r[12] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x7u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0] + 0xae8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_EQ) { goto L_5c6c30; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[14] + 0x2u;
    c->r[4] = 0x0u;
L_5c6c14:;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_5c6c58; }
    c->r[4] = c->r[4] + 0x1u;
    c->r[1] = c->r[1] + 0x4u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CC) { goto L_5c6c14; }
L_5c6c30:;
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = (c->r[3] << 2);
    c->r[1] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[14] + c->r[2]; ST16(ea, c->r[1]); c->r[14] = ea; }
    { uint32_t ea = c->r[14] + 0x2u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[12]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5c6c58:;
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c6c6c(Cpu *restrict c) {
    FN_ENTER(0x5c6c6cu);
L_5c6c6c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1471f44u;
    c->r[4] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = 0x5c6c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6c90u; f_394228(c);
    c->r[7] = c->r[0];
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5c6d34; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_5c6ce4; }
    c->r[0] = 0x1472060u;
    c->r[1] = 0x4u;
    c->r[2] = 0x1u;
    c->r[8] = 0x1u;
    { uint32_t ea = 0x5c6cc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6cccu; f_5a5ed0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c6ce4; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5c6cdcu; f_38e7f8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5c6d34; }
L_5c6ce4:;
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_5c6d34; }
    { uint32_t ea = c->r[5] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
L_5c6cfc:;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[1], 0x95u);
    if (COND_HI) { goto L_5c6d34; }
    { uint32_t ea = c->r[5] + 0xb08u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[4]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xb16u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0xb16u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LT) { goto L_5c6cfc; }
L_5c6d34:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5c6d44(Cpu *restrict c) {
    FN_ENTER(0x5c6d44u);
L_5c6d44:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1472028u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5c6d58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6d5cu; f_475a30(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5c6d8c; }
    c->r[0] = 0x1472070u;
    { uint32_t ea = 0x5c6d70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[0] + 0xb17u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x1471e38u;
    { uint32_t ea = 0x5c6d84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_45f840(c);
L_5c6d8c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c6db4; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xfu);
    if (COND_NE) { goto L_5c6db4; }
    c->r[0] = 0x1471e10u;
    { uint32_t ea = 0x5c6dacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_45f880(c);
L_5c6db4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c6dcc(Cpu *restrict c) {
    FN_ENTER(0x5c6dccu);
L_5c6dcc:;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[0] + 0xb18u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_5c6dd8(Cpu *restrict c) {
    FN_ENTER(0x5c6dd8u);
L_5c6dd8:;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { c->r[0] = 0x1u; }
    if (COND_HI) { return; }
    c->r[0] = 0x1263c00u;
    c->r[0] = 0x5c6df0u + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5c6df8(Cpu *restrict c) {
    FN_ENTER(0x5c6df8u);
L_5c6df8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1471f1cu;
    c->r[4] = c->r[2];
    { uint32_t ea = 0x5c6e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6e10u; f_5a8bb4(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x1471ef8u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = 0x5c6e30u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6e34u; f_5a8e18(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6e40u; f_5a8c04(c);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c6e50(Cpu *restrict c) {
    FN_ENTER(0x5c6e50u);
L_5c6e50:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c6e88; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_5c6e9c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5c6f74; }
    c->r[0] = 0xb1au;
    c->r[1] = 0xc8u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[6] + c->r[0];
    c->r[14] = 0x5c6e84u; f_15eff08(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5c6e88:;
    c->r[0] = 0xb1au;
    c->r[1] = 0xc8u;
    c->r[0] = c->r[6] + c->r[0];
    c->r[14] = 0x5c6e98u; f_15efdac(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5c6e9c:;
    c->r[0] = 0x14724e4u;
    c->r[1] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0x5c6eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6eb4u; f_342a38(c);
    c->r[8] = c->r[0];
    c->r[0] = 0xb1au;
    c->r[5] = c->r[6] + c->r[0];
    c->r[0] = 0x1473950u;
    { uint32_t ea = 0x5c6eccu + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_5c6ec8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5c6ed0u; f_58d694(c);
    c->r[7] = c->r[0];
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5c6f64; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5c6ee8u; f_38e930(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x5c6ef4u; f_38e958(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5c6f2c; }
    { uint32_t ea = c->r[6] + 0x12u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5c6f64; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c6f1cu; f_399390(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    if (COND_GT) { c->r[2] = 0x1u; }
    goto L_5c6f64;
L_5c6f2c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_5c6f64; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t r = c->r[1] & 0x1fu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5c6f64; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[1] = c->r[8];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[2] = c->r[1] & c->r[0];
L_5c6f64:;
    { uint32_t ea = c->r[5] + c->r[4]; ST8(ea, c->r[2]); }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0xc8u);
    if (COND_NE) { goto L_5c6ec8; }
L_5c6f74:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5c6f80(Cpu *restrict c) {
    FN_ENTER(0x5c6f80u);
L_5c6f80:;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x5c6f98u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5c6facu: goto L_5c6fac; case 0x5c6fc0u: goto L_5c6fc0; case 0x5c6fd4u: goto L_5c6fd4; case 0x5c7008u: goto L_5c7008; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5c6fac:;
    c->r[0] = 0x1471e28u;
    { uint32_t ea = 0x5c6fb8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5c7018;
L_5c6fc0:;
    c->r[0] = 0x1471e14u;
    { uint32_t ea = 0x5c6fccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb13u; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5c7018;
L_5c6fd4:;
    c->r[0] = 0x1471e00u;
    { uint32_t ea = 0x5c6fe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb12u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xb13u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + 0x7u;
    c->r[1] = c->r[1] + 0x7u;
    c->r[0] = c->r[0] + 0x7u;
    c->r[2] = (c->r[2] >> 3);
    c->r[1] = c->r[2] + (c->r[1] >> 3);
    c->r[0] = c->r[1] + (c->r[0] >> 3);
    return;
L_5c7008:;
    c->r[0] = 0x1471dccu;
    { uint32_t ea = 0x5c7014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb12u; uint32_t v = LD8(ea); c->r[0] = v; }
L_5c7018:;
    c->r[0] = c->r[0] + 0x7u;
    c->r[0] = (c->r[0] >> 3);
    return;
}
void f_5c7034(Cpu *restrict c) {
    FN_ENTER(0x5c7034u);
L_5c7034:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1471ce0u;
    { uint32_t ea = 0x5c7048u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c704cu; f_5a8d68(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x5u);
    if (COND_EQ) { goto L_5c7068; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { c->r[8] = 0x2u; }
    goto L_5c706c;
L_5c7068:;
    c->r[8] = 0x3u;
L_5c706c:;
    c->r[0] = 0x1471ca8u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5c7080u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7084u; f_5abb14(c);
    c->r[14] = 0x5c7088u; f_250b64(c);
    c->r[1] = c->r[0];
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_5c7118; }
    { uint32_t ea = c->r[4] + 0xad4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_5c7118; }
    c->r[6] = 0x0u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[1]);
L_5c70b0:;
    c->r[1] = c->r[6];
    c->r[14] = 0x5c70b8u; f_59ab64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c70d8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[7] = c->r[0]; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    goto L_5c70dc;
L_5c70d8:;
    c->r[0] = 0x4u;
L_5c70dc:;
    c->r[0] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5c7104; }
    { uint32_t ea = c->r[4] + 0xad4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_5c70b0; }
    goto L_5c7120;
L_5c7104:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5c7120; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[0] = c->r[7] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD16(ea); c->r[6] = v; }
L_5c7118:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5c7120:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5c7134(Cpu *restrict c) {
    FN_ENTER(0x5c7134u);
L_5c7134:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1471be0u;
    { uint32_t ea = 0x5c7148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c714cu; f_5a8d68(c);
    c->r[8] = c->r[0];
    (void)f_subs(c, c->r[8], 0x5u);
    if (COND_EQ) { goto L_5c7168; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { c->r[8] = 0x2u; }
    goto L_5c716c;
L_5c7168:;
    c->r[8] = 0x3u;
L_5c716c:;
    c->r[0] = 0x1471ba8u;
    c->r[1] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5c7180u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7184u; f_5abb14(c);
    c->r[14] = 0x5c7188u; f_250b64(c);
    c->r[1] = c->r[0];
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_5c7218; }
    { uint32_t ea = c->r[4] + 0xad4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_5c7218; }
    c->r[6] = 0x0u;
    c->r[5] = (uint32_t)(uint8_t)(c->r[1]);
L_5c71b0:;
    c->r[1] = c->r[6];
    c->r[14] = 0x5c71b8u; f_59ab64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c71d8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[7] = c->r[0]; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    goto L_5c71dc;
L_5c71d8:;
    c->r[0] = 0x4u;
L_5c71dc:;
    c->r[0] = c->r[0] | 0x4u;
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5c7204; }
    { uint32_t ea = c->r[4] + 0xad4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_5c71b0; }
    goto L_5c7220;
L_5c7204:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5c7220; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[8]);
    c->r[0] = c->r[7] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] + 0xeu; uint32_t v = LD16(ea); c->r[6] = v; }
L_5c7218:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5c7220:;
    c->r[6] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5c7234(Cpu *restrict c) {
    FN_ENTER(0x5c7234u);
L_5c7234:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14735e0u;
    { uint32_t ea = 0x5c7248u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c724cu; f_39e234(c);
    c->r[0] = 0x1471b2cu;
    { uint32_t ea = c->r[4] + 0xbe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5c725cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xbecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1471ab4u;
    { uint32_t ea = 0x5c7274u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7278u; f_5ae3b4(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c7298; }
    c->r[0] = 0x1471a98u;
    { uint32_t ea = 0x5c7290u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7294u; f_5a9e54(c);
    c->r[1] = c->r[0];
L_5c7298:;
    c->r[0] = 0x1471ae4u;
    { uint32_t ea = 0x5c72a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c72a8u; f_723150(c);
    c->r[0] = 0x1471a74u;
    { uint32_t ea = 0x5c72b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c72b8u; f_5ae3b4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c7300; }
    c->r[0] = 0x1471aa4u;
    c->r[1] = 0xd76u;
    { uint32_t ea = 0x5c72d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0] + 0xd78u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_5c7300; }
    c->r[0] = 0x1471a90u;
    c->r[3] = 0x1u;
    { uint32_t ea = 0x5c72f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_725e44(c);
L_5c7300:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c7324(Cpu *restrict c) {
    FN_ENTER(0x5c7324u);
L_5c7324:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[4] + 0xbf2u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_5c73e8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_5c73ac; }
    c->r[1] = 0x16bcu;
    c->r[0] = 0x1c20u;
    c->r[2] = 0x564u;
    c->r[5] = c->r[4] + c->r[1];
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[5];
    c->r[14] = 0x5c736cu; f_15efdd0(c);
    c->r[0] = 0x1158u;
    c->r[2] = 0x564u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x5c7384u; f_15efdd0(c);
    c->r[0] = 0xbf4u;
    c->r[2] = 0x564u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x5c739cu; f_15efdd0(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x564u;
    c->r[14] = 0x5c73a8u; f_15efd7c(c);
    c->r[0] = 0x0u;
L_5c73ac:;
    c->r[1] = 0x564u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[0] = 0xbf4u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0x5c73c4u; f_46e600(c);
    c->r[0] = 0x1154u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[9]); }
    c->r[0] = 0x1155u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0x1156u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xbf2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xbf2u; ST8(ea, c->r[0]); }
L_5c73e8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5c73ec(Cpu *restrict c) {
    FN_ENTER(0x5c73ecu);
L_5c73ec:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[4] + 0xbf3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_5c74d0; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_NE) { goto L_5c7474; }
    c->r[1] = 0x2c6cu;
    c->r[0] = 0x31e0u;
    c->r[2] = 0x574u;
    c->r[5] = c->r[4] + c->r[1];
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[5];
    c->r[14] = 0x5c7434u; f_15efdd0(c);
    c->r[0] = 0x26f8u;
    c->r[2] = 0x574u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x5c744cu; f_15efdd0(c);
    c->r[0] = 0x2184u;
    c->r[2] = 0x574u;
    c->r[5] = c->r[4] + c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x5c7464u; f_15efdd0(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x574u;
    c->r[14] = 0x5c7470u; f_15efd7c(c);
    c->r[0] = 0x0u;
L_5c7474:;
    c->r[1] = 0x574u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[1] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[5] = (uint32_t)p; }
    c->r[0] = 0x2184u;
    c->r[1] = c->r[7];
    c->r[0] = c->r[5] + c->r[0];
    c->r[14] = 0x5c748cu; f_46e600(c);
    c->r[0] = 0x26e4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[9]); }
    c->r[0] = 0x26e5u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0x26e6u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[10]); }
    c->r[0] = 0x26e7u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x26e8u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x26e9u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xbf3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xbf3u; ST8(ea, c->r[0]); }
L_5c74d0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5c74d4(Cpu *restrict c) {
    FN_ENTER(0x5c74d4u);
L_5c74d4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[5] + 0xbf3u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[2] = 0x574u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[0] >> 0) * (int32_t)(int16_t)(c->r[2] >> 0)) + (int32_t)c->r[5]; if (p != (int32_t)p) c->qf = 1; c->r[7] = (uint32_t)p; }
    c->r[0] = 0x2184u;
    c->r[0] = c->r[7] + c->r[0];
    c->r[14] = 0x5c7504u; f_46e600(c);
    c->r[0] = 0x26e6u;
    c->r[1] = 0x0u;
    c->r[2] = 0x26e9u;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[7] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x26e7u;
    { uint32_t ea = c->r[7] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x26e8u;
    { uint32_t ea = c->r[7] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[0] + c->r[2]; ST8(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[5] + 0xbf3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0xbf3u; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_5c75b0; }
    c->r[1] = 0x3328u;
    c->r[2] = 0x58au;
    c->r[3] = 0x588u;
    c->r[6] = 0x586u;
    c->r[5] = 0x584u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x582u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[12] = v; }
    c->r[2] = 0x580u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + c->r[4]; uint32_t v = LD16(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[2] = 0x26eau;
    { uint32_t ea = c->r[7] + c->r[2]; ST16(ea, c->r[1]); }
    c->r[1] = 0x26ecu;
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[4]); }
    c->r[1] = 0x26eeu;
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[5]); }
    c->r[1] = 0x26f0u;
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[6]); }
    c->r[1] = 0x26f2u;
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x26f4u;
    { uint32_t ea = c->r[7] + c->r[1]; ST16(ea, c->r[12]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_5c75b0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5c75b4(Cpu *restrict c) {
    FN_ENTER(0x5c75b4u);
L_5c75b4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[3] = 0x375cu;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    c->r[3] = 0x2b6cu;
    c->r[14] = c->r[0] - c->r[3];
    c->r[3] = 0x2b64u;
    c->r[12] = c->r[14] + c->r[12];
    { uint32_t ea = c->r[12] + c->r[3]; ST8(ea, c->r[1]); }
    c->r[3] = 0x2b68u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[14] + c->r[1];
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c75f4(Cpu *restrict c) {
    FN_ENTER(0x5c75f4u);
L_5c75f4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x560u;
    c->r[4] = c->r[0];
    c->r[0] = 0x2b6cu;
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    c->r[14] = 0x5c761cu; f_46e354(c);
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = c->r[5];
    c->r[14] = 0x5c7628u; f_46e600(c);
    c->r[0] = 0x564u;
    c->r[7] = 0x4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x2b68u;
    { uint32_t ea = c->r[4] + 0x566u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2b64u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5c7650u; f_46e50c(c);
    c->r[14] = 0x5c7654u; f_46e354(c);
    c->r[0] = 0x568u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c7664u; f_46e600(c);
    c->r[0] = 0xac8u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x2b69u;
    { uint32_t ea = c->r[4] + 0xacau; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2b65u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5c7688u; f_46e50c(c);
    c->r[14] = 0x5c768cu; f_46e354(c);
    c->r[0] = 0xaccu;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c769cu; f_46e600(c);
    c->r[0] = 0x102cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x102eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2b6au;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2b66u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5c76c4u; f_46e50c(c);
    c->r[14] = 0x5c76c8u; f_46e354(c);
    c->r[0] = 0x1030u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c76d8u; f_46e600(c);
    c->r[0] = 0x1590u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[7]); }
    c->r[0] = 0x1592u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2b6bu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2b67u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5c7700u; f_46e50c(c);
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x5c770cu; f_46e354(c);
    c->r[0] = 0x1594u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c771cu; f_46e600(c);
    c->r[0] = 0x1af4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0x1b02u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1afeu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1afau;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1af6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1b05u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1b01u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x1afdu;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x1af9u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x1af5u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5c77a4u; f_46e50c(c);
    c->r[14] = 0x5c77a8u; f_46e354(c);
    c->r[0] = 0x1b08u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c77b8u; f_46e600(c);
    c->r[0] = 0x2068u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0x2076u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2072u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x206eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x206au;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2079u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x2075u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x2071u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x206du;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x2069u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5c7840u; f_46e50c(c);
    c->r[14] = 0x5c7844u; f_46e354(c);
    c->r[0] = 0x207cu;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c7854u; f_46e600(c);
    c->r[0] = 0x25dcu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0x25eau;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x25e6u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x25e2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x25deu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x25edu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x25e9u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x25e5u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x25e1u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = 0x25ddu;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5c78dcu; f_46e50c(c);
    c->r[14] = 0x5c78e0u; f_46e354(c);
    c->r[0] = 0x25f0u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + c->r[0];
    c->r[14] = 0x5c78f0u; f_46e600(c);
    c->r[0] = 0x2b50u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = 0x2b5du;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); c->r[4] = ea; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] - 0x4u; ST8(ea, c->r[6]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] - 0x4u; ST8(ea, c->r[6]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] - 0x4u; ST8(ea, c->r[6]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0xfu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xeu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xdu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xbu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xau; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x9u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5c7948u; f_46e50c(c);
    c->r[13] = c->r[13] + 0x560u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5c7950(Cpu *restrict c) {
    FN_ENTER(0x5c7950u);
L_5c7950:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5c7954(Cpu *restrict c) {
    FN_ENTER(0x5c7954u);
L_5c7954:;
    c->r[0] = 0x1475104u;
    { uint32_t ea = 0x5c7960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5c7964(Cpu *restrict c) {
    FN_ENTER(0x5c7964u);
L_5c7964:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5c7968(Cpu *restrict c) {
    FN_ENTER(0x5c7968u);
L_5c7968:;
    c->r[1] = 0x14750f8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5c7978u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1471458u;
    { uint32_t ea = 0x5c7988u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_5c7994(Cpu *restrict c) {
    FN_ENTER(0x5c7994u);
L_5c7994:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x14750c8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5c79a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1471428u;
    { uint32_t ea = 0x5c79b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x5c79bcu; f_a8784c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a877e4(c);
}
void f_5c79cc(Cpu *restrict c) {
    FN_ENTER(0x5c79ccu);
L_5c79cc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[10] = c->r[0];
    c->r[8] = c->r[1];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_CS) { goto L_5c7a50; }
    c->r[0] = 0x1471168u;
    { uint32_t ea = 0x5c79f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c79f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[8] << 3);
    c->pc = c->r[3]; c->r[14] = 0x5c7a08u; rt_dispatch(c);
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_5c7b64; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c7aa8; }
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
L_5c7a28:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + c->r[4];
    c->r[1] = c->r[1] + c->r[4];
    c->r[14] = 0x5c7a38u; f_5c7b7c(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[4] = c->r[4] + 0x8u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_5c7a28; }
    goto L_5c7aac;
L_5c7a50:;
    if (COND_LS) { goto L_5c7b68; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[7] = c->r[5] + (c->r[8] << 3);
    if (COND_NE) { c->r[5] = c->r[5] + (c->r[0] << 3); }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_5c7b64; }
    c->r[0] = 0x14710e4u;
    { uint32_t ea = 0x5c7a78u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_5c7a74:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5c7a98; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5c7a88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5c7a98u; rt_dispatch(c);
L_5c7a98:;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_5c7a74; }
    goto L_5c7b64;
L_5c7aa8:;
    c->r[0] = 0x0u;
L_5c7aac:;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_CS) { goto L_5c7ad4; }
    c->r[4] = c->r[9] + (c->r[0] << 3);
    c->r[5] = c->r[8] - c->r[0];
L_5c7abc:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0x5c7ac8u; f_5c7b7c(c);
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[4] = c->r[4] + 0x8u;
    if (COND_NE) { goto L_5c7abc; }
L_5c7ad4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5c7af4; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[7] + (c->r[0] << 3);
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_5c7b00; }
    goto L_5c7b3c;
L_5c7af4:;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_5c7b3c; }
L_5c7b00:;
    c->r[0] = 0x1471050u;
    { uint32_t ea = 0x5c7b0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
L_5c7b08:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5c7b2c; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5c7b1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x5c7b2cu; rt_dispatch(c);
L_5c7b2c:;
    c->r[7] = c->r[7] + 0x8u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_NE) { goto L_5c7b08; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5c7b3c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5c7b60; }
    c->r[0] = 0x147100cu;
    { uint32_t ea = 0x5c7b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7b50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x5c7b60u; rt_dispatch(c);
L_5c7b60:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[9]); }
L_5c7b64:;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[8]); }
L_5c7b68:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5c7b7c(Cpu *restrict c) {
    FN_ENTER(0x5c7b7cu);
L_5c7b7c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_5c7c8c; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[1] = c->r[5];
    if (COND_NE) { c->r[1] = c->r[1] + (c->r[2] << 2); }
    c->r[10] = c->r[1] - c->r[5];
    (void)f_subs(c, c->r[0], (uint32_t)((int32_t)c->r[10] >> 2));
    if (COND_EQ) { goto L_5c7c8c; }
    c->r[0] = 0x1470f94u;
    c->r[9] = (uint32_t)((int32_t)c->r[10] >> 2);
    { uint32_t ea = 0x5c7bc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7bc8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x5c7bdcu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5c7c2c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c7c34; }
    c->r[0] = 0x0u;
L_5c7bf8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[7] = c->r[6];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = c->r[3] | (c->r[1] << 16);
    { uint32_t ea = c->r[7] + c->r[2]; ST16(ea, c->r[3]); c->r[7] = ea; }
    { uint32_t ea = c->r[7] + 0x2u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5c7bf8; }
    goto L_5c7c38;
L_5c7c2c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_5c7c78;
L_5c7c34:;
    c->r[1] = 0x0u;
L_5c7c38:;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_CS) { goto L_5c7c4c; }
    c->r[0] = c->r[6] + (c->r[1] << 2);
    c->r[1] = c->r[10] - (c->r[1] << 2);
    c->r[14] = 0x5c7c4cu; f_15efdac(c);
L_5c7c4c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5c7c74; }
    c->r[0] = 0x1470ef8u;
    { uint32_t ea = 0x5c7c64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c7c64u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x5c7c74u; rt_dispatch(c);
L_5c7c74:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
L_5c7c78:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5c7c8cu; f_15eff38(c);
L_5c7c8c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5c7c98(Cpu *restrict c) {
    FN_ENTER(0x5c7c98u);
L_5c7c98:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14c4254u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x5c7cbcu + c->r[0];
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
    c->r[14] = 0x5c7d04u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5c7d1cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5c7d34u; f_15efda0(c);
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
    c->r[1] = 0x14711b0u;
    c->r[0] = 0x1474cc8u;
    c->r[3] = 0x3768u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5c7d94u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x119bd62u;
    { uint32_t ea = 0x5c7d9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c7da0u + c->r[1];
    c->r[14] = 0x5c7da0u; f_9aedcc(c);
    c->r[1] = 0x1474cc0u;
    c->r[2] = 0x895au;
    c->r[3] = 0x895bu;
    c->r[5] = 0x895cu;
    c->r[4] = 0x895du;
    { uint32_t ea = 0x5c7dbcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1474ca8u;
    c->r[1] = 0x86d4u;
    { uint32_t ea = 0x5c7dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x86d5u;
    c->r[12] = c->r[0] + 0xaa0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86d6u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86d7u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86d8u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86d9u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86dau;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86dbu;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86dcu;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86ddu;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86deu;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86dfu;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e0u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e1u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e2u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e3u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e4u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e5u;
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e6u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e7u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e8u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86e9u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86eau;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86ebu;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86ecu;
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86edu;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86eeu;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86efu;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f0u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f1u;
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f2u;
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f3u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f4u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f5u;
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f6u;
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f7u;
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f8u;
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86f9u;
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86fau;
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86fbu;
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x86fcu;
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86fdu;
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86feu;
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x86ffu;
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8700u;
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8701u;
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8702u;
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8703u;
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8704u;
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8705u;
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8706u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8707u;
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8708u;
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8709u;
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x870au;
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x870bu;
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x870cu;
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x870du;
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x870eu;
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x870fu;
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8710u;
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8711u;
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8712u;
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8713u;
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8714u;
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8715u;
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8716u;
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8717u;
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8718u;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8719u;
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[1]); }
    c->r[1] = 0x871au;
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x871bu;
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x871cu;
    { uint32_t ea = c->r[0] + 0x120u; ST32(ea, c->r[1]); }
    c->r[1] = 0x871du;
    { uint32_t ea = c->r[0] + 0x124u; ST32(ea, c->r[1]); }
    c->r[1] = 0x871eu;
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[1]); }
    c->r[1] = 0x871fu;
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8720u;
    { uint32_t ea = c->r[0] + 0x130u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8721u;
    { uint32_t ea = c->r[0] + 0x134u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8722u;
    { uint32_t ea = c->r[0] + 0x138u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8723u;
    { uint32_t ea = c->r[0] + 0x13cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8724u;
    { uint32_t ea = c->r[0] + 0x140u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8725u;
    { uint32_t ea = c->r[0] + 0x144u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8726u;
    { uint32_t ea = c->r[0] + 0x148u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8727u;
    { uint32_t ea = c->r[0] + 0x14cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8728u;
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8729u;
    { uint32_t ea = c->r[0] + 0x154u; ST32(ea, c->r[1]); }
    c->r[1] = 0x872au;
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[1]); }
    c->r[1] = 0x872bu;
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x872cu;
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[1]); }
    c->r[1] = 0x872du;
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[1]); }
    c->r[1] = 0x872eu;
    { uint32_t ea = c->r[0] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x872fu;
    { uint32_t ea = c->r[0] + 0x16cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8730u;
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8731u;
    { uint32_t ea = c->r[0] + 0x174u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8732u;
    { uint32_t ea = c->r[0] + 0x178u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8733u;
    { uint32_t ea = c->r[0] + 0x17cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8734u;
    { uint32_t ea = c->r[0] + 0x180u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8735u;
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8736u;
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8737u;
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8738u;
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8739u;
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[1]); }
    c->r[1] = 0x873au;
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[1]); }
    c->r[1] = 0x873bu;
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x873cu;
    { uint32_t ea = c->r[0] + 0x1a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x873du;
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x873eu;
    { uint32_t ea = c->r[0] + 0x1a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x873fu;
    { uint32_t ea = c->r[0] + 0x1acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8740u;
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8741u;
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8742u;
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8743u;
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8744u;
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8745u;
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8746u;
    { uint32_t ea = c->r[0] + 0x1c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8747u;
    { uint32_t ea = c->r[0] + 0x1ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8748u;
    { uint32_t ea = c->r[0] + 0x1d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8749u;
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x874au;
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x874bu;
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x874cu;
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x874du;
    { uint32_t ea = c->r[0] + 0x1e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x874eu;
    { uint32_t ea = c->r[0] + 0x1e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x874fu;
    { uint32_t ea = c->r[0] + 0x1ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8750u;
    { uint32_t ea = c->r[0] + 0x1f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8751u;
    { uint32_t ea = c->r[0] + 0x1f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8752u;
    { uint32_t ea = c->r[0] + 0x1f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8753u;
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8754u;
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8755u;
    { uint32_t ea = c->r[0] + 0x204u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8756u;
    { uint32_t ea = c->r[0] + 0x208u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8757u;
    { uint32_t ea = c->r[0] + 0x20cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8758u;
    { uint32_t ea = c->r[0] + 0x210u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8759u;
    { uint32_t ea = c->r[0] + 0x214u; ST32(ea, c->r[1]); }
    c->r[1] = 0x875au;
    { uint32_t ea = c->r[0] + 0x218u; ST32(ea, c->r[1]); }
    c->r[1] = 0x875bu;
    { uint32_t ea = c->r[0] + 0x21cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x875cu;
    { uint32_t ea = c->r[0] + 0x220u; ST32(ea, c->r[1]); }
    c->r[1] = 0x875du;
    { uint32_t ea = c->r[0] + 0x224u; ST32(ea, c->r[1]); }
    c->r[1] = 0x875eu;
    { uint32_t ea = c->r[0] + 0x228u; ST32(ea, c->r[1]); }
    c->r[1] = 0x875fu;
    { uint32_t ea = c->r[0] + 0x22cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8760u;
    { uint32_t ea = c->r[0] + 0x230u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8761u;
    { uint32_t ea = c->r[0] + 0x234u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8762u;
    { uint32_t ea = c->r[0] + 0x238u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8763u;
    { uint32_t ea = c->r[0] + 0x23cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8764u;
    { uint32_t ea = c->r[0] + 0x240u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8765u;
    { uint32_t ea = c->r[0] + 0x244u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8766u;
    { uint32_t ea = c->r[0] + 0x248u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8767u;
    { uint32_t ea = c->r[0] + 0x24cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8768u;
    { uint32_t ea = c->r[0] + 0x250u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8769u;
    { uint32_t ea = c->r[0] + 0x254u; ST32(ea, c->r[1]); }
    c->r[1] = 0x876au;
    { uint32_t ea = c->r[0] + 0x258u; ST32(ea, c->r[1]); }
    c->r[1] = 0x876bu;
    { uint32_t ea = c->r[0] + 0x25cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x876cu;
    { uint32_t ea = c->r[0] + 0x260u; ST32(ea, c->r[1]); }
    c->r[1] = 0x876du;
    { uint32_t ea = c->r[0] + 0x264u; ST32(ea, c->r[1]); }
    c->r[1] = 0x876eu;
    { uint32_t ea = c->r[0] + 0x268u; ST32(ea, c->r[1]); }
    c->r[1] = 0x876fu;
    { uint32_t ea = c->r[0] + 0x26cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8770u;
    { uint32_t ea = c->r[0] + 0x270u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8771u;
    { uint32_t ea = c->r[0] + 0x274u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8772u;
    { uint32_t ea = c->r[0] + 0x278u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8773u;
    { uint32_t ea = c->r[0] + 0x27cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8774u;
    { uint32_t ea = c->r[0] + 0x280u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8775u;
    { uint32_t ea = c->r[0] + 0x284u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8776u;
    { uint32_t ea = c->r[0] + 0x288u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8777u;
    { uint32_t ea = c->r[0] + 0x28cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8778u;
    { uint32_t ea = c->r[0] + 0x290u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8779u;
    { uint32_t ea = c->r[0] + 0x294u; ST32(ea, c->r[1]); }
    c->r[1] = 0x877au;
    { uint32_t ea = c->r[0] + 0x298u; ST32(ea, c->r[1]); }
    c->r[1] = 0x877bu;
    { uint32_t ea = c->r[0] + 0x29cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x877cu;
    { uint32_t ea = c->r[0] + 0x2a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x877du;
    { uint32_t ea = c->r[0] + 0x2a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x877eu;
    { uint32_t ea = c->r[0] + 0x2a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x877fu;
    { uint32_t ea = c->r[0] + 0x2acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8780u;
    { uint32_t ea = c->r[0] + 0x2b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8781u;
    { uint32_t ea = c->r[0] + 0x2b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8782u;
    { uint32_t ea = c->r[0] + 0x2b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8783u;
    { uint32_t ea = c->r[0] + 0x2bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8784u;
    { uint32_t ea = c->r[0] + 0x2c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8785u;
    { uint32_t ea = c->r[0] + 0x2c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8786u;
    { uint32_t ea = c->r[0] + 0x2c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8787u;
    { uint32_t ea = c->r[0] + 0x2ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8788u;
    { uint32_t ea = c->r[0] + 0x2d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8789u;
    { uint32_t ea = c->r[0] + 0x2d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x878au;
    { uint32_t ea = c->r[0] + 0x2d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x878bu;
    { uint32_t ea = c->r[0] + 0x2dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x878cu;
    { uint32_t ea = c->r[0] + 0x2e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x878du;
    { uint32_t ea = c->r[0] + 0x2e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x878eu;
    { uint32_t ea = c->r[0] + 0x2e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x878fu;
    { uint32_t ea = c->r[0] + 0x2ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8790u;
    { uint32_t ea = c->r[0] + 0x2f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8791u;
    { uint32_t ea = c->r[0] + 0x2f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8792u;
    { uint32_t ea = c->r[0] + 0x2f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8793u;
    { uint32_t ea = c->r[0] + 0x2fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8794u;
    { uint32_t ea = c->r[0] + 0x300u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8795u;
    { uint32_t ea = c->r[0] + 0x304u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8796u;
    { uint32_t ea = c->r[0] + 0x308u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8797u;
    { uint32_t ea = c->r[0] + 0x30cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8798u;
    { uint32_t ea = c->r[0] + 0x310u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8799u;
    { uint32_t ea = c->r[0] + 0x314u; ST32(ea, c->r[1]); }
    c->r[1] = 0x879au;
    { uint32_t ea = c->r[0] + 0x318u; ST32(ea, c->r[1]); }
    c->r[1] = 0x879bu;
    { uint32_t ea = c->r[0] + 0x31cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x879cu;
    { uint32_t ea = c->r[0] + 0x320u; ST32(ea, c->r[1]); }
    c->r[1] = 0x879du;
    { uint32_t ea = c->r[0] + 0x324u; ST32(ea, c->r[1]); }
    c->r[1] = 0x879eu;
    { uint32_t ea = c->r[0] + 0x328u; ST32(ea, c->r[1]); }
    c->r[1] = 0x879fu;
    { uint32_t ea = c->r[0] + 0x32cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a0u;
    { uint32_t ea = c->r[0] + 0x330u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a1u;
    { uint32_t ea = c->r[0] + 0x334u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a2u;
    { uint32_t ea = c->r[0] + 0x338u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a3u;
    { uint32_t ea = c->r[0] + 0x33cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a4u;
    { uint32_t ea = c->r[0] + 0x340u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a5u;
    { uint32_t ea = c->r[0] + 0x344u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a6u;
    { uint32_t ea = c->r[0] + 0x348u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a7u;
    { uint32_t ea = c->r[0] + 0x34cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a8u;
    { uint32_t ea = c->r[0] + 0x350u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87a9u;
    { uint32_t ea = c->r[0] + 0x354u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87aau;
    { uint32_t ea = c->r[0] + 0x358u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87abu;
    { uint32_t ea = c->r[0] + 0x35cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87acu;
    { uint32_t ea = c->r[0] + 0x360u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87adu;
    { uint32_t ea = c->r[0] + 0x364u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87aeu;
    { uint32_t ea = c->r[0] + 0x368u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87afu;
    { uint32_t ea = c->r[0] + 0x36cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b0u;
    { uint32_t ea = c->r[0] + 0x370u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b1u;
    { uint32_t ea = c->r[0] + 0x374u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b2u;
    { uint32_t ea = c->r[0] + 0x378u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b3u;
    { uint32_t ea = c->r[0] + 0x37cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b4u;
    { uint32_t ea = c->r[0] + 0x380u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b5u;
    { uint32_t ea = c->r[0] + 0x384u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b6u;
    { uint32_t ea = c->r[0] + 0x388u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b7u;
    { uint32_t ea = c->r[0] + 0x38cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b8u;
    { uint32_t ea = c->r[0] + 0x390u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87b9u;
    { uint32_t ea = c->r[0] + 0x394u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87bau;
    { uint32_t ea = c->r[0] + 0x398u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87bbu;
    { uint32_t ea = c->r[0] + 0x39cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87bcu;
    { uint32_t ea = c->r[0] + 0x3a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87bdu;
    { uint32_t ea = c->r[0] + 0x3a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87beu;
    { uint32_t ea = c->r[0] + 0x3a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87bfu;
    { uint32_t ea = c->r[0] + 0x3acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c0u;
    { uint32_t ea = c->r[0] + 0x3b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c1u;
    { uint32_t ea = c->r[0] + 0x3b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c2u;
    { uint32_t ea = c->r[0] + 0x3b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c3u;
    { uint32_t ea = c->r[0] + 0x3bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c4u;
    { uint32_t ea = c->r[0] + 0x3c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c5u;
    { uint32_t ea = c->r[0] + 0x3c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c6u;
    { uint32_t ea = c->r[0] + 0x3c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c7u;
    { uint32_t ea = c->r[0] + 0x3ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c8u;
    { uint32_t ea = c->r[0] + 0x3d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87c9u;
    { uint32_t ea = c->r[0] + 0x3d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87cau;
    { uint32_t ea = c->r[0] + 0x3d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87cbu;
    { uint32_t ea = c->r[0] + 0x3dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87ccu;
    { uint32_t ea = c->r[0] + 0x3e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87cdu;
    { uint32_t ea = c->r[0] + 0x3e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87ceu;
    { uint32_t ea = c->r[0] + 0x3e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87cfu;
    { uint32_t ea = c->r[0] + 0x3ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d0u;
    { uint32_t ea = c->r[0] + 0x3f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d1u;
    { uint32_t ea = c->r[0] + 0x3f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d2u;
    { uint32_t ea = c->r[0] + 0x3f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d3u;
    { uint32_t ea = c->r[0] + 0x3fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d4u;
    { uint32_t ea = c->r[0] + 0x400u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d5u;
    { uint32_t ea = c->r[0] + 0x404u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d6u;
    { uint32_t ea = c->r[0] + 0x408u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d7u;
    { uint32_t ea = c->r[0] + 0x40cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d8u;
    { uint32_t ea = c->r[0] + 0x410u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87d9u;
    { uint32_t ea = c->r[0] + 0x414u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87dau;
    { uint32_t ea = c->r[0] + 0x418u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87dbu;
    { uint32_t ea = c->r[0] + 0x41cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87dcu;
    { uint32_t ea = c->r[0] + 0x420u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87ddu;
    { uint32_t ea = c->r[0] + 0x424u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87deu;
    { uint32_t ea = c->r[0] + 0x428u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87dfu;
    { uint32_t ea = c->r[0] + 0x42cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e0u;
    { uint32_t ea = c->r[0] + 0x430u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e1u;
    { uint32_t ea = c->r[0] + 0x434u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e2u;
    { uint32_t ea = c->r[0] + 0x438u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e3u;
    { uint32_t ea = c->r[0] + 0x43cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e4u;
    { uint32_t ea = c->r[0] + 0x440u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e5u;
    { uint32_t ea = c->r[0] + 0x444u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e6u;
    { uint32_t ea = c->r[0] + 0x448u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e7u;
    { uint32_t ea = c->r[0] + 0x44cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e8u;
    { uint32_t ea = c->r[0] + 0x450u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87e9u;
    { uint32_t ea = c->r[0] + 0x454u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87eau;
    { uint32_t ea = c->r[0] + 0x458u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87ebu;
    { uint32_t ea = c->r[0] + 0x45cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87ecu;
    { uint32_t ea = c->r[0] + 0x460u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87edu;
    { uint32_t ea = c->r[0] + 0x464u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87eeu;
    { uint32_t ea = c->r[0] + 0x468u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87efu;
    { uint32_t ea = c->r[0] + 0x46cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f0u;
    { uint32_t ea = c->r[0] + 0x470u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f1u;
    { uint32_t ea = c->r[0] + 0x474u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f2u;
    { uint32_t ea = c->r[0] + 0x478u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f3u;
    { uint32_t ea = c->r[0] + 0x47cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f4u;
    { uint32_t ea = c->r[0] + 0x480u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f5u;
    { uint32_t ea = c->r[0] + 0x484u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f6u;
    { uint32_t ea = c->r[0] + 0x488u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f7u;
    { uint32_t ea = c->r[0] + 0x48cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f8u;
    { uint32_t ea = c->r[0] + 0x490u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87f9u;
    { uint32_t ea = c->r[0] + 0x494u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87fau;
    { uint32_t ea = c->r[0] + 0x498u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87fbu;
    { uint32_t ea = c->r[0] + 0x49cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x87fcu;
    { uint32_t ea = c->r[0] + 0x4a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87fdu;
    { uint32_t ea = c->r[0] + 0x4a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87feu;
    { uint32_t ea = c->r[0] + 0x4a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x87ffu;
    { uint32_t ea = c->r[0] + 0x4acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8800u;
    { uint32_t ea = c->r[0] + 0x4b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8801u;
    { uint32_t ea = c->r[0] + 0x4b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8802u;
    { uint32_t ea = c->r[0] + 0x4b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8803u;
    { uint32_t ea = c->r[0] + 0x4bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8804u;
    { uint32_t ea = c->r[0] + 0x4c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8805u;
    { uint32_t ea = c->r[0] + 0x4c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8806u;
    { uint32_t ea = c->r[0] + 0x4c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8807u;
    { uint32_t ea = c->r[0] + 0x4ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8808u;
    { uint32_t ea = c->r[0] + 0x4d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8809u;
    { uint32_t ea = c->r[0] + 0x4d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x880au;
    { uint32_t ea = c->r[0] + 0x4d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x880bu;
    { uint32_t ea = c->r[0] + 0x4dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x880cu;
    { uint32_t ea = c->r[0] + 0x4e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x880du;
    { uint32_t ea = c->r[0] + 0x4e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x880eu;
    { uint32_t ea = c->r[0] + 0x4e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x880fu;
    { uint32_t ea = c->r[0] + 0x4ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8810u;
    { uint32_t ea = c->r[0] + 0x4f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8811u;
    { uint32_t ea = c->r[0] + 0x4f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8812u;
    { uint32_t ea = c->r[0] + 0x4f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8813u;
    { uint32_t ea = c->r[0] + 0x4fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8814u;
    { uint32_t ea = c->r[0] + 0x500u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8815u;
    { uint32_t ea = c->r[0] + 0x504u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8816u;
    { uint32_t ea = c->r[0] + 0x508u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8817u;
    { uint32_t ea = c->r[0] + 0x50cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8818u;
    { uint32_t ea = c->r[0] + 0x510u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8819u;
    { uint32_t ea = c->r[0] + 0x514u; ST32(ea, c->r[1]); }
    c->r[1] = 0x881au;
    { uint32_t ea = c->r[0] + 0x518u; ST32(ea, c->r[1]); }
    c->r[1] = 0x881bu;
    { uint32_t ea = c->r[0] + 0x51cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x881cu;
    { uint32_t ea = c->r[0] + 0x520u; ST32(ea, c->r[1]); }
    c->r[1] = 0x881du;
    { uint32_t ea = c->r[0] + 0x524u; ST32(ea, c->r[1]); }
    c->r[1] = 0x881eu;
    { uint32_t ea = c->r[0] + 0x528u; ST32(ea, c->r[1]); }
    c->r[1] = 0x881fu;
    { uint32_t ea = c->r[0] + 0x52cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8820u;
    { uint32_t ea = c->r[0] + 0x530u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8821u;
    { uint32_t ea = c->r[0] + 0x534u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8822u;
    { uint32_t ea = c->r[0] + 0x538u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8823u;
    { uint32_t ea = c->r[0] + 0x53cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8824u;
    { uint32_t ea = c->r[0] + 0x540u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8825u;
    { uint32_t ea = c->r[0] + 0x544u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8826u;
    { uint32_t ea = c->r[0] + 0x548u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8827u;
    { uint32_t ea = c->r[0] + 0x54cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8828u;
    { uint32_t ea = c->r[0] + 0x550u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8829u;
    { uint32_t ea = c->r[0] + 0x554u; ST32(ea, c->r[1]); }
    c->r[1] = 0x882au;
    { uint32_t ea = c->r[0] + 0x558u; ST32(ea, c->r[1]); }
    c->r[1] = 0x882bu;
    { uint32_t ea = c->r[0] + 0x55cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x882cu;
    { uint32_t ea = c->r[0] + 0x560u; ST32(ea, c->r[1]); }
    c->r[1] = 0x882du;
    { uint32_t ea = c->r[0] + 0x564u; ST32(ea, c->r[1]); }
    c->r[1] = 0x882eu;
    { uint32_t ea = c->r[0] + 0x568u; ST32(ea, c->r[1]); }
    c->r[1] = 0x882fu;
    { uint32_t ea = c->r[0] + 0x56cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8830u;
    { uint32_t ea = c->r[0] + 0x570u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8831u;
    { uint32_t ea = c->r[0] + 0x574u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8832u;
    { uint32_t ea = c->r[0] + 0x578u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8833u;
    { uint32_t ea = c->r[0] + 0x57cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8834u;
    { uint32_t ea = c->r[0] + 0x580u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8835u;
    { uint32_t ea = c->r[0] + 0x584u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8836u;
    { uint32_t ea = c->r[0] + 0x588u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8837u;
    { uint32_t ea = c->r[0] + 0x58cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8838u;
    { uint32_t ea = c->r[0] + 0x590u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8839u;
    { uint32_t ea = c->r[0] + 0x594u; ST32(ea, c->r[1]); }
    c->r[1] = 0x883au;
    { uint32_t ea = c->r[0] + 0x598u; ST32(ea, c->r[1]); }
    c->r[1] = 0x883bu;
    { uint32_t ea = c->r[0] + 0x59cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x883cu;
    { uint32_t ea = c->r[0] + 0x5a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x883du;
    { uint32_t ea = c->r[0] + 0x5a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x883eu;
    { uint32_t ea = c->r[0] + 0x5a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x883fu;
    { uint32_t ea = c->r[0] + 0x5acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8840u;
    { uint32_t ea = c->r[0] + 0x5b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8841u;
    { uint32_t ea = c->r[0] + 0x5b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8842u;
    { uint32_t ea = c->r[0] + 0x5b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8843u;
    { uint32_t ea = c->r[0] + 0x5bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8844u;
    { uint32_t ea = c->r[0] + 0x5c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8845u;
    { uint32_t ea = c->r[0] + 0x5c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8846u;
    { uint32_t ea = c->r[0] + 0x5c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8847u;
    { uint32_t ea = c->r[0] + 0x5ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8848u;
    { uint32_t ea = c->r[0] + 0x5d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8849u;
    { uint32_t ea = c->r[0] + 0x5d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x884au;
    { uint32_t ea = c->r[0] + 0x5d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x884bu;
    { uint32_t ea = c->r[0] + 0x5dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x884cu;
    { uint32_t ea = c->r[0] + 0x5e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x884du;
    { uint32_t ea = c->r[0] + 0x5e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x884eu;
    { uint32_t ea = c->r[0] + 0x5e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x884fu;
    { uint32_t ea = c->r[0] + 0x5ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8850u;
    { uint32_t ea = c->r[0] + 0x5f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8851u;
    { uint32_t ea = c->r[0] + 0x5f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8852u;
    { uint32_t ea = c->r[0] + 0x5f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8853u;
    { uint32_t ea = c->r[0] + 0x5fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8854u;
    { uint32_t ea = c->r[0] + 0x600u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8855u;
    { uint32_t ea = c->r[0] + 0x604u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8856u;
    { uint32_t ea = c->r[0] + 0x608u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8857u;
    { uint32_t ea = c->r[0] + 0x60cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8858u;
    { uint32_t ea = c->r[0] + 0x610u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8859u;
    { uint32_t ea = c->r[0] + 0x614u; ST32(ea, c->r[1]); }
    c->r[1] = 0x885au;
    { uint32_t ea = c->r[0] + 0x618u; ST32(ea, c->r[1]); }
    c->r[1] = 0x885bu;
    { uint32_t ea = c->r[0] + 0x61cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x885cu;
    { uint32_t ea = c->r[0] + 0x620u; ST32(ea, c->r[1]); }
    c->r[1] = 0x885du;
    { uint32_t ea = c->r[0] + 0x624u; ST32(ea, c->r[1]); }
    c->r[1] = 0x885eu;
    { uint32_t ea = c->r[0] + 0x628u; ST32(ea, c->r[1]); }
    c->r[1] = 0x885fu;
    { uint32_t ea = c->r[0] + 0x62cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8860u;
    { uint32_t ea = c->r[0] + 0x630u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8861u;
    { uint32_t ea = c->r[0] + 0x634u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8862u;
    { uint32_t ea = c->r[0] + 0x638u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8863u;
    { uint32_t ea = c->r[0] + 0x63cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8864u;
    { uint32_t ea = c->r[0] + 0x640u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8865u;
    { uint32_t ea = c->r[0] + 0x644u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8866u;
    { uint32_t ea = c->r[0] + 0x648u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8867u;
    { uint32_t ea = c->r[0] + 0x64cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8868u;
    { uint32_t ea = c->r[0] + 0x650u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8869u;
    { uint32_t ea = c->r[0] + 0x654u; ST32(ea, c->r[1]); }
    c->r[1] = 0x886au;
    { uint32_t ea = c->r[0] + 0x658u; ST32(ea, c->r[1]); }
    c->r[1] = 0x886bu;
    { uint32_t ea = c->r[0] + 0x65cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x886cu;
    { uint32_t ea = c->r[0] + 0x660u; ST32(ea, c->r[1]); }
    c->r[1] = 0x886du;
    { uint32_t ea = c->r[0] + 0x664u; ST32(ea, c->r[1]); }
    c->r[1] = 0x886eu;
    { uint32_t ea = c->r[0] + 0x668u; ST32(ea, c->r[1]); }
    c->r[1] = 0x886fu;
    { uint32_t ea = c->r[0] + 0x66cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8870u;
    { uint32_t ea = c->r[0] + 0x670u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8871u;
    { uint32_t ea = c->r[0] + 0x674u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8872u;
    { uint32_t ea = c->r[0] + 0x678u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8873u;
    { uint32_t ea = c->r[0] + 0x67cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8874u;
    { uint32_t ea = c->r[0] + 0x680u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8875u;
    { uint32_t ea = c->r[0] + 0x684u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8876u;
    { uint32_t ea = c->r[0] + 0x688u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8877u;
    { uint32_t ea = c->r[0] + 0x68cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8878u;
    { uint32_t ea = c->r[0] + 0x690u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8879u;
    { uint32_t ea = c->r[0] + 0x694u; ST32(ea, c->r[1]); }
    c->r[1] = 0x887au;
    { uint32_t ea = c->r[0] + 0x698u; ST32(ea, c->r[1]); }
    c->r[1] = 0x887bu;
    { uint32_t ea = c->r[0] + 0x69cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x887cu;
    { uint32_t ea = c->r[0] + 0x6a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x887du;
    { uint32_t ea = c->r[0] + 0x6a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x887eu;
    { uint32_t ea = c->r[0] + 0x6a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x887fu;
    { uint32_t ea = c->r[0] + 0x6acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8880u;
    { uint32_t ea = c->r[0] + 0x6b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8881u;
    { uint32_t ea = c->r[0] + 0x6b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8882u;
    { uint32_t ea = c->r[0] + 0x6b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8883u;
    { uint32_t ea = c->r[0] + 0x6bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8884u;
    { uint32_t ea = c->r[0] + 0x6c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8885u;
    { uint32_t ea = c->r[0] + 0x6c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8886u;
    { uint32_t ea = c->r[0] + 0x6c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8887u;
    { uint32_t ea = c->r[0] + 0x6ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8888u;
    { uint32_t ea = c->r[0] + 0x6d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8889u;
    { uint32_t ea = c->r[0] + 0x6d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x888au;
    { uint32_t ea = c->r[0] + 0x6d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x888bu;
    { uint32_t ea = c->r[0] + 0x6dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x888cu;
    { uint32_t ea = c->r[0] + 0x6e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x888du;
    { uint32_t ea = c->r[0] + 0x6e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x888eu;
    { uint32_t ea = c->r[0] + 0x6e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x888fu;
    { uint32_t ea = c->r[0] + 0x6ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8890u;
    { uint32_t ea = c->r[0] + 0x6f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8891u;
    { uint32_t ea = c->r[0] + 0x6f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8892u;
    { uint32_t ea = c->r[0] + 0x6f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8893u;
    { uint32_t ea = c->r[0] + 0x6fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8894u;
    { uint32_t ea = c->r[0] + 0x700u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8895u;
    { uint32_t ea = c->r[0] + 0x704u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8896u;
    { uint32_t ea = c->r[0] + 0x708u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8897u;
    { uint32_t ea = c->r[0] + 0x70cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8898u;
    { uint32_t ea = c->r[0] + 0x710u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8899u;
    { uint32_t ea = c->r[0] + 0x714u; ST32(ea, c->r[1]); }
    c->r[1] = 0x889au;
    { uint32_t ea = c->r[0] + 0x718u; ST32(ea, c->r[1]); }
    c->r[1] = 0x889bu;
    { uint32_t ea = c->r[0] + 0x71cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x889cu;
    { uint32_t ea = c->r[0] + 0x720u; ST32(ea, c->r[1]); }
    c->r[1] = 0x889du;
    { uint32_t ea = c->r[0] + 0x724u; ST32(ea, c->r[1]); }
    c->r[1] = 0x889eu;
    { uint32_t ea = c->r[0] + 0x728u; ST32(ea, c->r[1]); }
    c->r[1] = 0x889fu;
    { uint32_t ea = c->r[0] + 0x72cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a0u;
    { uint32_t ea = c->r[0] + 0x730u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a1u;
    { uint32_t ea = c->r[0] + 0x734u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a2u;
    { uint32_t ea = c->r[0] + 0x738u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a3u;
    { uint32_t ea = c->r[0] + 0x73cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a4u;
    { uint32_t ea = c->r[0] + 0x740u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a5u;
    { uint32_t ea = c->r[0] + 0x744u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a6u;
    { uint32_t ea = c->r[0] + 0x748u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a7u;
    { uint32_t ea = c->r[0] + 0x74cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a8u;
    { uint32_t ea = c->r[0] + 0x750u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88a9u;
    { uint32_t ea = c->r[0] + 0x754u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88aau;
    { uint32_t ea = c->r[0] + 0x758u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88abu;
    { uint32_t ea = c->r[0] + 0x75cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88acu;
    { uint32_t ea = c->r[0] + 0x760u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88adu;
    goto L_5c8cb4;
L_5c8cb4:;
    { uint32_t ea = c->r[0] + 0x764u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88aeu;
    { uint32_t ea = c->r[0] + 0x768u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88afu;
    { uint32_t ea = c->r[0] + 0x76cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b0u;
    { uint32_t ea = c->r[0] + 0x770u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b1u;
    { uint32_t ea = c->r[0] + 0x774u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b2u;
    { uint32_t ea = c->r[0] + 0x778u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b3u;
    { uint32_t ea = c->r[0] + 0x77cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b4u;
    { uint32_t ea = c->r[0] + 0x780u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b5u;
    { uint32_t ea = c->r[0] + 0x784u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b6u;
    { uint32_t ea = c->r[0] + 0x788u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b7u;
    { uint32_t ea = c->r[0] + 0x78cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b8u;
    { uint32_t ea = c->r[0] + 0x790u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88b9u;
    { uint32_t ea = c->r[0] + 0x794u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88bau;
    { uint32_t ea = c->r[0] + 0x798u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88bbu;
    { uint32_t ea = c->r[0] + 0x79cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88bcu;
    { uint32_t ea = c->r[0] + 0x7a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88bdu;
    { uint32_t ea = c->r[0] + 0x7a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88beu;
    { uint32_t ea = c->r[0] + 0x7a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88bfu;
    { uint32_t ea = c->r[0] + 0x7acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c0u;
    { uint32_t ea = c->r[0] + 0x7b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c1u;
    { uint32_t ea = c->r[0] + 0x7b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c2u;
    { uint32_t ea = c->r[0] + 0x7b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c3u;
    { uint32_t ea = c->r[0] + 0x7bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c4u;
    { uint32_t ea = c->r[0] + 0x7c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c5u;
    { uint32_t ea = c->r[0] + 0x7c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c6u;
    { uint32_t ea = c->r[0] + 0x7c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c7u;
    { uint32_t ea = c->r[0] + 0x7ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c8u;
    { uint32_t ea = c->r[0] + 0x7d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88c9u;
    { uint32_t ea = c->r[0] + 0x7d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88cau;
    { uint32_t ea = c->r[0] + 0x7d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88cbu;
    { uint32_t ea = c->r[0] + 0x7dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88ccu;
    { uint32_t ea = c->r[0] + 0x7e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88cdu;
    { uint32_t ea = c->r[0] + 0x7e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88ceu;
    { uint32_t ea = c->r[0] + 0x7e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88cfu;
    { uint32_t ea = c->r[0] + 0x7ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d0u;
    { uint32_t ea = c->r[0] + 0x7f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d1u;
    { uint32_t ea = c->r[0] + 0x7f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d2u;
    { uint32_t ea = c->r[0] + 0x7f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d3u;
    { uint32_t ea = c->r[0] + 0x7fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d4u;
    { uint32_t ea = c->r[0] + 0x800u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d5u;
    { uint32_t ea = c->r[0] + 0x804u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d6u;
    { uint32_t ea = c->r[0] + 0x808u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d7u;
    { uint32_t ea = c->r[0] + 0x80cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d8u;
    { uint32_t ea = c->r[0] + 0x810u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88d9u;
    { uint32_t ea = c->r[0] + 0x814u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88dau;
    { uint32_t ea = c->r[0] + 0x818u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88dbu;
    { uint32_t ea = c->r[0] + 0x81cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88dcu;
    { uint32_t ea = c->r[0] + 0x820u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88ddu;
    { uint32_t ea = c->r[0] + 0x824u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88deu;
    { uint32_t ea = c->r[0] + 0x828u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88dfu;
    { uint32_t ea = c->r[0] + 0x82cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e0u;
    { uint32_t ea = c->r[0] + 0x830u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1471938u;
    { uint32_t ea = 0x5c8e5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x834u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x838u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x83cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x840u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x844u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x848u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x84cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x850u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x854u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x858u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x85cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x860u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x864u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x868u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x86cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x870u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x874u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x878u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x87cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x880u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x884u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x888u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x88cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x890u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x894u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x898u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x89cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e1u;
    { uint32_t ea = c->r[0] + 0x8c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e2u;
    { uint32_t ea = c->r[0] + 0x8c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e3u;
    { uint32_t ea = c->r[0] + 0x8c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e4u;
    { uint32_t ea = c->r[0] + 0x8ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e5u;
    { uint32_t ea = c->r[0] + 0x8d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e6u;
    { uint32_t ea = c->r[0] + 0x8d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e7u;
    { uint32_t ea = c->r[0] + 0x8d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e8u;
    { uint32_t ea = c->r[0] + 0x8dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88e9u;
    { uint32_t ea = c->r[0] + 0x8e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88eau;
    { uint32_t ea = c->r[0] + 0x8e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88ebu;
    { uint32_t ea = c->r[0] + 0x8e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88ecu;
    { uint32_t ea = c->r[0] + 0x8ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88edu;
    { uint32_t ea = c->r[0] + 0x8f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88eeu;
    { uint32_t ea = c->r[0] + 0x8f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88efu;
    { uint32_t ea = c->r[0] + 0x8f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f0u;
    { uint32_t ea = c->r[0] + 0x8fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f1u;
    { uint32_t ea = c->r[0] + 0x900u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f2u;
    { uint32_t ea = c->r[0] + 0x904u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f3u;
    { uint32_t ea = c->r[0] + 0x908u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f4u;
    { uint32_t ea = c->r[0] + 0x90cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f5u;
    { uint32_t ea = c->r[0] + 0x910u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f6u;
    { uint32_t ea = c->r[0] + 0x914u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f7u;
    { uint32_t ea = c->r[0] + 0x918u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f8u;
    { uint32_t ea = c->r[0] + 0x91cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88f9u;
    { uint32_t ea = c->r[0] + 0x920u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88fau;
    { uint32_t ea = c->r[0] + 0x924u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88fbu;
    { uint32_t ea = c->r[0] + 0x928u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88fcu;
    { uint32_t ea = c->r[0] + 0x92cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x88fdu;
    { uint32_t ea = c->r[0] + 0x930u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88feu;
    { uint32_t ea = c->r[0] + 0x934u; ST32(ea, c->r[1]); }
    c->r[1] = 0x88ffu;
    { uint32_t ea = c->r[0] + 0x938u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8900u;
    { uint32_t ea = c->r[0] + 0x93cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8901u;
    { uint32_t ea = c->r[0] + 0x940u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8902u;
    { uint32_t ea = c->r[0] + 0x944u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8903u;
    { uint32_t ea = c->r[0] + 0x948u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8904u;
    { uint32_t ea = c->r[0] + 0x94cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8905u;
    { uint32_t ea = c->r[0] + 0x950u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8906u;
    { uint32_t ea = c->r[0] + 0x954u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8907u;
    { uint32_t ea = c->r[0] + 0x958u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8908u;
    { uint32_t ea = c->r[0] + 0x95cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8909u;
    { uint32_t ea = c->r[0] + 0x960u; ST32(ea, c->r[1]); }
    c->r[1] = 0x890au;
    { uint32_t ea = c->r[0] + 0x964u; ST32(ea, c->r[1]); }
    c->r[1] = 0x890bu;
    { uint32_t ea = c->r[0] + 0x968u; ST32(ea, c->r[1]); }
    c->r[1] = 0x890cu;
    { uint32_t ea = c->r[0] + 0x96cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x890du;
    { uint32_t ea = c->r[0] + 0x970u; ST32(ea, c->r[1]); }
    c->r[1] = 0x890eu;
    { uint32_t ea = c->r[0] + 0x974u; ST32(ea, c->r[1]); }
    c->r[1] = 0x890fu;
    { uint32_t ea = c->r[0] + 0x978u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8910u;
    { uint32_t ea = c->r[0] + 0x97cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8911u;
    { uint32_t ea = c->r[0] + 0x980u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8912u;
    { uint32_t ea = c->r[0] + 0x984u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8913u;
    { uint32_t ea = c->r[0] + 0x988u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8914u;
    { uint32_t ea = c->r[0] + 0x98cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8915u;
    { uint32_t ea = c->r[0] + 0x990u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8916u;
    { uint32_t ea = c->r[0] + 0x994u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8917u;
    { uint32_t ea = c->r[0] + 0x998u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8918u;
    { uint32_t ea = c->r[0] + 0x99cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8919u;
    { uint32_t ea = c->r[0] + 0x9a0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x891au;
    { uint32_t ea = c->r[0] + 0x9a4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x891bu;
    { uint32_t ea = c->r[0] + 0x9a8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x891cu;
    { uint32_t ea = c->r[0] + 0x9acu; ST32(ea, c->r[1]); }
    c->r[1] = 0x891du;
    { uint32_t ea = c->r[0] + 0x9b0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x891eu;
    { uint32_t ea = c->r[0] + 0x9b4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x891fu;
    { uint32_t ea = c->r[0] + 0x9b8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8920u;
    { uint32_t ea = c->r[0] + 0x9bcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8921u;
    { uint32_t ea = c->r[0] + 0x9c0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8922u;
    { uint32_t ea = c->r[0] + 0x9c4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8923u;
    { uint32_t ea = c->r[0] + 0x9c8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8924u;
    { uint32_t ea = c->r[0] + 0x9ccu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8925u;
    { uint32_t ea = c->r[0] + 0x9d0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8926u;
    { uint32_t ea = c->r[0] + 0x9d4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8927u;
    { uint32_t ea = c->r[0] + 0x9d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8928u;
    { uint32_t ea = c->r[0] + 0x9dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8929u;
    { uint32_t ea = c->r[0] + 0x9e0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x892au;
    { uint32_t ea = c->r[0] + 0x9e4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x892bu;
    { uint32_t ea = c->r[0] + 0x9e8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x892cu;
    { uint32_t ea = c->r[0] + 0x9ecu; ST32(ea, c->r[1]); }
    c->r[1] = 0x892du;
    { uint32_t ea = c->r[0] + 0x9f0u; ST32(ea, c->r[1]); }
    c->r[1] = 0x892eu;
    { uint32_t ea = c->r[0] + 0x9f4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x892fu;
    { uint32_t ea = c->r[0] + 0x9f8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8930u;
    { uint32_t ea = c->r[0] + 0x9fcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8931u;
    { uint32_t ea = c->r[0] + 0xa00u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8932u;
    { uint32_t ea = c->r[0] + 0xa04u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8933u;
    { uint32_t ea = c->r[0] + 0xa08u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8934u;
    { uint32_t ea = c->r[0] + 0xa0cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8935u;
    { uint32_t ea = c->r[0] + 0xa10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8936u;
    { uint32_t ea = c->r[0] + 0xa14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8937u;
    { uint32_t ea = c->r[0] + 0xa18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8938u;
    { uint32_t ea = c->r[0] + 0xa1cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8939u;
    { uint32_t ea = c->r[0] + 0xa20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x893au;
    { uint32_t ea = c->r[0] + 0xa24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x893bu;
    { uint32_t ea = c->r[0] + 0xa28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x893cu;
    { uint32_t ea = c->r[0] + 0xa2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x893du;
    { uint32_t ea = c->r[0] + 0xa30u; ST32(ea, c->r[1]); }
    c->r[1] = 0x893eu;
    { uint32_t ea = c->r[0] + 0xa34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x893fu;
    { uint32_t ea = c->r[0] + 0xa38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8940u;
    { uint32_t ea = c->r[0] + 0xa3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8941u;
    { uint32_t ea = c->r[0] + 0xa40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8942u;
    { uint32_t ea = c->r[0] + 0xa44u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8943u;
    { uint32_t ea = c->r[0] + 0xa48u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8944u;
    { uint32_t ea = c->r[0] + 0xa4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8945u;
    { uint32_t ea = c->r[0] + 0xa50u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8946u;
    { uint32_t ea = c->r[0] + 0xa54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8947u;
    { uint32_t ea = c->r[0] + 0xa58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8948u;
    { uint32_t ea = c->r[0] + 0xa5cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8949u;
    { uint32_t ea = c->r[0] + 0xa60u; ST32(ea, c->r[1]); }
    c->r[1] = 0x894au;
    { uint32_t ea = c->r[0] + 0xa64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x894bu;
    { uint32_t ea = c->r[0] + 0xa68u; ST32(ea, c->r[1]); }
    c->r[1] = 0x894cu;
    { uint32_t ea = c->r[0] + 0xa6cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x894du;
    { uint32_t ea = c->r[0] + 0xa70u; ST32(ea, c->r[1]); }
    c->r[1] = 0x894eu;
    { uint32_t ea = c->r[0] + 0xa74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x894fu;
    { uint32_t ea = c->r[0] + 0xa78u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8950u;
    { uint32_t ea = c->r[0] + 0xa7cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8951u;
    { uint32_t ea = c->r[0] + 0xa80u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8952u;
    { uint32_t ea = c->r[0] + 0xa84u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8953u;
    { uint32_t ea = c->r[0] + 0xa88u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8954u;
    { uint32_t ea = c->r[0] + 0xa8cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8955u;
    { uint32_t ea = c->r[0] + 0xa90u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8956u;
    { uint32_t ea = c->r[0] + 0xa94u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8957u;
    { uint32_t ea = c->r[0] + 0xa98u; ST32(ea, c->r[1]); }
    c->r[1] = 0x8958u;
    { uint32_t ea = c->r[0] + 0xa9cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x8959u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xab0u; ST32(ea, c->r[4]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c92c0(Cpu *restrict c) {
    FN_ENTER(0x5c92c0u);
L_5c92c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14737b0u;
    { uint32_t ea = 0x5c92d0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5c92d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x5c92ecu; rt_dispatch(c);
    c->r[14] = 0x5c92f0u; f_a870b8(c);
    c->r[1] = 0x1473784u;
    c->r[2] = 0x16u;
    { uint32_t ea = 0x5c9300u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146f850u;
    { uint32_t ea = 0x5c9310u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c933c(Cpu *restrict c) {
    FN_ENTER(0x5c933cu);
L_5c933c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1473734u;
    { uint32_t ea = 0x5c9350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9390; }
    c->r[5] = 0x0u;
L_5c9364:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9384; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5c9380u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5c9384:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5c9364; }
L_5c9390:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c93b8; }
    c->r[0] = 0x146f7b4u;
    { uint32_t ea = 0x5c93a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c93a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5c93b8u; rt_dispatch(c);
L_5c93b8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5c93d0u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5c93e4(Cpu *restrict c) {
    FN_ENTER(0x5c93e4u);
L_5c93e4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x147368cu;
    { uint32_t ea = 0x5c93f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9438; }
    c->r[5] = 0x0u;
L_5c940c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c942c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5c9428u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5c942c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5c940c; }
L_5c9438:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9460; }
    c->r[0] = 0x146f70cu;
    { uint32_t ea = 0x5c9450u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c9450u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5c9460u; rt_dispatch(c);
L_5c9460:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5c9478u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5c9480u; f_a87100(c);
    c->r[0] = 0x14735f4u;
    { uint32_t ea = 0x5c948cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c948cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5c94ac(Cpu *restrict c) {
    FN_ENTER(0x5c94acu);
L_5c94ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[13] + 0xcu;
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5c94c8u; f_a260d4(c);
    c->r[14] = 0x5c94ccu; f_a26780(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5c94d8u; f_a263f8(c);
    c->r[1] = 0x4152u;
    c->r[5] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { c->r[1] = 0x811u; }
    if (COND_EQ) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x20140000u; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_5c9720; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9534; }
    c->r[5] = 0x0u;
L_5c9508:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9528; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5c9524u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5c9528:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5c9508; }
L_5c9534:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c955c; }
    c->r[0] = 0x146f610u;
    { uint32_t ea = 0x5c954cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c954cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5c955cu; rt_dispatch(c);
L_5c955c:;
    c->r[9] = 0x0u;
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5c9574u; f_a263f8(c);
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5c9720; }
    c->r[0] = 0x14734f4u;
    c->r[7] = c->r[13] + 0xcu;
    { uint32_t ea = 0x5c9594u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x14734f0u;
    { uint32_t ea = 0x5c959cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x8u;
    c->r[0] = 0x146f5b4u;
    { uint32_t ea = 0x5c95a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[11]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[10] = v; }
L_5c95ac:;
    c->r[0] = c->r[11];
    c->r[14] = 0x5c95b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[6]; c->r[14] = 0x5c95ccu; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_5c95f8; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_5c967c;
L_5c95f8:;
    c->r[0] = c->r[10];
    c->r[14] = 0x5c9600u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[5] + 0x10u;
    c->r[11] = c->r[8];
    c->r[2] = 0x10u;
    c->r[8] = (c->r[7] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x5c9620u; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[5] = c->r[0];
    c->r[8] = c->r[11];
    c->r[14] = 0x5c9630u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9644u; f_15efdd0(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x5c964cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5c965cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
L_5c967c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5c96b0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5c96a0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c96c0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5c96b0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_5c96c0:;
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5c96ec; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5c96dcu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5c96fc; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5c96ec:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_5c96fc:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[5] + 0x5u; ST8(ea, c->r[1]); }
    c->r[14] = 0x5c9708u; f_a262e8(c);
    { uint32_t ea = c->r[5] + 0x6u; ST16(ea, c->r[0]); }
    c->r[9] = c->r[9] + 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_5c95ac; }
    c->r[5] = 0x1u;
L_5c9720:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x5c9728u; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5c9744(Cpu *restrict c) {
    FN_ENTER(0x5c9744u);
L_5c9744:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9764u; f_a2772c(c);
    c->r[1] = 0x4152u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    c->r[14] = 0x5c9770u; f_a27ad4(c);
    c->r[1] = 0x811u;
    c->r[0] = c->r[5];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20140000u;
    c->r[14] = 0x5c9780u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5c978cu; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9838; }
    c->r[6] = 0x0u;
    c->r[8] = c->r[13];
L_5c97a0:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5c97d0; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x5c97ccu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5c97d0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x5u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5c9808; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x5c9804u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5c9808:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[7] + 0x6u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x5c9828u; f_a278e0(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5c97a0; }
L_5c9838:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5c9840u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5c984c(Cpu *restrict c) {
    FN_ENTER(0x5c984cu);
L_5c984c:;
    __attribute__((musttail)) return f_a871d8(c);
}
void f_5c9850(Cpu *restrict c) {
    FN_ENTER(0x5c9850u);
L_5c9850:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_5c9854(Cpu *restrict c) {
    FN_ENTER(0x5c9854u);
L_5c9854:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9898; }
    c->r[5] = 0x0u;
L_5c986c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c988c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5c9888u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5c988c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5c986c; }
L_5c9898:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c98c0; }
    c->r[0] = 0x146f2acu;
    { uint32_t ea = 0x5c98b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c98b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5c98c0u; rt_dispatch(c);
L_5c98c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c98d8(Cpu *restrict c) {
    FN_ENTER(0x5c98d8u);
L_5c98d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14731a0u;
    { uint32_t ea = 0x5c98e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5c98ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0x5c9904u; rt_dispatch(c);
    c->r[1] = 0x147317cu;
    { uint32_t ea = 0x5c9910u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c9920(Cpu *restrict c) {
    FN_ENTER(0x5c9920u);
L_5c9920:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5c9924(Cpu *restrict c) {
    FN_ENTER(0x5c9924u);
L_5c9924:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5c9928(Cpu *restrict c) {
    FN_ENTER(0x5c9928u);
L_5c9928:;
    c->r[0] = 0x147314cu;
    { uint32_t ea = 0x5c9934u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5c9938(Cpu *restrict c) {
    FN_ENTER(0x5c9938u);
L_5c9938:;
    c->r[0] = 0x119a1fau;
    c->r[0] = 0x5c9944u + c->r[0];
    return;
}
void f_5c9948(Cpu *restrict c) {
    FN_ENTER(0x5c9948u);
L_5c9948:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x147312cu;
    { uint32_t ea = 0x5c995cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c995cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5c9974(Cpu *restrict c) {
    FN_ENTER(0x5c9974u);
L_5c9974:;
    c->r[0] = 0x1473108u;
    { uint32_t ea = 0x5c9980u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5c9984(Cpu *restrict c) {
    FN_ENTER(0x5c9984u);
L_5c9984:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14c2600u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x5c99b0u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[11] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5c9a0cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5c9a24u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5c9a3cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x146f104u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1473000u;
    { uint32_t ea = 0x5c9a78u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x119a086u;
    { uint32_t ea = 0x5c9a80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c9a84u + c->r[1];
    c->r[14] = 0x5c9a84u; f_9aedcc(c);
    c->r[1] = 0x1472ff0u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5c9aa0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146f0b0u;
    c->r[0] = 0x1472fccu;
    { uint32_t ea = 0x5c9ab4u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x119a05au;
    { uint32_t ea = 0x5c9abcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c9ac0u + c->r[1];
    c->r[14] = 0x5c9ac0u; f_9aedcc(c);
    c->r[1] = 0x1472fc8u;
    { uint32_t ea = 0x5c9accu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5c9afc(Cpu *restrict c) {
    FN_ENTER(0x5c9afcu);
L_5c9afc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1471124u;
    { uint32_t ea = 0x5c9b0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5c9b10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x5c9b28u; rt_dispatch(c);
    c->r[14] = 0x5c9b2cu; f_a870b8(c);
    c->r[1] = 0x1472f5cu;
    c->r[2] = 0x12u;
    { uint32_t ea = 0x5c9b3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c9b60(Cpu *restrict c) {
    FN_ENTER(0x5c9b60u);
L_5c9b60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1472f24u;
    { uint32_t ea = 0x5c9b74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9bc0; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9bac; }
    c->r[6] = c->r[0] - 0x40u;
    c->r[7] = (c->r[1] << 6);
L_5c9b9c:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[14] = 0x5c9ba4u; f_212cec(c);
    c->r[7] = f_subs(c, c->r[7], 0x40u);
    if (COND_NE) { goto L_5c9b9c; }
L_5c9bac:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9bb4u; f_212c5c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_5c9bc0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5c9bd0(Cpu *restrict c) {
    FN_ENTER(0x5c9bd0u);
L_5c9bd0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1472eb4u;
    { uint32_t ea = 0x5c9be4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9c30; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9c1c; }
    c->r[6] = c->r[0] - 0x40u;
    c->r[7] = (c->r[1] << 6);
L_5c9c0c:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[14] = 0x5c9c14u; f_212cec(c);
    c->r[7] = f_subs(c, c->r[7], 0x40u);
    if (COND_NE) { goto L_5c9c0c; }
L_5c9c1c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9c24u; f_212c5c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_5c9c30:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5c9c38u; f_a87100(c);
    c->r[0] = 0x1470fecu;
    { uint32_t ea = 0x5c9c44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5c9c44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5c9c60(Cpu *restrict c) {
    FN_ENTER(0x5c9c60u);
L_5c9c60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9c80u; f_a2772c(c);
    c->v.s[0] = LD32(c->r[4] + 104u);
    c->r[14] = 0x5c9c88u; f_a27bbc(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9c94u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9ccc; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13];
L_5c9cac:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x5c9cb8u; f_2140d4(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[5] = c->r[5] + 0x40u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5c9cac; }
L_5c9ccc:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5c9cd4u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5c9ce0(Cpu *restrict c) {
    FN_ENTER(0x5c9ce0u);
L_5c9ce0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13];
    c->r[2] = 0x80000u;
    c->r[14] = 0x5c9cf8u; f_a260d4(c);
    c->r[14] = 0x5c9cfcu; f_a269f4(c);
    c->v.s[2] = 0x40a00000u;
    c->r[8] = 0x0u;
    ST32(c->r[4] + 104u, c->v.s[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_5c9d28; }
L_5c9d14:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5c9d1cu; f_a26130(c);
    c->r[0] = c->r[8];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5c9d28:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5c9d70; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5c9d5c; }
    c->r[6] = c->r[0] - 0x40u;
    c->r[7] = (c->r[1] << 6);
L_5c9d4c:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[14] = 0x5c9d54u; f_212cec(c);
    c->r[7] = f_subs(c, c->r[7], 0x40u);
    if (COND_NE) { goto L_5c9d4c; }
L_5c9d5c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5c9d64u; f_212c5c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_5c9d70:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5c9d78u; f_a263f8(c);
    c->r[5] = c->r[0];
    c->r[6] = 0x40u;
    { uint64_t r = (uint64_t)c->r[5] * c->r[6]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = 0x10u;
    if (COND_CC) { c->r[0] = ~0x0u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x5c9da8u; f_212c20(c);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_5c9e14; }
    c->r[7] = (c->r[5] << 6);
    c->r[0] = c->r[6];
L_5c9dc4:;
    c->r[14] = 0x5c9dc8u; f_212c88(c);
    c->r[7] = f_subs(c, c->r[7], 0x40u);
    c->r[0] = c->r[0] + 0x40u;
    if (COND_NE) { goto L_5c9dc4; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_5c9d14; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[13];
L_5c9df0:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x5c9dfcu; f_213c00(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x40u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5c9df0; }
    goto L_5c9d14;
L_5c9e14:;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    c->r[8] = 0x1u;
    goto L_5c9d14;
}
void f_5c9e24(Cpu *restrict c) {
    FN_ENTER(0x5c9e24u);
L_5c9e24:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[9] = c->r[1];
    c->r[8] = c->r[0];
    c->r[10] = 0x0u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    c->r[14] = 0x5c9e5cu; f_9bb638(c);
    c->r[1] = 0x1187cd0u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5c9e70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[8] + 0x68u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[9];
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_a871d8(c);
}
void f_5c9ec4(Cpu *restrict c) {
    FN_ENTER(0x5c9ec4u);
L_5c9ec4:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { return; }
    { uint32_t ea = c->r[2] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 6);
    return;
}
void f_5c9ee4(Cpu *restrict c) {
    FN_ENTER(0x5c9ee4u);
L_5c9ee4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5c9ee8(Cpu *restrict c) {
    FN_ENTER(0x5c9ee8u);
L_5c9ee8:;
    c->r[0] = 0x1470d3cu;
    { uint32_t ea = 0x5c9ef4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5c9ef8(Cpu *restrict c) {
    FN_ENTER(0x5c9ef8u);
L_5c9ef8:;
    c->r[0] = 0x1199c52u;
    c->r[0] = 0x5c9f04u + c->r[0];
    return;
}
void f_5c9f08(Cpu *restrict c) {
    FN_ENTER(0x5c9f08u);
L_5c9f08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14c20d4u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x5c9f34u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0x146ebfcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[0] = 0x1470ca4u;
    { uint32_t ea = 0x5c9f80u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1199bb8u;
    c->r[3] = 0x70u;
    { uint32_t ea = 0x5c9f8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5c9f90u + c->r[1];
    c->r[14] = 0x5c9f90u; f_9aedcc(c);
    c->r[1] = 0x1472b00u;
    { uint32_t ea = 0x5c9f9cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5c9fbc(Cpu *restrict c) {
    FN_ENTER(0x5c9fbcu);
L_5c9fbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1472ad4u;
    { uint32_t ea = 0x5c9fccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5c9fd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x5c9fe8u; rt_dispatch(c);
    c->r[14] = 0x5c9fecu; f_a870b8(c);
    c->r[1] = 0x1472aacu;
    { uint32_t ea = 0x5c9ff8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146eb58u;
    { uint32_t ea = 0x5ca008u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x12u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ca038(Cpu *restrict c) {
    FN_ENTER(0x5ca038u);
L_5ca038:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1472a58u;
    { uint32_t ea = 0x5ca04cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ca08c; }
    c->r[5] = 0x0u;
L_5ca060:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca080; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5ca07cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ca080:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5ca060; }
L_5ca08c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca0b4; }
    c->r[0] = 0x146eab8u;
    { uint32_t ea = 0x5ca0a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ca0a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca0b4u; rt_dispatch(c);
L_5ca0b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5ca0ccu; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5ca0e0(Cpu *restrict c) {
    FN_ENTER(0x5ca0e0u);
L_5ca0e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14729b0u;
    { uint32_t ea = 0x5ca0f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ca134; }
    c->r[5] = 0x0u;
L_5ca108:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca128; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5ca124u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ca128:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5ca108; }
L_5ca134:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca15c; }
    c->r[0] = 0x146ea10u;
    { uint32_t ea = 0x5ca14cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ca14cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca15cu; rt_dispatch(c);
L_5ca15c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5ca174u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5ca17cu; f_a87100(c);
    c->r[0] = 0x1472918u;
    { uint32_t ea = 0x5ca188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ca188u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5ca1a8(Cpu *restrict c) {
    FN_ENTER(0x5ca1a8u);
L_5ca1a8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x5ca1bcu; f_a871d8(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5ca1e4u; f_9bb638(c);
    c->r[1] = 0x1199972u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ca1f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5ca240(Cpu *restrict c) {
    FN_ENTER(0x5ca240u);
L_5ca240:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_5ca244(Cpu *restrict c) {
    FN_ENTER(0x5ca244u);
L_5ca244:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[5] = c->r[13] + 0x14u;
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5ca260u; f_a260d4(c);
    c->r[14] = 0x5ca264u; f_a26780(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5ca270u; f_a263f8(c);
    c->r[1] = 0x4144u;
    c->r[7] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x410000u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { c->r[1] = 0x2246u; }
    if (COND_EQ) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xc010000u; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_5ca5c4; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ca2cc; }
    c->r[5] = 0x0u;
L_5ca2a0:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca2c0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5ca2bcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ca2c0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5ca2a0; }
L_5ca2cc:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca2f4; }
    c->r[0] = 0x146e878u;
    { uint32_t ea = 0x5ca2e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ca2e4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca2f4u; rt_dispatch(c);
L_5ca2f4:;
    c->r[8] = 0x0u;
    c->r[0] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ca30cu; f_a263f8(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5ca5c4; }
    c->r[0] = 0x1472778u;
    c->r[11] = c->r[13] + 0x14u;
    c->r[10] = 0x0u;
    { uint32_t ea = 0x5ca330u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1472774u;
    { uint32_t ea = 0x5ca338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x146e810u;
    { uint32_t ea = 0x5ca34cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
L_5ca350:;
    c->r[0] = c->r[9];
    c->r[14] = 0x5ca358u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[7]; c->r[14] = 0x5ca370u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CS) { goto L_5ca3b0; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_5ca42c;
L_5ca3b0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5ca3b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[7] + 0x10u;
    c->r[2] = 0x10u;
    c->r[8] = (c->r[9] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x5ca3d4u; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[7] = c->r[0];
    c->r[8] = 0x0u;
    c->r[14] = 0x5ca3e4u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0x5ca3f8u; f_15efdd0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5ca400u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca410u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
L_5ca42c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca440u; f_a263f8(c);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca46c; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca45cu; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ca47c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca46c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_5ca47c:;
    { uint32_t ea = c->r[6] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca4a8; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca498u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ca4b8; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca4a8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_5ca4b8:;
    { uint32_t ea = c->r[6] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca4e4; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca4d4u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ca4f4; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca4e4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_5ca4f4:;
    { uint32_t ea = c->r[6] + 0xeu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca520; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca510u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ca530; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca520:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_5ca530:;
    { uint32_t ea = c->r[6] + 0xfu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_5ca55c; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca54cu; f_a261fc(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ca56c; }
L_5ca55c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
L_5ca56c:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { c->r[2] = 0x0u; }
    { uint32_t ea = c->r[6] + 0x10u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_5ca59c; }
    c->r[0] = c->r[11];
    c->r[14] = 0x5ca58cu; f_a261fc(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5ca5ac; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ca59c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_5ca5ac:;
    { uint32_t ea = c->r[6] + 0x11u; ST8(ea, c->r[2]); }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { goto L_5ca350; }
    c->r[7] = 0x1u;
L_5ca5c4:;
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x5ca5ccu; f_a26130(c);
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5ca5e8(Cpu *restrict c) {
    FN_ENTER(0x5ca5e8u);
L_5ca5e8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[5] = c->r[13];
    c->r[8] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5ca608u; f_a2772c(c);
    c->r[1] = 0x4144u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x410000u;
    c->r[14] = 0x5ca614u; f_a27ad4(c);
    c->r[1] = 0x2246u;
    c->r[0] = c->r[5];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc010000u;
    c->r[14] = 0x5ca624u; f_a27998(c);
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5ca630u; f_a27998(c);
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca7bc; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
L_5ca644:;
    { uint32_t ea = c->r[8] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x5ca658u; f_a27998(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca680; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5ca67cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca680:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xdu; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca6b8; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5ca6b4u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca6b8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xeu; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca6f0; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5ca6ecu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca6f0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0xfu; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca728; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5ca724u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca728:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca760; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5ca75cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca760:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x11u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5ca798; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5ca794u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5ca798:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5ca644; }
L_5ca7bc:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5ca7c4u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5ca7d0(Cpu *restrict c) {
    FN_ENTER(0x5ca7d0u);
L_5ca7d0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ca814; }
    c->r[5] = 0x0u;
L_5ca7e8:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca808; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5ca804u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ca808:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5ca7e8; }
L_5ca814:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca83c; }
    c->r[0] = 0x146e330u;
    { uint32_t ea = 0x5ca82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ca82cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca83cu; rt_dispatch(c);
L_5ca83c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5ca854(Cpu *restrict c) {
    FN_ENTER(0x5ca854u);
L_5ca854:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1472244u;
    { uint32_t ea = 0x5ca864u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ca868u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x5ca880u; rt_dispatch(c);
    c->r[1] = 0x1472220u;
    { uint32_t ea = 0x5ca88cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ca8b0(Cpu *restrict c) {
    FN_ENTER(0x5ca8b0u);
L_5ca8b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14721e8u;
    { uint32_t ea = 0x5ca8c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca914; }
L_5ca8d4:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5ca8d4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5ca90c; }
    c->r[0] = 0x146e288u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5ca900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca90cu; rt_dispatch(c);
L_5ca90c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5ca914:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ca924(Cpu *restrict c) {
    FN_ENTER(0x5ca924u);
L_5ca924:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1472174u;
    { uint32_t ea = 0x5ca938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ca988; }
L_5ca948:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5ca948; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5ca980; }
    c->r[0] = 0x146e214u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5ca974u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ca980u; rt_dispatch(c);
L_5ca980:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5ca988:;
    c->r[0] = 0x1472114u;
    { uint32_t ea = 0x5ca994u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ca994u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5ca9b4(Cpu *restrict c) {
    FN_ENTER(0x5ca9b4u);
L_5ca9b4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5ca9ecu; f_9bb638(c);
    c->r[1] = 0x118716cu;
    c->r[8] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0x5caa04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5caa64u; f_9bb638(c);
    c->r[1] = 0x11990f9u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5caa78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5caadcu; f_9bb638(c);
    c->r[1] = 0x119908au;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5caaf0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5cab50u; f_9bb638(c);
    c->r[1] = 0x118701bu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cab64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xdu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5cabc8u; f_9bb638(c);
    c->r[1] = 0x1186fadu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cabdcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xeu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5cac40u; f_9bb638(c);
    c->r[1] = 0x1186f3bu;
    c->r[8] = c->r[9] + 0xfu;
    c->r[2] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cac58u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5cacb8u; f_9bb638(c);
    c->r[1] = 0x1186ecbu;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cacc8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[8]); }
    c->r[8] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    c->r[14] = 0x5cad2cu; f_9bb638(c);
    c->r[1] = 0x1198e40u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[8] = 0x0u;
    c->r[1] = 0x5cad44u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    c->r[14] = 0x5cada4u; f_9bb638(c);
    c->r[1] = 0x1198de3u;
    c->r[1] = 0x5cadb0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x11u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5cae20(Cpu *restrict c) {
    FN_ENTER(0x5cae20u);
L_5cae20:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cae24(Cpu *restrict c) {
    FN_ENTER(0x5cae24u);
L_5cae24:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cae28(Cpu *restrict c) {
    FN_ENTER(0x5cae28u);
L_5cae28:;
    c->r[0] = 0x1471c6cu;
    { uint32_t ea = 0x5cae34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cae38(Cpu *restrict c) {
    FN_ENTER(0x5cae38u);
L_5cae38:;
    c->r[0] = 0x1198d59u;
    c->r[0] = 0x5cae44u + c->r[0];
    return;
}
void f_5cae48(Cpu *restrict c) {
    FN_ENTER(0x5cae48u);
L_5cae48:;
    c->r[0] = 0x1198d06u;
    c->r[0] = 0x5cae54u + c->r[0];
    return;
}
void f_5cae58(Cpu *restrict c) {
    FN_ENTER(0x5cae58u);
L_5cae58:;
    c->r[0] = 0x1471c44u;
    { uint32_t ea = 0x5cae64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cae68(Cpu *restrict c) {
    FN_ENTER(0x5cae68u);
L_5cae68:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14c11fcu;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x5cae94u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[11] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5caef0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5caf08u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5caf20u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x146dc20u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1471b3cu;
    { uint32_t ea = 0x5caf5cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1198bf2u;
    { uint32_t ea = 0x5caf64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5caf68u + c->r[1];
    c->r[14] = 0x5caf68u; f_9aedcc(c);
    c->r[1] = 0x1471b2cu;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5caf84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146dbccu;
    c->r[0] = 0x1471b08u;
    { uint32_t ea = 0x5caf98u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x118bc13u;
    { uint32_t ea = 0x5cafa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cafa4u + c->r[1];
    c->r[14] = 0x5cafa4u; f_9aedcc(c);
    c->r[1] = 0x1471b04u;
    { uint32_t ea = 0x5cafb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cafe0(Cpu *restrict c) {
    FN_ENTER(0x5cafe0u);
L_5cafe0:;
    c->r[0] = 0x0u;
    return;
}
void f_5cafe8(Cpu *restrict c) {
    FN_ENTER(0x5cafe8u);
L_5cafe8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x5caff0u; f_a870b8(c);
    c->r[1] = 0x1471abcu;
    { uint32_t ea = 0x5caffcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb008(Cpu *restrict c) {
    FN_ENTER(0x5cb008u);
L_5cb008:;
    __attribute__((musttail)) return f_a87100(c);
}
void f_5cb00c(Cpu *restrict c) {
    FN_ENTER(0x5cb00cu);
L_5cb00c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5cb018u; f_a87100(c);
    c->r[0] = 0x146e97cu;
    { uint32_t ea = 0x5cb024u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb024u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cb03c(Cpu *restrict c) {
    FN_ENTER(0x5cb03cu);
L_5cb03c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cb040(Cpu *restrict c) {
    FN_ENTER(0x5cb040u);
L_5cb040:;
    c->r[0] = 0x146e954u;
    { uint32_t ea = 0x5cb04cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cb050(Cpu *restrict c) {
    FN_ENTER(0x5cb050u);
L_5cb050:;
    c->r[0] = 0x1185d1au;
    c->r[0] = 0x5cb05cu + c->r[0];
    return;
}
void f_5cb060(Cpu *restrict c) {
    FN_ENTER(0x5cb060u);
L_5cb060:;
    c->r[0] = 0x0u;
    return;
}
void f_5cb068(Cpu *restrict c) {
    FN_ENTER(0x5cb068u);
L_5cb068:;
    c->r[0] = 0x0u;
    return;
}
void f_5cb070(Cpu *restrict c) {
    FN_ENTER(0x5cb070u);
L_5cb070:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14c1054u;
    c->r[1] = 0x0u;
    c->r[12] = 0x1u;
    c->r[3] = 0x2u;
    c->r[2] = 0x6u;
    c->r[0] = 0x5cb094u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x146da94u;
    c->r[0] = 0x146e8b0u;
    c->r[3] = 0x68u;
    { uint32_t ea = 0x5cb0e8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1198ab6u;
    { uint32_t ea = 0x5cb0f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cb0f4u + c->r[1];
    c->r[14] = 0x5cb0f4u; f_9aedcc(c);
    c->r[1] = 0x14719bcu;
    { uint32_t ea = 0x5cb100u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb120(Cpu *restrict c) {
    FN_ENTER(0x5cb120u);
L_5cb120:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1471308u;
    { uint32_t ea = 0x5cb130u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cb134u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x5cb14cu; rt_dispatch(c);
    c->r[14] = 0x5cb150u; f_5cafe8(c);
    c->r[1] = 0x1471960u;
    c->r[2] = 0x1471960u;
    { uint32_t ea = 0x5cb160u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cb164u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    c->r[2] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb19c(Cpu *restrict c) {
    FN_ENTER(0x5cb19cu);
L_5cb19c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1471910u;
    { uint32_t ea = 0x5cb1b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cb1f0; }
    c->r[5] = 0x0u;
L_5cb1c4:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb1e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cb1e0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cb1e4:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cb1c4; }
L_5cb1f0:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb218; }
    c->r[0] = 0x146d954u;
    { uint32_t ea = 0x5cb208u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb208u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cb218u; rt_dispatch(c);
L_5cb218:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5cb230u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5cb008(c);
}
void f_5cb244(Cpu *restrict c) {
    FN_ENTER(0x5cb244u);
L_5cb244:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1471868u;
    { uint32_t ea = 0x5cb258u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cb298; }
    c->r[5] = 0x0u;
L_5cb26c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb28c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cb288u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cb28c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cb26c; }
L_5cb298:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb2c0; }
    c->r[0] = 0x146d8acu;
    { uint32_t ea = 0x5cb2b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb2b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cb2c0u; rt_dispatch(c);
L_5cb2c0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5cb2d8u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5cb2e0u; f_5cb008(c);
    c->r[0] = 0x147114cu;
    { uint32_t ea = 0x5cb2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb2ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cb30c(Cpu *restrict c) {
    FN_ENTER(0x5cb30cu);
L_5cb30c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cb350; }
    c->r[5] = 0x0u;
L_5cb324:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb344; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cb340u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cb344:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cb324; }
L_5cb350:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb378; }
    c->r[0] = 0x146d7f4u;
    { uint32_t ea = 0x5cb368u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb368u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cb378u; rt_dispatch(c);
L_5cb378:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cb390(Cpu *restrict c) {
    FN_ENTER(0x5cb390u);
L_5cb390:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x5cb3a4u; f_a871d8(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5cb3ccu; f_9bb638(c);
    c->r[1] = 0x11987ecu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cb3e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cb428(Cpu *restrict c) {
    FN_ENTER(0x5cb428u);
L_5cb428:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x340u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x5cb448u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x5cb464u; f_a2fb14(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x5cb470u; f_a2fb10(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x340u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cb484(Cpu *restrict c) {
    FN_ENTER(0x5cb484u);
L_5cb484:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[6] = c->r[13] + 0xcu;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x5cb4a4u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1470f74u;
    { uint32_t ea = 0x5cb4c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x5cb4ccu; f_a31b90(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x5cb4d8u; f_a2fb10(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cb4e8(Cpu *restrict c) {
    FN_ENTER(0x5cb4e8u);
L_5cb4e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x14715d0u;
    { uint32_t ea = 0x5cb4f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cb4fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0x5cb514u; rt_dispatch(c);
    c->r[1] = 0x14715a8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5cb524u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb534(Cpu *restrict c) {
    FN_ENTER(0x5cb534u);
L_5cb534:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1471584u;
    { uint32_t ea = 0x5cb548u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb564; }
    c->r[14] = 0x5cb55cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5cb564:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb570(Cpu *restrict c) {
    FN_ENTER(0x5cb570u);
L_5cb570:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1471548u;
    { uint32_t ea = 0x5cb584u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb5a0; }
    c->r[14] = 0x5cb598u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5cb5a0:;
    c->r[0] = 0x147151cu;
    { uint32_t ea = 0x5cb5acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb5acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cb5c8(Cpu *restrict c) {
    FN_ENTER(0x5cb5c8u);
L_5cb5c8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[8] = c->r[0];
    c->r[10] = 0x0u;
    c->r[0] = 0x1000u;
    c->r[11] = c->r[13] + 0x28u;
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14714c0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[8];
    { uint32_t ea = 0x5cb610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x14714b8u;
    { uint32_t ea = 0x5cb61cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x11985c5u;
    c->r[2] = 0x5cb628u + c->r[0];
    c->r[0] = 0x11923ddu;
    c->r[3] = 0x5cb630u + c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0x5cb634u; f_9af6e4(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x5cb63cu; f_9bb638(c);
    c->r[12] = c->r[11];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2003u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1471430u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x5cb6a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1471424u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x5cb6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1198536u;
    c->r[2] = 0x5cb6bcu + c->r[0];
    c->r[0] = 0x1192349u;
    c->r[3] = 0x5cb6c4u + c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0x5cb6c8u; f_9af6e4(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x5cb6d0u; f_9bb638(c);
    { uint32_t ea = c->r[11]; c->r[11] = c->r[11] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[11]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5cb72c(Cpu *restrict c) {
    FN_ENTER(0x5cb72cu);
L_5cb72c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cb734(Cpu *restrict c) {
    FN_ENTER(0x5cb734u);
L_5cb734:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb758; }
    c->r[14] = 0x5cb750u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
L_5cb758:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[4]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
}
void f_5cb770(Cpu *restrict c) {
    FN_ENTER(0x5cb770u);
L_5cb770:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_5cb774(Cpu *restrict c) {
    FN_ENTER(0x5cb774u);
L_5cb774:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cb778(Cpu *restrict c) {
    FN_ENTER(0x5cb778u);
L_5cb778:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cb77c(Cpu *restrict c) {
    FN_ENTER(0x5cb77cu);
L_5cb77c:;
    c->r[0] = 0x1470cb0u;
    { uint32_t ea = 0x5cb788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cb78c(Cpu *restrict c) {
    FN_ENTER(0x5cb78cu);
L_5cb78c:;
    c->r[0] = 0x119845eu;
    c->r[0] = 0x5cb798u + c->r[0];
    return;
}
void f_5cb79c(Cpu *restrict c) {
    FN_ENTER(0x5cb79cu);
L_5cb79c:;
    c->r[0] = 0x1471320u;
    { uint32_t ea = 0x5cb7a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cb7ac(Cpu *restrict c) {
    FN_ENTER(0x5cb7acu);
L_5cb7ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x5cb7b4u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_5cb7bc(Cpu *restrict c) {
    FN_ENTER(0x5cb7bcu);
L_5cb7bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0x146e1b8u;
    c->r[0] = 0x1470c48u;
    c->r[4] = 0x0u;
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5cb7e8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11983c5u;
    { uint32_t ea = 0x5cb7f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cb7f4u + c->r[1];
    c->r[14] = 0x5cb7f4u; f_9aedcc(c);
    c->r[1] = 0x14712c8u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5cb810u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146d340u;
    c->r[0] = 0x147129cu;
    { uint32_t ea = 0x5cb824u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11983a2u;
    { uint32_t ea = 0x5cb82cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cb830u + c->r[1];
    c->r[14] = 0x5cb830u; f_9aedcc(c);
    c->r[1] = 0x14712a0u;
    { uint32_t ea = 0x5cb83cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb868(Cpu *restrict c) {
    FN_ENTER(0x5cb868u);
L_5cb868:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146da10u;
    { uint32_t ea = 0x5cb878u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cb87cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x80u;
    c->pc = c->r[4]; c->r[14] = 0x5cb894u; rt_dispatch(c);
    c->r[14] = 0x5cb898u; f_a870b8(c);
    c->r[1] = 0x147123cu;
    { uint32_t ea = 0x5cb8a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cb8d8(Cpu *restrict c) {
    FN_ENTER(0x5cb8d8u);
L_5cb8d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14711f4u;
    { uint32_t ea = 0x5cb8ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb920; }
    c->r[0] = 0x146d274u;
    { uint32_t ea = 0x5cb908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb908u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cb918u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
L_5cb920:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb950; }
    c->r[0] = 0x146d244u;
    { uint32_t ea = 0x5cb938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb938u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cb948u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
L_5cb950:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cb980; }
    c->r[0] = 0x146d214u;
    { uint32_t ea = 0x5cb968u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb968u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cb978u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
L_5cb980:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5cb9ac(Cpu *restrict c) {
    FN_ENTER(0x5cb9acu);
L_5cb9ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5cb9b8u; f_5cb8d8(c);
    c->r[0] = 0x146d8c4u;
    { uint32_t ea = 0x5cb9c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cb9c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cb9dc(Cpu *restrict c) {
    FN_ENTER(0x5cb9dcu);
L_5cb9dc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0x5cb9f0u; f_a871d8(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[10] + 0x70u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5cba20u; f_9bb638(c);
    c->r[1] = 0x11981d8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cba30u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x220000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    c->r[9] = c->r[13];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5cbaa0u; f_9bb638(c);
    c->r[1] = 0x119815eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cbab4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x220000u;
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[10] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[10] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5cbb24u; f_9bb638(c);
    c->r[1] = 0x11980ecu;
    c->r[1] = 0x5cbb30u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x220000u;
    c->r[1] = c->r[1] + 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5cbb88(Cpu *restrict c) {
    FN_ENTER(0x5cbb88u);
L_5cbb88:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_5cbb8c(Cpu *restrict c) {
    FN_ENTER(0x5cbb8cu);
L_5cbb8c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5cbbacu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5cbbbcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbd6c; }
    c->r[6] = c->r[13];
    c->r[1] = c->r[5];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x5cbbd8u; f_a260d4(c);
    c->r[14] = 0x5cbbdcu; f_a26780(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x5cbbe8u; f_a263f8(c);
    c->r[1] = 0x5546u;
    c->r[8] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_5cbd60; }
    c->r[5] = c->r[13];
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbc0cu; f_a263f8(c);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbc18u; f_a263f8(c);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbc24u; f_a263f8(c);
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x146cf48u;
    { uint32_t ea = 0x5cbc34u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbc38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 2);
    c->pc = c->r[3]; c->r[14] = 0x5cbc50u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbc5cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 2);
    c->pc = c->r[3]; c->r[14] = 0x5cbc74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbc80u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] << 4);
    c->pc = c->r[3]; c->r[14] = 0x5cbc98u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbcd0; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
L_5cbcb0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbcb8u; f_a26780(c);
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[6] << 2); ST32(ea, c->r[0]); }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cbcb0; }
L_5cbcd0:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbd10; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
    c->r[7] = 0x0u;
L_5cbce8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbcf0u; f_a269f4(c);
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[0] = c->r[0] + c->r[6];
    c->r[6] = c->r[6] + 0x4u;
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cbce8; }
L_5cbd10:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbd60; }
    c->r[9] = 0x0u;
    c->r[5] = 0x8u;
    c->r[6] = c->r[13];
    c->r[7] = 0x0u;
L_5cbd30:;
    c->r[0] = c->r[6];
    c->r[14] = 0x5cbd38u; f_a273ac(c);
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[0] = c->r[0] + c->r[5];
    c->r[5] = c->r[5] + 0x10u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] - 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->v.s[0]); ST32(ea + 4u, c->v.s[1]); ST32(ea + 8u, c->v.s[2]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cbd30; }
L_5cbd60:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5cbd68u; f_a26130(c);
    goto L_5cbd70;
L_5cbd6c:;
    c->r[8] = 0x0u;
L_5cbd70:;
    c->r[0] = c->r[8];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cbd80(Cpu *restrict c) {
    FN_ENTER(0x5cbd80u);
L_5cbd80:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x338u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbda0u; f_a2772c(c);
    c->r[1] = 0x5546u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    c->r[14] = 0x5cbdacu; f_a27ad4(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[14] = 0x5cbdb8u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbdc4u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbdd0u; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbddcu; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbe10; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13] + 0x10u;
L_5cbdf0:;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbe00u; f_a27ad4(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cbdf0; }
L_5cbe10:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbe50; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[7] = 0x0u;
L_5cbe28:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbe3cu; f_a27bbc(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cbe28; }
L_5cbe50:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbea0; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[6] = c->r[13] + 0x4u;
L_5cbe68:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[7] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cbe90u; f_a283a8(c);
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cbe68; }
L_5cbea0:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x5cbea8u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x338u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cbeb4(Cpu *restrict c) {
    FN_ENTER(0x5cbeb4u);
L_5cbeb4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbeec; }
    c->r[0] = 0x146cca8u;
    { uint32_t ea = 0x5cbed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cbed4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cbee4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
L_5cbeec:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbf1c; }
    c->r[0] = 0x146cc78u;
    { uint32_t ea = 0x5cbf04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cbf04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cbf14u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
L_5cbf1c:;
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cbf4c; }
    c->r[0] = 0x146cc48u;
    { uint32_t ea = 0x5cbf34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cbf34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cbf44u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
L_5cbf4c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cbf6c(Cpu *restrict c) {
    FN_ENTER(0x5cbf6cu);
L_5cbf6c:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { return; }
    { uint32_t ea = c->r[2] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; } }
    return;
}
void f_5cbf90(Cpu *restrict c) {
    FN_ENTER(0x5cbf90u);
L_5cbf90:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_5cbfb4; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { return; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
L_5cbfb4:;
    return;
}
void f_5cbfbc(Cpu *restrict c) {
    FN_ENTER(0x5cbfbcu);
L_5cbfbc:;
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_5cbfe0; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + (c->r[1] << 4);
    c->r[1] = 0x146cb6cu;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = 0x5cbfe0u + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; } }
    return;
L_5cbfe0:;
    c->r[0] = 0x146cb60u;
    { uint32_t ea = 0x5cbfecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cbff4(Cpu *restrict c) {
    FN_ENTER(0x5cbff4u);
L_5cbff4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cbff8(Cpu *restrict c) {
    FN_ENTER(0x5cbff8u);
L_5cbff8:;
    c->r[0] = 0x146d284u;
    { uint32_t ea = 0x5cc004u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cc008(Cpu *restrict c) {
    FN_ENTER(0x5cc008u);
L_5cc008:;
    c->r[0] = 0x1197c13u;
    c->r[0] = 0x5cc014u + c->r[0];
    return;
}
void f_5cc018(Cpu *restrict c) {
    FN_ENTER(0x5cc018u);
L_5cc018:;
    c->r[0] = 0x1197bd6u;
    c->r[0] = 0x5cc024u + c->r[0];
    return;
}
void f_5cc028(Cpu *restrict c) {
    FN_ENTER(0x5cc028u);
L_5cc028:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cc030(Cpu *restrict c) {
    FN_ENTER(0x5cc030u);
L_5cc030:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cc038(Cpu *restrict c) {
    FN_ENTER(0x5cc038u);
L_5cc038:;
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cc040(Cpu *restrict c) {
    FN_ENTER(0x5cc040u);
L_5cc040:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0x146cb10u;
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x146d214u;
    { uint32_t ea = 0x5cc06cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1197b82u;
    { uint32_t ea = 0x5cc074u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cc078u + c->r[1];
    c->r[14] = 0x5cc078u; f_9aedcc(c);
    c->r[1] = 0x1470a60u;
    { uint32_t ea = 0x5cc084u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cc0a0(Cpu *restrict c) {
    FN_ENTER(0x5cc0a0u);
L_5cc0a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146d5b4u;
    { uint32_t ea = 0x5cc0b0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cc0b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x5cc0ccu; rt_dispatch(c);
    c->r[14] = 0x5cc0d0u; f_a870b8(c);
    c->r[1] = 0x1470a0cu;
    { uint32_t ea = 0x5cc0dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146ca74u;
    { uint32_t ea = 0x5cc0ecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x12u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cc11c(Cpu *restrict c) {
    FN_ENTER(0x5cc11cu);
L_5cc11c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14709b8u;
    { uint32_t ea = 0x5cc130u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cc170; }
    c->r[5] = 0x0u;
L_5cc144:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc164; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cc160u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cc164:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cc144; }
L_5cc170:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc198; }
    c->r[0] = 0x146c9d4u;
    { uint32_t ea = 0x5cc188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cc188u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc198u; rt_dispatch(c);
L_5cc198:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5cc1b0u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5cc1c4(Cpu *restrict c) {
    FN_ENTER(0x5cc1c4u);
L_5cc1c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1470910u;
    { uint32_t ea = 0x5cc1d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cc218; }
    c->r[5] = 0x0u;
L_5cc1ec:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc20c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cc208u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cc20c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cc1ec; }
L_5cc218:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc240; }
    c->r[0] = 0x146c92cu;
    { uint32_t ea = 0x5cc230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cc230u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc240u; rt_dispatch(c);
L_5cc240:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5cc258u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5cc260u; f_a87100(c);
    c->r[0] = 0x146d3f8u;
    { uint32_t ea = 0x5cc26cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cc26cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cc28c(Cpu *restrict c) {
    FN_ENTER(0x5cc28cu);
L_5cc28c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x5cc2a0u; f_a871d8(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5cc2c8u; f_9bb638(c);
    c->r[1] = 0x119788eu;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cc2dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cc324(Cpu *restrict c) {
    FN_ENTER(0x5cc324u);
L_5cc324:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_5cc328(Cpu *restrict c) {
    FN_ENTER(0x5cc328u);
L_5cc328:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[5] = c->r[13] + 0x14u;
    c->r[11] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc344u; f_a260d4(c);
    c->r[14] = 0x5cc348u; f_a26780(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc354u; f_a263f8(c);
    c->r[1] = 0x544du;
    c->r[4] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x440000u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { c->r[1] = 0x22afu; }
    if (COND_EQ) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xc010000u; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_5cc56c; }
    { uint32_t ea = c->r[11] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cc3b0; }
    c->r[5] = 0x0u;
L_5cc384:;
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc3a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cc3a0u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cc3a4:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cc384; }
L_5cc3b0:;
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc3d8; }
    c->r[0] = 0x146c794u;
    { uint32_t ea = 0x5cc3c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cc3c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc3d8u; rt_dispatch(c);
L_5cc3d8:;
    c->r[9] = 0x0u;
    c->r[0] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[11] + 0x74u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[11] + 0x68u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5cc3f0u; f_a263f8(c);
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5cc56c; }
    c->r[0] = 0x14706dcu;
    c->r[5] = c->r[13] + 0x14u;
    { uint32_t ea = 0x5cc410u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x14706d8u;
    { uint32_t ea = 0x5cc418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x146c734u;
    { uint32_t ea = 0x5cc428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
L_5cc42c:;
    c->r[0] = c->r[8];
    c->r[14] = 0x5cc434u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x60u;
    c->pc = c->r[7]; c->r[14] = 0x5cc44cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x5au;
    c->r[14] = 0x5cc460u; f_15efd7c(c);
    { uint32_t ea = c->r[11] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CS) { goto L_5cc484; }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[11] + 0x68u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_5cc4fc;
L_5cc484:;
    c->r[0] = c->r[10];
    c->r[14] = 0x5cc48cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[7] + 0x10u;
    c->r[2] = 0x10u;
    c->r[8] = (c->r[4] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x5cc4a8u; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[7] = c->r[0];
    c->r[14] = 0x5cc4b4u; f_15efd7c(c);
    { uint32_t ea = c->r[11] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0x5cc4c8u; f_15efdd0(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x5cc4d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc4e0u; rt_dispatch(c);
    { uint32_t ea = c->r[11] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[11] + 0x68u; ST32(ea, c->r[1]); }
L_5cc4fc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc510u; f_a262e8(c);
    { uint32_t ea = c->r[6] + 0x8u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc51cu; f_a262e8(c);
    { uint32_t ea = c->r[6] + 0xau; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc528u; f_a262e8(c);
    { uint32_t ea = c->r[6] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc534u; f_a262e8(c);
    c->r[7] = 0x10u;
    { uint32_t ea = c->r[6] + 0xeu; ST16(ea, c->r[0]); }
L_5cc53c:;
    c->r[0] = c->r[5];
    c->r[4] = c->r[6] + c->r[7];
    c->r[14] = 0x5cc548u; f_a262e8(c);
    c->r[7] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], 0x5eu);
    if (COND_NE) { goto L_5cc53c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_NE) { goto L_5cc42c; }
    c->r[4] = 0x1u;
L_5cc56c:;
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x5cc574u; f_a26130(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5cc590(Cpu *restrict c) {
    FN_ENTER(0x5cc590u);
L_5cc590:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[5] = c->r[13];
    c->r[8] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc5b0u; f_a2772c(c);
    c->r[1] = 0x544du;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x440000u;
    c->r[14] = 0x5cc5bcu; f_a27ad4(c);
    c->r[1] = 0x22afu;
    c->r[0] = c->r[5];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc010000u;
    c->r[14] = 0x5cc5ccu; f_a27998(c);
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc5d8u; f_a27998(c);
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc654; }
    c->r[6] = 0x0u;
    c->r[5] = c->r[13];
L_5cc5ec:;
    { uint32_t ea = c->r[8] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[14] = 0x5cc600u; f_a278e0(c);
    { uint32_t ea = c->r[7] + 0xau; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc60cu; f_a278e0(c);
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc618u; f_a278e0(c);
    { uint32_t ea = c->r[7] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc624u; f_a278e0(c);
    c->r[4] = 0x10u;
L_5cc628:;
    c->r[0] = c->r[7] + c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cc638u; f_a278e0(c);
    c->r[4] = c->r[4] + 0x2u;
    (void)f_subs(c, c->r[4], 0x5eu);
    if (COND_NE) { goto L_5cc628; }
    { uint32_t ea = c->r[8] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cc5ec; }
L_5cc654:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5cc65cu; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cc668(Cpu *restrict c) {
    FN_ENTER(0x5cc668u);
L_5cc668:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cc6ac; }
    c->r[5] = 0x0u;
L_5cc680:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc6a0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cc69cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cc6a0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cc680; }
L_5cc6ac:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc6d4; }
    c->r[0] = 0x146c498u;
    { uint32_t ea = 0x5cc6c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cc6c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc6d4u; rt_dispatch(c);
L_5cc6d4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cc6ec(Cpu *restrict c) {
    FN_ENTER(0x5cc6ecu);
L_5cc6ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_5cc764; }
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5cc724u; rt_dispatch(c);
    c->r[1] = 0x14703b8u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x5cc734u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_5cc74c; }
    goto L_5cc760;
L_5cc740:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_5cc760; }
L_5cc74c:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5cc740; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_5cc760:;
    c->r[0] = c->r[4];
L_5cc764:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cc76c(Cpu *restrict c) {
    FN_ENTER(0x5cc76cu);
L_5cc76c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1470370u;
    { uint32_t ea = 0x5cc77cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cc780u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x60u;
    c->pc = c->r[4]; c->r[14] = 0x5cc798u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x1470348u;
    { uint32_t ea = 0x5cc7a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[1] = 0x5au;
    c->r[14] = 0x5cc7b8u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cc7c8(Cpu *restrict c) {
    FN_ENTER(0x5cc7c8u);
L_5cc7c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1470314u;
    { uint32_t ea = 0x5cc7dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc82c; }
L_5cc7ec:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5cc7ec; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5cc824; }
    c->r[0] = 0x146c370u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cc818u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc824u; rt_dispatch(c);
L_5cc824:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5cc82c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cc83c(Cpu *restrict c) {
    FN_ENTER(0x5cc83cu);
L_5cc83c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x14702a0u;
    { uint32_t ea = 0x5cc850u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cc8a0; }
L_5cc860:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5cc860; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5cc898; }
    c->r[0] = 0x146c2fcu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cc88cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cc898u; rt_dispatch(c);
L_5cc898:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5cc8a0:;
    c->r[0] = 0x1470240u;
    { uint32_t ea = 0x5cc8acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cc8acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cc8cc(Cpu *restrict c) {
    FN_ENTER(0x5cc8ccu);
L_5cc8cc:;
    return;
}
void f_5cc8d0(Cpu *restrict c) {
    FN_ENTER(0x5cc8d0u);
L_5cc8d0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cc8d4(Cpu *restrict c) {
    FN_ENTER(0x5cc8d4u);
L_5cc8d4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cc8d8(Cpu *restrict c) {
    FN_ENTER(0x5cc8d8u);
L_5cc8d8:;
    c->r[0] = 0x146cd80u;
    { uint32_t ea = 0x5cc8e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cc8e8(Cpu *restrict c) {
    FN_ENTER(0x5cc8e8u);
L_5cc8e8:;
    c->r[0] = 0x1197344u;
    c->r[0] = 0x5cc8f4u + c->r[0];
    return;
}
void f_5cc8f8(Cpu *restrict c) {
    FN_ENTER(0x5cc8f8u);
L_5cc8f8:;
    c->r[0] = 0x1197327u;
    c->r[0] = 0x5cc904u + c->r[0];
    return;
}
void f_5cc908(Cpu *restrict c) {
    FN_ENTER(0x5cc908u);
L_5cc908:;
    c->r[0] = 0x14701d8u;
    { uint32_t ea = 0x5cc914u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cc918(Cpu *restrict c) {
    FN_ENTER(0x5cc918u);
L_5cc918:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14bf888u;
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    c->r[3] = 0x8u;
    c->r[12] = 0x9u;
    c->r[14] = 0x5u;
    c->r[5] = 0x6u;
    c->r[0] = 0x5cc948u + c->r[0];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[11] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[12]); ST32(ea + 16u, c->r[14]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[2] = 0x10000u;
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x80000000u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = f_adds(c, c->r[2], 0xf0000u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x146c1ccu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[0] = 0x146ccacu;
    { uint32_t ea = 0x5cc9b0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x119726fu;
    { uint32_t ea = 0x5cc9b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cc9bcu + c->r[1];
    c->r[14] = 0x5cc9bcu; f_9aedcc(c);
    c->r[1] = 0x147011cu;
    c->r[3] = 0x60u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5cc9d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146c178u;
    c->r[0] = 0x14700f8u;
    { uint32_t ea = 0x5cc9ecu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x118a1b2u;
    { uint32_t ea = 0x5cc9f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cc9f8u + c->r[1];
    c->r[14] = 0x5cc9f8u; f_9aedcc(c);
    c->r[1] = 0x14700f4u;
    { uint32_t ea = 0x5cca04u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cca34(Cpu *restrict c) {
    FN_ENTER(0x5cca34u);
L_5cca34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x14700b8u;
    { uint32_t ea = 0x5cca44u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cca48u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x7cu;
    c->pc = c->r[5]; c->r[14] = 0x5cca60u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x5cca68u; f_a87810(c);
    c->r[0] = 0x146c110u;
    c->r[6] = 0x0u;
    c->r[1] = 0x50u;
    { uint32_t ea = 0x5cca7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x1470078u;
    { uint32_t ea = 0x5cca88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    c->r[14] = 0x5cca9cu; f_15efd7c(c);
    c->r[0] = 0x364u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5ccaacu; f_9bdb48(c);
    c->r[1] = 0x8000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x5ccac0u; f_9bdbb0(c);
    c->r[0] = 0x1470034u;
    c->r[1] = 0x208u;
    { uint32_t ea = 0x5ccad0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x15cu;
    { uint32_t ea = c->r[5] + 0x158u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5ccae0u; f_15efd7c(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    c->r[14] = 0x5ccaecu; f_9bdef0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5ccb04(Cpu *restrict c) {
    FN_ENTER(0x5ccb04u);
L_5ccb04:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x146ffe0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5ccb1cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5ccb20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5ccb40(Cpu *restrict c) {
    FN_ENTER(0x5ccb40u);
L_5ccb40:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5ccb4cu; f_a87810(c);
    c->r[0] = 0x146c02cu;
    c->r[6] = 0x0u;
    c->r[1] = 0x50u;
    { uint32_t ea = 0x5ccb60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x146ff94u;
    { uint32_t ea = 0x5ccb6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    c->r[14] = 0x5ccb80u; f_15efd7c(c);
    c->r[0] = 0x364u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5ccb90u; f_9bdb48(c);
    c->r[1] = 0x8000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[5] = c->r[0];
    c->r[14] = 0x5ccba4u; f_9bdbb0(c);
    c->r[0] = 0x146ff50u;
    c->r[1] = 0x208u;
    { uint32_t ea = 0x5ccbb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x15cu;
    { uint32_t ea = c->r[5] + 0x158u; ST8(ea, c->r[6]); }
    c->r[14] = 0x5ccbc4u; f_15efd7c(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    c->r[14] = 0x5ccbd0u; f_9bdef0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5ccbe4(Cpu *restrict c) {
    FN_ENTER(0x5ccbe4u);
L_5ccbe4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146ff08u;
    { uint32_t ea = 0x5ccbf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ccc04u; f_5cd414(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ccc40; }
    c->r[5] = 0xe100u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x5f50000u;
L_5ccc18:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x5ccc24u; f_15efdb8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5ccc34u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ccc18; }
L_5ccc40:;
    c->r[5] = 0xbu;
L_5ccc44:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[14] = 0x5ccc50u; f_5ccd50(c); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x1fu);
    if (COND_NE) { goto L_5ccc44; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5ccc6cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ccca8; }
    c->r[5] = 0xe100u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x5f50000u;
L_5ccc80:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x5ccc8cu; f_15efdb8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5ccc9cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ccc80; }
L_5ccca8:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cccb4u; f_9bdee0(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[5] + 0x158u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cccc4u; f_9bdee8(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cccccu; f_9bdf78(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5cccf8; }
    c->r[5] = 0xe100u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x5f50000u;
L_5cccdc:;
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x5ccce8u; f_15efdb8(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cccf0u; f_9bdf78(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_5cccdc; }
L_5cccf8:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ccd18; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5ccd10u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_5ccd18:;
    c->r[0] = 0x146fde0u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x5ccd28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x146be54u;
    { uint32_t ea = 0x5ccd38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_5ccd50(Cpu *restrict c) {
    FN_ENTER(0x5ccd50u);
L_5ccd50:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x146be24u;
    { uint32_t ea = 0x5ccd68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5ccdc4; }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ccdc4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5ccd90u; f_9bdee0(c);
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x264u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5ccdb4u; f_9bdee8(c);
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x3fu;
    { uint32_t ea = c->r[5] + 0x160u; ST32(ea, c->r[0]); }
L_5ccdc4:;
    c->r[5] = c->r[13] + 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5ccdd8u; f_15effb0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5ccde0u; f_15efe00(c);
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5ccdf0u; f_15efe0c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5ccdf8u; f_15f004c(c);
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cce04(Cpu *restrict c) {
    FN_ENTER(0x5cce04u);
L_5cce04:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5cce10u; f_5ccbe4(c);
    c->r[0] = 0x146fce0u;
    { uint32_t ea = 0x5cce1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cce1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cce34(Cpu *restrict c) {
    FN_ENTER(0x5cce34u);
L_5cce34:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_5ccea0; }
L_5cce60:;
    c->r[0] = 0x1cu;
    c->r[14] = 0x5cce68u; f_9af37c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x146fc90u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5cce7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
L_5cce98:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_5ccea0:;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_5cce60; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_5cce98; }
    goto L_5cce60;
}
void f_5ccf9c(Cpu *restrict c) {
    FN_ENTER(0x5ccf9cu);
L_5ccf9c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = 0x1183da2u;
    c->r[4] = c->r[1];
    c->r[6] = c->r[0] + 0x2cu;
    c->r[7] = 0x0u;
L_5ccfb0:;
    { uint32_t ea = c->r[6] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5ccfdc; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[0] = 0x5ccfd4u + c->r[8]; }
    c->r[14] = 0x5ccfd4u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ccfec; }
L_5ccfdc:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x14u);
    if (COND_LT) { goto L_5ccfb0; }
    c->r[5] = 0x0u;
L_5ccfec:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5ccff8(Cpu *restrict c) {
    FN_ENTER(0x5ccff8u);
L_5ccff8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd220; }
    c->r[4] = 0x1183d32u;
    c->r[7] = 0x0u;
L_5cd01c:;
    c->r[0] = c->r[5] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5cd04c; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[8];
    if (COND_EQ) { c->r[0] = 0x5cd044u + c->r[4]; }
    c->r[14] = 0x5cd044u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd05c; }
L_5cd04c:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x14u);
    if (COND_LT) { goto L_5cd01c; }
    goto L_5cd128;
L_5cd05c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_5cd07c; }
    c->r[7] = 0x1183c62u;
    c->r[6] = 0xe100u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x5f50000u;
    goto L_5cd0e8;
L_5cd07c:;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_5cd0b8; }
    c->r[4] = c->r[13] + 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5cd098u; f_15effb0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5cd0a0u; f_15efe00(c);
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cd0b0u; f_15efe0c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5cd0b8u; f_15f004c(c);
L_5cd0b8:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5cd0cc:;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x5cd0d8u; f_15efdb8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5cd0e8u; rt_dispatch(c);
L_5cd0e8:;
    c->r[4] = 0x0u;
L_5cd0ec:;
    c->r[0] = c->r[5] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd11c; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[8];
    if (COND_EQ) { c->r[0] = 0x5cd114u + c->r[7]; }
    c->r[14] = 0x5cd114u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd0cc; }
L_5cd11c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x14u);
    if (COND_LT) { goto L_5cd0ec; }
L_5cd128:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd130u; f_5cce34(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5cd220; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1183c22u;
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0x5cd154u + c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_EQ) { goto L_5cd20c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd1a0; }
L_5cd160:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5cd160; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5cd198; }
    c->r[0] = 0x146b9fcu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cd18cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cd198u; rt_dispatch(c);
L_5cd198:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
L_5cd1a0:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5cd204; }
    c->r[0] = c->r[8];
    c->r[14] = 0x5cd1b0u; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5cd204; }
    c->r[0] = 0x146b9bcu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5cd1ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x5cd1dcu; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x5cd200u; f_15efd94(c);
    goto L_5cd20c;
L_5cd204:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
L_5cd20c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd214u; f_5cd23c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5cd220:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cd23c(Cpu *restrict c) {
    FN_ENTER(0x5cd23cu);
L_5cd23c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = 0x146b938u;
    { uint32_t ea = 0x5cd254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5cd2b0; }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5cd2b0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd27cu; f_9bdee0(c);
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x264u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd2a0u; f_9bdee8(c);
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x3fu;
    { uint32_t ea = c->r[5] + 0x160u; ST32(ea, c->r[0]); }
L_5cd2b0:;
    c->r[5] = c->r[13] + 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[6] = 0x1u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd2c8u; f_15effb0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd2d0u; f_15efe00(c);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x5cd2dcu; f_15efe0c(c);
    c->r[0] = 0x146bac0u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x5cd2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cd2f0u; f_5dd72c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd2f8u; f_15f004c(c);
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cd308(Cpu *restrict c) {
    FN_ENTER(0x5cd308u);
L_5cd308:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[6] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cd3f8; }
    c->r[9] = 0x1183a22u;
    c->r[7] = c->r[0] + 0x2cu;
    c->r[5] = 0x0u;
L_5cd330:;
    { uint32_t ea = c->r[7] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5cd35c; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[6];
    if (COND_EQ) { c->r[0] = 0x5cd354u + c->r[9]; }
    c->r[14] = 0x5cd354u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd36c; }
L_5cd35c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x14u);
    if (COND_LT) { goto L_5cd330; }
    goto L_5cd3f8;
L_5cd36c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5cd398; }
    c->r[6] = 0xe100u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x5f50000u;
L_5cd380:;
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0x5cd38cu; f_15efdb8(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5cd380; }
L_5cd398:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_LT) { { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[8]); } }
    if (COND_LT) { c->r[1] = c->r[8]; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5cd3f8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cd400; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd3d8u; f_15effb0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd3e0u; f_15efe00(c);
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd3f0u; f_15efe0c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd3f8u; f_15f004c(c);
L_5cd3f8:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5cd400:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5ccd50(c);
}
void f_5cd414(Cpu *restrict c) {
    FN_ENTER(0x5cd414u);
L_5cd414:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[6] = 0xbu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[5]); }
L_5cd42c:;
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd4b8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_5cd4b8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x5cd450u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5cd46cu: goto L_5cd46c; case 0x5cd474u: goto L_5cd474; case 0x5cd498u: goto L_5cd498; case 0x5cd4b8u: goto L_5cd4b8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5cd46c:;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[7]); }
    goto L_5cd4b8;
L_5cd474:;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_GE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_GE) { { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5cd4b8; }
    c->r[14] = 0x5cd494u; f_5ccd50(c);
    goto L_5cd4b8;
L_5cd498:;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd4b4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cd4b4u; rt_dispatch(c);
L_5cd4b4:;
    { uint32_t ea = c->r[4] + (c->r[6] << 2); ST32(ea, c->r[5]); }
L_5cd4b8:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x1fu);
    if (COND_NE) { goto L_5cd42c; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cd4c8(Cpu *restrict c) {
    FN_ENTER(0x5cd4c8u);
L_5cd4c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[8] = 0x1183872u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0] + 0x2cu;
    c->r[7] = 0x0u;
L_5cd4e0:;
    { uint32_t ea = c->r[5] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5cd50c; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[0] = 0x5cd504u + c->r[8]; }
    c->r[14] = 0x5cd504u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd520; }
L_5cd50c:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x14u);
    if (COND_LT) { goto L_5cd4e0; }
    c->r[4] = 0x0u;
    goto L_5cd55c;
L_5cd520:;
    c->r[5] = c->r[13] + 0x4u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd538u; f_15effb0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd540u; f_15efe00(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd54cu; f_15efe0c(c);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cd554u; f_15f004c(c);
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_EQ) { c->r[4] = 0x1u; }
L_5cd55c:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cd56c(Cpu *restrict c) {
    FN_ENTER(0x5cd56cu);
L_5cd56c:;
    c->r[0] = 0x0u;
    return;
}
void f_5cd574(Cpu *restrict c) {
    FN_ENTER(0x5cd574u);
L_5cd574:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146f584u;
    { uint32_t ea = 0x5cd588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd5d8; }
L_5cd598:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5cd598; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5cd5d0; }
    c->r[0] = 0x146b5c4u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cd5c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cd5d0u; rt_dispatch(c);
L_5cd5d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_5cd5d8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cd5e8(Cpu *restrict c) {
    FN_ENTER(0x5cd5e8u);
L_5cd5e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146f510u;
    { uint32_t ea = 0x5cd5fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd644; }
L_5cd60c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5cd60c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5cd644; }
    c->r[0] = 0x146b550u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cd638u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cd644u; rt_dispatch(c);
L_5cd644:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cd658(Cpu *restrict c) {
    FN_ENTER(0x5cd658u);
L_5cd658:;
    __attribute__((musttail)) return f_9bdd54(c);
}
void f_5cd65c(Cpu *restrict c) {
    FN_ENTER(0x5cd65cu);
L_5cd65c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x5cd664u; f_9bdd54(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9bdb84(c);
}
void f_5cd66c(Cpu *restrict c) {
    FN_ENTER(0x5cd66cu);
L_5cd66c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5cd774; }
    c->r[8] = 0xf080u;
    c->r[11] = 0xe100u;
    c->r[5] = 0x0u;
    c->r[7] = c->r[13];
    c->r[9] = 0x5u;
    c->r[10] = 0x2u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x2fa0000u;
    c->r[11] = (c->r[11] & 0xFFFFu) | 0x5f50000u;
L_5cd6a4:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5cd6f8; }
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_5cd708; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5cd740; }
    c->r[0] = c->r[11];
    c->r[1] = 0x0u;
    c->r[14] = 0x5cd6d8u; f_15efdb8(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5cd6e8u; f_15effb0(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x5cd6f0u; f_15efe00(c);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[10]); }
    goto L_5cd730;
L_5cd6f8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0x5cd704u; f_15efdb8(c);
    goto L_5cd768;
L_5cd708:;
    c->r[0] = c->r[11];
    c->r[1] = 0x0u;
    c->r[14] = 0x5cd714u; f_15efdb8(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5cd724u; f_15effb0(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x5cd72cu; f_15efe00(c);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[9]); }
L_5cd730:;
    c->r[0] = c->r[7];
    c->r[14] = 0x5cd738u; f_15efe0c(c);
    c->r[0] = c->r[7];
    c->r[14] = 0x5cd740u; f_15f004c(c);
L_5cd740:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x264u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] & 0x3fu;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
L_5cd768:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd6a4; }
L_5cd774:;
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5cd77c(Cpu *restrict c) {
    FN_ENTER(0x5cd77cu);
L_5cd77c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5cd780(Cpu *restrict c) {
    FN_ENTER(0x5cd780u);
L_5cd780:;
    c->r[0] = 0x146f370u;
    { uint32_t ea = 0x5cd78cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5cd790(Cpu *restrict c) {
    FN_ENTER(0x5cd790u);
L_5cd790:;
    c->r[1] = 0x146f368u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5cd7a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146b3dcu;
    { uint32_t ea = 0x5cd7b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_5cd7bc(Cpu *restrict c) {
    FN_ENTER(0x5cd7bcu);
L_5cd7bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x146f338u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5cd7d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146b3acu;
    { uint32_t ea = 0x5cd7e0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[14] = 0x5cd7e4u; f_a8784c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a877e4(c);
}
void f_5cd7f4(Cpu *restrict c) {
    FN_ENTER(0x5cd7f4u);
L_5cd7f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14be9f0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x5cd820u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[1] = 0x146b6d8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x8u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x9u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[0] = 0x146f284u;
    { uint32_t ea = 0x5cd86cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11963c4u;
    c->r[3] = 0x7cu;
    { uint32_t ea = 0x5cd878u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5cd87cu + c->r[1];
    c->r[14] = 0x5cd87cu; f_9aedcc(c);
    c->r[1] = 0x146f288u;
    { uint32_t ea = 0x5cd888u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cd8a8(Cpu *restrict c) {
    FN_ENTER(0x5cd8a8u);
L_5cd8a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146f25cu;
    { uint32_t ea = 0x5cd8b8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cd8bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x5cd8d4u; rt_dispatch(c);
    c->r[14] = 0x5cd8d8u; f_a870b8(c);
    c->r[1] = 0x146f234u;
    { uint32_t ea = 0x5cd8e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146b26cu;
    { uint32_t ea = 0x5cd8f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    c->r[1] = 0x12u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cd924(Cpu *restrict c) {
    FN_ENTER(0x5cd924u);
L_5cd924:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146f1e0u;
    { uint32_t ea = 0x5cd938u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cd978; }
    c->r[5] = 0x0u;
L_5cd94c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd96c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cd968u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cd96c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cd94c; }
L_5cd978:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cd9a0; }
    c->r[0] = 0x146b1ccu;
    { uint32_t ea = 0x5cd990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cd990u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cd9a0u; rt_dispatch(c);
L_5cd9a0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5cd9b8u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5cd9cc(Cpu *restrict c) {
    FN_ENTER(0x5cd9ccu);
L_5cd9cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146f138u;
    { uint32_t ea = 0x5cd9e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cda20; }
    c->r[5] = 0x0u;
L_5cd9f4:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cda14; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cda10u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cda14:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cd9f4; }
L_5cda20:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cda48; }
    c->r[0] = 0x146b124u;
    { uint32_t ea = 0x5cda38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cda38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cda48u; rt_dispatch(c);
L_5cda48:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x5cda60u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5cda68u; f_a87100(c);
    c->r[0] = 0x146f0a0u;
    { uint32_t ea = 0x5cda74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cda74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cda94(Cpu *restrict c) {
    FN_ENTER(0x5cda94u);
L_5cda94:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[14] = 0x5cdaa8u; f_a871d8(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0x5cdad0u; f_9bb638(c);
    c->r[1] = 0x1196086u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5cdae4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[5] + 0x64u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cdb2c(Cpu *restrict c) {
    FN_ENTER(0x5cdb2cu);
L_5cdb2c:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_5cdb30(Cpu *restrict c) {
    FN_ENTER(0x5cdb30u);
L_5cdb30:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[5] = c->r[13] + 0x14u;
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdb4cu; f_a260d4(c);
    c->r[14] = 0x5cdb50u; f_a26780(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdb5cu; f_a263f8(c);
    c->r[1] = 0x5052u;
    c->r[7] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { c->r[1] = 0x776fu; }
    if (COND_EQ) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x1330000u; }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_5cde48; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cdbb8; }
    c->r[5] = 0x0u;
L_5cdb8c:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cdbac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cdba8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cdbac:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cdb8c; }
L_5cdbb8:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cdbe0; }
    c->r[0] = 0x146af8cu;
    { uint32_t ea = 0x5cdbd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cdbd0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cdbe0u; rt_dispatch(c);
L_5cdbe0:;
    c->r[5] = 0x0u;
    c->r[0] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    c->r[14] = 0x5cdbf8u; f_a263f8(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5cde48; }
    c->r[0] = 0x146ef04u;
    c->r[11] = 0x0u;
    { uint32_t ea = 0x5cdc18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x146eefcu;
    { uint32_t ea = 0x5cdc24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x8u;
    c->r[0] = 0x146af18u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0x5cdc34u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x146af1cu;
    { uint32_t ea = 0x5cdc40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[10] = v; }
L_5cdc44:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5cdc50u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[7]; c->r[14] = 0x5cdc68u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x20u; ST16(ea, c->r[5]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x22u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CS) { goto L_5cdcd8; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    goto L_5cdd54;
L_5cdcd8:;
    c->r[0] = c->r[10];
    c->r[14] = 0x5cdce0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[7] + 0x10u;
    c->r[2] = 0x10u;
    c->r[8] = (c->r[9] << 2);
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x5cdcfcu; rt_dispatch(c);
    c->r[1] = c->r[8];
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
    c->r[14] = 0x5cdd0cu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0x5cdd20u; f_15efdd0(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x5cdd28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cdd38u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[1]); }
L_5cdd54:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    c->r[7] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[11] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cdd6cu; f_a273ac(c);
    c->r[0] = c->r[6] + 0x10u;
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->v.s[0]); ST32(ea + 4u, c->v.s[1]); ST32(ea + 8u, c->v.s[2]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cdd80u; f_a263f8(c);
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cdd8cu; f_a262e8(c);
    { uint32_t ea = c->r[6] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_5cddb8; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cdda8u; f_a261fc(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5cddc8; }
L_5cddb8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
L_5cddc8:;
    { uint32_t ea = c->r[6] + 0x2eu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_5cddf0; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cdde0u; f_a261fc(c);
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5cde00; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5cddf0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
L_5cde00:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[6] + 0x2fu; ST8(ea, c->r[2]); }
    c->r[14] = 0x5cde0cu; f_a269f4(c);
    c->r[0] = c->r[7];
    ST32(c->r[6] + 36u, c->v.s[0]);
    c->r[14] = 0x5cde18u; f_a2666c(c);
    { uint32_t ea = c->r[6] + 0x20u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cde24u; f_a262e8(c);
    { uint32_t ea = c->r[6] + 0x22u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x5cde30u; f_a263f8(c);
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[0]); }
    c->r[11] = c->r[11] + 0x1u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[11]);
    if (COND_NE) { goto L_5cdc44; }
    c->r[7] = 0x1u;
L_5cde48:;
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x5cde50u; f_a26130(c);
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5cde70(Cpu *restrict c) {
    FN_ENTER(0x5cde70u);
L_5cde70:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x338u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[9] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x5cde90u; f_a2772c(c);
    c->r[1] = 0x5052u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x500000u;
    c->r[14] = 0x5cde9cu; f_a27ad4(c);
    c->r[1] = 0x776fu;
    c->r[0] = c->r[5];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1330000u;
    c->r[14] = 0x5cdeacu; f_a27998(c);
    { uint32_t ea = c->r[9] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdeb8u; f_a27998(c);
    { uint32_t ea = c->r[9] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cdfc8; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[13] + 0x10u;
    c->r[8] = c->r[13] + 0x4u;
L_5cded0:;
    { uint32_t ea = c->r[9] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdefcu; f_a283a8(c);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdf08u; f_a27998(c);
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdf14u; f_a278e0(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2eu; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5cdf3c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5cdf38u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5cdf3c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x2fu; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5cdf74; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5cdf70u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5cdf74:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->v.s[0] = LD32(c->r[6] + 36u);
    c->r[14] = 0x5cdf94u; f_a27bbc(c);
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdfa0u; f_a27a80(c);
    { uint32_t ea = c->r[6] + 0x22u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdfacu; f_a278e0(c);
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cdfb8u; f_a27998(c);
    { uint32_t ea = c->r[9] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cded0; }
L_5cdfc8:;
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x5cdfd0u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x338u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cdfdc(Cpu *restrict c) {
    FN_ENTER(0x5cdfdcu);
L_5cdfdc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ce020; }
    c->r[5] = 0x0u;
L_5cdff4:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ce014; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5ce010u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_5ce014:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_5cdff4; }
L_5ce020:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ce048; }
    c->r[0] = 0x146ab24u;
    { uint32_t ea = 0x5ce038u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ce038u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ce048u; rt_dispatch(c);
L_5ce048:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5ce060(Cpu *restrict c) {
    FN_ENTER(0x5ce060u);
L_5ce060:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_5ce0d8; }
    { uint32_t ea = c->r[2] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5ce098u; rt_dispatch(c);
    c->r[1] = 0x146ea74u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x5ce0a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_5ce0c0; }
    goto L_5ce0d4;
L_5ce0b4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_5ce0d4; }
L_5ce0c0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5ce0b4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_5ce0d4:;
    c->r[0] = c->r[4];
L_5ce0d8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ce0e0(Cpu *restrict c) {
    FN_ENTER(0x5ce0e0u);
L_5ce0e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146ea2cu;
    { uint32_t ea = 0x5ce0f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ce0f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x40u;
    c->pc = c->r[4]; c->r[14] = 0x5ce10cu; rt_dispatch(c);
    c->r[1] = 0x146ea04u;
    c->r[2] = 0x146aa2cu;
    { uint32_t ea = 0x5ce11cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5ce120u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST16(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x22u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ce178(Cpu *restrict c) {
    FN_ENTER(0x5ce178u);
L_5ce178:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146e994u;
    { uint32_t ea = 0x5ce18cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ce1dc; }
L_5ce19c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5ce19c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5ce1d4; }
    c->r[0] = 0x146a9c0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5ce1c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ce1d4u; rt_dispatch(c);
L_5ce1d4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5ce1dc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ce1ec(Cpu *restrict c) {
    FN_ENTER(0x5ce1ecu);
L_5ce1ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146e920u;
    { uint32_t ea = 0x5ce200u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ce250; }
L_5ce210:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5ce210; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5ce248; }
    c->r[0] = 0x146a94cu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5ce23cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ce248u; rt_dispatch(c);
L_5ce248:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5ce250:;
    c->r[0] = 0x146e8c0u;
    { uint32_t ea = 0x5ce25cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ce25cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5ce27c(Cpu *restrict c) {
    FN_ENTER(0x5ce27cu);
L_5ce27c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce2b4u; f_9bb638(c);
    c->r[1] = 0x11838a4u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x5ce2ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce32cu; f_9bb638(c);
    c->r[1] = 0x11829a0u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce340u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce3a4u; f_9bb638(c);
    c->r[1] = 0x119589cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce3b8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce418u; f_9bb638(c);
    c->r[1] = 0x11828beu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce42cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x24u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce490u; f_9bb638(c);
    c->r[1] = 0x11957b5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce4a4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce504u; f_9bb638(c);
    c->r[1] = 0x118280du;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce518u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x2eu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce57cu; f_9bb638(c);
    c->r[1] = 0x118bc04u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce590u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x2fu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce5f0u; f_9bb638(c);
    c->r[1] = 0x118307eu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5ce604u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x22u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5ce668u; f_9bb638(c);
    c->r[1] = 0x11955eeu;
    c->r[1] = 0x5ce674u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x30u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5ce6e0(Cpu *restrict c) {
    FN_ENTER(0x5ce6e0u);
L_5ce6e0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5ce6e4(Cpu *restrict c) {
    FN_ENTER(0x5ce6e4u);
L_5ce6e4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5ce6e8(Cpu *restrict c) {
    FN_ENTER(0x5ce6e8u);
L_5ce6e8:;
    c->r[0] = 0x146e420u;
    { uint32_t ea = 0x5ce6f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5ce6f8(Cpu *restrict c) {
    FN_ENTER(0x5ce6f8u);
L_5ce6f8:;
    c->r[0] = 0x1195565u;
    c->r[0] = 0x5ce704u + c->r[0];
    return;
}
void f_5ce708(Cpu *restrict c) {
    FN_ENTER(0x5ce708u);
L_5ce708:;
    c->r[0] = 0x1195536u;
    c->r[0] = 0x5ce714u + c->r[0];
    return;
}
void f_5ce718(Cpu *restrict c) {
    FN_ENTER(0x5ce718u);
L_5ce718:;
    c->r[0] = 0x146e3f8u;
    { uint32_t ea = 0x5ce724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5ce728(Cpu *restrict c) {
    FN_ENTER(0x5ce728u);
L_5ce728:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14bdb48u;
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    c->r[3] = 0x8u;
    c->r[12] = 0x9u;
    c->r[14] = 0x5u;
    c->r[5] = 0x6u;
    c->r[0] = 0x5ce758u + c->r[0];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[11] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[12]); ST32(ea + 16u, c->r[14]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[2] = 0x10000u;
    c->r[3] = 0x78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x80000000u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = f_adds(c, c->r[2], 0xf0000u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x146a3bcu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[0] = 0x146e34cu;
    { uint32_t ea = 0x5ce7c0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x119547eu;
    { uint32_t ea = 0x5ce7c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5ce7ccu + c->r[1];
    c->r[14] = 0x5ce7ccu; f_9aedcc(c);
    c->r[1] = 0x146e33cu;
    c->r[3] = 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x5ce7e8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146a368u;
    c->r[0] = 0x146e318u;
    { uint32_t ea = 0x5ce7fcu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1188398u;
    { uint32_t ea = 0x5ce804u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5ce808u + c->r[1];
    c->r[14] = 0x5ce808u; f_9aedcc(c);
    c->r[1] = 0x146e314u;
    { uint32_t ea = 0x5ce814u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5ce844(Cpu *restrict c) {
    FN_ENTER(0x5ce844u);
L_5ce844:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146c13cu;
    { uint32_t ea = 0x5ce854u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ce858u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0x5ce870u; rt_dispatch(c);
    c->r[1] = 0x146e2acu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5ce880u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ce890(Cpu *restrict c) {
    FN_ENTER(0x5ce890u);
L_5ce890:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146c0ecu;
    { uint32_t ea = 0x5ce8a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5ce8a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5ce8bc(Cpu *restrict c) {
    FN_ENTER(0x5ce8bcu);
L_5ce8bc:;
    c->r[0] = 0x0u;
    return;
}
void f_5ce8c4(Cpu *restrict c) {
    FN_ENTER(0x5ce8c4u);
L_5ce8c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x146e258u;
    { uint32_t ea = 0x5ce8d8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ce8dcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x38u;
    c->pc = c->r[4]; c->r[14] = 0x5ce8f4u; rt_dispatch(c);
    c->r[2] = 0x6u;
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x5ce914u; f_5ce9dc(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ce920(Cpu *restrict c) {
    FN_ENTER(0x5ce920u);
L_5ce920:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146e204u;
    { uint32_t ea = 0x5ce930u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ce934u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x3cu;
    c->pc = c->r[4]; c->r[14] = 0x5ce94cu; rt_dispatch(c);
    c->r[14] = 0x5ce950u; f_a87810(c);
    c->r[1] = 0x146e1dcu;
    { uint32_t ea = 0x5ce95cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146c010u;
    { uint32_t ea = 0x5ce96cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5ce9a0(Cpu *restrict c) {
    FN_ENTER(0x5ce9a0u);
L_5ce9a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x146e17cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5ce9b8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5ce9bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5ce9dc(Cpu *restrict c) {
    FN_ENTER(0x5ce9dcu);
L_5ce9dc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146e140u;
    c->r[7] = c->r[2];
    c->r[8] = c->r[1];
    c->r[6] = c->r[3];
    { uint32_t ea = 0x5ce9fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[6]); }
    { uint64_t r = (uint64_t)c->r[7] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x5cea20u; f_9af3a0(c);
    c->r[5] = c->r[0];
    c->r[0] = 0x4u;
    { uint64_t r = (uint64_t)c->r[6] * c->r[0]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x5cea44u; f_9af3a0(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[6]); }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_5ceae8; }
    c->r[7] = 0x0u;
    goto L_5cea94;
L_5cea78:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
L_5cea7c:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_5ceae4; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
L_5cea94:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5cea7c; }
    c->r[8] = c->r[5] + (c->r[7] << 4);
    c->r[5] = 0x0u;
L_5ceab0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x5ceac4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cea78; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_5ceab0; }
    goto L_5cea7c;
L_5ceae4:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_5ceae8:;
    c->r[0] = 0x146a940u;
    c->r[5] = c->r[4];
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[9]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = 0x5ceb0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x5ceb1cu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x5ceb28u; f_15efdac(c);
    { uint32_t ea = c->r[5] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] - 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5ceb3cu; f_5cebdc(c);
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5ceb98; }
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = 0x0u;
L_5ceb64:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + c->r[7]; ST32(ea, c->r[6]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5ceb84u; f_5ceed0(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[7] = c->r[7] + 0x10u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_5ceb64; }
L_5ceb98:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cebc4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_5cebac:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_5cebac; }
L_5cebc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cebdc(Cpu *restrict c) {
    FN_ENTER(0x5cebdcu);
L_5cebdc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x1cu;
    c->r[10] = c->r[0];
    c->r[8] = c->r[1];
    c->r[6] = c->r[3];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5ceeb4; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_5cec98; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x5cec18u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[1];
    c->r[2] = c->r[2] & 0xfffffffdu;
    if (COND_NE) { c->r[2] = c->r[1] | 0x2u; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cec98; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = 0x0u;
L_5cec44:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x5cec58u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cec6c; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_EQ) { goto L_5cec80; }
L_5cec6c:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cec44; }
    goto L_5cec98;
L_5cec80:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cec98; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x5cec98u; rt_dispatch(c);
L_5cec98:;
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x5ceca4u; f_a38538(c);
    c->r[1] = 0x1000u;
    c->r[2] = 0x6u;
    c->r[3] = 0x0u;
    c->r[9] = c->r[0];
    c->r[14] = 0x5cecb8u; f_a38574(c);
    c->r[0] = 0x44u;
    c->r[1] = 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x100000u;
    c->r[14] = 0x5cecc8u; f_d38f14(c);
    c->r[1] = c->r[9];
    c->r[2] = c->r[5];
    c->r[7] = c->r[0];
    c->r[14] = 0x5cecd8u; f_d38f50(c);
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13];
    c->r[2] = c->r[8];
    c->r[3] = 0x1u;
    c->r[14] = 0x5cececu; f_a385e8(c);
    c->r[0] = 0x146a750u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5cecfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1000u;
    c->pc = c->r[3]; c->r[14] = 0x5ced0cu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_5ced58; }
    c->r[11] = c->r[13];
L_5ced20:;
    c->r[0] = c->r[11];
    c->r[1] = c->r[5];
    c->r[2] = 0x1000u;
    c->r[14] = 0x5ced30u; f_a38798(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x5ced4cu; rt_dispatch(c);
    c->r[6] = c->r[6] - c->r[4];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_GT) { goto L_5ced20; }
L_5ced58:;
    c->r[0] = 0x146a6e8u;
    { uint32_t ea = 0x5ced64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5ced74u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x5ced84u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cedb0; }
    c->r[0] = 0x146a6b0u;
    { uint32_t ea = 0x5ced9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5ceda8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_5cedb0:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[1]; c->r[14] = 0x5cedc0u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], c->r[8]);
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[1]); }
    if (COND_CS) { goto L_5cee30; }
    c->r[0] = 0x146a670u;
    { uint32_t ea = 0x5ceddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x5cedecu; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[1]; c->r[14] = 0x5cee04u; rt_dispatch(c);
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x5cee14u; f_15efe30(c);
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CC) { goto L_5cee44; }
    goto L_5cee64;
L_5cee30:;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_CS) { goto L_5cee64; }
L_5cee44:;
    c->r[0] = 0x146a5f8u;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5cee54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cee60u; rt_dispatch(c);
    goto L_5cee6c;
L_5cee64:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_5cee6c:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5cee8c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x5cee8cu; rt_dispatch(c);
L_5cee8c:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5cee94u; f_a38634(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[1]; c->r[14] = 0x5ceea4u; rt_dispatch(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[1]; c->r[14] = 0x5ceeb4u; rt_dispatch(c);
L_5ceeb4:;
    c->r[13] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5ceed0(Cpu *restrict c) {
    FN_ENTER(0x5ceed0u);
L_5ceed0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LS) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[7] + (c->r[5] << 4); uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cef1c; }
    c->r[0] = 0x146a544u;
    { uint32_t ea = 0x5cef08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cef14u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_5cef1c:;
    c->r[5] = c->r[6] + (c->r[5] << 4);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cef50; }
    c->r[0] = 0x146a510u;
    { uint32_t ea = 0x5cef3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cef48u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_5cef50:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x146a4d4u;
    { uint32_t ea = 0x5cef78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0x5cef88u; rt_dispatch(c);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x5cef98u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5cf000; }
    c->r[6] = 0x0u;
L_5cefb0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5cefc4u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cefd8; }
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_EQ) { goto L_5cefec; }
L_5cefd8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cefb0; }
    goto L_5cf000;
L_5cefec:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf000; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cf000u; rt_dispatch(c);
L_5cf000:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf038; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
L_5cf014:;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_5cf030; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_5cf014; }
    goto L_5cf038;
L_5cf030:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[0]); }
L_5cf038:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cf048(Cpu *restrict c) {
    FN_ENTER(0x5cf048u);
L_5cf048:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146dae0u;
    { uint32_t ea = 0x5cf05cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf0e8; }
    c->r[0] = 0x146a3ccu;
    c->r[10] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5cf080u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x146a3c4u;
    { uint32_t ea = 0x5cf088u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_5cf084:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[6] << 4); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf0ac; }
    { uint32_t ea = c->r[9] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[6] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf0a8u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + (c->r[5] << 2); ST32(ea, c->r[10]); }
L_5cf0ac:;
    c->r[7] = c->r[7] + (c->r[6] << 4);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf0d0; }
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf0ccu; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[10]); }
L_5cf0d0:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[10]); }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cf084; }
L_5cf0e8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf114; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_5cf0fc:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_5cf0fc; }
L_5cf114:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf144; }
    c->r[0] = 0x146a318u;
    { uint32_t ea = 0x5cf134u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf140u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
L_5cf144:;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf170; }
    c->r[0] = 0x146a2f0u;
    { uint32_t ea = 0x5cf15cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf168u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_5cf170:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf198; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5cf194u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
L_5cf198:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf1b0; }
    c->r[14] = 0x5cf1a8u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_5cf1b0:;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf1c8; }
    c->r[14] = 0x5cf1c0u; f_9af3e4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5cf1c8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cf1e4(Cpu *restrict c) {
    FN_ENTER(0x5cf1e4u);
L_5cf1e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x5cf1f0u; f_5cf048(c);
    c->r[0] = 0x146d934u;
    { uint32_t ea = 0x5cf1fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cf1fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cf214(Cpu *restrict c) {
    FN_ENTER(0x5cf214u);
L_5cf214:;
    return;
}
void f_5cf218(Cpu *restrict c) {
    FN_ENTER(0x5cf218u);
L_5cf218:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_5cf21c(Cpu *restrict c) {
    FN_ENTER(0x5cf21cu);
L_5cf21c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf250; }
    c->r[0] = 0x146a210u;
    { uint32_t ea = 0x5cf23cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf248u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_5cf250:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf27c; }
    c->r[0] = 0x146a1e4u;
    { uint32_t ea = 0x5cf268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf274u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5cf27c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cf294(Cpu *restrict c) {
    FN_ENTER(0x5cf294u);
L_5cf294:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf410; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_CS) { goto L_5cf3f4; }
    c->r[0] = 0x1cu;
    c->r[1] = 0x10u;
    c->r[14] = 0x5cf2c4u; f_a38538(c);
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[3] = 0x1u;
    c->r[5] = c->r[0];
    c->r[14] = 0x5cf2d4u; f_a385e8(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf300; }
    c->r[0] = 0x146a160u;
    { uint32_t ea = 0x5cf2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf2f8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_5cf300:;
    c->r[0] = 0x146a13cu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5cf310u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x5cf320u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x74u;
    c->r[1] = 0x10u;
    c->r[14] = 0x5cf330u; f_d3927c(c);
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[7] = c->r[0];
    c->r[9] = 0x0u;
    c->r[14] = 0x5cf344u; f_d392b8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5cf354u; rt_dispatch(c);
    c->r[2] = c->r[0];
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[3] = c->r[6];
    c->r[14] = 0x5cf368u; f_d39448(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x5cf380u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x5cf390u; rt_dispatch(c);
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf3a4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[9]); }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_5cf3d0; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x5cf3d0u; rt_dispatch(c);
L_5cf3d0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5cf3e0u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
L_5cf3f4:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5cf410:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cf41c(Cpu *restrict c) {
    FN_ENTER(0x5cf41cu);
L_5cf41c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { (void)f_subs(c, c->r[0], c->r[2]); }
    if (COND_LS) { goto L_5cf560; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = c->r[6];
    { uint32_t ea = c->r[4] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[6] + (c->r[2] << 4); uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5cf51c; }
    c->r[7] = 0x0u;
L_5cf480:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5cf494u; rt_dispatch(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf4b0; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_EQ) { goto L_5cf4c0; }
L_5cf4b0:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cf480; }
    c->r[8] = 0x0u;
L_5cf4c0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf51c; }
    c->r[7] = 0x0u;
L_5cf4cc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5cf4e0u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf4f4; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_5cf508; }
L_5cf4f4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cf4cc; }
    goto L_5cf51c;
L_5cf508:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5cf51c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[6]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); } }
L_5cf51c:;
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf560; }
    c->r[1] = 0x0u;
L_5cf52c:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { goto L_5cf54c; }
    (void)f_subs(c, c->r[7], c->r[6]);
    c->r[3] = c->r[4];
    if (COND_NE) { goto L_5cf554; }
L_5cf54c:;
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5cf554:;
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_5cf52c; }
L_5cf560:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cf568(Cpu *restrict c) {
    FN_ENTER(0x5cf568u);
L_5cf568:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[1]); }
    if (COND_HI) { goto L_5cf58c; }
L_5cf580:;
    c->r[2] = 0x0u;
    c->r[0] = c->r[2];
    return;
L_5cf58c:;
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[12] + (c->r[1] << 4);
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5cf5c8; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5cf580; }
    { uint32_t ea = c->r[12] + (c->r[1] << 4); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf5c8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_5cf5c8:;
    c->r[0] = c->r[2];
    return;
}
void f_5cf5d0(Cpu *restrict c) {
    FN_ENTER(0x5cf5d0u);
L_5cf5d0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_LS) { goto L_5cf6cc; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + (c->r[1] << 4);
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5cf670; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5cf670; }
    c->r[7] = 0x0u;
L_5cf61c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x5cf630u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf644; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_EQ) { goto L_5cf658; }
L_5cf644:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cf61c; }
    goto L_5cf670;
L_5cf658:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf670; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x5cf670u; rt_dispatch(c);
L_5cf670:;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf6cc; }
    c->r[6] = 0x0u;
L_5cf684:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5cf698u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf6b0; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_5cf6cc; }
L_5cf6b0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cf684; }
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5cf6cc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5cf6d4(Cpu *restrict c) {
    FN_ENTER(0x5cf6d4u);
L_5cf6d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf770; }
    c->r[0] = 0x1469d48u;
    c->r[11] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5cf704u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1469d40u;
    { uint32_t ea = 0x5cf70cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_5cf708:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + (c->r[6] << 4); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf730; }
    { uint32_t ea = c->r[10] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = (c->r[6] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf72cu; rt_dispatch(c);
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[11]); }
L_5cf730:;
    c->r[7] = c->r[7] + (c->r[6] << 4);
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf754; }
    { uint32_t ea = c->r[9] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5cf750u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[11]); }
L_5cf754:;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[11]); }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cf708; }
    goto L_5cf774;
L_5cf770:;
    c->r[0] = 0x0u;
L_5cf774:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf7a4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_5cf788:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_5cf788; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5cf7a4:;
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[11]); }
    if (COND_EQ) { goto L_5cf8c8; }
    c->r[0] = 0x1469c84u;
    c->r[11] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x5cf7c8u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
L_5cf7c8:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[10] = c->r[0] + (c->r[6] << 4);
    c->r[0] = c->r[8];
    c->r[9] = c->r[10] + 0x8u;
    c->r[1] = c->r[9];
    c->r[14] = 0x5cf7e4u; f_5df2a8(c);
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x5cf7fcu; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x5cf810u; f_5df2a8(c);
    c->r[1] = c->r[10] + 0xcu;
    c->r[0] = c->r[8];
    c->r[2] = 0x4u;
    c->r[14] = 0x5cf820u; f_5df2a8(c);
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5cf8a4; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_5cf8a4; }
    c->r[7] = 0x0u;
L_5cf844:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5cf858u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf86c; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_EQ) { goto L_5cf880; }
L_5cf86c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cf844; }
    goto L_5cf89c;
L_5cf880:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf89c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x5cf898u; rt_dispatch(c);
    goto L_5cf8a0;
L_5cf89c:;
    c->r[0] = 0x0u;
L_5cf8a0:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[7] = v; }
L_5cf8a4:;
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[11] - c->r[0];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[11] = c->r[0] - c->r[2];
    if (COND_CC) { goto L_5cf7c8; }
L_5cf8c8:;
    c->r[0] = 0x1469b74u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5cf8d8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[11];
    c->pc = c->r[3]; c->r[14] = 0x5cf8e8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = c->r[11];
    c->r[1] = c->r[4];
    c->r[14] = 0x5cf8fcu; f_5df2a8(c);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cf928(Cpu *restrict c) {
    FN_ENTER(0x5cf928u);
L_5cf928:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[11] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cf990; }
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
L_5cf94c:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[6] + c->r[4];
    c->r[14] = 0x5cf964u; f_5cebdc(c);
    c->r[0] = c->r[6] + (c->r[5] << 4);
    { uint32_t ea = c->r[11] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[5] + 0x1u;
    c->r[4] = c->r[4] + 0x10u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { { uint32_t ea = c->r[11] + 0x20u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_5cf94c; }
    goto L_5cf994;
L_5cf990:;
    c->r[0] = 0x0u;
L_5cf994:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cf9c4; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_5cf9a8:;
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CC) { goto L_5cf9a8; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5cf9c4:;
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] + 0x14u; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_5cfab8; }
    c->r[10] = 0x0u;
    c->r[6] = 0x0u;
L_5cf9dc:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[5] = c->r[0] + (c->r[6] << 4);
    c->r[0] = c->r[8];
    c->r[9] = c->r[5] + 0x8u;
    c->r[1] = c->r[9];
    c->r[14] = 0x5cf9f8u; f_5df378(c);
    { uint32_t ea = c->r[5] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[8];
    c->r[14] = 0x5cfa04u; f_5df378(c);
    c->r[1] = c->r[5] + 0xcu;
    c->r[0] = c->r[8];
    c->r[2] = 0x4u;
    c->r[14] = 0x5cfa14u; f_5df378(c);
    { uint32_t ea = c->r[11] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5cfa94; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { goto L_5cfa94; }
    c->r[7] = 0x0u;
L_5cfa38:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5cfa4cu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5cfa60; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { goto L_5cfa74; }
L_5cfa60:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_5cfa38; }
    goto L_5cfa90;
L_5cfa74:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cfa90; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x5cfa8cu; rt_dispatch(c);
    goto L_5cfa94;
L_5cfa90:;
    c->r[0] = 0x0u;
L_5cfa94:;
    { uint32_t ea = c->r[11] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] - c->r[0];
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[10] = c->r[0] - c->r[2];
    if (COND_CC) { goto L_5cf9dc; }
L_5cfab8:;
    c->r[0] = 0x1469984u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5cfac8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->pc = c->r[3]; c->r[14] = 0x5cfad8u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[8];
    c->r[2] = c->r[10];
    c->r[1] = c->r[4];
    c->r[14] = 0x5cfaecu; f_5df378(c);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cfb0c(Cpu *restrict c) {
    FN_ENTER(0x5cfb0cu);
L_5cfb0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x5cfb14u; f_a87810(c);
    c->r[1] = 0x146d018u;
    { uint32_t ea = 0x5cfb20u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146ae4cu;
    { uint32_t ea = 0x5cfb30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5cfb60(Cpu *restrict c) {
    FN_ENTER(0x5cfb60u);
L_5cfb60:;
    c->r[1] = 0x146cfc8u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x5cfb70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x146adfcu;
    { uint32_t ea = 0x5cfb80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_5cfb8c(Cpu *restrict c) {
    FN_ENTER(0x5cfb8cu);
L_5cfb8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146cf94u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x5cfba4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x146adc8u;
    { uint32_t ea = 0x5cfbb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cfbbcu; f_a8784c(c);
    c->r[0] = 0x146cf6cu;
    { uint32_t ea = 0x5cfbc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5cfbc8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5cfbe8(Cpu *restrict c) {
    FN_ENTER(0x5cfbe8u);
L_5cfbe8:;
    return;
}
void f_5cfbec(Cpu *restrict c) {
    FN_ENTER(0x5cfbecu);
L_5cfbec:;
    __attribute__((musttail)) return f_a878e8(c);
}
void f_5cfbf0(Cpu *restrict c) {
    FN_ENTER(0x5cfbf0u);
L_5cfbf0:;
    return;
}
void f_5cfbf4(Cpu *restrict c) {
    FN_ENTER(0x5cfbf4u);
L_5cfbf4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    c->r[0] = 0x146cf18u;
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = 0x5cfc18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5cfc1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x38u;
    c->pc = c->r[4]; c->r[14] = 0x5cfc34u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[14] = 0x5cfc54u; f_5ce9dc(c);
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[8]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_NE) { c->r[1] = c->r[8]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_NE) { goto L_5cfc88; }
L_5cfc7c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5cfc88:;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[8]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_5cfc7c; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = c->r[8]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_5cfc7c; }
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[8];
    if (COND_EQ) { { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); } }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5cfcdc(Cpu *restrict c) {
    FN_ENTER(0x5cfcdcu);
L_5cfcdc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_5cfd70; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 4); uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5cfd10u; f_5cf294(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cfd50; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x5cfd34u; f_5cebdc(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); } }
L_5cfd50:;
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = udiv32(c->r[1], c->r[0]);
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_5cfd70:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5cfd74(Cpu *restrict c) {
    FN_ENTER(0x5cfd74u);
L_5cfd74:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = c->r[2];
    c->r[4] = c->r[3];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_LS) { goto L_5cfdfc; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[0] + (c->r[8] << 4);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cfdb4u; f_5cebdc(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cfdfc; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
L_5cfdd8:;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_5cfdf4; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_5cfdd8; }
    goto L_5cfdfc;
L_5cfdf4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[0]); }
L_5cfdfc:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_LS) { goto L_5cfe6c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[0] + (c->r[9] << 4);
    c->r[0] = c->r[5];
    c->r[14] = 0x5cfe24u; f_5cebdc(c);
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cfe6c; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
L_5cfe48:;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_5cfe64; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CC) { goto L_5cfe48; }
    goto L_5cfe6c;
L_5cfe64:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[0]); }
L_5cfe6c:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[8]);
    c->r[1] = 0x0u;
    if (COND_LS) { goto L_5cfe88; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[8] << 4);
L_5cfe88:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_LS) { goto L_5cfe9c; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[9] << 4);
L_5cfe9c:;
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[8]); }
    if (COND_LS) { goto L_5cff4c; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[8] << 4);
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5cfefc; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5cff4c; }
L_5cfefc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cff4c; }
    c->r[6] = 0x0u;
L_5cff0c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5cff20u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cff38; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_5cff4c; }
L_5cff38:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cff0c; }
    c->r[7] = 0x0u;
L_5cff4c:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[9]); }
    if (COND_LS) { goto L_5cffcc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + (c->r[9] << 4);
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5cff80; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5cffcc; }
L_5cff80:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cffcc; }
    c->r[6] = 0x0u;
L_5cff90:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5cffa4u; rt_dispatch(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5cffbc; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_5cffec; }
L_5cffbc:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { goto L_5cff90; }
L_5cffcc:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5cffe4; }
L_5cffd4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
L_5cffe0:;
    c->pc = c->r[1]; c->r[14] = 0x5cffe4u; rt_dispatch(c);
L_5cffe4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5cffec:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[4], 0x0u); }
    if (COND_EQ) { goto L_5d006c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0x5d0008u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5d0014u; rt_dispatch(c);
    c->r[5] = c->r[0];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5d002cu; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0x5d0040u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5d0054u; rt_dispatch(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5cffe4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    goto L_5cffe0;
L_5d006c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_5cffd4; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_5cffe4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    goto L_5cffe0;
}
void f_5d008c(Cpu *restrict c) {
    FN_ENTER(0x5d008cu);
L_5d008c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d0090(Cpu *restrict c) {
    FN_ENTER(0x5d0090u);
L_5d0090:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d0094(Cpu *restrict c) {
    FN_ENTER(0x5d0094u);
L_5d0094:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d0098(Cpu *restrict c) {
    FN_ENTER(0x5d0098u);
L_5d0098:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d009c(Cpu *restrict c) {
    FN_ENTER(0x5d009cu);
L_5d009c:;
    c->r[0] = 0x146ca88u;
    { uint32_t ea = 0x5d00a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5d00ac(Cpu *restrict c) {
    FN_ENTER(0x5d00acu);
L_5d00ac:;
    c->r[0] = 0x146ca7cu;
    { uint32_t ea = 0x5d00b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5d00bc(Cpu *restrict c) {
    FN_ENTER(0x5d00bcu);
L_5d00bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146a8c0u;
    { uint32_t ea = 0x5d00d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d00d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5d00e8(Cpu *restrict c) {
    FN_ENTER(0x5d00e8u);
L_5d00e8:;
    c->r[0] = 0x146a89cu;
    { uint32_t ea = 0x5d00f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5d00f8(Cpu *restrict c) {
    FN_ENTER(0x5d00f8u);
L_5d00f8:;
    return;
}
void f_5d00fc(Cpu *restrict c) {
    FN_ENTER(0x5d00fcu);
L_5d00fc:;
    return;
}
void f_5d0100(Cpu *restrict c) {
    FN_ENTER(0x5d0100u);
L_5d0100:;
    return;
}
void f_5d0104(Cpu *restrict c) {
    FN_ENTER(0x5d0104u);
L_5d0104:;
    c->r[0] = 0x0u;
    return;
}
void f_5d010c(Cpu *restrict c) {
    FN_ENTER(0x5d010cu);
L_5d010c:;
    c->r[0] = 0x0u;
    return;
}
void f_5d0114(Cpu *restrict c) {
    FN_ENTER(0x5d0114u);
L_5d0114:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x14bc234u;
    c->r[5] = 0x0u;
    c->r[6] = 0x1u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x5d013cu + c->r[0];
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5d0180u; f_15efda0(c);
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5d0198u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5d01b0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    c->r[1] = 0x1468978u;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0x146a79cu;
    { uint32_t ea = 0x5d01ecu + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1186591u;
    { uint32_t ea = 0x5d01f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5d01f8u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x5d01fcu; f_9aedcc(c);
    c->r[1] = 0x146c930u;
    c->r[2] = c->r[4];
    c->r[3] = 0xcu;
    { uint32_t ea = 0x5d0210u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x146a76cu;
    c->r[1] = 0x1186573u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5d022cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5d0230u + c->r[1];
    c->r[14] = 0x5d0230u; f_9aedcc(c);
    c->r[1] = 0x146c8f4u;
    c->r[2] = c->r[4];
    c->r[3] = 0x38u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5d0250u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x146c8ccu;
    c->r[1] = 0x1186550u;
    { uint32_t ea = 0x5d0264u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5d0268u + c->r[1];
    c->r[14] = 0x5d0268u; f_9aedcc(c);
    c->r[1] = 0x146c8c4u;
    c->r[3] = 0x3cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5d0284u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1468cacu;
    c->r[0] = 0x146c894u;
    { uint32_t ea = 0x5d0298u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x11939ccu;
    { uint32_t ea = 0x5d02a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5d02a4u + c->r[1];
    c->r[14] = 0x5d02a4u; f_9aedcc(c);
    c->r[1] = 0x146c89cu;
    { uint32_t ea = 0x5d02b0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5d02f8(Cpu *restrict c) {
    FN_ENTER(0x5d02f8u);
L_5d02f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146c848u;
    { uint32_t ea = 0x5d0308u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5d030cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x5d0324u; rt_dispatch(c);
    c->r[14] = 0x5d0328u; f_22b8f0(c);
    c->r[1] = 0x146c820u;
    { uint32_t ea = 0x5d0334u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5d0358(Cpu *restrict c) {
    FN_ENTER(0x5d0358u);
L_5d0358:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x146c7e0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5d0370u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5d0374u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5d0394(Cpu *restrict c) {
    FN_ENTER(0x5d0394u);
L_5d0394:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146c7a8u;
    { uint32_t ea = 0x5d03a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d03a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5d03c0(Cpu *restrict c) {
    FN_ENTER(0x5d03c0u);
L_5d03c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x5d03c8u; f_22b8f0(c);
    c->r[1] = 0x146c780u;
    { uint32_t ea = 0x5d03d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5d03f4(Cpu *restrict c) {
    FN_ENTER(0x5d03f4u);
L_5d03f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146c74cu;
    { uint32_t ea = 0x5d0408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0458; }
L_5d0418:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d0418; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0450; }
    c->r[0] = 0x1468744u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d0450u; rt_dispatch(c);
L_5d0450:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5d0458:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d04a4; }
L_5d0464:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d0464; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d049c; }
    c->r[0] = 0x14686f8u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0490u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d049cu; rt_dispatch(c);
L_5d049c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_5d04a4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_22b908(c);
}
void f_5d04bc(Cpu *restrict c) {
    FN_ENTER(0x5d04bcu);
L_5d04bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146c684u;
    { uint32_t ea = 0x5d04d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0520; }
L_5d04e0:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d04e0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0518; }
    c->r[0] = 0x146867cu;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d050cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d0518u; rt_dispatch(c);
L_5d0518:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5d0520:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d056c; }
L_5d052c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d052c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0564; }
    c->r[0] = 0x1468630u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0558u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d0564u; rt_dispatch(c);
L_5d0564:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_5d056c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d0574u; f_22b908(c);
    c->r[0] = 0x146c5d0u;
    { uint32_t ea = 0x5d0580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d0580u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5d05a4(Cpu *restrict c) {
    FN_ENTER(0x5d05a4u);
L_5d05a4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5d05dcu; f_9bb638(c);
    c->r[1] = 0x118108eu;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x5d05f4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5d0654u; f_9bb638(c);
    c->r[1] = 0x118c6fdu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5d0668u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5d06ccu; f_9bb638(c);
    c->r[1] = 0x11935b3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x5d06e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0x5d0740u; f_9bb638(c);
    c->r[1] = 0x119354fu;
    c->r[1] = 0x5d074cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[9]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5d07a4(Cpu *restrict c) {
    FN_ENTER(0x5d07a4u);
L_5d07a4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x100u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5d07c4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5d07f0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5d07e0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d0800; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d07f0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_5d0800:;
    c->r[6] = c->r[13];
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[2] = 0x100u;
    c->r[1] = c->r[6];
    c->r[14] = 0x5d0818u; f_a26c38(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1180546u;
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0x5d0830u + c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_5d08e0; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d087c; }
L_5d083c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d083c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0874; }
    c->r[0] = 0x1468320u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d0874u; rt_dispatch(c);
L_5d0874:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_5d087c:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5d0884u; f_15efd88(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_5d08d8; }
    c->r[0] = 0x14682e8u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5d08a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x5d08b0u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x5d08d4u; f_15efd94(c);
    goto L_5d08e0;
L_5d08d8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_5d08e0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x100u;
    c->r[14] = 0x5d08f0u; f_a26c38(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x118046eu;
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0x5d0908u + c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_5d09ac; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0954; }
L_5d0914:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d0914; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d094c; }
    c->r[0] = 0x1468248u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0940u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d094cu; rt_dispatch(c);
L_5d094c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5d0954:;
    c->r[0] = c->r[13];
    c->r[14] = 0x5d095cu; f_15efd88(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d09b4; }
    c->r[0] = 0x1468210u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x5d0978u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0x5d0988u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x5d09acu; f_15efd94(c);
L_5d09ac:;
    c->r[13] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5d09b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5d09dc(Cpu *restrict c) {
    FN_ENTER(0x5d09dcu);
L_5d09dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x5d09fcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_5d0a24; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5d0a20u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d0a24:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1180332u;
    c->r[6] = 0x5d0a44u + c->r[0];
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[0] + 0x8u; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5d0a58u; f_a27c9c(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = c->r[0] + 0x8u; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a27c9c(c);
}
void f_5d0a78(Cpu *restrict c) {
    FN_ENTER(0x5d0a78u);
L_5d0a78:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x146c0d0u;
    { uint32_t ea = 0x5d0a88u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5d0a8cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x5d0aa4u; rt_dispatch(c);
    c->r[14] = 0x5d0aa8u; f_22b8f0(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    c->r[1] = 0x146c094u;
    { uint32_t ea = 0x5d0ac8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5d0ad8(Cpu *restrict c) {
    FN_ENTER(0x5d0ad8u);
L_5d0ad8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146c068u;
    { uint32_t ea = 0x5d0aecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0b3c; }
L_5d0afc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d0afc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0b34; }
    c->r[0] = 0x1468060u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0b28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d0b34u; rt_dispatch(c);
L_5d0b34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_5d0b3c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0b88; }
L_5d0b48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_5d0b48; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0b80; }
    c->r[0] = 0x1468014u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x5d0b74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x5d0b80u; rt_dispatch(c);
L_5d0b80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
L_5d0b88:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5d0b90u; f_22b908(c);
    c->r[0] = 0x146bfbcu;
    { uint32_t ea = 0x5d0b9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d0b9cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5d0bc0(Cpu *restrict c) {
    FN_ENTER(0x5d0bc0u);
L_5d0bc0:;
    __attribute__((musttail)) return f_5d05a4(c);
}
void f_5d0bc4(Cpu *restrict c) {
    FN_ENTER(0x5d0bc4u);
L_5d0bc4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d0bc8(Cpu *restrict c) {
    FN_ENTER(0x5d0bc8u);
L_5d0bc8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d0bcc(Cpu *restrict c) {
    FN_ENTER(0x5d0bccu);
L_5d0bcc:;
    c->r[0] = 0x146bf78u;
    { uint32_t ea = 0x5d0bd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5d0bdc(Cpu *restrict c) {
    FN_ENTER(0x5d0bdcu);
L_5d0bdc:;
    c->r[0] = 0x146bf70u;
    { uint32_t ea = 0x5d0be8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5d0bec(Cpu *restrict c) {
    FN_ENTER(0x5d0becu);
L_5d0bec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x146bf3cu;
    c->r[5] = 0x0u;
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5d0c14u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x14682f8u;
    { uint32_t ea = 0x5d0c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1193061u;
    c->r[1] = 0x5d0c24u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x5d0c28u; f_9aedcc(c);
    c->r[0] = 0x146bf14u;
    c->r[1] = 0x1193053u;
    c->r[2] = c->r[4];
    c->r[3] = 0x14u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5d0c4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5d0c50u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x146bef8u;
    { uint32_t ea = 0x5d0c60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d0c60u; f_9aedcc(c);
    c->r[1] = 0x146bef8u;
    { uint32_t ea = 0x5d0c6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5d0c94(Cpu *restrict c) {
    FN_ENTER(0x5d0c94u);
L_5d0c94:;
    c->r[1] = 0x146bec4u;
    c->r[2] = 0xffu;
    { uint32_t ea = 0x5d0ca4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xecu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[1]); }
    return;
}
void f_5d0d00(Cpu *restrict c) {
    FN_ENTER(0x5d0d00u);
L_5d0d00:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[6] = c->r[0];
    c->r[5] = c->r[3];
    c->r[8] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0d2c; }
    c->r[14] = 0x5d0d24u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_5d0d2c:;
    c->r[0] = 0x0u;
    c->r[9] = c->r[6];
    c->r[4] = c->r[6];
    c->r[1] = 0xffu;
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x98u; ST8(ea, c->r[0]); c->r[9] = ea; }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0xd4u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_5d0d78; }
    c->r[0] = c->r[7];
    c->r[14] = 0x5d0d78u; f_a87648(c);
L_5d0d78:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5d0d90; }
    c->r[0] = c->r[6] + 0x18u;
    c->r[1] = c->r[8];
    c->r[2] = 0x80u;
    c->r[14] = 0x5d0d90u; f_15efdd0(c);
L_5d0d90:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5d0da8; }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[12] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
L_5d0da8:;
    c->r[0] = c->r[9];
    c->r[2] = 0x3fu;
    c->r[14] = 0x5d0db4u; f_15efe3c(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5d0dc0(Cpu *restrict c) {
    FN_ENTER(0x5d0dc0u);
L_5d0dc0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146bd94u;
    { uint32_t ea = 0x5d0dd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0df0; }
    c->r[14] = 0x5d0de8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5d0df0:;
    c->r[0] = 0x0u;
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x98u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5d0e30(Cpu *restrict c) {
    FN_ENTER(0x5d0e30u);
L_5d0e30:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0e50; }
    c->r[14] = 0x5d0e48u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5d0e50:;
    c->r[0] = 0x0u;
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x98u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xecu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5d0e88(Cpu *restrict c) {
    FN_ENTER(0x5d0e88u);
L_5d0e88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x146bcccu;
    { uint32_t ea = 0x5d0e9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0eb0; }
    c->r[14] = 0x5d0eb0u; f_a87660(c);
L_5d0eb0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5d0ec0(Cpu *restrict c) {
    FN_ENTER(0x5d0ec0u);
L_5d0ec0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1467eacu;
    { uint32_t ea = 0x5d0ed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d0ed8u; f_4772c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d0f9c; }
    c->r[1] = 0x1467ce8u;
    c->v.s[16] = 0x0u;
    { uint32_t ea = 0x5d0ef0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x19bu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5d0fa0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5d0f08u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5d0fa0; }
    c->r[0] = 0x1467c98u;
    { uint32_t ea = 0x5d0f1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d0f20u; f_5f865c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d0fa0; }
    c->r[0] = 0x1467c80u;
    { uint32_t ea = 0x5d0f34u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d0f38u; f_5f8678(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5d0fac; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d0fa0; }
    c->r[0] = 0x1467c78u;
    { uint32_t ea = 0x5d0f60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x199u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_5d0fa0; }
    { uint32_t ea = c->r[0] + 0x198u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d0fa0; }
    c->r[0] = 0x1468034u;
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = 0x5d0f8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.s[16] = COND_EQ ? c->v.s[2] : c->v.s[0];
    goto L_5d0fa0;
L_5d0f9c:;
    c->v.s[16] = 0xbf800000u;
L_5d0fa0:;
    c->v.s[0] = c->v.s[16];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_5d0fac:;
    c->r[14] = 0x5d0fb0u; f_5f8634(c);
    c->v.s[16] = 0x3f800000u;
    goto L_5d0fa0;
}
void f_5d0fd4(Cpu *restrict c) {
    FN_ENTER(0x5d0fd4u);
L_5d0fd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x117fd76u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = c->r[4];
    if (COND_EQ) { c->r[0] = 0x5d1000u + c->r[3]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x5bu);
    if (COND_NE) { goto L_5d10a8; }
    c->v.s[18] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_5d13b4; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_5d13b4; }
    { uint32_t ea = c->r[1] + 0x9u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x42u);
    if (COND_EQ) { goto L_5d10cc; }
    (void)f_subs(c, c->r[6], 0x57u);
    if (COND_NE) { goto L_5d1120; }
    { uint32_t ea = c->r[1] + 0xau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4fu);
    if (COND_NE) { goto L_5d13b4; }
    { uint32_t ea = c->r[1] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x52u);
    if (COND_NE) { goto L_5d13b4; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4bu);
    if (COND_NE) { goto L_5d13b4; }
    { uint32_t ea = c->r[1] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = 0xfffeu;
    c->r[1] = ~0xff000000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x8ff0000u;
    c->r[0] = c->r[0] + 0xd0u;
    c->r[1] = c->r[1] | (c->r[0] << 24);
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_HI) { goto L_5d13b4; }
    c->r[3] = (c->r[0] << 24);
    { uint32_t ea = c->r[5] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + (uint32_t)((int32_t)c->r[3] >> 20); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 24);
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_5d12ec; }
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_5d13b8; }
    c->r[0] = c->r[2] + (c->r[0] << 4);
    c->v.s[16] = LD32(c->r[0] + 4u);
    goto L_5d13b8;
L_5d10a8:;
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1181033u;
    c->r[1] = 0x5d10c0u + c->r[1];
    c->r[14] = 0x5d10c0u; f_15efef0(c);
    c->v.s[0] = LD32(c->r[13] + 4u);
    c->v.f[16] = (float)(int32_t)c->v.s[0];
    goto L_5d13b8;
L_5d10cc:;
    c->r[0] = 0x1192bd8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d10dcu + c->r[0];
    c->r[14] = 0x5d10dcu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1270; }
    c->r[0] = 0x1192bc8u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d10f4u + c->r[0];
    c->r[14] = 0x5d10f4u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d129c; }
    c->r[0] = 0x1192bb6u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d110cu + c->r[0];
    c->r[14] = 0x5d110cu; f_15effa4(c);
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x40e00000u;
L_5d1114:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[16] = COND_EQ ? c->v.s[2] : c->v.s[0];
    goto L_5d13b8;
L_5d1120:;
    c->r[0] = 0x1192b98u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1130u + c->r[0];
    c->r[14] = 0x5d1130u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1278; }
    c->r[0] = 0x1192b85u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1148u + c->r[0];
    c->r[14] = 0x5d1148u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d12a4; }
    c->r[0] = 0x1192b78u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1160u + c->r[0];
    c->r[14] = 0x5d1160u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d12d4; }
    c->r[0] = 0x1192b6bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1178u + c->r[0];
    c->r[14] = 0x5d1178u; f_15effa4(c);
    c->v.s[16] = 0x40000000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13b8; }
    c->r[0] = 0x1192b5fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1194u + c->r[0];
    c->r[14] = 0x5d1194u; f_15effa4(c);
    c->v.s[20] = 0x40800000u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d12dc; }
    c->r[0] = 0x1192b51u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d11b0u + c->r[0];
    c->r[14] = 0x5d11b0u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d12e4; }
    c->r[0] = 0x1192b4au;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d11c8u + c->r[0];
    c->r[14] = 0x5d11c8u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13b8; }
    (void)f_subs(c, c->r[6], 0x50u);
    if (COND_NE) { goto L_5d12fc; }
    c->r[0] = 0x1192b33u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d11e8u + c->r[0];
    c->r[14] = 0x5d11e8u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13c8; }
    c->r[0] = 0x1192b27u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1200u + c->r[0];
    c->r[14] = 0x5d1200u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13d0; }
    c->r[0] = 0x1192b17u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1218u + c->r[0];
    c->r[14] = 0x5d1218u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13d8; }
    c->r[0] = 0x1192b0au;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1230u + c->r[0];
    c->r[14] = 0x5d1230u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1404; }
    c->r[0] = 0x1192afdu;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1248u + c->r[0];
    c->r[14] = 0x5d1248u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d13b4; }
    c->r[0] = 0x1467b24u;
    { uint32_t ea = 0x5d125cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d1260u; f_476278(c);
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->v.s[16] = LD32(c->r[0] + 72u); }
    goto L_5d13b8;
L_5d1270:;
    c->v.s[16] = 0x3f800000u;
    goto L_5d13b8;
L_5d1278:;
    c->r[0] = 0x1467afcu;
    { uint32_t ea = 0x5d1284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d1288u; f_477454(c);
    c->r[1] = 0x554u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
L_5d1290:;
    c->v.s[0] = c->r[0];
    c->v.f[16] = (float)c->v.s[0];
    goto L_5d13b8;
L_5d129c:;
    c->v.s[16] = 0x40400000u;
    goto L_5d13b8;
L_5d12a4:;
    c->r[0] = 0x1467ad0u;
    c->r[1] = 0x41au;
    c->v.s[0] = 0x0u;
    { uint32_t ea = 0x5d12b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    c->v.s[2] = c->r[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    c->v.f[2] = (float)c->v.s[2];
    c->v.s[16] = COND_EQ ? c->v.s[0] : c->v.s[2];
    goto L_5d13b8;
L_5d12d4:;
    c->v.s[16] = 0x3f800000u;
    goto L_5d13b8;
L_5d12dc:;
    c->v.s[16] = c->v.s[20];
    goto L_5d13b8;
L_5d12e4:;
    c->v.s[16] = 0x40a00000u;
    goto L_5d13b8;
L_5d12ec:;
    c->r[0] = c->r[2] + (c->r[0] << 4);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.f[16] = (float)(int32_t)c->v.s[0];
    goto L_5d13b8;
L_5d12fc:;
    c->r[0] = 0x1192a44u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d130cu + c->r[0];
    c->r[14] = 0x5d130cu; f_15effa4(c);
    c->v.s[16] = c->v.s[20];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13b8; }
    c->r[0] = 0x1192a31u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1328u + c->r[0];
    c->r[14] = 0x5d1328u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13b4; }
    c->r[0] = 0x1192a24u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1340u + c->r[0];
    c->r[14] = 0x5d1340u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13f8; }
    c->r[0] = 0x1192a1au;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1358u + c->r[0];
    c->r[14] = 0x5d1358u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1424; }
    c->r[0] = 0x1192a0fu;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1370u + c->r[0];
    c->r[14] = 0x5d1370u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1438; }
    (void)f_subs(c, c->r[6], 0x46u);
    if (COND_NE) { goto L_5d146c; }
    c->r[0] = 0x11929f9u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1390u + c->r[0];
    c->r[14] = 0x5d1390u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d14b8; }
    c->r[0] = 0x11929f1u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d13a8u + c->r[0];
    c->r[14] = 0x5d13a8u; f_15effa4(c);
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x40a00000u;
    goto L_5d1114;
L_5d13b4:;
    c->v.s[16] = c->v.s[18];
L_5d13b8:;
    c->v.s[0] = c->v.s[16];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5d13c8:;
    c->v.s[16] = LD32(c->r[5] + 216u);
    goto L_5d13b8;
L_5d13d0:;
    c->v.s[16] = 0x40400000u;
    goto L_5d13b8;
L_5d13d8:;
    c->r[0] = 0x146799cu;
    { uint32_t ea = 0x5d13e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d13e8u; f_476278(c);
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->v.s[16] = LD32(c->r[0] + 64u); }
    goto L_5d13b8;
L_5d13f8:;
    c->v.s[16] = 0x40e00000u;
    goto L_5d13b8;
L_5d1404:;
    c->r[0] = 0x1467970u;
    { uint32_t ea = 0x5d1410u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d1414u; f_476278(c);
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->v.s[16] = LD32(c->r[0] + 68u); }
    goto L_5d13b8;
L_5d1424:;
    c->r[0] = 0x1467784u;
    { uint32_t ea = 0x5d1430u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5d1290;
L_5d1438:;
    c->r[0] = 0x146793cu;
    { uint32_t ea = 0x5d1444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d1448u; f_476278(c);
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d13b8; }
    c->r[14] = 0x5d1458u; f_47c6f8(c);
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x3f800000u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[16] = COND_EQ ? c->v.s[0] : c->v.s[2];
    goto L_5d13b8;
L_5d146c:;
    c->r[0] = 0x1192924u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d147cu + c->r[0];
    c->r[14] = 0x5d147cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d14d4; }
    c->r[0] = 0x1192919u;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d1494u + c->r[0];
    c->r[14] = 0x5d1494u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d14f4; }
    c->r[0] = 0x119290bu;
    c->r[1] = c->r[4];
    c->r[0] = 0x5d14acu + c->r[0];
    c->r[14] = 0x5d14acu; f_15effa4(c);
    c->v.s[0] = 0x0u;
    c->v.s[2] = 0x40c00000u;
    goto L_5d1114;
L_5d14b8:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_5d13b8; }
    c->v.s[0] = LD32(c->r[5] + 12u);
    c->v.f[16] = (float)c->v.s[0];
    goto L_5d13b8;
L_5d14d4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_5d1508; }
    c->v.s[16] = c->v.s[18];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_5d13b8; }
    c->v.s[16] = LD32(c->r[5] + 12u);
    goto L_5d13b8;
L_5d14f4:;
    c->r[0] = 0x14676b4u;
    { uint32_t ea = 0x5d1500u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4du; uint32_t v = LD8(ea); c->r[0] = v; }
    goto L_5d1290;
L_5d1508:;
    c->v.s[0] = LD32(c->r[5] + 12u);
    c->v.f[16] = (float)(int32_t)c->v.s[0];
    goto L_5d13b8;
}
void f_5d15a4(Cpu *restrict c) {
    FN_ENTER(0x5d15a4u);
L_5d15a4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[1];
    c->r[1] = 0x117f7a2u;
    c->r[5] = c->r[3];
    c->r[7] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = c->r[7];
    if (COND_EQ) { c->r[6] = 0x5d15d4u + c->r[1]; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x57u);
    if (COND_NE) { goto L_5d16ac; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d17a4; }
    c->r[0] = 0x11927cau;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d15f4u + c->r[0];
    c->r[14] = 0x5d15f4u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d16f4; }
    c->r[0] = 0x11927bau;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d160cu + c->r[0];
    c->r[14] = 0x5d160cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d173c; }
    c->r[0] = 0x11927aau;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d1624u + c->r[0];
    c->r[14] = 0x5d1624u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1744; }
    c->r[0] = 0x119279au;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d163cu + c->r[0];
    c->r[14] = 0x5d163cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1754; }
    c->r[0] = 0x119278au;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d1654u + c->r[0];
    c->r[14] = 0x5d1654u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d175c; }
    c->r[0] = 0x119277au;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d166cu + c->r[0];
    c->r[14] = 0x5d166cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d1764; }
    c->r[0] = 0x119276au;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d1684u + c->r[0];
    c->r[14] = 0x5d1684u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d176c; }
    c->r[0] = 0x119275au;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d169cu + c->r[0];
    c->r[14] = 0x5d169cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5d17a4; }
    c->r[0] = 0x7u;
    goto L_5d1770;
L_5d16ac:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d16cc; }
    c->r[0] = 0x119273au;
    c->r[1] = c->r[7];
    c->r[0] = 0x5d16c4u + c->r[0];
    c->r[14] = 0x5d16c4u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d16fc; }
L_5d16cc:;
    c->r[0] = c->r[4] + 0x8u;
    c->r[3] = c->r[4] + 0x4u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x119271fu;
    c->r[1] = 0x5d16e8u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x5d16ecu; f_15efef0(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5d16f4:;
    c->r[0] = 0x0u;
    goto L_5d1770;
L_5d16fc:;
    c->r[0] = 0x1467678u;
    { uint32_t ea = 0x5d1708u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5d170cu; f_476278(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5d174c; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5d173c:;
    c->r[0] = 0x1u;
    goto L_5d1770;
L_5d1744:;
    c->r[0] = 0x2u;
    goto L_5d1770;
L_5d174c:;
    c->r[0] = 0x0u;
    goto L_5d17b4;
L_5d1754:;
    c->r[0] = 0x3u;
    goto L_5d1770;
L_5d175c:;
    c->r[0] = 0x4u;
    goto L_5d1770;
L_5d1764:;
    c->r[0] = 0x5u;
    goto L_5d1770;
L_5d176c:;
    c->r[0] = 0x6u;
L_5d1770:;
    { uint32_t ea = c->r[8] + 0xecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + (c->r[0] << 4); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_5d17ac; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_NE) { goto L_5d17a4; }
    c->r[0] = c->r[5] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_5d17bc;
L_5d17a4:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5d17ac:;
    c->r[0] = c->r[5] + (c->r[0] << 4);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_5d17b4:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_5d17bc:;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
