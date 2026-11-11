#include "cpu.h"
#include "neon_rt.h"
void f_200690(Cpu *c);
void f_22b8f0(Cpu *c);
void f_22b908(Cpu *c);
void f_26ff44(Cpu *c);
void f_5cafe8(Cpu *c);
void f_5cb008(Cpu *c);
void f_5f8634(Cpu *c);
void f_6d3d34(Cpu *c);
void f_6d3e18(Cpu *c);
void f_6d51b8(Cpu *c);
void f_6d5780(Cpu *c);
void f_6d59f4(Cpu *c);
void f_6d64a8(Cpu *c);
void f_6d65bc(Cpu *c);
void f_6d66a0(Cpu *c);
void f_6d67fc(Cpu *c);
void f_6d6a58(Cpu *c);
void f_6d6a94(Cpu *c);
void f_6d6ac0(Cpu *c);
void f_6d6b0c(Cpu *c);
void f_6d6b40(Cpu *c);
void f_6d703c(Cpu *c);
void f_6d71dc(Cpu *c);
void f_6d74f8(Cpu *c);
void f_6d7524(Cpu *c);
void f_6d7538(Cpu *c);
void f_6d754c(Cpu *c);
void f_6d7560(Cpu *c);
void f_6d7574(Cpu *c);
void f_6d7588(Cpu *c);
void f_6d759c(Cpu *c);
void f_6d75ec(Cpu *c);
void f_6d9528(Cpu *c);
void f_6d9750(Cpu *c);
void f_6d997c(Cpu *c);
void f_6d9dbc(Cpu *c);
void f_6d9e20(Cpu *c);
void f_6d9e40(Cpu *c);
void f_6d9e68(Cpu *c);
void f_6da9d4(Cpu *c);
void f_6dd47c(Cpu *c);
void f_6e1764(Cpu *c);
void f_6e188c(Cpu *c);
void f_6e65c0(Cpu *c);
void f_6e8418(Cpu *c);
void f_6e9b20(Cpu *c);
void f_6ed4bc(Cpu *c);
void f_6ed53c(Cpu *c);
void f_6f0700(Cpu *c);
void f_6f0798(Cpu *c);
void f_6f0824(Cpu *c);
void f_6f0b10(Cpu *c);
void f_6f0be8(Cpu *c);
void f_6f1974(Cpu *c);
void f_6f1c0c(Cpu *c);
void f_6f1ee4(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9af630(Cpu *c);
void f_9af6e4(Cpu *c);
void f_9bb638(Cpu *c);
void f_9ca854(Cpu *c);
void f_9cc110(Cpu *c);
void f_a260d4(Cpu *c);
void f_a26130(Cpu *c);
void f_a261fc(Cpu *c);
void f_a263f8(Cpu *c);
void f_a269f4(Cpu *c);
void f_a2710c(Cpu *c);
void f_a2772c(Cpu *c);
void f_a277c4(Cpu *c);
void f_a27998(Cpu *c);
void f_a27bbc(Cpu *c);
void f_a27cd0(Cpu *c);
void f_a2fb08(Cpu *c);
void f_a2fb10(Cpu *c);
void f_a2fb14(Cpu *c);
void f_a31b90(Cpu *c);
void f_a70780(Cpu *c);
void f_a71c3c(Cpu *c);
void f_a870b8(Cpu *c);
void f_a87100(Cpu *c);
void f_a871d4(Cpu *c);
void f_a871d8(Cpu *c);
void f_a87648(Cpu *c);
void f_a87660(Cpu *c);
void f_a87810(Cpu *c);
void f_a8784c(Cpu *c);
void f_d61a54(Cpu *c);
void f_de56e0(Cpu *c);
void f_de95c4(Cpu *c);
void f_deadfc(Cpu *c);
void f_debcc4(Cpu *c);
void f_def9f4(Cpu *c);
void f_df0154(Cpu *c);
void f_df0260(Cpu *c);
void f_df0e04(Cpu *c);
void f_df0eb0(Cpu *c);
void f_df110c(Cpu *c);
void f_df178c(Cpu *c);
void f_df17e0(Cpu *c);
void f_df1b54(Cpu *c);
void f_df7790(Cpu *c);
void f_df82f0(Cpu *c);
void f_df8408(Cpu *c);
void f_15efd7c(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_6d51b8(Cpu *restrict c) {
    FN_ENTER(0x6d51b8u);
L_6d51b8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[9] = c->r[0];
    c->r[0] = 0x13639d8u;
    c->r[7] = c->r[3];
    c->r[4] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x6d51dcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d51e0u; f_5f8634(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[2] + 0x4du;
    if (COND_NE) { c->r[1] = c->r[2] + 0x49u; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6d5404; }
    (void)f_subs(c, c->r[4], 0x1fu);
    if (COND_HI) { goto L_6d5404; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x6d5210u; f_6d997c(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[8], 0x0u); }
    if (COND_EQ) { goto L_6d5404; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_6d5404; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x6d5240u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x6d5254u: goto L_6d5254; case 0x6d5274u: goto L_6d5274; case 0x6d5294u: goto L_6d5294; case 0x6d52c8u: goto L_6d52c8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6d5254:;
    c->r[0] = c->r[4] + (c->r[4] << 2);
    c->r[5] = c->r[9] + (c->r[0] << 4);
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5304; }
    c->r[6] = c->r[6] + 0x2u;
    goto L_6d5328;
L_6d5274:;
    c->r[0] = c->r[4] + (c->r[4] << 2);
    c->r[5] = c->r[9] + (c->r[0] << 4);
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5368; }
    c->r[6] = c->r[6] + 0x2u;
    goto L_6d538c;
L_6d5294:;
    c->r[0] = c->r[4] + (c->r[4] << 2);
    c->r[10] = c->r[9] + (c->r[0] << 4);
    { uint32_t ea = c->r[10] + 0x50u; uint32_t v = LD8(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5404; }
    c->r[0] = 0x1367a58u;
    c->r[1] = c->r[5];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x6d52c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d52c4u; f_df0154(c);
    goto L_6d53c8;
L_6d52c8:;
    c->r[0] = 0x1367a40u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x6d52d8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x3u;
    c->pc = c->r[3]; c->r[14] = 0x6d52e8u; rt_dispatch(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[14] = 0x6d52f4u; f_df0260(c);
    c->r[0] = c->r[4] + (c->r[4] << 2);
    c->r[0] = c->r[9] + (c->r[0] << 4);
    c->r[10] = c->r[0] + 0x50u;
    goto L_6d53c8;
L_6d5304:;
    c->r[0] = 0x13679fcu;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[2] = v; }
    c->r[1] = c->r[8];
    c->r[3] = c->r[4];
    { uint32_t ea = 0x6d531cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d5320u; f_df110c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5404; }
L_6d5328:;
    c->r[0] = 0x13679d4u;
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = 0x6d5344u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_6d5358; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x6d5354u; f_df0eb0(c);
    goto L_6d53c8;
L_6d5358:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x6d5364u; f_df0e04(c);
    goto L_6d53c8;
L_6d5368:;
    c->r[0] = 0x1367998u;
    { uint32_t ea = c->r[6] + 0x2u; uint32_t v = LD16(ea); c->r[6] = ea; c->r[2] = v; }
    c->r[1] = c->r[8];
    c->r[3] = c->r[4];
    { uint32_t ea = 0x6d5380u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d5384u; f_df1b54(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5404; }
L_6d538c:;
    c->r[0] = 0x1367970u;
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = 0x6d53a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { goto L_6d53bc; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x6d53b8u; f_df17e0(c);
    goto L_6d53c8;
L_6d53bc:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8];
    c->r[14] = 0x6d53c8u; f_df178c(c);
L_6d53c8:;
    c->r[1] = c->r[4] + (c->r[4] << 2);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10]; ST8(ea, c->r[0]); }
    c->r[1] = c->r[9] + (c->r[1] << 4);
    { uint32_t ea = c->r[1] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x70u; ST32(ea, c->r[0]); }
L_6d5404:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6d5428(Cpu *restrict c) {
    FN_ENTER(0x6d5428u);
L_6d5428:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[2];
    c->r[4] = c->r[1];
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
    c->r[7] = c->r[6] + (c->r[5] << 2);
    { uint32_t ea = c->r[7] + 0xa50u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d545c; }
    c->r[14] = 0x6d5454u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_6d545c:;
    c->r[0] = c->r[6] + c->r[5];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0xa60u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5484; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a87648(c);
L_6d5484:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d5488(Cpu *restrict c) {
    FN_ENTER(0x6d5488u);
L_6d5488:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xa64u; ST8(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1u; ST8(ea, c->r[1]); }
    return;
}
void f_6d54a0(Cpu *restrict c) {
    FN_ENTER(0x6d54a0u);
L_6d54a0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d55dc; }
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[4] + 0xa64u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xa50u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d54fc; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_6d54fc; }
    c->r[6] = 0x0u;
L_6d54dc:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0x6d54f0u; f_6d51b8(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_6d54dc; }
L_6d54fc:;
    { uint32_t ea = c->r[4] + 0xa65u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xa54u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d5544; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_6d5544; }
    c->r[6] = 0x0u;
L_6d5524:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0x6d5538u; f_6d51b8(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_6d5524; }
L_6d5544:;
    c->r[8] = 0x1u;
    { uint32_t ea = c->r[4] + 0xa66u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xa58u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d5590; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_6d5590; }
    c->r[6] = 0x0u;
L_6d5570:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0x6d5584u; f_6d51b8(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_6d5570; }
L_6d5590:;
    { uint32_t ea = c->r[4] + 0xa67u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0xa5cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d55f8; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[7] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_6d55f8; }
    c->r[6] = 0x0u;
L_6d55b8:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[14] = 0x6d55ccu; f_6d51b8(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_NE) { goto L_6d55b8; }
    goto L_6d55f8;
L_6d55dc:;
    c->r[0] = 0x101u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1010000u;
    { uint32_t ea = c->r[4] + 0xa64u; ST8(ea, c->r[0]); c->r[4] = ea; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1u; ST8(ea, c->r[0]); }
L_6d55f8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d55fc(Cpu *restrict c) {
    FN_ENTER(0x6d55fcu);
L_6d55fc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d5600(Cpu *restrict c) {
    FN_ENTER(0x6d5600u);
L_6d5600:;
    c->r[0] = 0x13691ccu;
    { uint32_t ea = 0x6d560cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d5610(Cpu *restrict c) {
    FN_ENTER(0x6d5610u);
L_6d5610:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13c167cu;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x6d5634u + c->r[0];
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
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
    c->r[14] = 0x6d5684u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x6d569cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x6d56b4u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
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
    c->r[1] = 0x1363458u;
    c->r[0] = 0x13690c4u;
    c->r[3] = 0xa70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x6d570cu + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1081262u;
    { uint32_t ea = 0x6d5714u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d5718u + c->r[1];
    c->r[14] = 0x6d5718u; f_9aedcc(c);
    c->r[1] = 0x13690bcu;
    { uint32_t ea = 0x6d5724u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d5744(Cpu *restrict c) {
    FN_ENTER(0x6d5744u);
L_6d5744:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1369090u;
    { uint32_t ea = 0x6d5754u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d5758u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x23cu;
    c->pc = c->r[4]; c->r[14] = 0x6d5770u; rt_dispatch(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_6d5780(c);
}
void f_6d5780(Cpu *restrict c) {
    FN_ENTER(0x6d5780u);
L_6d5780:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x136904cu;
    c->r[5] = c->r[1];
    c->r[1] = 0x144u;
    { uint32_t ea = 0x6d579cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xcu;
    c->r[14] = 0x6d57b4u; f_15efd7c(c);
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[5]); }
    c->r[0] = 0x0u;
    c->r[5] = ~0x0u;
    c->r[1] = 0x3au;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1aau; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1acu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ccu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1ecu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x84u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x170u;
    c->r[14] = 0x6d59acu; f_15efd7c(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x22cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x230u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x234u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x238u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d59c8(Cpu *restrict c) {
    FN_ENTER(0x6d59c8u);
L_6d59c8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1368e0cu;
    { uint32_t ea = 0x6d59dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d59e8u; f_6d59f4(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d59f4(Cpu *restrict c) {
    FN_ENTER(0x6d59f4u);
L_6d59f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5a14; }
    c->r[14] = 0x6d5a0cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_6d5a14:;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5a2c; }
    c->r[14] = 0x6d5a24u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_6d5a2c:;
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5a44; }
    c->r[14] = 0x6d5a3cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[0]); }
L_6d5a44:;
    { uint32_t ea = c->r[4] + 0x15cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5a5c; }
    c->r[14] = 0x6d5a54u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[0]); }
L_6d5a5c:;
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5a74; }
    c->r[14] = 0x6d5a6cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
L_6d5a74:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5a8c; }
    c->r[14] = 0x6d5a84u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[0]); }
L_6d5a8c:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5aa4; }
    c->r[14] = 0x6d5a9cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[0]); }
L_6d5aa4:;
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5abc; }
    c->r[14] = 0x6d5ab4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[0]); }
L_6d5abc:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5ad4; }
    c->r[14] = 0x6d5accu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x17cu; ST32(ea, c->r[0]); }
L_6d5ad4:;
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5aec; }
    c->r[14] = 0x6d5ae4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x180u; ST32(ea, c->r[0]); }
L_6d5aec:;
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b04; }
    c->r[14] = 0x6d5afcu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x184u; ST32(ea, c->r[0]); }
L_6d5b04:;
    { uint32_t ea = c->r[4] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b1c; }
    c->r[14] = 0x6d5b14u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x188u; ST32(ea, c->r[0]); }
L_6d5b1c:;
    { uint32_t ea = c->r[4] + 0x18cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b34; }
    c->r[14] = 0x6d5b2cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18cu; ST32(ea, c->r[0]); }
L_6d5b34:;
    { uint32_t ea = c->r[4] + 0x190u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b4c; }
    c->r[14] = 0x6d5b44u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x190u; ST32(ea, c->r[0]); }
L_6d5b4c:;
    { uint32_t ea = c->r[4] + 0x194u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b64; }
    c->r[14] = 0x6d5b5cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x194u; ST32(ea, c->r[0]); }
L_6d5b64:;
    { uint32_t ea = c->r[4] + 0x198u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b7c; }
    c->r[14] = 0x6d5b74u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x198u; ST32(ea, c->r[0]); }
L_6d5b7c:;
    { uint32_t ea = c->r[4] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5b94; }
    c->r[14] = 0x6d5b8cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x19cu; ST32(ea, c->r[0]); }
L_6d5b94:;
    { uint32_t ea = c->r[4] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5bac; }
    c->r[14] = 0x6d5ba4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1a0u; ST32(ea, c->r[0]); }
L_6d5bac:;
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[14] = 0x6d5bbcu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d5bc8(Cpu *restrict c) {
    FN_ENTER(0x6d5bc8u);
L_6d5bc8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1368c0cu;
    { uint32_t ea = 0x6d5bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d5be8u; f_6d59f4(c);
    c->r[0] = 0x1368bf0u;
    { uint32_t ea = 0x6d5bf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d5bf4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d5c10(Cpu *restrict c) {
    FN_ENTER(0x6d5c10u);
L_6d5c10:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x64u;
    c->r[9] = c->r[0];
    c->r[10] = 0x0u;
    c->r[0] = 0x20u;
    c->r[8] = c->r[13] + 0x28u;
    c->r[11] = c->r[1];
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368b9cu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[9];
    { uint32_t ea = 0x6d5c50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368b94u;
    { uint32_t ea = 0x6d5c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368b8cu;
    { uint32_t ea = 0x6d5c68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368b84u;
    { uint32_t ea = 0x6d5c74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1092275u;
    c->r[2] = 0x6d5c80u + c->r[0];
    c->r[0] = 0x1087d85u;
    c->r[3] = 0x6d5c88u + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x6d5c8cu; f_9af6e4(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x6d5c94u; f_9bb638(c);
    c->r[12] = c->r[8];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368b1cu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[9];
    { uint32_t ea = 0x6d5ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368b10u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x6d5cf0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368afcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x6d5d08u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1368af0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[10]); }
    { uint32_t ea = 0x6d5d18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x10921dau;
    c->r[2] = 0x6d5d24u + c->r[0];
    c->r[0] = 0x1087ce1u;
    c->r[3] = 0x6d5d2cu + c->r[0];
    c->r[0] = c->r[8];
    c->r[14] = 0x6d5d30u; f_9af6e4(c);
    c->r[0] = c->r[11];
    c->r[14] = 0x6d5d38u; f_9bb638(c);
    { uint32_t ea = c->r[8]; c->r[8] = c->r[8] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x64u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6d5da4(Cpu *restrict c) {
    FN_ENTER(0x6d5da4u);
L_6d5da4:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { return; }
    c->r[0] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d5dc0(Cpu *restrict c) {
    FN_ENTER(0x6d5dc0u);
L_6d5dc0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_HI) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[5] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x150u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5dec; }
    c->r[14] = 0x6d5de4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6d5dec:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_6d5e04; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
L_6d5e04:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d5e08(Cpu *restrict c) {
    FN_ENTER(0x6d5e08u);
L_6d5e08:;
    c->r[0] = 0x5u;
    return;
}
void f_6d5e10(Cpu *restrict c) {
    FN_ENTER(0x6d5e10u);
L_6d5e10:;
    return;
}
void f_6d5e14(Cpu *restrict c) {
    FN_ENTER(0x6d5e14u);
L_6d5e14:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_HI) { return; }
    c->r[0] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d5e30(Cpu *restrict c) {
    FN_ENTER(0x6d5e30u);
L_6d5e30:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_6d5e7c; }
    (void)f_subs(c, c->r[2], 0xdu);
    if (COND_HI) { goto L_6d5e7c; }
    c->r[5] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[5] + 0x170u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d5e6c; }
    c->r[14] = 0x6d5e64u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6d5e6c:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
L_6d5e7c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d5e80(Cpu *restrict c) {
    FN_ENTER(0x6d5e80u);
L_6d5e80:;
    c->r[0] = 0xeu;
    return;
}
void f_6d5e88(Cpu *restrict c) {
    FN_ENTER(0x6d5e88u);
L_6d5e88:;
    return;
}
void f_6d5e8c(Cpu *restrict c) {
    FN_ENTER(0x6d5e8cu);
L_6d5e8c:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_6d5e90(Cpu *restrict c) {
    FN_ENTER(0x6d5e90u);
L_6d5e90:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[11] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_6d6488; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7u;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_HI) { goto L_6d6488; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d62dc; }
    c->v.s[16] = 0x0u;
    c->r[0] = c->r[11] + 0x1b0u;
    c->r[14] = 0x4b4u;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x1d0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x210u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_6d5f08:;
    c->r[4] = c->r[11] + (c->r[5] << 2);
    c->r[10] = c->r[4];
    { uint32_t ea = c->r[10] + 0x30u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_6d62cc; }
    c->r[0] = c->r[11] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_6d62cc; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[11] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5] + (c->r[5] << 2);
    c->r[6] = 0x3e8u;
    { uint32_t ea = c->r[7] + 0x50u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[2] = c->r[1] + (c->r[2] << 6);
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + c->r[14]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[3] = (c->r[1] >> 8);
    c->r[3] = (uint32_t)((int32_t)(int16_t)(c->r[3] >> 0) * (int32_t)(int16_t)(c->r[6] >> 0));
    c->r[1] = c->r[3] + (uint32_t)(uint8_t)(c->r[1]);
    (void)f_subs(c, c->r[0], c->r[1]);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_6d5f74; }
    c->r[8] = c->r[4];
    c->r[2] = c->r[2] + 0x500u;
    { uint32_t ea = c->r[8] + 0x90u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[3] = v; }
    goto L_6d5f88;
L_6d5f74:;
    c->r[2] = c->r[2] + 0x500u;
    c->r[8] = c->r[4] + 0x90u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[3] = c->v.s[0];
L_6d5f88:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0xb0u; ST32(ea, c->r[3]); c->r[6] = ea; }
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    ST32(c->r[8], c->v.s[0]);
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_6d5fdc; }
    { uint32_t ea = c->r[2] + 0xbu; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_6d5fdc; }
    { uint32_t ea = c->r[11] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xcu;
    c->r[2] = 0xffu;
    c->r[14] = 0x6d5fc4u; f_26ff44(c);
    c->r[14] = 0x4b4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_6d62cc; }
    c->r[0] = c->r[7] + 0x20u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d5fdc:;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_6d5ff4; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_6d62cc; }
L_6d5ff4:;
    { uint32_t ea = c->r[9] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0xbu; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x1u); }
    if (COND_EQ) { goto L_6d605c; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_6d605c; }
    c->r[12] = c->r[6];
    c->r[6] = 0x3a97u;
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[6] = c->r[12];
    if (COND_GT) { goto L_6d606c; }
    c->r[6] = 0x1388u;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[6]);
    c->r[6] = c->r[12];
    if (COND_LT) { goto L_6d606c; }
    c->r[2] = 0x1770u;
    c->r[2] = c->r[1] - c->r[2];
    c->r[2] = (c->r[2] >> 3);
    (void)f_subs(c, c->r[2], 0x7cu);
    c->r[2] = 0x0u;
    if (COND_HI) { c->r[2] = 0x1u; }
    goto L_6d606c;
L_6d605c:;
    c->r[2] = 0x3a97u;
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[2] = c->r[3];
    if (COND_GT) { c->r[2] = 0x4u; }
L_6d606c:;
    (void)f_subs(c, c->r[1], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_6d60a4; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_6d60a4; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[11];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x6d609cu; f_6d64a8(c);
    goto L_6d61bc;
L_6d60a4:;
    { uint32_t ea = c->r[11] + 0x1acu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d60d8; }
    { uint32_t ea = c->r[11] + 0x1acu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_6d60d8:;
    { uint32_t ea = c->r[11] + 0x1ccu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d6108; }
    { uint32_t ea = c->r[11] + 0x1ccu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_6d6108:;
    { uint32_t ea = c->r[11] + 0x1ecu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d6138; }
    { uint32_t ea = c->r[11] + 0x1ecu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_6d6138:;
    { uint32_t ea = c->r[11] + 0x20cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d6168; }
    { uint32_t ea = c->r[11] + 0x20cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
L_6d6168:;
    c->r[0] = c->r[11] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d62cc; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffbu;
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->r[14] = 0x6d61a0u; f_6d64a8(c);
    c->r[14] = 0x4b4u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d62cc; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[14] = 0x6d61bcu; f_6d66a0(c);
L_6d61bc:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { { uint32_t ea = c->r[11] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_6d62b8; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + 0xf0u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6d62b8; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[4] + 0x130u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { goto L_6d6224; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d6224; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_6d6224; }
    c->r[0] = c->r[11];
    c->r[1] = c->r[5];
    c->r[14] = 0x6d6224u; f_6d65bc(c);
L_6d6224:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[4] + 0xd0u;
L_6d622c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d62b8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    c->v.f[0] = (float)c->v.s[0];
    if (COND_EQ) { goto L_6d6280; }
    c->v.s[2] = LD32(c->r[8]);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_6d6280; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_MI) { c->r[0] = c->r[11]; }
    if (COND_MI) { c->r[1] = c->r[5]; }
    if (COND_MI) { c->r[14] = 0x6d6280u; f_6d65bc(c); }
L_6d6280:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    c->r[14] = 0x6d6298u; f_6d9e40(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_6d62b8; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6d622c; }
    c->r[1] = c->r[1] & 0xfffffffbu;
    { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[1]); }
L_6d62b8:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x4b4u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[0] = c->r[0] & 0xfffffffbu; }
    if (COND_NE) { { uint32_t ea = c->r[11] + 0xcu; ST32(ea, c->r[0]); } }
L_6d62cc:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_6d5f08; }
L_6d62dc:;
    c->r[0] = 0x13628f0u;
    c->r[5] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x6d62f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x13628e4u;
    { uint32_t ea = 0x6d62fcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13628d8u;
    { uint32_t ea = 0x6d6308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13628ccu;
    { uint32_t ea = 0x6d6314u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
L_6d6314:;
    c->r[8] = c->r[11] + (c->r[1] << 2);
    { uint32_t ea = c->r[8] + 0x22cu; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_6d6470; }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
L_6d632c:;
    c->r[10] = c->r[11] + c->r[9];
    { uint32_t ea = c->r[10] + 0x1acu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d6454; }
    { uint32_t ea = c->r[10] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6d6454; }
    { uint32_t ea = c->r[10] + 0x1b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d6434; }
    c->r[0] = 0x1052u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_HI) { goto L_6d6434; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0x6d6374u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0x6d6398u: goto L_6d6398; case 0x6d63c0u: goto L_6d63c0; case 0x6d63e0u: goto L_6d63e0; case 0x6d6410u: goto L_6d6410; case 0x6d6434u: goto L_6d6434; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6d6398:;
    c->r[7] = c->r[10] + 0x1bcu;
    { uint32_t ea = c->r[10] + 0x1b8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[6]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[14] = 0x6d63bcu; f_6f0be8(c);
    goto L_6d6434;
L_6d63c0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1b8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x1bcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1c0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0x6d63dcu; f_6f1974(c);
    goto L_6d6434;
L_6d63e0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1b8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x1bcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1c0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x1c4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[14] = 0x6d640cu; f_6f1c0c(c);
    goto L_6d6434;
L_6d6410:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1b8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x1bcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1c0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x1c4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[6]); }
    c->r[14] = 0x6d6434u; f_6f1ee4(c);
L_6d6434:;
    { uint32_t ea = c->r[10] + 0x1acu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1b0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1b8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1c0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1c4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[5]); }
L_6d6454:;
    c->r[9] = c->r[9] + 0x20u;
    (void)f_subs(c, c->r[9], 0x80u);
    if (COND_NE) { goto L_6d632c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CC) { goto L_6d6314; }
L_6d6470:;
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[11] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x238u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_6d6488:;
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6d64a8(Cpu *restrict c) {
    FN_ENTER(0x6d64a8u);
L_6d64a8:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[8] = c->r[0];
    c->r[5] = 0x0u;
    c->v.s[16] = c->v.s[0];
    c->r[1] = c->r[8] + (c->r[1] << 2);
    c->r[10] = c->r[1];
    c->r[6] = c->r[1];
    c->r[7] = c->r[1];
    c->r[9] = c->r[1];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[10] + 0xf0u; ST32(ea, c->r[5]); c->r[10] = ea; }
    { uint32_t ea = c->r[6] + 0xd0u; ST32(ea, c->r[5]); c->r[6] = ea; }
    { uint32_t ea = c->r[7] + 0x110u; ST32(ea, c->r[5]); c->r[7] = ea; }
    { uint32_t ea = c->r[9] + 0x130u; ST32(ea, c->r[5]); c->r[9] = ea; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d65b0; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x6d6500u; f_6d9dbc(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_6d65b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d6520u; f_6d9e20(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_6d65a4; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d65a4; }
    c->r[0] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d6574;
L_6d6558:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d6574:;
    c->r[14] = 0x6d6578u; f_6d9e40(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_6d65a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)c->v.s[0];
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LT) { goto L_6d6558; }
    c->r[5] = 0x1u;
    goto L_6d65b0;
L_6d65a4:;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[5]); }
L_6d65b0:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6d65bc(Cpu *restrict c) {
    FN_ENTER(0x6d65bcu);
L_6d65bc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[5] + (c->r[8] << 2);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x130u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_6d669c; }
    c->r[4] = c->r[0] + 0x30u;
    c->r[9] = 0x0u;
    c->r[6] = 0x0u;
L_6d65f0:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d6604u; f_6d9e68(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_6d6678; }
    { uint32_t ea = c->r[2] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6d6628; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[5];
    c->r[14] = 0x6d6628u; f_6d74f8(c);
L_6d6628:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6d667c; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xfffffff7u;
    { uint32_t ea = c->r[5] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0x16cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] + c->r[6]; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GE) { goto L_6d669c; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6d6688; }
    goto L_6d669c;
L_6d6678:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d667c:;
    c->r[1] = c->r[6];
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6d669c; }
L_6d6688:;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_6d65f0; }
L_6d669c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6d66a0(Cpu *restrict c) {
    FN_ENTER(0x6d66a0u);
L_6d66a0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[9] = c->r[1];
    c->r[5] = c->r[0];
    c->r[0] = c->r[5] + (c->r[9] << 2);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x110u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_6d6778; }
    c->r[8] = c->r[0] + 0x130u;
    c->r[4] = c->r[0] + 0x30u;
    c->r[10] = 0x0u;
    c->r[6] = 0x0u;
L_6d66d8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d66ecu; f_6d9e68(c);
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_6d6754; }
    c->r[0] = c->r[9];
    c->r[1] = c->r[5];
    c->r[14] = 0x6d6704u; f_6d74f8(c);
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6d6758; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xfffffff7u;
    { uint32_t ea = c->r[5] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x168u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0x16cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = c->r[1] + c->r[6]; }
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { c->r[1] = c->r[1] - 0x1u; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GE) { goto L_6d6778; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_6d6764; }
    goto L_6d6778;
L_6d6754:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d6758:;
    c->r[1] = c->r[6];
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_6d6778; }
L_6d6764:;
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_6d66d8; }
L_6d6778:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6d677c(Cpu *restrict c) {
    FN_ENTER(0x6d677cu);
L_6d677c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    (void)f_subs(c, c->r[1], 0xdu);
    if (COND_HI) { goto L_6d67a4; }
    c->r[4] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    c->r[14] = 0x6d679cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
L_6d67a4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d67a8(Cpu *restrict c) {
    FN_ENTER(0x6d67a8u);
L_6d67a8:;
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1aau; ST8(ea, c->r[1]); }
    return;
}
void f_6d67b8(Cpu *restrict c) {
    FN_ENTER(0x6d67b8u);
L_6d67b8:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x22cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_NE) { c->r[2] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x230u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[3], 0x1u); }
    if (COND_NE) { c->r[2] = c->r[0]; }
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x234u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; } }
    if (COND_NE) { (void)f_adds(c, c->r[3], 0x1u); }
    if (COND_NE) { goto L_6d67e8; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    return;
L_6d67e8:;
    { uint32_t ea = c->r[0] + 0x238u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_adds(c, c->r[2], 0x1u);
    c->r[2] = c->r[0];
    if (COND_EQ) { { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); } }
    return;
}
void f_6d67fc(Cpu *restrict c) {
    FN_ENTER(0x6d67fcu);
L_6d67fc:;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x1acu; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_6d6844; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x1ccu; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_6d684c; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x1ecu; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_6d6854; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x20cu; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { return; }
    c->r[12] = 0x3u;
    goto L_6d6858;
L_6d6844:;
    c->r[12] = 0x0u;
    goto L_6d6858;
L_6d684c:;
    c->r[12] = 0x1u;
    goto L_6d6858;
L_6d6854:;
    c->r[12] = 0x2u;
L_6d6858:;
    c->r[3] = 0x1u;
    c->r[0] = c->r[0] + (c->r[12] << 5);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1c8u; ST32(ea, c->r[1]); }
    return;
}
void f_6d68a0(Cpu *restrict c) {
    FN_ENTER(0x6d68a0u);
L_6d68a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d68a4(Cpu *restrict c) {
    FN_ENTER(0x6d68a4u);
L_6d68a4:;
    c->r[0] = 0x1367f34u;
    { uint32_t ea = 0x6d68b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d68b4(Cpu *restrict c) {
    FN_ENTER(0x6d68b4u);
L_6d68b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13c0450u;
    c->r[4] = 0x0u;
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x5u;
    c->r[14] = 0x6u;
    c->r[5] = 0x6d68e0u + c->r[0];
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
    c->r[14] = 0x6d693cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x6d6954u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x6d696cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x13621bcu;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[3] = 0x23cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1367e34u;
    { uint32_t ea = 0x6d69a8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x107ffd9u;
    { uint32_t ea = 0x6d69b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d69b4u + c->r[1];
    c->r[14] = 0x6d69b4u; f_9aedcc(c);
    c->r[1] = 0x1367e4cu;
    { uint32_t ea = 0x6d69c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d69e0(Cpu *restrict c) {
    FN_ENTER(0x6d69e0u);
L_6d69e0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1367e20u;
    { uint32_t ea = 0x6d69f0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d69f4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2cu;
    c->pc = c->r[4]; c->r[14] = 0x6d6a0cu; rt_dispatch(c);
    c->r[14] = 0x6d6a10u; f_22b8f0(c);
    c->r[1] = 0x1367df8u;
    { uint32_t ea = 0x6d6a1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d6a58(Cpu *restrict c) {
    FN_ENTER(0x6d6a58u);
L_6d6a58:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1367da0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x6d6a70u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d6a74u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d6a94(Cpu *restrict c) {
    FN_ENTER(0x6d6a94u);
L_6d6a94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1367d68u;
    { uint32_t ea = 0x6d6aa8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d6aa8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d6ac0(Cpu *restrict c) {
    FN_ENTER(0x6d6ac0u);
L_6d6ac0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x6d6ac8u; f_22b8f0(c);
    c->r[1] = 0x1367d40u;
    { uint32_t ea = 0x6d6ad4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d6b0c(Cpu *restrict c) {
    FN_ENTER(0x6d6b0cu);
L_6d6b0c:;
    __attribute__((musttail)) return f_22b908(c);
}
void f_6d6b10(Cpu *restrict c) {
    FN_ENTER(0x6d6b10u);
L_6d6b10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6d6b1cu; f_22b908(c);
    c->r[0] = 0x1367ce8u;
    { uint32_t ea = 0x6d6b28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d6b28u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d6b40(Cpu *restrict c) {
    FN_ENTER(0x6d6b40u);
L_6d6b40:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x2cu;
    c->r[8] = c->r[1];
    c->r[11] = c->r[0];
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6b78u; f_9bb638(c);
    c->r[1] = 0x1091376u;
    c->r[10] = c->r[13] + 0x8u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0x6d6b90u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x4u;
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
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6bf4u; f_9bb638(c);
    c->r[1] = 0x109130au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6c08u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[1] = c->r[1] + 0x6u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6c78u; f_9bb638(c);
    c->r[1] = 0x1091290u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6c8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xcu;
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
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6cf0u; f_9bb638(c);
    c->r[1] = 0x1091224u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6d04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x10u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6d68u; f_9bb638(c);
    c->r[1] = 0x10911b6u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6d7cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x14u;
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
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6de0u; f_9bb638(c);
    c->r[1] = 0x109114au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6df4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x18u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6e58u; f_9bb638(c);
    c->r[1] = 0x10910dcu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6e6cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1cu;
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
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6ed0u; f_9bb638(c);
    c->r[1] = 0x1091070u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6ee4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x20u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6f48u; f_9bb638(c);
    c->r[1] = 0x1091002u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d6f5cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x24u;
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
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    c->r[14] = 0x6d6fc0u; f_9bb638(c);
    c->r[1] = 0x1090f9eu;
    c->r[1] = 0x6d6fccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x28u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[9]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x2cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6d703c(Cpu *restrict c) {
    FN_ENTER(0x6d703cu);
L_6d703c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7070; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7060u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d7080; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7070:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_6d7080:;
    { uint32_t ea = c->r[4] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x6d7094u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d70c0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d70b0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d70d0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d70c0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_6d70d0:;
    { uint32_t ea = c->r[4] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x6d70e4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7110; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7100u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d7120; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7110:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_6d7120:;
    { uint32_t ea = c->r[4] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x6d7134u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7160; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7150u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d7170; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7160:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_6d7170:;
    { uint32_t ea = c->r[4] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x6d7184u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d71b0; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d71a0u; f_a261fc(c);
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d71c0; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d71b0:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_6d71c0:;
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x6d71d4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d71dc(Cpu *restrict c) {
    FN_ENTER(0x6d71dcu);
L_6d71dc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7210; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6d720cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7210:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6d7238u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7260; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6d725cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7260:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6d7288u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d72b0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6d72acu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d72b0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6d72d8u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7300; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6d72fcu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7300:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[2]; c->r[14] = 0x6d7328u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_6d7350; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->pc = c->r[1]; c->r[14] = 0x6d734cu; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7350:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d737c(Cpu *restrict c) {
    FN_ENTER(0x6d737cu);
L_6d737c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x136748cu;
    { uint32_t ea = 0x6d738cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d7390u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x2cu;
    c->pc = c->r[4]; c->r[14] = 0x6d73a8u; rt_dispatch(c);
    c->r[14] = 0x6d73acu; f_22b8f0(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1367438u;
    { uint32_t ea = 0x6d73e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d73f4(Cpu *restrict c) {
    FN_ENTER(0x6d73f4u);
L_6d73f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6d7400u; f_22b908(c);
    c->r[0] = 0x136740cu;
    { uint32_t ea = 0x6d740cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d740cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d7424(Cpu *restrict c) {
    FN_ENTER(0x6d7424u);
L_6d7424:;
    __attribute__((musttail)) return f_6d6b40(c);
}
void f_6d7428(Cpu *restrict c) {
    FN_ENTER(0x6d7428u);
L_6d7428:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d742c(Cpu *restrict c) {
    FN_ENTER(0x6d742cu);
L_6d742c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d7430(Cpu *restrict c) {
    FN_ENTER(0x6d7430u);
L_6d7430:;
    c->r[0] = 0x13673d4u;
    { uint32_t ea = 0x6d743cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d7440(Cpu *restrict c) {
    FN_ENTER(0x6d7440u);
L_6d7440:;
    c->r[0] = 0x13673ccu;
    { uint32_t ea = 0x6d744cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d7450(Cpu *restrict c) {
    FN_ENTER(0x6d7450u);
L_6d7450:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1367398u;
    c->r[5] = 0x0u;
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x6d7478u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1361a94u;
    { uint32_t ea = 0x6d7480u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x107f4e9u;
    c->r[1] = 0x6d7488u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d748cu; f_9aedcc(c);
    c->r[0] = 0x1367370u;
    c->r[1] = 0x1090ac0u;
    c->r[2] = c->r[4];
    c->r[3] = 0x2cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0x6d74b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d74b4u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1367354u;
    { uint32_t ea = 0x6d74c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d74c4u; f_9aedcc(c);
    c->r[1] = 0x1367354u;
    { uint32_t ea = 0x6d74d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d74f8(Cpu *restrict c) {
    FN_ENTER(0x6d74f8u);
L_6d74f8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_6d751c; }
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_6d7520; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { return; }
    __attribute__((musttail)) return f_6d759c(c);
L_6d751c:;
    return;
L_6d7520:;
    __attribute__((musttail)) return f_6d75ec(c);
}
void f_6d7524(Cpu *restrict c) {
    FN_ENTER(0x6d7524u);
L_6d7524:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    return;
}
void f_6d7538(Cpu *restrict c) {
    FN_ENTER(0x6d7538u);
L_6d7538:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    return;
}
void f_6d754c(Cpu *restrict c) {
    FN_ENTER(0x6d754cu);
L_6d754c:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    return;
}
void f_6d7560(Cpu *restrict c) {
    FN_ENTER(0x6d7560u);
L_6d7560:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[2] = c->r[2] + 0x1u; c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    return;
}
void f_6d7574(Cpu *restrict c) {
    FN_ENTER(0x6d7574u);
L_6d7574:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = c->r[2] + 0x2u; c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    return;
}
void f_6d7588(Cpu *restrict c) {
    FN_ENTER(0x6d7588u);
L_6d7588:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = c->r[1];
    return;
}
void f_6d759c(Cpu *restrict c) {
    FN_ENTER(0x6d759cu);
L_6d759c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_6d75e8; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_6d75e8; }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6d75e8; }
    { uint32_t ea = c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { return; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x4u;
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
L_6d75e8:;
    return;
}
void f_6d75ec(Cpu *restrict c) {
    FN_ENTER(0x6d75ecu);
L_6d75ec:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[1];
    c->r[7] = c->r[2];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[7], 0x0u); }
    if (COND_EQ) { goto L_6d85ec; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_HI) { goto L_6d85ec; }
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x150u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x2u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x85u);
    if (COND_HI) { goto L_6d85ec; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x6d7668u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x6d7884u: goto L_6d7884; case 0x6d797cu: goto L_6d797c; case 0x6d79f0u: goto L_6d79f0; case 0x6d7a68u: goto L_6d7a68; case 0x6d7b28u: goto L_6d7b28; case 0x6d7b90u: goto L_6d7b90; case 0x6d7c60u: goto L_6d7c60; case 0x6d7d1cu: goto L_6d7d1c; case 0x6d7dd8u: goto L_6d7dd8; case 0x6d7e30u: goto L_6d7e30; case 0x6d7ebcu: goto L_6d7ebc; case 0x6d7f28u: goto L_6d7f28; case 0x6d800cu: goto L_6d800c; case 0x6d8050u: goto L_6d8050; case 0x6d8108u: goto L_6d8108; case 0x6d814cu: goto L_6d814c; case 0x6d81acu: goto L_6d81ac; case 0x6d81fcu: goto L_6d81fc; case 0x6d8264u: goto L_6d8264; case 0x6d830cu: goto L_6d830c; case 0x6d83b4u: goto L_6d83b4; case 0x6d8454u: goto L_6d8454; case 0x6d85ecu: goto L_6d85ec; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6d7884:;
    c->r[4] = c->r[13] + 0x48u;
    c->r[0] = c->r[4];
    c->r[14] = 0x6d7890u; f_6d754c(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d789cu; f_6d7574(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d78a8u; f_6d7574(c);
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d78b4u; f_6d7524(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d78c0u; f_6d7538(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d78ccu; f_6d754c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d78d8u; f_6d7538(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = ~0x7fu;
    c->r[4] = 0x0u;
    c->r[0] = c->r[0] ^ c->r[1];
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_6d7908; }
    c->r[1] = 0x1154138u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = 0x6d7908u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
L_6d7908:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_6d7938; }
    c->r[0] = 0x1362298u;
    { uint32_t ea = 0x6d791cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d791cu; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CC) { goto L_6d7938; }
    c->r[1] = c->r[8] + c->r[5];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
L_6d7938:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1361280u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x6d7960u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x6d7974u; f_6f1ee4(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d797c:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[10] = 0x0u;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[10]); }
    c->r[14] = 0x6d7990u; f_6d754c(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d799cu; f_6d754c(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d79a8u; f_6d7574(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d79b4u; f_6d7560(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d79c0u; f_6d7538(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x20u;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[10]); }
    c->r[14] = 0x6d79e8u; f_6d67fc(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d79f0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d7a00u; rt_dispatch(c);
    c->r[1] = 0x1366e18u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6d7a10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_6d85ec; }
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a24u; f_6d7588(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a30u; f_6d7588(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a3cu; f_6d7588(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d85ec; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x468u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_6d82d8;
L_6d7a68:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a74u; f_6d754c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a80u; f_6d7574(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a8cu; f_6d754c(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7a98u; f_6d7524(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7aa4u; f_6d7538(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7ab0u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7abcu; f_6d7538(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_6d7af0; }
    c->r[0] = 0x13620e0u;
    { uint32_t ea = 0x6d7ad4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d7ad4u; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_6d7af0; }
    c->r[1] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
    c->r[4] = c->r[5];
L_6d7af0:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x13610bcu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = 0x6d7b24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d7b84;
L_6d7b28:;
    c->r[7] = c->r[13] + 0x48u;
    c->r[0] = c->r[7];
    c->r[14] = 0x6d7b34u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x6d7b40u; f_6d7574(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0x6d7b4cu; f_6d754c(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[1] + 0xbu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[1] = 0x1361064u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[2] = c->r[5];
    c->r[3] = c->r[6];
    { uint32_t ea = 0x6d7b7cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_6d7b84:;
    c->r[14] = 0x6d7b88u; f_6f1974(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d7b90:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7b9cu; f_6d754c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7ba8u; f_6d7574(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7bb4u; f_6d7574(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7bc0u; f_6d7524(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7bccu; f_6d7538(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7bd8u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7be4u; f_6d7538(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_6d7c18; }
    c->r[0] = 0x1361fb8u;
    { uint32_t ea = 0x6d7bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d7bfcu; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_6d7c18; }
    c->r[1] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
    c->r[4] = c->r[5];
L_6d7c18:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360f84u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = 0x6d7c5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d8000;
L_6d7c60:;
    c->r[5] = c->r[13] + 0x48u;
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7c6cu; f_6d754c(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7c78u; f_6d7524(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7c84u; f_6d7538(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7c90u; f_6d754c(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d7c9cu; f_6d7538(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_6d7cd0; }
    c->r[0] = 0x1361f00u;
    { uint32_t ea = 0x6d7cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d7cb4u; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_6d7cd0; }
    c->r[1] = c->r[5] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
    c->r[8] = c->r[9];
L_6d7cd0:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360ec8u;
    c->r[3] = 0x2u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8];
    c->r[3] = 0x3u;
    { uint32_t ea = 0x6d7d18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d8000;
L_6d7d1c:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d28u; f_6d754c(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d34u; f_6d754c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d40u; f_6d7574(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d4cu; f_6d754c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d58u; f_6d7524(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d64u; f_6d7538(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d70u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7d7cu; f_6d7538(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_6d7db0; }
    c->r[0] = 0x1361e20u;
    { uint32_t ea = 0x6d7d94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d7d94u; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_CC) { goto L_6d7db0; }
    c->r[1] = c->r[6] + c->r[8];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
    c->r[7] = c->r[5];
L_6d7db0:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360e08u;
    c->r[1] = 0x4u;
    { uint32_t ea = 0x6d7dd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d7fe0;
L_6d7dd8:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7de4u; f_6d7574(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7df0u; f_6d7574(c);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360db8u;
    c->r[2] = 0x0u;
    c->r[1] = 0x9u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = 0x6d7e28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    goto L_6d7ffc;
L_6d7e30:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7e3cu; f_6d7574(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7e48u; f_6d7574(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[5] + 0x1aau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d8550; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[7]);
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LS) { c->r[1] = 0x807u; }
    if (COND_LS) { c->r[0] = (c->r[7] << 3); }
    if (COND_LS) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x5060000u; }
    c->r[2] = c->r[4];
    if (COND_LS) { c->r[1] = sh_lsr(c->r[1], c->r[0]); }
    c->r[0] = 0x1360d50u;
    c->r[3] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[1] = 0x1u;
    { uint32_t ea = 0x6d7e90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d7e94u; f_6f0824(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_6d8624; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 5);
    goto L_6d8628;
L_6d7ebc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d7eccu; rt_dispatch(c);
    c->r[1] = 0x136694cu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6d7edcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_6d85ec; }
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7ef0u; f_6d7588(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7efcu; f_6d7588(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f08u; f_6d7588(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_6d82cc; }
    goto L_6d85ec;
L_6d7f28:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f34u; f_6d754c(c);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f40u; f_6d754c(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f4cu; f_6d7574(c);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f58u; f_6d754c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f64u; f_6d7524(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f70u; f_6d7538(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f7cu; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d7f88u; f_6d7538(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_6d7fbc; }
    c->r[0] = 0x1361c14u;
    { uint32_t ea = 0x6d7fa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d7fa0u; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_CC) { goto L_6d7fbc; }
    c->r[1] = c->r[6] + c->r[8];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
    c->r[7] = c->r[5];
L_6d7fbc:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360bfcu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x6d7fe4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d7fe0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
L_6d7ffc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_6d8000:;
    c->r[14] = 0x6d8004u; f_6f0be8(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d800c:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8018u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8024u; f_6d7538(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[1] + 0xbu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[1] = 0x1360b90u;
    c->r[2] = ~0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = 0x6d8050u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_6d823c;
L_6d8050:;
    c->r[5] = c->r[13] + 0x48u;
    c->r[0] = c->r[5];
    c->r[14] = 0x6d805cu; f_6d754c(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d8068u; f_6d7524(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d8074u; f_6d7538(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d8080u; f_6d754c(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6d808cu; f_6d7538(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_6d80c0; }
    c->r[0] = 0x1361b10u;
    { uint32_t ea = 0x6d80a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d80a4u; f_9cc110(c);
    c->r[0] = c->r[0] & 0x7u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CC) { goto L_6d80c0; }
    c->r[1] = c->r[5] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_6d85ec; }
    c->r[8] = c->r[9];
L_6d80c0:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360adcu;
    c->r[3] = 0x2u;
    c->r[1] = ~0x0u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8];
    { uint32_t ea = 0x6d8104u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d8254;
L_6d8108:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8114u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8120u; f_6d7538(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[1] + 0xbu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[1] = 0x1360a94u;
    c->r[2] = ~0x0u;
    c->r[3] = 0x2u;
    { uint32_t ea = 0x6d814cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_6d823c;
L_6d814c:;
    c->r[0] = c->r[13] + 0x48u;
    c->r[14] = 0x6d8154u; f_6d7574(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360a5cu;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = 0x6d8184u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d818cu; f_6f0b10(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x0u;
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[5]); }
    c->r[1] = c->r[6];
    goto L_6d8254;
L_6d81ac:;
    { uint32_t ea = c->r[5] + 0x1aau; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d8590; }
    c->r[0] = 0x1360a10u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1u;
    c->r[3] = 0x6u;
    { uint32_t ea = 0x6d81d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d81d8u; f_6f0824(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_EQ) { goto L_6d85f4; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 5);
    goto L_6d85f8;
L_6d81fc:;
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8208u; f_6d754c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8214u; f_6d7538(c);
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[1] + 0xbu; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[1] = 0x13609a0u;
    c->r[2] = ~0x0u;
    c->r[3] = 0x3u;
    { uint32_t ea = 0x6d8240u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
L_6d823c:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5];
L_6d8250:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
L_6d8254:;
    c->r[3] = 0x0u;
    c->r[14] = 0x6d825cu; f_6f1c0c(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d8264:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d8274u; rt_dispatch(c);
    c->r[1] = 0x13665a4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6d8284u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_6d85ec; }
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8298u; f_6d7588(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d82a4u; f_6d7588(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d82b0u; f_6d7588(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
L_6d82cc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x37cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_6d82d8:;
    c->r[1] = c->r[9];
    c->pc = c->r[2]; c->r[14] = 0x6d82e0u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { c->r[7] = 0x0u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_6d83ac; }
    goto L_6d85ec;
L_6d830c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d831cu; rt_dispatch(c);
    c->r[1] = 0x13664fcu;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6d832cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_6d85ec; }
    c->r[6] = c->r[13] + 0x48u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8340u; f_6d7588(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d834cu; f_6d7588(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d8358u; f_6d7588(c);
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x304u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d8384u; rt_dispatch(c);
    (void)f_subs(c, c->r[7], 0x0u);
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { c->r[7] = 0x0u; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { c->r[7] = c->r[2]; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
L_6d83ac:;
    { uint32_t ea = c->r[5] + 0x168u; ST32(ea, c->r[1]); }
    goto L_6d85dc;
L_6d83b4:;
    c->r[4] = c->r[13] + 0x48u;
    c->r[0] = c->r[4];
    c->r[14] = 0x6d83c0u; f_6d754c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d83ccu; f_6d754c(c);
    c->r[8] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d83d8u; f_6d7574(c);
    c->r[9] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d83e4u; f_6d754c(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_HI) { goto L_6d8400; }
    c->r[1] = 0x10bee0cu;
    c->r[0] = (uint32_t)(int32_t)(int16_t)(c->r[7]);
    c->r[1] = 0x6d8400u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
L_6d8400:;
    c->r[0] = 0x13607c8u;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x1aau; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = 0x6d8418u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d8420u; f_6f0824(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[7], 0x2u);
    if (COND_NE) { goto L_6d84e4; }
    c->r[0] = 0x1360798u;
    c->r[2] = c->r[8];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x6d8448u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d844cu; f_6f0798(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d8454:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d8464u; rt_dispatch(c);
    c->r[1] = 0x13663b4u;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0x6d8474u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_6d85ec; }
    c->r[4] = c->r[13] + 0x48u;
    c->r[0] = c->r[4];
    c->r[14] = 0x6d8488u; f_6d7588(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d8494u; f_6d7588(c);
    c->r[7] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6d84a0u; f_6d7588(c);
    c->r[8] = c->r[0];
    c->r[0] = 0x1360704u;
    { uint32_t ea = 0x6d84b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d84b4u; f_5f8634(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_6d85cc; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6d84d0u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85cc; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_6d85ec; }
    goto L_6d85d4;
L_6d84e4:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_6d8534; }
    { uint32_t ea = c->r[4] + 0x498u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[9]);
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0xffu);
    if (COND_EQ) { goto L_6d8514; }
    { uint32_t ea = c->r[4] + 0x494u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 2);
    c->r[0] = c->r[0] + (c->r[2] << 5);
L_6d8514:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
L_6d8534:;
    c->r[0] = 0x1360694u;
    c->r[2] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[8];
    { uint32_t ea = 0x6d854cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d8660;
L_6d8550:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360658u;
    c->r[2] = 0x2u;
    c->r[1] = 0x5u;
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = 0x6d8588u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    goto L_6d7ffc;
L_6d8590:;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d85ec; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_NE) { goto L_6d85ec; }
    c->r[0] = 0x1360624u;
    c->r[1] = 0x0u;
    c->r[2] = 0x4u;
    { uint32_t ea = 0x6d85bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[2] = 0x0u;
    goto L_6d8250;
L_6d85cc:;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_6d85ec; }
L_6d85d4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x168u; ST32(ea, c->r[0]); }
L_6d85dc:;
    { uint32_t ea = c->r[5] + 0x16cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
L_6d85ec:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_6d85f4:;
    c->r[0] = 0x0u;
L_6d85f8:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x13605bcu;
    { uint32_t ea = 0x6d8624u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_6d8650;
L_6d8624:;
    c->r[0] = 0x0u;
L_6d8628:;
    { uint32_t ea = c->r[0] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x136058cu;
    { uint32_t ea = 0x6d8654u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d8650:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
L_6d8660:;
    c->r[3] = c->r[4];
    c->r[14] = 0x6d8668u; f_6f0700(c);
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6d8704(Cpu *restrict c) {
    FN_ENTER(0x6d8704u);
L_6d8704:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x13be6acu;
    c->r[5] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x6d8724u + c->r[0];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x4u;
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x9u;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x5u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7fu;
    c->r[14] = 0x6d8774u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x6d878cu; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x6d87a4u; f_15efda0(c);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = 0x10000u;
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x14u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[2] = f_adds(c, c->r[1], 0xf0000u);
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4] + 0x24u;
    c->r[3] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d87e4(Cpu *restrict c) {
    FN_ENTER(0x6d87e4u);
L_6d87e4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1366038u;
    { uint32_t ea = 0x6d87f4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d87f8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[4]; c->r[14] = 0x6d8810u; rt_dispatch(c);
    c->r[1] = 0x1366010u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x6d8820u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d8854(Cpu *restrict c) {
    FN_ENTER(0x6d8854u);
L_6d8854:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1360dccu;
    { uint32_t ea = 0x6d8864u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d8868u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x80u;
    c->pc = c->r[4]; c->r[14] = 0x6d8880u; rt_dispatch(c);
    c->r[14] = 0x6d8884u; f_5cafe8(c);
    c->r[1] = 0x1365fa0u;
    c->r[2] = 0x1365fa0u;
    { uint32_t ea = 0x6d8894u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x6d8898u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + 0x8u;
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x78u; ST16(ea, c->r[1]); }
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d88d4(Cpu *restrict c) {
    FN_ENTER(0x6d88d4u);
L_6d88d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1365f48u;
    { uint32_t ea = 0x6d88e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d8938; }
L_6d88f8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_6d88f8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_6d8930; }
    c->r[0] = 0x1360264u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x6d8924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6d8930u; rt_dispatch(c);
L_6d8930:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_6d8938:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d8948(Cpu *restrict c) {
    FN_ENTER(0x6d8948u);
L_6d8948:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1365ed4u;
    { uint32_t ea = 0x6d895cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d89ac; }
L_6d896c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_6d896c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_6d89a4; }
    c->r[0] = 0x13601f0u;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x6d8998u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6d89a4u; rt_dispatch(c);
L_6d89a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
L_6d89ac:;
    c->r[0] = 0x1365e74u;
    { uint32_t ea = 0x6d89b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d89b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d89d8(Cpu *restrict c) {
    FN_ENTER(0x6d89d8u);
L_6d89d8:;
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
    c->r[14] = 0x6d8a10u; f_9bb638(c);
    c->r[1] = 0x107bec6u;
    c->r[9] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0x6d8a28u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20010000u;
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
    c->r[14] = 0x6d8a8cu; f_9bb638(c);
    c->r[1] = 0x1079233u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8aa0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2000000eu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x14u;
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
    c->r[14] = 0x6d8b04u; f_9bb638(c);
    c->r[1] = 0x10857e2u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8b18u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x6u;
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
    c->r[14] = 0x6d8b78u; f_9bb638(c);
    c->r[1] = 0x1079174u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8b8cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
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
    c->r[14] = 0x6d8bf0u; f_9bb638(c);
    c->r[1] = 0x108f38cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8c04u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xau;
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
    c->r[14] = 0x6d8c64u; f_9bb638(c);
    c->r[1] = 0x108f330u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8c78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xbu;
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
    c->r[14] = 0x6d8cdcu; f_9bb638(c);
    c->r[1] = 0x1082a88u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8cf0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xcu;
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
    c->r[14] = 0x6d8d50u; f_9bb638(c);
    c->r[1] = 0x108f257u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8d64u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xeu;
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
    c->r[14] = 0x6d8dc8u; f_9bb638(c);
    c->r[1] = 0x108f1eau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8ddcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xfu;
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
    c->r[14] = 0x6d8e3cu; f_9bb638(c);
    c->r[1] = 0x107b934u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8e50u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
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
    c->r[14] = 0x6d8eb4u; f_9bb638(c);
    c->r[1] = 0x108f109u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6d8ec8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x11u;
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
    c->r[14] = 0x6d8f28u; f_9bb638(c);
    c->r[1] = 0x108f0a9u;
    c->r[1] = 0x6d8f34u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x12u;
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
void f_6d8fac(Cpu *restrict c) {
    FN_ENTER(0x6d8facu);
L_6d8fac:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_6d8fb0(Cpu *restrict c) {
    FN_ENTER(0x6d8fb0u);
L_6d8fb0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1365870u;
    { uint32_t ea = 0x6d8fc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d9004; }
    c->r[5] = 0x0u;
L_6d8fd8:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d8ff8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d8ff4u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_6d8ff8:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_6d8fd8; }
L_6d9004:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0x64u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d9030; }
    c->r[0] = 0x135fb3cu;
    { uint32_t ea = 0x6d9020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9020u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6d9030u; rt_dispatch(c);
L_6d9030:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d9048u; f_200690(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_5cb008(c);
}
void f_6d905c(Cpu *restrict c) {
    FN_ENTER(0x6d905cu);
L_6d905c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13657c4u;
    { uint32_t ea = 0x6d9070u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d90b0; }
    c->r[5] = 0x0u;
L_6d9084:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d90a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d90a0u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
L_6d90a4:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_CC) { goto L_6d9084; }
L_6d90b0:;
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[4] + 0x64u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d90dc; }
    c->r[0] = 0x135fa90u;
    { uint32_t ea = 0x6d90ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d90ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6d90dcu; rt_dispatch(c);
L_6d90dc:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x6d90f4u; f_200690(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6d90fcu; f_5cb008(c);
    c->r[0] = 0x1360528u;
    { uint32_t ea = 0x6d9108u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9108u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d9128(Cpu *restrict c) {
    FN_ENTER(0x6d9128u);
L_6d9128:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[14] = 0x6d913cu; f_a871d8(c);
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0x6d9164u; f_9bb638(c);
    c->r[1] = 0x108ee6eu;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0x6d917cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x5u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x78u;
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
    c->r[14] = 0x6d91dcu; f_9bb638(c);
    c->r[1] = 0x108a402u;
    c->r[1] = 0x6d91e8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x64u;
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
void f_6d9238(Cpu *restrict c) {
    FN_ENTER(0x6d9238u);
L_6d9238:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_6d923c(Cpu *restrict c) {
    FN_ENTER(0x6d923cu);
L_6d923c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x340u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0x6d925cu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d92a8; }
    c->r[6] = c->r[13] + 0x4u;
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d9274u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[5];
    c->r[2] = 0x2u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d9290u; f_a2fb14(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d929cu; f_a2fb10(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { c->r[4] = 0x1u; }
    goto L_6d92ac;
L_6d92a8:;
    c->r[4] = 0x0u;
L_6d92ac:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x340u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d92b8(Cpu *restrict c) {
    FN_ENTER(0x6d92b8u);
L_6d92b8:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[6] = c->r[13] + 0xcu;
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x10000u;
    c->r[0] = c->r[6];
    c->r[14] = 0x6d92d8u; f_a2fb08(c);
    c->r[0] = 0x0u;
    c->r[1] = c->r[4];
    c->r[2] = 0x2u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1360338u;
    { uint32_t ea = 0x6d92f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x6d9300u; f_a31b90(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0x6d930cu; f_a2fb10(c);
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x348u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d931c(Cpu *restrict c) {
    FN_ENTER(0x6d931cu);
L_6d931c:;
    return;
}
void f_6d9320(Cpu *restrict c) {
    FN_ENTER(0x6d9320u);
L_6d9320:;
    c->r[0] = c->r[0] + 0x64u;
    return;
}
void f_6d9328(Cpu *restrict c) {
    FN_ENTER(0x6d9328u);
L_6d9328:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d932c(Cpu *restrict c) {
    FN_ENTER(0x6d932cu);
L_6d932c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d9330(Cpu *restrict c) {
    FN_ENTER(0x6d9330u);
L_6d9330:;
    c->r[0] = 0x13654f0u;
    { uint32_t ea = 0x6d933cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d9340(Cpu *restrict c) {
    FN_ENTER(0x6d9340u);
L_6d9340:;
    c->r[0] = 0x13602e4u;
    { uint32_t ea = 0x6d934cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d9350(Cpu *restrict c) {
    FN_ENTER(0x6d9350u);
L_6d9350:;
    c->r[0] = 0x108eca4u;
    c->r[0] = 0x6d935cu + c->r[0];
    return;
}
void f_6d9360(Cpu *restrict c) {
    FN_ENTER(0x6d9360u);
L_6d9360:;
    c->r[0] = 0x108ec14u;
    c->r[0] = 0x6d936cu + c->r[0];
    return;
}
void f_6d9370(Cpu *restrict c) {
    FN_ENTER(0x6d9370u);
L_6d9370:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[14] = 0x6d9378u; f_200690(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_9ca854(c);
}
void f_6d9380(Cpu *restrict c) {
    FN_ENTER(0x6d9380u);
L_6d9380:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13bdac0u;
    c->r[4] = 0x0u;
    c->r[1] = 0x1u;
    c->r[2] = 0x4u;
    c->r[3] = 0x8u;
    c->r[12] = 0x9u;
    c->r[14] = 0x5u;
    c->r[5] = 0x6u;
    c->r[0] = 0x6d93b0u + c->r[0];
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
    c->r[3] = 0x18u;
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
    c->r[1] = 0x135f74cu;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    c->r[0] = 0x136540cu;
    { uint32_t ea = 0x6d9418u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x107d57du;
    { uint32_t ea = 0x6d9420u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d9424u + c->r[1];
    c->r[14] = 0x6d9424u; f_9aedcc(c);
    c->r[1] = 0x13653fcu;
    c->r[3] = 0x80u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x6d9440u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x136054cu;
    c->r[0] = 0x13601d4u;
    { uint32_t ea = 0x6d9454u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x108eb20u;
    { uint32_t ea = 0x6d945cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d9460u + c->r[1];
    c->r[14] = 0x6d9460u; f_9aedcc(c);
    c->r[1] = 0x13653d4u;
    { uint32_t ea = 0x6d946cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d949c(Cpu *restrict c) {
    FN_ENTER(0x6d949cu);
L_6d949c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1365398u;
    { uint32_t ea = 0x6d94acu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d94b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x68u;
    c->pc = c->r[4]; c->r[14] = 0x6d94ccu; rt_dispatch(c);
    c->r[14] = 0x6d94d0u; f_a870b8(c);
    c->r[1] = 0x136536cu;
    { uint32_t ea = 0x6d94dcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d94f8(Cpu *restrict c) {
    FN_ENTER(0x6d94f8u);
L_6d94f8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x136533cu;
    { uint32_t ea = 0x6d950cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9518u; f_6d9528(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_6d9528(Cpu *restrict c) {
    FN_ENTER(0x6d9528u);
L_6d9528:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d95f8; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d95d4; }
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
L_6d9550:;
    c->r[1] = c->r[5];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d95c4; }
    c->r[0] = c->r[1] + (c->r[7] << 3);
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = f_adds(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_6d95c0; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d95c4; }
    { uint32_t ea = c->r[6] + 0x6u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_6d95b4; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x6d959cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x6d95b0u: goto L_6d95b0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6d95b0:;
    c->r[14] = 0x6d95b4u; f_a87660(c);
L_6d95b4:;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_6d95c4;
L_6d95c0:;
    c->r[5] = c->r[1];
L_6d95c4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_6d9550; }
L_6d95d4:;
    c->r[0] = 0x1365264u;
    { uint32_t ea = 0x6d95e0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d95e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x6d95f0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6d95f8:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d9600(Cpu *restrict c) {
    FN_ENTER(0x6d9600u);
L_6d9600:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1365234u;
    { uint32_t ea = 0x6d9614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9620u; f_6d9528(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9628u; f_a87100(c);
    c->r[0] = 0x1365210u;
    { uint32_t ea = 0x6d9634u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9634u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d9650(Cpu *restrict c) {
    FN_ENTER(0x6d9650u);
L_6d9650:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[14] = 0x6d9664u; f_6d9528(c);
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    c->r[2] = 0x80000u;
    c->r[14] = 0x6d9674u; f_a260d4(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d9684u; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_6d9734; }
    c->r[0] = 0x135fda8u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x6d96a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x6d96b4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6d9734; }
    c->r[0] = c->r[13];
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x6d96d0u; f_a2710c(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_6d9718; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4553u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6d9718; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x706u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20160000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6d9718; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x6d9714u; f_6d9750(c);
    c->r[5] = c->r[0];
L_6d9718:;
    c->r[0] = 0x135fd28u;
    { uint32_t ea = 0x6d9724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6d9734u; rt_dispatch(c);
L_6d9734:;
    c->r[0] = c->r[13];
    c->r[14] = 0x6d973cu; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d9750(Cpu *restrict c) {
    FN_ENTER(0x6d9750u);
L_6d9750:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    c->r[7] = c->r[1];
    c->r[6] = c->r[2];
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_EQ) { goto L_6d98e4; }
    c->r[0] = 0x13650c4u;
    { uint32_t ea = 0x6d9780u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9780u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[3]; c->r[14] = 0x6d9794u; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_6d98e4; }
    c->r[1] = c->r[7];
    c->r[2] = c->r[6];
    c->r[14] = 0x6d97acu; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d98e0; }
    c->r[1] = 0x135fc84u;
    c->r[6] = 0x0u;
    { uint32_t ea = 0x6d97ccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x135fe54u;
    { uint32_t ea = 0x6d97d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x135fc6cu;
    { uint32_t ea = 0x6d97e4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1365064u;
    { uint32_t ea = 0x6d97f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x135fc54u;
    { uint32_t ea = 0x6d97fcu + c->r[1]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = 0x136504cu;
    { uint32_t ea = 0x6d9804u + c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[1] = 0x135fc44u;
    { uint32_t ea = 0x6d980cu + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x1365038u;
    { uint32_t ea = 0x6d9814u + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_6d981c;
L_6d9814:;
    c->r[0] = 0x0u;
    goto L_6d98c8;
L_6d981c:;
    c->r[1] = c->r[0] + (c->r[6] << 3);
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[11] = f_adds(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_6d98d0; }
    { uint32_t ea = c->r[11] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_6d9814; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x6d9848u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x6d985cu: goto L_6d985c; case 0x6d9878u: goto L_6d9878; case 0x6d9894u: goto L_6d9894; case 0x6d98acu: goto L_6d98ac; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_6d985c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11] + 0x1cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_6d98c0;
L_6d9878:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11] + 0x1cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_6d98c0;
L_6d9894:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11] + 0x1cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[9];
    goto L_6d98c0;
L_6d98ac:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11] + 0x1cu;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[5];
L_6d98c0:;
    c->r[3] = 0x1u;
    c->pc = c->r[7]; c->r[14] = 0x6d98c8u; rt_dispatch(c);
L_6d98c8:;
    { uint32_t ea = c->r[11] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
L_6d98d0:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_CC) { goto L_6d981c; }
L_6d98e0:;
    c->r[5] = 0x1u;
L_6d98e4:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6d9914(Cpu *restrict c) {
    FN_ENTER(0x6d9914u);
L_6d9914:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x338u;
    c->r[4] = c->r[13] + 0x10u;
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9930u; f_a2772c(c);
    c->r[0] = 0x4553u;
    c->r[1] = c->r[13];
    c->r[2] = 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x706u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20160000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9964u; f_a27cd0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6d996cu; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x338u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d9978(Cpu *restrict c) {
    FN_ENTER(0x6d9978u);
L_6d9978:;
    __attribute__((musttail)) return f_a871d4(c);
}
void f_6d997c(Cpu *restrict c) {
    FN_ENTER(0x6d997cu);
L_6d997c:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[1]); }
    if (COND_LS) { goto L_6d99a0; }
    c->r[0] = c->r[2] + (c->r[1] << 3);
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + c->r[0];
L_6d99a0:;
    return;
}
void f_6d99a4(Cpu *restrict c) {
    FN_ENTER(0x6d99a4u);
L_6d99a4:;
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], c->r[2]);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    if (COND_LS) { goto L_6d9a00; }
    c->r[2] = c->r[12] + (c->r[2] << 3);
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = f_adds(c, c->r[12], c->r[2]);
    if (COND_NE) { { uint32_t ea = c->r[12] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[3]); }
    if (COND_LS) { goto L_6d9a00; }
    c->r[0] = c->r[12] + 0x5cu;
    { uint32_t ea = c->r[0] + (c->r[3] << 4); uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
L_6d9a00:;
    return;
}
void f_6d9a04(Cpu *restrict c) {
    FN_ENTER(0x6d9a04u);
L_6d9a04:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d9a08(Cpu *restrict c) {
    FN_ENTER(0x6d9a08u);
L_6d9a08:;
    c->r[0] = 0x1364e30u;
    { uint32_t ea = 0x6d9a14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d9a18(Cpu *restrict c) {
    FN_ENTER(0x6d9a18u);
L_6d9a18:;
    c->r[0] = 0x108e5f3u;
    c->r[0] = 0x6d9a24u + c->r[0];
    return;
}
void f_6d9a28(Cpu *restrict c) {
    FN_ENTER(0x6d9a28u);
L_6d9a28:;
    c->r[0] = 0x4553u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    return;
}
void f_6d9a34(Cpu *restrict c) {
    FN_ENTER(0x6d9a34u);
L_6d9a34:;
    c->r[0] = 0x706u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20160000u;
    return;
}
void f_6d9a40(Cpu *restrict c) {
    FN_ENTER(0x6d9a40u);
L_6d9a40:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13bd454u;
    c->r[1] = 0x3f800000u;
    c->r[3] = 0x68u;
    { uint32_t ea = 0x6d9a5cu + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x135f104u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1364dc4u;
    { uint32_t ea = 0x6d9a78u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x108e580u;
    { uint32_t ea = 0x6d9a80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d9a84u + c->r[1];
    c->r[14] = 0x6d9a84u; f_9aedcc(c);
    c->r[1] = 0x1364dc8u;
    { uint32_t ea = 0x6d9a90u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d9ab0(Cpu *restrict c) {
    FN_ENTER(0x6d9ab0u);
L_6d9ab0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x135fb68u;
    { uint32_t ea = 0x6d9ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9ac4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x6d9ae0u; rt_dispatch(c);
    c->r[14] = 0x6d9ae4u; f_a870b8(c);
    c->r[1] = 0x1364d6cu;
    { uint32_t ea = 0x6d9af0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d9b14(Cpu *restrict c) {
    FN_ENTER(0x6d9b14u);
L_6d9b14:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1364d34u;
    { uint32_t ea = 0x6d9b28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d9b5c; }
    c->r[0] = 0x135fae4u;
    { uint32_t ea = 0x6d9b44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9b44u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x6d9b54u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6d9b5c:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_6d9b70(Cpu *restrict c) {
    FN_ENTER(0x6d9b70u);
L_6d9b70:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1364cd8u;
    { uint32_t ea = 0x6d9b84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_6d9bb8; }
    c->r[0] = 0x135fa88u;
    { uint32_t ea = 0x6d9ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9ba0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x6d9bb0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6d9bb8:;
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9bc0u; f_a87100(c);
    c->r[0] = 0x135fa5cu;
    { uint32_t ea = 0x6d9bccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9bccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6d9bec(Cpu *restrict c) {
    FN_ENTER(0x6d9becu);
L_6d9bec:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6d9c2c; }
    c->r[0] = 0x135fa14u;
    { uint32_t ea = 0x6d9c14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9c14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6d9c24u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6d9c2c:;
    c->r[0] = c->r[13];
    c->r[1] = c->r[5];
    c->r[2] = 0x80000u;
    c->r[14] = 0x6d9c3cu; f_a260d4(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x6d9c4cu; rt_dispatch(c);
    c->r[7] = c->r[0];
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_6d9d34; }
    c->r[0] = 0x135f7e0u;
    c->r[2] = 0x10u;
    { uint32_t ea = 0x6d9c6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x6d9c7cu; rt_dispatch(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_6d9d34; }
    c->r[0] = c->r[13];
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x6d9c98u; f_a2710c(c);
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_NE) { goto L_6d9d18; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x534du;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x530000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6d9d18; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1015u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20130000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_6d9d18; }
    c->r[0] = 0x135f950u;
    { uint32_t ea = 0x6d9cd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6d9cd8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0x6d9cecu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_6d9d18; }
    c->r[1] = c->r[6];
    c->r[2] = c->r[7];
    c->r[14] = 0x6d9d04u; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x1u;
    c->r[2] = c->r[0] + 0x10u;
    c->r[3] = c->r[0] + 0x410u;
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[2]); ST32(ea + 4, c->r[3]); }
L_6d9d18:;
    c->r[0] = 0x135f728u;
    { uint32_t ea = 0x6d9d24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0x6d9d34u; rt_dispatch(c);
L_6d9d34:;
    c->r[0] = c->r[13];
    c->r[14] = 0x6d9d3cu; f_a26130(c);
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6d9d58(Cpu *restrict c) {
    FN_ENTER(0x6d9d58u);
L_6d9d58:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x338u;
    c->r[4] = c->r[13] + 0x10u;
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9d74u; f_a2772c(c);
    c->r[0] = 0x534du;
    c->r[1] = c->r[13];
    c->r[2] = 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1015u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20130000u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9da8u; f_a27cd0(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9db0u; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x338u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d9dbc(Cpu *restrict c) {
    FN_ENTER(0x6d9dbcu);
L_6d9dbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[12] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12] + 0x64u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[14] + 0x8u; uint32_t v = LD16(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_6d9e1c; }
    { uint32_t ea = c->r[12] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = 0x0u;
    c->r[12] = c->r[3] + 0x4u;
L_6d9de8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[12] + (c->r[4] << 3); uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = f_adds(c, c->r[14], c->r[0]); }
    if (COND_EQ) { goto L_6d9e04; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_6d9e1c; }
L_6d9e04:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[0], (c->r[4] >> 9));
    if (COND_NE) { goto L_6d9e1c; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_CC) { goto L_6d9de8; }
L_6d9e1c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6d9e20(Cpu *restrict c) {
    FN_ENTER(0x6d9e20u);
L_6d9e20:;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[1] + c->r[0]; }
    return;
}
void f_6d9e40(Cpu *restrict c) {
    FN_ENTER(0x6d9e40u);
L_6d9e40:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], 0x0u); }
    if (COND_EQ) { goto L_6d9e64; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_HI) { c->r[0] = c->r[1] + (c->r[2] << 3); }
    if (COND_HI) { { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_HI) { c->r[0] = c->r[1] + c->r[0]; }
L_6d9e64:;
    return;
}
void f_6d9e68(Cpu *restrict c) {
    FN_ENTER(0x6d9e68u);
L_6d9e68:;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[0] = 0x0u;
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD16(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[3], c->r[2]); }
    if (COND_LS) { goto L_6d9e8c; }
    c->r[2] = c->r[1] + (c->r[2] << 2);
    c->r[2] = f_adds(c, c->r[2], 0x4u);
    if (COND_NE) { { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[1] + c->r[0]; }
L_6d9e8c:;
    return;
}
void f_6d9e90(Cpu *restrict c) {
    FN_ENTER(0x6d9e90u);
L_6d9e90:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6d9e94(Cpu *restrict c) {
    FN_ENTER(0x6d9e94u);
L_6d9e94:;
    c->r[0] = 0x135f788u;
    { uint32_t ea = 0x6d9ea0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6d9ea4(Cpu *restrict c) {
    FN_ENTER(0x6d9ea4u);
L_6d9ea4:;
    c->r[0] = 0x108e17fu;
    c->r[0] = 0x6d9eb0u + c->r[0];
    return;
}
void f_6d9eb4(Cpu *restrict c) {
    FN_ENTER(0x6d9eb4u);
L_6d9eb4:;
    c->r[0] = 0x534du;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x530000u;
    return;
}
void f_6d9ec0(Cpu *restrict c) {
    FN_ENTER(0x6d9ec0u);
L_6d9ec0:;
    c->r[0] = 0x1015u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x20130000u;
    return;
}
void f_6d9ecc(Cpu *restrict c) {
    FN_ENTER(0x6d9eccu);
L_6d9ecc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0x135ec84u;
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x135f728u;
    { uint32_t ea = 0x6d9ef8u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x108e117u;
    { uint32_t ea = 0x6d9f00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6d9f04u + c->r[1];
    c->r[14] = 0x6d9f04u; f_9aedcc(c);
    c->r[1] = 0x1364950u;
    { uint32_t ea = 0x6d9f10u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d9f2c(Cpu *restrict c) {
    FN_ENTER(0x6d9f2cu);
L_6d9f2c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1364928u;
    { uint32_t ea = 0x6d9f3cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6d9f40u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x70u;
    c->pc = c->r[4]; c->r[14] = 0x6d9f58u; rt_dispatch(c);
    c->r[14] = 0x6d9f5cu; f_a870b8(c);
    c->r[1] = 0x13648fcu;
    c->r[2] = 0x12u;
    { uint32_t ea = 0x6d9f6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6d9f90(Cpu *restrict c) {
    FN_ENTER(0x6d9f90u);
L_6d9f90:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13648c4u;
    { uint32_t ea = 0x6d9fa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6d9ff4; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6d9fe0; }
    c->r[2] = 0x2cu;
    c->r[7] = c->r[0] - 0x2cu;
    { uint32_t r = c->r[1] * c->r[2]; c->r[6] = r; }
L_6d9fd0:;
    c->r[0] = c->r[7] + c->r[6];
    c->r[14] = 0x6d9fd8u; f_6d6b0c(c);
    c->r[6] = f_subs(c, c->r[6], 0x2cu);
    if (COND_NE) { goto L_6d9fd0; }
L_6d9fe0:;
    c->r[0] = c->r[5];
    c->r[14] = 0x6d9fe8u; f_6d6a94(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6d9ff4:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    __attribute__((musttail)) return f_a87100(c);
}
void f_6da004(Cpu *restrict c) {
    FN_ENTER(0x6da004u);
L_6da004:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1364850u;
    { uint32_t ea = 0x6da018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6da068; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6da054; }
    c->r[2] = 0x2cu;
    c->r[7] = c->r[0] - 0x2cu;
    { uint32_t r = c->r[1] * c->r[2]; c->r[6] = r; }
L_6da044:;
    c->r[0] = c->r[7] + c->r[6];
    c->r[14] = 0x6da04cu; f_6d6b0c(c);
    c->r[6] = f_subs(c, c->r[6], 0x2cu);
    if (COND_NE) { goto L_6da044; }
L_6da054:;
    c->r[0] = c->r[5];
    c->r[14] = 0x6da05cu; f_6d6a94(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6da068:;
    c->r[0] = c->r[4];
    c->r[14] = 0x6da070u; f_a87100(c);
    c->r[0] = 0x13647e8u;
    { uint32_t ea = 0x6da07cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6da07cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->r[14] = LD32(ea + 20u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6da098(Cpu *restrict c) {
    FN_ENTER(0x6da098u);
L_6da098:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x328u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[0];
    c->r[2] = 0x80000u;
    c->r[3] = 0x1000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x6da0b8u; f_a2772c(c);
    c->v.s[0] = LD32(c->r[4] + 104u);
    c->r[14] = 0x6da0c0u; f_a27bbc(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x6da0ccu; f_a27998(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6da104; }
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = 0x0u;
    c->r[6] = c->r[13];
L_6da0e4:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x6da0f0u; f_6d71dc(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[5] = c->r[5] + 0x2cu;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_6da0e4; }
L_6da104:;
    c->r[0] = c->r[13];
    c->r[14] = 0x6da10cu; f_a277c4(c);
    c->r[0] = 0x1u;
    c->r[13] = c->r[13] + 0x328u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_6da118(Cpu *restrict c) {
    FN_ENTER(0x6da118u);
L_6da118:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[0] = c->r[13];
    c->r[2] = 0x80000u;
    c->r[14] = 0x6da130u; f_a260d4(c);
    c->r[14] = 0x6da134u; f_a269f4(c);
    c->v.s[2] = 0x41000000u;
    c->r[8] = 0x0u;
    ST32(c->r[4] + 104u, c->v.s[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_6da160; }
L_6da14c:;
    c->r[0] = c->r[13];
    c->r[14] = 0x6da154u; f_a26130(c);
    c->r[0] = c->r[8];
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_6da160:;
    { uint32_t ea = c->r[4] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6da1ac; }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[0] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_6da198; }
    c->r[2] = 0x2cu;
    c->r[7] = c->r[0] - 0x2cu;
    { uint32_t r = c->r[1] * c->r[2]; c->r[6] = r; }
L_6da188:;
    c->r[0] = c->r[7] + c->r[6];
    c->r[14] = 0x6da190u; f_6d6b0c(c);
    c->r[6] = f_subs(c, c->r[6], 0x2cu);
    if (COND_NE) { goto L_6da188; }
L_6da198:;
    c->r[0] = c->r[5];
    c->r[14] = 0x6da1a0u; f_6d6a94(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_6da1ac:;
    c->r[0] = c->r[13];
    c->r[14] = 0x6da1b4u; f_a263f8(c);
    c->r[5] = c->r[0];
    c->r[7] = 0x2cu;
    { uint64_t r = (uint64_t)c->r[5] * c->r[7]; c->r[1] = (uint32_t)r; c->r[2] = (uint32_t)(r >> 32); }
    c->r[0] = c->r[1] + 0x8u;
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[1] = 0x10u;
    if (COND_CC) { c->r[0] = ~0x0u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[0] = ~0x0u; }
    c->r[14] = 0x6da1e4u; f_6d6a58(c);
    c->r[6] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_6da250; }
    { uint32_t r = c->r[5] * c->r[7]; c->r[7] = r; }
    c->r[0] = c->r[6];
L_6da200:;
    c->r[14] = 0x6da204u; f_6d6ac0(c);
    c->r[7] = f_subs(c, c->r[7], 0x2cu);
    c->r[0] = c->r[0] + 0x2cu;
    if (COND_NE) { goto L_6da200; }
    c->r[8] = 0x1u;
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_6da14c; }
    c->r[7] = 0x0u;
    c->r[5] = c->r[13];
L_6da22c:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x6da238u; f_6d703c(c);
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + 0x2cu;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_6da22c; }
    goto L_6da14c;
L_6da250:;
    { uint32_t ea = c->r[4] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[5]); }
    c->r[8] = 0x1u;
    goto L_6da14c;
}
void f_6da260(Cpu *restrict c) {
    FN_ENTER(0x6da260u);
L_6da260:;
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
    c->r[14] = 0x6da298u; f_9bb638(c);
    c->r[1] = 0x1077894u;
    c->r[2] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0x6da2acu + c->r[1];
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
void f_6da300(Cpu *restrict c) {
    FN_ENTER(0x6da300u);
L_6da300:;
    c->r[2] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LS) { return; }
    { uint32_t ea = c->r[2] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2cu;
    { uint32_t r = c->r[1] * c->r[2] + c->r[0]; c->r[0] = r; }
    return;
}
void f_6da324(Cpu *restrict c) {
    FN_ENTER(0x6da324u);
L_6da324:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6da328(Cpu *restrict c) {
    FN_ENTER(0x6da328u);
L_6da328:;
    c->r[0] = 0x1364530u;
    { uint32_t ea = 0x6da334u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6da338(Cpu *restrict c) {
    FN_ENTER(0x6da338u);
L_6da338:;
    c->r[0] = 0x108dcf8u;
    c->r[0] = 0x6da344u + c->r[0];
    return;
}
void f_6da348(Cpu *restrict c) {
    FN_ENTER(0x6da348u);
L_6da348:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x0u;
    c->r[1] = 0x135e808u;
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13644e8u;
    { uint32_t ea = 0x6da374u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x108dcb3u;
    { uint32_t ea = 0x6da37cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6da380u + c->r[1];
    c->r[14] = 0x6da380u; f_9aedcc(c);
    c->r[1] = 0x13644e0u;
    { uint32_t ea = 0x6da38cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6da3a8(Cpu *restrict c) {
    FN_ENTER(0x6da3a8u);
L_6da3a8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x13644b8u;
    { uint32_t ea = 0x6da3b8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6da3bcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x2874u;
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[5] + 0xcu;
    c->pc = c->r[4]; c->r[14] = 0x6da3dcu; rt_dispatch(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = c->r[0];
    c->r[6] = 0x0u;
    c->r[14] = 0x6da3f4u; f_de95c4(c);
    c->r[0] = 0x136446cu;
    c->r[1] = c->r[4];
    c->r[2] = 0x1u;
    { uint32_t ea = 0x6da408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + c->r[5]; }
    c->r[0] = 0x13628fcu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = 0x6da41cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x108dc25u;
    c->r[1] = 0x6da428u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6da42cu; f_df7790(c);
    c->r[0] = 0x108dc2eu;
    c->r[2] = 0x2u;
    c->r[1] = 0x6da43cu + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6da440u; f_df7790(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6da45c(Cpu *restrict c) {
    FN_ENTER(0x6da45cu);
L_6da45c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x13643fcu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x6da474u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x6da478u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6da498(Cpu *restrict c) {
    FN_ENTER(0x6da498u);
L_6da498:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6da4a4u; f_de95c4(c);
    c->r[0] = 0x13643b8u;
    c->r[1] = 0x2874u;
    c->r[2] = c->r[4];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = 0x6da4bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); c->r[2] = c->r[2] + c->r[1]; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1362840u;
    c->r[2] = 0x1u;
    { uint32_t ea = 0x6da4d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    c->r[0] = 0x108db69u;
    c->r[1] = 0x6da4e4u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6da4e8u; f_df7790(c);
    c->r[0] = 0x108db72u;
    c->r[2] = 0x2u;
    c->r[1] = 0x6da4f8u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x6da4fcu; f_df7790(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6da514(Cpu *restrict c) {
    FN_ENTER(0x6da514u);
L_6da514:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1364348u;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x6da52cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2874u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6da550; }
    c->r[14] = 0x6da548u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6da550:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_deadfc(c);
}
void f_6da560(Cpu *restrict c) {
    FN_ENTER(0x6da560u);
L_6da560:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x13642fcu;
    c->r[5] = c->r[4];
    { uint32_t ea = 0x6da578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2874u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6da59c; }
    c->r[14] = 0x6da594u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6da59c:;
    c->r[0] = c->r[4];
    c->r[14] = 0x6da5a4u; f_deadfc(c);
    c->r[0] = 0x13642c0u;
    { uint32_t ea = 0x6da5b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6da5b0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6da5cc(Cpu *restrict c) {
    FN_ENTER(0x6da5ccu);
L_6da5cc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[9] = c->r[0];
    c->r[8] = 0x0u;
    c->r[11] = c->r[13] + 0x10u;
    c->r[10] = c->r[1];
    c->r[0] = c->r[9] + 0x74u;
    c->r[1] = c->r[9];
    c->r[0] = c->r[0] + 0x32800u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0x108da85u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0x6da604u + c->r[0];
    c->r[0] = 0x1083401u;
    c->r[3] = 0x6da60cu + c->r[0];
    c->r[0] = c->r[11];
    c->r[14] = 0x6da610u; f_9af630(c);
    c->r[0] = c->r[10];
    c->r[14] = 0x6da618u; f_9bb638(c);
    { uint32_t ea = c->r[11]; c->r[11] = c->r[11] + 24u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[1] = c->r[1] + 24u; }
    { uint32_t ea = c->r[11]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[10];
    c->r[14] = 0x6da658u; f_debcc4(c);
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_6da668(Cpu *restrict c) {
    FN_ENTER(0x6da668u);
L_6da668:;
    __attribute__((musttail)) return f_def9f4(c);
}
void f_6da66c(Cpu *restrict c) {
    FN_ENTER(0x6da66cu);
L_6da66c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x2874u;
    c->r[4] = c->r[1];
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6da698; }
    c->r[14] = 0x6da690u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6da698:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a87648(c);
}
void f_6da6b0(Cpu *restrict c) {
    FN_ENTER(0x6da6b0u);
L_6da6b0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[6] = 0x1874u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_6da7a8; }
    c->r[0] = c->r[0] + 0x3840u;
    c->r[4] = 0x0u;
    c->r[14] = 0x0u;
    c->r[12] = 0x0u;
    c->r[0] = c->r[0] + 0x28000u;
L_6da6e0:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_6da6fc; }
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_NE) { goto L_6da708; }
    goto L_6da76c;
L_6da6fc:;
    c->r[6] = c->r[6] | 0x4u;
    (void)f_subs(c, c->r[6], 0x5u);
    if (COND_NE) { goto L_6da76c; }
L_6da708:;
    c->r[9] = c->r[0] + 0xcu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[9]; c->r[6] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[6] = 0x0u;
    if (COND_EQ) { c->r[6] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { c->r[5] = 0x1u; }
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[5] = c->r[5] | c->r[6];
    c->r[6] = c->r[5] + 0x1u;
    if (COND_EQ) { c->r[5] = c->r[6]; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { c->r[5] = c->r[6]; }
    (void)f_subs(c, c->r[9], c->r[3]);
    c->r[6] = c->r[5] + 0x1u;
    if (COND_EQ) { c->r[5] = c->r[6]; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_EQ) { c->r[5] = c->r[6]; }
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_NE) { goto L_6da76c; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[14], c->r[5]);
    if (COND_CC) { c->r[12] = c->r[0]; }
    if (COND_CC) { c->r[14] = c->r[5]; }
L_6da76c:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[0] = c->r[0] + 0xab0u;
    (void)f_subs(c, c->r[4], c->r[8]);
    if (COND_CC) { goto L_6da6e0; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_6da7a8; }
    c->r[5] = c->r[13] + 0x4u;
    c->r[1] = c->r[12];
    c->r[0] = c->r[5];
    c->r[14] = 0x6da794u; f_df82f0(c);
    c->r[14] = 0x6da798u; f_df8408(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x6da7a4u; f_de56e0(c);
    goto L_6da7ac;
L_6da7a8:;
    c->r[4] = 0x0u;
L_6da7ac:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6da7b8(Cpu *restrict c) {
    FN_ENTER(0x6da7b8u);
L_6da7b8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_LS) { goto L_6da7d8; }
    c->v.s[2] = 0x0u;
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_6da7d8:;
    c->r[0] = c->r[3] + (c->r[3] << 3);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[5] + (c->r[0] << 4);
    c->r[1] = c->r[0] + 0x284u;
    c->r[1] = c->r[1] + 0x31800u;
    c->v.s[6] = LD32(c->r[1]);
    c->r[1] = c->r[0] + 0x288u;
    c->r[0] = c->r[0] + 0x1a80u;
    c->r[0] = c->r[0] + 0x30000u;
    c->r[1] = c->r[1] + 0x31800u;
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[10] = LD32(c->r[1]);
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.f[0] = c->v.f[0] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_6da840; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0x6da840u; f_15efddc(c);
L_6da840:;
    (void)f_adds(c, c->r[4], 0x1u);
    c->v.s[2] = 0x3f800000u;
    if (COND_NE) { c->r[0] = 0x2874u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u; }
    if (COND_NE) { { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6da868; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_d61a54(c);
L_6da868:;
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6da874(Cpu *restrict c) {
    FN_ENTER(0x6da874u);
L_6da874:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x1362338u;
    c->r[4] = c->r[2];
    { uint32_t ea = 0x6da888u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_6da8d0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x6da8a8u; rt_dispatch(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0x6da8c0u; f_a70780(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a71c3c(c);
L_6da8d0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_6da8d8(Cpu *restrict c) {
    FN_ENTER(0x6da8d8u);
L_6da8d8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_6da8dc(Cpu *restrict c) {
    FN_ENTER(0x6da8dcu);
L_6da8dc:;
    c->r[0] = 0x1363f88u;
    { uint32_t ea = 0x6da8e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_6da8ec(Cpu *restrict c) {
    FN_ENTER(0x6da8ecu);
L_6da8ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x13bc608u;
    c->r[1] = 0x3f800000u;
    c->r[3] = 0x2880u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = 0x6da90cu + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x1363f50u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1363f40u;
    { uint32_t ea = 0x6da928u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x108d70du;
    { uint32_t ea = 0x6da930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6da934u + c->r[1];
    c->r[14] = 0x6da934u; f_9aedcc(c);
    c->r[1] = 0x1363f3cu;
    { uint32_t ea = 0x6da940u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_6da960(Cpu *restrict c) {
    FN_ENTER(0x6da960u);
L_6da960:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1363f10u;
    { uint32_t ea = 0x6da970u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x6da974u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1c40u;
    c->pc = c->r[4]; c->r[14] = 0x6da98cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_6da9d4(c);
}
void f_6da998(Cpu *restrict c) {
    FN_ENTER(0x6da998u);
L_6da998:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1363ed0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x6da9b0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x6da9b4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_6da9d4(Cpu *restrict c) {
    FN_ENTER(0x6da9d4u);
L_6da9d4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[4] = c->r[0];
    c->r[14] = 0x6da9e0u; f_a87810(c);
    c->r[0] = 0x1363e98u;
    { uint32_t ea = 0x6da9ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xdf0u;
    c->r[14] = 0x6da9f8u; f_6d3d34(c);
    c->r[0] = 0x1a3cu;
    c->r[5] = 0x0u;
    c->r[7] = c->r[4];
    c->r[6] = c->r[4];
    c->r[10] = c->r[4];
    c->r[8] = 0x2u;
    c->r[1] = 0x6au;
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[5]); c->r[7] = ea; }
    c->r[0] = 0x1a5cu;
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[5]); c->r[6] = ea; }
    c->r[0] = 0x1a7cu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[5]); c->r[10] = ea; }
    c->r[0] = c->r[4] + 0x28u;
    { uint32_t ea = c->r[4] + 0x19u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x26u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x27u; ST8(ea, c->r[8]); }
    c->r[14] = 0x6daa48u; f_15efd7c(c);
    c->r[0] = c->r[4] + 0x94u;
    c->r[1] = 0x2cu;
    c->r[14] = 0x6daa54u; f_15efd7c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6daa5cu; f_6ed4bc(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6daa64u; f_6ed53c(c);
    c->r[0] = 0x1860u;
    { uint32_t ea = c->r[4] + 0xdecu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xdedu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0xd6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe8u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xe4u; ST32(ea, c->r[5]); }
    c->r[14] = 0x6daaacu; f_6e9b20(c);
    c->r[0] = 0x1a04u;
    c->r[9] = ~0x0u;
    c->r[2] = 0x1a30u;
    c->r[3] = 0x1a34u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a08u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a0cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a10u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x1a14u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = 0x1a18u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a1cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1a20u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x135e048u;
    { uint32_t ea = 0x6dab04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x1a38u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x1a40u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[5]); }
    c->r[3] = 0x1a41u;
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[5]); }
    c->r[3] = 0x1a44u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[5]); }
    c->r[3] = 0x1a50u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[1]); }
    c->r[3] = 0x1a54u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[2]); }
    c->r[3] = 0x1a58u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[0]); }
    c->r[3] = 0x1a60u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[5]); }
    c->r[3] = 0x1a70u;
    { uint32_t ea = c->r[4] + c->r[3]; ST32(ea, c->r[1]); }
    c->r[1] = 0x1a74u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x1a78u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1b50u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a94u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x1a90u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a8cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a88u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a84u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1a80u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[10]; ST32(ea, c->r[5]); }
    c->r[14] = 0x6dabb8u; f_6e1764(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6dabc0u; f_6e188c(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6dabc8u; f_6e65c0(c);
    c->r[0] = 0x1b56u;
    c->r[6] = 0xffu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1b88u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1b54u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x1b92u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1b90u;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = 0x1b8cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1b94u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1b93u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[9]); c->r[1] = ea; }
    c->r[0] = 0x1b98u;
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1b9cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1ba2u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1ba1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1b9eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1ba3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1b9du;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[5]); c->r[1] = ea; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[5]); }
    c->r[14] = 0x6dac64u; f_6e8418(c);
    c->r[0] = 0x1ba4u;
    c->r[1] = 0xau;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[6]); }
    c->r[0] = 0x1c04u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1c08u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1c0bu;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c0cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[0] = 0x1c0du;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[8]); }
    c->r[0] = 0x1c0eu;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[2]); }
    c->r[0] = 0x1c09u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c0au;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c18u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1c1cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0x1c14u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c13u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c10u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c15u;
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[5]); }
    c->r[0] = 0x1c0fu;
    { uint32_t ea = c->r[2] + c->r[0]; ST8(ea, c->r[5]); c->r[2] = ea; }
    c->r[0] = 0x1c20u;
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + c->r[0]; ST8(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x1c24u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0800000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x1c28u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc0e00000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    c->r[0] = 0x1c2cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1500000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x999au;
    c->r[0] = 0x1c30u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3f190000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x999au;
    c->r[0] = 0x1c34u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x3e990000u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_6dad64(Cpu *restrict c) {
    FN_ENTER(0x6dad64u);
L_6dad64:;
    { uint32_t ea = c->r[0] + 0x94u; ST32(ea, c->r[1]); }
    return;
}
void f_6dad6c(Cpu *restrict c) {
    FN_ENTER(0x6dad6cu);
L_6dad6c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1363b04u;
    { uint32_t ea = 0x6dad80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6dad8cu; f_6dd47c(c);
    c->r[0] = 0x1c1cu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6dadac; }
    c->r[14] = 0x6dada4u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6dadac:;
    c->r[0] = c->r[4] + 0xdf0u;
    c->r[14] = 0x6dadb4u; f_6d3e18(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a8784c(c);
}
void f_6dadc4(Cpu *restrict c) {
    FN_ENTER(0x6dadc4u);
L_6dadc4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1363aacu;
    { uint32_t ea = 0x6dadd8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x6dade4u; f_6dd47c(c);
    c->r[0] = 0x1c1cu;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_6dae04; }
    c->r[14] = 0x6dadfcu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_6dae04:;
    c->r[0] = c->r[4] + 0xdf0u;
    c->r[14] = 0x6dae0cu; f_6d3e18(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x6dae14u; f_a8784c(c);
    c->r[0] = 0x1363a60u;
    { uint32_t ea = 0x6dae20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x6dae20u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
