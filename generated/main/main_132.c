#include "cpu.h"
#include "neon_rt.h"
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9bb638(Cpu *c);
void f_a0c234(Cpu *c);
void f_a0c640(Cpu *c);
void f_a0c710(Cpu *c);
void f_a0c93c(Cpu *c);
void f_a0dbbc(Cpu *c);
void f_a103b8(Cpu *c);
void f_a106e8(Cpu *c);
void f_a10914(Cpu *c);
void f_a10bec(Cpu *c);
void f_a20a9c(Cpu *c);
void f_a20adc(Cpu *c);
void f_a20e84(Cpu *c);
void f_a20ec0(Cpu *c);
void f_a20eec(Cpu *c);
void f_a20f3c(Cpu *c);
void f_a20fb0(Cpu *c);
void f_a21314(Cpu *c);
void f_a213d4(Cpu *c);
void f_a214e4(Cpu *c);
void f_a22460(Cpu *c);
void f_a225a8(Cpu *c);
void f_a22c54(Cpu *c);
void f_a22dec(Cpu *c);
void f_a22edc(Cpu *c);
void f_a22fcc(Cpu *c);
void f_a239a0(Cpu *c);
void f_a239a8(Cpu *c);
void f_a23ac8(Cpu *c);
void f_a23b2c(Cpu *c);
void f_a23b60(Cpu *c);
void f_a23ca0(Cpu *c);
void f_a24060(Cpu *c);
void f_a24378(Cpu *c);
void f_a2442c(Cpu *c);
void f_a245c8(Cpu *c);
void f_a24afc(Cpu *c);
void f_a251d0(Cpu *c);
void f_a25390(Cpu *c);
void f_a25550(Cpu *c);
void f_a2579c(Cpu *c);
void f_a25964(Cpu *c);
void f_a25a38(Cpu *c);
void f_a25f78(Cpu *c);
void f_a292ec(Cpu *c);
void f_a29e28(Cpu *c);
void f_a2b004(Cpu *c);
void f_a2b0e4(Cpu *c);
void f_a2b1ec(Cpu *c);
void f_a3e7f8(Cpu *c);
void f_a3eb74(Cpu *c);
void f_a41bb8(Cpu *c);
void f_a41c48(Cpu *c);
void f_a42c5c(Cpu *c);
void f_1426f00(Cpu *c);
void f_14297a4(Cpu *c);
void f_14297ec(Cpu *c);
void f_150704c(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efd88(Cpu *c);
void f_15efd94(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdb8(Cpu *c);
void f_15efe00(Cpu *c);
void f_15efe0c(Cpu *c);
void f_15efe30(Cpu *c);
void f_15eff44(Cpu *c);
void f_15eff50(Cpu *c);
void f_15eff5c(Cpu *c);
void f_15effa4(Cpu *c);
void f_15effb0(Cpu *c);
void f_15f004c(Cpu *c);
void f_15f0088(Cpu *c);
void f_15f00a0(Cpu *c);
void f_15f03e8(Cpu *c);
void f_15f03f4(Cpu *c);
void f_15f0400(Cpu *c);
void f_15f040c(Cpu *c);
void f_15f0418(Cpu *c);
void f_15f0424(Cpu *c);
void f_15f0430(Cpu *c);
void f_15f043c(Cpu *c);
void f_15f0448(Cpu *c);
void f_15f0454(Cpu *c);
void f_15f0460(Cpu *c);
void f_15f046c(Cpu *c);
void f_15f0478(Cpu *c);
void f_15f0484(Cpu *c);
void f_15f0490(Cpu *c);
void f_15f049c(Cpu *c);
void f_15f04a8(Cpu *c);
void f_15f04b4(Cpu *c);
void f_15f04c0(Cpu *c);
void f_a2082c(Cpu *restrict c) {
    FN_ENTER(0xa2082cu);
L_a2082c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[0];
    c->r[5] = c->r[1];
    c->r[2] = 0xcccdu;
    c->r[6] = 0x6666u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xcccc0000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x6660000u;
    c->r[0] = c->r[0] - c->r[1];
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 3);
    { uint32_t r = c->r[0] * c->r[2]; c->r[7] = r; }
    c->r[0] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_a20a74; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] - c->r[1];
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 3);
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    c->r[2] = 0x3332u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x3330000u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { goto L_a2089c; }
    c->r[6] = (c->r[1] << 1);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CC) { c->r[6] = c->r[0]; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a20a68; }
L_a2089c:;
    c->r[0] = c->r[6] + (c->r[6] << 2);
    c->r[0] = (c->r[0] << 3);
    c->r[14] = 0xa208a8u; f_14297a4(c);
L_a208a8:;
    c->r[1] = 0x10207d4u;
    c->r[2] = c->r[7] + (c->r[7] << 2);
    { uint32_t ea = 0xa208b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[1] + 0x8u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + (c->r[2] << 3); ST32(ea, c->r[3]); c->r[1] = ea; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[12] = c->r[1] + 0x28u;
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[2]); }
    c->r[2] = 0x10207b0u;
    { uint32_t ea = 0xa208e0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xdu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xdu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xeu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xeu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xfu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xfu; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x22u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x22u; ST16(ea, c->r[2]); }
    c->r[2] = 0x1020744u;
    { uint32_t ea = 0xa20940u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1020738u;
    { uint32_t ea = 0xa20950u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[6] + (c->r[6] << 2);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[0] + (c->r[2] << 3);
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_a20a28; }
    c->r[0] = 0x1020710u;
    c->r[7] = 0x1020708u;
    { uint32_t ea = 0xa2097cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa20980u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = c->r[0] + 0x8u;
    c->r[0] = 0x1020700u;
    c->r[7] = c->r[7] + 0x8u;
    { uint32_t ea = 0xa20990u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x8u;
    c->r[0] = 0x10206e8u;
    { uint32_t ea = 0xa2099cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
L_a2099c:;
    { uint32_t ea = c->r[1] - 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[3] - 0x24u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x24u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x23u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x23u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[3] - 0x1cu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x1cu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x1bu; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x1bu; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x1au; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x1au; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x19u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x19u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] - 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] - 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] - 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] - 0x8u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[3] - 0x6u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[3] = c->r[3] - 0x28u;
    (void)f_subs(c, c->r[5], c->r[3]);
    { uint32_t ea = c->r[1] - 0x6u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[1] - 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x28u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] - 0x28u;
    if (COND_NE) { goto L_a2099c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_a20a2c;
L_a20a28:;
    c->r[6] = c->r[5];
L_a20a2c:;
    (void)f_subs(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    if (COND_EQ) { goto L_a20a50; }
L_a20a38:;
    { uint32_t ea = c->r[5] - 0x28u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa20a48u; rt_dispatch(c);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_a20a38; }
L_a20a50:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a20a64; }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_14297ec(c);
L_a20a64:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_a20a68:;
    c->r[6] = 0x0u;
    c->r[0] = 0x0u;
    goto L_a208a8;
L_a20a74:;
    c->r[0] = c->r[8];
    c->r[14] = 0xa20a7cu; f_15eff5c(c);
    rt_udf(c, 0xa20a7cu);
}
void f_a20a9c(Cpu *restrict c) {
    FN_ENTER(0xa20a9cu);
L_a20a9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa20abcu; f_a20a9c(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa20ac8u; f_a20a9c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_14297ec(c);
}
void f_a20ad4(Cpu *restrict c) {
    FN_ENTER(0xa20ad4u);
L_a20ad4:;
    __attribute__((musttail)) return f_1426f00(c);
}
void f_a20ad8(Cpu *restrict c) {
    FN_ENTER(0xa20ad8u);
L_a20ad8:;
    __attribute__((musttail)) return f_1426f00(c);
}
void f_a20adc(Cpu *restrict c) {
    FN_ENTER(0xa20adcu);
L_a20adc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa20afcu; f_a20adc(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa20b08u; f_a20adc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_14297ec(c);
}
void f_a20b14(Cpu *restrict c) {
    FN_ENTER(0xa20b14u);
L_a20b14:;
    __attribute__((musttail)) return f_150704c(c);
}
void f_a20b18(Cpu *restrict c) {
    FN_ENTER(0xa20b18u);
L_a20b18:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[1] = 0x51u;
    c->r[5] = c->r[4] + 0x14u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa20b30u; f_15efdac(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a20b44(Cpu *restrict c) {
    FN_ENTER(0xa20b44u);
L_a20b44:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[14] = 0xc07u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x10000u;
    if (COND_EQ) { goto L_a20b64; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], c->r[3]);
    if (COND_CS) { goto L_a20b6c; }
L_a20b64:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a20b6c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_NE) { goto L_a20b8c; }
    c->r[5] = ~0x80000001u;
    c->r[5] = c->r[5] & (c->r[8] >> 1);
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_CC) { goto L_a20b64; }
    goto L_a20c28;
L_a20b8c:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_a20b64; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a20c28; }
    c->r[3] = 0x0u;
    c->r[5] = c->r[2];
L_a20ba8:;
    c->r[4] = (uint32_t)(int32_t)(int8_t)(c->r[6]);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_a20c08; }
    c->r[4] = c->r[6] + 0x3eu;
    c->r[7] = 0x2u;
    c->r[4] = (uint32_t)(uint8_t)(c->r[4]);
    (void)f_subs(c, c->r[4], 0x1eu);
    if (COND_CC) { goto L_a20c08; }
    c->r[4] = c->r[6] & 0xf0u;
    c->r[7] = 0x3u;
    (void)f_subs(c, c->r[4], 0xe0u);
    if (COND_EQ) { goto L_a20c08; }
    c->r[4] = c->r[6] & 0xf8u;
    c->r[7] = 0x4u;
    (void)f_subs(c, c->r[4], 0xf0u);
    if (COND_NE) { c->r[4] = c->r[6] & 0xfcu; }
    if (COND_NE) { c->r[7] = 0x5u; }
    if (COND_NE) { (void)f_subs(c, c->r[4], 0xf8u); }
    if (COND_EQ) { goto L_a20c08; }
    c->r[4] = c->r[6] & 0xfeu;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[4], 0xfcu);
    if (COND_EQ) { c->r[7] = 0x6u; }
L_a20c08:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->r[7] = 0x1u; }
    if (COND_NE) { c->r[3] = c->r[3] + 0x1u; }
    { uint32_t ea = c->r[5] + c->r[7]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_a20ba8; }
    (void)f_subs(c, c->r[3], (c->r[8] >> 2));
    if (COND_HI) { goto L_a20b64; }
L_a20c28:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_a20c54; }
    c->r[3] = c->r[1] + 0x14u;
    c->r[6] = 0x0u;
    c->r[5] = 0x0u;
L_a20c3c:;
    { uint32_t ea = c->r[3] + c->r[5]; ST8(ea, c->r[6]); }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_CC) { goto L_a20c3c; }
    goto L_a20c58;
L_a20c54:;
    c->r[7] = 0x0u;
L_a20c58:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_NE) { goto L_a20cb8; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a20d38; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_a20d3c; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[1] + 0x14u;
    c->r[5] = 0x0u;
L_a20c88:;
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[3] + c->r[7]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a20cac; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_CC) { goto L_a20c88; }
L_a20cac:;
    c->r[3] = c->r[7] + 0x1u;
    c->r[7] = c->r[3];
    goto L_a20d3c;
L_a20cb8:;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[12], 0x2u);
    if (COND_NE) { goto L_a20d48; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[14] = 0x0u;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a20d28; }
    (void)f_subs(c, c->r[7], 0x4u);
    c->r[3] = 0x0u;
    if (COND_CC) { goto L_a20d28; }
    c->r[2] = c->r[2] + 0x2u;
    c->r[3] = c->r[1] + 0x14u;
    c->r[6] = 0x0u;
    c->r[8] = ~0x80000001u;
L_a20cf4:;
    c->r[4] = c->r[6];
    c->r[6] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6]; ST16(ea, c->r[5]); }
    c->r[5] = c->r[2] + c->r[4];
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a20d24; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[4] + 0x2u;
    c->r[7] = c->r[8] & (c->r[7] >> 1);
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_CC) { goto L_a20cf4; }
L_a20d24:;
    c->r[3] = c->r[4] + 0x2u;
L_a20d28:;
    c->r[2] = c->r[1] + c->r[3];
    c->r[7] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[2] + 0x14u; ST8(ea, c->r[14]); }
    goto L_a20d3c;
L_a20d38:;
    c->r[7] = 0x0u;
L_a20d3c:;
    c->r[2] = c->r[1] + c->r[7];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[2] + 0x14u; ST8(ea, c->r[7]); }
L_a20d48:;
    c->r[2] = c->r[1] + 0x14u;
    c->r[14] = 0x0u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a20d64(Cpu *restrict c) {
    FN_ENTER(0xa20d64u);
L_a20d64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a20d84; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa20d84u; rt_dispatch(c);
L_a20d84:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_1426f00(c);
}
void f_a20d90(Cpu *restrict c) {
    FN_ENTER(0xa20d90u);
L_a20d90:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa20dacu; f_15efda0(c);
    c->r[1] = 0x10fe130u;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[5] = 0xa20dc0u + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0xa20dccu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa20de4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a20e08(Cpu *restrict c) {
    FN_ENTER(0xa20e08u);
L_a20e08:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1018600u;
    { uint32_t ea = 0xa20e18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa20e1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2cu;
    c->pc = c->r[4]; c->r[14] = 0xa20e34u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[0] = 0x1020240u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x1u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0xa20e54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa20e60u; f_15effb0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a20e84(Cpu *restrict c) {
    FN_ENTER(0xa20e84u);
L_a20e84:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x101857cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xa20e9cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa20ea0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a20ec0(Cpu *restrict c) {
    FN_ENTER(0xa20ec0u);
L_a20ec0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1018544u;
    { uint32_t ea = 0xa20ed4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa20ed4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a20eec(Cpu *restrict c) {
    FN_ENTER(0xa20eecu);
L_a20eec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1020184u;
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[5] = 0x1u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0xa20f10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa20f1cu; f_15effb0(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x18u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a20f3c(Cpu *restrict c) {
    FN_ENTER(0xa20f3cu);
L_a20f3c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1020144u;
    { uint32_t ea = 0xa20f50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[14] = 0xa20f5cu; f_15f004c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a20f68(Cpu *restrict c) {
    FN_ENTER(0xa20f68u);
L_a20f68:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1020118u;
    { uint32_t ea = 0xa20f7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x4u; }
    c->r[14] = 0xa20f88u; f_15f004c(c);
    c->r[0] = 0x1018484u;
    { uint32_t ea = 0xa20f94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa20f94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a20fb0(Cpu *restrict c) {
    FN_ENTER(0xa20fb0u);
L_a20fb0:;
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
    c->r[14] = 0xa20fe8u; f_9bb638(c);
    c->r[1] = 0xd4cdc9u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xa21000u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
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
    c->r[14] = 0xa21064u; f_9bb638(c);
    c->r[1] = 0xd4cd5fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21078u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x1cu;
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
    c->r[14] = 0xa210e4u; f_9bb638(c);
    c->r[1] = 0xd4cceau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa210f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
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
    c->r[14] = 0xa21158u; f_9bb638(c);
    c->r[1] = 0xd4cc81u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa2116cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
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
    c->r[14] = 0xa211d0u; f_9bb638(c);
    c->r[1] = 0xd4cc1fu;
    c->r[1] = 0xa211dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
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
void f_a21238(Cpu *restrict c) {
    FN_ENTER(0xa21238u);
L_a21238:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a21310; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2126c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa21260u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a2126c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[0] + 0x5u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x9u; ST8(ea, c->r[3]); }
    c->r[3] = c->r[14] | (c->r[3] << 8);
    { uint32_t ea = c->r[0] - 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x5u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x1u; ST8(ea, c->r[2]); }
    c->r[7] = c->r[12] | (c->r[7] << 8);
    { uint32_t ea = c->r[0] + 0x7u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[6] = c->r[2] | (c->r[1] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 16);
    c->r[6] = c->r[5];
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[3]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = c->r[2] | (c->r[1] << 8);
    c->r[3] = c->r[7] | (c->r[3] << 16);
    { uint32_t ea = c->r[5] + 0x4u; ST8(ea, c->r[3]); c->r[5] = ea; }
    { uint32_t ea = c->r[5] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x2u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a21310; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a21310:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a21314(Cpu *restrict c) {
    FN_ENTER(0xa21314u);
L_a21314:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2139c; }
    c->r[5] = c->r[4] + 0x4u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa21334u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[2] = c->r[4];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x20u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] - 0x7u; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a2139c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x20u; ST8(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] - 0x4u; ST8(ea, c->r[0]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a213d4(Cpu *restrict c) {
    FN_ENTER(0xa213d4u);
L_a213d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a214dc; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2140c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa21400u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a2140c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2141cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a214b4; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[5] + 0x9u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x5u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[10] = v; }
    c->r[2] = c->r[2] | (c->r[12] << 8);
    c->r[0] = c->r[9] | (c->r[10] << 8);
    c->r[14] = c->r[2] | (c->r[0] << 16);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[11] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[6] = c->r[6] | (c->r[8] << 8);
    c->r[2] = c->r[11] | (c->r[0] << 8);
    c->r[2] = c->r[6] | (c->r[2] << 16);
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x24u; ST8(ea, c->r[2]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0x4u; ST8(ea, c->r[14]); c->r[6] = ea; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[7] = c->r[1] | (c->r[5] << 8);
    c->r[2] = c->r[2] | (c->r[3] << 8);
    c->r[2] = c->r[2] | (c->r[7] << 16);
    { uint32_t ea = c->r[6] - 0x8u; ST8(ea, c->r[2]); c->r[6] = ea; }
    { uint32_t ea = c->r[6] + 0xbu; ST8(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0x7u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x6u; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[6] + 0x5u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
L_a214b4:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a214dc; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a214dc:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a214e4(Cpu *restrict c) {
    FN_ENTER(0xa214e4u);
L_a214e4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a21518; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2150cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a21518:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa21528u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[7]); } }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[6]); } }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); } }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2155c; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a2155c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a21560(Cpu *restrict c) {
    FN_ENTER(0xa21560u);
L_a21560:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a21564(Cpu *restrict c) {
    FN_ENTER(0xa21564u);
L_a21564:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa21584u; f_15efda0(c);
    c->r[1] = 0x10fd998u;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[5] = 0xa21598u + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0xa215a4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa215bcu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[1] = 0x101756cu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1017e18u;
    { uint32_t ea = 0xa215f8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd34ba7u;
    { uint32_t ea = 0xa21600u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa21604u + c->r[1];
    c->r[14] = 0xa21604u; f_9aedcc(c);
    c->r[1] = 0x101fa88u;
    { uint32_t ea = 0xa21610u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a21630(Cpu *restrict c) {
    FN_ENTER(0xa21630u);
L_a21630:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x101fa5cu;
    { uint32_t ea = 0xa21640u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa21644u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x180u;
    c->pc = c->r[4]; c->r[14] = 0xa2165cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xa21664u; f_a20eec(c);
    c->r[0] = 0x101fa30u;
    { uint32_t ea = 0xa21670u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0xa2167cu; f_a0c640(c);
    c->r[14] = 0xa21680u; f_a0c234(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x80u;
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x100u;
    c->r[14] = 0xa216a0u; f_15efdac(c);
    c->r[0] = c->r[4] + 0xa4u;
    c->r[1] = 0x41u;
    c->r[14] = 0xa216acu; f_15efdac(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a216bc(Cpu *restrict c) {
    FN_ENTER(0xa216bcu);
L_a216bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101f9d0u;
    { uint32_t ea = 0xa216d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x2cu; }
    c->r[14] = 0xa216dcu; f_a0dbbc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a20f3c(c);
}
void f_a216ec(Cpu *restrict c) {
    FN_ENTER(0xa216ecu);
L_a216ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101f9a0u;
    { uint32_t ea = 0xa21700u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x2cu; }
    c->r[14] = 0xa2170cu; f_a0dbbc(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa21714u; f_a20f3c(c);
    c->r[0] = 0x101f97cu;
    { uint32_t ea = 0xa21720u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa21720u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2173c(Cpu *restrict c) {
    FN_ENTER(0xa2173cu);
L_a2173c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[14] = 0xa21750u; f_a20fb0(c);
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21778u; f_9bb638(c);
    c->r[1] = 0xd4c68eu;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0xa21790u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x2cu;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa217f0u; f_9bb638(c);
    c->r[1] = 0xd318efu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21804u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xe8u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21868u; f_9bb638(c);
    c->r[1] = 0xd4c5abu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa2187cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xf0u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa218dcu; f_9bb638(c);
    c->r[1] = 0xd4c53du;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa218f0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0xf8u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21954u; f_9bb638(c);
    c->r[1] = 0xd4c4cfu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21968u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x100u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa219c8u; f_9bb638(c);
    c->r[1] = 0xd4c46cu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa219dcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x108u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21a40u; f_9bb638(c);
    c->r[1] = 0xd4c406u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21a54u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x110u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21ab4u; f_9bb638(c);
    c->r[1] = 0xd4c3a3u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21ac8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x118u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21b2cu; f_9bb638(c);
    c->r[1] = 0xd4c33du;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21b40u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x120u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21ba0u; f_9bb638(c);
    c->r[1] = 0xd4c2dau;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21bb4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x128u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21c18u; f_9bb638(c);
    c->r[1] = 0xd4c274u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21c2cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x130u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21c8cu; f_9bb638(c);
    c->r[1] = 0xd4c211u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21ca0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x138u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21d04u; f_9bb638(c);
    c->r[1] = 0xd4c1abu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21d18u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x140u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21d78u; f_9bb638(c);
    c->r[1] = 0xd4c148u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21d8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x148u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21df0u; f_9bb638(c);
    c->r[1] = 0xd4c0e2u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21e04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x150u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21e64u; f_9bb638(c);
    c->r[1] = 0xd4c07fu;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21e78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x158u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21edcu; f_9bb638(c);
    c->r[1] = 0xd4c019u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21ef0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x160u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21f50u; f_9bb638(c);
    c->r[1] = 0xd4bfb6u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21f64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x168u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa21fc8u; f_9bb638(c);
    c->r[1] = 0xd4bf50u;
    c->r[2] = c->r[8];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa21fdcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x170u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xa2203cu; f_9bb638(c);
    c->r[1] = 0xd4bef5u;
    c->r[1] = 0xa22048u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x178u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[11]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a220e0(Cpu *restrict c) {
    FN_ENTER(0xa220e0u);
L_a220e0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[14] = 0xa220ecu; f_a20eec(c);
    c->r[0] = 0x101ef98u;
    c->r[1] = 0x7ec0u;
    c->r[6] = c->r[8];
    c->r[5] = c->r[8] + 0x40u;
    c->r[4] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0xa2210cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); c->r[6] = c->r[6] + c->r[1]; }
    c->r[0] = 0x101ef84u;
    { uint32_t ea = 0xa2211cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x8u;
L_a2211c:;
    c->r[0] = c->r[5];
    c->r[14] = 0xa22124u; f_a20eec(c);
    c->r[0] = c->r[5] + 0x2cu;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[7]); }
    c->r[14] = 0xa22130u; f_a0c640(c);
    c->r[14] = 0xa22134u; f_a0c234(c);
    c->r[0] = c->r[5] + 0x100u;
    c->r[1] = 0x80u;
    { uint32_t ea = c->r[5] + 0xe8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xf0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xf4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xf8u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa22150u; f_15efdac(c);
    c->r[0] = c->r[5] + 0xa4u;
    c->r[1] = 0x41u;
    c->r[14] = 0xa2215cu; f_15efdac(c);
    c->r[5] = c->r[5] + 0x180u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_a2211c; }
    c->r[4] = 0x0u;
    c->r[5] = 0xffu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[8] + 0x2cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[4]); }
L_a22184:;
    c->r[7] = c->r[8] + c->r[6];
    c->r[0] = c->r[7] + 0x6cu;
    c->r[14] = 0xa22190u; f_a0c234(c);
    c->r[0] = c->r[7] + 0x140u;
    c->r[1] = 0x80u;
    { uint32_t ea = c->r[7] + 0x128u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x130u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x134u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x138u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa221acu; f_15efdac(c);
    c->r[0] = c->r[7] + 0xe4u;
    c->r[1] = 0x41u;
    c->r[14] = 0xa221b8u; f_15efdac(c);
    c->r[6] = c->r[6] + 0x180u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_a22184; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a221d4(Cpu *restrict c) {
    FN_ENTER(0xa221d4u);
L_a221d4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = 0x0u;
    c->r[4] = c->r[0] + 0xe4u;
    c->r[6] = 0xffu;
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[5]); }
L_a221f4:;
    c->r[0] = c->r[4] - 0x78u;
    c->r[14] = 0xa221fcu; f_a0c234(c);
    c->r[0] = c->r[4] + 0x5cu;
    c->r[1] = 0x80u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    c->r[14] = 0xa22218u; f_15efdac(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x41u;
    c->r[14] = 0xa22224u; f_15efdac(c);
    c->r[4] = c->r[4] + 0x180u;
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_a221f4; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22234(Cpu *restrict c) {
    FN_ENTER(0xa22234u);
L_a22234:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x101ee44u;
    c->r[1] = 0x7e80u;
    c->r[9] = 0x8180u;
    c->r[6] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[5] = c->r[8];
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xfffe0000u;
    { uint32_t ea = 0xa22260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + c->r[1]; }
    c->r[0] = 0x101ee30u;
    { uint32_t ea = 0xa22270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x8u;
L_a22270:;
    c->r[4] = c->r[5] + c->r[6];
    c->r[0] = c->r[4] - 0x114u;
    { uint32_t ea = c->r[4] - 0x140u; ST32(ea, c->r[7]); }
    c->r[14] = 0xa22280u; f_a0dbbc(c);
    c->r[0] = c->r[4] - 0x140u;
    c->r[14] = 0xa22288u; f_a20f3c(c);
    c->r[6] = c->r[6] - 0x180u;
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_NE) { goto L_a22270; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_a20f3c(c);
}
void f_a222a8(Cpu *restrict c) {
    FN_ENTER(0xa222a8u);
L_a222a8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[0];
    c->r[0] = 0x101edd4u;
    c->r[1] = 0x7d40u;
    c->r[6] = 0x8180u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[5] = c->r[8];
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xfffe0000u;
    { uint32_t ea = 0xa222d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); c->r[5] = c->r[5] + c->r[1]; }
    c->r[0] = 0x101edc0u;
    { uint32_t ea = 0xa222e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x8u;
L_a222e0:;
    c->r[4] = c->r[5];
    c->r[0] = c->r[5] + 0x2cu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); c->r[4] = c->r[4] - 0x180u; }
    c->r[14] = 0xa222f0u; f_a0dbbc(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa222f8u; f_a20f3c(c);
    c->r[6] = f_adds(c, c->r[6], 0x180u);
    c->r[5] = c->r[4];
    if (COND_NE) { goto L_a222e0; }
    c->r[0] = c->r[8];
    c->r[14] = 0xa2230cu; f_a20f3c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a20ec0(c);
}
void f_a2231c(Cpu *restrict c) {
    FN_ENTER(0xa2231cu);
L_a2231c:;
    return;
}
void f_a22320(Cpu *restrict c) {
    FN_ENTER(0xa22320u);
L_a22320:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_a22324(Cpu *restrict c) {
    FN_ENTER(0xa22324u);
L_a22324:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x101ed74u;
    { uint32_t ea = 0xa22334u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa22338u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xa8u;
    c->pc = c->r[4]; c->r[14] = 0xa22350u; rt_dispatch(c);
    c->r[4] = c->r[0];
    c->r[14] = 0xa22358u; f_a20eec(c);
    c->r[0] = 0x101ed48u;
    { uint32_t ea = 0xa22364u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x34u;
    c->r[14] = 0xa22378u; f_a23b2c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a22388(Cpu *restrict c) {
    FN_ENTER(0xa22388u);
L_a22388:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x101ed08u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xa223a0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa223a4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a223c4(Cpu *restrict c) {
    FN_ENTER(0xa223c4u);
L_a223c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0xa223d4u; f_a20eec(c);
    c->r[0] = 0x101ecc8u;
    c->r[6] = c->r[4];
    { uint32_t ea = 0xa223e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x8u;
    c->r[14] = 0xa223f8u; f_a23b2c(c);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_a22410; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa22410u; f_a41bb8(c);
L_a22410:;
    c->r[0] = 0x101eb40u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0xa22434u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa22438u; f_a10914(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xa4u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22460(Cpu *restrict c) {
    FN_ENTER(0xa22460u);
L_a22460:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101ec34u;
    c->r[5] = c->r[4] + 0x34u;
    { uint32_t ea = 0xa22478u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x90u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa22494u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22508; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x16u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80090000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0xa224bcu; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa224c4u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22508; }
    c->r[0] = 0x101ebd0u;
    c->r[6] = 0x6640u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x1030000u;
    { uint32_t ea = 0xa224e0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_a224dc:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa224e4u; f_a42c5c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa224ecu; f_a225a8(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xa224f8u; f_15efdb8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa22500u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a224dc; }
L_a22508:;
    c->r[0] = 0x101ea5cu;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xa22518u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2251cu; f_a10bec(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2253c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22530u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a2253c:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22554; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa22554u; rt_dispatch(c);
L_a22554:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22574; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22574u; f_15efe0c(c);
L_a22574:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22588; }
    c->r[1] = c->r[4];
    c->r[14] = 0xa22588u; f_a41c48(c);
L_a22588:;
    c->r[0] = c->r[5];
    c->r[14] = 0xa22590u; f_a23b60(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a20f3c(c);
}
void f_a225a8(Cpu *restrict c) {
    FN_ENTER(0xa225a8u);
L_a225a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2261c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa225ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22654; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa225e4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a22654; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa22604u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22618u; rt_dispatch(c);
    goto L_a22654;
L_a2261c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2262cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a22654; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80090000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[5]; c->r[14] = 0xa22654u; rt_dispatch(c);
L_a22654:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa22664u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_a22680; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    goto L_a22688;
L_a22680:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a2272c; }
L_a22688:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa226a0u; rt_dispatch(c);
    c->r[0] = 0x101e8bcu;
    c->r[1] = 0x2u;
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = 0xa226b8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa226bcu; f_a106e8(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0xa226c8u; f_a10bec(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a226e8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa226dcu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a226e8:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22704; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x4u;
    c->pc = c->r[2]; c->r[14] = 0xa22704u; rt_dispatch(c);
L_a22704:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22724; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22724u; f_15efe0c(c);
L_a22724:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_a2272c:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa22738u; f_a23ca0(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_a227b4; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2274cu; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a227b4; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22774; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22768u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a22774:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2278c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2278cu; rt_dispatch(c);
L_a2278c:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a227ac; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa227acu; f_15efe0c(c);
L_a227ac:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
L_a227b4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a227c0(Cpu *restrict c) {
    FN_ENTER(0xa227c0u);
L_a227c0:;
    c->r[0] = c->r[0] - 0x2cu;
    __attribute__((musttail)) return f_a22460(c);
}
void f_a227c8(Cpu *restrict c) {
    FN_ENTER(0xa227c8u);
L_a227c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xa227d4u; f_a22460(c);
    c->r[0] = 0x101e8c8u;
    { uint32_t ea = 0xa227e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa227e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a227f8(Cpu *restrict c) {
    FN_ENTER(0xa227f8u);
L_a227f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0] - 0x2cu;
    c->r[0] = c->r[4];
    c->r[14] = 0xa22808u; f_a22460(c);
    c->r[0] = 0x101e894u;
    { uint32_t ea = 0xa22814u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa22814u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2282c(Cpu *restrict c) {
    FN_ENTER(0xa2282cu);
L_a2282c:;
    __attribute__((musttail)) return f_a20fb0(c);
}
void f_a22830(Cpu *restrict c) {
    FN_ENTER(0xa22830u);
L_a22830:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22888; }
    c->r[6] = c->r[4] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0xa22854u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a22888:;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22890(Cpu *restrict c) {
    FN_ENTER(0xa22890u);
L_a22890:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a228e8; }
    c->r[5] = c->r[4] + 0x4u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa228b0u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a228e8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a228f4(Cpu *restrict c) {
    FN_ENTER(0xa228f4u);
L_a228f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = 0x2u;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x901u;
    c->r[3] = 0x1u;
    c->r[14] = 0xa22918u; f_a24060(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a22920(Cpu *restrict c) {
    FN_ENTER(0xa22920u);
L_a22920:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x3u;
    c->r[0] = c->r[0] + 0x34u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x902u;
    c->r[14] = 0xa2294cu; f_a24060(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a22954(Cpu *restrict c) {
    FN_ENTER(0xa22954u);
L_a22954:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x3u;
    c->r[0] = c->r[0] + 0x34u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x903u;
    c->r[14] = 0xa22980u; f_a24060(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a22988(Cpu *restrict c) {
    FN_ENTER(0xa22988u);
L_a22988:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x18u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x4u;
    c->r[0] = c->r[0] + 0x34u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    c->r[2] = 0x905u;
    c->r[14] = 0xa229bcu; f_a24060(c);
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a229c4(Cpu *restrict c) {
    FN_ENTER(0xa229c4u);
L_a229c4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[1];
    c->r[14] = 0xa229d4u; f_a239a0(c);
    c->r[1] = 0x903u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a229f8; }
    c->r[1] = 0x902u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a22a18; }
    c->r[0] = c->r[4] + 0x34u;
    c->r[1] = 0x903u;
    goto L_a22a00;
L_a229f8:;
    c->r[0] = c->r[4] + 0x34u;
    c->r[1] = 0x902u;
L_a22a00:;
    c->r[14] = 0xa22a04u; f_a2442c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_a22a18:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a22a20(Cpu *restrict c) {
    FN_ENTER(0xa22a20u);
L_a22a20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[1];
    c->r[14] = 0xa22a30u; f_a239a0(c);
    c->r[1] = 0x903u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a22a54; }
    c->r[1] = 0x902u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a22a74; }
    c->r[0] = c->r[4] + 0x8u;
    c->r[1] = 0x903u;
    goto L_a22a5c;
L_a22a54:;
    c->r[0] = c->r[4] + 0x8u;
    c->r[1] = 0x902u;
L_a22a5c:;
    c->r[14] = 0xa22a60u; f_a2442c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_a22a74:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a22a7c(Cpu *restrict c) {
    FN_ENTER(0xa22a7cu);
L_a22a7c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a22b54; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a22ad8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa22ab0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a22ad8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80090000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xa22ad8u; rt_dispatch(c);
L_a22ad8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa22ae8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22b4c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa22b08u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22b1cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa22b24u; f_a239a0(c);
    c->r[1] = 0x901u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CS) { goto L_a22b4c; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = 0x17u;
    c->r[3] = 0x1u;
    c->r[0] = ~0x0u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a22b60; }
L_a22b4c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xa22b54u; f_a239a0(c);
L_a22b54:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a22b60:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22b68(Cpu *restrict c) {
    FN_ENTER(0xa22b68u);
L_a22b68:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a22c40; }
    c->r[5] = c->r[0] - 0x2cu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a22bc4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa22b9cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a22bc4; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x18u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80090000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xa22bc4u; rt_dispatch(c);
L_a22bc4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa22bd4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22c38; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa22bf4u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22c08u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa22c10u; f_a239a0(c);
    c->r[1] = 0x901u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CS) { goto L_a22c38; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = 0x17u;
    c->r[3] = 0x1u;
    c->r[0] = ~0x0u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a22c4c; }
L_a22c38:;
    c->r[0] = c->r[4];
    c->r[14] = 0xa22c40u; f_a239a0(c);
L_a22c40:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a22c4c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22c54(Cpu *restrict c) {
    FN_ENTER(0xa22c54u);
L_a22c54:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a22d1c; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa22c78u; f_a239a0(c);
    c->r[1] = 0x901u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_a22d1c; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0xa22c94u + 0xcu;
    c->r[1] = 0x113u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80090000u;
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0xa22cb4u: goto L_a22cb4; case 0xa22cbcu: goto L_a22cbc; case 0xa22cc8u: goto L_a22cc8; case 0xa22cd4u: goto L_a22cd4; case 0xa22d1cu: goto L_a22d1c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a22cb4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a22cdc;
L_a22cbc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x100u;
    goto L_a22cdc;
L_a22cc8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x200u;
    goto L_a22cdc;
L_a22cd4:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x300u;
L_a22cdc:;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->pc = c->r[6]; c->r[14] = 0xa22cf0u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22d08u; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0xa22d18u; f_a22fcc(c);
    c->r[6] = 0x1u;
L_a22d1c:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22d28(Cpu *restrict c) {
    FN_ENTER(0xa22d28u);
L_a22d28:;
    c->r[0] = c->r[0] - 0x2cu;
    __attribute__((musttail)) return f_a22c54(c);
}
void f_a22d30(Cpu *restrict c) {
    FN_ENTER(0xa22d30u);
L_a22d30:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    c->r[0] = c->r[1];
    __attribute__((musttail)) return f_a239a0(c);
}
void f_a22d40(Cpu *restrict c) {
    FN_ENTER(0xa22d40u);
L_a22d40:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    c->r[0] = c->r[1];
    __attribute__((musttail)) return f_a239a0(c);
}
void f_a22d50(Cpu *restrict c) {
    FN_ENTER(0xa22d50u);
L_a22d50:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22d74u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa22d7cu; f_a239a0(c);
    c->r[1] = 0x902u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_a22dbc; }
    c->r[1] = 0x905u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a22dd4; }
    c->r[1] = 0x901u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a22de4; }
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa22db4u; f_a22dec(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a22dbc:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa22dccu; f_a22edc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a22dd4:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa22de4u; f_a22fcc(c);
L_a22de4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a22dec(Cpu *restrict c) {
    FN_ENTER(0xa22decu);
L_a22dec:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x101e160u;
    c->r[5] = c->r[1];
    c->r[1] = 0x1u;
    c->r[6] = c->r[2];
    c->r[3] = c->r[4];
    { uint32_t ea = 0xa22e14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa22e18u; f_a106e8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa22e20u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22ed0; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22e48; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22e3cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a22e48:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22eb0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa22e64u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22e84; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22e80u; rt_dispatch(c);
    goto L_a22e8c;
L_a22e84:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a22e8c:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa22ea0u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa22eb0u; rt_dispatch(c);
L_a22eb0:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22ed0; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22ed0u; f_15efe0c(c);
L_a22ed0:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a22edc(Cpu *restrict c) {
    FN_ENTER(0xa22edcu);
L_a22edc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x101e070u;
    c->r[5] = c->r[1];
    c->r[1] = 0x1u;
    c->r[6] = c->r[2];
    c->r[3] = c->r[4];
    { uint32_t ea = 0xa22f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa22f08u; f_a106e8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa22f10u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22fc0; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22f38; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22f2cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a22f38:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22fa0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa22f54u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a22f74; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa22f70u; rt_dispatch(c);
    goto L_a22f7c;
L_a22f74:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a22f7c:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa22f90u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa22fa0u; rt_dispatch(c);
L_a22fa0:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a22fc0; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa22fc0u; f_15efe0c(c);
L_a22fc0:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a22fcc(Cpu *restrict c) {
    FN_ENTER(0xa22fccu);
L_a22fcc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[0] = 0x101df80u;
    c->r[5] = c->r[1];
    c->r[1] = 0x1u;
    c->r[6] = c->r[2];
    c->r[3] = c->r[4];
    { uint32_t ea = 0xa22ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa22ff8u; f_a106e8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa23000u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a230b0; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23028; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2301cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a23028:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23090; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa23044u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a23064; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa23060u; rt_dispatch(c);
    goto L_a2306c;
L_a23064:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a2306c:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa23080u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa23090u; rt_dispatch(c);
L_a23090:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a230b0; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa230b0u; f_15efe0c(c);
L_a230b0:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a230bc(Cpu *restrict c) {
    FN_ENTER(0xa230bcu);
L_a230bc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa230e0u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa230e8u; f_a239a0(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x902u;
    c->r[2] = c->r[1] - c->r[0];
    c->r[0] = c->r[5] - 0x2cu;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_CC) { goto L_a2312c; }
    c->r[2] = 0x905u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_a23140; }
    c->r[2] = 0x901u;
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_a2314c; }
    c->r[2] = c->r[13] + 0x4u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa23124u; f_a22dec(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a2312c:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa23138u; f_a22edc(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a23140:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[1] = c->r[4];
    c->r[14] = 0xa2314cu; f_a22fcc(c);
L_a2314c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a23154(Cpu *restrict c) {
    FN_ENTER(0xa23154u);
L_a23154:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a23158(Cpu *restrict c) {
    FN_ENTER(0xa23158u);
L_a23158:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a2315c(Cpu *restrict c) {
    FN_ENTER(0xa2315cu);
L_a2315c:;
    c->r[0] = 0x101df40u;
    { uint32_t ea = 0xa23168u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a2316c(Cpu *restrict c) {
    FN_ENTER(0xa2316cu);
L_a2316c:;
    c->r[0] = 0x101df24u;
    { uint32_t ea = 0xa23178u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a2317c(Cpu *restrict c) {
    FN_ENTER(0xa2317cu);
L_a2317c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x0u;
    c->r[14] = 0xa2319cu; f_15efda0(c);
    c->r[1] = 0x10fbde0u;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[4] = 0xa231b0u + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0xa231bcu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa231d4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    c->r[1] = 0x1016208u;
    { uint32_t ea = c->r[4] + 0x10u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    c->r[3] = 0x180u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    c->r[0] = 0x101de84u;
    { uint32_t ea = 0xa23210u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xd4abeeu;
    { uint32_t ea = 0xa23218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa2321cu + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0xa23220u; f_9aedcc(c);
    c->r[1] = 0x101de74u;
    c->r[2] = c->r[4];
    c->r[3] = 0xa8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa23240u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x101de54u;
    c->r[1] = 0xd4acf7u;
    { uint32_t ea = 0xa23254u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa23258u + c->r[1];
    c->r[14] = 0xa23258u; f_9aedcc(c);
    c->r[1] = 0x101de54u;
    { uint32_t ea = 0xa23264u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a23290(Cpu *restrict c) {
    FN_ENTER(0xa23290u);
L_a23290:;
    c->r[1] = 0x101de20u;
    { uint32_t ea = 0xa2329cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); } }
    __attribute__((musttail)) return f_a20f3c(c);
}
void f_a23328(Cpu *restrict c) {
    FN_ENTER(0xa23328u);
L_a23328:;
    c->r[1] = 0x101dd88u;
    { uint32_t ea = 0xa23334u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xa233c0u; f_a20f3c(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a20ec0(c);
}
void f_a233cc(Cpu *restrict c) {
    FN_ENTER(0xa233ccu);
L_a233cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xa233e0u; f_a20fb0(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xa23408u; f_9bb638(c);
    c->r[1] = 0xd34223u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xa23420u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x2cu;
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
    c->r[14] = 0xa23480u; f_9bb638(c);
    c->r[1] = 0xd4aac8u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa23494u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x30u;
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
    c->r[14] = 0xa234f8u; f_9bb638(c);
    c->r[1] = 0xd36c88u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa2350cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x34u;
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
    c->r[14] = 0xa2356cu; f_9bb638(c);
    c->r[1] = 0xd4a9e6u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa23580u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x38u;
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
    c->r[14] = 0xa235e4u; f_9bb638(c);
    c->r[1] = 0xd38bf3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa235f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x80u;
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
    c->r[14] = 0xa23658u; f_9bb638(c);
    c->r[1] = 0xd4a907u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa2366cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x88u;
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
    c->r[14] = 0xa236d0u; f_9bb638(c);
    c->r[1] = 0xd4a89au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa236e4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x90u;
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
    c->r[14] = 0xa23744u; f_9bb638(c);
    c->r[1] = 0xd4a831u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa23758u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x98u;
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
    c->r[14] = 0xa237bcu; f_9bb638(c);
    c->r[1] = 0xd4a7c2u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa237d0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x99u;
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
    c->r[14] = 0xa23830u; f_9bb638(c);
    c->r[1] = 0xd4a75cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa23844u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9au;
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
    c->r[14] = 0xa238a8u; f_9bb638(c);
    c->r[1] = 0xd4a6f0u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa238bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9bu;
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
    c->r[14] = 0xa2391cu; f_9bb638(c);
    c->r[1] = 0xd4a691u;
    c->r[1] = 0xa23928u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x9cu;
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
void f_a239a0(Cpu *restrict c) {
    FN_ENTER(0xa239a0u);
L_a239a0:;
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a239a8(Cpu *restrict c) {
    FN_ENTER(0xa239a8u);
L_a239a8:;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a239b0(Cpu *restrict c) {
    FN_ENTER(0xa239b0u);
L_a239b0:;
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    return;
}
void f_a239b8(Cpu *restrict c) {
    FN_ENTER(0xa239b8u);
L_a239b8:;
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a239c0(Cpu *restrict c) {
    FN_ENTER(0xa239c0u);
L_a239c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a239e8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa239dcu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a239e8:;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    { uint32_t r = c->r[6] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a23a20; }
    c->r[0] = 0x10177f0u;
    { uint32_t ea = 0xa23a00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa23a00u; f_a103b8(c);
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[5] = 0x0u;
    c->r[0] = f_subs(c, c->r[0], c->r[2]);
    c->r[1] = c->r[1] - c->r[3] - 1u + c->cf;
    c->r[0] = f_subs(c, c->r[6], c->r[0]);
    c->r[0] = f_sbcs(c, c->r[7], c->r[1]);
    if (COND_CC) { c->r[5] = 0x1u; }
    goto L_a23a24;
L_a23a20:;
    c->r[5] = 0x0u;
L_a23a24:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23a44; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa23a44u; f_15efe0c(c);
L_a23a44:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a23a50(Cpu *restrict c) {
    FN_ENTER(0xa23a50u);
L_a23a50:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[3];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23a80; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa23a74u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a23a80:;
    c->r[0] = 0x1017764u;
    { uint32_t ea = 0xa23a8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa23a8cu; f_a103b8(c);
    c->r[2] = c->r[4] + 0x88u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_a23ac0(Cpu *restrict c) {
    FN_ENTER(0xa23ac0u);
L_a23ac0:;
    { uint32_t ea = c->r[0] + 0x98u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_a23ac8(Cpu *restrict c) {
    FN_ENTER(0xa23ac8u);
L_a23ac8:;
    { uint32_t ea = c->r[0] + 0x99u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_a23ad0(Cpu *restrict c) {
    FN_ENTER(0xa23ad0u);
L_a23ad0:;
    __attribute__((musttail)) return f_a21314(c);
}
void f_a23ad4(Cpu *restrict c) {
    FN_ENTER(0xa23ad4u);
L_a23ad4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[14] = 0xa23ae4u; f_a213d4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa23af8u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a23b00(Cpu *restrict c) {
    FN_ENTER(0xa23b00u);
L_a23b00:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[14] = 0xa23b10u; f_a214e4(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa23b24u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a23b2c(Cpu *restrict c) {
    FN_ENTER(0xa23b2cu);
L_a23b2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xa23b38u; f_a20eec(c);
    c->r[0] = 0x101d57cu;
    { uint32_t ea = 0xa23b44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x2cu; }
    c->r[1] = 0x25u;
    c->r[14] = 0xa23b54u; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a23b60(Cpu *restrict c) {
    FN_ENTER(0xa23b60u);
L_a23b60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101d548u;
    c->r[8] = c->r[4] + 0x4u;
    { uint32_t ea = 0xa23b78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23ba4; }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23b90u; f_15efe00(c);
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    goto L_a23ba8;
L_a23ba4:;
    c->r[7] = c->r[4] + 0x1cu;
L_a23ba8:;
    c->r[5] = 0xcu;
L_a23bac:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a23c50; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23bd8; }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23bccu; f_15efe00(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a23bd8:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23bfc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa23bfcu; rt_dispatch(c);
L_a23bfc:;
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x9au; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x50u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23c30; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23c30u; f_15efe0c(c);
L_a23c30:;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23c50; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23c48u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + (c->r[5] << 2); ST32(ea, c->r[0]); }
L_a23c50:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], 0x14u);
    if (COND_NE) { goto L_a23bac; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23c7c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23c7cu; f_15efe0c(c);
L_a23c7c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a20f3c(c);
}
void f_a23c8c(Cpu *restrict c) {
    FN_ENTER(0xa23c8cu);
L_a23c8c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xa23c94u; f_a23b60(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a20ec0(c);
}
void f_a23c9c(Cpu *restrict c) {
    FN_ENTER(0xa23c9cu);
L_a23c9c:;
    __attribute__((musttail)) return f_a20fb0(c);
}
void f_a23ca0(Cpu *restrict c) {
    FN_ENTER(0xa23ca0u);
L_a23ca0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23cd8; }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23cc4u; f_15efe00(c);
    c->r[9] = c->r[5];
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    goto L_a23cdc;
L_a23cd8:;
    c->r[9] = c->r[5] + 0x1cu;
L_a23cdc:;
    c->r[4] = 0x0u;
    c->r[7] = c->r[5] + 0x30u;
    c->r[10] = c->r[13];
    c->r[11] = 0x3u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
L_a23d0c:;
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_a23e6c; }
    { uint32_t ea = c->r[6] + 0x9bu; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a23d80; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_a23e6c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_a23e6c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_a23e6c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[1]); }
    if (COND_EQ) { goto L_a23e6c; }
L_a23d80:;
    { uint32_t ea = c->r[10] + (c->r[4] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_EQ) { goto L_a23de8; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_a23dc4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a23e6c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa23db0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a23e6c; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a23dc4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa23dd4u; rt_dispatch(c);
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x9cu; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_a23df8; }
    goto L_a23e6c;
L_a23de8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa23df8u; rt_dispatch(c);
L_a23df8:;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23e18; }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23e0cu; f_15efe00(c);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
L_a23e18:;
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[5] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23e38; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xa23e38u; rt_dispatch(c);
L_a23e38:;
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x9au; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] ^ 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x50u; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23e6c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xa23e6cu; f_15efe0c(c);
L_a23e6c:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], 0x8u);
    if (COND_NE) { goto L_a23d0c; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23ea4; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23ea4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23e9cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
L_a23ea4:;
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23ed0; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23ed0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23ec8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
L_a23ed0:;
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23efc; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23efc; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23ef4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
L_a23efc:;
    { uint32_t ea = c->r[5] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23f28; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23f28; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23f20u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
L_a23f28:;
    { uint32_t ea = c->r[5] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23f54; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23f54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23f4cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
L_a23f54:;
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23f80; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23f80; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23f78u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
L_a23f80:;
    { uint32_t ea = c->r[5] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23fac; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23fac; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23fa4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
L_a23fac:;
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a23fd8; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { goto L_a23fd8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa23fd0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
L_a23fd8:;
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_a23fe0:;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_GT) { goto L_a24004; }
L_a23fe8:;
    c->r[2] = c->r[5] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a24020; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_LT) { goto L_a23fe8; }
L_a24004:;
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_NE) { goto L_a24018; }
    c->r[2] = 0x0u;
    c->r[1] = 0x8u;
    goto L_a24024;
L_a24018:;
    c->r[2] = c->r[5] + (c->r[1] << 2);
    { uint32_t ea = c->r[2] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a24020:;
    c->r[1] = c->r[1] + 0x1u;
L_a24024:;
    c->r[3] = c->r[5] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x8u);
    { uint32_t ea = c->r[3] + 0x30u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_a23fe0; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24058; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xa24058u; f_15efe0c(c);
L_a24058:;
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a24060(Cpu *restrict c) {
    FN_ENTER(0xa24060u);
L_a24060:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x28u;
    c->r[9] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = 0xa0u;
    c->r[1] = 0x10u;
    c->r[7] = c->r[3];
    c->r[6] = c->r[2];
    c->r[14] = 0xa24084u; f_a20e84(c);
    c->r[5] = c->r[0];
    c->r[14] = 0xa2408cu; f_a20eec(c);
    c->r[0] = 0x101d024u;
    { uint32_t ea = 0xa24098u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x101d018u;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xa240acu + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[2]); }
    if (COND_NE) { goto L_a240d4; }
    c->r[1] = 0x101cff4u;
    c->r[2] = 0x2u;
    { uint32_t ea = 0xa240d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
L_a240d4:;
    c->r[8] = c->r[5] + 0x34u;
    c->r[1] = 0x50u;
    c->r[0] = c->r[8];
    c->r[14] = 0xa240e4u; f_15efd7c(c);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[5] + 0x9cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x98u; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24128; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2411cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a24128:;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[4]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_a241d0; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[4]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_a241d0; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[4]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_a241d0; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = c->r[4]; }
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_a241d0; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a241b8; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa241b8u; f_15efe0c(c);
L_a241b8:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa241c8u; rt_dispatch(c);
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_a241d0:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    c->r[1] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x8u);
    c->r[1] = c->r[0];
    if (COND_GE) { c->r[1] = 0x8u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { goto L_a242e4; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[3] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    if (COND_LE) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[1], 0x2u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0xcu;
    (void)f_subs(c, c->r[1], 0x4u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0x10u;
    (void)f_subs(c, c->r[1], 0x4u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0x14u;
    (void)f_subs(c, c->r[1], 0x6u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0x18u;
    (void)f_subs(c, c->r[1], 0x6u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0x1cu;
    (void)f_subs(c, c->r[1], 0x8u);
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    if (COND_LT) { goto L_a242b0; }
    c->r[3] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
L_a242b0:;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_a242e8; }
    c->r[0] = c->r[5] + 0x3cu;
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x8u;
L_a242c8:;
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { goto L_a242c8; }
    goto L_a242e8;
L_a242e4:;
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[1]); }
L_a242e8:;
    c->r[0] = 0x1u;
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x99u; ST8(ea, c->r[0]); } }
    { uint32_t r = c->r[7] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x9au; ST8(ea, c->r[0]); } }
    { uint32_t r = c->r[7] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x9bu; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24338; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa2432cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { c->r[0] = 0x4u; }
    if (COND_LT) { { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); } }
L_a24338:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24364; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24364u; f_15efe0c(c);
L_a24364:;
    c->r[13] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a24378(Cpu *restrict c) {
    FN_ENTER(0xa24378u);
L_a24378:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a243a0; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24394u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a243a0:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24404; }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
L_a24404:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24424; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24424u; f_15efe0c(c);
L_a24424:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a2442c(Cpu *restrict c) {
    FN_ENTER(0xa2442cu);
L_a2442c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24458; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2444cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a24458:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24480; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a24480; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a24480:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a244a8; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a244a8; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a244a8:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a244d0; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a244d0; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a244d0:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a244f8; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a244f8; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a244f8:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24520; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a24520; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a24520:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24548; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a24548; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a24548:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24570; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a24570; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a245a0; }
L_a24570:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2459c; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_NE) { goto L_a2459c; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { c->r[6] = 0x0u; }
    goto L_a245a0;
L_a2459c:;
    c->r[6] = 0x0u;
L_a245a0:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a245c0; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa245c0u; f_15efe0c(c);
L_a245c0:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a245c8(Cpu *restrict c) {
    FN_ENTER(0xa245c8u);
L_a245c8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a245f4; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa245e8u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a245f4:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24610; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a24610:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2462c; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a2462c:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24648; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a24648:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24664; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a24664:;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24680; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a24680:;
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2469c; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a2469c:;
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a246b8; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a246b8:;
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a246d4; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0x98u; ST8(ea, c->r[1]); } }
L_a246d4:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
}
void f_a246f8(Cpu *restrict c) {
    FN_ENTER(0xa246f8u);
L_a246f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa24714u; f_15efda0(c);
    c->r[1] = 0x10fa888u;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[5] = 0xa24728u + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0xa24734u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa2474cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a24770(Cpu *restrict c) {
    FN_ENTER(0xa24770u);
L_a24770:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101c940u;
    c->r[5] = c->r[4] + 0x104u;
    { uint32_t ea = 0xa24788u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa24794u; f_a0c640(c);
    c->r[6] = 0x0u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[6]); }
    c->r[14] = 0xa247acu; f_15efdac(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa247b4u; f_a0c234(c);
    c->r[0] = 0x188u;
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a247d4(Cpu *restrict c) {
    FN_ENTER(0xa247d4u);
L_a247d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[1] = 0x100u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa247e8u; f_15efdac(c);
    c->r[0] = c->r[4] + 0x104u;
    c->r[14] = 0xa247f0u; f_a0c234(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[0]); }
    c->r[0] = 0x188u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2480c(Cpu *restrict c) {
    FN_ENTER(0xa2480cu);
L_a2480c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101c8a8u;
    { uint32_t ea = 0xa24820u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x104u; }
    c->r[14] = 0xa2482cu; f_a0dbbc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a24838(Cpu *restrict c) {
    FN_ENTER(0xa24838u);
L_a24838:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101c87cu;
    { uint32_t ea = 0xa2484cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); c->r[0] = c->r[0] + 0x104u; }
    c->r[14] = 0xa24858u; f_a0dbbc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a24868(Cpu *restrict c) {
    FN_ENTER(0xa24868u);
L_a24868:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[2] = 0x100u;
    c->r[0] = c->r[4] + 0x4u;
    c->r[1] = c->r[5] + 0x4u;
    c->r[14] = 0xa24884u; f_15efe30(c);
    c->r[6] = c->r[5] + 0x104u;
    c->r[0] = c->r[6];
    c->r[14] = 0xa24890u; f_a0c93c(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a248a4; }
    c->r[0] = c->r[4] + 0x104u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa248a4u; f_a0c710(c);
L_a248a4:;
    { uint32_t ea = c->r[5] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[1]); }
    c->r[0] = 0x188u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a248c8(Cpu *restrict c) {
    FN_ENTER(0xa248c8u);
L_a248c8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[0];
    c->r[0] = 0x101c7dcu;
    c->r[1] = 0x6408u;
    c->r[8] = 0xffffu;
    c->r[4] = 0x0u;
    c->r[7] = c->r[9];
    c->r[5] = c->r[9] + 0x10cu;
    { uint32_t ea = 0xa248f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); c->r[7] = c->r[7] + c->r[1]; }
    c->r[0] = 0x101c7c8u;
    { uint32_t ea = 0xa24900u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x8u;
L_a24900:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[5] - 0x104u; ST32(ea, c->r[6]); }
    c->r[14] = 0xa2490cu; f_a0c640(c);
    c->r[0] = c->r[5] - 0x100u;
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[5] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x80u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa24920u; f_15efdac(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa24928u; f_a0c234(c);
    c->r[1] = c->r[5] + 0x8cu;
    c->r[0] = c->r[5] + 0x190u;
    { uint32_t ea = c->r[5] + 0x7cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x84u; ST16(ea, c->r[8]); }
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[5] = c->r[0];
    if (COND_NE) { goto L_a24900; }
    c->r[4] = 0x0u;
    c->r[5] = 0x190u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[4]); }
L_a24958:;
    c->r[7] = c->r[9] + c->r[6];
    c->r[1] = 0x100u;
    c->r[0] = c->r[7] + 0xcu;
    c->r[14] = 0xa24968u; f_15efdac(c);
    c->r[0] = c->r[7] + 0x10cu;
    c->r[14] = 0xa24970u; f_a0c234(c);
    c->r[6] = c->r[6] + 0x190u;
    { uint32_t ea = c->r[7] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x18cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + c->r[5]; ST16(ea, c->r[8]); }
    (void)f_subs(c, c->r[6], 0x6400u);
    if (COND_NE) { goto L_a24958; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a24998(Cpu *restrict c) {
    FN_ENTER(0xa24998u);
L_a24998:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[8] = 0x190u;
    c->r[9] = 0xffffu;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[5]); }
L_a249b4:;
    c->r[7] = c->r[4] + c->r[6];
    c->r[1] = 0x100u;
    c->r[0] = c->r[7] + 0xcu;
    c->r[14] = 0xa249c4u; f_15efdac(c);
    c->r[0] = c->r[7] + 0x10cu;
    c->r[14] = 0xa249ccu; f_a0c234(c);
    c->r[6] = c->r[6] + 0x190u;
    { uint32_t ea = c->r[7] + 0x188u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x18cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + c->r[8]; ST16(ea, c->r[9]); }
    (void)f_subs(c, c->r[6], 0x6400u);
    if (COND_NE) { goto L_a249b4; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a249e8(Cpu *restrict c) {
    FN_ENTER(0xa249e8u);
L_a249e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101c6ccu;
    c->r[5] = 0x6400u;
    { uint32_t ea = 0xa24a00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x101c6b8u;
    { uint32_t ea = 0xa24a10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x8u;
L_a24a10:;
    c->r[0] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[0] - 0x188u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] - 0x84u;
    c->r[14] = 0xa24a20u; f_a0dbbc(c);
    c->r[5] = f_subs(c, c->r[5], 0x190u);
    if (COND_NE) { goto L_a24a10; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a24a38(Cpu *restrict c) {
    FN_ENTER(0xa24a38u);
L_a24a38:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101c67cu;
    c->r[5] = 0x6400u;
    { uint32_t ea = 0xa24a50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x101c668u;
    { uint32_t ea = 0xa24a60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x8u;
L_a24a60:;
    c->r[0] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[0] - 0x188u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] - 0x84u;
    c->r[14] = 0xa24a70u; f_a0dbbc(c);
    c->r[5] = f_subs(c, c->r[5], 0x190u);
    if (COND_NE) { goto L_a24a60; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a24a8c(Cpu *restrict c) {
    FN_ENTER(0xa24a8cu);
L_a24a8c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0xa24a9cu; f_a20eec(c);
    c->r[0] = 0x101c624u;
    c->r[6] = c->r[4];
    { uint32_t ea = 0xa24aacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[0] + 0x74u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); c->r[6] = ea; }
    c->r[0] = c->r[6] + 0x8u;
    c->r[14] = 0xa24ac0u; f_a23b2c(c);
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_a24ad8; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa24ad8u; f_a41bb8(c);
L_a24ad8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x94u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x88u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a24afc(Cpu *restrict c) {
    FN_ENTER(0xa24afcu);
L_a24afc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101c5c0u;
    { uint32_t ea = 0xa24b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x8u;
    c->r[0] = c->r[0] + 0x74u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24b3c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24b30u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a24b3c:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24b54; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa24b54u; rt_dispatch(c);
L_a24b54:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24b74; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24b74u; f_15efe0c(c);
L_a24b74:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24b88; }
    c->r[1] = c->r[4];
    c->r[14] = 0xa24b88u; f_a41c48(c);
L_a24b88:;
    c->r[0] = c->r[4] + 0x34u;
    c->r[14] = 0xa24b90u; f_a23b60(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a20f3c(c);
}
void f_a24ba0(Cpu *restrict c) {
    FN_ENTER(0xa24ba0u);
L_a24ba0:;
    c->r[0] = c->r[0] - 0x2cu;
    __attribute__((musttail)) return f_a24afc(c);
}
void f_a24ba8(Cpu *restrict c) {
    FN_ENTER(0xa24ba8u);
L_a24ba8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0xa24bb0u; f_a24afc(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a20ec0(c);
}
void f_a24bb8(Cpu *restrict c) {
    FN_ENTER(0xa24bb8u);
L_a24bb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = c->r[0] - 0x2cu;
    c->r[14] = 0xa24bc4u; f_a24afc(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a20ec0(c);
}
void f_a24bcc(Cpu *restrict c) {
    FN_ENTER(0xa24bccu);
L_a24bcc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24c24; }
    c->r[6] = c->r[4] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0xa24bf0u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a24c24:;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a24c2c(Cpu *restrict c) {
    FN_ENTER(0xa24c2cu);
L_a24c2c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24c84; }
    c->r[5] = c->r[4] + 0x4u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa24c4cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a24c84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a24c90(Cpu *restrict c) {
    FN_ENTER(0xa24c90u);
L_a24c90:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1u;
    c->r[5] = c->r[4] + 0x34u;
    { uint32_t ea = c->r[4] + 0x88u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa24cb0u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a24d2c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800a0000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[7]; c->r[14] = 0xa24cd8u; rt_dispatch(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa24ce0u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a24d2c; }
    c->r[0] = 0x101c3b4u;
    c->r[6] = 0x6640u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x1030000u;
    { uint32_t ea = 0xa24cfcu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_a24cf8:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa24d00u; f_a42c5c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa24d10u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xa24d1cu; f_15efdb8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa24d24u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24cf8; }
L_a24d2c:;
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24da8; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x504u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa24d54u; f_a24060(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa24d5cu; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a24da8; }
    c->r[0] = 0x101c338u;
    c->r[6] = 0x6640u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x1030000u;
    { uint32_t ea = 0xa24d78u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_a24d74:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa24d7cu; f_a42c5c(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa24d8cu; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[14] = 0xa24d98u; f_15efdb8(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa24da0u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24d74; }
L_a24da8:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a24db8(Cpu *restrict c) {
    FN_ENTER(0xa24db8u);
L_a24db8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24e2c; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa24ddcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a24e64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa24df4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24e64; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa24e14u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa24e28u; rt_dispatch(c);
    goto L_a24e64;
L_a24e2c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa24e3cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a24e64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800a0000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[5]; c->r[14] = 0xa24e64u; rt_dispatch(c);
L_a24e64:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa24e74u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_NE) { goto L_a24e90; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    goto L_a24e98;
L_a24e90:;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a24f38; }
L_a24e98:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa24eacu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24ecc; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24ec0u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a24ecc:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24ee8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[13] + 0x4u;
    c->pc = c->r[2]; c->r[14] = 0xa24ee8u; rt_dispatch(c);
L_a24ee8:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24f08; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24f08u; f_15efe0c(c);
L_a24f08:;
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24f30; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x504u;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x34u;
    c->r[14] = 0xa24f30u; f_a24060(c);
L_a24f30:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
L_a24f38:;
    c->r[0] = c->r[4] + 0x34u;
    c->r[14] = 0xa24f40u; f_a23ca0(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a24f48(Cpu *restrict c) {
    FN_ENTER(0xa24f48u);
L_a24f48:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_a24fcc; }
    c->r[0] = c->r[4] + 0x34u;
    c->r[14] = 0xa24f64u; f_a24378(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24f8c; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24f80u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a24f8c:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24fa4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa24fa4u; rt_dispatch(c);
L_a24fa4:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a24fc4; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa24fc4u; f_15efe0c(c);
L_a24fc4:;
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
L_a24fcc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a24fd0(Cpu *restrict c) {
    FN_ENTER(0xa24fd0u);
L_a24fd0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x501u;
    c->r[3] = 0x1u;
    c->r[14] = 0xa24ff4u; f_a24060(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a24ffc(Cpu *restrict c) {
    FN_ENTER(0xa24ffcu);
L_a24ffc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x502u;
    c->r[3] = 0x1u;
    c->r[14] = 0xa25020u; f_a24060(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a25028(Cpu *restrict c) {
    FN_ENTER(0xa25028u);
L_a25028:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x503u;
    c->r[3] = 0x1u;
    c->r[14] = 0xa2504cu; f_a24060(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a25054(Cpu *restrict c) {
    FN_ENTER(0xa25054u);
L_a25054:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[0] + 0x34u;
    c->r[3] = 0x3u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x504u;
    c->r[14] = 0xa25074u; f_a24060(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2507c(Cpu *restrict c) {
    FN_ENTER(0xa2507cu);
L_a2507c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = 0x2u;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x505u;
    c->r[3] = 0x1u;
    c->r[14] = 0xa250a0u; f_a24060(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a250a8(Cpu *restrict c) {
    FN_ENTER(0xa250a8u);
L_a250a8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[12] = 0x2u;
    c->r[0] = c->r[0] + 0x34u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    c->r[2] = 0x506u;
    c->r[3] = 0x1u;
    c->r[14] = 0xa250ccu; f_a24060(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a250d4(Cpu *restrict c) {
    FN_ENTER(0xa250d4u);
L_a250d4:;
    c->r[0] = c->r[0] + 0x34u;
    __attribute__((musttail)) return f_a245c8(c);
}
void f_a250dc(Cpu *restrict c) {
    FN_ENTER(0xa250dcu);
L_a250dc:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[0] = c->r[6];
    c->r[14] = 0xa250f8u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a251c8; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25120; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25114u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a25120:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a251a8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2513cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25184; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa2514cu; f_a239a8(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa25168u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa25180u; rt_dispatch(c);
    goto L_a251a8;
L_a25184:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa25198u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->pc = c->r[8]; c->r[14] = 0xa251a8u; rt_dispatch(c);
L_a251a8:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a251c8; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa251c8u; f_15efe0c(c);
L_a251c8:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a251d0(Cpu *restrict c) {
    FN_ENTER(0xa251d0u);
L_a251d0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[0] = c->r[5];
    c->r[14] = 0xa251ecu; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2529c; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25214; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25208u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a25214:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2527c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa25230u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25250; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa2524cu; rt_dispatch(c);
    goto L_a25258;
L_a25250:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a25258:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2526cu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa2527cu; rt_dispatch(c);
L_a2527c:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2529c; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2529cu; f_15efe0c(c);
L_a2529c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a252a4(Cpu *restrict c) {
    FN_ENTER(0xa252a4u);
L_a252a4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa252bcu; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25388; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a252e4; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa252d8u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a252e4:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25368; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa25300u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25348; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa25310u; f_a239a8(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa2532cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa25344u; rt_dispatch(c);
    goto L_a25368;
L_a25348:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2535cu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa25368u; rt_dispatch(c);
L_a25368:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25388; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25388u; f_15efe0c(c);
L_a25388:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25390(Cpu *restrict c) {
    FN_ENTER(0xa25390u);
L_a25390:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[0] = c->r[5];
    c->r[14] = 0xa253acu; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2545c; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a253d4; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa253c8u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a253d4:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2543c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa253f0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25410; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa2540cu; rt_dispatch(c);
    goto L_a25418;
L_a25410:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a25418:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2542cu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa2543cu; rt_dispatch(c);
L_a2543c:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2545c; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2545cu; f_15efe0c(c);
L_a2545c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25464(Cpu *restrict c) {
    FN_ENTER(0xa25464u);
L_a25464:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa2547cu; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25548; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a254a4; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25498u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a254a4:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25528; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa254c0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25508; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa254d0u; f_a239a8(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa254ecu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa25504u; rt_dispatch(c);
    goto L_a25528;
L_a25508:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2551cu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa25528u; rt_dispatch(c);
L_a25528:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25548; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25548u; f_15efe0c(c);
L_a25548:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25550(Cpu *restrict c) {
    FN_ENTER(0xa25550u);
L_a25550:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[0] = c->r[5];
    c->r[14] = 0xa2556cu; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2561c; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25594; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25588u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a25594:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a255fc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa255b0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a255d0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa255ccu; rt_dispatch(c);
    goto L_a255d8;
L_a255d0:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a255d8:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa255ecu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa255fcu; rt_dispatch(c);
L_a255fc:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2561c; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2561cu; f_15efe0c(c);
L_a2561c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25624(Cpu *restrict c) {
    FN_ENTER(0xa25624u);
L_a25624:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa25638u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25660; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25654u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a25660:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a25688; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2567cu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa25688u; rt_dispatch(c);
L_a25688:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a256ac; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_15efe0c(c);
L_a256ac:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a256b0(Cpu *restrict c) {
    FN_ENTER(0xa256b0u);
L_a256b0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa256c8u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25794; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a256f0; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa256e4u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a256f0:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25774; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2570cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25754; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2571cu; f_a239a8(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa25738u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa25750u; rt_dispatch(c);
    goto L_a25774;
L_a25754:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa25768u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa25774u; rt_dispatch(c);
L_a25774:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25794; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25794u; f_15efe0c(c);
L_a25794:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a2579c(Cpu *restrict c) {
    FN_ENTER(0xa2579cu);
L_a2579c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[0] = c->r[5];
    c->r[14] = 0xa257b8u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25868; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a257e0; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa257d4u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a257e0:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25848; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa257fcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2581c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa25818u; rt_dispatch(c);
    goto L_a25824;
L_a2581c:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a25824:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa25838u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa25848u; rt_dispatch(c);
L_a25848:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25868; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25868u; f_15efe0c(c);
L_a25868:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25870(Cpu *restrict c) {
    FN_ENTER(0xa25870u);
L_a25870:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2588cu; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2595c; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a258b4; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa258a8u; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a258b4:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2593c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa258d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25918; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa258e0u; f_a239a8(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa258fcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa25914u; rt_dispatch(c);
    goto L_a2593c;
L_a25918:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa2592cu; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->pc = c->r[8]; c->r[14] = 0xa2593cu; rt_dispatch(c);
L_a2593c:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2595c; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2595cu; f_15efe0c(c);
L_a2595c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25964(Cpu *restrict c) {
    FN_ENTER(0xa25964u);
L_a25964:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[0] = c->r[5];
    c->r[14] = 0xa25980u; f_a23ac8(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25a30; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a259a8; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa2599cu; f_15efe00(c);
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
L_a259a8:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25a10; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa259c4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a259e4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa259e0u; rt_dispatch(c);
    goto L_a259ec;
L_a259e4:;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a259ec:;
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa25a00u; f_a239a8(c);
    c->r[1] = c->r[0];
    c->r[2] = c->r[13];
    c->r[0] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa25a10u; rt_dispatch(c);
L_a25a10:;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a25a30; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0xa25a30u; f_15efe0c(c);
L_a25a30:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a25a38(Cpu *restrict c) {
    FN_ENTER(0xa25a38u);
L_a25a38:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[1];
    c->r[14] = 0xa25a48u; f_a239a0(c);
    c->r[1] = 0x501u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_a25bb4; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xa25a64u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa25a80u: goto L_a25a80; case 0xa25aa8u: goto L_a25aa8; case 0xa25ab4u: goto L_a25ab4; case 0xa25adcu: goto L_a25adc; case 0xa25b2cu: goto L_a25b2c; case 0xa25b68u: goto L_a25b68; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a25a80:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[1] = 0x502u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa25a90u; f_a2442c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x504u;
    goto L_a25ba0;
L_a25aa8:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[1] = 0x503u;
    goto L_a25abc;
L_a25ab4:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[1] = 0x502u;
L_a25abc:;
    c->r[0] = c->r[5];
    c->r[14] = 0xa25ac4u; f_a2442c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x504u;
    goto L_a25b14;
L_a25adc:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[1] = 0x501u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa25aecu; f_a2442c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x502u;
    c->r[14] = 0xa25b04u; f_a2442c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x503u;
L_a25b14:;
    c->r[14] = 0xa25b18u; f_a2442c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x505u;
    goto L_a25b50;
L_a25b2c:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[1] = 0x503u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa25b3cu; f_a2442c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x504u;
L_a25b50:;
    c->r[14] = 0xa25b54u; f_a2442c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x506u;
    goto L_a25ba0;
L_a25b68:;
    c->r[5] = c->r[4] + 0x34u;
    c->r[1] = 0x503u;
    c->r[0] = c->r[5];
    c->r[14] = 0xa25b78u; f_a2442c(c);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x504u;
    c->r[14] = 0xa25b90u; f_a2442c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25bb8; }
    c->r[0] = c->r[5];
    c->r[1] = 0x505u;
L_a25ba0:;
    c->r[14] = 0xa25ba4u; f_a2442c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = 0x1u; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a25bb4:;
    c->r[4] = 0x1u;
L_a25bb8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a25bc0(Cpu *restrict c) {
    FN_ENTER(0xa25bc0u);
L_a25bc0:;
    c->r[0] = c->r[0] - 0x2cu;
    __attribute__((musttail)) return f_a25a38(c);
}
void f_a25bc8(Cpu *restrict c) {
    FN_ENTER(0xa25bc8u);
L_a25bc8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a25ca0; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25c24; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa25bfcu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25c24; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800a0000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xa25c24u; rt_dispatch(c);
L_a25c24:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa25c34u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25c98; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa25c54u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa25c68u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa25c70u; f_a239a0(c);
    c->r[1] = 0x501u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_CS) { goto L_a25c98; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = 0x37u;
    c->r[3] = 0x1u;
    c->r[0] = ~0x0u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a25cac; }
L_a25c98:;
    c->r[0] = c->r[4];
    c->r[14] = 0xa25ca0u; f_a239a0(c);
L_a25ca0:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a25cac:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a25cb4(Cpu *restrict c) {
    FN_ENTER(0xa25cb4u);
L_a25cb4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a25d8c; }
    c->r[5] = c->r[0] - 0x2cu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25d10; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa25ce8u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a25d10; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    c->r[2] = 0x0u;
    c->r[3] = 0x80000000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x800a0000u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[6]; c->r[14] = 0xa25d10u; rt_dispatch(c);
L_a25d10:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa25d20u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a25d84; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa25d40u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa25d54u; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa25d5cu; f_a239a0(c);
    c->r[1] = 0x501u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_CS) { goto L_a25d84; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[2] = 0x37u;
    c->r[3] = 0x1u;
    c->r[0] = ~0x0u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a25d98; }
L_a25d84:;
    c->r[0] = c->r[4];
    c->r[14] = 0xa25d8cu; f_a239a0(c);
L_a25d8c:;
    c->r[0] = 0x0u;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a25d98:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a25da0(Cpu *restrict c) {
    FN_ENTER(0xa25da0u);
L_a25da0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a25e00; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa25dbcu; f_a239a0(c);
    c->r[1] = 0x501u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_a25e00; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xa25dd8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa25df4u: goto L_a25df4; case 0xa25e08u: goto L_a25e08; case 0xa25e14u: goto L_a25e14; case 0xa25e20u: goto L_a25e20; case 0xa25e2cu: goto L_a25e2c; case 0xa25e38u: goto L_a25e38; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a25df4:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25e40;
L_a25e00:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a25e08:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25e40;
L_a25e14:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25e40;
L_a25e20:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25e40;
L_a25e2c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25e40;
L_a25e38:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_a25e40:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a25e50(Cpu *restrict c) {
    FN_ENTER(0xa25e50u);
L_a25e50:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a25eb4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa25e6cu; f_a239a0(c);
    c->r[1] = 0x501u;
    c->r[1] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_a25eb4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xa25e88u + 0x8u;
    c->r[0] = c->r[5] - 0x2cu;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xa25ea8u: goto L_a25ea8; case 0xa25ebcu: goto L_a25ebc; case 0xa25ec8u: goto L_a25ec8; case 0xa25ed4u: goto L_a25ed4; case 0xa25ee0u: goto L_a25ee0; case 0xa25eecu: goto L_a25eec; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a25ea8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25ef4;
L_a25eb4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a25ebc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25ef4;
L_a25ec8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25ef4;
L_a25ed4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25ef4;
L_a25ee0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a25ef4;
L_a25eec:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_a25ef4:;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a25f00(Cpu *restrict c) {
    FN_ENTER(0xa25f00u);
L_a25f00:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa25f1cu; f_a239a0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa25f24u; f_a239a0(c);
    c->r[1] = 0x504u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x94u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a25f3c(Cpu *restrict c) {
    FN_ENTER(0xa25f3cu);
L_a25f3c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa25f58u; f_a239a0(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa25f60u; f_a239a0(c);
    c->r[1] = 0x504u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[4] + 0x68u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a25f78(Cpu *restrict c) {
    FN_ENTER(0xa25f78u);
L_a25f78:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa25f9cu; rt_dispatch(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xa25fa4u; f_a239a0(c);
    c->r[1] = 0x501u;
    c->r[0] = c->r[0] - c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_a2604c; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xa25fc0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa25fdcu: goto L_a25fdc; case 0xa25ff4u: goto L_a25ff4; case 0xa2600cu: goto L_a2600c; case 0xa26024u: goto L_a26024; case 0xa2603cu: goto L_a2603c; case 0xa2604cu: goto L_a2604c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a25fdc:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa25fecu; f_a251d0(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a25ff4:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa26004u; f_a25390(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a2600c:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa2601cu; f_a25550(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a26024:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa26034u; f_a2579c(c);
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a2603c:;
    c->r[2] = c->r[13] + 0x4u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa2604cu; f_a25964(c);
L_a2604c:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a26054(Cpu *restrict c) {
    FN_ENTER(0xa26054u);
L_a26054:;
    c->r[0] = c->r[0] - 0x2cu;
    __attribute__((musttail)) return f_a25f78(c);
}
void f_a2605c(Cpu *restrict c) {
    FN_ENTER(0xa2605cu);
L_a2605c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa26078u; f_15efda0(c);
    c->r[1] = 0x10f8f44u;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[5] = 0xa2608cu + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0xa26098u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa260b0u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x10u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a260d4(Cpu *restrict c) {
    FN_ENTER(0xa260d4u);
L_a260d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101afecu;
    { uint32_t ea = 0xa260e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1013344u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xa26108u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2];
    c->r[2] = 0x80u;
    c->pc = c->r[3]; c->r[14] = 0xa2611cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a26130(Cpu *restrict c) {
    FN_ENTER(0xa26130u);
L_a26130:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101af90u;
    { uint32_t ea = 0xa26144u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x10132f4u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa26158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa26164u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[3] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26184u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a26194(Cpu *restrict c) {
    FN_ENTER(0xa26194u);
L_a26194:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x101af2cu;
    { uint32_t ea = 0xa261a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1013290u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa261bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa261c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[3] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa261e8u; rt_dispatch(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a261fc(Cpu *restrict c) {
    FN_ENTER(0xa261fcu);
L_a261fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a26224; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a26224:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a262b8; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a262b4; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26270; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26270:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a262b4; }
L_a26278:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26278; }
L_a262b4:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a262b8:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa262d0u; rt_dispatch(c);
    c->r[1] = 0x0u;
    c->r[0] = f_adds(c, c->r[0], c->r[5]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a262e8(Cpu *restrict c) {
    FN_ENTER(0xa262e8u);
L_a262e8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a263dc; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a2631c; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a2631c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a263b0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a263ac; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26368; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26368:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a263ac; }
L_a26370:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26370; }
L_a263ac:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a263b0:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa263c8u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a263f4; }
L_a263dc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[1] << 8);
L_a263f4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a263f8(Cpu *restrict c) {
    FN_ENTER(0xa263f8u);
L_a263f8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a264ec; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a2642c; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a2642c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a264c0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a264bc; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26478; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26478:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a264bc; }
L_a26480:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26480; }
L_a264bc:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a264c0:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa264d8u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26514; }
L_a264ec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[3] << 8);
    c->r[1] = c->r[5] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
L_a26514:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a26518(Cpu *restrict c) {
    FN_ENTER(0xa26518u);
L_a26518:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a2660c; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a2654c; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a2654c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a265e0; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a265dc; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26598; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26598:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a265dc; }
L_a265a0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a265a0; }
L_a265dc:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a265e0:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa265f8u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26658; }
L_a2660c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD8(ea); c->r[3] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[5] << 8);
    c->r[2] = c->r[6] | (c->r[7] << 8);
    c->r[1] = c->r[14] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = c->r[12] | (c->r[3] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a26658:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a26660(Cpu *restrict c) {
    FN_ENTER(0xa26660u);
L_a26660:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2666c(Cpu *restrict c) {
    FN_ENTER(0xa2666cu);
L_a2666c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a26760; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a266a0; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a266a0:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a26734; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26730; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a266ec; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a266ec:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26730; }
L_a266f4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a266f4; }
L_a26730:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26734:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa2674cu; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26778; }
L_a26760:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[1] << 8);
L_a26778:;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[0]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a26780(Cpu *restrict c) {
    FN_ENTER(0xa26780u);
L_a26780:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a26874; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a267b4; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a267b4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a26848; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26844; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26800; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26800:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26844; }
L_a26808:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26808; }
L_a26844:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26848:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26860u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a2689c; }
L_a26874:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[3] << 8);
    c->r[1] = c->r[5] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
L_a2689c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a268a0(Cpu *restrict c) {
    FN_ENTER(0xa268a0u);
L_a268a0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a26994; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a268d4; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a268d4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a26968; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26964; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26920; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26920:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26964; }
L_a26928:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26928; }
L_a26964:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26968:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26980u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a269e0; }
L_a26994:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x5u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD8(ea); c->r[3] = ea; c->r[14] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | (c->r[5] << 8);
    c->r[2] = c->r[6] | (c->r[7] << 8);
    c->r[1] = c->r[14] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = c->r[12] | (c->r[3] << 8);
    c->r[1] = c->r[1] | (c->r[2] << 16);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a269e0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a269e8(Cpu *restrict c) {
    FN_ENTER(0xa269e8u);
L_a269e8:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a269f4(Cpu *restrict c) {
    FN_ENTER(0xa269f4u);
L_a269f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a26ae8; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a26a28; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a26a28:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a26abc; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26ab8; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26a74; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26a74:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26ab8; }
L_a26a7c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26a7c; }
L_a26ab8:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26abc:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26ad4u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26b18; }
L_a26ae8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    c->r[1] = c->r[5] | (c->r[1] << 8);
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a26b18:;
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a26b24(Cpu *restrict c) {
    FN_ENTER(0xa26b24u);
L_a26b24:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a26c18; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a26b58; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a26b58:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a26bec; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26be8; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26ba4; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26ba4:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26be8; }
L_a26bac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26bac; }
L_a26be8:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26bec:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26c04u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26c30; }
L_a26c18:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; c->v.d[0] = LD64(ea + 0u); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a26c30:;
    c->v.d[0] = 0x0ull;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a26c38(Cpu *restrict c) {
    FN_ENTER(0xa26c38u);
L_a26c38:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[8] = c->r[1];
    c->r[6] = c->r[0];
    c->r[5] = 0x0u;
    c->r[7] = f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_a26d60; }
L_a26c50:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_a26d38; }
    c->r[4] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a26c78; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[2]); }
L_a26c78:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a26d0c; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26d08; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26cc4; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26cc4:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26d08; }
L_a26ccc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26ccc; }
L_a26d08:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26d0c:;
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26d24u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[4]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26e60; }
L_a26d38:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a26e60; }
    { uint32_t ea = c->r[8] + c->r[5]; ST8(ea, c->r[1]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_CC) { goto L_a26c50; }
L_a26d60:;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_a26d68:;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_HI) { goto L_a26e48; }
    c->r[4] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a26d88; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[2]); }
L_a26d88:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a26e1c; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26e18; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26dd4; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a26dd4:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a26e18; }
L_a26ddc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a26ddc; }
L_a26e18:;
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a26e1c:;
    { uint32_t ea = c->r[6] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[4];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26e34u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[4]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a26e60; }
L_a26e48:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a26d68; }
L_a26e60:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[5]; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a26e70(Cpu *restrict c) {
    FN_ENTER(0xa26e70u);
L_a26e70:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa26e8cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[5] - 0x1u;
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t r = c->r[0] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { c->r[5] = f_subs(c, c->r[5], c->r[0]); }
    if (COND_EQ) { goto L_a26fb4; }
    c->r[6] = 0x0u;
L_a26eb0:;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_a26ec4; }
    c->r[0] = c->r[2];
    c->r[2] = c->r[1];
    goto L_a26f9c;
L_a26ec4:;
    c->r[7] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = c->r[2];
    if (COND_NE) { goto L_a26edc; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_a26edc:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a26f70; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a26f6c; }
    c->r[0] = c->r[2] + 0x1u;
    c->r[2] = c->r[2] - 0x2u;
    c->r[3] = c->r[0] - c->r[1];
    c->r[0] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a26f28; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[3]); }
    c->r[0] = 0x2u;
L_a26f28:;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_a26f6c; }
L_a26f30:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[1] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] + c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[1]); }
    if (COND_NE) { goto L_a26f30; }
L_a26f6c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a26f70:;
    c->r[2] = c->r[0] - c->r[7];
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa26f88u; rt_dispatch(c);
    c->r[0] = f_adds(c, c->r[0], c->r[7]);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_a26fa4; }
L_a26f9c:;
    c->r[1] = c->r[2] + 0x1u;
    c->r[2] = c->r[0];
L_a26fa4:;
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_NE) { goto L_a26eb0; }
L_a26fb4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a26fb8(Cpu *restrict c) {
    FN_ENTER(0xa26fb8u);
L_a26fb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa26fd0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] - c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a26fe4(Cpu *restrict c) {
    FN_ENTER(0xa26fe4u);
L_a26fe4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a27108; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0x0u;
L_a27004:;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LS) { goto L_a27018; }
    c->r[2] = c->r[1];
    c->r[1] = c->r[0];
    goto L_a270f0;
L_a27018:;
    c->r[7] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a27030; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[2]); }
L_a27030:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a270c4; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a270c0; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2707c; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a2707c:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a270c0; }
L_a27084:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a27084; }
L_a270c0:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a270c4:;
    { uint32_t ea = c->r[5] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[7];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa270dcu; rt_dispatch(c);
    c->r[2] = f_adds(c, c->r[0], c->r[7]);
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_a270f8; }
L_a270f0:;
    c->r[0] = c->r[1] + 0x1u;
    c->r[1] = c->r[2];
L_a270f8:;
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_NE) { goto L_a27004; }
L_a27108:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a2710c(Cpu *restrict c) {
    FN_ENTER(0xa2710cu);
L_a2710c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[7] = c->r[1];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_a27150; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xa27144u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[5];
    goto L_a271b4;
L_a27150:;
    c->r[6] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_a27164; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
L_a27164:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[6];
    c->r[1] = c->r[1] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xa27178u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[7] + c->r[6];
    c->r[2] = c->r[5] - c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa27190u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa271a8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + c->r[6];
    c->r[0] = 0x0u;
L_a271b4:;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a271c0(Cpu *restrict c) {
    FN_ENTER(0xa271c0u);
L_a271c0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_NE) { goto L_a27214; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa271ecu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[6];
    c->r[2] = 0x0u;
    c->r[6] = c->r[4];
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[5];
    c->pc = c->r[7]; c->r[14] = 0xa27210u; rt_dispatch(c);
    goto L_a27228;
L_a27214:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->pc = c->r[7]; c->r[14] = 0xa27220u; rt_dispatch(c);
    c->r[6] = c->r[4] + 0xcu;
    c->r[4] = c->r[4] + 0x10u;
L_a27228:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a27238(Cpu *restrict c) {
    FN_ENTER(0xa27238u);
L_a27238:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a27248(Cpu *restrict c) {
    FN_ENTER(0xa27248u);
L_a27248:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a2733c; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a2727c; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a2727c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a27310; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a2730c; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a272c8; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a272c8:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a2730c; }
L_a272d0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a272d0; }
L_a2730c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a27310:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa27328u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a27398; }
L_a2733c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + 0x4u;
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[12] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[14] | (c->r[2] << 8);
    c->r[3] = c->r[3] | (c->r[6] << 8);
    c->r[1] = c->r[7] | (c->r[1] << 8);
    c->r[1] = c->r[3] | (c->r[1] << 16);
    c->r[3] = c->r[12] | (c->r[5] << 8);
    c->r[2] = c->r[3] | (c->r[2] << 16);
    c->v.s[1] = c->r[1];
    c->v.s[0] = c->r[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a27398:;
    c->r[0] = 0x1018be8u;
    { uint32_t ea = 0xa273a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a273ac(Cpu *restrict c) {
    FN_ENTER(0xa273acu);
L_a273ac:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0xbu;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a274a4; }
    c->r[5] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a273e4; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a273e4:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a27478; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a27474; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[0];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a27430; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a27430:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a27474; }
L_a27438:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a27438; }
L_a27474:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a27478:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa27490u; rt_dispatch(c);
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a27530; }
L_a274a4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[0] + 0x4u;
    c->r[2] = c->r[1];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[14] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[3]); }
    c->r[2] = c->r[0] + 0x8u;
    c->r[0] = c->r[0] + 0xcu;
    { uint32_t ea = c->r[6] + c->r[3]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[11] = v; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[2] = c->r[2] | (c->r[3] << 8);
    c->r[1] = c->r[5] | (c->r[1] << 8);
    c->r[3] = c->r[11] | (c->r[6] << 8);
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[2] = c->r[10] | (c->r[7] << 8);
    c->r[7] = c->r[14] | (c->r[9] << 8);
    c->r[2] = c->r[2] | (c->r[3] << 16);
    c->r[3] = c->r[12] | (c->r[8] << 8);
    c->v.s[2] = c->r[1];
    c->r[3] = c->r[3] | (c->r[7] << 16);
    c->v.s[1] = c->r[2];
    c->v.s[0] = c->r[3];
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_a27530:;
    c->r[0] = 0x10125dcu;
    { uint32_t ea = 0xa2753cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a27548(Cpu *restrict c) {
    FN_ENTER(0xa27548u);
L_a27548:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[14] + 0xfu;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27640; }
    c->r[5] = c->r[1] - c->r[14];
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[2] = c->r[1];
    if (COND_NE) { goto L_a27580; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
L_a27580:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a27614; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[2] + c->r[14]; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    if (COND_EQ) { goto L_a27610; }
    c->r[2] = c->r[1] + 0x1u;
    c->r[3] = c->r[2] - c->r[14];
    c->r[2] = c->r[1] - 0x2u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a275cc; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[1] + c->r[3];
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    c->r[1] = 0x2u;
L_a275cc:;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_EQ) { goto L_a27610; }
L_a275d4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[0] + c->r[1];
    c->r[0] = c->r[0] + c->r[2];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    if (COND_NE) { goto L_a275d4; }
L_a27610:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a27614:;
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - c->r[5];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + c->r[5];
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa2762cu; rt_dispatch(c);
    c->r[14] = 0x0u;
    c->r[1] = f_adds(c, c->r[0], c->r[5]);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a27714; }
L_a27640:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[14] + 0x8u;
    c->r[1] = c->r[3];
    c->r[6] = c->r[3];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[1] + c->r[14]; uint32_t v = LD8(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[14] + 0x4u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[14] + 0xcu;
    { uint32_t ea = c->r[6] + c->r[1]; uint32_t v = LD8(ea); c->r[6] = ea; c->r[10] = v; }
    { uint32_t ea = c->r[6] + 0x1u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD8(ea); c->r[11] = v; }
    { uint32_t ea = c->r[6] + 0x3u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[3] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[0] = c->r[2] | (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[3] << 8);
    c->r[2] = c->r[6] | (c->r[12] << 8);
    c->r[3] = c->r[11] | (c->r[8] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = c->r[7] | (c->r[5] << 8);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = c->r[10] | (c->r[9] << 8);
    c->v.s[3] = c->r[0];
    c->r[2] = c->r[2] | (c->r[3] << 16);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[2] = c->r[1];
    c->v.s[1] = c->r[2];
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[13] + 4u; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[7] = c->r[7] | (c->r[6] << 8);
    c->r[3] = c->r[3] | (c->r[7] << 16);
    c->r[7] = c->r[14] + 0x10u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    c->v.s[0] = c->r[3];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_a27714:;
    c->r[0] = 0x1019718u;
    { uint32_t ea = 0xa27720u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->v.s[0] = LD32(ea + 0u); c->v.s[1] = LD32(ea + 4u); c->v.s[2] = LD32(ea + 8u); c->v.s[3] = LD32(ea + 12u); }
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a2772c(Cpu *restrict c) {
    FN_ENTER(0xa2772cu);
L_a2772c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1019990u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[3];
    { uint32_t ea = 0xa27748u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x1011ce8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xa27764u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2];
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa27778u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[5] << 3);
    c->pc = c->r[3]; c->r[14] = 0xa27794u; rt_dispatch(c);
    c->r[1] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x31cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x320u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x324u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a277c4(Cpu *restrict c) {
    FN_ENTER(0xa277c4u);
L_a277c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1019900u;
    { uint32_t ea = 0xa277d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a27844; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a27810; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa27804u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_a27810:;
    c->r[0] = 0x1011c30u;
    { uint32_t ea = 0xa2781cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa27828u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2783cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_a27844:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a27854(Cpu *restrict c) {
    FN_ENTER(0xa27854u);
L_a27854:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1019870u;
    { uint32_t ea = 0xa27868u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a278cc; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a278a0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa27894u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_a278a0:;
    c->r[0] = 0x1011ba0u;
    { uint32_t ea = 0xa278acu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa278b8u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa278ccu; rt_dispatch(c);
L_a278cc:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a278e0(Cpu *restrict c) {
    FN_ENTER(0xa278e0u);
L_a278e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27914; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27910u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27914:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a27934(Cpu *restrict c) {
    FN_ENTER(0xa27934u);
L_a27934:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = (c->r[2] >> 24);
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[2] >> 16);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    return;
}
void f_a27958(Cpu *restrict c) {
    FN_ENTER(0xa27958u);
L_a27958:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); c->r[0] = ea; }
    c->r[1] = (c->r[3] >> 8);
    { uint32_t ea = c->r[0] + 0x5u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[2] >> 24);
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[2] >> 16);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[2] >> 8);
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[3]); c->r[0] = ea; }
    c->r[1] = (c->r[3] >> 24);
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = (c->r[3] >> 16);
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    return;
}
void f_a27998(Cpu *restrict c) {
    FN_ENTER(0xa27998u);
L_a27998:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a279cc; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa279c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a279cc:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a279fc(Cpu *restrict c) {
    FN_ENTER(0xa279fcu);
L_a279fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27a34; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27a30u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27a34:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a27a80(Cpu *restrict c) {
    FN_ENTER(0xa27a80u);
L_a27a80:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27ab4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27ab0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27ab4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a27ad4(Cpu *restrict c) {
    FN_ENTER(0xa27ad4u);
L_a27ad4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27b08; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27b04u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27b08:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a27b38(Cpu *restrict c) {
    FN_ENTER(0xa27b38u);
L_a27b38:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[6] = c->r[2];
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27b70; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27b6cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27b70:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 8);
    { uint32_t ea = c->r[1] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = (c->r[5] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[5] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a27bbc(Cpu *restrict c) {
    FN_ENTER(0xa27bbcu);
L_a27bbc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->v.s[16] = c->v.s[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27bf4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27bf0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27bf4:;
    c->r[2] = c->v.s[16];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = (c->r[2] >> 24);
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 16);
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 8);
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a27c2c(Cpu *restrict c) {
    FN_ENTER(0xa27c2cu);
L_a27c2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint64_t t0 = c->v.d[0] | c->v.d[0]; c->v.d[8] = t0; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a27c64; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa27c60u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27c64:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[0]; ST64(ea + 0u, c->v.d[8]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a27c84(Cpu *restrict c) {
    FN_ENTER(0xa27c84u);
L_a27c84:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a27c90(Cpu *restrict c) {
    FN_ENTER(0xa27c90u);
L_a27c90:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a27c9c(Cpu *restrict c) {
    FN_ENTER(0xa27c9cu);
L_a27c9c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa27cb8u; f_15efd88(c);
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a27cd0(Cpu *restrict c) {
    FN_ENTER(0xa27cd0u);
L_a27cd0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[6] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + c->r[4];
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_a27d08; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa27d04u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27d08:;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LS) { goto L_a27d3c; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[6];
    c->r[14] = 0xa27d28u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a27d3c:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a27d58(Cpu *restrict c) {
    FN_ENTER(0xa27d58u);
L_a27d58:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[3];
    c->r[9] = c->r[2];
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_a27f54; }
    c->r[10] = 0x0u;
L_a27d78:;
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[9];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a27f48; }
L_a27d88:;
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = c->r[1] - 0x42u;
    (void)f_subs(c, c->r[1], 0x39u);
    if (COND_HI) { goto L_a27f3c; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xa27da4u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xa27e90u: goto L_a27e90; case 0xa27ed4u: goto L_a27ed4; case 0xa27ee4u: goto L_a27ee4; case 0xa27f00u: goto L_a27f00; case 0xa27f10u: goto L_a27f10; case 0xa27f28u: goto L_a27f28; case 0xa27f3cu: goto L_a27f3c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a27e90:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_a27eb8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xa27eb4u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a27eb8:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    goto L_a27f3c;
L_a27ed4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a27f34;
L_a27ee4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xa27ef8u; rt_dispatch(c);
    c->r[6] = c->r[6] + 0x8u;
    goto L_a27f3c;
L_a27f00:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = c->r[6] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a27f34;
L_a27f10:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[0], 0x7du);
    if (COND_EQ) { goto L_a27f28; }
L_a27f1c:;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7du);
    if (COND_NE) { goto L_a27f1c; }
L_a27f28:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
L_a27f34:;
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa27f3cu; rt_dispatch(c);
L_a27f3c:;
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a27d88; }
L_a27f48:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], c->r[8]);
    if (COND_NE) { goto L_a27d78; }
L_a27f54:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a27f58(Cpu *restrict c) {
    FN_ENTER(0xa27f58u);
L_a27f58:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[6] = c->r[0];
    c->r[5] = c->r[1];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa27f78u; rt_dispatch(c);
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a27f94(Cpu *restrict c) {
    FN_ENTER(0xa27f94u);
L_a27f94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa27facu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a27fb8(Cpu *restrict c) {
    FN_ENTER(0xa27fb8u);
L_a27fb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 4u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa27fdcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a27fe8(Cpu *restrict c) {
    FN_ENTER(0xa27fe8u);
L_a27fe8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x31cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x18u;
    c->r[2] = c->r[0];
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[3] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    c->r[2] = c->r[2] + 0xcu;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x31cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = c->r[1] + (c->r[1] << 1);
    c->r[3] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x31cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa28040u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2804c(Cpu *restrict c) {
    FN_ENTER(0xa2804cu);
L_a2804c:;
    { uint32_t ea = c->r[0] + 0x31cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    c->r[2] = c->r[1] + (c->r[1] << 1);
    c->r[2] = c->r[0] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x18u;
    { uint32_t ea = c->r[0] + 0x318u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x31cu; ST32(ea, c->r[1]); }
    return;
}
void f_a2806c(Cpu *restrict c) {
    FN_ENTER(0xa2806cu);
L_a2806c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a2824c; }
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CS) { goto L_a281c4; }
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
    goto L_a28184;
L_a280a8:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa280b8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[7] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CS) { goto L_a28124; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa280ecu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8] - c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0xa28108u; rt_dispatch(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa28120u; rt_dispatch(c);
    goto L_a28144;
L_a28124:;
    c->r[1] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8] - c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0xa28144u; rt_dispatch(c);
L_a28144:;
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] - c->r[0];
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a28198;
L_a28184:;
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[7] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_a281a0; }
L_a28198:;
    c->r[2] = c->r[6];
    goto L_a281b4;
L_a281a0:;
    c->r[2] = c->r[2] + (c->r[7] << 3);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_a280a8; }
L_a281b4:;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_CC) { goto L_a28184; }
L_a281c4:;
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t r = c->r[2] & 0x1u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a28244; }
    { uint32_t ea = c->r[4] + 0x324u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CS) { goto L_a28244; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 3); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa281f8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1u;
L_a28244:;
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_a2824c:;
    c->r[0] = 0x0u;
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a28258(Cpu *restrict c) {
    FN_ENTER(0xa28258u);
L_a28258:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa28274u; rt_dispatch(c);
    c->r[1] = c->r[5] - 0x1u;
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { c->r[5] = f_subs(c, c->r[5], c->r[0]); }
    if (COND_EQ) { goto L_a282c8; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
L_a2828c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_a282ac; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa282a8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a282ac:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_a2828c; }
L_a282c8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a282cc(Cpu *restrict c) {
    FN_ENTER(0xa282ccu);
L_a282cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[5] + 0x318u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CC) { goto L_a282fc; }
    goto L_a28334;
L_a282f0:;
    c->r[4] = c->r[4] + 0x1u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_CS) { goto L_a28334; }
L_a282fc:;
    { uint32_t ea = c->r[0] + (c->r[4] << 3); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_a282f0; }
    c->r[2] = c->r[0] + (c->r[4] << 3);
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_a282f0; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a28334:;
    { uint32_t ea = c->r[0] + (c->r[3] << 3); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa28348u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x318u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x320u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 3);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a283a8(Cpu *restrict c) {
    FN_ENTER(0xa283a8u);
L_a283a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa283c8u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 4u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa283dcu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 8u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a283f4(Cpu *restrict c) {
    FN_ENTER(0xa283f4u);
L_a283f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4]);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa28414u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 4u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa28428u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 8u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xa2843cu; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 12u);
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a28454(Cpu *restrict c) {
    FN_ENTER(0xa28454u);
L_a28454:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1018c68u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[3];
    { uint32_t ea = 0xa28470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    c->r[0] = 0x1010fc0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = 0xa2848cu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2];
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa284a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (c->r[5] << 3);
    c->pc = c->r[3]; c->r[14] = 0xa284bcu; rt_dispatch(c);
    c->r[1] = c->r[4] + 0x18u;
    { uint32_t ea = c->r[4] + 0x318u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x31cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x320u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1018bf4u;
    { uint32_t ea = c->r[4] + 0x324u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xa284e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a28500(Cpu *restrict c) {
    FN_ENTER(0xa28500u);
L_a28500:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1018bc4u;
    { uint32_t ea = 0xa28514u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a28578; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a2854c; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; c->r[14] = 0xa28540u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_a2854c:;
    c->r[0] = 0x1010ef4u;
    { uint32_t ea = 0xa28558u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28564u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x320u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28578u; rt_dispatch(c);
L_a28578:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a2858c(Cpu *restrict c) {
    FN_ENTER(0xa2858cu);
L_a2858c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a285c0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa285bcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a285c0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = rev16_32(c->r[5]);
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a285e0(Cpu *restrict c) {
    FN_ENTER(0xa285e0u);
L_a285e0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[2]); }
    return;
}
void f_a285f0(Cpu *restrict c) {
    FN_ENTER(0xa285f0u);
L_a285f0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a28624; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa28620u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28624:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[5]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a28640(Cpu *restrict c) {
    FN_ENTER(0xa28640u);
L_a28640:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a28678; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa28674u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28678:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[6]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = __builtin_bswap32(c->r[5]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a2869c(Cpu *restrict c) {
    FN_ENTER(0xa2869cu);
L_a2869c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a286d0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa286ccu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a286d0:;
    c->r[1] = (c->r[5] >> 8) & 0xffu;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | (c->r[5] << 8);
    c->r[0] = c->r[2] + c->r[0];
    { uint32_t ea = c->r[0]; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a286f4(Cpu *restrict c) {
    FN_ENTER(0xa286f4u);
L_a286f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a28728; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa28724u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28728:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[5]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a28744(Cpu *restrict c) {
    FN_ENTER(0xa28744u);
L_a28744:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[6] = c->r[3];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a2877c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa28778u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2877c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[6]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = __builtin_bswap32(c->r[5]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a287a0(Cpu *restrict c) {
    FN_ENTER(0xa287a0u);
L_a287a0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->v.s[16] = c->v.s[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x3u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a287d8; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa287d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a287d8:;
    c->r[2] = c->v.s[16];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[2]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a287fc(Cpu *restrict c) {
    FN_ENTER(0xa287fcu);
L_a287fc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint64_t v = c->v.d[0]; c->r[5] = (uint32_t)v; c->r[6] = (uint32_t)(v >> 32); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x7u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_a28830; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2882cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28830:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = __builtin_bswap32(c->r[6]);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = __builtin_bswap32(c->r[5]);
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a28854(Cpu *restrict c) {
    FN_ENTER(0xa28854u);
L_a28854:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    c->r[11] = c->r[2];
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_a28ad4; }
    c->r[8] = 0x0u;
    c->r[4] = ~0x0u;
L_a2887c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[10] = c->r[11];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2891c; }
    goto L_a28ac4;
L_a28890:;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x7du);
    if (COND_EQ) { goto L_a28904; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a288ac:;
    c->r[5] = c->r[10] + 0x1u;
    c->r[3] = 0x0u;
L_a288b4:;
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[10]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[0] - 0x30u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[5], 0x9u);
    if (COND_HI) { goto L_a288e4; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    (void)f_subs(c, c->r[0], 0x7du);
    c->r[3] = c->r[5] + (c->r[3] << 1);
    c->r[5] = c->r[10] + 0x1u;
    if (COND_NE) { goto L_a288b4; }
    goto L_a28904;
L_a288e4:;
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[0], 0x7du);
    c->r[5] = c->r[4] + sh_lsl(c->r[5], c->r[3]);
    c->r[5] = c->r[5] & sh_lsr(c->r[12], c->r[2]);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x20u - c->r[2];
    c->r[1] = c->r[1] | sh_lsl(c->r[5], c->r[3]);
    if (COND_NE) { goto L_a288ac; }
L_a28904:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa28914u; rt_dispatch(c);
    c->r[6] = c->r[6] + 0x4u;
    goto L_a28ab8;
L_a2891c:;
    c->r[1] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = c->r[1] - 0x42u;
    (void)f_subs(c, c->r[1], 0x39u);
    if (COND_HI) { goto L_a28ab8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xa28938u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xa28890u: goto L_a28890; case 0xa28a24u: goto L_a28a24; case 0xa28a68u: goto L_a28a68; case 0xa28a78u: goto L_a28a78; case 0xa28a88u: goto L_a28a88; case 0xa28aa4u: goto L_a28aa4; case 0xa28ab8u: goto L_a28ab8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a28a24:;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_a28a4c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xa28a48u; rt_dispatch(c);
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28a4c:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    goto L_a28ab8;
L_a28a68:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a28ab0;
L_a28a78:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_a28ab0;
L_a28a88:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[1]; c->r[14] = 0xa28a9cu; rt_dispatch(c);
    c->r[6] = c->r[6] + 0x8u;
    goto L_a28ab8;
L_a28aa4:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[6] = c->r[6] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
L_a28ab0:;
    c->r[0] = c->r[7];
    c->pc = c->r[2]; c->r[14] = 0xa28ab8u; rt_dispatch(c);
L_a28ab8:;
    { uint32_t ea = c->r[10] + 0x1u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2891c; }
L_a28ac4:;
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_NE) { goto L_a2887c; }
L_a28ad4:;
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a28adc(Cpu *restrict c) {
    FN_ENTER(0xa28adcu);
L_a28adc:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a28aec(Cpu *restrict c) {
    FN_ENTER(0xa28aecu);
L_a28aec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x10185e4u;
    { uint32_t ea = 0xa28afcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa28b00u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x658u;
    c->pc = c->r[4]; c->r[14] = 0xa28b18u; rt_dispatch(c);
    c->r[1] = 0x10185bcu;
    c->r[2] = 0x10185bcu;
    { uint32_t ea = 0xa28b28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa28b2cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a28b70(Cpu *restrict c) {
    FN_ENTER(0xa28b70u);
L_a28b70:;
    c->r[1] = 0x1018564u;
    c->r[2] = 0x1018564u;
    { uint32_t ea = 0xa28b80u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa28b84u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    return;
}
void f_a28bc4(Cpu *restrict c) {
    FN_ENTER(0xa28bc4u);
L_a28bc4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1018508u;
    c->r[1] = 0x1018508u;
    { uint32_t ea = 0xa28bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa28be0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a28c40; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a28c24; }
    c->r[0] = 0x1010840u;
    { uint32_t ea = 0xa28c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28c18u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28c24:;
    c->r[14] = 0xa28c28u; f_15f03e8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10184acu;
    { uint32_t ea = 0xa28c3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_a28c40:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a28c8c; }
L_a28c4c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a28c4c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a28c84; }
    c->r[0] = 0x100ff10u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa28c78u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28c84u; rt_dispatch(c);
L_a28c84:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_a28c8c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a28cd8; }
L_a28c98:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a28c98; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a28cd0; }
    c->r[0] = 0x100fec4u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa28cc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28cd0u; rt_dispatch(c);
L_a28cd0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_a28cd8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a28cf8(Cpu *restrict c) {
    FN_ENTER(0xa28cf8u);
L_a28cf8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[1] = 0x10183d8u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa28d10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a28d48; }
    c->r[0] = 0x101071cu;
    { uint32_t ea = 0xa28d30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28d3cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28d48:;
    c->r[14] = 0xa28d4cu; f_15f03e8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1018388u;
    { uint32_t ea = 0xa28d60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a28d74(Cpu *restrict c) {
    FN_ENTER(0xa28d74u);
L_a28d74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1018358u;
    c->r[1] = 0x1018358u;
    { uint32_t ea = 0xa28d8cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa28d90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a28df0; }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a28dd4; }
    c->r[0] = 0x1010690u;
    { uint32_t ea = 0xa28dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28dc8u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a28dd4:;
    c->r[14] = 0xa28dd8u; f_15f03e8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10182fcu;
    { uint32_t ea = 0xa28decu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_a28df0:;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a28e3c; }
L_a28dfc:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a28dfc; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a28e34; }
    c->r[0] = 0x100fd60u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa28e28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28e34u; rt_dispatch(c);
L_a28e34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_a28e3c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a28e88; }
L_a28e48:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a28e48; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a28e80; }
    c->r[0] = 0x100fd14u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa28e74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa28e80u; rt_dispatch(c);
L_a28e80:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_a28e88:;
    c->r[0] = 0x101824cu;
    { uint32_t ea = 0xa28e94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa28e94u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a28ec4(Cpu *restrict c) {
    FN_ENTER(0xa28ec4u);
L_a28ec4:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a28f14; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xd27e86u;
    c->r[12] = ~0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = c->r[2] + 0x8u;
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { c->r[0] = 0xa28ef0u + c->r[1]; }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_a28f24; }
    c->r[3] = 0x0u;
L_a28ef8:;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2eu);
    if (COND_EQ) { goto L_a28f20; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_CC) { goto L_a28ef8; }
    goto L_a28f24;
L_a28f14:;
    c->r[0] = 0xd450b2u;
    c->r[0] = 0xa28f20u + c->r[0];
    return;
L_a28f20:;
    c->r[12] = c->r[3];
L_a28f24:;
    c->r[1] = c->r[0] + c->r[12];
    c->r[0] = 0xd27e3eu;
    (void)f_subs(c, c->r[12], 0x0u);
    c->r[0] = 0xa28f38u + c->r[0];
    if (COND_GT) { c->r[0] = c->r[1] + 0x1u; }
    return;
}
void f_a28f48(Cpu *restrict c) {
    FN_ENTER(0xa28f48u);
L_a28f48:;
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
    c->r[14] = 0xa28f80u; f_9bb638(c);
    c->r[1] = 0xd28bd8u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xa28f98u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] - 0x13u;
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
    c->r[14] = 0xa29000u; f_9bb638(c);
    c->r[1] = 0xd44fc5u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa29014u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] - 0x1au;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x8u;
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
    c->r[14] = 0xa29080u; f_9bb638(c);
    c->r[1] = 0xd2915fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa29094u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] - 0x1bu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x18u;
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
    c->r[14] = 0xa290e0u; f_9bb638(c);
    c->r[1] = 0xd3fc5du;
    c->r[1] = 0xa290ecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x20u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x810000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = 0x1017fe8u;
    { uint32_t ea = 0xa29104u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x1017fd4u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = 0xa2911cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[8]); }
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
    c->r[14] = 0xa29174u; f_9bb638(c);
    c->r[1] = 0xd44e57u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa29188u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
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
    c->r[14] = 0xa291ecu; f_9bb638(c);
    c->r[1] = 0xd44de9u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xa29200u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x28u;
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
    c->r[14] = 0xa29268u; f_9bb638(c);
    c->r[1] = 0xd44d81u;
    c->r[1] = 0xa29274u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x21u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
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
void f_a292e4(Cpu *restrict c) {
    FN_ENTER(0xa292e4u);
L_a292e4:;
    return;
}
void f_a292e8(Cpu *restrict c) {
    FN_ENTER(0xa292e8u);
L_a292e8:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_a292ec(Cpu *restrict c) {
    FN_ENTER(0xa292ecu);
L_a292ec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x2fu); }
    if (COND_NE) { goto L_a29374; }
    c->r[1] = c->r[5];
    c->r[3] = 0x3au;
    { uint32_t ea = c->r[1] + 0x1u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[3]); }
    c->r[3] = 0x61u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[3]); }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { c->r[1] = c->r[5]; }
L_a2933c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xa29344u; f_15f03f4(c);
    c->r[0] = 0x2fu;
    goto L_a29350;
L_a2934c:;
    c->r[4] = c->r[4] + 0x1u;
L_a29350:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5cu);
    if (COND_EQ) { goto L_a29368; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_a2934c; }
    goto L_a29370;
L_a29368:;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_a2934c;
L_a29370:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_a29374:;
    c->r[0] = 0xd44c7cu;
    c->r[2] = 0x4u;
    c->r[1] = 0xa29384u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa29388u; f_15f00a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a29418; }
    c->r[0] = 0xd44c6bu;
    c->r[2] = 0x9u;
    c->r[1] = 0xa293a0u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa293a4u; f_15f00a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a29464; }
    c->r[0] = 0xd44c59u;
    c->r[2] = 0x3u;
    c->r[1] = 0xa293bcu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa293c0u; f_15f00a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a294dc; }
    c->r[0] = 0xd44c46u;
    c->r[2] = 0x4u;
    c->r[1] = 0xa293d8u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa293dcu; f_15f00a0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a29524; }
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2fu;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3au;
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x70u;
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_a2933c;
L_a29418:;
    c->r[2] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[5];
    if (COND_NE) { goto L_a2933c; }
    c->r[1] = 0x2fu;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[1]); }
    c->r[1] = 0x3au;
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x70u;
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x61u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    c->r[1] = c->r[0];
    goto L_a2933c;
L_a29464:;
    c->r[2] = 0x0u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x9u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[5];
    if (COND_NE) { goto L_a2933c; }
    c->r[1] = 0x2fu;
    c->r[3] = 0x65u;
    { uint32_t ea = c->r[4] + 0x9u; ST8(ea, c->r[1]); }
    c->r[1] = 0x3au;
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[1]); }
    c->r[1] = 0x61u;
    { uint32_t ea = c->r[4] + 0x5u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[3]); }
    c->r[3] = 0x76u;
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[3]); }
    c->r[3] = 0x73u;
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xau; ST8(ea, c->r[2]); }
    c->r[2] = 0x6164u;
    c->r[3] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x61740000u;
    { uint32_t ea = c->r[3] + 0x4u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x74u;
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[0];
    goto L_a2933c;
L_a294dc:;
    c->r[0] = 0x0u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = c->r[5];
    if (COND_NE) { goto L_a2933c; }
    c->r[1] = 0x2fu;
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x3au;
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x64u;
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[1]); }
    c->r[1] = 0x73u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    c->r[1] = c->r[2];
    goto L_a2933c;
L_a29524:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[5] + 0x4u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    goto L_a2933c;
}
void f_a29544(Cpu *restrict c) {
    FN_ENTER(0xa29544u);
L_a29544:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[6] + 0x300u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[6];
    c->r[14] = 0xa29560u; f_a292ec(c);
    c->r[0] = 0xd44ab3u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa29570u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa29574u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->r[6];
    if (COND_EQ) { c->r[7] = c->r[7] + 0x2u; }
    c->r[0] = c->r[7];
    c->r[14] = 0xa29588u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29590:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a295f0; }
    c->r[5] = c->r[7];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x5cu);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[4] = c->r[5] | c->r[4];
    if (COND_NE) { goto L_a295d0; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_a295f8; }
L_a295d0:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29590; }
L_a295f0:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a29600; }
L_a295f8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
L_a29600:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a2960c(Cpu *restrict c) {
    FN_ENTER(0xa2960cu);
L_a2960c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1017ad8u;
    { uint32_t ea = 0xa2961cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa29620u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x438u;
    c->pc = c->r[4]; c->r[14] = 0xa2963cu; rt_dispatch(c);
    c->r[1] = 0x1017aacu;
    c->r[2] = ~0x0u;
    { uint32_t ea = 0xa2964cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1017aa0u;
    { uint32_t ea = 0xa2965cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x434u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x428u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x42cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x424u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x420u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x41cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x418u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x414u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x430u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a296a4(Cpu *restrict c) {
    FN_ENTER(0xa296a4u);
L_a296a4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1017a38u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0xa296bcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa296c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a296e0(Cpu *restrict c) {
    FN_ENTER(0xa296e0u);
L_a296e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x334u;
    c->r[13] = c->r[13] - 0xc00u;
    c->r[1] = c->r[0];
    c->r[0] = c->r[13] + 0x310u;
    c->r[14] = 0xa296f8u; f_a3e7f8(c);
    c->r[5] = c->r[13] + 0x10u;
    c->r[1] = c->r[0] + 0x300u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[14] = 0xa2970cu; f_15efd94(c);
    c->r[0] = c->r[5];
    c->r[14] = 0xa29714u; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_LT) { goto L_a29830; }
    c->r[0] = 0xd448efu;
    c->r[8] = c->r[13] + 0xc30u;
    c->r[10] = 0x0u;
    c->r[0] = 0xa29734u + c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10179c0u;
    { uint32_t ea = 0xa29740u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_a2973c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa29748u; f_15efd94(c);
L_a29748:;
    (void)f_subs(c, c->r[10], c->r[6]);
    if (COND_GE) { goto L_a2976c; }
    c->r[0] = c->r[5] + c->r[10];
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[0] + 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5cu);
    if (COND_NE) { goto L_a29748; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[10]; ST8(ea, c->r[0]); }
L_a2976c:;
    c->r[0] = 0x1u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0xf30u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa29780u; f_a292ec(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[2] = 0x2u;
    c->r[14] = 0xa29790u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = c->r[8];
    if (COND_EQ) { c->r[9] = c->r[9] | 0x2u; }
    c->r[0] = c->r[9];
    c->r[14] = 0xa297a4u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a297ac:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a2980c; }
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD8(ea); c->r[4] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[7] = c->r[7] | c->r[4];
    if (COND_NE) { goto L_a297ec; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a29814; }
L_a297ec:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[7];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a297ac; }
L_a2980c:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2981c; }
L_a29814:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc30u; ST8(ea, c->r[0]); }
L_a2981c:;
    c->r[0] = c->r[8];
    c->r[14] = 0xa29824u; f_15f040c(c);
    (void)f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_a2973c; }
L_a29830:;
    c->r[0] = c->r[13] + 0x310u;
    c->r[14] = 0xa29838u; f_a3eb74(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x334u;
    c->r[13] = c->r[13] + 0xc00u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a29850(Cpu *restrict c) {
    FN_ENTER(0xa29850u);
L_a29850:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x308u;
    c->r[1] = 0x1u;
    c->r[6] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x304u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0xa2986cu; f_a292ec(c);
    c->r[0] = 0xd447a7u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa2987cu + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa29880u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[6] | 0x2u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa29890u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29898:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a298f8; }
    c->r[5] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x5cu);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[4] = c->r[5] | c->r[4];
    if (COND_NE) { goto L_a298d8; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_a29900; }
L_a298d8:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29898; }
L_a298f8:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a29908; }
L_a29900:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[0]); }
L_a29908:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0xa29910u; f_15f040c(c);
    c->r[1] = 0x10177e0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xa29920u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    c->r[13] = c->r[13] + 0x308u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a2993c(Cpu *restrict c) {
    FN_ENTER(0xa2993cu);
L_a2993c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x308u;
    c->r[1] = 0x1u;
    c->r[6] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x304u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0xa29958u; f_a292ec(c);
    c->r[0] = 0xd446bbu;
    c->r[2] = 0x2u;
    c->r[1] = 0xa29968u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2996cu; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[6] | 0x2u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa2997cu; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29984:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a299e4; }
    c->r[5] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x5cu);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[4] = c->r[5] | c->r[4];
    if (COND_NE) { goto L_a299c4; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_a299ec; }
L_a299c4:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29984; }
L_a299e4:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a299f4; }
L_a299ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[0]); }
L_a299f4:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0xa299fcu; f_15f0418(c);
    c->r[1] = 0x10176f8u;
    { uint32_t ea = 0xa29a08u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0x1ffu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_a29a38; }
    c->r[1] = 0xfe00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f0000u;
    c->r[2] = c->r[0] & c->r[1];
    (void)f_subs(c, c->r[2], 0x200u);
    if (COND_EQ) { goto L_a29a48; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], 0x1000u);
    if (COND_EQ) { goto L_a29a4c; }
L_a29a38:;
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    goto L_a29a4c;
L_a29a48:;
    c->r[1] = 0x0u;
L_a29a4c:;
    c->r[0] = c->r[1];
    c->r[13] = c->r[13] + 0x308u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a29a60(Cpu *restrict c) {
    FN_ENTER(0xa29a60u);
L_a29a60:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x308u;
    c->r[1] = 0x1u;
    c->r[6] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x304u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0xa29a7cu; f_a292ec(c);
    c->r[0] = 0xd44597u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa29a8cu + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa29a90u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[6] | 0x2u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa29aa0u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29aa8:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a29b08; }
    c->r[5] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x5cu);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[4] = c->r[5] | c->r[4];
    if (COND_NE) { goto L_a29ae8; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_a29b10; }
L_a29ae8:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29aa8; }
L_a29b08:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a29b18; }
L_a29b10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[0]); }
L_a29b18:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0xa29b20u; f_15f0424(c);
    c->r[1] = 0x10175d0u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xa29b30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    c->r[13] = c->r[13] + 0x308u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a29b4c(Cpu *restrict c) {
    FN_ENTER(0xa29b4cu);
L_a29b4c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x910u;
    c->r[9] = c->r[0];
    c->r[0] = 0x1u;
    c->r[10] = c->r[13] + 0x308u;
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0x608u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[14] = 0xa29b74u; f_a292ec(c);
    c->r[0] = 0xd4449fu;
    c->r[2] = 0x2u;
    c->r[1] = 0xa29b84u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xa29b88u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = c->r[10];
    if (COND_EQ) { c->r[4] = c->r[4] | 0x2u; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa29b9cu; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29ba4:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a29c04; }
    c->r[7] = c->r[4];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[5] = c->r[7] | c->r[5];
    if (COND_NE) { goto L_a29be4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_a29c0c; }
L_a29be4:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[5];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29ba4; }
L_a29c04:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a29c14; }
L_a29c0c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x308u; ST8(ea, c->r[0]); }
L_a29c14:;
    c->r[0] = 0x1u;
    c->r[7] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13] + 0x304u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0xa29c2cu; f_a292ec(c);
    c->r[0] = 0xd443e7u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa29c3cu + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xa29c40u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[6] = c->r[7];
    if (COND_EQ) { c->r[6] = c->r[6] | 0x2u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa29c54u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29c5c:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a29cbc; }
    c->r[5] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x5cu);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[4] = c->r[5] | c->r[4];
    if (COND_NE) { goto L_a29c9c; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_a29cc4; }
L_a29c9c:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29c5c; }
L_a29cbc:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a29ccc; }
L_a29cc4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST8(ea, c->r[0]); }
L_a29ccc:;
    c->r[0] = c->r[10];
    c->r[1] = 0x3au;
    c->r[14] = 0xa29cd8u; f_15eff44(c);
    c->r[4] = c->r[0] - c->r[10];
    c->r[0] = c->r[7];
    c->r[1] = 0x3au;
    c->r[14] = 0xa29ce8u; f_15eff44(c);
    c->r[0] = c->r[0] - c->r[7];
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_a29d10; }
    c->r[0] = c->r[13] + 0x308u;
    c->r[1] = c->r[13] + 0x4u;
    c->r[14] = 0xa29d00u; f_15f0430(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x10173f0u;
    { uint32_t ea = 0xa29d10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a29dfc;
L_a29d10:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[14] = 0xa29d1cu; f_a29e28(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a29e0c; }
    c->r[5] = c->r[13] + 0x400u;
    c->r[0] = 0x1u;
    c->r[4] = c->r[5] + 0x20cu;
    { uint32_t ea = c->r[13] + 0x90cu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0xa29d48u; f_a292ec(c);
    c->r[0] = 0xd442cbu;
    c->r[2] = 0x2u;
    c->r[1] = 0xa29d58u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xa29d5cu; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[4] | 0x2u; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa29d6cu; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a29d74:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a29dd4; }
    c->r[5] = c->r[4];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[7] = c->r[7] | c->r[6];
    if (COND_NE) { goto L_a29db4; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a29ddc; }
L_a29db4:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[7];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a29d74; }
L_a29dd4:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a29de4; }
L_a29ddc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x60cu; ST8(ea, c->r[0]); }
L_a29de4:;
    c->r[4] = c->r[13] + 0x400u;
    c->r[0] = c->r[4] + 0x20cu;
    c->r[14] = 0xa29df0u; f_15f0424(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x1017300u;
    { uint32_t ea = 0xa29e00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a29dfc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
L_a29e0c:;
    c->r[13] = c->r[13] + 0x910u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a29e28(Cpu *restrict c) {
    FN_ENTER(0xa29e28u);
L_a29e28:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x8cu;
    c->r[13] = c->r[13] - 0x800u;
    c->r[4] = c->r[1];
    c->r[1] = c->r[0];
    c->r[0] = 0x101729cu;
    c->r[5] = 0x10u;
    c->r[6] = ~0x0u;
    c->r[7] = c->r[13] + 0x400u;
    c->r[2] = 0x11u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xa29e5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x448u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1017290u;
    { uint32_t ea = 0xa29e6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x450u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x45cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x458u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x454u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x87cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x870u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x874u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x86cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x868u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x864u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x860u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x85cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x878u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x48u;
    c->r[14] = 0xa29eb0u; f_a2b1ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a29f40; }
    c->r[0] = 0x1017228u;
    c->r[1] = c->r[4];
    c->r[2] = 0x13u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xa29ed0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x101721cu;
    { uint32_t ea = 0xa29ee0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x444u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x438u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x43cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x434u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x430u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x42cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x428u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x424u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x440u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0xa29f24u; f_a2b1ec(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a29f48; }
    { uint32_t ea = c->r[13] + 0x450u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_NE) { goto L_a29f50; }
    { uint32_t ea = c->r[13] + 0x454u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_a29f98;
L_a29f40:;
    c->r[4] = 0x0u;
    goto L_a2a1e4;
L_a29f48:;
    c->r[5] = 0x1u;
    goto L_a2a160;
L_a29f50:;
    { uint32_t ea = c->r[13] + 0x87cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a29f74; }
    c->r[1] = 0x101719cu;
    { uint32_t ea = 0xa29f68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa29f6cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    goto L_a29f98;
L_a29f74:;
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x884u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x880u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x880u;
    c->r[14] = 0xa29f8cu; f_15f043c(c);
    { uint32_t ea = c->r[13] + 0x880u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[4] = 0x0u; }
L_a29f98:;
    c->r[0] = 0x100f4a4u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa29fa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x10000u;
    c->pc = c->r[3]; c->r[14] = 0xa29fb8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a2a108; }
    c->r[0] = 0x1017120u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[10] = 0x0u;
    c->r[8] = c->r[13] + 0x880u;
    c->r[6] = c->r[14] + 0x48u;
    { uint32_t ea = 0xa29fe0u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1017120u;
    { uint32_t ea = 0xa29fe8u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_a29fe4:;
    { uint32_t ea = c->r[13] + 0x448u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa29ff4u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2a130; }
    { uint32_t ea = c->r[13] + 0x87cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2a048; }
    { uint32_t ea = c->r[13] + 0x458u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x454u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] + 0x10000u;
    c->r[2] = 0x10000u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { goto L_a2a034; }
    c->r[1] = c->r[3] - c->r[1];
    c->r[2] = 0x10000u;
    (void)f_subs(c, c->r[1], 0x10000u);
    if (COND_CS) { c->r[1] = c->r[2]; }
    c->r[2] = 0x10000u - c->r[1];
L_a2a034:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[3]; c->r[14] = 0xa2a040u; rt_dispatch(c);
    c->r[7] = c->r[0];
    goto L_a2a094;
L_a2a048:;
    { uint32_t ea = c->r[13] + 0x448u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[1]; c->r[14] = 0xa2a058u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x458u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x454u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x880u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[2] + 0x10000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_HI) { c->r[3] = c->r[0] - c->r[2]; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[14] = 0xa2a08cu; f_15f0448(c);
    { uint32_t ea = c->r[13] + 0x880u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x878u; ST32(ea, c->r[0]); }
L_a2a094:;
    { uint32_t ea = c->r[13] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[0] = c->r[0] + c->r[7];
    { uint32_t ea = c->r[13] + 0x458u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_a2a130; }
    { uint32_t ea = c->r[13] + 0x444u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a2a0f8; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x880u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    c->r[14] = 0xa2a0d0u; f_15f0454(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[7];
    if (COND_NE) { c->r[0] = 0x0u; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_HI) { { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); } }
L_a2a0f8:;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_a2a13c; }
    c->r[4] = f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_a29fe4; }
L_a2a108:;
    c->r[0] = 0x100f338u;
    { uint32_t ea = 0xa2a114u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa2a124u; rt_dispatch(c);
    c->r[5] = 0x0u;
    c->r[4] = 0x1u;
    goto L_a2a160;
L_a2a130:;
    c->r[0] = 0x100f310u;
    { uint32_t ea = 0xa2a13cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a2a144;
L_a2a13c:;
    c->r[0] = 0x100f304u;
    { uint32_t ea = 0xa2a148u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2a144:;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xa2a158u; rt_dispatch(c);
    c->r[4] = 0x0u;
    c->r[5] = 0x0u;
L_a2a160:;
    c->r[0] = 0x1016f8cu;
    { uint32_t ea = 0xa2a16cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x444u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2a194; }
    c->r[1] = 0x1016f84u;
    { uint32_t ea = 0xa2a188u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2a18cu; rt_dispatch(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x444u; ST32(ea, c->r[0]); }
L_a2a194:;
    c->r[0] = 0x1016f58u;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2a1a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_a2a1dc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x10u;
    c->pc = c->r[1]; c->r[14] = 0xa2a1bcu; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x13u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_a2a1d4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a1d4u; f_15f0460(c);
L_a2a1d4:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a1dcu; f_15f046c(c);
L_a2a1dc:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_EQ) { c->r[4] = 0x0u; }
L_a2a1e4:;
    c->r[0] = 0x1016f08u;
    { uint32_t ea = 0xa2a1f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[13] + 0x448u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x87cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2a218; }
    c->r[1] = 0x1016f00u;
    { uint32_t ea = 0xa2a20cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2a210u; rt_dispatch(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x87cu; ST32(ea, c->r[0]); }
L_a2a218:;
    c->r[0] = 0x1016ed4u;
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2a228u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_a2a264; }
    { uint32_t ea = c->r[13] + 0x448u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5] + 0x48u;
    c->pc = c->r[1]; c->r[14] = 0xa2a244u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x450u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x13u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_a2a25c; }
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a25cu; f_15f0460(c);
L_a2a25c:;
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a264u; f_15f046c(c);
L_a2a264:;
    c->r[0] = c->r[4] & 0x1u;
    c->r[13] = c->r[13] + 0x8cu;
    c->r[13] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a2a2b8(Cpu *restrict c) {
    FN_ENTER(0xa2a2b8u);
L_a2a2b8:;
    c->r[0] = 0x1016e4cu;
    { uint32_t ea = 0xa2a2c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a2a2c8(Cpu *restrict c) {
    FN_ENTER(0xa2a2c8u);
L_a2a2c8:;
    c->r[1] = c->r[0];
    c->r[0] = 0x1016e38u;
    { uint32_t ea = 0xa2a2d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    __attribute__((musttail)) return f_15efd94(c);
}
void f_a2a2dc(Cpu *restrict c) {
    FN_ENTER(0xa2a2dcu);
L_a2a2dc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2a2ec(Cpu *restrict c) {
    FN_ENTER(0xa2a2ecu);
L_a2a2ec:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_EQ) { { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[0] + 0x434u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_a2a31c; }
    c->r[0] = 0x1016df0u;
    { uint32_t ea = 0xa2a314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[1];
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
L_a2a31c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13];
    c->r[14] = 0xa2a33cu; f_15f043c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[0] = 0x0u; }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2a358(Cpu *restrict c) {
    FN_ENTER(0xa2a358u);
L_a2a358:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2a37cu; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a2a434; }
    { uint32_t ea = c->r[4] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2a3dc; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + c->r[5];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_a2a3bc; }
    c->r[1] = c->r[2] - c->r[1];
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_HI) { c->r[1] = c->r[5]; }
    c->r[5] = c->r[5] - c->r[1];
L_a2a3bc:;
    c->r[1] = 0x1016d3cu;
    c->r[2] = c->r[5];
    { uint32_t ea = 0xa2a3ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0xa2a3d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a2a42c;
L_a2a3dc:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2a3ecu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    if (COND_HI) { c->r[5] = c->r[0] - c->r[2]; }
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0xa2a420u; f_15f0448(c);
    { uint32_t ea = c->r[4] + 0x430u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2a42c:;
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
L_a2a434:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a2a440(Cpu *restrict c) {
    FN_ENTER(0xa2a440u);
L_a2a440:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1016c98u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[5] = 0x0u;
    if (COND_NE) { c->r[3] = 0x0u; }
    { uint32_t ea = 0xa2a460u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1016c8cu;
    { uint32_t ea = 0xa2a470u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x434u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[0] = c->r[4]; }
    { uint32_t ea = c->r[4] + 0x428u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x42cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x424u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x420u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x41cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x418u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x414u; ST32(ea, c->r[5]); }
    if (COND_NE) { c->r[14] = 0xa2a4b4u; f_a2b1ec(c); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x430u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a2a4c8(Cpu *restrict c) {
    FN_ENTER(0xa2a4c8u);
L_a2a4c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1016c1cu;
    { uint32_t ea = 0xa2a4dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2a504; }
    c->r[1] = 0x1016c14u;
    { uint32_t ea = 0xa2a4f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2a4fcu; rt_dispatch(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x434u; ST32(ea, c->r[0]); }
L_a2a504:;
    c->r[1] = 0x1016be8u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa2a514u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a2a558; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2a52cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x13u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_a2a544; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a544u; f_15f0460(c);
L_a2a544:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a54cu; f_15f046c(c);
    c->r[0] = 0x1016ba4u;
    { uint32_t ea = 0xa2a558u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2a558:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2a58c(Cpu *restrict c) {
    FN_ENTER(0xa2a58cu);
L_a2a58c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1016b58u;
    { uint32_t ea = 0xa2a5a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2a5c8; }
    c->r[1] = 0x1016b50u;
    { uint32_t ea = 0xa2a5bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2a5c0u; rt_dispatch(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x434u; ST32(ea, c->r[0]); }
L_a2a5c8:;
    c->r[1] = 0x1016b24u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa2a5d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a2a61c; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2a5f0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x13u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_a2a608; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a608u; f_15f0460(c);
L_a2a608:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a610u; f_15f046c(c);
    c->r[0] = 0x1016ae0u;
    { uint32_t ea = 0xa2a61cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2a61c:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1016ab0u;
    { uint32_t ea = 0xa2a644u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a644u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2a66c(Cpu *restrict c) {
    FN_ENTER(0xa2a66cu);
L_a2a66c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x224u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[6] = c->r[1];
    c->r[9] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a2a810; }
    c->r[0] = c->r[6];
    c->r[1] = 0x2au;
    c->r[14] = 0xa2a694u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2a6b0; }
    c->r[0] = c->r[6];
    c->r[1] = 0x3fu;
    c->r[14] = 0xa2a6a8u; f_15eff44(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2a9fc; }
L_a2a6b0:;
    c->r[1] = 0x1016a24u;
    c->r[5] = c->r[9];
    { uint32_t ea = c->r[5] + 0x38u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = 0xa2a6c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a2a718; }
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a2a6fc; }
    c->r[0] = 0x100ed68u;
    { uint32_t ea = 0xa2a6e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2a6f0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2a6fc:;
    c->r[14] = 0xa2a700u; f_15f03e8(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x10169d4u;
    { uint32_t ea = 0xa2a714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x38u; ST32(ea, c->r[0]); }
L_a2a718:;
    c->r[0] = 0x1u;
    c->r[4] = c->r[13] + 0x320u;
    { uint32_t ea = c->r[13] + 0x620u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xa2a730u; f_a292ec(c);
    c->r[0] = 0xd438e3u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa2a740u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xa2a744u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[4] | 0x2u; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa2a754u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a2a75c:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a2a7bc; }
    c->r[7] = c->r[4];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[6] = c->r[7] | c->r[6];
    if (COND_NE) { goto L_a2a79c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_a2a7c4; }
L_a2a79c:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[6];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a2a75c; }
L_a2a7bc:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2a7cc; }
L_a2a7c4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x320u; ST8(ea, c->r[0]); }
L_a2a7cc:;
    c->r[6] = c->r[13] + 0x14u;
    c->r[1] = c->r[13] + 0x320u;
    c->r[0] = c->r[6];
    c->r[14] = 0xa2a7dcu; f_15efd94(c);
    c->r[0] = c->r[6];
    c->r[14] = 0xa2a7e4u; f_15efd88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2acf4; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = 0x2fu;
    c->r[14] = 0xa2a7f8u; f_15eff50(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a2a928; }
    c->r[0] = c->r[9] + 0x354u;
    c->r[1] = c->r[6] + 0x1u;
    goto L_a2a940;
L_a2a810:;
    c->r[1] = 0x10168c8u;
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa2a820u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a2a8e0; }
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[5] = c->r[4] - 0x8u;
L_a2a834:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[10] = v; c->r[11] = v2; }
    c->r[1] = f_subs(c, c->r[0], c->r[10]);
    c->r[1] = f_sbcs(c, 0x0u, c->r[11]);
    if (COND_GE) { goto L_a2a8e8; }
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x310u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    c->r[6] = c->r[9] + 0x354u;
    c->r[9] = 0xfcfcu;
    c->r[8] = c->r[0] + 0x1u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xffff0000u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[1] = r; }
    c->r[7] = c->r[1] + 0x304u;
L_a2a868:;
    c->r[5] = c->r[7] + c->r[9];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2a87cu; f_a2b0e4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2acfc; }
    c->r[1] = f_subs(c, c->r[8], c->r[10]);
    c->r[0] = c->r[8] + 0x1u;
    c->r[7] = c->r[7] + 0x310u;
    c->r[1] = f_sbcs(c, 0x0u, c->r[11]);
    c->r[8] = c->r[0];
    if (COND_LT) { goto L_a2a868; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a8a8u; f_15f03e8(c);
    c->r[0] = 0x1016834u;
    { uint32_t ea = 0xa2a8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100eb84u;
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2a8c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2a8d4u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    goto L_a2af78;
L_a2a8e0:;
    c->r[0] = 0x0u;
    goto L_a2af78;
L_a2a8e8:;
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2a8f0u; f_15f03e8(c);
    c->r[0] = 0x10167ecu;
    { uint32_t ea = 0xa2a8fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100eb3cu;
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2a910u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2a91cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[0]); }
    goto L_a2af78;
L_a2a928:;
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = 0x3au;
    c->r[14] = 0xa2a934u; f_15eff50(c);
    c->r[6] = c->r[0] + 0x1u;
    c->r[0] = c->r[9] + 0x354u;
    c->r[1] = c->r[6];
L_a2a940:;
    c->r[14] = 0xa2a944u; f_15efd94(c);
    c->r[4] = 0x0u;
    c->r[1] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[4]); }
    c->r[6] = c->r[9] + 0x54u;
    c->r[0] = c->r[6];
    c->r[14] = 0xa2a95cu; f_15efd94(c);
    c->r[0] = 0xd43698u;
    c->r[1] = 0xa2a968u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2a96cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2a9d0; }
    c->r[0] = 0xd4368bu;
    c->r[1] = 0xa2a980u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2a984u; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2ab94; }
    c->r[0] = 0xd4367du;
    c->r[1] = 0xa2a998u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2a99cu; f_15effa4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2abec; }
    c->r[0] = 0x2fu;
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3au;
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[0]); }
    c->r[0] = 0x64u;
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x73u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x4u; ST8(ea, c->r[0]); }
    goto L_a2abec;
L_a2a9d0:;
    c->r[0] = 0x2fu;
    { uint32_t ea = c->r[6] + 0x5u; ST8(ea, c->r[4]); }
    { uint32_t ea = c->r[6] + 0x4u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3au;
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x70u;
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    goto L_a2abec;
L_a2a9fc:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa2aa04u; f_a2b004(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a2af78; }
    c->r[0] = 0x1u;
    c->r[4] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13] + 0x314u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0xa2aa2cu; f_a292ec(c);
    c->r[0] = 0xd435e7u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa2aa3cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xa2aa40u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[4] = c->r[4] | 0x2u; }
    c->r[0] = c->r[4];
    c->r[14] = 0xa2aa50u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a2aa58:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a2aab8; }
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[7] = c->r[7] | c->r[5];
    if (COND_NE) { goto L_a2aa98; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_a2aac0; }
L_a2aa98:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[7];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a2aa58; }
L_a2aab8:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2aac8; }
L_a2aac0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x14u; ST8(ea, c->r[0]); }
L_a2aac8:;
    c->r[0] = c->r[6];
    c->r[1] = 0x5cu;
    c->r[14] = 0xa2aad4u; f_15eff50(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2ae74; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0xd2627eu;
    c->r[5] = c->r[0] + 0x1u;
    c->r[3] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[3] = 0xa2aaf8u + c->r[2]; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_a2af3c; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a2ab44; }
L_a2ab04:;
    c->r[0] = ldrex32(c, c->r[1]);
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = strex32(c, c->r[1], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a2ab04; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2ab3c; }
    c->r[0] = 0x100e058u;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2ab30u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2ab3cu; rt_dispatch(c);
L_a2ab3c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
L_a2ab44:;
    c->r[0] = c->r[5];
    c->r[14] = 0xa2ab4cu; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a2af34; }
    c->r[0] = 0x100e020u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa2ab68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0xa2ab78u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    goto L_a2af24;
L_a2ab94:;
    c->r[0] = 0x2fu;
    c->r[1] = 0x65u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[6] + 0x9u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3au;
    { uint32_t ea = c->r[6] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x61u;
    { uint32_t ea = c->r[6] + 0x5u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3u; ST8(ea, c->r[1]); }
    c->r[1] = 0x76u;
    { uint32_t ea = c->r[6] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0x73u;
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6] + 0xau; ST8(ea, c->r[1]); }
    c->r[1] = 0x6164u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x61740000u;
    { uint32_t ea = c->r[2] + 0x4u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[0]); }
    c->r[0] = 0x74u;
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[0]); }
L_a2abec:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[2] = 0x3u;
    c->r[14] = 0xa2abfcu; f_15f0478(c);
    c->r[1] = 0x10164f4u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xa2ac0cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_a2ac1c; }
    c->r[0] = 0x10164ccu;
    { uint32_t ea = 0xa2ac1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a2addc;
L_a2ac1c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x31cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x318u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x318u;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xa2ac34u; f_15f0484(c);
    c->r[1] = 0x10164bcu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xa2ac44u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_a2adcc; }
    { uint32_t ea = c->r[13] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x31cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_a2adcc; }
    c->r[1] = 0x310u;
    { uint32_t r = c->r[0] * c->r[1]; c->r[1] = r; }
    c->r[0] = 0x100e7dcu;
    { uint32_t ea = c->r[9] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xa2ac70u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->pc = c->r[3]; c->r[14] = 0xa2ac80u; rt_dispatch(c);
    c->r[1] = c->r[0];
    c->r[5] = c->r[9] + 0x48u;
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x31cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2aca4u; f_15f0490(c);
    c->r[1] = 0x101644cu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xa2acb4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_a2ae64; }
    { uint32_t ea = c->r[9] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2acc0u; f_15f03e8(c);
    c->r[0] = 0x101641cu;
    { uint32_t ea = 0xa2acccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x100e76cu;
    { uint32_t ea = c->r[9] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2ace0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2acecu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x40u; ST32(ea, c->r[0]); }
L_a2acf4:;
    c->r[0] = 0x0u;
    goto L_a2af78;
L_a2acfc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xd2605eu;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0xa2ad18u + c->r[1]; }
    c->r[1] = c->r[7] - c->r[2];
    (void)f_subs(c, c->r[1], 0x304u);
    if (COND_EQ) { goto L_a2adf4; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2ad68; }
L_a2ad28:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a2ad28; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a2ad60; }
    c->r[0] = 0x100de34u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2ad54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2ad60u; rt_dispatch(c);
L_a2ad60:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_a2ad68:;
    (void)f_subs(c, c->r[7], 0x304u);
    if (COND_EQ) { goto L_a2adec; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2ad78u; f_15efd88(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a2adec; }
    c->r[0] = 0x100ddf4u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa2ad94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0xa2ada4u; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0xa2adc8u; f_15efd94(c);
    goto L_a2adf4;
L_a2adcc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2add4u; f_15f03e8(c);
    c->r[0] = 0x1016308u;
    { uint32_t ea = 0xa2ade0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2addc:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_a2af78;
L_a2adec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_a2adf4:;
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    c->r[6] = c->r[4] + 0x54u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xa2ae14u; f_15efd88(c);
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[0] - 0x1u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2fu);
    if (COND_NE) { goto L_a2ae30; }
    c->r[0] = 0xd3fbaeu;
    c->r[1] = 0xa2ae30u + c->r[0];
    goto L_a2ae38;
L_a2ae30:;
    c->r[0] = 0xd431eau;
    c->r[1] = 0xa2ae3cu + c->r[0];
L_a2ae38:;
    c->r[0] = c->r[13] + 0x14u;
    c->r[2] = c->r[6];
    c->r[3] = c->r[5];
    c->r[14] = 0xa2ae48u; f_15f0088(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2af74; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    goto L_a2af74;
L_a2ae64:;
    c->r[0] = 0x0u;
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); c->r[4] = ea; }
    goto L_a2a834;
L_a2ae74:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd25eeau;
    c->r[2] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[2] = 0xa2ae8cu + c->r[1]; }
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_EQ) { goto L_a2af3c; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2aed8; }
L_a2ae98:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_a2ae98; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_a2aed0; }
    c->r[0] = 0x100dcc4u;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2aec4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0xa2aed0u; rt_dispatch(c);
L_a2aed0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
L_a2aed8:;
    c->r[0] = c->r[6];
    c->r[14] = 0xa2aee0u; f_15efd88(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_a2af34; }
    c->r[0] = 0x100dc8cu;
    c->r[2] = 0x10u;
    { uint32_t ea = 0xa2aefcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[5] + 0xcu;
    c->pc = c->r[3]; c->r[14] = 0xa2af0cu; rt_dispatch(c);
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
L_a2af24:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0xa2af30u; f_15efd94(c);
    goto L_a2af3c;
L_a2af34:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[9] + 0x10u; ST32(ea, c->r[0]); }
L_a2af3c:;
    c->r[0] = 0x0u;
    c->r[1] = 0xau;
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x318u;
    c->r[1] = c->r[13] + 0x14u;
    c->r[14] = 0xa2af5cu; f_15f049c(c);
    { uint32_t ea = c->r[13] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2af74; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9] + 0x18u; ST32(ea, c->r[0]); }
L_a2af74:;
    c->r[0] = 0x1u;
L_a2af78:;
    c->r[13] = c->r[13] + 0x224u;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a2b004(Cpu *restrict c) {
    FN_ENTER(0xa2b004u);
L_a2b004:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x308u;
    c->r[1] = 0x1u;
    c->r[6] = c->r[13];
    { uint32_t ea = c->r[13] + 0x300u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[6];
    c->r[14] = 0xa2b020u; f_a292ec(c);
    c->r[0] = 0xd42ff3u;
    c->r[2] = 0x2u;
    c->r[1] = 0xa2b030u + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2b034u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[6] = c->r[6] | 0x2u; }
    c->r[0] = c->r[6];
    c->r[14] = 0xa2b044u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a2b04c:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a2b0ac; }
    c->r[5] = c->r[6];
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[2]; uint32_t v = LD8(ea); c->r[5] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x2fu);
    if (COND_EQ) { c->r[4] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x5cu);
    c->r[5] = 0x0u;
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[4] = c->r[5] | c->r[4];
    if (COND_NE) { goto L_a2b08c; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_a2b0b4; }
L_a2b08c:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[4];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a2b04c; }
L_a2b0ac:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2b0bc; }
L_a2b0b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST8(ea, c->r[0]); }
L_a2b0bc:;
    c->r[0] = c->r[13] + 0x304u;
    c->r[1] = c->r[13];
    c->r[14] = 0xa2b0c8u; f_15f049c(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1];
    c->r[13] = c->r[13] + 0x308u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_a2b0e4(Cpu *restrict c) {
    FN_ENTER(0xa2b0e4u);
L_a2b0e4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[0];
    c->r[0] = 0xd42f30u;
    c->r[7] = c->r[1];
    c->r[1] = 0xa2b0fcu + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xa2b100u; f_15effa4(c);
    c->r[9] = 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2b1b8; }
    c->r[0] = 0xd42f14u;
    c->r[6] = 0xa2b118u + c->r[0];
    c->r[0] = 0xd42f0cu;
    c->r[8] = 0xa2b120u + c->r[0];
L_a2b11c:;
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[4]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = c->r[4] + 0x1u; c->r[1] = v; }
    c->r[10] = (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_a2b1cc; }
L_a2b130:;
    (void)f_subs(c, c->r[1], 0x2au);
    if (COND_NE) { goto L_a2b178; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xa2b144u; f_a2b0e4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2b1b8; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a2b1c0; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[6];
    c->r[14] = 0xa2b164u; f_15effa4(c);
    c->r[5] = c->r[5] + 0x1u;
    c->r[1] = 0x2au;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2b130; }
    goto L_a2b1b8;
L_a2b178:;
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_NE) { goto L_a2b190; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a2b19c; }
    goto L_a2b1c0;
L_a2b190:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { goto L_a2b1c0; }
L_a2b19c:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[14] = 0xa2b1a8u; f_15effa4(c);
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->r[4];
    if (COND_NE) { goto L_a2b11c; }
L_a2b1b8:;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_a2b1c0:;
    c->r[9] = 0x0u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_a2b1cc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_a2b1ec(Cpu *restrict c) {
    FN_ENTER(0xa2b1ecu);
L_a2b1ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x214u;
    c->r[13] = c->r[13] - 0x400u;
    c->r[4] = c->r[0];
    c->r[11] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2b214u; rt_dispatch(c);
    c->r[0] = 0x1015ef4u;
    { uint32_t ea = 0xa2b220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a2b290; }
    c->r[0] = c->r[11];
    c->pc = c->r[1]; c->r[14] = 0xa2b230u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2b290; }
    c->r[0] = c->r[10] - 0x11u;
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_a2b544; }
    c->r[0] = c->r[4] + 0x14u;
    c->r[1] = c->r[11];
    c->r[14] = 0xa2b254u; f_15efd94(c);
    c->r[0] = 0x1015eb8u;
    { uint32_t ea = 0xa2b260u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[11];
    c->pc = c->r[1]; c->r[14] = 0xa2b268u; rt_dispatch(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x434u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1015e7cu;
    { uint32_t ea = 0xa2b288u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2b28cu; rt_dispatch(c);
    goto L_a2b53c;
L_a2b290:;
    c->r[5] = c->r[10] - 0x11u;
    (void)f_subs(c, c->r[5], 0x6u);
    if (COND_CS) { goto L_a2b4a4; }
    c->r[0] = c->r[4] + 0x14u;
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[14] = 0xa2b2acu; f_15efd94(c);
    c->r[0] = 0x1u;
    c->r[8] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0x30cu; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[1] = c->r[8];
    c->r[14] = 0xa2b2c4u; f_a292ec(c);
    c->r[0] = 0xd42d4fu;
    c->r[2] = 0x2u;
    c->r[1] = 0xa2b2d4u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0xa2b2d8u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[8] = c->r[8] | 0x2u; }
    c->r[0] = c->r[8];
    c->r[14] = 0xa2b2e8u; f_15efd88(c);
    c->r[1] = 0xe456c8u;
    c->r[2] = 0x0u;
    c->r[1] = 0xa2b2f8u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x0u;
L_a2b2fc:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a2b35c; }
    c->r[7] = c->r[8];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[6] = c->r[7] | c->r[6];
    if (COND_NE) { goto L_a2b33c; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_a2b364; }
L_a2b33c:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[6];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a2b2fc; }
L_a2b35c:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2b36c; }
L_a2b364:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST8(ea, c->r[0]); }
L_a2b36c:;
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LS) { goto L_a2b4c0; }
    (void)f_subs(c, c->r[10], 0x13u);
    if (COND_NE) { goto L_a2b454; }
    c->r[0] = c->r[11];
    c->r[14] = 0xa2b384u; f_a2b004(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a2b454; }
    c->r[0] = 0x1u;
    c->r[5] = c->r[13] + 0x310u;
    { uint32_t ea = c->r[13] + 0x610u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[1] = c->r[5];
    c->r[14] = 0xa2b3a4u; f_a292ec(c);
    c->r[0] = 0xd42c6fu;
    c->r[2] = 0x2u;
    c->r[1] = 0xa2b3b4u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xa2b3b8u; f_15f0400(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[5] = c->r[5] | 0x2u; }
    c->r[0] = c->r[5];
    c->r[14] = 0xa2b3c8u; f_15efd88(c);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
L_a2b3d0:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_CS) { goto L_a2b430; }
    c->r[7] = c->r[5];
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x1u; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x5cu);
    c->r[7] = 0x0u;
    if (COND_EQ) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x5cu);
    c->r[6] = c->r[7] | c->r[6];
    if (COND_NE) { goto L_a2b410; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_a2b438; }
L_a2b410:;
    (void)f_subs(c, c->r[3], 0x2fu);
    c->r[3] = 0x0u;
    c->r[2] = c->r[2] + 0x1u;
    if (COND_EQ) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] & c->r[6];
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_a2b3d0; }
L_a2b430:;
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a2b440; }
L_a2b438:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x310u; ST8(ea, c->r[0]); }
L_a2b440:;
    c->r[0] = c->r[13] + 0x310u;
    c->r[14] = 0xa2b448u; f_15f0424(c);
    c->r[1] = 0x1015cacu;
    { uint32_t ea = 0xa2b454u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_a2b454:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa2b464u; f_15f04a8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x430u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[1] = c->r[10] | 0x2u; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x16u); }
    if (COND_EQ) { goto L_a2b4bc; }
    c->r[0] = c->r[0] & 0x3fffffu;
    c->r[1] = 0x402u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_a2b4bc; }
    c->r[0] = 0x1015c64u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xa2b498u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[7]); }
    goto L_a2b544;
L_a2b4a4:;
    c->r[0] = 0x1015c48u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xa2b4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a2b544;
L_a2b4bc:;
    c->r[9] = c->r[9] | 0x4u;
L_a2b4c0:;
    c->r[6] = c->r[4] + 0x4u;
    c->r[1] = c->r[13] + 0xcu;
    c->r[2] = c->r[9];
    c->r[0] = c->r[6];
    c->r[14] = 0xa2b4d4u; f_15f04b4(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x430u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_a2b500; }
    c->r[0] = 0x1015c0cu;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xa2b4f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    goto L_a2b544;
L_a2b500:;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[10]); }
    c->r[0] = c->r[13] + 0x310u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x314u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xa2b524u; f_15f043c(c);
    c->r[1] = 0x1015bccu;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = 0xa2b534u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_a2b544; }
    { uint32_t ea = c->r[13] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2b53c:;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
L_a2b544:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x214u;
    c->r[13] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_a2b580(Cpu *restrict c) {
    FN_ENTER(0xa2b580u);
L_a2b580:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x434u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_a2b5f4; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[14] = 0xa2b5c4u; f_15f0454(c);
    c->r[1] = 0x1015b28u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[4] = 0x0u; }
    { uint32_t ea = 0xa2b5d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[4];
L_a2b5f4:;
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_a2b600(Cpu *restrict c) {
    FN_ENTER(0xa2b600u);
L_a2b600:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1];
    c->r[3] = 0x0u;
    c->r[14] = 0xa2b624u; f_15f04c0(c);
    { uint32_t ea = c->r[4] + 0x430u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2b62c(Cpu *restrict c) {
    FN_ENTER(0xa2b62cu);
L_a2b62c:;
    c->r[0] = c->r[1] - 0x11u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    c->r[0] = c->r[0] & 0x3fu;
    c->r[1] = 0x33u;
    c->r[2] = 0x1u;
    c->r[0] = c->r[2] & sh_lsr(c->r[1], c->r[0]);
    return;
}
void f_a2b650(Cpu *restrict c) {
    FN_ENTER(0xa2b650u);
L_a2b650:;
    c->r[1] = c->r[1] - 0x13u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CC) { c->r[0] = 0x1u; }
    return;
}
void f_a2b664(Cpu *restrict c) {
    FN_ENTER(0xa2b664u);
L_a2b664:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    return;
}
void f_a2b674(Cpu *restrict c) {
    FN_ENTER(0xa2b674u);
L_a2b674:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2b6a0; }
    c->r[1] = 0x1015a78u;
    { uint32_t ea = 0xa2b694u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xa2b698u; rt_dispatch(c);
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x434u; ST32(ea, c->r[0]); }
L_a2b6a0:;
    c->r[0] = 0x1015a4cu;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa2b6b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_a2b6f4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0xa2b6c8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x13u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_a2b6e0; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2b6e0u; f_15f0460(c);
L_a2b6e0:;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa2b6e8u; f_15f046c(c);
    c->r[0] = 0x1015a08u;
    { uint32_t ea = 0xa2b6f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a2b6f4:;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_a2b720(Cpu *restrict c) {
    FN_ENTER(0xa2b720u);
L_a2b720:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_NE) { return; }
    { uint32_t ea = c->r[0] + 0x424u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x424u; ST8(ea, c->r[1]); } }
    return;
}
void f_a2b740(Cpu *restrict c) {
    FN_ENTER(0xa2b740u);
L_a2b740:;
    { uint32_t ea = c->r[0] + 0x424u; uint32_t v = LD8(ea); c->r[0] = v; }
    return;
}
void f_a2b748(Cpu *restrict c) {
    FN_ENTER(0xa2b748u);
L_a2b748:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2b754(Cpu *restrict c) {
    FN_ENTER(0xa2b754u);
L_a2b754:;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_EQ) { goto L_a2b774; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_a2b780; }
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_a2b788; }
    goto L_a2b7b0;
L_a2b774:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] - c->r[1];
    goto L_a2b788;
L_a2b780:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
L_a2b788:;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_a2b7ac; }
    c->r[2] = 0x1015978u;
    { uint32_t ea = 0xa2b7a4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x1u;
    c->pc = c->r[3]; __attribute__((musttail)) return rt_dispatch(c);
L_a2b7ac:;
    c->r[3] = c->r[1];
L_a2b7b0:;
    c->r[0] = c->r[3];
    return;
}
void f_a2b7bc(Cpu *restrict c) {
    FN_ENTER(0xa2b7bcu);
L_a2b7bc:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a2b7c4(Cpu *restrict c) {
    FN_ENTER(0xa2b7c4u);
L_a2b7c4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2b7d4(Cpu *restrict c) {
    FN_ENTER(0xa2b7d4u);
L_a2b7d4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_a2b7e4(Cpu *restrict c) {
    FN_ENTER(0xa2b7e4u);
L_a2b7e4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a2b7e8(Cpu *restrict c) {
    FN_ENTER(0xa2b7e8u);
L_a2b7e8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_a2b7ec(Cpu *restrict c) {
    FN_ENTER(0xa2b7ecu);
L_a2b7ec:;
    c->r[0] = 0x10158e8u;
    { uint32_t ea = 0xa2b7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a2b7fc(Cpu *restrict c) {
    FN_ENTER(0xa2b7fcu);
L_a2b7fc:;
    c->r[0] = 0x10158ecu;
    { uint32_t ea = 0xa2b808u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_a2b80c(Cpu *restrict c) {
    FN_ENTER(0xa2b80cu);
L_a2b80c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[1] = 0x100d32cu;
    c->r[0] = 0x10158a0u;
    c->r[5] = 0x0u;
    c->r[3] = 0x658u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa2b838u + c->r[1]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xd4277du;
    { uint32_t ea = 0xa2b840u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa2b844u + c->r[1];
    c->r[2] = c->r[4];
    c->r[14] = 0xa2b848u; f_9aedcc(c);
    c->r[1] = 0x10158b8u;
    c->r[2] = c->r[4];
    c->r[3] = 0x438u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xa2b868u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1015878u;
    c->r[1] = 0xd2a75bu;
    { uint32_t ea = 0xa2b87cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa2b880u + c->r[1];
    c->r[14] = 0xa2b880u; f_9aedcc(c);
    c->r[1] = 0x1015898u;
    { uint32_t ea = 0xa2b88cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1015864u;
    { uint32_t ea = 0xa2b89cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
