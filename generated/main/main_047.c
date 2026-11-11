#include "cpu.h"
#include "neon_rt.h"
void f_33f614(Cpu *c);
void f_352960(Cpu *c);
void f_381440(Cpu *c);
void f_433200(Cpu *c);
void f_476278(Cpu *c);
void f_4824a8(Cpu *c);
void f_483060(Cpu *c);
void f_4839b8(Cpu *c);
void f_4864c4(Cpu *c);
void f_4864d4(Cpu *c);
void f_4864e0(Cpu *c);
void f_507698(Cpu *c);
void f_5077b0(Cpu *c);
void f_5077e4(Cpu *c);
void f_5077e8(Cpu *c);
void f_507c3c(Cpu *c);
void f_508210(Cpu *c);
void f_5082a8(Cpu *c);
void f_50899c(Cpu *c);
void f_5090cc(Cpu *c);
void f_50e274(Cpu *c);
void f_50ff24(Cpu *c);
void f_510150(Cpu *c);
void f_510e4c(Cpu *c);
void f_511be0(Cpu *c);
void f_512ab4(Cpu *c);
void f_513530(Cpu *c);
void f_5141bc(Cpu *c);
void f_514c34(Cpu *c);
void f_5157cc(Cpu *c);
void f_516830(Cpu *c);
void f_518590(Cpu *c);
void f_5185cc(Cpu *c);
void f_5185f8(Cpu *c);
void f_5186d4(Cpu *c);
void f_5187c8(Cpu *c);
void f_518800(Cpu *c);
void f_5189b0(Cpu *c);
void f_518f84(Cpu *c);
void f_519188(Cpu *c);
void f_5191a0(Cpu *c);
void f_5191d8(Cpu *c);
void f_519244(Cpu *c);
void f_519278(Cpu *c);
void f_519358(Cpu *c);
void f_5193a4(Cpu *c);
void f_5193b8(Cpu *c);
void f_519408(Cpu *c);
void f_51945c(Cpu *c);
void f_519528(Cpu *c);
void f_519a5c(Cpu *c);
void f_519a98(Cpu *c);
void f_519adc(Cpu *c);
void f_519b28(Cpu *c);
void f_519eb8(Cpu *c);
void f_519edc(Cpu *c);
void f_51a198(Cpu *c);
void f_51a4f4(Cpu *c);
void f_51a8e8(Cpu *c);
void f_51aaf4(Cpu *c);
void f_51abac(Cpu *c);
void f_51acd4(Cpu *c);
void f_51aee8(Cpu *c);
void f_51b290(Cpu *c);
void f_51b37c(Cpu *c);
void f_51b454(Cpu *c);
void f_51b858(Cpu *c);
void f_51b9cc(Cpu *c);
void f_51be70(Cpu *c);
void f_51beb4(Cpu *c);
void f_51c03c(Cpu *c);
void f_51c3a8(Cpu *c);
void f_51cec8(Cpu *c);
void f_51d530(Cpu *c);
void f_524aa8(Cpu *c);
void f_526c78(Cpu *c);
void f_5a8ccc(Cpu *c);
void f_5ad250(Cpu *c);
void f_5b52dc(Cpu *c);
void f_5f8344(Cpu *c);
void f_5f8634(Cpu *c);
void f_5f8a20(Cpu *c);
void f_68c4f0(Cpu *c);
void f_691248(Cpu *c);
void f_6913bc(Cpu *c);
void f_6fc69c(Cpu *c);
void f_700394(Cpu *c);
void f_700e9c(Cpu *c);
void f_700f7c(Cpu *c);
void f_7010ac(Cpu *c);
void f_701310(Cpu *c);
void f_702a80(Cpu *c);
void f_704d00(Cpu *c);
void f_739d58(Cpu *c);
void f_73a058(Cpu *c);
void f_73aa70(Cpu *c);
void f_73aa84(Cpu *c);
void f_73af7c(Cpu *c);
void f_73b0e4(Cpu *c);
void f_73b1d4(Cpu *c);
void f_73b460(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af3e4(Cpu *c);
void f_9af55c(Cpu *c);
void f_a260d4(Cpu *c);
void f_a26130(Cpu *c);
void f_a2710c(Cpu *c);
void f_a2772c(Cpu *c);
void f_a277c4(Cpu *c);
void f_a27cd0(Cpu *c);
void f_a870b8(Cpu *c);
void f_a87100(Cpu *c);
void f_a871d4(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_a878e4(Cpu *c);
void f_a878e8(Cpu *c);
void f_b50bcc(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15eff80(Cpu *c);
void f_15eff8c(Cpu *c);
void f_15efff8(Cpu *c);
void f_15f0094(Cpu *c);
void f_50d720(Cpu *restrict c) {
    FN_ENTER(0x50d720u);
L_50d720:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x157b43cu;
    c->r[4] = c->r[3];
    c->r[0] = 0x50d734u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_50d804; }
    c->r[0] = 0x157b428u;
    c->r[0] = 0x50d748u + c->r[0];
    c->r[14] = 0x50d748u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50d804; }
    c->r[0] = 0x157b39cu;
    c->r[12] = 0x3333u;
    c->r[2] = 0x0u;
    c->r[1] = 0x41000000u;
    c->r[3] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc0330000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42780000u;
    c->r[0] = 0x50d774u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1880000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[3]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc2c40000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42dc0000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[12]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40800000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[3]); }
    c->r[0] = 0x157b36cu;
    c->r[0] = 0x50d804u + c->r[0];
    c->r[14] = 0x50d804u; f_15eff8c(c);
L_50d804:;
    c->r[1] = c->r[4] - 0x1u;
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_50d890; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x50d81cu + 0xcu;
    c->r[0] = 0x157b2e8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x50d828u + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x50d870u: goto L_50d870; case 0x50d880u: goto L_50d880; case 0x50d890u: goto L_50d890; case 0x50d894u: goto L_50d894; case 0x50d898u: goto L_50d898; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50d870:;
    c->r[0] = 0x157b294u;
    c->r[0] = 0x50d87cu + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_50d880:;
    c->r[0] = 0x157b284u;
    c->r[0] = 0x50d88cu + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_50d890:;
    c->r[0] = 0x0u;
L_50d894:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_50d898:;
    c->r[0] = 0x157b26cu;
    c->r[0] = 0x50d8a4u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_50d8c8(Cpu *restrict c) {
    FN_ENTER(0x50d8c8u);
L_50d8c8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x157b290u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x50d8f0u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x50d94cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x50d964u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50d97cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_50d9a0(Cpu *restrict c) {
    FN_ENTER(0x50d9a0u);
L_50d9a0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_50e24c; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_50d9f4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_50d9e4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5090cc(c);
L_50d9f4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50dc98; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0xdu;
    c->r[3] = c->r[13] + 0xeu;
    { uint32_t ea = c->r[13] + 0xfu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0xfu;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0x50da3cu; f_50e274(c);
    { uint32_t ea = c->r[13] + 0xfu; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_50da5c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50da5cu; f_5090cc(c);
L_50da5c:;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50da7c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50da7cu; f_5090cc(c);
L_50da7c:;
    { uint32_t ea = c->r[13] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50da9c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2bu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50da9cu; f_5090cc(c);
L_50da9c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50dabc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x33u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50dabcu; f_5090cc(c);
L_50dabc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x50dac4u; f_73a058(c);
    c->r[2] = 0x1465u;
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GT) { goto L_50dcac; }
    c->r[2] = 0x13c4u;
    c->r[0] = c->r[0] - c->r[2];
    (void)f_subs(c, c->r[0], 0x5eu);
    if (COND_HI) { goto L_50de2c; }
    c->r[0] = (c->r[0] << 2);
    c->r[3] = 0x50daf0u + 0x18u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x50dc84u: goto L_50dc84; case 0x50dd78u: goto L_50dd78; case 0x50dd90u: goto L_50dd90; case 0x50ddb0u: goto L_50ddb0; case 0x50de40u: goto L_50de40; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50dc84:;
    c->r[7] = 0x1u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    goto L_50de3c;
L_50dc98:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_50d9e4;
L_50dcac:;
    c->r[1] = 0x1b5au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_50dcf8; }
    c->r[1] = 0x1b8au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_50dd1c; }
    c->r[1] = 0x1b5bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50dddc; }
    c->r[1] = 0x1b5cu;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_50de40; }
    c->v.s[0] = 0x42200000u;
    goto L_50dde0;
L_50dcf8:;
    c->r[1] = 0x1466u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x1471u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_50dc84; }
    c->r[1] = 0x1b59u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50dc84; }
    goto L_50de2c;
L_50dd1c:;
    c->r[1] = 0x1b8bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50de14; }
    c->r[1] = 0x1b8cu;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = 0x0u;
    if (COND_NE) { goto L_50de40; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42200000u;
    c->r[6] = 0x0u;
    c->r[9] = 0x0u;
    c->r[12] = 0x0u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[0] = 0x1u; }
    if (COND_MI) { c->r[6] = 0x1u; }
    goto L_50de38;
L_50dd78:;
    c->r[2] = 0x1u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    c->r[7] = 0x0u;
    goto L_50de40;
L_50dd90:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42200000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_50de2c; }
    c->r[9] = 0x1u;
    goto L_50de30;
L_50ddb0:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41c80000u;
    c->r[12] = 0x0u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[12] = 0x1u; }
    if (COND_MI) { c->r[9] = 0x1u; }
    goto L_50de34;
L_50dddc:;
    c->v.s[0] = 0x42b40000u;
L_50dde0:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[9] = 0x0u;
    c->r[12] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[2] = 0x1u; }
    if (COND_MI) { c->r[7] = 0x1u; }
    goto L_50de40;
L_50de14:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42200000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_50e258; }
L_50de2c:;
    c->r[9] = 0x0u;
L_50de30:;
    c->r[6] = 0x0u;
L_50de34:;
    c->r[0] = 0x0u;
L_50de38:;
    c->r[7] = 0x0u;
L_50de3c:;
    c->r[2] = 0x0u;
L_50de40:;
    c->r[1] = 0x13f0u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[3], 0x8u);
    if (COND_HI) { goto L_50e24c; }
    c->r[1] = (c->r[3] << 2);
    c->r[3] = 0x50de60u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[3]; switch (c->pc) { case 0x50de88u: goto L_50de88; case 0x50dea8u: goto L_50dea8; case 0x50df50u: goto L_50df50; case 0x50e24cu: goto L_50e24c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50de88:;
    c->r[1] = c->r[9] | c->r[7];
    c->r[1] = c->r[6] | c->r[1];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_50df98; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xeeu;
    goto L_50dfb4;
L_50dea8:;
    c->r[0] = c->r[9] | c->r[7];
    c->r[0] = c->r[6] | c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50dfe8; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0xeeu;
    c->r[0] = 0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x50dee0u; f_508210(c);
    c->r[0] = 0x1404u;
    c->v.s[0] = 0x3f800000u;
    c->r[8] = c->r[5] + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0x50def8u; f_73aa70(c);
    c->r[0] = c->r[9] | c->r[6];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50e1b4; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = 0x41f00000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_50e24c; }
    c->v.s[2] = 0xc1f00000u;
    c->r[0] = 0x1380u;
    c->r[1] = 0x3u;
    c->r[3] = 0x3u;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[8], c->v.s[0]);
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x152ac8cu;
    { uint32_t ea = 0x50df40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50df44u; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_EQ) { goto L_50e190; }
    goto L_50e24c;
L_50df50:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_50dfd4; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0xe6u;
    c->r[0] = 0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x50df80u; f_508210(c);
    c->r[0] = 0x8ccu;
    c->r[8] = c->r[5] + c->r[0];
    { uint32_t r = c->r[6] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_50e0bc; }
    c->v.s[16] = 0x3fc00000u;
    goto L_50e138;
L_50df98:;
    c->r[1] = c->r[12] | c->r[2];
    c->r[0] = c->r[0] | c->r[1];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50dfd4; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xefu;
L_50dfb4:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50dfd0u; f_508210(c);
    goto L_50e24c;
L_50dfd4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x3u;
    c->r[14] = 0x50dfe4u; f_5082a8(c);
    goto L_50e24c;
L_50dfe8:;
    c->r[0] = 0x874u;
    c->r[1] = 0x1eeu;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50e088; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x5u;
    c->r[14] = 0x50e00cu; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50e044; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0xeu;
    c->r[14] = 0x50e024u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50e044; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x6u;
    c->r[14] = 0x50e03cu; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50e088; }
L_50e044:;
    c->r[0] = 0x1380u;
    c->r[1] = 0x3u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x152ab6cu;
    { uint32_t ea = 0x50e060u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50e064u; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_NE) { goto L_50e088; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0x50e088u; rt_dispatch(c);
L_50e088:;
    c->v.s[0] = 0x0u;
    c->r[6] = 0x0u;
    c->r[0] = 0xefu;
    c->r[1] = c->r[4];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x50e0acu; f_508210(c);
    c->r[0] = 0x1404u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[6]); }
    goto L_50e24c;
L_50e0bc:;
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = 0x3fc00000u;
    c->v.s[16] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_50e138; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x5u;
    c->r[14] = 0x50e0e4u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50e11c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0xeu;
    c->r[14] = 0x50e0fcu; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50e11c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x6u;
    c->r[14] = 0x50e114u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50e138; }
L_50e11c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[12]; c->r[14] = 0x50e138u; rt_dispatch(c);
L_50e138:;
    c->r[0] = c->r[9] | c->r[7];
    ST32(c->r[8], c->v.s[16]);
    c->r[0] = c->r[6] | c->r[0];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50e1a0; }
    c->r[0] = 0x1404u;
    c->v.s[0] = 0x3f800000u;
    c->r[8] = c->r[5] + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0x50e164u; f_73aa70(c);
    c->r[0] = c->r[9] | c->r[6];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50e208; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = 0x41f00000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_50e24c; }
    c->v.s[2] = 0xc1f00000u;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[8], c->v.s[0]);
L_50e190:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x7u;
    goto L_50e23c;
L_50e1a0:;
    c->r[0] = 0x1404u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_50e24c;
L_50e1b4:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_50e24c; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = 0x41c80000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_50e24c; }
    c->v.s[2] = 0xc1c80000u;
    c->r[0] = 0x1380u;
    c->r[1] = 0x3u;
    c->r[3] = 0x3u;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[8], c->v.s[0]);
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x152a9d4u;
    { uint32_t ea = 0x50e1f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50e1fcu; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_EQ) { goto L_50e230; }
    goto L_50e24c;
L_50e208:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_50e24c; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = 0x41c80000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_50e24c; }
    c->v.s[2] = 0xc1c80000u;
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[8], c->v.s[0]);
L_50e230:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x9u;
L_50e23c:;
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->r[3] = 0x8u;
    c->pc = c->r[7]; c->r[14] = 0x50e24cu; rt_dispatch(c);
L_50e24c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_50e258:;
    c->r[6] = 0x1u;
    c->r[9] = 0x0u;
    goto L_50de34;
}
void f_50e274(Cpu *restrict c) {
    FN_ENTER(0x50e274u);
L_50e274:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    c->r[0] = 0x23a0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_50e60c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x50e2bcu; f_73a058(c);
    c->r[1] = 0x144au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_50e30c; }
    c->r[1] = 0x144bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[1] = c->r[4];
    if (COND_CC) { goto L_50e3bc; }
    c->r[1] = 0x146fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_EQ) { goto L_50e3bc; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50e328; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x428a0000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    goto L_50e3b0;
L_50e30c:;
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50e3a0; }
    c->r[1] = 0x141cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[4];
    if (COND_EQ) { goto L_50e3bc; }
L_50e328:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x50e338u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50e358; }
    c->r[0] = 0x13d4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_50e3bc; }
L_50e358:;
    c->r[0] = c->r[5];
    c->r[14] = 0x50e360u; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_NE) { goto L_50e3bc; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = c->r[9];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_MI) { c->r[1] = c->r[4]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[1] = c->r[9]; }
    goto L_50e3bc;
L_50e3a0:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41500000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
L_50e3b0:;
    c->r[1] = c->r[9];
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[4]; }
L_50e3bc:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e448; }
    c->r[0] = c->r[5];
    c->r[14] = 0x50e3d8u; f_73a058(c);
    c->r[1] = 0x141cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_50e420; }
    c->r[1] = 0x141du;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_50e408; }
    c->r[2] = 0x1u;
    c->r[3] = 0x2bu;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[10];
    if (COND_NE) { goto L_50e440; }
L_50e408:;
    c->r[1] = 0x1466u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[10];
    if (COND_EQ) { goto L_50e440; }
    c->r[1] = 0x1471u;
    goto L_50e434;
L_50e420:;
    c->r[1] = 0x13c4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[10];
    if (COND_EQ) { goto L_50e440; }
    c->r[1] = 0x13eeu;
L_50e434:;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[10];
    if (COND_NE) { c->r[1] = c->r[8]; }
L_50e440:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_50e448:;
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_NE) { goto L_50e60c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e490; }
    c->r[0] = c->r[5];
    c->r[14] = 0x50e464u; f_73a058(c);
    c->r[1] = 0x141eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50e4d4; }
    c->r[1] = 0x140au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50e4f0; }
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50e50c; }
    c->v.s[0] = 0x42a00000u;
    goto L_50e4f4;
L_50e490:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e60c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x50e4a4u; f_73a058(c);
    c->r[1] = 0x13e6u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_50e53c; }
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50e5bc; }
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50e550; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41c00000u;
    goto L_50e5c4;
L_50e4d4:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41400000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_50e520; }
    goto L_50e60c;
L_50e4f0:;
    c->v.s[0] = 0x42100000u;
L_50e4f4:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_50e520; }
    goto L_50e60c;
L_50e50c:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_50e60c; }
L_50e520:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_50e53c:;
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x1484u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_50e60c; }
L_50e550:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x50e57cu; f_73a058(c);
    c->r[1] = 0x141cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_50e5ec; }
    c->r[1] = 0x141du;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_50e5a8; }
    c->r[2] = 0x1u;
    c->r[3] = 0x2bu;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_50e604; }
L_50e5a8:;
    c->r[1] = 0x1466u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50e604; }
    c->r[1] = 0x1471u;
    goto L_50e5fc;
L_50e5bc:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41f00000u;
L_50e5c4:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_50e60c; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_50e5ec:;
    c->r[1] = 0x13c4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50e604; }
    c->r[1] = 0x13eeu;
L_50e5fc:;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[10] = c->r[8]; }
L_50e604:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
L_50e60c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_50e620(Cpu *restrict c) {
    FN_ENTER(0x50e620u);
L_50e620:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[2] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_50e728; }
    c->r[1] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_50e66c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_50e660:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_5090cc(c);
L_50e66c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50e730; }
    c->r[0] = 0x0u;
    c->r[12] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0xdu;
    { uint32_t ea = c->r[13] + 0xfu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xeu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[3] = c->r[13] + 0xfu;
    c->r[14] = 0x50e6a8u; f_50e274(c);
    { uint32_t ea = c->r[13] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e6c8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50e6c8u; f_5090cc(c);
L_50e6c8:;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e6e8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50e6e8u; f_5090cc(c);
L_50e6e8:;
    { uint32_t ea = c->r[13] + 0xdu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e708; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2bu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50e708u; f_5090cc(c);
L_50e708:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e728; }
    c->r[0] = c->r[4];
    c->r[1] = 0x33u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50e728u; f_5090cc(c);
L_50e728:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_50e730:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_50e660;
}
void f_50e744(Cpu *restrict c) {
    FN_ENTER(0x50e744u);
L_50e744:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x157a4dcu;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x50e764u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_50e854; }
    c->r[0] = 0x157a4c8u;
    c->r[0] = 0x50e778u + c->r[0];
    c->r[14] = 0x50e778u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e854; }
    c->r[0] = 0x157a430u;
    c->r[12] = 0x999au;
    c->r[14] = 0x6666u;
    c->r[3] = 0x999au;
    c->r[2] = 0x6666u;
    c->r[1] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40f90000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbfe60000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf190000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0660000u;
    c->r[0] = 0x50e7b0u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41f80000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0xcccdu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40ac0000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x999au;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbf990000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1c00000u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1a00000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3333u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbf330000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x999au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc2c40000u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x6666u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc2b30000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x3cu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x157a3ecu;
    c->r[0] = 0x50e854u + c->r[0];
    c->r[14] = 0x50e854u; f_15eff8c(c);
L_50e854:;
    c->r[1] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_50e918; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x50e86cu + 0xcu;
    c->r[0] = 0x157a368u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x50e878u + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x50e8c0u: goto L_50e8c0; case 0x50e904u: goto L_50e904; case 0x50e918u: goto L_50e918; case 0x50e91cu: goto L_50e91c; case 0x50e924u: goto L_50e924; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50e8c0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[14] = 0x50e8e4u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x157a2e8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x50e8f8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x20u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_50e904:;
    c->r[0] = 0x157a2d0u;
    c->r[0] = 0x50e910u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_50e918:;
    c->r[0] = 0x0u;
L_50e91c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_50e924:;
    c->r[0] = 0x157a2b0u;
    c->r[0] = 0x50e930u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_50e958(Cpu *restrict c) {
    FN_ENTER(0x50e958u);
L_50e958:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x157a304u;
    c->r[4] = c->r[3];
    c->r[0] = 0x50e96cu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_50e9e4; }
    c->r[0] = 0x157a2f0u;
    c->r[0] = 0x50e980u + c->r[0];
    c->r[14] = 0x50e980u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50e9e4; }
    c->r[0] = 0x157a290u;
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x0u;
    c->r[6] = 0x0u;
    c->r[3] = 0xc0000000u;
    c->r[1] = 0x0u;
    c->r[5] = 0x41000000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc1800000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40d00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xc1a80000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc0200000u;
    c->r[0] = 0x50e9c0u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x157a28cu;
    c->r[0] = 0x50e9e4u + c->r[0];
    c->r[14] = 0x50e9e4u; f_15eff8c(c);
L_50e9e4:;
    c->r[1] = 0x157a258u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_EQ) { c->r[0] = 0x50e9f8u + c->r[1]; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_50ea0c(Cpu *restrict c) {
    FN_ENTER(0x50ea0cu);
L_50ea0c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x157a24cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x50ea34u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x50ea90u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x50eaa8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50eac0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_50eae4(Cpu *restrict c) {
    FN_ENTER(0x50eae4u);
L_50eae4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_50ff04; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_50eb68; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50eb28u; f_5090cc(c);
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_50ed5c; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_50efc4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50eb54u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50ede4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x10u;
    goto L_50ee04;
L_50eb68:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50ed7c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x13c4u;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4d4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_EQ) { goto L_50ee6c; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { goto L_50f2f0; }
    c->r[0] = 0x13f4u;
    c->r[2] = c->r[13] + 0x1au;
    c->r[3] = c->r[13] + 0x1bu;
    c->r[7] = c->r[13] + 0x1cu;
    c->r[6] = c->r[13] + 0x1du;
    c->r[12] = c->r[13] + 0x19u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x1eu;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x1fu;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[14] = 0x50ebf0u; f_50ff24(c);
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_50ec10; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ec10u; f_5090cc(c);
L_50ec10:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50ec30; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ec30u; f_5090cc(c);
L_50ec30:;
    { uint32_t ea = c->r[13] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50ec50; }
    c->r[0] = c->r[5];
    c->r[1] = 0x10u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ec50u; f_5090cc(c);
L_50ec50:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50ec70; }
    c->r[0] = c->r[5];
    c->r[1] = 0x11u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ec70u; f_5090cc(c);
L_50ec70:;
    { uint32_t ea = c->r[13] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50ec90; }
    c->r[0] = c->r[5];
    c->r[1] = 0x24u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ec90u; f_5090cc(c);
L_50ec90:;
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50ecb0; }
    c->r[0] = c->r[5];
    c->r[1] = 0x31u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ecb0u; f_5090cc(c);
L_50ecb0:;
    { uint32_t ea = c->r[13] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50ecd0; }
    c->r[0] = c->r[5];
    c->r[1] = 0x32u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ecd0u; f_5090cc(c);
L_50ecd0:;
    c->r[0] = 0x1380u;
    c->r[1] = 0x4u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1529ee0u;
    { uint32_t ea = 0x50ececu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50ecf0u; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50f104; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_50f0f0; }
    c->r[0] = 0x13fcu;
    c->v.s[0] = 0x3f800000u;
    c->r[6] = c->r[5] + c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x50ed18u; f_73aa70(c);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = 0x41000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_50ed38; }
    c->v.s[1] = 0x41000000u;
    c->r[14] = 0x50ed34u; f_15f0094(c);
    ST32(c->r[6], c->v.s[0]);
L_50ed38:;
    c->r[0] = c->r[5];
    c->v.s[2] = 0x40800000u;
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[1] = c->r[1] & 0xffffffe7u;
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[1] = c->r[1] | 0x10u; }
    if (COND_MI) { c->r[1] = c->r[1] | 0x8u; }
    goto L_50f100;
L_50ed5c:;
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_NE) { goto L_50ee48; }
L_50ed70:;
    c->r[0] = c->r[5];
    c->r[1] = 0x24u;
    goto L_50ef60;
L_50ed7c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50ed90u; f_5090cc(c);
    c->r[0] = 0x13c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_50ef1c; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_50efc4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50edbcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50efdc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x10u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50edd8u; f_5090cc(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x31u;
    goto L_50f0d0;
L_50ede4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50edf4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[1] = 0x24u; }
    if (COND_EQ) { c->r[1] = 0x11u; }
L_50ee04:;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ee10u; f_5090cc(c);
    c->r[0] = 0x1380u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1529da8u;
    { uint32_t ea = 0x50ee24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_50ee20:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4u;
    c->r[3] = 0x3u;
    c->r[14] = 0x50ee30u; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50efc4; }
    { uint32_t ea = c->r[5] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0xffffffe7u) | ((c->r[1] << 3) & 0x18u);
    goto L_50efc0;
L_50ee48:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50ee58u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50ef40; }
    c->r[0] = c->r[5];
    c->r[1] = 0x12u;
    goto L_50ef60;
L_50ee6c:;
    c->r[1] = 0x13f4u;
    { uint32_t ea = c->r[5] + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50ee98u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50eeb4; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_50f120; }
L_50eeb4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x50eebcu; f_73a058(c);
    c->r[1] = 0x144bu;
    c->r[2] = c->r[0] - c->r[1];
    c->r[1] = c->r[13] + 0x1fu;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_50f12c; }
    c->r[2] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_50f12c; }
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50f128; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = c->r[13] + 0x1fu;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x1eu;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_PL) { c->r[1] = c->r[0]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[1] = c->r[0]; }
    goto L_50f12c;
L_50ef1c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50ef2cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50f014; }
    c->r[0] = c->r[5];
    c->r[1] = 0x12u;
    goto L_50f034;
L_50ef40:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50ef50u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50ed70; }
    c->r[0] = c->r[5];
    c->r[1] = 0x13u;
L_50ef60:;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50ef6cu; f_5090cc(c);
    c->r[0] = 0x1380u;
    c->r[1] = 0x6u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1529c44u;
    { uint32_t ea = 0x50ef88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50ef8cu; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_50efac; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50efc4; }
    c->r[1] = 0xf807u;
    c->r[0] = 0x8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    goto L_50efb4;
L_50efac:;
    c->r[0] = 0x1f8u;
    c->r[1] = ~0x3f8u;
L_50efb4:;
    { uint32_t ea = c->r[5] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] & c->r[1];
    c->r[0] = c->r[1] | c->r[0];
L_50efc0:;
    { uint32_t ea = c->r[5] + 0x110u; ST32(ea, c->r[0]); }
L_50efc4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x2u;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5082a8(c);
L_50efdc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50efecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50f0c8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x11u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50f008u; f_5090cc(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x32u;
    goto L_50f0d0;
L_50f014:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f024u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[1] = 0x24u; }
    if (COND_EQ) { c->r[1] = 0x13u; }
L_50f034:;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50f040u; f_5090cc(c);
    c->r[0] = 0x1380u;
    c->r[1] = 0x6u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1529b70u;
    { uint32_t ea = 0x50f05cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50f060u; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_50f0b0; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50efc4; }
    c->r[6] = c->r[5];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[6] + 0x110u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[0] = (c->r[0] & 0xffffffe7u) | ((c->r[1] << 3) & 0x18u);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f094u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50fafc; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x22u;
    c->r[0] = (c->r[0] & 0xfffff81fu) | ((c->r[1] << 5) & 0x7e0u);
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    goto L_50efc4;
L_50f0b0:;
    c->r[0] = c->r[5];
    c->r[2] = 0x3fu;
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = (c->r[1] & 0xfffffc07u) | ((c->r[2] << 3) & 0x3f8u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_50efc4;
L_50f0c8:;
    c->r[0] = c->r[5];
    c->r[1] = 0x24u;
L_50f0d0:;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50f0dcu; f_5090cc(c);
    c->r[0] = 0x1380u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1529adcu;
    { uint32_t ea = 0x50f0f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_50ee20;
L_50f0f0:;
    c->r[0] = c->r[5];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x110u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = (c->r[1] & 0xffffffe7u) | ((c->r[2] << 3) & 0x18u);
L_50f100:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_50f104:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_50f2f0; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_50f2b0; }
    goto L_50f2e0;
L_50f120:;
    c->r[1] = c->r[13] + 0x1fu;
    goto L_50f12c;
L_50f128:;
    c->r[1] = c->r[13] + 0x1eu;
L_50f12c:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f144u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50f154; }
    c->r[1] = c->r[13] + 0x1du;
    goto L_50f174;
L_50f154:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f164u; rt_dispatch(c);
    c->r[2] = c->r[13] + 0x1cu;
    c->r[1] = c->r[13] + 0x1bu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[2]; }
L_50f174:;
    (void)f_subs(c, c->r[6], 0x7u);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    if (COND_EQ) { goto L_50f190; }
    (void)f_subs(c, c->r[6], 0x5u);
    if (COND_EQ) { goto L_50f250; }
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_50f1ac; }
L_50f190:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); } }
L_50f1ac:;
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_50f1cc; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50f1ccu; f_5090cc(c);
L_50f1cc:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50f1ec; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50f1ecu; f_5090cc(c);
L_50f1ec:;
    { uint32_t ea = c->r[13] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50f20c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x12u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50f20cu; f_5090cc(c);
L_50f20c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50f22c; }
    c->r[0] = c->r[5];
    c->r[1] = 0x13u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50f22cu; f_5090cc(c);
L_50f22c:;
    { uint32_t ea = c->r[13] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_50f268; }
    c->r[0] = c->r[5];
    c->r[1] = 0x24u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x50f24cu; f_5090cc(c);
    goto L_50f268;
L_50f250:;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[6]); }
L_50f268:;
    c->r[0] = 0x1380u;
    c->r[1] = 0x6u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1529948u;
    { uint32_t ea = 0x50f284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x50f288u; f_33f614(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    c->r[14] = 0x50f298u; f_510150(c);
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_50f2f0; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_50f2e0; }
L_50f2b0:;
    c->v.s[0] = 0x0u;
    c->r[1] = 0xe6u;
    c->r[0] = 0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x50f2d8u; f_508210(c);
    goto L_50f2f0;
L_50f2e0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x3u;
    c->r[14] = 0x50f2f0u; f_5082a8(c);
L_50f2f0:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_50f5f4; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_50ff04; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f318u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f32cu; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x50f338u; f_73a058(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_50fa34; }
    c->r[1] = 0x1b58u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_50fce4; }
    c->r[1] = 0x13edu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x97u);
    if (COND_HI) { goto L_50fe24; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x50f368u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x50efc4u: goto L_50efc4; case 0x50f5ccu: goto L_50f5cc; case 0x50fac0u: goto L_50fac0; case 0x50fc60u: goto L_50fc60; case 0x50fd48u: goto L_50fd48; case 0x50fe40u: goto L_50fe40; case 0x50fe8cu: goto L_50fe8c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50f5cc:;
    c->r[0] = 0x1414u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_50fed4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50fefc; }
    c->r[0] = 0x0u;
    c->r[1] = 0xfau;
    goto L_50fedc;
L_50f5f4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f604u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50f618u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x50f624u; f_73a058(c);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_50fa68; }
    c->r[1] = 0x1396u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0xeeu);
    if (COND_HI) { goto L_50fb60; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x50f648u + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x50efc4u: goto L_50efc4; case 0x50fa0cu: goto L_50fa0c; case 0x50fac0u: goto L_50fac0; case 0x50fc60u: goto L_50fc60; case 0x50fc9cu: goto L_50fc9c; case 0x50fd70u: goto L_50fd70; case 0x50fe40u: goto L_50fe40; case 0x50fe5cu: goto L_50fe5c; case 0x50fe8cu: goto L_50fe8c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50fa0c:;
    c->r[0] = 0x1414u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_50fe04; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50fefc; }
    c->r[0] = 0x2u;
    c->r[1] = 0xfau;
    goto L_50fedc;
L_50fa34:;
    c->r[1] = 0x144au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_50fa9c; }
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fac0; }
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fc8c; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fac0; }
    goto L_50efc4;
L_50fa68:;
    c->r[1] = 0x144au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_50fad4; }
    c->r[1] = 0x144cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_50fb24; }
    c->r[1] = 0x144bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fb3c; }
    c->r[1] = 0x144cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fe94; }
    goto L_50efc4;
L_50fa9c:;
    c->r[1] = 0x144bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fac0; }
    c->r[1] = 0x144cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fe94; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50efc4; }
L_50fac0:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50fb3c; }
    goto L_50ff04;
L_50fad4:;
    c->r[1] = 0x13acu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fb3c; }
    c->r[1] = 0x13adu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fcb8; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fb3c; }
    goto L_50efc4;
L_50fafc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x50fb0cu; rt_dispatch(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[1] & 0xfffff81fu;
    if (COND_NE) { c->r[1] = c->r[1] | 0x1a0u; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    goto L_50efc4;
L_50fb24:;
    c->r[1] = 0x144du;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50fcd4; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50efc4; }
L_50fb3c:;
    c->r[0] = c->r[4] + 0x500u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x1u;
    if (COND_EQ) { goto L_50fb58; }
L_50fb50:;
    c->r[1] = 0xf2u;
    goto L_50feb0;
L_50fb58:;
    c->r[1] = 0xf3u;
    goto L_50feb0;
L_50fb60:;
    c->r[1] = 0x1b8bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x37u);
    if (COND_HI) { goto L_50fe10; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x50fb7cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x50efc4u: goto L_50efc4; case 0x50fc60u: goto L_50fc60; case 0x50fe8cu: goto L_50fe8c; case 0x50fe94u: goto L_50fe94; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_50fc60:;
    c->r[0] = 0x1414u;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_50fd30; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50fefc; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0xfau;
    goto L_50fd3c;
L_50fc8c:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_50ff04; }
L_50fc9c:;
    c->r[0] = c->r[4] + 0x500u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->v.s[0] = LD32(c->r[0]);
    if (COND_NE) { c->r[1] = 0xf4u; }
    c->r[0] = 0x1u;
    if (COND_EQ) { c->r[1] = 0xf5u; }
    goto L_50feb0;
L_50fcb8:;
    c->r[0] = c->r[4] + 0x500u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->v.s[0] = LD32(c->r[0]);
    if (COND_NE) { c->r[1] = 0xf6u; }
    c->r[0] = 0x1u;
    if (COND_EQ) { c->r[1] = 0xf7u; }
    goto L_50feb0;
L_50fcd4:;
    c->v.s[0] = 0x42840000u;
    c->r[0] = 0x0u;
    goto L_50fb50;
L_50fce4:;
    c->r[1] = 0x1b59u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_50efc4; }
    c->r[1] = 0x1b8bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50fe8c; }
    c->r[0] = c->r[4] + 0x500u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = 0x2u;
    c->r[3] = 0x3u;
    c->v.s[0] = LD32(c->r[0]);
    if (COND_EQ) { c->r[1] = 0x34u; }
    c->r[0] = 0x1u;
    if (COND_NE) { c->r[1] = 0x33u; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    goto L_50fec8;
L_50fd30:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0xfbu;
L_50fd3c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    goto L_50fee8;
L_50fd48:;
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x19u;
    c->r[14] = 0x50fd58u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fe8c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x47u;
    goto L_50fe80;
L_50fd70:;
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x52u;
    c->r[14] = 0x50fd80u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fa0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x53u;
    c->r[14] = 0x50fd98u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fa0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x54u;
    c->r[14] = 0x50fdb0u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fa0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x55u;
    c->r[14] = 0x50fdc8u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fa0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x56u;
    c->r[14] = 0x50fde0u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fa0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x57u;
    c->r[14] = 0x50fdf8u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_50fa0c; }
    goto L_50ff04;
L_50fe04:;
    c->r[0] = 0x2u;
    goto L_50fed8;
L_50fe10:;
    c->r[1] = 0x1b59u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_50efc4; }
    goto L_50fe8c;
L_50fe24:;
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_50fe8c; }
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_50ff04; }
L_50fe40:;
    c->r[0] = c->r[4] + 0x500u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->v.s[0] = LD32(c->r[0]);
    if (COND_NE) { c->r[1] = 0xf0u; }
    c->r[0] = 0x1u;
    if (COND_EQ) { c->r[1] = 0xf1u; }
    goto L_50feb0;
L_50fe5c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x19u;
    c->r[14] = 0x50fe6cu; f_483060(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_50fe8c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[2] = 0x4du;
L_50fe80:;
    c->r[14] = 0x50fe84u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50fea4; }
L_50fe8c:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_50fea4; }
L_50fe94:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xf9u;
    goto L_50feb0;
L_50fea4:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xf8u;
L_50feb0:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
L_50fec8:;
    c->r[14] = 0x50feccu; f_508210(c);
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_50fed4:;
    c->r[0] = 0x0u;
L_50fed8:;
    c->r[1] = 0xfbu;
L_50fedc:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->v.s[0] = 0x40800000u;
L_50fee8:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    c->r[14] = 0x50fefcu; f_508210(c);
L_50fefc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_50ff04:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_50ff24(Cpu *restrict c) {
    FN_ENTER(0x50ff24u);
L_50ff24:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[11] = c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x50ff84u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_50ffa0; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_510038; }
L_50ffa0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x50ffa8u; f_73a058(c);
    c->r[1] = 0x144bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_510014; }
    c->r[1] = 0x144cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[4];
    if (COND_EQ) { goto L_510070; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[4];
    if (COND_EQ) { goto L_510070; }
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[8];
    if (COND_NE) { goto L_510070; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = c->r[8];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_MI) { c->r[1] = c->r[4]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[1] = c->r[8]; }
    goto L_510070;
L_510014:;
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_510054; }
    c->r[1] = 0x144bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[8];
    if (COND_NE) { goto L_510070; }
    c->v.s[0] = 0x42ce0000u;
    goto L_510058;
L_510038:;
    c->r[0] = c->r[5];
    c->r[14] = 0x510040u; f_73a058(c);
    c->r[1] = 0x1471u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[4];
    if (COND_EQ) { c->r[1] = c->r[8]; }
    goto L_510070;
L_510054:;
    c->v.s[0] = 0x42dc0000u;
L_510058:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[1] = c->r[8];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[4]; }
L_510070:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x510088u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5100b0; }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5100e8; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    goto L_5100e8;
L_5100b0:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5100c0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5100e0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5100e8; }
L_5100e0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
L_5100e8:;
    c->r[0] = c->r[11] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_51013c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51013c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x510108u; f_73a058(c);
    c->r[1] = 0x140au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x138au; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_51013c; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_51013c:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_510150(Cpu *restrict c) {
    FN_ENTER(0x510150u);
L_510150:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[5] = c->r[2];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_5102d8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_5103f8; }
    c->r[0] = c->r[5];
    c->r[14] = 0x51017cu; f_73a058(c);
    c->r[1] = 0x13ecu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_510324; }
    c->r[1] = 0x13edu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x4bu);
    if (COND_HI) { goto L_510404; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x5101a4u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x510418u: goto L_510418; case 0x510568u: goto L_510568; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5102d8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5102e8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_5103ac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5102fcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x510318u: goto L_510318; case 0x5103b8u: goto L_5103b8; case 0x5103c4u: goto L_5103c4; case 0x5103d0u: goto L_5103d0; case 0x5103dcu: goto L_5103dc; case 0x5103e8u: goto L_5103e8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_510318:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x40u;
    goto L_5103f0;
L_510324:;
    c->r[1] = 0x1389u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_510568; }
    c->r[2] = 0x1u;
    c->r[1] = 0x1u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x70000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_510418; }
    c->r[2] = 0xe000u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_510568; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x510364u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_EQ) { goto L_510418; }
    c->r[0] = 0x13fcu;
    c->v.s[16] = 0x41c00000u;
    c->r[6] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_510430; }
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x510398u; f_73aa70(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41c00000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x4u;
    goto L_5105d0;
L_5103ac:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3fu;
    goto L_5103f0;
L_5103b8:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x20u;
    goto L_5103f0;
L_5103c4:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x30u;
    goto L_5103f0;
L_5103d0:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x38u;
    goto L_5103f0;
L_5103dc:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3cu;
    goto L_5103f0;
L_5103e8:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3eu;
L_5103f0:;
    c->r[0] = (c->r[0] & 0xfffffc07u) | ((c->r[1] << 3) & 0x3f8u);
L_5103f4:;
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
L_5103f8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_510404:;
    c->r[1] = 0x1bc2u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x1b5au; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_510568; }
L_510418:;
    c->r[0] = 0x13fcu;
    c->v.s[0] = 0x3f800000u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x510430u; f_73aa84(c);
L_510430:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = 0x41b80000u;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x10u;
    c->r[1] = c->r[1] & 0xffffffe7u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0x8u; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x510468u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5104b4; }
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = 0x40800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_510510; }
    c->v.s[2] = 0x41000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_510530; }
    c->v.s[2] = 0x41800000u;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[0] = c->r[0] & ~0x640u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = c->r[0] | 0x40u; }
    c->r[0] = c->r[0] & ~0x1a0u;
    goto L_5103f4;
L_5104b4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5104c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_510524; }
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[2] = 0x40800000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_510544; }
    c->v.s[2] = 0x41400000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_510554; }
    c->v.s[2] = 0x41800000u;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[0] = c->r[0] & ~0x1a0u;
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = c->r[0] | 0x20u; }
    c->r[0] = c->r[0] & ~0x640u;
    goto L_5103f4;
L_510510:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & ~0x640u;
    c->r[0] = c->r[0] | 0x440u;
    c->r[0] = c->r[0] & ~0x1a0u;
    goto L_5103f4;
L_510524:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff81fu;
    goto L_5103f4;
L_510530:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & ~0x640u;
    c->r[0] = c->r[0] | 0x240u;
    c->r[0] = c->r[0] & ~0x1a0u;
    goto L_5103f4;
L_510544:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1a0u;
    c->r[0] = c->r[0] & ~0x640u;
    goto L_5103f4;
L_510554:;
    { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & ~0x1a0u;
    c->r[0] = c->r[0] | 0xa0u;
    c->r[0] = c->r[0] & ~0x640u;
    goto L_5103f4;
L_510568:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_510594; }
    c->r[1] = 0x0u;
    c->r[0] = 0x13fcu;
    c->r[6] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41c00000u;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[1]); c->r[6] = ea; }
    goto L_510430;
L_510594:;
    c->r[0] = 0x13fcu;
    c->v.s[16] = 0x41c00000u;
    c->r[6] = c->r[4] + c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_510430; }
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x5105c0u; f_73aa70(c);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41c00000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13];
L_5105d0:;
    c->v.s[0] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { c->r[0] = c->r[6]; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    goto L_510430;
}
void f_5105ec(Cpu *restrict c) {
    FN_ENTER(0x5105ecu);
L_5105ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[7] = c->r[0];
    c->r[0] = 0x15787d4u;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x51060cu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5107c4; }
    c->r[0] = 0x15787c0u;
    c->r[0] = 0x510620u + c->r[0];
    c->r[14] = 0x510620u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5107c4; }
    c->r[0] = 0x1578668u;
    c->r[2] = 0x0u;
    c->r[12] = 0x0u;
    c->r[3] = 0x6666u;
    c->r[11] = 0x0u;
    c->r[10] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x41000000u;
    c->r[9] = 0x3f800000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0800000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x41a80000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40660000u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x43160000u;
    c->r[11] = (c->r[11] & 0xFFFFu) | 0xc3120000u;
    c->r[4] = c->r[2] + 0x1380000u;
    c->r[7] = c->r[12] + 0x100000u;
    c->r[8] = c->r[10] + 0x1e0000u;
    c->r[0] = 0x510678u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x40000000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[12] + 0x780000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0xe00000u;
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x1680000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x1bc0000u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[11] - 0x540000u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[11] - 0x360000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[3]); }
    c->r[3] = 0xc0000000u;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[4]); }
    c->r[4] = 0x6666u;
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[12]); }
    c->r[7] = c->r[12] + 0x11c0000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x40660000u;
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[4]); }
    c->r[4] = 0x40000000u;
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[2] + 0x1280000u;
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[12] - 0xe80000u;
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[2] + 0x700000u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[2] + 0xf00000u;
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[1]); }
    c->r[0] = 0x157861cu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x5107c4u + c->r[0];
    c->r[14] = 0x5107c4u; f_15eff8c(c);
L_5107c4:;
    c->r[0] = 0x13c4u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4d4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_EQ) { c->r[4] = 0x4u; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_EQ) { c->r[4] = 0x0u; }
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_HI) { goto L_5108e4; }
    c->r[1] = (c->r[6] << 2);
    c->r[2] = 0x5107fcu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x51084cu: goto L_51084c; case 0x51085cu: goto L_51085c; case 0x510870u: goto L_510870; case 0x5108a8u: goto L_5108a8; case 0x5108bcu: goto L_5108bc; case 0x5108e4u: goto L_5108e4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51084c:;
    c->r[1] = 0x1578484u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[1] = 0x51085cu + c->r[1];
    goto L_5108e0;
L_51085c:;
    c->r[1] = 0x1578470u;
    c->r[0] = c->r[4] | 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x510870u + c->r[1];
    goto L_5108e0;
L_510870:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x6u;
    c->r[14] = 0x510894u; f_50899c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5108d0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5108a8:;
    c->r[1] = 0x1578424u;
    c->r[0] = c->r[4] | 0x2u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x5108bcu + c->r[1];
    goto L_5108e0;
L_5108bc:;
    c->r[1] = 0x1578410u;
    c->r[0] = c->r[4] | 0x3u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x5108d0u + c->r[1];
    goto L_5108e0;
L_5108d0:;
    c->r[1] = 0x15783fcu;
    c->r[0] = c->r[4] | 0x2u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x5108e4u + c->r[1];
L_5108e0:;
    c->r[0] = c->r[1] + (c->r[0] << 5);
L_5108e4:;
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_510910(Cpu *restrict c) {
    FN_ENTER(0x510910u);
L_510910:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x15784b8u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x510938u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x510994u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5109acu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5109c4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5109e8(Cpu *restrict c) {
    FN_ENTER(0x5109e8u);
L_5109e8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1578440u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x510a10u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x510a6cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x510a84u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510a9cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_510ac0(Cpu *restrict c) {
    FN_ENTER(0x510ac0u);
L_510ac0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_510e34; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_510b14; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_510b04:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5090cc(c);
L_510b14:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_510bcc; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x22u;
    c->r[3] = c->r[13] + 0x23u;
    c->r[7] = c->r[13] + 0x24u;
    c->r[6] = c->r[13] + 0x25u;
    c->r[12] = c->r[13] + 0x21u;
    { uint32_t ea = c->r[13] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x26u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x27u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[14] = 0x510b78u; f_510e4c(c);
    c->r[0] = 0x1380u;
    c->r[1] = 0x7u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1528038u;
    { uint32_t ea = 0x510b94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x510b98u; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_510be0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x510ba8u; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_510be0; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x25u; ST8(ea, c->r[0]); }
    goto L_510c0c;
L_510bcc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_510b04;
L_510be0:;
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_510c00; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510c00u; f_5090cc(c);
L_510c00:;
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_510c20; }
L_510c0c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510c20u; f_5090cc(c);
L_510c20:;
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_510c40; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510c40u; f_5090cc(c);
L_510c40:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD8(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_510c60; }
    c->r[0] = c->r[4];
    c->r[1] = 0x15u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510c60u; f_5090cc(c);
L_510c60:;
    { uint32_t ea = c->r[13] + 0x23u; uint32_t v = LD8(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_510c80; }
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510c80u; f_5090cc(c);
L_510c80:;
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x21u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] | c->r[10]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_510d78; }
    c->r[0] = c->r[4];
    c->r[1] = 0x17u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x510ca4u; f_5090cc(c);
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x1404u;
    c->r[6] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x510cc0u; f_73aa70(c);
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[0] = 0x40400000u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_510cfc; }
    c->v.s[4] = 0xc0400000u;
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_510d08; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_510d20; }
    goto L_510d78;
L_510cfc:;
    c->v.s[0] = 0xc0400000u;
    c->v.s[4] = 0x3ec00000u;
    goto L_510d10;
L_510d08:;
    c->v.s[4] = 0x3ec00000u;
    c->v.s[16] = 0x3f000000u;
L_510d10:;
    c->v.f[0] = c->v.f[2] / c->v.f[0];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[4]);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_510d78; }
L_510d20:;
    c->v.s[0] = 0x437f0000u;
    c->r[1] = 0x8000u;
    c->r[2] = c->r[13] + 0x1cu;
    c->r[3] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xff0000u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->r[6] = c->r[1] | (c->r[0] << 24);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x510d54u; f_73af7c(c);
    c->r[2] = c->r[13] + 0x18u;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    c->r[14] = 0x510d68u; f_73b0e4(c);
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x510d78u; f_73b460(c);
L_510d78:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x8u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_NE) { goto L_510e34; }
    c->r[0] = c->r[9] | c->r[8];
    c->r[0] = c->r[0] | c->r[10];
    { uint32_t r = c->r[0] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_510dd8; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0xeeu;
    c->r[0] = 0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x510dc4u; f_508210(c);
    c->r[1] = 0x0u;
    c->r[0] = 0x1400u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_510e34;
L_510dd8:;
    c->r[1] = c->r[4] + 0x1400u;
    c->v.s[0] = LD32(c->r[1]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_510e24; }
    c->v.s[0] = 0x3f800000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x510df8u; f_73aa84(c);
    c->v.s[0] = 0x0u;
    c->r[1] = 0xefu;
    c->r[0] = 0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x510e20u; f_508210(c);
    goto L_510e34;
L_510e24:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[14] = 0x510e34u; f_5082a8(c);
L_510e34:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_510e4c(Cpu *restrict c) {
    FN_ENTER(0x510e4cu);
L_510e4c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x23a0u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_5112b8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x510eb8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_510f0c; }
    c->r[0] = 0x2506u;
    c->r[5] = c->r[10];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x800u);
    if (COND_EQ) { goto L_510f0c; }
    c->r[0] = c->r[10];
    c->r[14] = 0x510edcu; f_73a058(c);
    c->r[1] = 0x1389u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_5110bc; }
    c->r[1] = 0x3edu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x1du);
    if (COND_HI) { goto L_511310; }
    c->r[3] = 0xc7dbu;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x20000000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_511310; }
L_510f0c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_510f60; }
L_510f18:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x808u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x510f28u; rt_dispatch(c);
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_511188; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x510f44u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x510f58u: goto L_510f58; case 0x51105cu: goto L_51105c; case 0x511064u: goto L_511064; case 0x51115cu: goto L_51115c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_510f58:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_510f60:;
    c->r[0] = c->r[10];
    c->r[14] = 0x510f68u; f_73a058(c);
    c->r[1] = 0x144au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_510fc8; }
    c->r[1] = 0x144bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_51106c; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_5110f0; }
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = c->r[8];
    if (COND_NE) { goto L_511188; }
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_511188; }
    c->v.s[2] = 0x43a20000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    goto L_511174;
L_510fc8:;
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_5110e8; }
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_511164; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = c->r[8];
    if (COND_NE) { goto L_511188; }
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[0] = 0x42100000u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_511188; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x808u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x511024u; rt_dispatch(c);
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_511188; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x511040u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x511054u: goto L_511054; case 0x51115cu: goto L_51115c; case 0x5113bcu: goto L_5113bc; case 0x5113c4u: goto L_5113c4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_511054:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_51105c:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_511064:;
    c->r[0] = c->r[11];
    goto L_511188;
L_51106c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x808u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x511084u; rt_dispatch(c);
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_511188; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x5110a0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5110b4u: goto L_5110b4; case 0x51115cu: goto L_51115c; case 0x511340u: goto L_511340; case 0x511348u: goto L_511348; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5110b4:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_5110bc:;
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_511350; }
    c->r[1] = 0x13fbu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x1406u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_511374; }
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[2] = 0x40800000u;
    goto L_511358;
L_5110e8:;
    c->v.s[0] = 0x42440000u;
    goto L_511168;
L_5110f0:;
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[0] = 0x42b80000u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_511188; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x808u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x511124u; rt_dispatch(c);
    c->r[1] = c->r[0] - 0x1u;
    c->r[0] = c->r[7];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_511188; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x511140u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x511154u: goto L_511154; case 0x51115cu: goto L_51115c; case 0x5113ccu: goto L_5113cc; case 0x5113d4u: goto L_5113d4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_511154:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_51115c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_511164:;
    c->v.s[0] = 0x422c0000u;
L_511168:;
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
L_511174:;
    c->r[0] = c->r[8];
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = 0x1u; }
    if (COND_MI) { { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); } }
    if (COND_MI) { c->r[0] = c->r[7]; }
L_511188:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[6], 0x9u);
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_5111e4; }
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_NE) { goto L_5112b8; }
    c->r[0] = c->r[10];
    c->r[14] = 0x5111a8u; f_73a058(c);
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_511210; }
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_5112b8; }
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[0] = 0x42100000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_5112c0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_5112d0;
L_5111e4:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5112b8; }
    c->r[0] = c->r[10];
    c->r[14] = 0x5111f8u; f_73a058(c);
    c->r[1] = 0x1407u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_511274; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    goto L_5112c8;
L_511210:;
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[0] = 0x42b40000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_5112dc; }
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x808u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->pc = c->r[1]; c->r[14] = 0x511240u; rt_dispatch(c);
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_5113ac; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x511258u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x51126cu: goto L_51126c; case 0x511398u: goto L_511398; case 0x5113a0u: goto L_5113a0; case 0x5113a8u: goto L_5113a8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51126c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_5113ac;
L_511274:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { goto L_5112b8; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
L_5112b8:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5112c0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
L_5112c8:;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
L_5112d0:;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5112dc:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_511310:;
    (void)f_subs(c, c->r[0], 0x30u);
    if (COND_NE) { goto L_511374; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x40u);
    if (COND_NE) { goto L_511368; }
    c->r[0] = 0x250au;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x75u;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_510f0c; }
    goto L_511368;
L_511340:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_511348:;
    c->r[0] = c->r[11];
    goto L_511188;
L_511350:;
    c->r[0] = c->r[10] + 0x500u;
    c->v.s[2] = 0x41200000u;
L_511358:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_510f0c; }
L_511368:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_510f18;
L_511374:;
    c->r[0] = 0x13d4u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    c->r[0] = c->r[4];
    if (COND_EQ) { c->r[0] = c->r[8]; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    goto L_510f0c;
L_511398:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_5113ac;
L_5113a0:;
    c->r[7] = c->r[11];
    goto L_5113ac;
L_5113a8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_5113ac:;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5113bc:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_5113c4:;
    c->r[0] = c->r[11];
    goto L_511188;
L_5113cc:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_511188;
L_5113d4:;
    c->r[0] = c->r[11];
    goto L_511188;
}
void f_5113f0(Cpu *restrict c) {
    FN_ENTER(0x5113f0u);
L_5113f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[2] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_51156c; }
    c->r[1] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51143c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_511430:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5090cc(c);
L_51143c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_511574; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x1cu;
    c->r[5] = c->r[13] + 0x1du;
    c->r[6] = c->r[13] + 0x1eu;
    c->r[12] = c->r[13] + 0x19u;
    c->r[14] = c->r[13] + 0x1au;
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[13] + 0x1bu;
    c->r[3] = c->r[13] + 0x1fu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[14] = 0x5114a4u; f_510e4c(c);
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5114c4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5114c4u; f_5090cc(c);
L_5114c4:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5114e4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5114e4u; f_5090cc(c);
L_5114e4:;
    { uint32_t ea = c->r[13] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511504; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511504u; f_5090cc(c);
L_511504:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511524; }
    c->r[0] = c->r[4];
    c->r[1] = 0x15u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511524u; f_5090cc(c);
L_511524:;
    { uint32_t ea = c->r[13] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511544; }
    c->r[0] = c->r[4];
    c->r[1] = 0x16u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511544u; f_5090cc(c);
L_511544:;
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x19u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51156c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x17u;
    c->r[2] = 0x2u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51156cu; f_5090cc(c);
L_51156c:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_511574:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_511430;
}
void f_511588(Cpu *restrict c) {
    FN_ENTER(0x511588u);
L_511588:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15779a8u;
    c->r[6] = c->r[3];
    c->r[8] = c->r[1];
    c->r[0] = 0x5115a8u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5116fc; }
    c->r[0] = 0x1577994u;
    c->r[0] = 0x5115bcu + c->r[0];
    c->r[14] = 0x5115bcu; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5116fc; }
    c->r[0] = 0x15778bcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    c->r[7] = 0x41000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1400000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40800000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42680000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc23c0000u;
    c->r[0] = 0x5115f4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1f00000u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1c80000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41b80000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x424c0000u;
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc1c00000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x42b20000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc0800000u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x42240000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[5]); }
    c->r[5] = 0xc0000000u;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1300000u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1577854u;
    c->r[0] = 0x5116fcu + c->r[0];
    c->r[14] = 0x5116fcu; f_15eff8c(c);
L_5116fc:;
    (void)f_subs(c, c->r[6], 0x13u);
    if (COND_HI) { goto L_5117d8; }
    c->r[1] = (c->r[6] << 2);
    c->r[2] = 0x511710u + 0xcu;
    c->r[0] = 0x1577794u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x51171cu + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x51176cu: goto L_51176c; case 0x511780u: goto L_511780; case 0x5117c4u: goto L_5117c4; case 0x5117d8u: goto L_5117d8; case 0x5117dcu: goto L_5117dc; case 0x5117e4u: goto L_5117e4; case 0x5117f8u: goto L_5117f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51176c:;
    c->r[0] = 0x1577738u;
    c->r[0] = 0x511778u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_511780:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[14] = 0x5117a4u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x15776f8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x5117b8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x40u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5117c4:;
    c->r[0] = 0x15776e0u;
    c->r[0] = 0x5117d0u + c->r[0];
    c->r[0] = c->r[0] + 0x60u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5117d8:;
    c->r[0] = 0x0u;
L_5117dc:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5117e4:;
    c->r[0] = 0x15776c0u;
    c->r[0] = 0x5117f0u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5117f8:;
    c->r[0] = 0x15776acu;
    c->r[0] = 0x511804u + c->r[0];
    c->r[0] = c->r[0] + 0x80u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_511834(Cpu *restrict c) {
    FN_ENTER(0x511834u);
L_511834:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x157772cu;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x511854u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5118d4; }
    c->r[0] = 0x1577718u;
    c->r[0] = 0x511868u + c->r[0];
    c->r[14] = 0x511868u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5118d4; }
    c->r[0] = 0x15776b0u;
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[1] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc23c0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x424c0000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1c00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x42b20000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc0800000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x42240000u;
    c->r[0] = 0x5118b0u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x15776acu;
    c->r[0] = 0x5118d4u + c->r[0];
    c->r[14] = 0x5118d4u; f_15eff8c(c);
L_5118d4:;
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_EQ) { goto L_511924; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_NE) { goto L_51191c; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[14] = 0x511908u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[2] = 0x1577640u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x511920u + c->r[2]; }
L_51191c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_511924:;
    c->r[0] = 0x1577630u;
    c->r[0] = 0x511930u + c->r[0];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51194c(Cpu *restrict c) {
    FN_ENTER(0x51194cu);
L_51194c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x157761cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x511974u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5119d0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5119e8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511a00u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_511a24(Cpu *restrict c) {
    FN_ENTER(0x511a24u);
L_511a24:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_511bd4; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_511a70; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_511a64:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5090cc(c);
L_511a70:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_511bb0; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x14u;
    c->r[3] = c->r[13] + 0x15u;
    c->r[6] = c->r[13] + 0x16u;
    { uint32_t ea = c->r[13] + 0x17u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x13u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x17u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x511ac8u; f_511be0(c);
    { uint32_t ea = c->r[13] + 0x17u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511ae8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511ae8u; f_5090cc(c);
L_511ae8:;
    { uint32_t ea = c->r[13] + 0x16u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511b08; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511b08u; f_5090cc(c);
L_511b08:;
    { uint32_t ea = c->r[13] + 0x15u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511b28; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511b28u; f_5090cc(c);
L_511b28:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_511b48; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511b48u; f_5090cc(c);
L_511b48:;
    { uint32_t ea = c->r[13] + 0x13u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_511b68; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2au;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x511b68u; f_5090cc(c);
L_511b68:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_511bd4; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_511bc4; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0xe6u;
    c->r[0] = 0x0u;
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x511ba8u; f_508210(c);
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_511bb0:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_511a64;
L_511bc4:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[14] = 0x511bd4u; f_5082a8(c);
L_511bd4:;
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_511be0(Cpu *restrict c) {
    FN_ENTER(0x511be0u);
L_511be0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x511c28u; f_73a058(c);
    c->r[1] = 0x138bu;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0xf9u);
    if (COND_HI) { goto L_512044; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x511c44u + 0x8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[9];
    c->pc = c->r[2] + c->r[1]; switch (c->pc) { case 0x512034u: goto L_512034; case 0x512044u: goto L_512044; case 0x512078u: goto L_512078; case 0x5120a0u: goto L_5120a0; case 0x5120b4u: goto L_5120b4; case 0x5120d0u: goto L_5120d0; case 0x5120e0u: goto L_5120e0; case 0x5120f4u: goto L_5120f4; case 0x512100u: goto L_512100; case 0x512120u: goto L_512120; case 0x512148u: goto L_512148; case 0x51216cu: goto L_51216c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_512034:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    goto L_51216c;
L_512044:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x512054u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[9];
    if (COND_NE) { goto L_51216c; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    c->r[0] = c->r[9];
    if (COND_EQ) { goto L_51216c; }
L_512078:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x512090u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[10];
    if (COND_NE) { c->r[0] = c->r[8]; }
    goto L_51216c;
L_5120a0:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41d80000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    goto L_5120c4;
L_5120b4:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42820000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
L_5120c4:;
    c->r[0] = c->r[9];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51216c; }
L_5120d0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[10];
    goto L_51216c;
L_5120e0:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41d00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    goto L_512110;
L_5120f4:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x42880000u;
    goto L_512128;
L_512100:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42820000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
L_512110:;
    c->r[0] = c->r[9];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51216c; }
    goto L_512034;
L_512120:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x42000000u;
L_512128:;
    c->r[1] = 0x1u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = c->r[8]; }
    goto L_51216c;
L_512148:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x42340000u;
    c->r[1] = 0x1u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = c->r[10]; }
L_51216c:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[0], 0xau);
    if (COND_HI) { goto L_512258; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x51218cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5121bcu: goto L_5121bc; case 0x512218u: goto L_512218; case 0x512258u: goto L_512258; case 0x512260u: goto L_512260; case 0x5122a4u: goto L_5122a4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5121bc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512258; }
L_5121c8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x5121d0u; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512258; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_512258; }
    c->v.s[2] = 0x43a20000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_512258; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    goto L_512254;
L_512218:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5122f0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x51222cu; f_73a058(c);
    c->r[1] = 0x1414u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_512258; }
    c->r[1] = 0x1u;
    c->r[2] = 0x25u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_512258; }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[1]); }
    c->r[0] = 0x0u;
L_512254:;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
L_512258:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_512260:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51232c; }
    c->r[0] = c->r[5];
    c->r[14] = 0x512274u; f_73a058(c);
    c->r[1] = 0x1415u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512258; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42a00000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_512258; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    goto L_512324;
L_5122a4:;
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5121bc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5122b8u; f_73a058(c);
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512258; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42480000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_512258; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    goto L_512370;
L_5122f0:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5121c8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512258; }
    c->r[0] = c->r[5];
    c->r[14] = 0x512310u; f_73a058(c);
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512258; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
L_512324:;
    c->r[0] = 0x0u;
    goto L_512370;
L_51232c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5121bc; }
    c->r[0] = c->r[5];
    c->r[14] = 0x512340u; f_73a058(c);
    c->r[1] = 0x1414u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512258; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42a00000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_512258; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_512370:;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_512398(Cpu *restrict c) {
    FN_ENTER(0x512398u);
L_512398:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[9] = c->r[0];
    c->r[0] = 0x1576cd8u;
    c->r[6] = c->r[3];
    c->r[8] = c->r[1];
    c->r[0] = 0x5123b8u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51251c; }
    c->r[0] = 0x1576cc4u;
    c->r[0] = 0x5123ccu + c->r[0];
    c->r[14] = 0x5123ccu; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51251c; }
    c->r[0] = 0x1576be0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[12] = 0xc0000000u;
    c->r[14] = 0x0u;
    c->r[7] = 0x0u;
    c->r[5] = 0xbf000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1400000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbf800000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1100000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xc2180000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc1b00000u;
    c->r[0] = 0x512410u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[0] + 0x5cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40a00000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1300000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42820000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc1c80000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x42b80000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc0800000u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x42f40000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[7]); }
    c->r[7] = 0x41000000u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    c->r[4] = 0x0u;
    c->r[12] = c->r[0] + 0x80u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xc1d80000u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1b80000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40c00000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x41a80000u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[2] = c->r[0] + 0x8cu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1576b74u;
    c->r[0] = 0x51251cu + c->r[0];
    c->r[14] = 0x51251cu; f_15eff8c(c);
L_51251c:;
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_HI) { goto L_5125f4; }
    c->r[1] = (c->r[6] << 2);
    c->r[2] = 0x512530u + 0xcu;
    c->r[0] = 0x1576ab4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x51253cu + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x512588u: goto L_512588; case 0x51259cu: goto L_51259c; case 0x5125e0u: goto L_5125e0; case 0x5125f4u: goto L_5125f4; case 0x5125f8u: goto L_5125f8; case 0x512600u: goto L_512600; case 0x512614u: goto L_512614; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_512588:;
    c->r[0] = 0x1576a5cu;
    c->r[0] = 0x512594u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_51259c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[9];
    c->r[1] = 0xbu;
    c->r[14] = 0x5125c0u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1576a1cu;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x5125d4u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x40u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5125e0:;
    c->r[0] = 0x1576a04u;
    c->r[0] = 0x5125ecu + c->r[0];
    c->r[0] = c->r[0] + 0x60u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5125f4:;
    c->r[0] = 0x0u;
L_5125f8:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_512600:;
    c->r[0] = 0x15769e4u;
    c->r[0] = 0x51260cu + c->r[0];
    c->r[0] = c->r[0] + 0x80u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_512614:;
    c->r[0] = 0x15769d0u;
    c->r[0] = 0x512620u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_512650(Cpu *restrict c) {
    FN_ENTER(0x512650u);
L_512650:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1576a28u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x512678u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5126d4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5126ecu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512704u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_512728(Cpu *restrict c) {
    FN_ENTER(0x512728u);
L_512728:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_512798; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5127a4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_51276c:;
    c->r[14] = 0x512770u; f_5090cc(c);
    c->v.s[0] = 0x40c00000u;
    c->r[1] = 0xefu;
    c->r[0] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x512798u; f_508210(c);
L_512798:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5127a4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_512948; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x22u;
    c->r[6] = c->r[13] + 0x23u;
    c->r[2] = c->r[13] + 0x25u;
    c->r[7] = c->r[13] + 0x26u;
    c->r[12] = c->r[13] + 0x20u;
    c->r[14] = c->r[13] + 0x21u;
    { uint32_t ea = c->r[13] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x27u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    c->r[14] = 0x512820u; f_512ab4(c);
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_512840; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512840u; f_5090cc(c);
L_512840:;
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512860; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512860u; f_5090cc(c);
L_512860:;
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512880; }
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512880u; f_5090cc(c);
L_512880:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5128a0; }
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5128a0u; f_5090cc(c);
L_5128a0:;
    { uint32_t ea = c->r[13] + 0x23u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5128c0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1eu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5128c0u; f_5090cc(c);
L_5128c0:;
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5128e0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1fu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5128e0u; f_5090cc(c);
L_5128e0:;
    { uint32_t ea = c->r[13] + 0x21u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512900; }
    c->r[0] = c->r[4];
    c->r[1] = 0x34u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512900u; f_5090cc(c);
L_512900:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512920; }
    c->r[0] = c->r[4];
    c->r[1] = 0x35u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512920u; f_5090cc(c);
L_512920:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_NE) { goto L_51295c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_51299c; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xe6u;
    goto L_51297c;
L_512948:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_51276c;
L_51295c:;
    c->r[0] = c->r[5];
    c->r[14] = 0x512964u; f_73a058(c);
    c->r[1] = 0x13feu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51299c; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xf0u;
L_51297c:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x512998u; f_508210(c);
    goto L_5129ac;
L_51299c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[14] = 0x5129acu; f_5082a8(c);
L_5129ac:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1000u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5129c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5129f8; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0xeeu;
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[6]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5129f0u; f_508210(c);
    c->v.s[16] = 0x42c80000u;
    goto L_512a98;
L_5129f8:;
    c->r[0] = 0x734u;
    c->r[1] = 0x1eeu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_512a50; }
    c->r[0] = 0x1380u;
    c->r[1] = 0x9u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x15261a4u;
    { uint32_t ea = 0x512a28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x512a2cu; f_33f614(c);
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_NE) { goto L_512a6c; }
    c->r[0] = 0x1404u;
    c->v.s[0] = 0x42c80000u;
    c->r[0] = c->r[4] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_512a6c; }
L_512a50:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x9u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x38cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0x512a6cu; rt_dispatch(c);
L_512a6c:;
    c->v.s[16] = 0x0u;
    c->r[1] = 0xefu;
    c->r[0] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x512a98u; f_508210(c);
L_512a98:;
    c->r[0] = 0x1404u;
    c->r[0] = c->r[4] + c->r[0];
    ST32(c->r[0], c->v.s[16]);
    goto L_512798;
}
void f_512ab4(Cpu *restrict c) {
    FN_ENTER(0x512ab4u);
L_512ab4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x23a0u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_512d58; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x512b2cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_512b48; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_512be4; }
L_512b48:;
    c->r[0] = c->r[6];
    c->r[14] = 0x512b50u; f_73a058(c);
    c->r[1] = 0x1483u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_512b9c; }
    c->r[1] = 0x144bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[1] = c->r[4];
    if (COND_CC) { goto L_512c34; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512c30; }
    c->r[0] = c->r[6] + 0x500u;
    c->v.s[2] = 0x41880000u;
    c->r[1] = c->r[8];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[4]; }
    goto L_512c34;
L_512b9c:;
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_512c10; }
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512c30; }
    c->r[0] = c->r[6] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = c->r[8];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_MI) { c->r[1] = c->r[4]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[1] = c->r[8]; }
    goto L_512c34;
L_512be4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x512becu; f_73a058(c);
    c->r[1] = 0x146fu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_512d60; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_512d60; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    goto L_512c3c;
L_512c10:;
    c->r[0] = c->r[6] + 0x500u;
    c->v.s[0] = 0x428a0000u;
    c->r[1] = c->r[8];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[1] = c->r[4]; }
    goto L_512c34;
L_512c30:;
    c->r[1] = c->r[8];
L_512c34:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_512c3c:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1000u;
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0x512c54u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_512c80; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[0] = c->r[1]; }
L_512c80:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x512c90u; f_73a058(c);
    c->r[1] = 0x13feu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { c->r[11] = c->r[9]; }
    (void)f_subs(c, c->r[5], 0x3u);
    { uint32_t ea = c->r[11]; ST8(ea, c->r[7]); }
    if (COND_EQ) { goto L_512cb8; }
    (void)f_subs(c, c->r[5], 0x8u);
    if (COND_EQ) { goto L_512ce0; }
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_NE) { goto L_512d58; }
L_512cb8:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512d38; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_512ce0:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512d58; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { goto L_512d58; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_512d58; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_512d38:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512d58; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_512d58:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_512d60:;
    c->r[1] = 0x141fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_512d8c; }
    c->r[0] = 0x13e8u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[8];
    if (COND_NE) { c->r[0] = c->r[4]; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    goto L_512c3c;
L_512d8c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_512c3c;
}
void f_512da0(Cpu *restrict c) {
    FN_ENTER(0x512da0u);
L_512da0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[2] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_512f64; }
    c->r[1] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_512dec; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_512de0:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5090cc(c);
L_512dec:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_512f6c; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x23u;
    c->r[5] = c->r[13] + 0x24u;
    c->r[6] = c->r[13] + 0x25u;
    c->r[7] = c->r[13] + 0x26u;
    c->r[12] = c->r[13] + 0x20u;
    c->r[14] = c->r[13] + 0x21u;
    { uint32_t ea = c->r[13] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x22u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x27u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    c->r[14] = 0x512e64u; f_512ab4(c);
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512e84; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512e84u; f_5090cc(c);
L_512e84:;
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512ea4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512ea4u; f_5090cc(c);
L_512ea4:;
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512ec4; }
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512ec4u; f_5090cc(c);
L_512ec4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512ee4; }
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512ee4u; f_5090cc(c);
L_512ee4:;
    { uint32_t ea = c->r[13] + 0x23u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512f04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1eu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512f04u; f_5090cc(c);
L_512f04:;
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512f24; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1fu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512f24u; f_5090cc(c);
L_512f24:;
    { uint32_t ea = c->r[13] + 0x21u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512f44; }
    c->r[0] = c->r[4];
    c->r[1] = 0x34u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512f44u; f_5090cc(c);
L_512f44:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_512f64; }
    c->r[0] = c->r[4];
    c->r[1] = 0x35u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x512f64u; f_5090cc(c);
L_512f64:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_512f6c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_512de0;
}
void f_512f80(Cpu *restrict c) {
    FN_ENTER(0x512f80u);
L_512f80:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15761c0u;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x512fa0u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51308c; }
    c->r[0] = 0x15761acu;
    c->r[0] = 0x512fb4u + c->r[0];
    c->r[14] = 0x512fb4u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51308c; }
    c->r[0] = 0x1576114u;
    c->r[12] = 0x999au;
    c->r[14] = 0x6666u;
    c->r[3] = 0x999au;
    c->r[2] = 0x6666u;
    c->r[1] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40f90000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbfe60000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf190000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40660000u;
    c->r[0] = 0x512fecu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1f80000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x999au;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc32e0000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41500000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x41000000u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1b00000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41f00000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42b60000u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42f00000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x3cu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x15760d4u;
    c->r[0] = 0x51308cu + c->r[0];
    c->r[14] = 0x51308cu; f_15eff8c(c);
L_51308c:;
    c->r[1] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_513150; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x5130a4u + 0xcu;
    c->r[0] = 0x1576050u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5130b0u + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5130f8u: goto L_5130f8; case 0x51313cu: goto L_51313c; case 0x513150u: goto L_513150; case 0x513154u: goto L_513154; case 0x51315cu: goto L_51315c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5130f8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[14] = 0x51311cu; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1575fd0u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x513130u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x20u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51313c:;
    c->r[0] = 0x1575fb8u;
    c->r[0] = 0x513148u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_513150:;
    c->r[0] = 0x0u;
L_513154:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51315c:;
    c->r[0] = 0x1575f98u;
    c->r[0] = 0x513168u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_513190(Cpu *restrict c) {
    FN_ENTER(0x513190u);
L_513190:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1575fecu;
    c->r[4] = c->r[3];
    c->r[0] = 0x5131a4u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51321c; }
    c->r[0] = 0x1575fd8u;
    c->r[0] = 0x5131b8u + c->r[0];
    c->r[14] = 0x5131b8u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51321c; }
    c->r[0] = 0x1575f78u;
    c->r[12] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0x0u;
    c->r[6] = 0x0u;
    c->r[3] = 0xc0000000u;
    c->r[1] = 0x0u;
    c->r[5] = 0x41000000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc1800000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40d00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xc1a80000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc0200000u;
    c->r[0] = 0x5131f8u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1575f74u;
    c->r[0] = 0x51321cu + c->r[0];
    c->r[14] = 0x51321cu; f_15eff8c(c);
L_51321c:;
    c->r[1] = 0x1575f40u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_EQ) { c->r[0] = 0x513230u + c->r[1]; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_513244(Cpu *restrict c) {
    FN_ENTER(0x513244u);
L_513244:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1575f34u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x51326cu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5132c8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5132e0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5132f8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51331c(Cpu *restrict c) {
    FN_ENTER(0x51331cu);
L_51331c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_513510; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_513378; }
    c->r[0] = c->r[5];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_51335c:;
    c->r[14] = 0x513360u; f_5090cc(c);
L_513360:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = 0x2u;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5082a8(c);
L_513378:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_513518; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x1du;
    c->r[6] = c->r[13] + 0x1eu;
    c->r[14] = c->r[13] + 0x1au;
    c->r[3] = c->r[13] + 0x1bu;
    c->r[12] = c->r[13] + 0x19u;
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0x1cu;
    c->r[2] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[14]); }
    c->r[3] = c->r[13] + 0x1fu;
    c->r[0] = c->r[5];
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[14] = 0x5133e4u; f_513530(c);
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513404; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513404u; f_5090cc(c);
L_513404:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513424; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513424u; f_5090cc(c);
L_513424:;
    { uint32_t ea = c->r[13] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513444; }
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513444u; f_5090cc(c);
L_513444:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513464; }
    c->r[0] = c->r[5];
    c->r[1] = 0xau;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513464u; f_5090cc(c);
L_513464:;
    { uint32_t ea = c->r[13] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513484; }
    c->r[0] = c->r[5];
    c->r[1] = 0xbu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513484u; f_5090cc(c);
L_513484:;
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5134a4; }
    c->r[0] = c->r[5];
    c->r[1] = 0xcu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5134a4u; f_5090cc(c);
L_5134a4:;
    { uint32_t ea = c->r[13] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5134c4; }
    c->r[0] = c->r[5];
    c->r[1] = 0x30u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5134c4u; f_5090cc(c);
L_5134c4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5134ccu; f_73a058(c);
    c->r[1] = 0x13c4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x138du; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_513360; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0xeeu;
    c->r[0] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x513508u; f_508210(c);
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_513510:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_513518:;
    c->r[0] = c->r[5];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_51335c;
}
void f_513530(Cpu *restrict c) {
    FN_ENTER(0x513530u);
L_513530:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0];
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x23a0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_5137c0; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x513594u; f_73a058(c);
    c->r[1] = 0x144au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_5135c4; }
    c->r[1] = 0x144bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_513654; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_513724; }
    c->v.s[0] = 0x42880000u;
    goto L_51363c;
L_5135c4:;
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_513638; }
    c->r[1] = 0x141eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_513724; }
    c->r[0] = 0x13e8u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[0] = c->r[9];
    if (COND_NE) { c->r[0] = c->r[4]; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_513660; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_513660; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x1000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_513660; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[11] = c->r[0]; }
    c->r[1] = c->r[11];
    goto L_513660;
L_513638:;
    c->v.s[0] = 0x42840000u;
L_51363c:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
L_513648:;
    c->r[1] = c->r[9];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_513660; }
L_513654:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
L_51365c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_513660:;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[6], 0x4u);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_5137c0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5136c0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x513684u; f_73a058(c);
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x1391u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_513790; }
    c->r[1] = 0x141eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_5137c0; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41980000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_5137a8; }
    goto L_5137c0;
L_5136c0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5137c0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x5136d4u; f_73a058(c);
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_5137c0; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42080000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_5137c0; }
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5137bc;
L_513724:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x513734u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_513750; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_5137c8; }
L_513750:;
    c->r[0] = c->r[5];
    c->r[14] = 0x513758u; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_NE) { goto L_513660; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->r[1] = c->r[9];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_513660; }
    c->v.s[2] = 0x43a20000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    goto L_513648;
L_513790:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41800000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_5137c0; }
L_5137a8:;
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_5137bc:;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_5137c0:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_5137c8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x694u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5137e0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_513830; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5137f8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_513660; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x513810u + 0x8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x513660u: goto L_513660; case 0x513828u: goto L_513828; case 0x513890u: goto L_513890; case 0x513898u: goto L_513898; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_513828:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_513660;
L_513830:;
    c->r[0] = c->r[5];
    c->r[14] = 0x513838u; f_73a058(c);
    c->r[1] = 0x1b59u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_HI) { goto L_513860; }
    c->r[3] = 0xcfffu;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_513660; }
L_513860:;
    c->r[1] = 0x1b8bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51365c; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x42800000u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[0]; }
    goto L_513660;
L_513890:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_513660;
L_513898:;
    c->r[1] = c->r[11];
    goto L_513660;
}
void f_5138b4(Cpu *restrict c) {
    FN_ENTER(0x5138b4u);
L_5138b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[2] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_513a4c; }
    c->r[1] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_513900; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_5138f4:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5090cc(c);
L_513900:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_513a54; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0x1cu;
    c->r[5] = c->r[13] + 0x1du;
    c->r[6] = c->r[13] + 0x1eu;
    c->r[12] = c->r[13] + 0x19u;
    c->r[14] = c->r[13] + 0x1au;
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x1bu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x1fu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[12]); }
    c->r[14] = 0x51396cu; f_513530(c);
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51398c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51398cu; f_5090cc(c);
L_51398c:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5139ac; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5139acu; f_5090cc(c);
L_5139ac:;
    { uint32_t ea = c->r[13] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5139cc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x9u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5139ccu; f_5090cc(c);
L_5139cc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5139ec; }
    c->r[0] = c->r[4];
    c->r[1] = 0xau;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5139ecu; f_5090cc(c);
L_5139ec:;
    { uint32_t ea = c->r[13] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513a0c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xbu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513a0cu; f_5090cc(c);
L_513a0c:;
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513a2c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xcu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513a2cu; f_5090cc(c);
L_513a2c:;
    { uint32_t ea = c->r[13] + 0x19u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513a4c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x30u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513a4cu; f_5090cc(c);
L_513a4c:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_513a54:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_5138f4;
}
void f_513a68(Cpu *restrict c) {
    FN_ENTER(0x513a68u);
L_513a68:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15757f8u;
    c->r[6] = c->r[3];
    c->r[8] = c->r[1];
    c->r[0] = 0x513a88u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_513bb8; }
    c->r[0] = 0x15757e4u;
    c->r[0] = 0x513a9cu + c->r[0];
    c->r[14] = 0x513a9cu; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513bb8; }
    c->r[0] = 0x1575720u;
    c->r[12] = 0x0u;
    c->r[14] = 0x0u;
    c->r[3] = 0x0u;
    c->r[2] = 0x3f800000u;
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x41200000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbf800000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42b40000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc2340000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc3100000u;
    c->r[0] = 0x513ae0u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41500000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41700000u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1c00000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2b40000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2e40000u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42680000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x3cu;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[3] = 0x0u;
    c->r[12] = 0x0u;
    c->r[14] = 0x41000000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42a00000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2200000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc1200000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43200000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40e00000u;
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x6cu;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x15756c8u;
    c->r[0] = 0x513bb8u + c->r[0];
    c->r[14] = 0x513bb8u; f_15eff8c(c);
L_513bb8:;
    c->r[1] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_HI) { goto L_513c80; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x513bd0u + 0xcu;
    c->r[0] = 0x1575624u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x513bdcu + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x513c28u: goto L_513c28; case 0x513c6cu: goto L_513c6c; case 0x513c80u: goto L_513c80; case 0x513c84u: goto L_513c84; case 0x513c8cu: goto L_513c8c; case 0x513ca0u: goto L_513ca0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_513c28:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[14] = 0x513c4cu; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x15755a0u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x513c60u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x20u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_513c6c:;
    c->r[0] = 0x1575588u;
    c->r[0] = 0x513c78u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_513c80:;
    c->r[0] = 0x0u;
L_513c84:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_513c8c:;
    c->r[0] = 0x1575568u;
    c->r[0] = 0x513c98u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_513ca0:;
    c->r[0] = 0x1575554u;
    c->r[0] = 0x513cacu + c->r[0];
    c->r[0] = c->r[0] + 0x60u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_513cd8(Cpu *restrict c) {
    FN_ENTER(0x513cd8u);
L_513cd8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x15755c4u;
    c->r[4] = c->r[3];
    c->r[0] = 0x513cecu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_513d60; }
    c->r[0] = 0x15755b0u;
    c->r[0] = 0x513d00u + c->r[0];
    c->r[14] = 0x513d00u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_513d60; }
    c->r[0] = 0x1575554u;
    c->r[12] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x0u;
    c->r[5] = 0x0u;
    c->r[2] = 0x3f000000u;
    c->r[1] = 0x0u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x41080000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1d00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xc1200000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc1800000u;
    c->r[0] = 0x513d3cu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1575550u;
    c->r[0] = 0x513d60u + c->r[0];
    c->r[14] = 0x513d60u; f_15eff8c(c);
L_513d60:;
    c->r[0] = c->r[4] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_EQ) { c->r[0] = 0x1575518u; }
    if (COND_EQ) { c->r[0] = 0x513d78u + c->r[0]; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_513d8c(Cpu *restrict c) {
    FN_ENTER(0x513d8cu);
L_513d8c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x157550cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x513db4u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x513e10u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x513e28u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513e40u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_513e64(Cpu *restrict c) {
    FN_ENTER(0x513e64u);
L_513e64:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_514194; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_513eac; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    goto L_513fa4;
L_513eac:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_513f94; }
    c->r[0] = 0x13f4u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x513ec8u; f_5141bc(c);
    c->r[6] = c->r[0];
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[8] = r; }
    if (COND_EQ) { goto L_513ee8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513ee8u; f_5090cc(c);
L_513ee8:;
    { uint32_t r = c->r[6] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_513f04; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x513f04u; f_5090cc(c);
L_513f04:;
    { uint32_t r = c->r[6] & 0x14u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_514034; }
    c->r[0] = c->r[4];
    c->r[1] = 0x18u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[9] = c->r[6] & 0x10u;
    c->r[14] = 0x513f24u; f_5090cc(c);
    c->v.s[16] = 0x3f800000u;
    c->r[0] = 0x1404u;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x513f40u; f_73aa70(c);
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = 0x42200000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0xc2200000u;
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_513fb4; }
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.s[2] = 0x41f00000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_513fbc; }
    c->v.s[4] = 0xc1f00000u;
    c->v.s[2] = 0x42480000u;
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GE) { c->r[0] = 0x0u; }
    if (COND_GE) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_513fd4; }
    goto L_514034;
L_513f94:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
L_513fa4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_5090cc(c);
L_513fb4:;
    c->v.s[4] = 0x3f333333u;
    goto L_513fc4;
L_513fbc:;
    c->v.s[4] = 0x3f333333u;
    c->v.s[16] = 0x3e99999au;
L_513fc4:;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[4]);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_514034; }
L_513fd4:;
    c->v.s[0] = 0x437f0000u;
    { uint32_t r = c->r[6] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = 0x1u;
    if (COND_EQ) { c->r[1] = 0x8000u; }
    if (COND_EQ) { c->r[1] = (c->r[1] & 0xFFFFu) | 0xff0000u; }
    if (COND_NE) { c->r[1] = 0xffu; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    c->r[7] = c->r[1] | (c->r[0] << 24);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x514010u; f_73af7c(c);
    c->r[2] = c->r[13] + 0xcu;
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[14] = 0x514024u; f_73b0e4(c);
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[14] = 0x514034u; f_73b460(c);
L_514034:;
    { uint32_t r = c->r[6] & 0x28u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_514050; }
    c->r[0] = c->r[4];
    c->r[1] = 0x19u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x514050u; f_5090cc(c);
L_514050:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x3u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_51407c; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_514158; }
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xe6u;
    goto L_514178;
L_51407c:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_514194; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x514094u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_5140b4; }
    { uint32_t r = c->r[6] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_514128; }
L_5140a4:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xeeu;
    goto L_514178;
L_5140b4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5140c4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x5140d0u; f_73a058(c);
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_514110; }
    c->r[1] = 0x139au;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_5140f8; }
    c->r[2] = 0x1u;
    c->r[3] = 0x241u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_514158; }
L_5140f8:;
    c->r[1] = 0x1472u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x1479u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_EQ) { goto L_514158; }
    goto L_5140a4;
L_514110:;
    c->r[1] = 0x139bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514158; }
    c->r[1] = 0x13a1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514158; }
L_514128:;
    c->r[0] = 0x874u;
    c->r[1] = 0x1eeu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_51416c; }
    c->r[1] = 0x1efu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514158; }
    c->r[0] = c->r[4] + 0x870u;
    c->r[14] = 0x514150u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51416c; }
L_514158:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[14] = 0x514168u; f_5082a8(c);
    goto L_514194;
L_51416c:;
    c->v.s[0] = 0x0u;
    c->r[0] = 0x0u;
    c->r[1] = 0xefu;
L_514178:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x3u;
    c->r[3] = 0x1u;
    c->r[14] = 0x514194u; f_508210(c);
L_514194:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5141bc(Cpu *restrict c) {
    FN_ENTER(0x5141bcu);
L_5141bc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[2];
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[0] = c->r[4];
    c->r[14] = 0x5141d4u; f_73a058(c);
    c->r[1] = 0x13e6u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_514284; }
    c->r[1] = 0x138bu;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x18u);
    if (COND_HI) { goto L_514468; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x5141fcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x514264u: goto L_514264; case 0x5142fcu: goto L_5142fc; case 0x514330u: goto L_514330; case 0x5143ccu: goto L_5143cc; case 0x5143d8u: goto L_5143d8; case 0x514468u: goto L_514468; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_514264:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_5144cc; }
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    goto L_5144ec;
L_514284:;
    c->r[1] = 0x1472u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x15u);
    if (COND_HI) { goto L_514308; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x5142a0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x5142fcu: goto L_5142fc; case 0x514330u: goto L_514330; case 0x514358u: goto L_514358; case 0x51438cu: goto L_51438c; case 0x514468u: goto L_514468; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5142fc:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41800000u;
    goto L_514338;
L_514308:;
    c->r[1] = 0x144bu;
    c->r[7] = 0x1u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_514408; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514468; }
    c->v.s[0] = 0x42000000u;
    goto L_51435c;
L_514330:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41d00000u;
L_514338:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[1] = 0x1u; }
    if (COND_LE) { c->r[0] = 0x1u; }
    goto L_5143fc;
L_514358:;
    c->v.s[0] = 0x42a00000u;
L_51435c:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[1] = 0x1u; }
    if (COND_MI) { c->r[0] = 0x1u; }
    c->r[7] = c->r[0] | (c->r[1] << 1);
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_514410; }
    goto L_5144f8;
L_51438c:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = 0x0u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_MI) { c->r[1] = 0x1u; }
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    c->r[1] = 0x2u;
    if (COND_NE) { c->r[1] = 0x8u; }
    goto L_5144ec;
L_5143cc:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41800000u;
    goto L_5143e0;
L_5143d8:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41400000u;
L_5143e0:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = 0x1u; }
    if (COND_PL) { c->r[0] = 0x1u; }
L_5143fc:;
    c->r[0] = (c->r[0] << 3);
    c->r[0] = c->r[0] | (c->r[1] << 2);
    c->r[7] = c->r[0] | 0x1u;
L_514408:;
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_EQ) { goto L_5144f8; }
L_514410:;
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_514570; }
    c->r[0] = c->r[4];
    c->r[14] = 0x514420u; f_73a058(c);
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[1] = 0x13e7u; }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_514570; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_514454; }
    c->r[0] = 0xfeu;
    c->r[1] = 0x2u;
    goto L_51445c;
L_514454:;
    c->r[0] = 0xfdu;
    c->r[1] = 0x1u;
L_51445c:;
    c->r[1] = c->r[1] | c->r[7];
    c->r[7] = c->r[1] & c->r[0];
    goto L_514570;
L_514468:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x514478u; rt_dispatch(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5144bc; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { goto L_5144bc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5144acu; rt_dispatch(c);
    c->r[1] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x1u;
    if (COND_NE) { c->r[1] = 0x4u; }
L_5144bc:;
    c->r[7] = c->r[2] | c->r[1];
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_514410; }
    goto L_5144f8;
L_5144cc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5144dcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x8u;
    c->r[0] = 0x1u;
    if (COND_NE) { c->r[1] = 0x4u; }
L_5144ec:;
    c->r[7] = c->r[0] | c->r[1];
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_514410; }
L_5144f8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x514500u; f_73a058(c);
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_514530; }
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514570; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { c->r[7] = (c->r[7] & 0xfffffffcu) | ((c->r[0] << 0) & 0x3u); }
    goto L_514570;
L_514530:;
    c->r[1] = 0x13f1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514554; }
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514570; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41b00000u;
    goto L_51455c;
L_514554:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41200000u;
L_51455c:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[0] = 0x2u; }
    if (COND_LS) { c->r[7] = (c->r[7] & 0xfffffff8u) | ((c->r[0] << 0) & 0x7u); }
L_514570:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x514580u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_514640; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5145b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x40000u;
    { uint32_t ea = c->r[0] + 0x1b0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5145acu; rt_dispatch(c);
    c->r[0] = (c->r[0] << 4);
L_5145b0:;
    c->r[1] = 0x20u;
    c->r[7] = c->r[7] & 0xffffffc3u;
    c->r[2] = 0x4cu;
    c->r[1] = c->r[1] & (c->r[0] << 1);
    c->r[0] = c->r[0] & ~0x2fu;
    c->r[5] = c->r[0] | c->r[7];
    c->r[0] = c->r[1] | c->r[5];
    c->r[1] = 0x10u;
    c->r[7] = c->r[0] ^ 0x20u;
    c->r[0] = c->r[4];
    c->r[14] = 0x5145dcu; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_514640; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5145ecu; f_73a058(c);
    c->r[1] = 0x1402u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514624; }
    c->r[1] = 0x13f7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514640; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x43040000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[7] = c->r[5] | 0x50u; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_514624:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42100000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_514640; }
    c->r[7] = c->r[5] | 0x50u;
L_514640:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[7]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51465c(Cpu *restrict c) {
    FN_ENTER(0x51465cu);
L_51465c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1574d04u;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x51467cu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_514750; }
    c->r[0] = 0x1574cf0u;
    c->r[0] = 0x514690u + c->r[0];
    c->r[14] = 0x514690u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_514750; }
    c->r[0] = 0x1574c5cu;
    c->r[12] = 0xcccdu;
    c->r[14] = 0x3333u;
    c->r[3] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x42000000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40fc0000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbf330000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc0c00000u;
    c->r[0] = 0x5146c4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42140000u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1800000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc2b80000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1300000u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42fc0000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x3cu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1574c30u;
    c->r[0] = 0x514750u + c->r[0];
    c->r[14] = 0x514750u; f_15eff8c(c);
L_514750:;
    c->r[1] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_514814; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x514768u + 0xcu;
    c->r[0] = 0x1574bacu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x514774u + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5147bcu: goto L_5147bc; case 0x514800u: goto L_514800; case 0x514814u: goto L_514814; case 0x514818u: goto L_514818; case 0x514820u: goto L_514820; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5147bc:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x10u;
    c->r[14] = 0x5147e0u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1574b2cu;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x5147f4u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x20u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_514800:;
    c->r[0] = 0x1574b14u;
    c->r[0] = 0x51480cu + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_514814:;
    c->r[0] = 0x0u;
L_514818:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_514820:;
    c->r[0] = 0x1574af4u;
    c->r[0] = 0x51482cu + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_514854(Cpu *restrict c) {
    FN_ENTER(0x514854u);
L_514854:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1574b5cu;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x514874u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_514938; }
    c->r[0] = 0x1574b48u;
    c->r[0] = 0x514888u + c->r[0];
    c->r[14] = 0x514888u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_514938; }
    c->r[0] = 0x1574abcu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[12] = 0x0u;
    c->r[14] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0e00000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43340000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42480000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc1ac0000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x42c00000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x41080000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xc1e00000u;
    c->r[0] = 0x5148d4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcccdu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbecc0000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0d00000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41880000u;
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1574a98u;
    c->r[0] = 0x514938u + c->r[0];
    c->r[14] = 0x514938u; f_15eff8c(c);
L_514938:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_514994; }
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_EQ) { goto L_5149a4; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_NE) { goto L_5149b0; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x11u;
    c->r[14] = 0x514974u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1574a08u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x514988u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x20u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_514994:;
    c->r[0] = 0x15749f0u;
    c->r[0] = 0x5149a0u + c->r[0];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5149a4:;
    c->r[0] = 0x15749e0u;
    c->r[0] = 0x5149b0u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
L_5149b0:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5149d4(Cpu *restrict c) {
    FN_ENTER(0x5149d4u);
L_5149d4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x15749e4u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x5149fcu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x514a58u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x514a70u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x514a88u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_514aac(Cpu *restrict c) {
    FN_ENTER(0x514aacu);
L_514aac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_514c28; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_514af8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_514aec:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5090cc(c);
L_514af8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_514c04; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xdu;
    c->r[2] = c->r[13] + 0xeu;
    c->r[3] = c->r[13] + 0xfu;
    { uint32_t ea = c->r[13] + 0xfu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x514b3cu; f_514c34(c);
    { uint32_t ea = c->r[13] + 0xfu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_514b5c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x514b5cu; f_5090cc(c);
L_514b5c:;
    { uint32_t ea = c->r[13] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_514b7c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x514b7cu; f_5090cc(c);
L_514b7c:;
    { uint32_t ea = c->r[13] + 0xdu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_514b9c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1au;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x514b9cu; f_5090cc(c);
L_514b9c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_514bbc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1bu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x514bbcu; f_5090cc(c);
L_514bbc:;
    c->r[0] = 0x13f0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_514c28; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_514c18; }
    c->v.s[0] = 0x0u;
    c->r[1] = 0xf0u;
    c->r[0] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x514bfcu; f_508210(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_514c04:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_514aec;
L_514c18:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[14] = 0x514c28u; f_5082a8(c);
L_514c28:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_514c34(Cpu *restrict c) {
    FN_ENTER(0x514c34u);
L_514c34:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[0];
    c->r[5] = c->r[3];
    c->r[0] = 0x0u;
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x514c74u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_514c94; }
    c->r[0] = 0x13d4u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_514d14; }
L_514c94:;
    c->r[0] = c->r[4];
    c->r[14] = 0x514c9cu; f_73a058(c);
    c->r[1] = 0x144bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[1] = c->r[5];
    if (COND_CC) { goto L_514d14; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514cf8; }
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514d10; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = c->r[7];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_MI) { c->r[1] = c->r[5]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[1] = c->r[7]; }
    goto L_514d14;
L_514cf8:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41700000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[7] = c->r[5]; }
L_514d10:;
    c->r[1] = c->r[7];
L_514d14:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_514fcc; }
    c->r[0] = c->r[4];
    c->r[14] = 0x514d30u; f_73a058(c);
    c->r[1] = 0x1b59u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_514ebc; }
    c->r[1] = 0x13f4u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x38u);
    if (COND_HI) { goto L_514f24; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x514d58u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x514e40u: goto L_514e40; case 0x514f24u: goto L_514f24; case 0x514f30u: goto L_514f30; case 0x514f50u: goto L_514f50; case 0x514fc4u: goto L_514fc4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_514e40:;
    c->r[0] = c->r[4];
    c->r[14] = 0x514e48u; f_73a058(c);
    c->r[1] = 0x142au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514e6c; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_514f8c; }
L_514e6c:;
    c->r[0] = 0x2506u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x10u);
    if (COND_NE) { goto L_514f8c; }
    c->r[0] = 0x250au;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x8fu;
    (void)f_subs(c, c->r[1], 0x1bu);
    if (COND_HI) { goto L_514ea4; }
    c->r[3] = 0x7u;
    c->r[2] = 0x1u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x8000000u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_514eb0; }
L_514ea4:;
    c->r[0] = c->r[0] - 0x89u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CS) { goto L_514f8c; }
L_514eb0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    goto L_514f8c;
L_514ebc:;
    c->r[1] = 0x1b8au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_514efc; }
    c->r[1] = 0x1b5au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514fc4; }
    c->r[1] = 0x1b5bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514f24; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42700000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[8] = c->r[9]; }
    goto L_514f24;
L_514efc:;
    c->r[1] = 0x1b8bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_514f9c; }
    c->r[1] = 0x1bbdu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_514f24; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x436a0000u;
    c->v.s[4] = 0x42ea0000u;
    goto L_514fa8;
L_514f24:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_514f30:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x42200000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_514f8c; }
    c->v.s[2] = 0x42e00000u;
    goto L_514f6c;
L_514f50:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41f00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_514f8c; }
    c->v.s[2] = 0x43020000u;
L_514f6c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_514f8c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_514f8c:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_514f9c:;
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x436d0000u;
    c->v.s[4] = 0x43410000u;
L_514fa8:;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_PL) { c->r[9] = c->r[8]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[9] = c->r[8]; }
L_514fc4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
L_514fcc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_514ff4(Cpu *restrict c) {
    FN_ENTER(0x514ff4u);
L_514ff4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x15744acu;
    c->r[6] = c->r[3];
    c->r[5] = c->r[1];
    c->r[0] = 0x515014u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_515128; }
    c->r[0] = 0x1574498u;
    c->r[0] = 0x515028u + c->r[0];
    c->r[14] = 0x515028u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515128; }
    c->r[0] = 0x15743e4u;
    c->r[1] = 0xcccdu;
    c->r[2] = 0x40000000u;
    c->r[12] = 0x0u;
    c->r[14] = 0x6666u;
    c->r[3] = 0xc0000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x408c0000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40e00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xc0d60000u;
    c->r[0] = 0x51505cu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3333u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0f30000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc2240000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1800000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[14]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2700000u;
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1a80000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2b40000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x5cu;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1574398u;
    c->r[0] = 0x515128u + c->r[0];
    c->r[14] = 0x515128u; f_15eff8c(c);
L_515128:;
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_HI) { goto L_515200; }
    c->r[1] = (c->r[6] << 2);
    c->r[2] = 0x51513cu + 0xcu;
    c->r[0] = 0x15742f8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x515148u + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x515194u: goto L_515194; case 0x5151a8u: goto L_5151a8; case 0x5151ecu: goto L_5151ec; case 0x515200u: goto L_515200; case 0x515204u: goto L_515204; case 0x51520cu: goto L_51520c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_515194:;
    c->r[0] = 0x15742a0u;
    c->r[0] = 0x5151a0u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5151a8:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[5]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x12u;
    c->r[14] = 0x5151ccu; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1574260u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x5151e0u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x40u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5151ec:;
    c->r[0] = 0x1574248u;
    c->r[0] = 0x5151f8u + c->r[0];
    c->r[0] = c->r[0] + 0x60u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_515200:;
    c->r[0] = 0x0u;
L_515204:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51520c:;
    c->r[0] = 0x1574228u;
    c->r[0] = 0x515218u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_515244(Cpu *restrict c) {
    FN_ENTER(0x515244u);
L_515244:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1574264u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x51526cu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5152c8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5152e0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5152f8u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51531c(Cpu *restrict c) {
    FN_ENTER(0x51531cu);
L_51531c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_5156b0; }
    c->r[1] = 0x1u;
    c->r[2] = 0x36u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_515368; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_51535c:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5090cc(c);
L_515368:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_515604; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x1bu;
    c->r[3] = c->r[13] + 0x1cu;
    c->r[7] = c->r[13] + 0x1du;
    c->r[6] = c->r[13] + 0x1eu;
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1eu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1du; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1au; ST8(ea, c->r[0]); }
    c->r[0] = 0x13f4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x1au;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x1fu;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5153c8u; f_5157cc(c);
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5153e8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5153e8u; f_5090cc(c);
L_5153e8:;
    { uint32_t ea = c->r[13] + 0x1eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515408; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x515408u; f_5090cc(c);
L_515408:;
    { uint32_t ea = c->r[13] + 0x1du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515428; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2cu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x515428u; f_5090cc(c);
L_515428:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515448; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2du;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x515448u; f_5090cc(c);
L_515448:;
    { uint32_t ea = c->r[13] + 0x1bu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515468; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2eu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x515468u; f_5090cc(c);
L_515468:;
    { uint32_t ea = c->r[13] + 0x1au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515488; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2fu;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x515488u; f_5090cc(c);
L_515488:;
    c->r[0] = c->r[5];
    c->r[14] = 0x515490u; f_73a058(c);
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_515618; }
    c->r[1] = 0x13f0u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x51u);
    if (COND_HI) { goto L_515670; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x5154b8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x515690u: goto L_515690; case 0x5156c4u: goto L_5156c4; case 0x515760u: goto L_515760; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_515604:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_51535c;
L_515618:;
    c->r[1] = 0x1bbcu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_515650; }
    c->r[1] = 0x1b59u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { c->r[1] = 0x1b8bu; }
    if (COND_CS) { c->r[1] = c->r[0] - c->r[1]; }
    if (COND_CS) { (void)f_subs(c, c->r[1], 0x2u); }
    if (COND_CC) { goto L_515690; }
    c->r[1] = 0x1485u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515690; }
    goto L_5156c4;
L_515650:;
    c->r[1] = 0x1bbdu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { c->r[1] = 0x1befu; }
    if (COND_CS) { c->r[0] = c->r[0] - c->r[1]; }
    if (COND_CS) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_CC) { goto L_515690; }
    goto L_5156c4;
L_515670:;
    c->r[1] = 0x139du;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_5156b8; }
    c->r[2] = 0x1u;
    c->r[3] = 0x251u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5156b8; }
L_515690:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[6] = 0x2u;
    c->r[14] = 0x5156a4u; f_5082a8(c);
    c->r[0] = 0x1418u;
    c->r[7] = c->r[4] + c->r[0];
L_5156ac:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
L_5156b0:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5156b8:;
    c->r[1] = 0x1478u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515760; }
L_5156c4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x5156d4u; rt_dispatch(c);
    c->v.s[2] = 0x41200000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_5156f8; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_515760; }
L_5156f8:;
    c->r[0] = 0x1418u;
    c->r[7] = c->r[4];
    c->v.s[0] = 0x0u;
    c->r[6] = 0x0u;
    c->r[1] = 0xefu;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[1] = c->r[5];
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = c->r[4];
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->r[14] = 0x515730u; f_508210(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5156ac; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0xeu;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[4]; c->r[14] = 0x51575cu; rt_dispatch(c);
    goto L_5156ac;
L_515760:;
    c->v.s[0] = 0x0u;
    c->r[1] = 0xeeu;
    c->r[0] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x1u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0x51578cu; f_508210(c);
    c->r[0] = 0x1418u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5157a4; }
    c->r[7] = c->r[4];
    goto L_5156ac;
L_5157a4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2u;
    c->r[2] = 0x4u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x390u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0x5157c0u; rt_dispatch(c);
    c->r[7] = c->r[4];
    goto L_5156ac;
}
void f_5157cc(Cpu *restrict c) {
    FN_ENTER(0x5157ccu);
L_5157cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[11] = c->r[0];
    c->r[4] = c->r[3];
    c->r[0] = 0x0u;
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x51581cu; f_73a058(c);
    c->r[1] = 0x146eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_515864; }
    c->r[1] = 0x141eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_5158a8; }
    c->r[1] = 0x13e7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515908; }
    c->r[1] = 0x13f7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[4];
    if (COND_EQ) { goto L_515964; }
    c->r[1] = 0x1409u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_EQ) { goto L_515964; }
    goto L_515cc4;
L_515864:;
    c->r[1] = 0x1beeu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_5158d0; }
    c->r[1] = 0x146fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_EQ) { goto L_515964; }
    c->r[1] = 0x1471u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_EQ) { goto L_515964; }
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_515cc4; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41600000u;
    goto L_515910;
L_5158a8:;
    c->r[1] = 0x144bu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    c->r[1] = c->r[4];
    if (COND_CC) { goto L_515964; }
    c->r[1] = 0x141fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[4];
    if (COND_EQ) { goto L_515964; }
    goto L_515cc4;
L_5158d0:;
    c->r[1] = 0x1befu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515928; }
    c->r[1] = 0x1bf0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515948; }
    c->r[1] = 0x1bf1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_515cc4; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41f80000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    goto L_515958;
L_515908:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41000000u;
L_515910:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->r[1] = c->r[9];
    vfp_mrs_flags(c);
    if (COND_LS) { c->r[1] = c->r[4]; }
    goto L_515964;
L_515928:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->r[1] = c->r[9];
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[4]; }
    goto L_515964;
L_515948:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x43868000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
L_515958:;
    c->r[1] = c->r[4];
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[1] = c->r[9]; }
L_515964:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5159f4; }
    c->r[0] = c->r[5];
    c->r[14] = 0x515980u; f_73a058(c);
    c->r[1] = 0x139du;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_LS) { goto L_5159b8; }
L_515990:;
    c->r[1] = 0x13f0u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x1du);
    if (COND_HI) { goto L_5159d0; }
    c->r[2] = 0x1u;
    c->r[3] = 0x24000003u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5159d0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_5159e4;
L_5159b8:;
    c->r[2] = 0x1u;
    c->r[3] = 0x251u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[8];
    if (COND_NE) { goto L_5159e4; }
    goto L_515990;
L_5159d0:;
    c->r[1] = 0x1446u;
    c->r[0] = c->r[0] - c->r[1];
    c->r[1] = c->r[8];
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { goto L_5159f4; }
L_5159e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_5159f4:;
    c->r[0] = c->r[7] - 0x3u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_516064; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x515a0cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x515a20u: goto L_515a20; case 0x515a68u: goto L_515a68; case 0x515abcu: goto L_515abc; case 0x515c38u: goto L_515c38; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_515a20:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_516064; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x515a48u; rt_dispatch(c);
    c->v.s[2] = 0x41200000u;
    c->r[0] = 0x1u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { c->r[10] = c->r[6]; }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_515a68:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515d40; }
    c->r[0] = c->r[5];
    c->r[14] = 0x515a7cu; f_73a058(c);
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515aa0; }
    c->r[1] = 0x1471u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515f20; }
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516064; }
L_515aa0:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x424c0000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_516064; }
    goto L_515f20;
L_515abc:;
    c->r[0] = c->r[5];
    c->r[14] = 0x515ac4u; f_73a058(c);
    c->r[1] = 0x1484u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_515c8c; }
    c->r[1] = 0x13f0u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x51u);
    if (COND_HI) { goto L_515e64; }
    c->r[0] = (c->r[1] << 2);
    c->r[1] = 0x515aecu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x515e84u: goto L_515e84; case 0x515ef8u: goto L_515ef8; case 0x515f88u: goto L_515f88; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_515c38:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_515d80; }
    c->r[0] = c->r[5];
    c->r[14] = 0x515c4cu; f_73a058(c);
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515c70; }
    c->r[1] = 0x1471u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515f08; }
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516064; }
L_515c70:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41400000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_516064; }
    goto L_515f20;
L_515c8c:;
    c->r[1] = 0x1bbcu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_515e40; }
    c->r[1] = 0x1b59u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { c->r[1] = 0x1b8bu; }
    if (COND_CS) { c->r[1] = c->r[0] - c->r[1]; }
    if (COND_CS) { (void)f_subs(c, c->r[1], 0x2u); }
    if (COND_CC) { goto L_515e84; }
    c->r[1] = 0x1485u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515e84; }
    goto L_515f88;
L_515cc4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x515cd4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_515cf4; }
    c->r[0] = 0x13d4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_515964; }
L_515cf4:;
    c->r[0] = c->r[5];
    c->r[14] = 0x515cfcu; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = c->r[9];
    if (COND_NE) { goto L_515964; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x43a20000u;
    c->v.s[4] = 0x41a00000u;
    c->r[1] = c->r[9];
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    if (COND_MI) { c->r[1] = c->r[4]; }
    vfp_mrs_flags(c);
    if (COND_LT) { c->r[1] = c->r[9]; }
    goto L_515964;
L_515d40:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_516064; }
    c->r[0] = c->r[5];
    c->r[14] = 0x515d54u; f_73a058(c);
    c->r[1] = 0x13f1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515fe4; }
    c->r[1] = 0x13f0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515ff0; }
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_515f68; }
    c->v.s[0] = 0x425c0000u;
    goto L_516040;
L_515d80:;
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_516064; }
    c->r[0] = c->r[5];
    c->r[14] = 0x515d94u; f_73a058(c);
    c->r[1] = 0x13efu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LE) { goto L_515f38; }
    c->r[1] = 0x13f0u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x1du);
    if (COND_HI) { goto L_515f68; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x515dbcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x515e38u: goto L_515e38; case 0x515f68u: goto L_515f68; case 0x516014u: goto L_516014; case 0x516064u: goto L_516064; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_515e38:;
    c->v.s[0] = 0x42700000u;
    goto L_516018;
L_515e40:;
    c->r[1] = 0x1bbdu;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_CS) { c->r[1] = 0x1befu; }
    if (COND_CS) { c->r[0] = c->r[0] - c->r[1]; }
    if (COND_CS) { (void)f_subs(c, c->r[0], 0x3u); }
    if (COND_CC) { goto L_515e84; }
    goto L_515f88;
L_515e64:;
    c->r[1] = 0x139du;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_515f7c; }
    c->r[2] = 0x1u;
    c->r[3] = 0x251u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_515f7c; }
L_515e84:;
    c->r[0] = c->r[5];
    c->r[14] = 0x515e8cu; f_73a058(c);
    c->r[1] = 0x1bf1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515ecc; }
    c->r[1] = 0x1bf0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515ee0; }
    c->r[1] = 0x1befu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_515ef8; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41f00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[6] = c->r[10]; }
    goto L_515ef8;
L_515ecc:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41600000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    goto L_515ef0;
L_515ee0:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[0] = 0x43800000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
L_515ef0:;
    vfp_mrs_flags(c);
    if (COND_PL) { c->r[6] = c->r[10]; }
L_515ef8:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_515f08:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x40a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_516064; }
L_515f20:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_515f2c:;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_515f38:;
    c->r[1] = 0x138au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_51603c; }
    c->r[1] = 0x13a4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_51606c; }
    c->r[1] = 0x13a7u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_515f68; }
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41c80000u;
    goto L_516074;
L_515f68:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    goto L_516094;
L_515f7c:;
    c->r[1] = 0x1478u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_515ef8; }
L_515f88:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x515f98u; rt_dispatch(c);
    c->v.s[2] = 0x41200000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_515fbc; }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_515ef8; }
L_515fbc:;
    c->r[0] = 0x734u;
    c->r[1] = 0x1efu;
    { uint32_t ea = c->r[11] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51600c; }
    c->r[0] = c->r[11] + 0x730u;
    c->r[14] = 0x515fd8u; f_b50bcc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[6] = c->r[10]; }
    goto L_515ef8;
L_515fe4:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41700000u;
    goto L_515ff8;
L_515ff0:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41c80000u;
L_515ff8:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_GT) { goto L_51602c; }
    goto L_516064;
L_51600c:;
    c->r[6] = c->r[10];
    goto L_515ef8;
L_516014:;
    c->v.s[0] = 0x42200000u;
L_516018:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_516064; }
L_51602c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_516094;
L_51603c:;
    c->v.s[0] = 0x42480000u;
L_516040:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_516064; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_515f2c;
L_516064:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_51606c:;
    c->r[0] = c->r[5] + 0x500u;
    c->v.s[2] = 0x41b80000u;
L_516074:;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_HI) { goto L_515f20; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_516094:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_5160bc(Cpu *restrict c) {
    FN_ENTER(0x5160bcu);
L_5160bc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[9] = c->r[0];
    c->r[0] = 0x1573594u;
    c->r[6] = c->r[3];
    c->r[8] = c->r[1];
    c->r[0] = 0x5160dcu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_516340; }
    c->r[0] = 0x1573580u;
    c->r[0] = 0x5160f0u + c->r[0];
    c->r[14] = 0x5160f0u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_516340; }
    c->r[0] = 0x15733ecu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[3] = 0x999au;
    c->r[12] = 0x0u;
    c->r[10] = 0x40000000u;
    c->r[14] = 0xcccdu;
    c->r[5] = 0x0u;
    c->r[7] = 0xc0000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1300000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x432a0000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x41880000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41390000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc1a00000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x410c0000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc3300000u;
    c->r[0] = 0x516144u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x41000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x42080000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41400000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x428e0000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[4]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41a80000u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x42ac0000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1900000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[10]); }
    c->r[3] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41e80000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1c40000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[2]); }
    c->r[2] = 0xc1000000u;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc2b20000u;
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    c->r[2] = 0x999au;
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xbfd90000u;
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x41c80000u;
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[10]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x42aa0000u;
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x41e00000u;
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[7]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x42240000u;
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[0] + 0xacu;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
    c->r[4] = 0x4ccdu;
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[1]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x43320000u;
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[12]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xc2800000u;
    { uint32_t ea = c->r[0] + 0xe8u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[0] + 0xecu;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[10]); }
    c->r[3] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41200000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc3310000u;
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc2b40000u;
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x114u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41d80000u;
    { uint32_t ea = c->r[0] + 0x118u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x120u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x124u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0800000u;
    { uint32_t ea = c->r[0] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x138u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x13cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1573330u;
    c->r[0] = 0x516340u + c->r[0];
    c->r[14] = 0x516340u; f_15eff8c(c);
L_516340:;
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_HI) { goto L_51647c; }
    c->r[1] = (c->r[6] << 2);
    c->r[2] = 0x516354u + 0xcu;
    c->r[0] = 0x15731d0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x516360u + c->r[0];
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x5163acu: goto L_5163ac; case 0x5163c0u: goto L_5163c0; case 0x516404u: goto L_516404; case 0x516418u: goto L_516418; case 0x51642cu: goto L_51642c; case 0x516440u: goto L_516440; case 0x516454u: goto L_516454; case 0x516468u: goto L_516468; case 0x51647cu: goto L_51647c; case 0x516480u: goto L_516480; case 0x516488u: goto L_516488; case 0x51649cu: goto L_51649c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_5163ac:;
    c->r[0] = 0x1573178u;
    c->r[0] = 0x5163b8u + c->r[0];
    c->r[0] = c->r[0] + 0x60u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_5163c0:;
    c->r[0] = 0x0u;
    c->r[1] = 0x13f8u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = c->r[9];
    c->r[1] = 0x13u;
    c->r[14] = 0x5163e4u; f_50899c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1573138u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x5163f8u + c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[0] = c->r[2] + 0x100u; }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_516404:;
    c->r[0] = 0x1573120u;
    c->r[0] = 0x516410u + c->r[0];
    c->r[0] = c->r[0] + 0x120u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_516418:;
    c->r[0] = 0x157310cu;
    c->r[0] = 0x516424u + c->r[0];
    c->r[0] = c->r[0] + 0x80u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_51642c:;
    c->r[0] = 0x15730f8u;
    c->r[0] = 0x516438u + c->r[0];
    c->r[0] = c->r[0] + 0x20u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_516440:;
    c->r[0] = 0x15730e4u;
    c->r[0] = 0x51644cu + c->r[0];
    c->r[0] = c->r[0] + 0xa0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_516454:;
    c->r[0] = 0x15730d0u;
    c->r[0] = 0x516460u + c->r[0];
    c->r[0] = c->r[0] + 0x40u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_516468:;
    c->r[0] = 0x15730bcu;
    c->r[0] = 0x516474u + c->r[0];
    c->r[0] = c->r[0] + 0xc0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_51647c:;
    c->r[0] = 0x0u;
L_516480:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_516488:;
    c->r[0] = 0x157309cu;
    c->r[0] = 0x516494u + c->r[0];
    c->r[0] = c->r[0] + 0xe0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_51649c:;
    c->r[0] = 0x1573088u;
    c->r[0] = 0x5164a8u + c->r[0];
    c->r[0] = c->r[0] + 0x100u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_5164ec(Cpu *restrict c) {
    FN_ENTER(0x5164ecu);
L_5164ec:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x157316cu;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x516514u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x516570u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x516588u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5165a0u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5165c4(Cpu *restrict c) {
    FN_ENTER(0x5165c4u);
L_5165c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_516800; }
    c->r[2] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_516620; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x516604u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x25u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_516614:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5090cc(c);
L_516620:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_516808; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x23u;
    c->r[5] = c->r[13] + 0x24u;
    c->r[6] = c->r[13] + 0x25u;
    c->r[14] = c->r[13] + 0x20u;
    c->r[3] = c->r[13] + 0x21u;
    c->r[12] = c->r[13] + 0x1fu;
    { uint32_t ea = c->r[13] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0x22u;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[14]); }
    c->r[2] = c->r[13] + 0x27u;
    c->r[3] = c->r[13] + 0x26u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    c->r[14] = 0x516690u; f_516830(c);
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5166c4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5166b0u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x23u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5166c4u; f_5090cc(c);
L_5166c4:;
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5166f8; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5166e4u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x22u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5166f8u; f_5090cc(c);
L_5166f8:;
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51672c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x516718u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x28u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51672cu; f_5090cc(c);
L_51672c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_516760; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51674cu; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x27u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x516760u; f_5090cc(c);
L_516760:;
    { uint32_t ea = c->r[13] + 0x23u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_516780; }
    c->r[0] = c->r[4];
    c->r[1] = 0xdu;
    c->r[2] = 0x1eu;
    c->r[3] = 0x0u;
    c->r[14] = 0x516780u; f_5090cc(c);
L_516780:;
    { uint32_t ea = c->r[13] + 0x22u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5167a0; }
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[2] = 0x1eu;
    c->r[3] = 0x0u;
    c->r[14] = 0x5167a0u; f_5090cc(c);
L_5167a0:;
    { uint32_t ea = c->r[13] + 0x21u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5167c0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1du;
    c->r[2] = 0x1eu;
    c->r[3] = 0x0u;
    c->r[14] = 0x5167c0u; f_5090cc(c);
L_5167c0:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5167e0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1cu;
    c->r[2] = 0x1eu;
    c->r[3] = 0x0u;
    c->r[14] = 0x5167e0u; f_5090cc(c);
L_5167e0:;
    { uint32_t ea = c->r[13] + 0x1fu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_516800; }
    c->r[0] = c->r[4];
    c->r[1] = 0x29u;
    c->r[2] = 0x1eu;
    c->r[3] = 0x0u;
    c->r[14] = 0x516800u; f_5090cc(c);
L_516800:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_516808:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x51681cu; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_516614;
}
void f_516830(Cpu *restrict c) {
    FN_ENTER(0x516830u);
L_516830:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    c->r[0] = 0x23a0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_517014; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5168a8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_516920; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x5168d0u; rt_dispatch(c);
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[0] ^ 0x1u;
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5168e4u; f_73a058(c);
    c->r[1] = 0x146fu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516a0c; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41200000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_516a0c; }
L_516908:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    goto L_516ee0;
L_516920:;
    c->r[0] = 0x0u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x516940u; f_73a058(c);
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516964; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42980000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516c20; }
L_516964:;
    c->r[0] = c->r[4];
    c->r[14] = 0x51696cu; f_73a058(c);
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516990; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42980000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516c20; }
L_516990:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516998u; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_5169cc; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_5169cc; }
    c->v.s[2] = 0x43a20000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_5169f4; }
L_5169cc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x5169d4u; f_73a058(c);
    c->r[1] = 0x144du;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_5169f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5169e8u; f_73a058(c);
    c->r[1] = 0x144eu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516be4; }
L_5169f4:;
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    goto L_516ee4;
L_516a0c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516a14u; f_73a058(c);
    c->r[1] = 0x13fbu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516a48; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41600000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_516a48; }
    c->v.s[2] = 0x429e0000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516a48:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516a50u; f_73a058(c);
    c->r[1] = 0x141du;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516a74; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42940000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516a74:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516a7cu; f_73a058(c);
    c->r[1] = 0x141au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516aa0; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41200000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516bd4; }
L_516aa0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516aa8u; f_73a058(c);
    c->r[1] = 0x1420u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516acc; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40800000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516acc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516ad4u; f_73a058(c);
    c->r[1] = 0x142bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516af8; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516bd4; }
L_516af8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516b00u; f_73a058(c);
    c->r[1] = 0x1472u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516b24; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40400000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516bd4; }
L_516b24:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516b2cu; f_73a058(c);
    c->r[1] = 0x13fcu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516b50; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41300000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516b50:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516b58u; f_73a058(c);
    c->r[1] = 0x1401u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516b7c; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41a80000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516b7c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516b84u; f_73a058(c);
    c->r[1] = 0x13feu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516ba8; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42d00000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516ba8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516bb0u; f_73a058(c);
    c->r[1] = 0x1422u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516c48; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41e80000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_516c48; }
L_516bd4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_516ee0;
L_516be4:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516becu; f_73a058(c);
    c->r[1] = 0x144bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_516c20; }
    c->r[0] = c->r[4];
    c->r[14] = 0x516c00u; f_73a058(c);
    c->r[1] = 0x144cu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_516c20; }
    c->r[0] = c->r[4];
    c->r[14] = 0x516c14u; f_73a058(c);
    c->r[1] = 0x144au;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51701c; }
L_516c20:;
    c->r[0] = 0x1u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    goto L_516ee0;
L_516c48:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516c50u; f_73a058(c);
    c->r[1] = 0x1407u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516c74; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41200000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516c74:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516c7cu; f_73a058(c);
    c->r[1] = 0x1406u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516ca0; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42c80000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516ca0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516ca8u; f_73a058(c);
    c->r[1] = 0x1424u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516ccc; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40c00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516ccc:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516cd4u; f_73a058(c);
    c->r[1] = 0x1402u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516cf8; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[0] = 0x42480000u;
    c->v.s[2] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516cf8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516d00u; f_73a058(c);
    c->r[1] = 0x1426u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516d24; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_516ed4; }
L_516d24:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516d2cu; f_73a058(c);
    c->r[1] = 0x1443u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516d60; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41300000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_516d60; }
    c->v.s[2] = 0x422c0000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516ed4; }
L_516d60:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516d68u; f_73a058(c);
    c->r[1] = 0x1b59u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516d9c; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x42540000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_516d9c; }
    c->v.s[2] = 0x43848000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516ed4; }
L_516d9c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516da4u; f_73a058(c);
    c->r[1] = 0x1b8bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516dd8; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41c80000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_516dd8; }
    c->v.s[2] = 0x43828000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516ed4; }
L_516dd8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516de0u; f_73a058(c);
    c->r[1] = 0x1bbdu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516e14; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x422c0000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_516e14; }
    c->v.s[2] = 0x43180000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516ed4; }
L_516e14:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516e1cu; f_73a058(c);
    c->r[1] = 0x140bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516e40; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41800000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516bd4; }
L_516e40:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516e48u; f_73a058(c);
    c->r[1] = 0x1485u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516e6c; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40400000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516bd4; }
L_516e6c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516e74u; f_73a058(c);
    c->r[1] = 0x1486u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516e98; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x40400000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516bd4; }
L_516e98:;
    c->r[0] = c->r[4];
    c->r[14] = 0x516ea0u; f_73a058(c);
    c->r[1] = 0x1befu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51704c; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41880000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_51704c; }
    c->v.s[2] = 0x43690000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51704c; }
L_516ed4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_516ee0:;
    { uint32_t ea = c->r[11]; ST8(ea, c->r[0]); }
L_516ee4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2eu;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x516ef8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[9];
    if (COND_NE) { goto L_516f2c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1eu;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x516f20u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    if (COND_NE) { c->r[0] = c->r[6]; }
L_516f2c:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x516f3cu; f_73a058(c);
    c->r[1] = 0x1487u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516f70; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41a00000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_516f70; }
    c->v.s[2] = 0x43a20000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516fec; }
L_516f70:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    if (COND_EQ) { { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); } }
    if (COND_EQ) { { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); } }
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x17cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x516fa4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_516fec; }
    c->r[0] = c->r[4];
    c->r[14] = 0x516fb4u; f_73a058(c);
    c->r[1] = 0x1478u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_516fec; }
    c->r[1] = 0x138bu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_516fec; }
    c->r[1] = 0x1391u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9]; ST8(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5]; ST8(ea, c->r[0]); } }
L_516fec:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x48u;
    { uint32_t ea = c->r[0] + 0x470u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x517000u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[7] = c->r[0]; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[7]; ST8(ea, c->r[0]); }
L_517014:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_51701c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x517024u; f_73a058(c);
    c->r[1] = 0x13e8u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_516ee4; }
    c->r[0] = c->r[4] + 0x500u;
    c->v.s[2] = 0x41300000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_516c20; }
    goto L_516ee4;
L_51704c:;
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_EQ) { goto L_516908; }
    goto L_516ee4;
}
void f_517088(Cpu *restrict c) {
    FN_ENTER(0x517088u);
L_517088:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[4] = c->r[0];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_517224; }
    c->r[2] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5170e4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5170c8u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x25u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
L_5170d8:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5090cc(c);
L_5170e4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51722c; }
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x23u;
    c->r[5] = c->r[13] + 0x24u;
    c->r[6] = c->r[13] + 0x25u;
    c->r[14] = c->r[13] + 0x20u;
    c->r[3] = c->r[13] + 0x21u;
    c->r[12] = c->r[13] + 0x1fu;
    { uint32_t ea = c->r[13] + 0x27u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[13] + 0x22u;
    c->r[2] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[14]); }
    c->r[2] = c->r[13] + 0x27u;
    c->r[3] = c->r[13] + 0x26u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[12]); }
    c->r[14] = 0x517154u; f_516830(c);
    { uint32_t ea = c->r[13] + 0x27u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_517188; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517174u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x23u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517188u; f_5090cc(c);
L_517188:;
    { uint32_t ea = c->r[13] + 0x26u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5171bc; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5171a8u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x22u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5171bcu; f_5090cc(c);
L_5171bc:;
    { uint32_t ea = c->r[13] + 0x25u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5171f0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x5u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5171dcu; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x28u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5171f0u; f_5090cc(c);
L_5171f0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_517224; }
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517210u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x27u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517224u; f_5090cc(c);
L_517224:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51722c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    c->r[14] = 0x517240u; f_5090cc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x26u;
    c->r[2] = 0x8u;
    c->r[3] = 0x1u;
    goto L_5170d8;
}
void f_517254(Cpu *restrict c) {
    FN_ENTER(0x517254u);
L_517254:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1572518u;
    c->r[4] = c->r[3];
    c->r[0] = 0x517268u + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5173a8; }
    c->r[0] = 0x1572504u;
    c->r[0] = 0x51727cu + c->r[0];
    c->r[14] = 0x51727cu; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5173a8; }
    c->r[0] = 0x157241cu;
    c->r[12] = 0xcccdu;
    c->r[14] = 0x3333u;
    c->r[2] = 0x0u;
    c->r[3] = 0xcccdu;
    c->r[1] = 0xc0000000u;
    c->r[5] = 0x999au;
    c->r[6] = 0x3333u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40fc0000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbf330000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43340000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42560000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x3f190000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xc22d0000u;
    c->r[0] = 0x5172c4u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1a80000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42ba0000u;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x3cu;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc0c00000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x5cu;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[3] = 0x0u;
    c->r[12] = 0x999au;
    c->r[14] = 0xcccdu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42600000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40190000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbfcc0000u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[3]); }
    c->r[3] = 0xcccdu;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3333u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1130000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbe4c0000u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x15723d8u;
    c->r[0] = 0x5173a8u + c->r[0];
    c->r[14] = 0x5173a8u; f_15eff8c(c);
L_5173a8:;
    c->r[0] = c->r[4] - 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x11u);
    if (COND_HI) { goto L_5173cc; }
    c->r[1] = 0x143ae18u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = 0x5173c8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_5173cc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5173e8(Cpu *restrict c) {
    FN_ENTER(0x5173e8u);
L_5173e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1572454u;
    c->r[4] = c->r[3];
    c->r[0] = 0x5173fcu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_517590; }
    c->r[0] = 0x1572440u;
    c->r[0] = 0x517410u + c->r[0];
    c->r[14] = 0x517410u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_517590; }
    c->r[0] = 0x1572344u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[12] = 0xcccdu;
    c->r[14] = 0x3333u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1940000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41600000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x40fc0000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xbf330000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc0400000u;
    c->r[0] = 0x51744cu + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41480000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1200000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x40400000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc3300000u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[14]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0c00000u;
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x43340000u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2040000u;
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42ae0000u;
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[0] + 0x5cu;
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42600000u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3333u;
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc1130000u;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[3]); }
    c->r[3] = 0xcccdu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbe4c0000u;
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[3]); }
    c->r[3] = 0x999au;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x40190000u;
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[3]); }
    c->r[3] = 0xcccdu;
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbfcc0000u;
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[3]); }
    c->r[3] = 0x999au;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3f190000u;
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[3]); }
    c->r[3] = 0x3333u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc22d0000u;
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[3]); }
    c->r[3] = 0xc0000000u;
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    c->r[0] = 0x15722c0u;
    c->r[0] = 0x517590u + c->r[0];
    c->r[14] = 0x517590u; f_15eff8c(c);
L_517590:;
    (void)f_subs(c, c->r[4], 0x12u);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[1] = 0x143ac84u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[4]);
    c->r[1] = 0x5175acu + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5175c4(Cpu *restrict c) {
    FN_ENTER(0x5175c4u);
L_5175c4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1572274u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x5175ecu + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x517648u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x517660u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517678u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51769c(Cpu *restrict c) {
    FN_ENTER(0x51769cu);
L_51769c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13d4u;
    c->r[5] = 0x3f800000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x14u);
    if (COND_HI) { goto L_51776c; }
    c->r[3] = (c->r[3] << 2);
    c->r[0] = 0x5176c4u + 0x10u;
    c->r[12] = 0xcccdu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x3f4c0000u;
    c->pc = c->r[3] + c->r[0]; switch (c->pc) { case 0x517728u: goto L_517728; case 0x517734u: goto L_517734; case 0x51775cu: goto L_51775c; case 0x517760u: goto L_517760; case 0x51776cu: goto L_51776c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_517728:;
    c->r[12] = 0x3f800000u;
    c->r[2] = 0x9u;
    goto L_517760;
L_517734:;
    c->r[0] = 0x13f8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_517760; }
    c->r[0] = 0x1524edcu;
    c->r[2] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = 0x517754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[2] << 4);
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_517760;
L_51775c:;
    c->r[12] = 0x3f800000u;
L_517760:;
    c->r[0] = 0x13ccu;
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[2]); }
L_51776c:;
    c->r[0] = c->r[1];
    c->r[1] = 0x12u;
    c->r[14] = 0x517778u; f_4824a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[5] = 0x3f800000u; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51779c(Cpu *restrict c) {
    FN_ENTER(0x51779cu);
L_51779c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_5178f4; }
    c->r[2] = 0x1u;
    c->r[3] = 0x36u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_5177e4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
L_5177d0:;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_5090cc(c);
L_5177e4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_5178fc; }
    c->r[0] = 0x13f4u;
    c->r[6] = 0x1u;
    c->r[2] = 0x8000000u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x13d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { c->r[0] = c->r[13] + 0x7u; }
    if (COND_EQ) { c->r[0] = c->r[13] + 0x6u; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[5]; c->r[14] = 0x517840u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x6u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[13] + 0x5u;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[7] - 0x1u;
    if (COND_NE) { c->r[2] = c->r[1]; }
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[6]); }
    if (COND_HI) { goto L_517878; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x5u; ST8(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[0]); } }
L_517878:;
    { uint32_t ea = c->r[13] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_517898; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517898u; f_5090cc(c);
L_517898:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5178b4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5178b4u; f_5090cc(c);
L_5178b4:;
    { uint32_t ea = c->r[13] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5178d4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x20u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5178d4u; f_5090cc(c);
L_5178d4:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5178f4; }
    c->r[0] = c->r[4];
    c->r[1] = 0x21u;
    c->r[2] = 0x8u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5178f4u; f_5090cc(c);
L_5178f4:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_5178fc:;
    c->r[0] = c->r[4];
    c->r[1] = 0x3u;
    goto L_5177d0;
}
void f_517908(Cpu *restrict c) {
    FN_ENTER(0x517908u);
L_517908:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[3];
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x14u);
    if (COND_EQ) { goto L_517a48; }
    c->r[0] = 0x15721e4u;
    c->r[0] = 0x51792cu + c->r[0];
    c->r[0] = LDA(8, uint8_t, c->r[0]);
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5179dc; }
    c->r[0] = 0x15721d0u;
    c->r[0] = 0x517940u + c->r[0];
    c->r[14] = 0x517940u; f_15eff80(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5179dc; }
    c->r[0] = 0x1572148u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[12] = 0xc1000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0900000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1300000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41a80000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x42b40000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc0a00000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x42580000u;
    c->r[0] = 0x517988u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x1572134u;
    c->r[0] = 0x5179dcu + c->r[0];
    c->r[14] = 0x5179dcu; f_15eff8c(c);
L_5179dc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_517a20; }
    (void)f_subs(c, c->r[6], 0x12u);
    if (COND_EQ) { goto L_517a30; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_NE) { goto L_517a48; }
    c->r[0] = 0x13f8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_517a3c; }
    c->r[1] = 0x1524c1cu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = 0x517a14u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[4] = c->r[0] - 0x30u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_517a20:;
    c->r[0] = 0x15720a4u;
    c->r[4] = 0x517a2cu + c->r[0];
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_517a30:;
    c->r[0] = 0x1572094u;
    c->r[0] = 0x517a3cu + c->r[0];
    goto L_517a44;
L_517a3c:;
    c->r[0] = 0x1572088u;
    c->r[0] = 0x517a48u + c->r[0];
L_517a44:;
    c->r[4] = c->r[0] + 0x20u;
L_517a48:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_517a70(Cpu *restrict c) {
    FN_ENTER(0x517a70u);
L_517a70:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x517a94u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_517abc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x517aacu; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_517b08; }
L_517abc:;
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_517b08; }
    c->r[0] = 0x13d0u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x517ae0u; f_4839b8(c);
    (void)f_subs(c, c->r[0], 0x11u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x517af8u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
L_517b08:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_517b0c(Cpu *restrict c) {
    FN_ENTER(0x517b0cu);
L_517b0c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[11] = c->r[13];
    c->r[13] = c->r[13] - 0x48u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[3] = 0xb4b5u;
    c->r[1] = 0x0u;
    c->r[2] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3eb40000u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[13] + 0x30u;
    c->r[3] = c->r[13] + 0x20u;
    c->r[1] = 0x1u;
    c->r[14] = 0x517b7cu; f_73b1d4(c);
    c->r[13] = c->r[11];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_517b84(Cpu *restrict c) {
    FN_ENTER(0x517b84u);
L_517b84:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[0] = 0x1571f70u;
    c->r[4] = 0x0u;
    c->r[9] = 0x1u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[7] = 0x5u;
    c->r[5] = 0x6u;
    c->r[6] = 0x517bb0u + c->r[0];
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    c->r[12] = c->r[6] + 0x40u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[7]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[5]); }
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x517c0cu; f_15efda0(c);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x517c24u; f_15efda0(c);
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x517c3cu; f_15efda0(c);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[6] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[4]); }
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
    c->r[12] = 0xc1000000u;
    c->r[14] = 0x0u;
    c->r[5] = 0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[6] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1524988u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc1300000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x41a80000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x43100000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x42b40000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x43040000u;
    c->r[6] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x42580000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xc1800000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x42a00000u;
    { uint32_t ea = 0x517ca8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc2b40000u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[4]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41200000u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x41b00000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[14]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc0a00000u;
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x9cu; ST32(ea, c->r[4]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x42dc0000u;
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[4]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x42200000u;
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xb0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc1600000u;
    { uint32_t ea = c->r[0] + 0xc8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xd8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xe0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xf0u; ST32(ea, c->r[2]); }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x41400000u;
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[4]); }
    c->r[6] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc2a40000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x42600000u;
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc2f20000u;
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x110u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x120u; ST32(ea, c->r[8]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x41d00000u;
    { uint32_t ea = c->r[0] + 0x124u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc1100000u;
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[4]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x42ea0000u;
    { uint32_t ea = c->r[0] + 0x130u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x134u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x138u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x13cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x140u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x154u; ST32(ea, c->r[1]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc1400000u;
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[14]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xc1a00000u;
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x168u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x16cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x170u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x180u; ST32(ea, c->r[3]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x41e80000u;
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x1a0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x1b4u;
    c->r[7] = 0x0u;
    c->r[12] = c->r[0] + 0x1c8u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[14]); }
    c->r[2] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x42c20000u;
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[3]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x420c0000u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1e4u; ST32(ea, c->r[1]); }
    c->r[2] = 0x43000000u;
    c->r[1] = c->r[0] + 0x1f0u;
    { uint32_t ea = c->r[0] + 0x1e8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x1ecu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_517ed0(Cpu *restrict c) {
    FN_ENTER(0x517ed0u);
L_517ed0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1524754u;
    { uint32_t ea = 0x517ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x517ee4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1420u;
    c->pc = c->r[4]; c->r[14] = 0x517efcu; rt_dispatch(c);
    c->r[14] = 0x517f00u; f_507698(c);
    c->r[1] = 0x152472cu;
    { uint32_t ea = 0x517f0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_517f1c(Cpu *restrict c) {
    FN_ENTER(0x517f1cu);
L_517f1c:;
    __attribute__((musttail)) return f_5077b0(c);
}
void f_517f20(Cpu *restrict c) {
    FN_ENTER(0x517f20u);
L_517f20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x517f2cu; f_5077b0(c);
    c->r[0] = 0x15246fcu;
    { uint32_t ea = 0x517f38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x517f38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_517f50(Cpu *restrict c) {
    FN_ENTER(0x517f50u);
L_517f50:;
    __attribute__((musttail)) return f_5077e4(c);
}
void f_517f54(Cpu *restrict c) {
    FN_ENTER(0x517f54u);
L_517f54:;
    __attribute__((musttail)) return f_5077e8(c);
}
void f_517f58(Cpu *restrict c) {
    FN_ENTER(0x517f58u);
L_517f58:;
    __attribute__((musttail)) return f_739d58(c);
}
void f_517f5c(Cpu *restrict c) {
    FN_ENTER(0x517f5cu);
L_517f5c:;
    return;
}
void f_517f60(Cpu *restrict c) {
    FN_ENTER(0x517f60u);
L_517f60:;
    return;
}
void f_517f64(Cpu *restrict c) {
    FN_ENTER(0x517f64u);
L_517f64:;
    __attribute__((musttail)) return f_507c3c(c);
}
void f_517f68(Cpu *restrict c) {
    FN_ENTER(0x517f68u);
L_517f68:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_517f6c(Cpu *restrict c) {
    FN_ENTER(0x517f6cu);
L_517f6c:;
    c->r[0] = 0x15246bcu;
    { uint32_t ea = 0x517f78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_517f7c(Cpu *restrict c) {
    FN_ENTER(0x517f7cu);
L_517f7c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1571bf8u;
    c->r[2] = 0x1u;
    c->r[3] = 0x4u;
    c->r[12] = 0x8u;
    c->r[14] = 0x9u;
    c->r[4] = 0x5u;
    c->r[5] = 0x6u;
    c->r[1] = 0x517fa8u + c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    c->r[2] = 0x2u;
    c->r[11] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[1] + 0x38u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x3cu; ST32(ea, c->r[5]); }
    c->r[3] = 0x10000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1524620u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x80000000u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = f_adds(c, c->r[3], 0xf0000u);
    c->r[2] = c->r[2] + 0x0u + c->cf;
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[3]); }
    c->r[1] = 0x15243d4u;
    { uint32_t ea = 0x518014u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x1420u;
    { uint32_t ea = 0x51801cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x12460afu;
    c->r[1] = 0x518024u + c->r[1];
    c->r[14] = 0x518024u; f_9aedcc(c);
    c->r[1] = 0x152460cu;
    { uint32_t ea = 0x518030u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_518050(Cpu *restrict c) {
    FN_ENTER(0x518050u);
L_518050:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1571b68u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x518078u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5180d4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5180ecu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x518104u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_518128(Cpu *restrict c) {
    FN_ENTER(0x518128u);
L_518128:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1571af0u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x518150u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x5181acu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x5181c4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5181dcu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_518200(Cpu *restrict c) {
    FN_ENTER(0x518200u);
L_518200:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1571a78u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x518228u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x518284u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x51829cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x5182b4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5182d8(Cpu *restrict c) {
    FN_ENTER(0x5182d8u);
L_5182d8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1571a00u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x518300u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x51835cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x518374u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51838cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_5183b0(Cpu *restrict c) {
    FN_ENTER(0x5183b0u);
L_5183b0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x1571988u;
    c->r[7] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[5] = 0x5u;
    c->r[6] = 0x6u;
    c->r[4] = 0x5183d8u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    c->r[12] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); ST32(ea + 20u, c->r[6]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[14] = 0x518434u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x51844cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x518464u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_518488(Cpu *restrict c) {
    FN_ENTER(0x518488u);
L_518488:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x15241a8u;
    { uint32_t ea = 0x518498u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51849cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x80u;
    c->pc = c->r[4]; c->r[14] = 0x5184b4u; rt_dispatch(c);
    c->r[1] = 0x1524178u;
    c->r[3] = 0x0u;
    c->r[14] = 0xffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = 0x5184ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x52u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[3]); }
    c->r[3] = 0x152062cu;
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST16(ea, c->r[1]); }
    c->r[4] = c->r[12] & 0xf8u;
    { uint32_t ea = 0x518520u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x57u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x58u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x59u; ST8(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x5au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_518590(Cpu *restrict c) {
    FN_ENTER(0x518590u);
L_518590:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1524098u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x5185a8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x5185acu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5185cc(Cpu *restrict c) {
    FN_ENTER(0x5185ccu);
L_5185cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1524060u;
    { uint32_t ea = 0x5185e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5185e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5185f8(Cpu *restrict c) {
    FN_ENTER(0x5185f8u);
L_5185f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x1524030u;
    c->r[3] = 0x0u;
    c->r[5] = 0xffu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = 0x518614u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[3]); }
    c->r[3] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x52u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[3]); }
    c->r[3] = 0x15204e4u;
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x55u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x50u; ST16(ea, c->r[1]); }
    c->r[4] = c->r[12] & 0xf8u;
    { uint32_t ea = 0x518668u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x57u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x58u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x59u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x5au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5186d4(Cpu *restrict c) {
    FN_ENTER(0x5186d4u);
L_5186d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0x0u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0xffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x52u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST16(ea, c->r[1]); }
    c->r[1] = 0x152041cu;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x55u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4eu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[5]); }
    { uint32_t ea = 0x518730u + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[12] & 0xf8u;
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x57u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5187ac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x518798u; rt_dispatch(c);
    c->r[0] = 0x15203a4u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x5187a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
L_5187ac:;
    c->r[0] = c->r[4] + 0x14u;
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5187c8(Cpu *restrict c) {
    FN_ENTER(0x5187c8u);
L_5187c8:;
    return;
}
void f_5187cc(Cpu *restrict c) {
    FN_ENTER(0x5187ccu);
L_5187cc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1523e60u;
    { uint32_t ea = 0x5187e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5187e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_5187f8(Cpu *restrict c) {
    FN_ENTER(0x5187f8u);
L_5187f8:;
    return;
}
void f_5187fc(Cpu *restrict c) {
    FN_ENTER(0x5187fcu);
L_5187fc:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_518800(Cpu *restrict c) {
    FN_ENTER(0x518800u);
L_518800:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51882c; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x7u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); } }
L_51882c:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_518854; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51889c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_518974; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_5189b0(c);
L_518854:;
    c->v.s[0] = LD32(c->r[4] + 64u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_5188e4; }
    c->r[0] = 0x1520510u;
    c->v.s[4] = 0x0u;
    { uint32_t ea = 0x518874u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GE ? c->v.s[4] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    ST32(c->r[4] + 64u, c->v.s[2]);
    if (COND_LS) { goto L_5188ec; }
    goto L_518974;
L_51889c:;
    c->v.s[0] = LD32(c->r[4] + 64u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_51891c; }
    c->r[0] = 0x15204c8u;
    c->v.s[4] = 0x0u;
    { uint32_t ea = 0x5188bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GE ? c->v.s[4] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    ST32(c->r[4] + 64u, c->v.s[2]);
    if (COND_LS) { goto L_518924; }
    goto L_518974;
L_5188e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_5188ec:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1520490u;
    { uint32_t ea = 0x518904u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x518908u; f_51acd4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x1520478u;
    { uint32_t ea = 0x51891cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_518980;
L_51891c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_518924:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_518978; }
    c->r[0] = 0x1520278u;
    { uint32_t ea = 0x51893cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x518940u; f_5f8344(c);
    c->r[1] = 0xb3c5u;
    c->v.s[0] = 0x45610000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x91a20000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 12);
    c->r[2] = 0x1c20u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[2] = c->r[0];
    c->r[0] = 0x2u;
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 64u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_518974:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_518978:;
    c->r[0] = 0x1520410u;
    { uint32_t ea = 0x518984u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_518980:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_51aaf4(c);
}
void f_5189b0(Cpu *restrict c) {
    FN_ENTER(0x5189b0u);
L_5189b0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[11] = c->r[13] + 0x10u;
    c->r[13] = c->r[13] - 0x68u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_518a78; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CS) { goto L_518a70; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_518be8; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_518d10; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_518a78; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x407u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0x402u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_518a78; }
    { uint32_t ea = c->r[4] + 0x59u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_518dbc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x518a30u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_518a78; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[6] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x40u; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x44u; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x48u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x4cu; ST32(ea, c->r[6]); } }
    goto L_518a78;
L_518a70:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_518a78:;
    { uint32_t ea = c->r[4] + 0x5au; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_518b0c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x15201d4u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = 0x518a9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[5]); }
    c->r[3] = 0x1u;
    c->r[6] = c->r[4] + 0x10u;
    c->r[5] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[13] + 0x20u;
    c->r[14] = 0x518ae0u; f_701310(c);
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = c->r[3] + 0x40u; }
    if (COND_NE) { { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[7]); } }
L_518b0c:;
    { uint32_t ea = c->r[4] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_518b9c; }
    c->v.s[0] = LD32(c->r[4] + 64u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_518be0; }
    c->r[1] = 0x1520248u;
    c->v.s[4] = 0x0u;
    c->r[0] = c->r[4] + 0x40u;
    { uint32_t ea = 0x518b3cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[1] + 104u);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    vfp_cmp_f(c, c->v.f[4], c->v.f[0]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GE ? c->v.s[4] : c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    ST32(c->r[0], c->v.s[2]);
    if (COND_HI) { goto L_518be0; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_518bb4; }
    c->r[3] = 0x1520034u;
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = 0x518b80u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x49u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_518bb4; }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_518b9c:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xfffffffeu;
    (void)f_subs(c, c->r[0], 0x22u);
    c->r[0] = c->r[4] + 0x40u;
    if (COND_EQ) { c->r[1] = 0x1u; }
L_518bb4:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x41a00000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_518be0; }
    c->r[14] = 0x518bd8u; f_6913bc(c);
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_518be0:;
    c->r[13] = c->r[11] - 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_518be8:;
    c->r[0] = 0x1520078u;
    { uint32_t ea = c->r[4] + 0x5au; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = 0x518bf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x518bfcu; f_700f7c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_518d7c; }
    c->r[6] = 0x0u;
    c->r[0] = 0xffu;
    c->r[5] = c->r[13] + 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x24u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15205a8u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x518c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x5000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[6]); }
    c->r[1] = 0x2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xc7c30000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1000000u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x152066cu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x26u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x518cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x518cb8u; f_381440(c);
    ST32(c->r[13] + 84u, c->v.s[0]);
    c->r[3] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 20u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x518cf4u; f_518f84(c);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_518b0c; }
    { uint32_t ea = c->r[4] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); }
    goto L_518b0c;
L_518d10:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x407u;
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0x402u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_518a78; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0x518d38u; rt_dispatch(c);
    c->v.s[4] = LD32(c->r[0] + 12u);
    c->v.s[8] = LD32(c->r[0] + 28u);
    c->v.s[6] = LD32(c->r[4] + 20u);
    c->v.s[2] = LD32(c->r[4] + 16u);
    c->v.s[10] = LD32(c->r[0] + 44u);
    c->v.s[0] = LD32(c->r[4] + 24u);
    c->v.s[12] = LD32(c->r[0] + 60u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[4] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_518dd8; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[4] = c->v.f[8] / c->v.f[4];
    goto L_518ddc;
L_518d7c:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x407u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & c->r[2];
    c->r[2] = 0x402u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_518b0c; }
    { uint32_t ea = c->r[4] + 0x59u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_518e74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x518db0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_518e84; }
    goto L_518b0c;
L_518dbc:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    goto L_518a78;
L_518dd8:;
    c->v.s[4] = 0x0u;
L_518ddc:;
    c->v.s[14] = LD32(c->r[0] + 20u);
    c->v.s[3] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[1] = LD32(c->r[0] + 24u);
    c->v.s[5] = LD32(c->r[0] + 36u);
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.s[9] = LD32(c->r[0] + 32u);
    c->v.f[3] = c->v.f[6] * c->v.f[3];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[12] = LD32(c->r[0] + 52u);
    c->v.s[1] = LD32(c->r[0] + 56u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[2] = c->v.f[8] + c->v.f[3];
    c->v.f[8] = c->v.f[12] + c->v.f[14];
    c->v.f[6] = c->v.f[1] + c->v.f[6];
    c->v.f[0] = c->v.f[4] * c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    ST32(c->r[4] + 4u, c->v.s[0]);
    ST32(c->r[4] + 8u, c->v.s[2]);
    ST32(c->r[4] + 12u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { ST32(c->r[0] + 64u, c->v.s[0]); }
    if (COND_NE) { ST32(c->r[0] + 68u, c->v.s[2]); }
    if (COND_NE) { ST32(c->r[0] + 72u, c->v.s[4]); }
    goto L_518a78;
L_518e74:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0x518e84u; rt_dispatch(c);
L_518e84:;
    c->v.s[2] = LD32(c->r[4] + 16u);
    c->v.s[6] = LD32(c->r[4] + 20u);
    c->v.s[8] = LD32(c->r[0] + 28u);
    c->v.s[4] = LD32(c->r[0] + 12u);
    c->v.s[0] = LD32(c->r[4] + 24u);
    c->v.s[10] = LD32(c->r[0] + 44u);
    c->v.s[12] = LD32(c->r[0] + 60u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[4] = c->v.f[12] + c->v.f[8];
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_518ecc; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[4] = c->v.f[8] / c->v.f[4];
    goto L_518ed0;
L_518ecc:;
    c->v.s[4] = 0x0u;
L_518ed0:;
    c->v.s[14] = LD32(c->r[0] + 20u);
    c->v.s[3] = LD32(c->r[0] + 16u);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[1] = LD32(c->r[0] + 24u);
    c->v.s[5] = LD32(c->r[0] + 36u);
    c->v.s[7] = LD32(c->r[0] + 40u);
    c->v.s[9] = LD32(c->r[0] + 32u);
    c->v.f[3] = c->v.f[6] * c->v.f[3];
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[0] + 48u);
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[12] = LD32(c->r[0] + 52u);
    c->v.s[1] = LD32(c->r[0] + 56u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[7]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[9]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.f[2] = c->v.f[8] + c->v.f[3];
    c->v.f[8] = c->v.f[12] + c->v.f[14];
    c->v.f[6] = c->v.f[1] + c->v.f[6];
    c->v.f[0] = c->v.f[4] * c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    ST32(c->r[4] + 4u, c->v.s[0]);
    ST32(c->r[4] + 8u, c->v.s[2]);
    ST32(c->r[4] + 12u, c->v.s[4]);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { ST32(c->r[0] + 64u, c->v.s[0]); }
    if (COND_NE) { ST32(c->r[0] + 68u, c->v.s[2]); }
    if (COND_NE) { ST32(c->r[0] + 72u, c->v.s[4]); }
    goto L_518b0c;
}
void f_518f84(Cpu *restrict c) {
    FN_ENTER(0x518f84u);
L_518f84:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[13] = c->r[13] - 0x30u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[5] = c->r[3];
    (void)f_subs(c, c->r[0], 0x31u);
    if (COND_HI) { c->r[1] = c->r[0]; }
    { uint32_t ea = c->r[4] + 0x5au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_5190c0; }
    { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51916c; }
    c->r[0] = 0x151fb6cu;
    c->r[2] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[1] = c->r[6];
    { uint32_t ea = 0x518fe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[7] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x151fc80u;
    { uint32_t ea = 0x518ff0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x518ff4u; f_7010ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_5190ac; }
    c->r[0] = 0x151fc60u;
    { uint32_t ea = c->r[4] + 0x5au; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = 0x519010u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519014u; f_700e9c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_5190ac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[16] = LD32(c->r[0] + 64u);
    c->v.s[18] = LD32(c->r[0] + 68u);
    c->v.s[20] = LD32(c->r[0] + 72u);
    c->v.s[22] = LD32(c->r[5]);
    c->v.s[24] = LD32(c->r[5] + 4u);
    c->v.s[26] = LD32(c->r[5] + 8u);
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
    c->pc = c->r[2]; c->r[14] = 0x51904cu; rt_dispatch(c);
    c->v.s[2] = LD32(c->r[0] + 36u);
    c->v.f[6] = c->v.f[24] - c->v.f[18];
    c->v.s[12] = LD32(c->r[0] + 20u);
    c->v.s[14] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0] + 32u);
    c->v.s[8] = LD32(c->r[0] + 16u);
    c->v.s[3] = LD32(c->r[0]);
    c->v.f[5] = c->v.f[22] - c->v.f[16];
    c->v.s[4] = LD32(c->r[0] + 40u);
    c->v.s[10] = LD32(c->r[0] + 24u);
    c->v.s[1] = LD32(c->r[0] + 8u);
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[12] = c->v.f[6] * c->v.f[12];
    c->v.f[6] = c->v.f[6] * c->v.f[14];
    c->v.f[14] = c->v.f[26] - c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[5] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[1]);
    c->r[8] = c->v.s[2];
    c->r[9] = c->v.s[12];
    c->r[7] = c->v.s[6];
L_5190ac:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[8]); }
    goto L_519168;
L_5190c0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x28u;
    c->r[3] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x151fb88u;
    { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = 0x5190e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5190ecu; f_704d00(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_519108; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_519114;
L_519108:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = ~0x0u;
L_519114:;
    c->pc = c->r[2]; c->r[14] = 0x519118u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13] + 0x10u;
    c->r[0] = c->r[5];
    c->r[14] = 0x519128u; f_433200(c);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = 0xffu; }
    if (COND_LT) { { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x59u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
L_519168:;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_51916c:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_519188(Cpu *restrict c) {
    FN_ENTER(0x519188u);
L_519188:;
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[1] & 0xfffffffeu;
    (void)f_subs(c, c->r[1], 0x22u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_5191a0(Cpu *restrict c) {
    FN_ENTER(0x5191a0u);
L_5191a0:;
    c->r[2] = c->r[1];
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[2]); }
    if (COND_NE) { goto L_5191c4; }
    { uint32_t ea = c->r[1] + 0x55u; ST8(ea, c->r[2]); }
    return;
L_5191c4:;
    c->r[0] = 0x151fbc4u;
    { uint32_t ea = 0x5191d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_51b858(c);
}
void f_5191d8(Cpu *restrict c) {
    FN_ENTER(0x5191d8u);
L_5191d8:;
    c->r[2] = 0x151fa8cu;
    { uint32_t ea = 0x5191e4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1a2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_519224; }
    (void)f_subs(c, c->r[1], 0x26u);
    if (COND_EQ) { goto L_519220; }
    (void)f_subs(c, c->r[1], 0x1au);
    if (COND_EQ) { c->r[1] = 0x1cu; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); } }
    if (COND_EQ) { return; }
    (void)f_subs(c, c->r[1], 0x19u);
    if (COND_EQ) { c->r[1] = 0x1bu; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); } }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    return;
L_519220:;
    c->r[1] = 0x27u;
L_519224:;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    return;
}
void f_519230(Cpu *restrict c) {
    FN_ENTER(0x519230u);
L_519230:;
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_519244(Cpu *restrict c) {
    FN_ENTER(0x519244u);
L_519244:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_519274; }
    { uint32_t ea = c->r[1] + 0x4eu; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x1u; }
L_519274:;
    return;
}
void f_519278(Cpu *restrict c) {
    FN_ENTER(0x519278u);
L_519278:;
    c->v.s[4] = LD32(c->r[0] + 72u);
    c->v.s[6] = 0x3f000000u;
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[6] = c->v.f[0] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[6]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_5192e8; }
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_5192e8; }
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0] + 12u);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.s[4] = LD32(c->r[0] + 68u);
    c->r[0] = 0x1u;
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_HI) { c->r[0] = 0x0u; }
    return;
L_5192e8:;
    c->r[0] = 0x0u;
    return;
}
void f_5192f0(Cpu *restrict c) {
    FN_ENTER(0x5192f0u);
L_5192f0:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { c->r[0] = 0x1u; }
    return;
}
void f_519318(Cpu *restrict c) {
    FN_ENTER(0x519318u);
L_519318:;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[0] + 0x52u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_519340; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    return;
L_519340:;
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x151fa44u;
    { uint32_t ea = 0x519350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_51b37c(c);
}
void f_519358(Cpu *restrict c) {
    FN_ENTER(0x519358u);
L_519358:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51938c; }
    c->r[0] = 0x151fa18u;
    c->r[2] = c->r[4] + 0x52u;
    c->r[3] = c->r[4] + 0x54u;
    { uint32_t ea = 0x51937cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519380u; f_51b37c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_51938c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x52u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_5193a4(Cpu *restrict c) {
    FN_ENTER(0x5193a4u);
L_5193a4:;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x52u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x54u; ST8(ea, c->r[2]); }
    return;
}
void f_5193b8(Cpu *restrict c) {
    FN_ENTER(0x5193b8u);
L_5193b8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151f7e8u;
    { uint32_t ea = 0x5193ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5193d0u; f_5f8344(c);
    c->r[1] = 0xb3c5u;
    c->v.s[0] = 0x46610000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x91a20000u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[1] = (c->r[2] >> 12);
    c->r[2] = 0x1c20u;
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[4] + 64u, c->v.s[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_519408(Cpu *restrict c) {
    FN_ENTER(0x519408u);
L_519408:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_519438; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1du;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_519438; }
    c->r[1] = 0x1u;
    c->r[2] = 0x83u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_519458; }
L_519438:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x519450u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_519458:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51945c(Cpu *restrict c) {
    FN_ENTER(0x51945cu);
L_51945c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_51948c; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1du;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_51948c; }
    c->r[1] = 0x1u;
    c->r[2] = 0x83u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
L_51948c:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_5194ac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x5194a4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_5194ac:;
    c->r[0] = 0x151f8e4u;
    c->r[1] = 0x10u;
    { uint32_t ea = 0x5194bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x14u;
    c->r[14] = 0x5194c4u; f_691248(c);
    c->r[6] = c->r[0];
    c->r[0] = 0x151f79cu;
    { uint32_t ea = 0x5194d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5194d8u; f_702a80(c);
    c->r[1] = 0x192u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1523144u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0x519504u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[4]); }
    c->r[14] = 0x519514u; f_68c4f0(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_519528(Cpu *restrict c) {
    FN_ENTER(0x519528u);
L_519528:;
    { uint32_t ea = c->r[0] + 0x56u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x10u;
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[1]); }
    return;
}
void f_519538(Cpu *restrict c) {
    FN_ENTER(0x519538u);
L_519538:;
    { uint32_t ea = c->r[0] + 0x56u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 4) & 0x1u;
    return;
}
void f_519544(Cpu *restrict c) {
    FN_ENTER(0x519544u);
L_519544:;
    { uint32_t ea = c->r[0] + 0x56u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xefu;
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[1]); }
    return;
}
void f_519554(Cpu *restrict c) {
    FN_ENTER(0x519554u);
L_519554:;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x59u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    return;
}
void f_519588(Cpu *restrict c) {
    FN_ENTER(0x519588u);
L_519588:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    return;
}
void f_5195a0(Cpu *restrict c) {
    FN_ENTER(0x5195a0u);
L_5195a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_5195a4(Cpu *restrict c) {
    FN_ENTER(0x5195a4u);
L_5195a4:;
    c->r[0] = 0x1523090u;
    { uint32_t ea = 0x5195b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_5195b4(Cpu *restrict c) {
    FN_ENTER(0x5195b4u);
L_5195b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1570800u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x5195e0u + c->r[0];
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
    c->r[14] = 0x51963cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x519654u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51966cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x151f4bcu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1522f90u;
    { uint32_t ea = 0x5196a8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x123d37eu;
    { uint32_t ea = 0x5196b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5196b4u + c->r[1];
    c->r[14] = 0x5196b4u; f_9aedcc(c);
    c->r[1] = 0x1522f8cu;
    { uint32_t ea = 0x5196c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_5196e0(Cpu *restrict c) {
    FN_ENTER(0x5196e0u);
L_5196e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1522f60u;
    { uint32_t ea = 0x5196f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x5196f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x98u;
    c->pc = c->r[4]; c->r[14] = 0x51970cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x519714u; f_a870b8(c);
    c->r[0] = 0x1522f30u;
    c->r[1] = 0x30u;
    { uint32_t ea = 0x519724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x519738u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_519748(Cpu *restrict c) {
    FN_ENTER(0x519748u);
L_519748:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1522ef8u;
    { uint32_t ea = 0x51975cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_519788; }
    c->r[0] = 0x151f404u;
    { uint32_t ea = 0x519778u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519778u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x519788u; rt_dispatch(c);
L_519788:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_5197a4(Cpu *restrict c) {
    FN_ENTER(0x5197a4u);
L_5197a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1522e9cu;
    { uint32_t ea = 0x5197b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_5197e4; }
    c->r[0] = 0x151f3a8u;
    { uint32_t ea = 0x5197d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x5197d4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x5197e4u; rt_dispatch(c);
L_5197e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x5197f4u; f_a87100(c);
    c->r[0] = 0x1522e50u;
    { uint32_t ea = 0x519800u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519800u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_519820(Cpu *restrict c) {
    FN_ENTER(0x519820u);
L_519820:;
    return;
}
void f_519824(Cpu *restrict c) {
    FN_ENTER(0x519824u);
L_519824:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_519828(Cpu *restrict c) {
    FN_ENTER(0x519828u);
L_519828:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x360u;
    c->r[4] = c->r[13] + 0x38u;
    c->r[5] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x519848u; f_a2772c(c);
    c->r[0] = 0x5049u;
    c->r[2] = c->r[5] + 0x70u;
    c->r[3] = c->r[13] + 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2003u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[5] + 0x7cu;
    c->r[3] = c->r[13] + 0x1cu;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[5] + 0x88u;
    c->r[3] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    c->r[2] = 0x34u;
    c->r[14] = 0x5198acu; f_a27cd0(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x5198c0u; f_a27cd0(c);
    { uint32_t ea = c->r[5] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] + c->r[0];
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x5198d8u; f_a27cd0(c);
    { uint32_t ea = c->r[5] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x5198ecu; f_a27cd0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x5198f4u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x360u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_519900(Cpu *restrict c) {
    FN_ENTER(0x519900u);
L_519900:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x50u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x38u;
    c->r[2] = 0x80000u;
    c->r[14] = 0x519918u; f_a260d4(c);
    c->r[1] = c->r[13];
    c->r[2] = 0x34u;
    c->r[14] = 0x519924u; f_a2710c(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5049u;
    c->r[5] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_519a00; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2003u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_519a00; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x151f218u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x519964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x519968u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x51997cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_519a00; }
    c->r[3] = c->r[13] + 0x10u;
    c->r[12] = c->r[4] + 0x70u;
    c->r[5] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[3] = c->r[13] + 0x1cu;
    c->r[12] = c->r[4] + 0x7cu;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[3] = c->r[13] + 0x28u;
    c->r[12] = c->r[4] + 0x88u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x5199ccu; f_a2710c(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[5];
    c->r[14] = 0x5199e4u; f_a2710c(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[5];
    c->r[14] = 0x5199fcu; f_a2710c(c);
    c->r[5] = 0x1u;
L_519a00:;
    c->r[0] = c->r[13] + 0x38u;
    c->r[14] = 0x519a08u; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_519a18(Cpu *restrict c) {
    FN_ENTER(0x519a18u);
L_519a18:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_519a48; }
    c->r[0] = 0x151f144u;
    { uint32_t ea = 0x519a38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519a38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x519a48u; rt_dispatch(c);
L_519a48:;
    c->r[0] = c->r[4];
    c->r[1] = 0x30u;
    c->r[14] = 0x519a54u; f_15efd7c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_519a5c(Cpu *restrict c) {
    FN_ENTER(0x519a5cu);
L_519a5c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_CS) { goto L_519a90; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[12] + c->r[1];
    c->r[12] = 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
L_519a90:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_519a98(Cpu *restrict c) {
    FN_ENTER(0x519a98u);
L_519a98:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CS) { return; }
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[3];
    c->r[2] = c->r[2] + (c->r[1] << 3);
    c->r[0] = c->r[0] + (c->r[1] << 3);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { c->r[0] = 0x0u; }
    return;
}
void f_519adc(Cpu *restrict c) {
    FN_ENTER(0x519adcu);
L_519adc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_CS) { goto L_519b20; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[14] + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[12] = 0x1u;
L_519b20:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_519b28(Cpu *restrict c) {
    FN_ENTER(0x519b28u);
L_519b28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[14]);
    if (COND_CS) { goto L_519b6c; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[14] + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    c->r[12] = 0x1u;
L_519b6c:;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_519b74(Cpu *restrict c) {
    FN_ENTER(0x519b74u);
L_519b74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1522ad4u;
    { uint32_t ea = 0x519b84u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x519b88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x88u;
    c->pc = c->r[4]; c->r[14] = 0x519ba0u; rt_dispatch(c);
    c->r[14] = 0x519ba4u; f_a870b8(c);
    c->r[1] = 0x1522aacu;
    { uint32_t ea = 0x519bb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
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
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_519bec(Cpu *restrict c) {
    FN_ENTER(0x519becu);
L_519bec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1522a5cu;
    { uint32_t ea = 0x519c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_519c2c; }
    c->r[0] = 0x151ef60u;
    { uint32_t ea = 0x519c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519c1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x519c2cu; rt_dispatch(c);
L_519c2c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_519c48(Cpu *restrict c) {
    FN_ENTER(0x519c48u);
L_519c48:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1522a00u;
    { uint32_t ea = 0x519c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_519c88; }
    c->r[0] = 0x151ef04u;
    { uint32_t ea = 0x519c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519c78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x519c88u; rt_dispatch(c);
L_519c88:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x519c98u; f_a87100(c);
    c->r[0] = 0x15229b4u;
    { uint32_t ea = 0x519ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519ca4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_519cc4(Cpu *restrict c) {
    FN_ENTER(0x519cc4u);
L_519cc4:;
    return;
}
void f_519cc8(Cpu *restrict c) {
    FN_ENTER(0x519cc8u);
L_519cc8:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_519ccc(Cpu *restrict c) {
    FN_ENTER(0x519cccu);
L_519ccc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x350u;
    c->r[4] = c->r[13] + 0x28u;
    c->r[5] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x519cecu; f_a2772c(c);
    c->r[0] = 0x5049u;
    c->r[2] = c->r[5] + 0x6cu;
    c->r[3] = c->r[13] + 0xcu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x4c0000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2003u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[5] + 0x78u;
    c->r[3] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[13];
    c->r[0] = c->r[4];
    c->r[2] = 0x24u;
    c->r[14] = 0x519d38u; f_a27cd0(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x519d4cu; f_a27cd0(c);
    { uint32_t ea = c->r[5] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6] + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x519d60u; f_a27cd0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x519d68u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x350u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_519d74(Cpu *restrict c) {
    FN_ENTER(0x519d74u);
L_519d74:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13] + 0x28u;
    c->r[2] = 0x80000u;
    c->r[14] = 0x519d8cu; f_a260d4(c);
    c->r[1] = c->r[13];
    c->r[2] = 0x24u;
    c->r[14] = 0x519d98u; f_a2710c(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5049u;
    c->r[5] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4c0000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_519e44; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2003u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_519e44; }
    c->r[0] = 0x151edacu;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x519dd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[6]); }
    c->r[14] = 0x519dd4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x519de8u; rt_dispatch(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_519e44; }
    c->r[3] = c->r[13] + 0xcu;
    c->r[12] = c->r[4] + 0x6cu;
    c->r[5] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[3] = c->r[13] + 0x18u;
    c->r[12] = c->r[4] + 0x78u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x519e28u; f_a2710c(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[5];
    c->r[14] = 0x519e40u; f_a2710c(c);
    c->r[5] = 0x1u;
L_519e44:;
    c->r[0] = c->r[13] + 0x28u;
    c->r[14] = 0x519e4cu; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_519e5c(Cpu *restrict c) {
    FN_ENTER(0x519e5cu);
L_519e5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_519e8c; }
    c->r[0] = 0x151ed00u;
    { uint32_t ea = 0x519e7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x519e7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x519e8cu; rt_dispatch(c);
L_519e8c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_519eb8(Cpu *restrict c) {
    FN_ENTER(0x519eb8u);
L_519eb8:;
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CS) { goto L_519ed4; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[1];
L_519ed4:;
    c->r[0] = c->r[2];
    return;
}
void f_519edc(Cpu *restrict c) {
    FN_ENTER(0x519edcu);
L_519edc:;
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_CS) { goto L_519f00; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[1] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[1];
L_519f00:;
    c->r[0] = c->r[2];
    return;
}
void f_519f08(Cpu *restrict c) {
    FN_ENTER(0x519f08u);
L_519f08:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_519f0c(Cpu *restrict c) {
    FN_ENTER(0x519f0cu);
L_519f0c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_519f10(Cpu *restrict c) {
    FN_ENTER(0x519f10u);
L_519f10:;
    c->r[0] = 0x1522734u;
    { uint32_t ea = 0x519f1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_519f20(Cpu *restrict c) {
    FN_ENTER(0x519f20u);
L_519f20:;
    c->r[0] = 0x12441d1u;
    c->r[0] = 0x519f2cu + c->r[0];
    return;
}
void f_519f30(Cpu *restrict c) {
    FN_ENTER(0x519f30u);
L_519f30:;
    c->r[0] = 0x152271cu;
    { uint32_t ea = 0x519f3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_519f40(Cpu *restrict c) {
    FN_ENTER(0x519f40u);
L_519f40:;
    c->r[0] = 0x12441b5u;
    c->r[0] = 0x519f4cu + c->r[0];
    return;
}
void f_519f50(Cpu *restrict c) {
    FN_ENTER(0x519f50u);
L_519f50:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x156ff00u;
    c->r[5] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    c->r[3] = 0x8u;
    c->r[4] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[0] = 0x519f80u + c->r[0];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[11] = c->r[0] + 0x28u;
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[4]); ST32(ea + 16u, c->r[12]); ST32(ea + 20u, c->r[14]); }
    c->r[1] = 0x3f800000u;
    c->r[2] = 0x10000u;
    c->r[3] = 0x98u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x80000000u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = f_adds(c, c->r[2], 0xf0000u);
    c->r[1] = c->r[1] + 0x0u + c->cf;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x151eb98u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[0] = 0x1522664u;
    { uint32_t ea = 0x519fe4u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x12440f4u;
    { uint32_t ea = 0x519fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x519ff0u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0x519ff4u; f_9aedcc(c);
    c->r[1] = 0x152264cu;
    c->r[2] = c->r[4];
    c->r[3] = 0x88u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x51a014u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1522630u;
    c->r[1] = 0x12440c4u;
    { uint32_t ea = 0x51a028u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x51a02cu + c->r[1];
    c->r[14] = 0x51a02cu; f_9aedcc(c);
    c->r[1] = 0x152262cu;
    { uint32_t ea = 0x51a038u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51a064(Cpu *restrict c) {
    FN_ENTER(0x51a064u);
L_51a064:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x15225f4u;
    { uint32_t ea = 0x51a074u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51a078u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xe8u;
    c->pc = c->r[4]; c->r[14] = 0x51a090u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0x51a098u; f_a87810(c);
    c->r[0] = 0x15225c8u;
    { uint32_t ea = 0x51a0a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x151ecdcu;
    { uint32_t ea = 0x51a0b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0xccu;
    c->r[14] = 0x51a0c0u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51a0d4(Cpu *restrict c) {
    FN_ENTER(0x51a0d4u);
L_51a0d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x152257cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x51a0ecu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x51a0f0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_51a110(Cpu *restrict c) {
    FN_ENTER(0x51a110u);
L_51a110:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x51a11cu; f_a87810(c);
    c->r[0] = 0x1522544u;
    { uint32_t ea = 0x51a128u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x1cu; }
    c->r[1] = 0x151ec58u;
    { uint32_t ea = 0x51a13cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[4]); }
    c->r[1] = 0xccu;
    c->r[14] = 0x51a144u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51a154(Cpu *restrict c) {
    FN_ENTER(0x51a154u);
L_51a154:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1522500u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x51a16cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x151ec18u;
    { uint32_t ea = 0x51a17cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51a184u; f_51a198(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_51a198(Cpu *restrict c) {
    FN_ENTER(0x51a198u);
L_51a198:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a1b8; }
    c->r[14] = 0x51a1b0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_51a1b8:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a1d0; }
    c->r[14] = 0x51a1c8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
L_51a1d0:;
    c->r[0] = c->r[4] + 0x64u;
    c->r[1] = 0x84u;
    c->r[14] = 0x51a1dcu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a25c; }
    c->r[14] = 0x51a1ecu; f_5186d4(c);
    c->r[5] = 0x80u;
L_51a1f0:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[14] = 0x51a1fcu; f_5186d4(c);
    c->r[5] = c->r[5] + 0x80u;
    (void)f_subs(c, c->r[5], 0x4000u);
    if (COND_NE) { goto L_51a1f0; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0x28u;
    c->r[1] = 0x38u;
    c->r[14] = 0x51a218u; f_15efd7c(c);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_51a258; }
    { uint32_t ea = c->r[6] - 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[6] - 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a248; }
    c->r[6] = c->r[6] - 0x80u;
    c->r[7] = (c->r[0] << 7);
L_51a238:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[14] = 0x51a240u; f_5187c8(c);
    c->r[7] = f_subs(c, c->r[7], 0x80u);
    if (COND_NE) { goto L_51a238; }
L_51a248:;
    c->r[0] = c->r[5];
    c->r[14] = 0x51a250u; f_5185cc(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
L_51a258:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_51a25c:;
    c->r[0] = c->r[4] + 0x28u;
    c->r[1] = 0x38u;
    c->r[14] = 0x51a268u; f_15efd7c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51a26c(Cpu *restrict c) {
    FN_ENTER(0x51a26cu);
L_51a26c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15223e8u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x51a284u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x151eb00u;
    { uint32_t ea = 0x51a294u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51a29cu; f_51a198(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x51a2a4u; f_a8784c(c);
    c->r[0] = 0x15223b8u;
    { uint32_t ea = 0x51a2b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a2b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_51a2d0(Cpu *restrict c) {
    FN_ENTER(0x51a2d0u);
L_51a2d0:;
    __attribute__((musttail)) return f_a878e4(c);
}
void f_51a2d4(Cpu *restrict c) {
    FN_ENTER(0x51a2d4u);
L_51a2d4:;
    __attribute__((musttail)) return f_a878e8(c);
}
void f_51a2d8(Cpu *restrict c) {
    FN_ENTER(0x51a2d8u);
L_51a2d8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151ea98u;
    { uint32_t ea = 0x51a2ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51a3e0; }
L_51a2f8:;
    c->r[0] = 0x151e8b0u;
    { uint32_t ea = 0x51a304u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a308u; f_5f8a20(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51a3ec; }
    c->r[0] = 0x151e898u;
    { uint32_t ea = 0x51a31cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a320u; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51a3ec; }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51a348; }
L_51a334:;
    c->r[0] = c->r[5];
    c->r[14] = 0x51a33cu; f_518800(c);
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51a334; }
L_51a348:;
    c->r[0] = 0x151ea2cu;
    { uint32_t ea = 0x51a354u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a358u; f_476278(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_51a3ec; }
    c->r[0] = 0x1054u;
    c->r[1] = 0x84u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x51a378u; f_15efd7c(c);
    (void)f_subs(c, c->r[7], 0xcu);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[0] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51a3ec; }
    c->r[6] = c->r[6] + 0x40u;
L_51a394:;
    { uint32_t ea = c->r[5] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_51a3ec; }
    c->r[0] = c->r[5];
    c->r[14] = 0x51a3a8u; f_519244(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51a3d0; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x51a3bcu; f_519278(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51a3d0; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[5]); }
L_51a3d0:;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51a394; }
    goto L_51a3ec;
L_51a3e0:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a2f8; }
L_51a3ec:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51a400(Cpu *restrict c) {
    FN_ENTER(0x51a400u);
L_51a400:;
    __attribute__((musttail)) return f_51a198(c);
}
void f_51a404(Cpu *restrict c) {
    FN_ENTER(0x51a404u);
L_51a404:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151e79cu;
    { uint32_t ea = 0x51a418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD8(ea); c->r[8] = v; }
    c->r[0] = 0x151e900u;
    { uint32_t ea = 0x51a428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a42cu; f_5a8ccc(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x51a438u; f_51a198(c);
    c->r[0] = 0x4010u;
    c->r[1] = 0x10u;
    c->r[14] = 0x51a444u; f_518590(c);
    c->r[1] = 0x80u;
    c->r[7] = c->r[0] + 0x10u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_51a458:;
    c->r[0] = c->r[7] + c->r[6];
    c->r[14] = 0x51a460u; f_5185f8(c);
    c->r[6] = c->r[6] + 0x80u;
    (void)f_subs(c, c->r[6], 0x4000u);
    if (COND_NE) { goto L_51a458; }
    c->r[0] = c->r[8] + (c->r[8] << 2);
    c->r[1] = 0xd5b7u;
    c->r[2] = 0x15221c8u;
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[5] + (c->r[0] << 1);
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = 0x151e8e4u;
    { uint32_t ea = 0x51a490u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x51a494u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a498u; f_352960(c);
    c->r[2] = 0x152218cu;
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd6cfu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { c->r[0] = 0xd707u; }
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_EQ) { c->r[0] = 0xd6ebu; }
    c->r[1] = c->r[0] + c->r[8];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x51a4c4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = 0x51a4c4u; f_352960(c);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51a4d0u; f_51a4f4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_51a8e8(c);
}
void f_51a4f4(Cpu *restrict c) {
    FN_ENTER(0x51a4f4u);
L_51a4f4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    c->r[1] = 0x84u;
    c->r[0] = c->r[4] + 0x64u;
    c->r[14] = 0x51a50cu; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a538; }
    c->r[14] = 0x51a51cu; f_5186d4(c);
    c->r[5] = 0x80u;
L_51a520:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    c->r[14] = 0x51a52cu; f_5186d4(c);
    c->r[5] = c->r[5] + 0x80u;
    (void)f_subs(c, c->r[5], 0x4000u);
    if (COND_NE) { goto L_51a520; }
L_51a538:;
    c->r[0] = c->r[4] + 0x28u;
    c->r[1] = 0x38u;
    c->r[14] = 0x51a544u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a8dc; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[10] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[10], 0x0u); }
    if (COND_EQ) { goto L_51a8dc; }
    c->r[1] = 0x151e7acu;
    c->r[8] = 0x2u;
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x51a57cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    goto L_51a590;
L_51a580:;
    c->r[11] = c->r[11] + 0x1u;
    (void)f_subs(c, c->r[11], c->r[10]);
    if (COND_EQ) { goto L_51a8dc; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_51a590:;
    c->r[9] = (uint32_t)(uint8_t)(c->r[11]);
    c->r[2] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0x10u;
    c->r[1] = c->r[9];
    c->r[14] = 0x51a5a4u; f_519a5c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51a580; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a7f4; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
L_51a5c4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51a5d0u; f_519eb8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_51a7d8; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
L_51a5e4:;
    c->r[1] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51a614; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51a610; }
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[5], 0x80u);
    if (COND_CC) { goto L_51a5e4; }
    goto L_51a7d8;
L_51a610:;
    c->r[5] = c->r[5] + 0x1u;
L_51a614:;
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[14] = 0x51a61cu; f_5186d4(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[1] = c->r[1] & 0x7fffu;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] + (c->r[5] << 7);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51a7d8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1fu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x51a66cu; f_5191d8(c);
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x25u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_HI) { goto L_51a69c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x46u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51a720; }
    c->r[14] = 0x51a694u; f_5ad250(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a720; }
L_51a69c:;
    c->r[0] = 0x1u;
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x51a6b0u; f_5191a0(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1du; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x50u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    c->r[2] = c->r[5] + 0x20u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1au; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[7]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[14] = 0x51a70cu; f_519358(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x1u;
    c->r[14] = 0x51a71cu; f_51abac(c);
    goto L_51a7d8;
L_51a720:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = c->r[5]; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_51a7d8; }
    c->r[1] = c->r[1] & 0xfdu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51a7c0; }
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[7] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x29u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[14] = c->r[7];
    { uint32_t ea = c->r[14] + 0x4u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[12] = v; }
    c->r[6] = c->r[4] + (c->r[3] << 2);
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_NE) { goto L_51a794; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51a78c; }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[3] = 0x0u;
    if (COND_EQ) { c->r[3] = c->r[1]; }
    goto L_51a790;
L_51a78c:;
    c->r[3] = 0x0u;
L_51a790:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[3]); }
L_51a794:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[2] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[12]); } }
    if (COND_NE) { { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); } }
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[7] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[12] + 0x2cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[14]; ST32(ea, c->r[7]); } }
L_51a7c0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeu;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x51a7d8u; f_519408(c);
L_51a7d8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[0] = c->r[0] + 0x24u;
    (void)f_subs(c, c->r[10], c->r[1]);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_CC) { goto L_51a5c4; }
L_51a7f4:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[9];
    c->r[14] = 0x51a800u; f_519a98(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51a580; }
    c->r[7] = 0x0u;
L_51a814:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
L_51a81c:;
    c->r[1] = c->r[0] + (c->r[6] << 7);
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51a84c; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51a848; }
    c->r[6] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[6], 0x80u);
    if (COND_CC) { goto L_51a81c; }
    goto L_51a8cc;
L_51a848:;
    c->r[6] = c->r[6] + 0x1u;
L_51a84c:;
    c->r[0] = c->r[0] + (c->r[6] << 7);
    c->r[14] = 0x51a854u; f_5186d4(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 7);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (c->r[6] << 7);
    c->r[1] = c->r[1] & 0x7fffu;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + (c->r[6] << 7);
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_51a8cc; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[8]); }
    c->r[14] = 0x51a8a4u; f_5191a0(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[6] + 0x57u; ST8(ea, c->r[7]); }
    c->r[14] = 0x51a8b4u; f_51acd4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51a8cc; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = 0x1u;
    c->r[14] = 0x51a8ccu; f_51abac(c);
L_51a8cc:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_51a814; }
    goto L_51a580;
L_51a8dc:;
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_51a8e8(Cpu *restrict c) {
    FN_ENTER(0x51a8e8u);
L_51a8e8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151e2b4u;
    c->r[9] = c->r[1];
    { uint32_t ea = 0x51a900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4bu; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xcu);
    if (COND_HI) { goto L_51a9fc; }
    c->r[0] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51a9fc; }
    c->r[8] = 0x0u;
L_51a920:;
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_51a9fc; }
    c->r[0] = c->r[6];
    c->r[1] = 0x1u;
    c->r[14] = 0x51a93cu; f_519408(c);
    { uint32_t ea = c->r[6] + 0x56u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_51a968; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51a920; }
    goto L_51a9fc;
L_51a968:;
    c->r[0] = c->r[0] & 0xfdu;
    { uint32_t ea = c->r[6] + 0x70u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51a9dc; }
    { uint32_t ea = c->r[6] + 0x55u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_NE) { goto L_51a9b8; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51a9b0; }
    { uint32_t ea = c->r[5] + 0x55u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x0u;
    if (COND_EQ) { c->r[2] = c->r[5]; }
    goto L_51a9b4;
L_51a9b0:;
    c->r[2] = 0x0u;
L_51a9b4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
L_51a9b8:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); } }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[8]); } }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[5]); } }
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[8]); } }
L_51a9dc:;
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] & 0xfeu;
    { uint32_t ea = c->r[6] + 0x70u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x51a9f4u; f_519408(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51a920; }
L_51a9fc:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->r[14] = 0x51aa08u; f_51aee8(c);
    c->r[0] = 0x151e1a0u;
    { uint32_t ea = 0x51aa14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[4] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_51aa38; }
    goto L_51aa60;
L_51aa2c:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_51aa60; }
L_51aa38:;
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_51aa60; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51aa2c; }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0x51aa5cu; f_51945c(c);
    goto L_51aa2c;
L_51aa60:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_51aa6c(Cpu *restrict c) {
    FN_ENTER(0x51aa6cu);
L_51aa6c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
L_51aa7c:;
    c->r[1] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51aab0; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51aaac; }
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[5], 0x80u);
    if (COND_CC) { goto L_51aa7c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51aaac:;
    c->r[5] = c->r[5] + 0x1u;
L_51aab0:;
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[14] = 0x51aab8u; f_5186d4(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[1] = c->r[1] & 0x7fffu;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51aaf4(Cpu *restrict c) {
    FN_ENTER(0x51aaf4u);
L_51aaf4:;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_51ab0c; }
    return;
L_51ab0c:;
    c->r[2] = c->r[2] & 0xfdu;
    { uint32_t ea = c->r[1] + 0x70u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51ab94; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[0] + (c->r[14] << 2);
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_51ab64; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51ab5c; }
    { uint32_t ea = c->r[2] + 0x55u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[14], c->r[4]);
    c->r[14] = c->r[2];
    if (COND_NE) { c->r[14] = 0x0u; }
    goto L_51ab60;
L_51ab5c:;
    c->r[14] = 0x0u;
L_51ab60:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[14]); }
L_51ab64:;
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[2]); } }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[12]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); } }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[12] + 0x2cu; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
L_51ab94:;
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfeu;
    { uint32_t ea = c->r[1] + 0x70u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = 0x0u;
    __attribute__((musttail)) return f_519408(c);
}
void f_51abac(Cpu *restrict c) {
    FN_ENTER(0x51abacu);
L_51abac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[12] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51ac0c; }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[14] = v; }
    c->r[5] = c->r[0] + (c->r[14] << 2);
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51ac2c; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x2cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; } }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_51ac04; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
L_51ac04:;
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    goto L_51ac88;
L_51ac0c:;
    c->r[3] = 0x0u;
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    goto L_51ac88;
L_51ac2c:;
    { uint32_t ea = c->r[3] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[14]);
    if (COND_CS) { goto L_51ac5c; }
L_51ac38:;
    c->r[0] = c->r[3];
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51ac78; }
    { uint32_t ea = c->r[3] + 0x55u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[14]);
    if (COND_LS) { goto L_51ac38; }
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[1]); }
    goto L_51ac7c;
L_51ac5c:;
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[1]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    goto L_51ac88;
L_51ac78:;
    c->r[3] = 0x0u;
L_51ac7c:;
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_51ac88:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[1] + 0x70u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51acb8; }
    { uint32_t r = c->r[2] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { goto L_51acb8; }
    (void)f_subs(c, c->r[0], 0x1eu);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    goto L_51acc0;
L_51acb8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51acd0; }
L_51acc0:;
    c->r[0] = c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_51945c(c);
L_51acd0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51acd4(Cpu *restrict c) {
    FN_ENTER(0x51acd4u);
L_51acd4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    c->r[1] = c->r[13] + 0xcu;
    c->r[3] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[4] + 0x57u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x51ad08u; f_519adc(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51aed4; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x8u;
    c->r[3] = c->r[13] + 0x10u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    c->r[14] = 0x51ad30u; f_519b28(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51aed4; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_51aed4; }
    c->r[0] = 0x151de5cu;
    { uint32_t ea = 0x51ad58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51ad5cu; f_5f8344(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = udiv32(c->r[0], c->r[1]);
    c->r[0] = c->r[0] - c->r[2] * c->r[1];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51aed4; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51ada4; }
    c->r[2] = 0x0u;
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51adb4; }
    goto L_51add4;
L_51ada4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x6u; c->r[5] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_51add4; }
L_51adb4:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x6u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + 0x2u;
    c->r[1] = c->r[1] + 0xcu;
    (void)f_subs(c, c->r[2], c->r[0]);
    c->r[3] = c->r[3] + c->r[5];
    c->r[5] = c->r[7] + c->r[3];
    if (COND_CC) { goto L_51adb4; }
L_51add4:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51aed4; }
    c->r[0] = 0x151ddc8u;
    { uint32_t ea = 0x51adecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51adf0u; f_5f8344(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51ae34; }
    c->r[3] = udiv32(c->r[0], c->r[5]);
    c->r[7] = 0x0u;
    c->r[0] = c->r[0] - c->r[3] * c->r[5];
    c->r[3] = 0x0u;
L_51ae10:;
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[7] = c->r[5] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LS) { goto L_51ae34; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[1] = c->r[1] + 0x6u;
    (void)f_subs(c, c->r[3], c->r[2]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_CC) { goto L_51ae10; }
L_51ae34:;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51ae40u; f_519edc(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51aed4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51ae54u; f_5193b8(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[4] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x16u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51aea0u; f_519358(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51aec8u; f_5191d8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x51aed0u; f_519528(c);
    c->r[6] = 0x1u;
L_51aed4:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51aee8(Cpu *restrict c) {
    FN_ENTER(0x51aee8u);
L_51aee8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[0];
    c->r[0] = 0x151dcacu;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = 0x0u;
    { uint32_t ea = 0x51af08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x49u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xdu;
    if (COND_NE) { goto L_51af34; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0];
    c->r[0] = c->r[2] + 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_51b158; }
L_51af34:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x130edb4u;
    c->r[1] = c->r[1] ^ 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x151dd10u;
    c->r[0] = 0x51af58u + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0x51af60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
L_51af60:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[2]);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51af78u; f_700394(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10] + 0xa4u; uint32_t v = LD32(ea); c->r[9] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[9], 0x0u); }
    if (COND_EQ) { goto L_51b140; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_51afb0:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0x51afbcu; f_6fc69c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x8u);
    if (COND_EQ) { goto L_51afe4; }
    (void)f_subs(c, c->r[8], 0xffu);
    if (COND_EQ) { goto L_51b134; }
    (void)f_subs(c, c->r[8], 0xau);
    if (COND_NE) { goto L_51aff8; }
L_51afe4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51b008; }
    goto L_51b134;
L_51aff8:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51b134; }
L_51b008:;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
L_51b010:;
    c->r[1] = c->r[0] + (c->r[7] << 7);
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b040; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b03c; }
    c->r[7] = c->r[7] + 0x2u;
    (void)f_subs(c, c->r[7], 0x80u);
    if (COND_CC) { goto L_51b010; }
    goto L_51b134;
L_51b03c:;
    c->r[7] = c->r[7] + 0x1u;
L_51b040:;
    c->r[0] = c->r[0] + (c->r[7] << 7);
    c->r[14] = 0x51b048u; f_5186d4(c);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 7);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (c->r[7] << 7);
    c->r[1] = c->r[1] & 0x7fffu;
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + (c->r[7] << 7);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_51b134; }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[7] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x51b09cu; f_5191a0(c);
    c->r[0] = 0xffffu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x50u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[7] + 0x64u; ST32(ea, c->r[8]); }
    c->r[14] = 0x51b0e0u; f_5191d8(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[7] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x22u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[14] = 0x51b108u; f_519358(c);
    { uint32_t ea = c->r[7] + 0x56u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[11], 0x0u);
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] & 0xfbu;
    if (COND_NE) { c->r[1] = c->r[0] | 0x4u; }
    { uint32_t ea = c->r[7] + 0x56u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x58u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x51b134u; f_51abac(c);
L_51b134:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_NE) { goto L_51afb0; }
L_51b140:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_51af60; }
L_51b158:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_51b16c(Cpu *restrict c) {
    FN_ENTER(0x51b16cu);
L_51b16c:;
    c->r[2] = c->r[0];
    (void)f_adds(c, c->r[1], 0x1u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_51b1a8; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
L_51b188:;
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { c->r[0] = c->r[2]; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    goto L_51b188;
L_51b1a8:;
    return;
}
void f_51b1ac(Cpu *restrict c) {
    FN_ENTER(0x51b1acu);
L_51b1ac:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = c->r[1];
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[8] = 0x0u;
    c->r[0] = c->r[0] + (c->r[7] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_51b1e0; }
    goto L_51b220;
L_51b1d4:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_51b220; }
L_51b1e0:;
    { uint32_t ea = c->r[4] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_51b220; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_51b1d4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51b200u; f_519244(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51b1d4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0x51b214u; f_519278(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51b1d4; }
    c->r[8] = c->r[4];
L_51b220:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51b228(Cpu *restrict c) {
    FN_ENTER(0x51b228u);
L_51b228:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    (void)f_adds(c, c->r[1], 0x1u);
    c->r[4] = c->r[2];
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x5cu; uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_51b288; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
L_51b248:;
    { uint32_t ea = c->r[6] + 0x4cu; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_51b264; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_51b248; }
    goto L_51b288;
L_51b264:;
    c->r[0] = c->r[6];
    c->r[14] = 0x51b26cu; f_519244(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51b288; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_51b290(c);
L_51b288:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51b290(Cpu *restrict c) {
    FN_ENTER(0x51b290u);
L_51b290:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x151dadcu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x51b2a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51b2a8u; f_476278(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51b2dc; }
    { uint32_t ea = c->r[4] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0xffffu;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_51b2e4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51b2ec; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51b2dc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51b2e4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51b2ec:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    if (COND_NE) { c->r[2] = 0xffffu; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_51b354; }
    c->r[0] = 0x151da6cu;
    { uint32_t ea = 0x51b314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51b318u; f_476278(c);
    c->r[1] = c->r[0];
    c->r[14] = 0x51b320u; f_51b9cc(c);
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = 0x151d884u;
    { uint32_t ea = 0x51b330u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51b334u; f_5f8344(c);
    c->r[0] = c->r[0] & 0x1fu;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CS) { goto L_51b350; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4eu; ST16(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51b350:;
    { uint32_t ea = c->r[4] + 0x4eu; uint32_t v = LD16(ea); c->r[0] = v; }
L_51b354:;
    c->r[1] = c->r[0] - 0x1u;
    c->r[2] = 0xffffu;
    c->r[0] = 0x1u;
    { uint32_t r = c->r[1] & c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x4eu; ST16(ea, c->r[1]); }
    if (COND_EQ) { c->r[0] = 0x2u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51b37c(Cpu *restrict c) {
    FN_ENTER(0x51b37cu);
L_51b37c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[1];
    c->r[8] = c->r[3];
    c->r[5] = c->r[2];
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_51b42c; }
    c->r[1] = c->r[6] + 0x4u;
    c->r[4] = 0x0u;
L_51b3a8:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[4] = c->r[0] + (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_51b3a8; }
    c->r[0] = 0xffffu;
    c->r[7] = 0x0u;
    { uint32_t r = c->r[4] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b42c; }
    c->r[0] = 0x151d7dcu;
    { uint32_t ea = 0x51b3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51b3dcu; f_5f8344(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_51b42c; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[3] = udiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[3] * c->r[2];
    c->r[2] = c->r[6] + 0x2u;
    c->r[3] = 0x0u;
L_51b3fc:;
    c->r[7] = c->r[3] + (uint32_t)(uint8_t)(c->r[1]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[7]);
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_51b434; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[7] = c->r[2] + 0x4u;
    c->r[3] = c->r[1] + (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = c->r[7];
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_51b3fc; }
    c->r[7] = 0x0u;
L_51b42c:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_51b434:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[5]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[2] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51b454(Cpu *restrict c) {
    FN_ENTER(0x51b454u);
L_51b454:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = 0x0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51b4ac; }
    c->r[5] = 0x0u;
    c->r[3] = c->r[13];
L_51b484:;
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_NE) { goto L_51b4a0; }
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_CS) { goto L_51b4ac; }
L_51b4a0:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51b484; }
L_51b4ac:;
    (void)f_subs(c, c->r[5], c->r[2]);
    if (COND_CC) { goto L_51b654; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51b590; }
    c->r[7] = c->r[13];
L_51b4c4:;
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51b4ccu; f_519244(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51b4e4; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CC) { goto L_51b4c4; }
    goto L_51b4f0;
L_51b4e4:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[6]);
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_51b590; }
L_51b4f0:;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_CC) { goto L_51b590; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[0] = LD32(c->r[0] + 64u);
    if (COND_NE) { goto L_51b538; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->v.s[2] = LD32(c->r[0] + 64u);
    c->r[0] = 0x2u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    if (COND_GT) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_NE) { goto L_51b548; }
    goto L_51b590;
L_51b538:;
    c->r[6] = 0x0u;
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_51b590; }
L_51b548:;
    c->r[1] = c->r[7] + (c->r[0] << 2);
    c->r[1] = c->r[1] + 0x4u;
L_51b550:;
    { uint32_t ea = c->r[1] - 4u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[1] + 0x8u;
    c->v.s[2] = LD32(c->r[2] + 64u);
    c->v.s[4] = LD32(c->r[3] + 64u);
    c->r[2] = c->r[0] + 0x2u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[2] : c->v.s[0];
    if (COND_GT) { c->r[6] = c->r[0]; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[4]);
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[4] : c->v.s[0];
    if (COND_GT) { c->r[6] = c->r[0] + 0x1u; }
    (void)f_subs(c, c->r[5], c->r[2]);
    c->r[0] = c->r[2];
    if (COND_NE) { goto L_51b550; }
L_51b590:;
    c->r[0] = 0x151d7f8u;
    { uint32_t ea = 0x51b59cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51b654; }
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[6]);
    c->r[2] = c->r[13];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b654; }
    c->r[2] = c->r[2] & 0xfdu;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51b640; }
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[1] + (c->r[6] << 2);
    { uint32_t ea = c->r[7] + 0x28u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_51b614; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51b60c; }
    { uint32_t ea = c->r[2] + 0x55u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[6] = c->r[2];
    if (COND_NE) { c->r[6] = 0x0u; }
    goto L_51b610;
L_51b60c:;
    c->r[6] = 0x0u;
L_51b610:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
L_51b614:;
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { { uint32_t ea = c->r[1] + 0x5cu; ST32(ea, c->r[2]); } }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[3]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); } }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x2cu; ST32(ea, c->r[2]); } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); } }
L_51b640:;
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfeu;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[14] = 0x51b654u; f_519408(c);
L_51b654:;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
L_51b65c:;
    c->r[1] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b694; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b690; }
    c->r[5] = c->r[5] + 0x2u;
    (void)f_subs(c, c->r[5], 0x80u);
    if (COND_CC) { goto L_51b65c; }
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_51b690:;
    c->r[5] = c->r[5] + 0x1u;
L_51b694:;
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[14] = 0x51b69cu; f_5186d4(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 7);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[1] = c->r[1] & 0x7fffu;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 7);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51b6e0(Cpu *restrict c) {
    FN_ENTER(0x51b6e0u);
L_51b6e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_51b738; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51b7a4; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
L_51b704:;
    c->r[1] = c->r[0] + (c->r[6] << 7);
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b754; }
    { uint32_t ea = c->r[1] + 0xf0u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51b750; }
    c->r[6] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[6], 0x80u);
    if (COND_CC) { goto L_51b704; }
    c->r[4] = 0x0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51b738:;
    c->r[0] = c->r[5];
    c->r[1] = 0x9u;
    c->r[2] = 0x3u;
    c->r[6] = 0x9u;
    c->r[14] = 0x51b74cu; f_51b454(c);
    goto L_51b798;
L_51b750:;
    c->r[6] = c->r[6] + 0x1u;
L_51b754:;
    c->r[0] = c->r[0] + (c->r[6] << 7);
    c->r[14] = 0x51b75cu; f_5186d4(c);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 7);
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[0] = c->r[0] + (c->r[6] << 7);
    c->r[1] = c->r[1] & 0x7fffu;
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 7);
    c->r[6] = 0x3u;
L_51b798:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[4] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[6]); } }
L_51b7a4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51b7ac(Cpu *restrict c) {
    FN_ENTER(0x51b7acu);
L_51b7ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[1] = 0xau;
    c->r[2] = 0x3u;
    c->r[6] = 0xau;
    c->r[14] = 0x51b7c0u; f_51b454(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_51b7f4; }
    c->r[7] = 0xeu;
    c->r[0] = 0xffffu;
    c->r[1] = 0x1du;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); ST32(ea + 4, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51b7ecu; f_5191d8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x56u; ST8(ea, c->r[0]); }
L_51b7f4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51b7fc(Cpu *restrict c) {
    FN_ENTER(0x51b7fcu);
L_51b7fc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[8]); ST32(ea + 16u, c->r[9]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[1] + 0x10u;
    c->r[6] = c->r[2];
    c->r[2] = 0x3u;
    c->r[5] = c->r[3];
    c->r[1] = c->r[8];
    c->r[14] = 0x51b818u; f_51b454(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_51b850; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[5];
    c->r[14] = 0x51b834u; f_5193a4(c);
    c->r[9] = 0x18u;
    c->r[0] = 0x1u;
    c->r[1] = 0x21u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[8]); ST32(ea + 4, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x4eu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51b850u; f_5191d8(c);
L_51b850:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); c->r[9] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51b858(Cpu *restrict c) {
    FN_ENTER(0x51b858u);
L_51b858:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51b8a4; }
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[12] + 0x55u; uint32_t v = LD8(ea); c->r[12] = ea; c->r[5] = v; }
    c->r[4] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_51b8b8; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51b8b0; }
    { uint32_t ea = c->r[3] + 0x55u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[5] = c->r[3];
    if (COND_NE) { c->r[5] = 0x0u; }
    goto L_51b8b4;
L_51b8a4:;
    c->r[14] = c->r[0] + 0x5cu;
    c->r[12] = c->r[1] + 0x55u;
    goto L_51b8e8;
L_51b8b0:;
    c->r[5] = 0x0u;
L_51b8b4:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
L_51b8b8:;
    c->r[14] = c->r[0];
    { uint32_t ea = c->r[14] + 0x5cu; uint32_t v = LD32(ea); c->r[14] = ea; c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[14]; ST32(ea, c->r[3]); } }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[4] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[7]); } }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[4]); } }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[3]); } }
    if (COND_NE) { c->r[3] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[3]); } }
L_51b8e8:;
    { uint32_t ea = c->r[12]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51b944; }
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_51b964; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x2cu; ST32(ea, c->r[1]); } }
    if (COND_NE) { { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; } }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_51b938; }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
L_51b938:;
    { uint32_t ea = c->r[2] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_51b944:;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_51b964:;
    { uint32_t ea = c->r[3] + 0x55u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_CS) { goto L_51b994; }
L_51b970:;
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_51b9b4; }
    { uint32_t ea = c->r[3] + 0x55u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_LS) { goto L_51b970; }
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[1]); }
    goto L_51b9b8;
L_51b994:;
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[1]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_51b9b4:;
    c->r[3] = 0x0u;
L_51b9b8:;
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51b9cc(Cpu *restrict c) {
    FN_ENTER(0x51b9ccu);
L_51b9cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[1] = 0xf1u;
    c->r[0] = c->r[4];
    c->r[14] = 0x51b9e0u; f_4864c4(c);
    c->r[5] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51ba44; }
    c->r[0] = c->r[4];
    c->r[1] = 0xf2u;
    c->r[14] = 0x51b9f8u; f_4864c4(c);
    c->r[5] = 0x5u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51ba44; }
    c->r[0] = c->r[4];
    c->r[1] = 0x140u;
    c->r[14] = 0x51ba10u; f_4864c4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51ba44; }
    c->r[0] = c->r[4];
    c->r[1] = 0x2cu;
    c->r[14] = 0x51ba24u; f_4864e0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51ba44; }
    c->r[0] = c->r[4];
    c->r[1] = 0xf3u;
    c->r[14] = 0x51ba38u; f_4864c4(c);
    c->r[5] = 0x7u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[5] = 0xbu; }
L_51ba44:;
    c->r[0] = c->r[4];
    c->r[1] = 0xeu;
    c->r[14] = 0x51ba50u; f_4864d4(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51ba68; }
    c->r[0] = c->r[5] - 0x3u;
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_CC) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51ba68:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51ba70(Cpu *restrict c) {
    FN_ENTER(0x51ba70u);
L_51ba70:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = 0x0u;
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_51ba9c; }
    goto L_51bad4;
L_51ba90:;
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_51bad4; }
L_51ba9c:;
    { uint32_t ea = c->r[6] + 0x55u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_51bad4; }
    { uint32_t ea = c->r[6] + 0x70u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51ba90; }
    { uint32_t ea = c->r[6] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51ba90; }
    c->r[0] = c->r[6];
    c->r[14] = 0x51bac8u; f_519188(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51ba90; }
    c->r[4] = 0x1u;
L_51bad4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51badc(Cpu *restrict c) {
    FN_ENTER(0x51badcu);
L_51badc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[12] = 0x1u;
    c->r[14] = 0x1044u;
L_51bafc:;
    { uint32_t ea = c->r[2] + 0x55u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_51bb4c; }
    { uint32_t ea = c->r[2] + 0x70u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51bb40; }
    { uint32_t ea = c->r[2] + 0x5cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_51bb40; }
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_51bb40; }
    { uint32_t ea = c->r[2] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xcu);
    if (COND_HI) { goto L_51bb40; }
    { uint32_t r = c->r[14] & shc_lsl(c, c->r[12], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51bb50; }
L_51bb40:;
    { uint32_t ea = c->r[2] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_51bafc; }
L_51bb4c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_51bb50:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51bb58(Cpu *restrict c) {
    FN_ENTER(0x51bb58u);
L_51bb58:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x151d1bcu;
    c->r[3] = 0x1b90u;
    { uint32_t ea = 0x51bb6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[3];
    c->r[14] = 0x51bb74u; f_5b52dc(c);
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0xffu); }
    if (COND_EQ) { goto L_51bc18; }
    c->r[1] = c->r[4] + 0x4u;
    c->r[6] = 0x0u;
L_51bb94:;
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[6] = c->r[2] + (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_51bb94; }
    c->r[0] = 0xffffu;
    c->r[5] = 0x0u;
    { uint32_t r = c->r[6] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51bc18; }
    c->r[0] = 0x151cff0u;
    { uint32_t ea = 0x51bbc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51bbc8u; f_5f8344(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_EQ) { goto L_51bc18; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[6]);
    c->r[3] = udiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[3] * c->r[2];
    c->r[3] = c->r[4] + 0x2u;
    c->r[2] = 0x0u;
L_51bbe8:;
    c->r[6] = c->r[2] + (uint32_t)(uint8_t)(c->r[1]);
    c->r[6] = (uint32_t)(uint16_t)(c->r[6]);
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_CC) { goto L_51bc20; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[6] = c->r[3] + 0x4u;
    c->r[2] = c->r[1] + (uint32_t)(uint16_t)(c->r[2]);
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = c->r[6];
    (void)f_subs(c, c->r[1], 0xffu);
    if (COND_NE) { goto L_51bbe8; }
    c->r[5] = 0x0u;
L_51bc18:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_51bc20:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51bc34(Cpu *restrict c) {
    FN_ENTER(0x51bc34u);
L_51bc34:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51bd28; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_51bcd0; }
    c->r[14] = 0x1u;
    c->r[4] = 0x1866u;
L_51bc5c:;
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_51bd28; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51bcc0; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51bcc0; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51bcc0; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0xcu);
    if (COND_HI) { goto L_51bcc0; }
    { uint32_t r = c->r[4] & shc_lsl(c, c->r[14], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51bcc0; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD16(ea); c->r[6] = v; }
    c->r[5] = (uint32_t)(uint8_t)(c->r[12]);
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[2] + (c->r[5] << 1);
    { uint32_t ea = c->r[5]; ST16(ea, c->r[6]); }
    c->r[5] = (uint32_t)(uint8_t)(c->r[12]);
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_CS) { goto L_51bd28; }
L_51bcc0:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51bc5c; }
    goto L_51bd28;
L_51bcd0:;
    c->r[2] = 0x1u;
    c->r[3] = 0x1866u;
L_51bcd8:;
    { uint32_t ea = c->r[0] + 0x55u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_51bd28; }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51bd1c; }
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51bd1c; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_51bd1c; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0xcu);
    if (COND_HI) { goto L_51bd1c; }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[5]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[12] = c->r[12] + 0x1u; }
L_51bd1c:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51bcd8; }
L_51bd28:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[12]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51bd30(Cpu *restrict c) {
    FN_ENTER(0x51bd30u);
L_51bd30:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_51bd34(Cpu *restrict c) {
    FN_ENTER(0x51bd34u);
L_51bd34:;
    c->r[0] = 0x1520928u;
    { uint32_t ea = 0x51bd40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_51bd44(Cpu *restrict c) {
    FN_ENTER(0x51bd44u);
L_51bd44:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x156e180u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x51bd70u + c->r[0];
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
    c->r[14] = 0x51bdccu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x51bde4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x51bdfcu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x151d10cu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0xe8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1520828u;
    { uint32_t ea = 0x51be38u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x12422c1u;
    { uint32_t ea = 0x51be40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x51be44u + c->r[1];
    c->r[14] = 0x51be44u; f_9aedcc(c);
    c->r[1] = 0x1520820u;
    { uint32_t ea = 0x51be50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51be70(Cpu *restrict c) {
    FN_ENTER(0x51be70u);
L_51be70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15207f0u;
    { uint32_t ea = 0x51be84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x51bea8u; f_51beb4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51beb4(Cpu *restrict c) {
    FN_ENTER(0x51beb4u);
L_51beb4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151cc70u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[12] = c->r[4] + 0x20u;
    { uint32_t ea = 0x51bedcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); }
    c->r[1] = 0x151dcccu;
    c->r[3] = 0x0u;
    c->r[12] = ~0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x44610000u;
    { uint32_t ea = 0x51bf10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x42u; ST16(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[4] + 0x44u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x46u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x47u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST16(ea, c->r[1]); }
    c->r[1] = 0x6u;
    c->r[2] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0x4eu; ST8(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x53u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] - 0x4u; ST8(ea, c->r[5]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x7u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x8u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x9u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0xdu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x15u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x11u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x19u; ST32(ea, c->r[3]); }
    c->r[3] = 0x151d2acu;
    { uint32_t ea = c->r[1] + 0x1du; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x51bfa8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x21u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x25u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x27u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x29u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x31u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2du; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x35u; ST32(ea, c->r[3]); }
    c->r[2] = 0x3f800000u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[1] + 0x39u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3du; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x45u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x41u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x47u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x49u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x4du; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x51u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x55u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x59u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x5du; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x61u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x65u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x69u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x6du; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x71u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x75u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[14] = 0x51c028u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51c03c(Cpu *restrict c) {
    FN_ENTER(0x51c03cu);
L_51c03c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1520624u;
    { uint32_t ea = 0x51c050u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51c06c; }
    c->r[14] = 0x51c064u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
L_51c06c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51c078(Cpu *restrict c) {
    FN_ENTER(0x51c078u);
L_51c078:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15205e8u;
    { uint32_t ea = 0x51c08cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51c0a0; }
    c->r[14] = 0x51c0a0u; f_a87660(c);
L_51c0a0:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_51c0b0(Cpu *restrict c) {
    FN_ENTER(0x51c0b0u);
L_51c0b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x15205a0u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[1];
    c->r[2] = 0x70u;
    c->r[1] = c->r[5] + 0x40u;
    { uint32_t ea = 0x51c0d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x51c15cu; f_15efff8(c);
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_51c194; }
    c->r[14] = 0x51c194u; f_a87648(c);
L_51c194:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51c1a0(Cpu *restrict c) {
    FN_ENTER(0x51c1a0u);
L_51c1a0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = 0x0u;
    c->r[2] = 0x70u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x51c22cu; f_15efff8(c);
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51c264; }
    c->r[14] = 0x51c260u; f_a87660(c);
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[6]); }
L_51c264:;
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_51c278; }
    c->r[14] = 0x51c278u; f_a87648(c);
L_51c278:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51c280(Cpu *restrict c) {
    FN_ENTER(0x51c280u);
L_51c280:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[6] = c->r[0];
    c->r[3] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_51c2ac;
L_51c2a0:;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[2] | sh_lsl(c->r[1], c->r[3]); }
    c->r[3] = c->r[3] + 0x1u;
L_51c2ac:;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[2] | sh_lsl(c->r[1], c->r[3]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], 0x1fu);
    if (COND_NE) { goto L_51c2a0; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    c->r[3] = 0x0u;
    goto L_51c2e0;
L_51c2d4:;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[3] = c->r[3] | sh_lsl(c->r[1], c->r[4]); }
    c->r[4] = c->r[4] + 0x1u;
L_51c2e0:;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[3] = c->r[3] | sh_lsl(c->r[1], c->r[4]); }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x19u);
    if (COND_NE) { goto L_51c2d4; }
    c->r[1] = c->r[5] + 0x10u;
    c->r[0] = c->r[6];
    c->r[14] = 0x51c300u; f_51c3a8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51c338; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xbcu; ST32(ea, c->r[0]); }
L_51c338:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51c358; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xc0u; ST32(ea, c->r[0]); }
L_51c358:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[6] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xc4u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51c380; }
    c->r[14] = 0x51c378u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xc4u; ST32(ea, c->r[0]); }
L_51c380:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xc4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_51c3a4; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
L_51c3a4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51c3a8(Cpu *restrict c) {
    FN_ENTER(0x51c3a8u);
L_51c3a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[12] = 0x0u;
    c->r[14] = 0x1u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c3c0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x8000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[4]); }
L_51c3d8:;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51c848; }
L_51c3e0:;
    (void)f_subs(c, c->r[12], 0x1eu);
    if (COND_HI) { goto L_51c848; }
    c->r[4] = (c->r[12] << 2);
    c->r[5] = 0x51c3f4u + 0x4u;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->pc = c->r[4] + c->r[5]; switch (c->pc) { case 0x51c3c0u: goto L_51c3c0; case 0x51c474u: goto L_51c474; case 0x51c4b0u: goto L_51c4b0; case 0x51c4ecu: goto L_51c4ec; case 0x51c510u: goto L_51c510; case 0x51c534u: goto L_51c534; case 0x51c558u: goto L_51c558; case 0x51c57cu: goto L_51c57c; case 0x51c5a0u: goto L_51c5a0; case 0x51c5c4u: goto L_51c5c4; case 0x51c5e8u: goto L_51c5e8; case 0x51c60cu: goto L_51c60c; case 0x51c630u: goto L_51c630; case 0x51c654u: goto L_51c654; case 0x51c678u: goto L_51c678; case 0x51c69cu: goto L_51c69c; case 0x51c6c0u: goto L_51c6c0; case 0x51c6e4u: goto L_51c6e4; case 0x51c708u: goto L_51c708; case 0x51c72cu: goto L_51c72c; case 0x51c750u: goto L_51c750; case 0x51c774u: goto L_51c774; case 0x51c798u: goto L_51c798; case 0x51c7bcu: goto L_51c7bc; case 0x51c7e0u: goto L_51c7e0; case 0x51c804u: goto L_51c804; case 0x51c828u: goto L_51c828; case 0x51c848u: goto L_51c848; case 0x51c858u: goto L_51c858; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51c474:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[4] = c->r[4] | 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c4b0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[4] = c->r[4] | 0x2u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[4]); }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c4ec:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x4u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x40u; ST16(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c510:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x36u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x8u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x46u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c534:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x37u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x10u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x47u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c558:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x32u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x20u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x42u; ST16(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c57c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x80u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x48u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c5a0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x39u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x100u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x49u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c5c4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3au; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x200u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4au; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c5e8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3bu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x400u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4bu; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c60c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x800u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c630:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x46u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x56u; ST16(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c654:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x2000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x60u; ST16(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c678:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3eu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4eu; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c69c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c6c0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x80u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c6e4:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[4] = c->r[4] | 0x20000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c708:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x40000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c72c:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x80000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c750:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x42u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x100000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x52u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c774:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x52u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x200000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x62u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c798:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x400000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x50u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c7bc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x43u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x800000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x53u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c7e0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x53u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x63u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c804:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x2000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x64u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
    goto L_51c848;
L_51c828:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x55u; uint32_t v = LD8(ea); c->r[4] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[5] = c->r[5] | 0x4000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x65u; ST8(ea, c->r[4]); }
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[14], c->r[12]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c3e0; }
L_51c848:;
    c->r[12] = c->r[12] + 0x1u;
    (void)f_subs(c, c->r[12], 0x1fu);
    if (COND_NE) { goto L_51c3d8; }
    goto L_51c89c;
L_51c858:;
    c->v.s[0] = LD32(c->r[1] + 32u);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[2] = LD32(c->r[1] + 36u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[4] = LD32(c->r[1] + 40u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x40000000u;
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    c->v.f[4] = c->v.f[10] * c->v.f[4];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 48u, c->v.s[0]);
    ST32(c->r[0] + 52u, c->v.s[2]);
    ST32(c->r[0] + 56u, c->v.s[4]);
L_51c89c:;
    c->r[12] = c->r[0] + 0x9cu;
    c->r[14] = c->r[1] + 0x8cu;
    c->r[2] = 0x0u;
    c->r[4] = 0x1u;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51c8b8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x88u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x800000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x98u; ST32(ea, c->r[5]); }
L_51c8d0:;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51cc44; }
L_51c8d8:;
    (void)f_subs(c, c->r[2], 0x18u);
    if (COND_HI) { goto L_51cc44; }
    c->r[5] = (c->r[2] << 2);
    c->r[6] = 0x51c8ecu + 0x4u;
    { uint32_t ea = c->r[5] + c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->pc = c->r[5] + c->r[6]; switch (c->pc) { case 0x51c8b8u: goto L_51c8b8; case 0x51c954u: goto L_51c954; case 0x51c978u: goto L_51c978; case 0x51c99cu: goto L_51c99c; case 0x51c9c0u: goto L_51c9c0; case 0x51c9e4u: goto L_51c9e4; case 0x51ca08u: goto L_51ca08; case 0x51ca2cu: goto L_51ca2c; case 0x51ca50u: goto L_51ca50; case 0x51ca74u: goto L_51ca74; case 0x51ca98u: goto L_51ca98; case 0x51cabcu: goto L_51cabc; case 0x51cae0u: goto L_51cae0; case 0x51cb04u: goto L_51cb04; case 0x51cb28u: goto L_51cb28; case 0x51cb4cu: goto L_51cb4c; case 0x51cb70u: goto L_51cb70; case 0x51cb94u: goto L_51cb94; case 0x51cbb8u: goto L_51cbb8; case 0x51cbdcu: goto L_51cbdc; case 0x51cc00u: goto L_51cc00; case 0x51cc24u: goto L_51cc24; case 0x51cc44u: goto L_51cc44; case 0x51cc54u: goto L_51cc54; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_51c954:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x1u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x74u; ST16(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51c978:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x66u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x2u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x76u; ST16(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51c99c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x56u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x4u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x66u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51c9c0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x57u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x8u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x67u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51c9e4:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x84u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x10u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x94u; ST16(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51ca08:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[5] = c->r[5] | 0x40u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51ca2c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x100u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51ca50:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x71u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x200u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x81u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51ca74:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x80u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x400u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x90u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51ca98:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x82u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x800u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x92u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cabc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x73u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x1000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x83u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cae0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x83u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x2000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x93u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cb04:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[5] = c->r[5] | 0x4000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); c->r[8] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[8]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cb28:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x7cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x8000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cb4c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x10000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cb70:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x81u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x20000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x91u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cb94:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x40000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cbb8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x80000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cbdc:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x72u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x100000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x82u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cc00:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x41u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x200000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x51u; ST8(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
    goto L_51cc44;
L_51cc24:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x86u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = c->r[6] | 0x400000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x96u; ST16(ea, c->r[5]); }
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[4], c->r[2]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_51c8d8; }
L_51cc44:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x19u);
    if (COND_NE) { goto L_51c8d0; }
    goto L_51cc68;
L_51cc54:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x1000000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xacu; ST32(ea, c->r[1]); }
L_51cc68:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51cc6c(Cpu *restrict c) {
    FN_ENTER(0x51cc6cu);
L_51cc6c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = 0x0u;
    c->r[14] = 0x1u;
    c->r[2] = 0x0u;
    goto L_51cc90;
L_51cc84:;
    { uint32_t r = c->r[12] & shc_lsl(c, c->r[14], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[2] = c->r[2] | sh_lsl(c->r[14], c->r[3]); }
    c->r[3] = c->r[3] + 0x1u;
L_51cc90:;
    { uint32_t r = c->r[12] & shc_lsl(c, c->r[14], c->r[3]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[2] = c->r[2] | sh_lsl(c->r[14], c->r[3]); }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], 0x1fu);
    if (COND_NE) { goto L_51cc84; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[4] = 0x0u;
    c->r[14] = 0x1u;
    c->r[3] = 0x0u;
    goto L_51ccc4;
L_51ccb8:;
    { uint32_t r = c->r[12] & shc_lsl(c, c->r[14], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = c->r[3] | sh_lsl(c->r[14], c->r[4]); }
    c->r[4] = c->r[4] + 0x1u;
L_51ccc4:;
    { uint32_t r = c->r[12] & shc_lsl(c, c->r[14], c->r[4]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[3] = c->r[3] | sh_lsl(c->r[14], c->r[4]); }
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x19u);
    if (COND_NE) { goto L_51ccb8; }
    c->r[2] = c->r[2] | 0x40000000u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_51c3a8(c);
}
void f_51cce4(Cpu *restrict c) {
    FN_ENTER(0x51cce4u);
L_51cce4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x151c7b4u;
    { uint32_t ea = 0x51ccf4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51ccf8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x154u;
    c->pc = c->r[4]; c->r[14] = 0x51cd10u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x151f954u;
    c->r[1] = ~0x0u;
    { uint32_t ea = 0x51cd24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    c->r[1] = 0x80u;
    c->r[14] = 0x51cd60u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0xb4u;
    c->r[1] = 0x91u;
    c->r[14] = 0x51cd6cu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51cd7c(Cpu *restrict c) {
    FN_ENTER(0x51cd7cu);
L_51cd7c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x151c714u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x51cd94u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x51cd98u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_51cdb8(Cpu *restrict c) {
    FN_ENTER(0x51cdb8u);
L_51cdb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151f8a8u;
    c->r[2] = ~0x0u;
    { uint32_t ea = 0x51cdd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    c->r[1] = 0x80u;
    c->r[14] = 0x51ce10u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0xb8u;
    c->r[1] = 0x8du;
    c->r[14] = 0x51ce1cu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51ce28(Cpu *restrict c) {
    FN_ENTER(0x51ce28u);
L_51ce28:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151f83cu;
    { uint32_t ea = 0x51ce3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51ce58; }
    c->r[14] = 0x51ce50u; f_9af3c4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
L_51ce58:;
    c->r[8] = 0x0u;
    c->r[6] = 0x0u;
L_51ce60:;
    c->r[7] = c->r[4] + (c->r[6] << 2);
    { uint32_t ea = c->r[7] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cea8; }
    c->r[5] = 0x0u;
L_51ce74:;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51ce8c; }
    c->r[0] = c->r[1];
    c->r[14] = 0x51ce88u; f_9af3c4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
L_51ce8c:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x100u);
    if (COND_NE) { goto L_51ce74; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cea4; }
    c->r[14] = 0x51cea4u; f_9af3e4(c);
L_51cea4:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[8]); }
L_51cea8:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_NE) { goto L_51ce60; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51cebcu; f_51cec8(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_51cec8(Cpu *restrict c) {
    FN_ENTER(0x51cec8u);
L_51cec8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cee8; }
    c->r[14] = 0x51cee0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
L_51cee8:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf00; }
    c->r[14] = 0x51cef8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_51cf00:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf18; }
    c->r[14] = 0x51cf10u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_51cf18:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf30; }
    c->r[14] = 0x51cf28u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_51cf30:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf48; }
    c->r[14] = 0x51cf40u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_51cf48:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf60; }
    c->r[14] = 0x51cf58u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
L_51cf60:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf78; }
    c->r[14] = 0x51cf70u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
L_51cf78:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cf90; }
    c->r[14] = 0x51cf88u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
L_51cf90:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cfa8; }
    c->r[14] = 0x51cfa0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_51cfa8:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cfc0; }
    c->r[14] = 0x51cfb8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
L_51cfc0:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cfd8; }
    c->r[14] = 0x51cfd0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_51cfd8:;
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51cff0; }
    c->r[14] = 0x51cfe8u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
L_51cff0:;
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d008; }
    c->r[14] = 0x51d000u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); }
L_51d008:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d020; }
    c->r[14] = 0x51d018u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
L_51d020:;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d038; }
    c->r[14] = 0x51d030u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_51d038:;
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d050; }
    c->r[14] = 0x51d048u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
L_51d050:;
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x151c448u;
    { uint32_t ea = 0x51d068u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51d06cu; f_526c78(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51d07c(Cpu *restrict c) {
    FN_ENTER(0x51d07cu);
L_51d07c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x151f5e8u;
    { uint32_t ea = 0x51d090u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d0ac; }
    c->r[14] = 0x51d0a4u; f_9af3c4(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
L_51d0ac:;
    c->r[8] = 0x0u;
    c->r[6] = 0x0u;
L_51d0b4:;
    c->r[7] = c->r[4] + (c->r[6] << 2);
    { uint32_t ea = c->r[7] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d0fc; }
    c->r[5] = 0x0u;
L_51d0c8:;
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51d0e0; }
    c->r[0] = c->r[1];
    c->r[14] = 0x51d0dcu; f_9af3c4(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
L_51d0e0:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x100u);
    if (COND_NE) { goto L_51d0c8; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d0f8; }
    c->r[14] = 0x51d0f8u; f_9af3e4(c);
L_51d0f8:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[8]); }
L_51d0fc:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_NE) { goto L_51d0b4; }
    c->r[0] = c->r[4];
    c->r[14] = 0x51d110u; f_51cec8(c);
    c->r[0] = 0x151c38cu;
    { uint32_t ea = 0x51d11cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x51d11cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_51d138(Cpu *restrict c) {
    FN_ENTER(0x51d138u);
L_51d138:;
    return;
}
void f_51d13c(Cpu *restrict c) {
    FN_ENTER(0x51d13cu);
L_51d13c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_51d140(Cpu *restrict c) {
    FN_ENTER(0x51d140u);
L_51d140:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0xe0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d1e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x51d174u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_51d1e4; }
    c->r[8] = c->r[13] + 0x10u;
    c->r[0] = c->r[8];
    c->r[14] = 0x51d188u; f_51be70(c);
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x51d198u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->pc = c->r[7]; c->r[14] = 0x51d1c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[4] + (c->r[5] << 2); }
    if (COND_NE) { c->r[1] = c->r[1] + 0xc4u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x51d1e4u; f_51c03c(c);
L_51d1e4:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_51d1ec(Cpu *restrict c) {
    FN_ENTER(0x51d1ecu);
L_51d1ec:;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    return;
}
void f_51d200(Cpu *restrict c) {
    FN_ENTER(0x51d200u);
L_51d200:;
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    return;
}
void f_51d214(Cpu *restrict c) {
    FN_ENTER(0x51d214u);
L_51d214:;
    return;
}
void f_51d218(Cpu *restrict c) {
    FN_ENTER(0x51d218u);
L_51d218:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 16u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d2f8; }
    c->r[0] = 0x0u;
    c->r[1] = 0xfff0u;
L_51d240:;
    c->r[2] = c->r[4] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[0], 0x20u);
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & c->r[1];
    { uint32_t ea = c->r[2] + 0xc8u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_51d240; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x51d284u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51d2e0; }
    c->r[0] = 0x0u;
L_51d298:;
    c->r[2] = c->r[4] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[0], 0x20u);
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] | c->r[1];
    { uint32_t ea = c->r[2] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[2] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_51d298; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = ~0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); } }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
L_51d2e0:;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_51d300; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    goto L_51d31c;
L_51d2f8:;
    c->r[5] = 0x0u;
    goto L_51d51c;
L_51d300:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x51d310u; rt_dispatch(c);
    c->r[0] = 0x0u;
    ST32(c->r[4] + 36u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
L_51d31c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x51d32cu; rt_dispatch(c);
    ST32(c->r[4] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51d3a0; }
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->r[5] = 0x1u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_51d51c; }
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->r[0] = c->r[4] + 0x24u;
    c->r[9] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_51d3d4; }
    c->r[1] = 0x0u;
L_51d370:;
    c->r[2] = c->r[4] + (c->r[1] << 2);
    c->r[1] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[1], 0x20u);
    { uint32_t ea = c->r[2] + 0xc4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8u;
    { uint32_t ea = c->r[2] + 0xc4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x8u;
    { uint32_t ea = c->r[2] + 0xc8u; ST32(ea, c->r[3]); }
    if (COND_NE) { goto L_51d370; }
    c->r[9] = 0x1u;
    goto L_51d3d4;
L_51d3a0:;
    c->r[0] = 0x0u;
L_51d3a4:;
    c->r[1] = c->r[4] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[0], 0x20u);
    { uint32_t ea = c->r[1] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[1] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x4u;
    { uint32_t ea = c->r[1] + 0xc8u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_51d3a4; }
    c->r[0] = c->r[4] + 0x24u;
    c->r[9] = 0x0u;
L_51d3d4:;
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->r[5] = 0x1u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[4] + 0x144u; ST8(ea, c->r[5]); }
    c->r[1] = (c->r[0] >> 8) & 0xfu;
    c->r[7] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[4] + 0x148u;
    c->r[6] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->v.s[16] = vcvt_s32_f64(ceil((double)c->v.f[2]));
    c->v.s[18] = vcvt_s32_f64(ceil((double)c->v.f[0]));
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d518; }
    c->r[1] = c->r[7];
    c->r[14] = 0x51d41cu; f_524aa8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[10], 0x0u); }
    if (COND_EQ) { goto L_51d518; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d448; }
    { uint32_t ea = c->r[0] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[10] = c->r[0]; }
L_51d448:;
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD8(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_51d480; }
    c->r[1] = c->r[10];
    c->r[2] = 0x14cu;
    c->r[14] = 0x51d468u; f_15efdd0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x51d47cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[10] = v; }
L_51d480:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_51d518; }
    c->r[2] = c->v.s[16];
    c->r[6] = c->v.s[18];
    c->r[7] = c->r[11] - 0x1u;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_51d504; }
    c->r[3] = c->r[7] - c->r[2];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x51d4b8u; f_51d530(c);
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x51d4c8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d500; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x51d4dcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[6];
    if (COND_EQ) { goto L_51d504; }
    c->r[1] = 0x508u;
    c->r[0] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[2] = c->v.s[0];
    goto L_51d504;
L_51d500:;
    c->r[2] = c->r[6];
L_51d504:;
    c->r[3] = c->r[6] - c->r[2];
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0x51d518u; f_51d530(c);
L_51d518:;
    { uint32_t ea = c->r[4] + 0x144u; ST8(ea, c->r[8]); }
L_51d51c:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->r[13] = c->r[13] + 16u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_51d530(Cpu *restrict c) {
    FN_ENTER(0x51d530u);
L_51d530:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x84u;
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[0] = c->r[3];
    if (COND_GE) { c->r[0] = 0x20u; }
    (void)f_subs(c, c->r[3], 0x1u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_51d6ac; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x144u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 1);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_51d5e8; }
    { uint32_t ea = c->r[9] + 0x148u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0x0u;
    c->r[12] = c->r[13] + 0x4u;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
L_51d580:;
    c->r[6] = c->r[7] + (c->r[5] << 2);
    (void)f_subs(c, c->r[4], c->r[2]);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12] + (c->r[3] << 2); ST32(ea, c->r[14]); }
    c->r[6] = c->r[6] + c->r[4];
    if (COND_LE) { (void)f_subs(c, c->r[2], c->r[6]); }
    if (COND_LT) { goto L_51d5a8; }
    c->r[4] = c->r[6];
    c->r[6] = c->r[5];
    goto L_51d5d8;
L_51d5a8:;
    { uint32_t ea = c->r[7] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[12] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GE) { goto L_51d5ec; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[6] = ~0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GE) { c->r[4] = c->r[14]; }
    if (COND_LT) { c->r[6] = c->r[5] - 0x2u; }
    if (COND_GE) { c->r[2] = c->r[14]; }
L_51d5d8:;
    c->r[5] = c->r[6] + 0x2u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_51d580; }
    goto L_51d5ec;
L_51d5e8:;
    c->r[3] = 0x0u;
L_51d5ec:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LE) { goto L_51d610; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x4u;
    c->r[0] = c->r[0] + (c->r[3] << 2);
    c->r[1] = c->r[1] - c->r[3];
    c->r[1] = (c->r[1] << 2);
    c->r[14] = 0x51d610u; f_15efd7c(c);
L_51d610:;
    { uint32_t ea = c->r[10] + 0xbcu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = 0x0u;
    c->r[4] = 0x1u;
    c->r[11] = c->r[13] + 0x4u;
L_51d620:;
    c->r[6] = 0x0u;
L_51d624:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[4], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d688; }
    { uint32_t ea = c->r[11] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = sh_lsl(c->r[4], c->r[6]);
    c->r[0] = c->r[1] & c->r[8];
    c->r[1] = c->r[2] & c->r[1];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_51d65c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d688; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_51d674;
L_51d65c:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d670; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_51d674;
L_51d670:;
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
L_51d674:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->pc = c->r[7]; c->r[14] = 0x51d688u; rt_dispatch(c);
L_51d688:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x20u);
    if (COND_NE) { goto L_51d624; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LT) { goto L_51d620; }
    { uint32_t ea = c->r[10] + 0xbcu; ST32(ea, c->r[8]); }
L_51d6ac:;
    c->r[13] = c->r[13] + 0x84u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_51d6b4(Cpu *restrict c) {
    FN_ENTER(0x51d6b4u);
L_51d6b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0] + (c->r[2] << 2);
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d6d8; }
    c->r[14] = 0x51d6d0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_51d6d8:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
}
void f_51d6f0(Cpu *restrict c) {
    FN_ENTER(0x51d6f0u);
L_51d6f0:;
    { uint32_t ea = c->r[0] + 0xb4u; ST32(ea, c->r[1]); }
    return;
}
void f_51d6f8(Cpu *restrict c) {
    FN_ENTER(0x51d6f8u);
L_51d6f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[0] = 0x14cu;
    c->r[14] = 0x51d714u; f_9af37c(c);
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51d71c(Cpu *restrict c) {
    FN_ENTER(0x51d71cu);
L_51d71c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_51d720(Cpu *restrict c) {
    FN_ENTER(0x51d720u);
L_51d720:;
    c->r[0] = 0x151bd7cu;
    { uint32_t ea = 0x51d72cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_51d730(Cpu *restrict c) {
    FN_ENTER(0x51d730u);
L_51d730:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x156c81cu;
    c->r[1] = 0x0u;
    c->r[2] = 0x1u;
    c->r[3] = 0x5u;
    c->r[12] = 0x6u;
    c->r[0] = 0x51d754u + c->r[0];
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
    c->r[1] = 0x151b3b4u;
    c->r[3] = 0x154u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0x151bcf0u;
    { uint32_t ea = 0x51d7b0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x12390b7u;
    { uint32_t ea = 0x51d7b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x51d7bcu + c->r[1];
    c->r[14] = 0x51d7bcu; f_9aedcc(c);
    c->r[1] = 0x151eeb4u;
    { uint32_t ea = 0x51d7c8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_51d7e8(Cpu *restrict c) {
    FN_ENTER(0x51d7e8u);
L_51d7e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_51d82c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x51d80cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_51d82c; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
L_51d82c:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_51d834(Cpu *restrict c) {
    FN_ENTER(0x51d834u);
L_51d834:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x76u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_NE) { goto L_51d924; }
    { uint32_t ea = c->r[1] + 0xc6u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x151ba04u;
    { uint32_t ea = 0x51d858u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_EQ) { goto L_51d870; }
    { uint32_t ea = c->r[12] + 0x60u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d870:;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d888; }
    { uint32_t ea = c->r[12] + 0x210u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d888:;
    { uint32_t r = c->r[2] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d8a0; }
    { uint32_t ea = c->r[12] + 0x3c0u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d8a0:;
    { uint32_t r = c->r[2] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d8b8; }
    { uint32_t ea = c->r[12] + 0x570u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x3u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d8b8:;
    { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d8d0; }
    { uint32_t ea = c->r[12] + 0x720u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x4u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d8d0:;
    { uint32_t r = c->r[2] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d8e8; }
    { uint32_t ea = c->r[12] + 0x8d0u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x5u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d8e8:;
    { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_51d900; }
    { uint32_t ea = c->r[12] + 0xa80u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x6u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_51d918; }
L_51d900:;
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[12] + 0xc30u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = 0x7u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_51d924; }
L_51d918:;
    c->r[0] = 0x1b0u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[12]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
L_51d924:;
    return;
}
