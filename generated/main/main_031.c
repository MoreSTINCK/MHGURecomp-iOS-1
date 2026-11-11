#include "cpu.h"
#include "neon_rt.h"
void f_23ca94(Cpu *c);
void f_3a50f4(Cpu *c);
void f_3a7c14(Cpu *c);
void f_3cd2a8(Cpu *c);
void f_3cd470(Cpu *c);
void f_3e1c04(Cpu *c);
void f_3e2838(Cpu *c);
void f_3e2f64(Cpu *c);
void f_3e5784(Cpu *c);
void f_3e6880(Cpu *c);
void f_3e7644(Cpu *c);
void f_3e76e4(Cpu *c);
void f_3e77b4(Cpu *c);
void f_41f0b0(Cpu *c);
void f_41f230(Cpu *c);
void f_425dc4(Cpu *c);
void f_427ae4(Cpu *c);
void f_427b10(Cpu *c);
void f_427b3c(Cpu *c);
void f_428020(Cpu *c);
void f_42c684(Cpu *c);
void f_42ca74(Cpu *c);
void f_42cec0(Cpu *c);
void f_42d35c(Cpu *c);
void f_42d620(Cpu *c);
void f_42d8f4(Cpu *c);
void f_42ef98(Cpu *c);
void f_42f0b8(Cpu *c);
void f_43046c(Cpu *c);
void f_4306c4(Cpu *c);
void f_431460(Cpu *c);
void f_476140(Cpu *c);
void f_47617c(Cpu *c);
void f_4772c4(Cpu *c);
void f_483060(Cpu *c);
void f_48eb08(Cpu *c);
void f_5dd710(Cpu *c);
void f_5df2a8(Cpu *c);
void f_5df378(Cpu *c);
void f_5f8678(Cpu *c);
void f_7543d4(Cpu *c);
void f_75bac0(Cpu *c);
void f_75bc4c(Cpu *c);
void f_75feb4(Cpu *c);
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af37c(Cpu *c);
void f_9af3a0(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af3e4(Cpu *c);
void f_9af55c(Cpu *c);
void f_9b1b24(Cpu *c);
void f_9b1b98(Cpu *c);
void f_9b1c0c(Cpu *c);
void f_9b1c84(Cpu *c);
void f_9b1cfc(Cpu *c);
void f_9b1d70(Cpu *c);
void f_9b1de4(Cpu *c);
void f_9b1e70(Cpu *c);
void f_9b1ee8(Cpu *c);
void f_9b1f5c(Cpu *c);
void f_9b1fd4(Cpu *c);
void f_9b204c(Cpu *c);
void f_9b20c4(Cpu *c);
void f_9b2138(Cpu *c);
void f_9b21ac(Cpu *c);
void f_9b2238(Cpu *c);
void f_9b22b0(Cpu *c);
void f_9b2328(Cpu *c);
void f_9b26ac(Cpu *c);
void f_9bb3ec(Cpu *c);
void f_9bb7b8(Cpu *c);
void f_9bb9e4(Cpu *c);
void f_9bba24(Cpu *c);
void f_9c9198(Cpu *c);
void f_9ca404(Cpu *c);
void f_9ca420(Cpu *c);
void f_a0c640(Cpu *c);
void f_a0c684(Cpu *c);
void f_a0c93c(Cpu *c);
void f_a0c958(Cpu *c);
void f_a0ca9c(Cpu *c);
void f_a0d150(Cpu *c);
void f_a0dbbc(Cpu *c);
void f_a38750(Cpu *c);
void f_a389e0(Cpu *c);
void f_bfba6c(Cpu *c);
void f_bfbf4c(Cpu *c);
void f_bfc268(Cpu *c);
void f_d21388(Cpu *c);
void f_d213cc(Cpu *c);
void f_d21530(Cpu *c);
void f_d215b4(Cpu *c);
void f_d21638(Cpu *c);
void f_d216c0(Cpu *c);
void f_d219cc(Cpu *c);
void f_d21a04(Cpu *c);
void f_d21a1c(Cpu *c);
void f_d21a64(Cpu *c);
void f_d21aac(Cpu *c);
void f_d21af8(Cpu *c);
void f_d252ac(Cpu *c);
void f_d2bf40(Cpu *c);
void f_d2d978(Cpu *c);
void f_da7d50(Cpu *c);
void f_da7d68(Cpu *c);
void f_da84f0(Cpu *c);
void f_15efda0(Cpu *c);
void f_15efdac(Cpu *c);
void f_15efdb8(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15efe30(Cpu *c);
void f_15eff14(Cpu *c);
void f_15eff38(Cpu *c);
void f_15eff5c(Cpu *c);
void f_15eff68(Cpu *c);
void f_15f004c(Cpu *c);
void f_3e1c04(Cpu *restrict c) {
    FN_ENTER(0x3e1c04u);
L_3e1c04:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[8] = c->r[0];
    c->r[0] = 0xa2f8u;
    c->r[1] = 0xa160u;
    c->r[0] = c->r[8] + c->r[0];
    c->r[14] = 0x3e1c20u; f_15efdac(c);
    c->r[0] = 0x1657798u;
    { uint32_t ea = 0x3e1c2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1c30u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e217c; }
    c->r[0] = 0x1657780u;
    { uint32_t ea = 0x3e1c44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1c48u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e217c; }
    c->r[0] = c->r[8] + 0xb8u;
    c->r[4] = c->r[8] + 0xc3u;
    c->r[10] = 0x1u;
    c->r[7] = 0x2828u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1657738u;
    { uint32_t ea = 0x3e1c8cu + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = 0x1657730u;
    { uint32_t ea = 0x3e1c94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1657720u;
    { uint32_t ea = 0x3e1ca4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1657714u;
    { uint32_t ea = 0x3e1cb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1657708u;
    { uint32_t ea = 0x3e1cbcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x16576fcu;
    { uint32_t ea = 0x3e1cc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x16576f0u;
    { uint32_t ea = 0x3e1cd4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16576e4u;
    { uint32_t ea = 0x3e1ce0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16576d8u;
    { uint32_t ea = 0x3e1cecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_3e213c;
L_3e1d00:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x2828u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1d10u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e1f00; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1d24u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e1f00; }
    { uint32_t r = c->r[6] * c->r[7] + c->r[8]; c->r[10] = r; }
    { uint32_t ea = c->r[10] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e1f00; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    c->r[7] = 0x0u;
    c->r[0] = sh_lsl(c->r[0], c->r[6]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2858u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[8]; c->r[8] = r; }
    { uint32_t ea = c->r[10] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xa2f8u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xa304u;
    c->r[1] = 0xa309u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0xa300u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD8(ea); c->r[0] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[10] + 0xd1u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; ST8(ea, c->r[3]); }
    c->r[1] = c->r[12] | (c->r[3] << 8);
    c->r[3] = c->r[2] | (c->r[0] << 8);
    c->r[1] = c->r[1] | (c->r[3] << 16);
    c->r[3] = 0xa308u;
    c->r[3] = c->r[8] + c->r[3];
    { uint32_t ea = c->r[3]; ST8(ea, c->r[1]); c->r[3] = c->r[3] + 0x2u; }
    c->r[1] = 0x2808u;
    { uint32_t ea = c->r[3] + 0x1u; ST8(ea, c->r[0]); }
    c->r[0] = 0xa30cu;
    { uint32_t ea = c->r[3]; ST8(ea, c->r[2]); }
    c->r[9] = c->r[8] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x3e1dd4u; f_15efdac(c);
    { uint32_t ea = c->r[10] + 0xd4u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xd6u;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e1de4u; f_15efe30(c);
    { uint32_t ea = c->r[10] + 0xc0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    c->r[1] = 0xcb14u;
    c->r[11] = c->r[8];
    c->r[9] = c->r[10] + 0xc2u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xcb18u;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] + c->r[0]; ST32(ea, c->r[1]); c->r[11] = ea; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[11] + 0x4u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[11] + 0xcu; ST16(ea, c->r[0]); }
    c->r[0] = c->r[10] + c->r[6];
    c->r[10] = c->r[10] + 0xc1u;
    { uint32_t ea = c->r[0] + 0xc3u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0xeu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] | c->r[0];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_3e1e40:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1e4cu; f_da84f0(c);
    c->r[1] = c->r[7];
    c->r[14] = 0x3e1e54u; f_d252ac(c);
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_3e1ed8; }
    { uint32_t r = c->r[0] ^ 0x1u; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_NE) { goto L_3e1ed8; }
    { uint32_t ea = c->r[10]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[0] & shc_lsl(c, c->r[1], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e1ed8; }
    c->r[0] = sh_lsl(c->r[1], c->r[7]);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0x0u;
    c->r[3] = 0xcb24u;
    c->r[2] = c->r[1] + 0x1u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[11]; ST32(ea, c->r[2]); }
    c->r[2] = 0xcb1cu;
    c->r[1] = c->r[8] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[12]); }
    c->r[2] = 0xcb20u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & c->r[0]; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[2]); }
    c->r[2] = 0xcb25u;
    c->r[3] = 0xcb26u;
    { uint32_t ea = c->r[1] + c->r[2]; ST8(ea, c->r[12]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_3e1ed8:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_GT) { goto L_3e1ef4; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_LT) { goto L_3e1e40; }
L_3e1ef4:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[11] = v; }
    goto L_3e2120;
L_3e1f00:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1f0cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2130; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e1f20u; f_da84f0(c);
    c->r[5] = 0x41ccu;
    c->r[10] = 0x1u;
    c->r[7] = 0x2828u;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[8] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e216c; }
    { uint32_t r = c->r[6] * c->r[7] + c->r[8]; c->r[5] = r; }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3e2168; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2858u;
    { uint32_t r = c->r[1] * c->r[0] + c->r[8]; c->r[9] = r; }
    { uint32_t ea = c->r[5] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[1];
    c->r[1] = 0xa2f8u;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[2] + c->r[1]; ST32(ea, c->r[0]); c->r[2] = ea; }
    c->r[0] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[14] = 0x3e1f80u; f_9c9198(c);
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xa309u;
    c->r[0] = f_subs(c, c->r[2], c->r[0]);
    c->r[2] = 0xa300u;
    { uint32_t ea = c->r[9] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[1] - 1u + c->cf;
    c->r[1] = 0xa304u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xd0u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + c->r[7]; ST8(ea, c->r[1]); }
    c->r[0] = c->r[0] | (c->r[1] << 8);
    c->r[1] = c->r[2] | (c->r[3] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0xa308u;
    c->r[1] = c->r[9] + c->r[1];
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    c->r[0] = 0xa30cu;
    c->r[7] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x2808u;
    c->r[0] = c->r[7];
    c->r[14] = 0x3e1ff0u; f_15efdac(c);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[5] + 0x6u;
    c->r[0] = c->r[7];
    c->r[14] = 0x3e2000u; f_15efe30(c);
    c->r[7] = 0x0u;
    c->r[0] = 0xcb14u;
    c->r[10] = c->r[9];
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[9] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0xcb18u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); c->r[10] = ea; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[8] = v; }
L_3e2024:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2030u; f_da84f0(c);
    c->r[1] = c->r[7];
    c->r[14] = 0x3e2038u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e2100; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_3e2100; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    c->r[5] = c->r[9] + (c->r[0] << 2);
    c->r[0] = 0xcb1cu;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[11]); }
    c->r[0] = 0xcb20u;
    { uint32_t ea = c->r[5] + c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0xcb24u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2090u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e20d4; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e20a4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e20d4; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { c->r[11] = 0x1u; }
L_3e20d4:;
    c->r[0] = 0xcb25u;
    c->r[1] = 0xcb26u;
    { uint32_t ea = c->r[5] + c->r[0]; ST8(ea, c->r[11]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + c->r[1]; ST8(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[11] = v; }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[0] = c->r[0] | sh_lsl(c->r[1], c->r[7]);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
L_3e2100:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    if (COND_LE) { c->r[0] = 0x2828u; }
    if (COND_LE) { c->r[8] = c->r[8] + c->r[0]; }
    if (COND_LE) { { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_LE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_LT) { goto L_3e2024; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
L_3e2120:;
    c->r[5] = 0x41ccu;
    c->r[10] = 0x1u;
    c->r[7] = 0x2828u;
    goto L_3e216c;
L_3e2130:;
    c->r[10] = 0x1u;
    c->r[7] = 0x2828u;
    goto L_3e2168;
L_3e213c:;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2144u; f_da84f0(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x3e214cu; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e216c; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x41ccu;
    c->r[5] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[10], c->r[6]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e1d00; }
L_3e2168:;
    c->r[5] = 0x41ccu;
L_3e216c:;
    c->r[6] = c->r[6] + 0x1u;
    c->r[4] = c->r[4] + c->r[7];
    (void)f_subs(c, c->r[6], 0x4u);
    if (COND_NE) { goto L_3e213c; }
L_3e217c:;
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e21b0(Cpu *restrict c) {
    FN_ENTER(0x3e21b0u);
L_3e21b0:;
    return;
}
void f_3e21b4(Cpu *restrict c) {
    FN_ENTER(0x3e21b4u);
L_3e21b4:;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_3e21c4(Cpu *restrict c) {
    FN_ENTER(0x3e21c4u);
L_3e21c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16571ecu;
    { uint32_t ea = 0x3e21d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e21dcu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2214; }
    c->r[0] = 0x16571d4u;
    { uint32_t ea = 0x3e21f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e21f4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xau;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_3e22dc; }
L_3e2214:;
    c->r[0] = 0x16571a4u;
    { uint32_t ea = 0x3e2220u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2224u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[0] = 0x1657174u;
    { uint32_t ea = 0x3e2250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2254u; f_da84f0(c);
    c->r[1] = 0x0u;
    c->r[14] = 0x3e225cu; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[0]); } }
    c->r[0] = 0x1657150u;
    { uint32_t ea = 0x3e2274u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2278u; f_da84f0(c);
    c->r[1] = 0x1u;
    c->r[5] = 0x1u;
    c->r[14] = 0x3e2284u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x165712cu;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[5]); } }
    { uint32_t ea = 0x3e2298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e229cu; f_da84f0(c);
    c->r[1] = 0x2u;
    c->r[14] = 0x3e22a4u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[0]); } }
    c->r[0] = 0x1657108u;
    { uint32_t ea = 0x3e22bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e22c0u; f_da84f0(c);
    c->r[1] = 0x3u;
    c->r[14] = 0x3e22c8u; f_d252ac(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[1]); } }
L_3e22dc:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e22fc(Cpu *restrict c) {
    FN_ENTER(0x3e22fcu);
L_3e22fc:;
    c->r[1] = 0xa2f8u;
    c->r[0] = c->r[0] + c->r[1];
    return;
}
void f_3e2308(Cpu *restrict c) {
    FN_ENTER(0x3e2308u);
L_3e2308:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[9] = c->r[0];
    c->r[0] = 0x165709cu;
    c->r[5] = c->r[3];
    c->r[6] = c->r[1];
    { uint32_t ea = 0x3e2328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e232cu; f_da84f0(c);
    c->r[7] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e280c; }
    c->r[0] = 0x1657080u;
    { uint32_t ea = 0x3e2344u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2348u; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e280c; }
    c->r[0] = 0x1657054u;
    { uint32_t ea = 0x3e2370u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2374u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x3e2380u; f_3e2838(c);
    c->r[7] = 0xbu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_3e280c; }
    c->r[0] = 0x165702cu;
    { uint32_t ea = 0x3e2398u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e239cu; f_da84f0(c);
    c->r[4] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e23acu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e23f4; }
    c->r[0] = 0x1657004u;
    { uint32_t ea = 0x3e23c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e23c4u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[9] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e23f4; }
    c->r[0] = 0x2828u;
    c->r[7] = 0xcu;
    { uint32_t r = c->r[8] * c->r[0] + c->r[9]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e280c; }
L_3e23f4:;
    c->r[0] = 0x1656fc0u;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = 0x3e2404u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2408u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2414u; f_da84f0(c);
    c->r[1] = 0x1658dc4u;
    { uint32_t ea = c->r[0] + c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x4u);
    c->r[4] = 0x1u;
    if (COND_GE) { c->r[6] = 0x4u; }
    { uint32_t ea = 0x3e2430u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x2828u;
    c->r[0] = (c->r[0] & 0x800000ffu) | ((c->r[2] << 8) & 0x7fffff00u);
    { uint32_t r = c->r[7] * c->r[1] + c->r[9]; c->r[11] = r; }
    c->r[1] = c->r[11];
    c->r[7] = c->r[11];
    { uint32_t ea = c->r[1] + 0xbcu; ST32(ea, c->r[0]); c->r[1] = ea; }
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0xb8u; ST32(ea, c->r[4]); c->r[7] = ea; }
    { uint32_t ea = c->r[0] + 0xc0u; ST8(ea, c->r[6]); c->r[0] = ea; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2474u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = sh_lsl(c->r[4], c->r[0]);
    { uint32_t ea = c->r[11] + 0xc1u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e248cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x41ccu;
    c->r[0] = sh_lsl(c->r[4], c->r[0]);
    { uint32_t ea = c->r[11] + 0xc2u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x3e24a8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[7] + c->r[0];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0xbu; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[11] + 0xc8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0xccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[6] = c->r[2] | (c->r[3] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 8);
    c->r[0] = c->r[0] | (c->r[6] << 16);
    c->r[6] = c->r[11] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); c->r[6] = c->r[6] + 0x2u; }
    c->r[0] = 0x2808u;
    { uint32_t ea = c->r[11] + 0xd1u; ST8(ea, c->r[1]); }
    (void)f_subs(c, c->r[10], c->r[0]);
    { uint32_t ea = c->r[6] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[6]; ST8(ea, c->r[2]); }
    if (COND_GE) { c->r[10] = c->r[0]; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[10]);
    { uint32_t ea = c->r[11] + 0xd4u; ST16(ea, c->r[10]); c->r[11] = ea; }
    c->r[1] = c->r[0] - c->r[6];
    c->r[0] = 0x2807u;
    c->r[4] = c->r[11] + 0x2u;
    (void)f_subs(c, c->r[6], c->r[0]);
    c->r[0] = c->r[4] + (uint32_t)(uint16_t)(c->r[10]);
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3e2524u; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0x3e2534u; f_15efe30(c);
    c->r[0] = 0xa2d8u;
    c->r[1] = c->r[9];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; ST8(ea, c->r[7]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x4u; ST8(ea, c->r[7]); c->r[1] = ea; }
    { uint32_t ea = c->r[1] + 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] - 0x1u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] - 0x2u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[1] - 0x3u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa2bcu;
    c->r[6] = c->r[1] - c->r[0];
    c->r[1] = 0x0u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e2594u; f_a389e0(c);
    c->r[0] = c->r[13] + 0x14u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3e25a0u; f_d21388(c);
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[13] + 0x43u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e25f0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e25c4u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e25d8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e25f0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_3e2608;
L_3e25f0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x43u;
    c->pc = c->r[3]; c->r[14] = 0x3e2608u; rt_dispatch(c);
L_3e2608:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x3e2618u; f_d215b4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x43u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e266c; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e263cu; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2650u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e266c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x43u; ST8(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_3e26d0;
L_3e266c:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x43u;
    c->pc = c->r[3]; c->r[14] = 0x3e2684u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x43u; ST8(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e26d0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e26a4u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e26b8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e26d0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_3e2730;
L_3e26d0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x43u;
    c->pc = c->r[3]; c->r[14] = 0x3e26e8u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e2730; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2704u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2718u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x4u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e2730; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_3e2748;
L_3e2730:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[3]; c->r[14] = 0x3e2748u; rt_dispatch(c);
L_3e2748:;
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x3e2754u; f_d21530(c);
    { uint32_t ea = c->r[13] + 0x3du; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD16(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e27a0; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2774u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2788u; rt_dispatch(c);
    c->r[0] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e27a0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3du; ST8(ea, c->r[0]); }
    goto L_3e27b8;
L_3e27a0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4];
    c->pc = c->r[3]; c->r[14] = 0x3e27b8u; rt_dispatch(c);
L_3e27b8:;
    c->r[0] = 0x1656bfcu;
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x3e27c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e27d4u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3e27f8u; f_d2bf40(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x3e2800u; f_3e1c04(c);
    c->r[0] = c->r[13] + 0x14u;
    c->r[14] = 0x3e2808u; f_d213cc(c);
    c->r[7] = 0x0u;
L_3e280c:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e2838(Cpu *restrict c) {
    FN_ENTER(0x3e2838u);
L_3e2838:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0xcu;
    c->r[11] = c->r[0];
    c->r[0] = 0x1656b70u;
    c->r[6] = c->r[1];
    { uint32_t ea = 0x3e2854u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2858u; f_da84f0(c);
    c->r[4] = ~0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e29c0; }
    c->r[0] = 0x1656b54u;
    { uint32_t ea = 0x3e2870u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2874u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e29c0; }
    c->r[0] = 0x1656b28u;
    { uint32_t ea = 0x3e289cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e28a0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e28f0; }
    c->r[0] = 0x1656b10u;
    { uint32_t ea = 0x3e28b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e28b8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e28f0; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[11]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e28f0; }
    c->r[4] = c->r[6];
    goto L_3e29c0;
L_3e28f0:;
    c->r[0] = 0x1u;
    c->r[7] = 0x0u;
    c->r[10] = 0x2828u;
    c->r[8] = 0x41ccu;
    c->r[0] = sh_lsl(c->r[0], c->r[6]);
    c->r[6] = c->r[11] + 0xb8u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1656aacu;
    { uint32_t ea = 0x3e2918u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x1656aa4u;
    { uint32_t ea = 0x3e2920u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x1656a9cu;
    { uint32_t ea = 0x3e2928u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1656a94u;
    { uint32_t ea = 0x3e2930u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
L_3e2930:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2938u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e29ac; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2948u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e29ac; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2968u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e29ac; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e297cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[11] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_3e29ac; }
    { uint32_t ea = c->r[6] + 0x9u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e29cc; }
L_3e29ac:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[6] = c->r[6] + c->r[10];
    (void)f_subs(c, c->r[7], 0x4u);
    if (COND_LT) { goto L_3e2930; }
    c->r[4] = ~0x0u;
L_3e29c0:;
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3e29cc:;
    c->r[4] = c->r[7];
    goto L_3e29c0;
}
void f_3e29f4(Cpu *restrict c) {
    FN_ENTER(0x3e29f4u);
L_3e29f4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16569b8u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e2a0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2a10u; f_da84f0(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2a60; }
    c->r[0] = 0x165699cu;
    { uint32_t ea = 0x3e2a28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2a2cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[5] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e2a60; }
    c->r[0] = 0x2828u;
    c->r[6] = 0x0u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { c->r[6] = 0x1u; }
L_3e2a60:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e2a70(Cpu *restrict c) {
    FN_ENTER(0x3e2a70u);
L_3e2a70:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[0] = 0x165693cu;
    { uint32_t ea = 0x3e2a88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2a8cu; f_da84f0(c);
    c->r[5] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2ea0; }
    c->r[0] = 0x1656920u;
    { uint32_t ea = 0x3e2aa4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2aa8u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e2ea0; }
    c->r[0] = 0x16568f4u;
    { uint32_t ea = 0x3e2ad0u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2ad4u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2ae0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2b2c; }
    c->r[0] = 0x16568d0u;
    { uint32_t ea = 0x3e2af4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2af8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e2b2c; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    c->r[5] = 0x10u;
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e2ea0; }
L_3e2b2c:;
    c->r[0] = 0x165688cu;
    { uint32_t ea = 0x3e2b38u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2b3cu; f_da84f0(c);
    c->r[7] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2b4cu; f_da84f0(c);
    c->r[5] = 0xfu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2ea0; }
    c->r[0] = 0x1656860u;
    { uint32_t ea = 0x3e2b64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2b68u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e2ea0; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e2ea0; }
    c->r[0] = 0x1656824u;
    { uint32_t ea = 0x3e2ba0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2ba4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[5] = c->r[4] + 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[14] = 0x3e2bc0u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[5];
    c->r[14] = 0x3e2bccu; f_d21388(c);
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e2c1c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2bf0u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e2c04u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3e2c1c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); }
    goto L_3e2c34;
L_3e2c1c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x8u;
    c->pc = c->r[3]; c->r[14] = 0x3e2c34u; rt_dispatch(c);
L_3e2c34:;
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x3e2c48u; f_d215b4(c);
    c->r[0] = 0x1656770u;
    { uint32_t ea = 0x3e2c54u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2c58u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e2c6cu; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e2c80; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xcu;
    goto L_3e2c88;
L_3e2c80:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
L_3e2c88:;
    c->r[14] = 0x3e2c8cu; f_d215b4(c);
    c->r[0] = 0x165672cu;
    { uint32_t ea = 0x3e2c98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2c9cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e2cb0u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2cc4; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xcu;
    goto L_3e2ccc;
L_3e2cc4:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
L_3e2ccc:;
    c->r[14] = 0x3e2cd0u; f_d215b4(c);
    c->r[0] = 0x16566e8u;
    { uint32_t ea = 0x3e2cdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2ce0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e2cf4u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2d08; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xcu;
    goto L_3e2d10;
L_3e2d08:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
L_3e2d10:;
    c->r[14] = 0x3e2d14u; f_d215b4(c);
    c->r[0] = 0x16566a4u;
    { uint32_t ea = 0x3e2d20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2d24u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e2d38u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2d4c; }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0xcu;
    goto L_3e2d54;
L_3e2d4c:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = 0x0u;
L_3e2d54:;
    c->r[14] = 0x3e2d58u; f_d215b4(c);
    c->r[0] = 0x165665cu;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x3e2d68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x3e2d74u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3e2d98u; f_d2bf40(c);
    c->r[0] = 0x0u;
    c->r[7] = 0x41ccu;
    c->r[8] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1656610u;
    { uint32_t ea = 0x3e2db4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1656608u;
    { uint32_t ea = 0x3e2dbcu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1656600u;
    { uint32_t ea = 0x3e2dc4u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_3e2dc0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2dc8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e2dd8u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e2e40; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2de8u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2e40; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2df8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e2e40; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e2e30; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3e2e30:;
    c->r[1] = 0xfu;
    c->r[2] = c->r[8];
    c->r[3] = 0x4u;
    c->pc = c->r[5]; c->r[14] = 0x3e2e40u; rt_dispatch(c);
L_3e2e40:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_3e2dc0; }
    c->r[0] = 0x1656564u;
    { uint32_t ea = 0x3e2e60u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2e64u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2828u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[4]; c->r[0] = r; }
    c->r[1] = 0x2816u;
    { uint32_t ea = c->r[0] + 0xc6u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] + 0xc8u;
    c->r[14] = 0x3e2e98u; f_15efdc4(c);
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x3e2ea0u; f_d213cc(c);
L_3e2ea0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3e2eec(Cpu *restrict c) {
    FN_ENTER(0x3e2eecu);
L_3e2eec:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16564c0u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e2f04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2f08u; f_da84f0(c);
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e2f54; }
    c->r[0] = 0x16564a4u;
    { uint32_t ea = 0x3e2f20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2f24u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[5] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e2f54; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[5]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { c->r[6] = 0x0u; }
L_3e2f54:;
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e2f64(Cpu *restrict c) {
    FN_ENTER(0x3e2f64u);
L_3e2f64:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[6] = c->r[0];
    c->r[0] = 0x1656444u;
    c->r[8] = c->r[2];
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e2f80u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2f84u; f_da84f0(c);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e8; }
    c->r[0] = 0x1656428u;
    { uint32_t ea = 0x3e2f9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2fa0u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e32e8; }
    c->r[0] = 0x16563fcu;
    { uint32_t ea = 0x3e2fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2fccu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e30c4; }
    c->r[0] = 0x16563e4u;
    { uint32_t ea = 0x3e2fe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e2fe4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e30c4; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[6]; c->r[5] = r; }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e30c4; }
    c->r[0] = 0x16563a4u;
    { uint32_t ea = 0x3e3020u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3024u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e8; }
    c->r[0] = 0x165638cu;
    { uint32_t ea = 0x3e3038u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e303cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e32e8; }
    c->r[0] = 0x1656360u;
    { uint32_t ea = 0x3e3064u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3068u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e8; }
    c->r[0] = 0x1656348u;
    { uint32_t ea = 0x3e307cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3080u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_3e32e8; }
    c->r[0] = 0x2828u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & sh_lsl(c->r[1], c->r[8]);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e30c4:;
    c->r[0] = 0x16562f4u;
    { uint32_t ea = 0x3e30d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e30d4u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e31d0; }
    c->r[0] = 0x16562dcu;
    { uint32_t ea = 0x3e30e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e30ecu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e31d0; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[6]; c->r[5] = r; }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e31d0; }
    c->r[0] = 0x165629cu;
    { uint32_t ea = 0x3e3128u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e312cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e8; }
    c->r[0] = 0x1656284u;
    { uint32_t ea = 0x3e3140u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3144u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e32e8; }
    c->r[0] = 0x1656258u;
    { uint32_t ea = 0x3e316cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3170u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e8; }
    c->r[0] = 0x1656240u;
    { uint32_t ea = 0x3e3184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3188u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_3e32e8; }
    c->r[0] = 0x2828u;
    c->r[1] = 0x1u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[7] = c->r[0] & sh_lsl(c->r[1], c->r[4]);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[7] = 0x1u; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e31d0:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x3e31dcu; f_3e2838(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_3e320c; }
    c->r[0] = c->r[6];
    c->r[1] = c->r[4];
    c->r[14] = 0x3e31f0u; f_3e2838(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[8];
    c->r[14] = 0x3e3200u; f_3e2838(c);
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_3e32e8; }
L_3e320c:;
    c->r[0] = 0x16561acu;
    { uint32_t ea = 0x3e3218u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e321cu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e4; }
    c->r[0] = 0x1656194u;
    { uint32_t ea = 0x3e3230u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3234u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e32e4; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[4] * c->r[0] + c->r[6]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3e32e4; }
    c->r[0] = 0x1656154u;
    { uint32_t ea = 0x3e3270u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3274u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e32e4; }
    c->r[0] = 0x165613cu;
    { uint32_t ea = 0x3e3288u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e328cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e32e4; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[6]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_3e32e4; }
    c->r[1] = c->r[6] + 0xb8u;
    c->r[7] = 0x1u;
    { uint32_t r = c->r[8] * c->r[0] + c->r[1]; c->r[2] = r; }
    { uint32_t r = c->r[4] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_NE) { c->r[7] = 0x0u; }
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e32e4:;
    c->r[7] = 0x0u;
L_3e32e8:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e3338(Cpu *restrict c) {
    FN_ENTER(0x3e3338u);
L_3e3338:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x54u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1656074u;
    { uint32_t ea = 0x3e3350u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3354u; f_da84f0(c);
    c->r[5] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e39e8; }
    c->r[0] = 0x1656058u;
    { uint32_t ea = 0x3e336cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3370u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e39e8; }
    c->r[0] = 0x165602cu;
    { uint32_t ea = 0x3e3398u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e339cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e33a8u; f_da84f0(c);
    c->r[5] = 0x11u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e39e8; }
    c->r[0] = 0x1656004u;
    { uint32_t ea = 0x3e33c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e33c4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e39e8; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e39e8; }
    c->r[0] = 0x1655fc4u;
    { uint32_t ea = 0x3e3400u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3404u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3414u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e345c; }
    c->r[0] = 0x1655f9cu;
    { uint32_t ea = 0x3e3428u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e342cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e345c; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    c->r[5] = 0x12u;
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e39e8; }
L_3e345c:;
    c->r[0] = 0x1655f5cu;
    { uint32_t ea = 0x3e3468u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e346cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = c->r[4] + 0x20u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x3e3484u; f_a389e0(c);
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = c->r[8];
    c->r[14] = 0x3e3490u; f_d21388(c);
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[13] + 0x20u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x51u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e34e0; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e34b4u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e34c8u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3e34e0; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x51u; ST8(ea, c->r[0]); }
    goto L_3e34f8;
L_3e34e0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x20u;
    c->pc = c->r[3]; c->r[14] = 0x3e34f8u; rt_dispatch(c);
L_3e34f8:;
    c->r[0] = 0x1657cf0u;
    c->r[6] = c->r[13] + 0x28u;
    { uint32_t ea = 0x3e3508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e3518u; f_d215b4(c);
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[9] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e3530u; f_d215b4(c);
    c->r[0] = 0x1655e88u;
    { uint32_t ea = 0x3e353cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3540u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e3554u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3568; }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x28u;
    goto L_3e3570;
L_3e3568:;
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = 0x0u;
L_3e3570:;
    c->r[14] = 0x3e3574u; f_d215b4(c);
    c->r[0] = 0x1655e44u;
    { uint32_t ea = 0x3e3580u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3584u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e3598u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e35ac; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x28u;
    goto L_3e35b4;
L_3e35ac:;
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = 0x0u;
L_3e35b4:;
    c->r[14] = 0x3e35b8u; f_d215b4(c);
    c->r[0] = 0x1655e00u;
    { uint32_t ea = 0x3e35c4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e35c8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e35dcu; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e35f0; }
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x28u;
    goto L_3e35f8;
L_3e35f0:;
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = 0x0u;
L_3e35f8:;
    c->r[14] = 0x3e35fcu; f_d215b4(c);
    c->r[0] = 0x1655dbcu;
    { uint32_t ea = 0x3e3608u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e360cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[2] = 0x3u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e3620u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3634; }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[13] + 0x28u;
    goto L_3e363c;
L_3e3634:;
    c->r[0] = c->r[13] + 0x28u;
    c->r[1] = 0x0u;
L_3e363c:;
    c->r[14] = 0x3e3640u; f_d215b4(c);
    c->r[0] = 0x1655d74u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = 0x3e3650u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e365cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x110u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7];
    c->r[14] = 0x3e3680u; f_d2bf40(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3688u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    c->r[7] = 0x1u;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[11] = sh_lsl(c->r[7], c->r[0]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e36a4u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3704; }
    c->r[0] = 0x1655d0cu;
    { uint32_t ea = 0x3e36b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e36bcu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3704; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e36f4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
L_3e36f4:;
    c->r[2] = c->r[13] + 0x20u;
    c->r[1] = 0x14u;
    c->r[3] = 0x4u;
    c->pc = c->r[5]; c->r[14] = 0x3e3704u; rt_dispatch(c);
L_3e3704:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[9] * c->r[0] + c->r[4]; c->r[0] = r; }
    c->r[5] = c->r[0] + 0xc2u;
    c->r[0] = 0x1655c9cu;
    { uint32_t ea = 0x3e3728u + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x1655c94u;
    { uint32_t ea = 0x3e3730u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x1655c8cu;
    { uint32_t ea = 0x3e3738u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1655c80u;
    { uint32_t ea = 0x3e3744u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1655c74u;
    { uint32_t ea = 0x3e3750u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1655c6cu;
    { uint32_t ea = 0x3e3758u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_3e3758:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3760u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_3e3874; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3778u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e3788u; f_3e2f64(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e3874; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & shc_lsl(c, c->r[7], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e3808; }
    c->r[0] = sh_lsl(c->r[7], c->r[0]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[11]);
    c->r[11] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e37b4u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3874; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e37c8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3874; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e3800; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e3800:;
    c->r[1] = 0x14u;
    goto L_3e3864;
L_3e3808:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3814u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3874; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3828u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3874; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e3860; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e3860:;
    c->r[1] = 0x11u;
L_3e3864:;
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = 0x4u;
    c->pc = c->r[7]; c->r[14] = 0x3e3870u; rt_dispatch(c);
    c->r[7] = 0x1u;
L_3e3874:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_3e3758; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x2828u;
    { uint32_t r = c->r[0] * c->r[6] + c->r[4]; c->r[5] = r; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0xc6u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[14] = 0x3e38b4u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = (uint32_t)(uint8_t)(c->r[11]);
    c->r[8] = c->r[5] + 0xd0u;
    c->r[4] = c->r[4] + 0xd6u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[5] + 0xc8u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    c->r[0] = c->r[5] + 0xd6u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xd4u;
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1655ad4u;
    { uint32_t ea = 0x3e38f0u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x1655accu;
    { uint32_t ea = 0x3e38f8u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_3e38f4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e38fcu; f_da84f0(c);
    c->r[1] = c->r[7];
    c->r[14] = 0x3e3904u; f_d252ac(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e39cc; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3914u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { c->r[0] = 0x1u; }
    if (COND_NE) { { uint32_t r = c->r[10] & shc_lsl(c, c->r[0], c->r[7]); c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_3e39cc; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] - 0x1eu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] - 0x1au; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] - 0x10u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x12u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] - 0x16u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    c->r[14] = 0x3e3954u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] - 0xeu; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x2u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[5] = c->r[2] | (c->r[3] << 8);
    c->r[0] = c->r[0] | (c->r[1] << 8);
    { uint32_t ea = c->r[4] - 0x5u; ST8(ea, c->r[1]); }
    c->r[1] = c->r[4] - 0x6u;
    c->r[0] = c->r[0] | (c->r[5] << 16);
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); c->r[1] = c->r[1] + 0x2u; }
    { uint32_t ea = c->r[1] + 0x1u; ST8(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[0] = 0x2808u;
    c->r[1] = c->r[0] - c->r[5];
    c->r[0] = 0x2807u;
    { uint32_t ea = c->r[4] - 0x2u; ST16(ea, c->r[5]); }
    (void)f_subs(c, c->r[5], c->r[0]);
    c->r[0] = c->r[4] + c->r[5];
    if (COND_HI) { c->r[1] = 0x0u; }
    c->r[14] = 0x3e39b8u; f_15efdac(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[0] = c->r[4];
    c->r[5] = 0x41ccu;
    c->r[14] = 0x3e39ccu; f_15efe30(c);
L_3e39cc:;
    c->r[7] = c->r[7] + 0x1u;
    c->r[4] = c->r[4] + c->r[6];
    (void)f_subs(c, c->r[7], 0x4u);
    if (COND_NE) { goto L_3e38f4; }
    c->r[0] = c->r[13] + 0x28u;
    c->r[14] = 0x3e39e4u; f_d213cc(c);
    c->r[5] = 0x0u;
L_3e39e8:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x54u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e3a4c(Cpu *restrict c) {
    FN_ENTER(0x3e3a4cu);
L_3e3a4c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1655958u;
    c->r[11] = c->r[3];
    c->r[9] = c->r[1];
    { uint32_t ea = 0x3e3a6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3a70u; f_da84f0(c);
    c->r[7] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3ad0; }
    c->r[0] = 0x165593cu;
    { uint32_t ea = 0x3e3a88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3a8cu; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3ad0; }
    c->r[0] = 0x1655910u;
    { uint32_t ea = 0x3e3ab4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3ab8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e3ac4u; f_3e2838(c);
    c->r[7] = 0xdu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_3e3adc; }
L_3e3ad0:;
    c->r[0] = c->r[7];
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3e3adc:;
    c->r[0] = 0x16558dcu;
    { uint32_t ea = 0x3e3ae8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3aecu; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3afcu; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3b44; }
    c->r[0] = 0x16558b4u;
    { uint32_t ea = 0x3e3b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3b14u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3b44; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[4]; c->r[0] = r; }
    c->r[7] = 0xeu;
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e3ad0; }
L_3e3b44:;
    c->r[0] = 0x1655874u;
    { uint32_t ea = 0x3e3b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3b54u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3b90; }
    c->r[0] = 0x165585cu;
    { uint32_t ea = 0x3e3b68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3b6cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_EQ) { goto L_3e3cd4; }
L_3e3b90:;
    c->r[0] = 0x1655828u;
    { uint32_t ea = 0x3e3b9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3ba0u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3bf8; }
    c->r[0] = 0x1655810u;
    { uint32_t ea = 0x3e3bb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3bb8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3bf8; }
    c->r[0] = 0x28e0u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e3bf8; }
    c->r[0] = 0x28e4u;
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_3e3ce4; }
L_3e3bf8:;
    c->r[0] = 0x16557c0u;
    { uint32_t ea = 0x3e3c04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3c08u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3c60; }
    c->r[0] = 0x16557a8u;
    { uint32_t ea = 0x3e3c1cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3c20u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3c60; }
    c->r[0] = 0x5108u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e3c60; }
    c->r[0] = 0x510cu;
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_3e3ce4; }
L_3e3c60:;
    c->r[0] = 0x1655758u;
    { uint32_t ea = 0x3e3c6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3c70u; f_da84f0(c);
    c->r[7] = 0x3u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3ad0; }
    c->r[0] = 0x165573cu;
    { uint32_t ea = 0x3e3c88u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3c8cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3ad0; }
    c->r[0] = 0x7930u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e3ad0; }
    c->r[0] = 0x7934u;
    c->r[6] = 0x3u;
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_3e3ad0; }
    goto L_3e3ce4;
L_3e3cd4:;
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_3e3b90; }
L_3e3ce4:;
    c->r[0] = 0x2828u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[8] = v; }
    c->r[0] = 0x16556c8u;
    { uint32_t ea = 0x3e3cfcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3d00u; f_da84f0(c);
    c->r[10] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e3d74; }
    c->r[0] = 0x16556acu;
    { uint32_t ea = 0x3e3d18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3d1cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e3d74; }
    c->r[0] = c->r[6] + (c->r[6] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_LT) { goto L_3e3d74; }
    c->r[0] = 0x2828u;
    { int64_t p = (int64_t)((int32_t)(int16_t)(c->r[6] >> 0) * (int32_t)(int16_t)(c->r[0] >> 0)) + (int32_t)c->r[4]; if (p != (int32_t)p) c->qf = 1; c->r[0] = (uint32_t)p; }
    { uint32_t ea = c->r[0] + 0xc1u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & 0x1u;
    c->r[2] = (c->r[0] >> 1) & 0x1u;
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = (c->r[0] >> 2) & 0x1u;
    c->r[0] = (c->r[0] >> 3) & 0x1u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[10] = c->r[1] + c->r[0];
L_3e3d74:;
    c->r[7] = 0x4u;
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_LE) { goto L_3e3ad0; }
    c->r[0] = 0x0u;
    c->r[8] = c->r[4] + 0x20u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e3da0u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[8];
    c->r[14] = 0x3e3dacu; f_d21388(c);
    c->r[0] = 0xau;
    { uint32_t ea = c->r[13] + 0x43u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e3dfc; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e3dd0u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e3de4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e3dfc; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); }
    goto L_3e3e14;
L_3e3dfc:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x43u;
    c->pc = c->r[3]; c->r[14] = 0x3e3e14u; rt_dispatch(c);
L_3e3e14:;
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[9];
    c->r[14] = 0x3e3e20u; f_d215b4(c);
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x43u; ST8(ea, c->r[11]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e3e6c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e3e40u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e3e54u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e3e6c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); }
    goto L_3e3ed0;
L_3e3e6c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x43u;
    c->pc = c->r[3]; c->r[14] = 0x3e3e84u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e3ed0; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e3ea0u; rt_dispatch(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e3eb4u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x8u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CS) { goto L_3e3ed0; }
    c->r[7] = c->r[6];
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); }
    goto L_3e3eec;
L_3e3ed0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x8u;
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x38u;
    c->pc = c->r[3]; c->r[14] = 0x3e3eecu; rt_dispatch(c);
L_3e3eec:;
    c->r[0] = 0x16554c8u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0x3e3efcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e3f08u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->r[5] = c->r[7];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e3f30u; f_d2bf40(c);
    c->r[0] = 0xa2f0u;
    c->r[1] = 0xau;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0xa2f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[13] + 0xcu;
    c->r[14] = 0x3e3f4cu; f_d213cc(c);
    c->r[7] = 0x0u;
    goto L_3e3ad0;
}
void f_3e3f94(Cpu *restrict c) {
    FN_ENTER(0x3e3f94u);
L_3e3f94:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1655418u;
    { uint32_t ea = 0x3e3facu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3fb0u; f_da84f0(c);
    c->r[6] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e41d8; }
    c->r[0] = 0x16553fcu;
    { uint32_t ea = 0x3e3fc8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3fccu; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e41d8; }
    c->r[0] = 0x16553d0u;
    { uint32_t ea = 0x3e3ff4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e3ff8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4004u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e4050; }
    c->r[0] = 0x16553acu;
    { uint32_t ea = 0x3e4018u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e401cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e4050; }
    c->r[0] = 0x2828u;
    c->r[6] = 0x16u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e41d8; }
L_3e4050:;
    c->r[0] = 0x1655368u;
    { uint32_t ea = 0x3e405cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4060u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4070u; f_3e2838(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_3e4140; }
    c->r[0] = 0x165533cu;
    { uint32_t ea = 0x3e4088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e408cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x14u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_3e41d8; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc2u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0x1655310u;
    { uint32_t ea = 0x3e40b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e40b8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[6] = 0x15u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e41d8; }
    c->r[9] = c->r[4] + 0x20u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e40e4u; f_a389e0(c);
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[9];
    c->r[14] = 0x3e40f0u; f_d21388(c);
    c->r[0] = 0xeu;
    { uint32_t ea = c->r[13] + 0x37u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x31u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e4148; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4114u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4128u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e4148; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x31u; ST8(ea, c->r[0]); }
    goto L_3e4160;
L_3e4140:;
    c->r[6] = 0x13u;
    goto L_3e41d8;
L_3e4148:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x37u;
    c->pc = c->r[3]; c->r[14] = 0x3e4160u; rt_dispatch(c);
L_3e4160:;
    c->r[0] = 0x2828u;
    c->r[8] = c->r[13] + 0x8u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e4178u; f_d215b4(c);
    c->r[0] = 0x165523cu;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x3e4188u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x3e4194u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e41b8u; f_d2bf40(c);
    c->r[0] = 0xa2f0u;
    c->r[1] = 0xeu;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0xa2f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e41d4u; f_d213cc(c);
    c->r[6] = 0x0u;
L_3e41d8:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3e4204(Cpu *restrict c) {
    FN_ENTER(0x3e4204u);
L_3e4204:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[0] = 0x16551a8u;
    { uint32_t ea = 0x3e421cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4220u; f_da84f0(c);
    c->r[6] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e4448; }
    c->r[0] = 0x165518cu;
    { uint32_t ea = 0x3e4238u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e423cu; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e4448; }
    c->r[0] = 0x1655160u;
    { uint32_t ea = 0x3e4264u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4268u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4274u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e42c0; }
    c->r[0] = 0x165513cu;
    { uint32_t ea = 0x3e4288u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e428cu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e42c0; }
    c->r[0] = 0x2828u;
    c->r[6] = 0x1au;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e4448; }
L_3e42c0:;
    c->r[0] = 0x16550f8u;
    { uint32_t ea = 0x3e42ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e42d0u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e42e0u; f_3e2838(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_3e43b0; }
    c->r[0] = 0x16550ccu;
    { uint32_t ea = 0x3e42f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e42fcu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x18u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_3e4448; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc2u; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[0] = 0x16550a0u;
    { uint32_t ea = 0x3e4324u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4328u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[6] = 0x19u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[7] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e4448; }
    c->r[9] = c->r[4] + 0x20u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e4354u; f_a389e0(c);
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[9];
    c->r[14] = 0x3e4360u; f_d21388(c);
    c->r[0] = 0x12u;
    { uint32_t ea = c->r[13] + 0x37u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x31u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e43b8; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4384u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4398u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e43b8; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x31u; ST8(ea, c->r[0]); }
    goto L_3e43d0;
L_3e43b0:;
    c->r[6] = 0x17u;
    goto L_3e4448;
L_3e43b8:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x37u;
    c->pc = c->r[3]; c->r[14] = 0x3e43d0u; rt_dispatch(c);
L_3e43d0:;
    c->r[0] = 0x2828u;
    c->r[8] = c->r[13] + 0x8u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e43e8u; f_d215b4(c);
    c->r[0] = 0x1654fccu;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x3e43f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x3e4404u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e4428u; f_d2bf40(c);
    c->r[0] = 0xa2f0u;
    c->r[1] = 0x12u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0xa2f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e4444u; f_d213cc(c);
    c->r[6] = 0x0u;
L_3e4448:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3e4474(Cpu *restrict c) {
    FN_ENTER(0x3e4474u);
L_3e4474:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[4] = c->r[0];
    c->r[0] = 0x1654f38u;
    { uint32_t ea = 0x3e448cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4490u; f_da84f0(c);
    c->r[6] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e46bc; }
    c->r[0] = 0x1654f1cu;
    { uint32_t ea = 0x3e44a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e44acu; f_da84f0(c);
    c->r[5] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e46bc; }
    c->r[0] = 0x1654ef0u;
    { uint32_t ea = 0x3e44d4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e44d8u; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e44e4u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e4530; }
    c->r[0] = 0x1654eccu;
    { uint32_t ea = 0x3e44f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e44fcu; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e4530; }
    c->r[0] = 0x2828u;
    c->r[6] = 0x1eu;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_3e46bc; }
L_3e4530:;
    c->r[0] = 0x1654e88u;
    { uint32_t ea = 0x3e453cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4540u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4550u; f_3e2838(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_LT) { goto L_3e461c; }
    c->r[0] = 0x1654e5cu;
    { uint32_t ea = 0x3e4568u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e456cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1cu;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_EQ) { goto L_3e46bc; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xc2u; uint32_t v = LD8(ea); c->r[6] = v; }
    c->r[0] = 0x1654e30u;
    { uint32_t ea = 0x3e4594u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4598u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t r = c->r[6] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e46b8; }
    c->r[9] = c->r[4] + 0x20u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e45c0u; f_a389e0(c);
    c->r[0] = c->r[13] + 0x8u;
    c->r[1] = c->r[9];
    c->r[14] = 0x3e45ccu; f_d21388(c);
    c->r[0] = 0x16u;
    { uint32_t ea = c->r[13] + 0x37u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x31u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e4624; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e45f0u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4604u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e4624; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x31u; ST8(ea, c->r[0]); }
    goto L_3e463c;
L_3e461c:;
    c->r[6] = 0x1bu;
    goto L_3e46bc;
L_3e4624:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x37u;
    c->pc = c->r[3]; c->r[14] = 0x3e463cu; rt_dispatch(c);
L_3e463c:;
    c->r[0] = 0x2828u;
    c->r[8] = c->r[13] + 0x8u;
    { uint32_t r = c->r[5] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e4654u; f_d215b4(c);
    c->r[0] = 0x1654d60u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0x3e4664u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x3e4670u; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e4694u; f_d2bf40(c);
    c->r[0] = 0xa2f0u;
    c->r[1] = 0x16u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    c->r[0] = 0xa2f4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e46b0u; f_d213cc(c);
    c->r[6] = 0x0u;
    goto L_3e46bc;
L_3e46b8:;
    c->r[6] = 0x1du;
L_3e46bc:;
    c->r[0] = c->r[6];
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3e46e8(Cpu *restrict c) {
    FN_ENTER(0x3e46e8u);
L_3e46e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x3cu;
    c->r[4] = c->r[0];
    c->r[0] = 0x1654cc4u;
    { uint32_t ea = 0x3e4700u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4704u; f_da84f0(c);
    c->r[5] = 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e48e0; }
    c->r[0] = 0x1654ca8u;
    { uint32_t ea = 0x3e471cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4720u; f_da84f0(c);
    c->r[6] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e48e0; }
    c->r[0] = 0x1654c7cu;
    { uint32_t ea = 0x3e4748u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e474cu; f_da84f0(c);
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4758u; f_da84f0(c);
    c->r[5] = 0x24u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e48e0; }
    c->r[0] = 0x1654c54u;
    { uint32_t ea = 0x3e4770u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e4774u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_3e48e0; }
    c->r[0] = 0x2828u;
    { uint32_t r = c->r[6] * c->r[0] + c->r[4]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_3e48e0; }
    c->r[0] = 0x1654c14u;
    { uint32_t ea = 0x3e47b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e47b4u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[9] = c->r[4] + 0x20u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[9];
    c->r[1] = 0x0u;
    c->r[14] = 0x3e47d0u; f_a389e0(c);
    c->r[0] = c->r[13] + 0xcu;
    c->r[1] = c->r[9];
    c->r[14] = 0x3e47dcu; f_d21388(c);
    c->r[0] = 0x1du;
    { uint32_t ea = c->r[13] + 0x3bu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e482c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4800u; rt_dispatch(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4814u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_CS) { goto L_3e482c; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[0]); }
    goto L_3e4844;
L_3e482c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[13] + 0x3bu;
    c->pc = c->r[3]; c->r[14] = 0x3e4844u; rt_dispatch(c);
L_3e4844:;
    c->r[7] = c->r[4] + 0xb8u;
    c->r[10] = 0x2828u;
    c->r[8] = c->r[13] + 0xcu;
    { uint32_t r = c->r[5] * c->r[10] + c->r[7]; c->r[0] = r; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e4860u; f_d215b4(c);
    c->r[0] = 0x1654b54u;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = 0x3e4870u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[9];
    c->r[14] = 0x3e487cu; f_a38750(c);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e48a0u; f_d2bf40(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e48a8u; f_da84f0(c);
    c->r[1] = 0x41ccu;
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2816u;
    { uint32_t r = c->r[0] * c->r[10]; c->r[0] = r; }
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[5]); c->r[7] = ea; }
    c->r[0] = c->r[7] + 0x10u;
    { uint32_t ea = c->r[7] + 0xeu; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0xcu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[5]); }
    c->r[14] = 0x3e48d8u; f_15efdc4(c);
    c->r[0] = c->r[8];
    c->r[14] = 0x3e48e0u; f_d213cc(c);
L_3e48e0:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[13] + 0x3cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e4904(Cpu *restrict c) {
    FN_ENTER(0x3e4904u);
L_3e4904:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[0] = 0xa15cu;
    c->r[6] = c->r[1];
    c->r[5] = c->r[2];
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa174u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa18cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa1a4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa1bcu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x4u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa1d4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa1ecu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa204u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa21cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x8u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa234u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9u;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa24cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xau;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa264u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xbu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa27cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xcu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa294u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xdu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa2acu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xeu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_EQ) { goto L_3e4a5c; }
    c->r[0] = 0xa2c4u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfu;
    (void)f_subs(c, c->r[1], c->r[6]);
    if (COND_NE) { goto L_3e4aa4; }
L_3e4a5c:;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[1] = 0xa164u;
    c->r[4] = c->r[4] + (c->r[0] << 3);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { goto L_3e4a9c; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
L_3e4a7c:;
    c->r[0] = c->r[13];
    c->r[14] = 0x3e4a84u; f_9c9198(c);
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xa16cu;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0xa168u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
L_3e4a9c:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e4aa4:;
    c->r[0] = 0xa170u;
    c->r[8] = 0xa158u;
    c->r[2] = 0x168u;
    c->r[0] = c->r[4] + c->r[0];
    c->r[1] = c->r[4] + c->r[8];
    c->r[14] = 0x3e4abcu; f_15eff38(c);
    c->r[0] = 0x0u;
    c->r[1] = 0xa160u;
    { uint32_t ea = c->r[4] + c->r[8]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0xa164u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[5]); }
    goto L_3e4a7c;
}
void f_3e4adc(Cpu *restrict c) {
    FN_ENTER(0x3e4adcu);
L_3e4adc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_3e4ae0(Cpu *restrict c) {
    FN_ENTER(0x3e4ae0u);
L_3e4ae0:;
    __attribute__((musttail)) return f_d2d978(c);
}
void f_3e4ae4(Cpu *restrict c) {
    FN_ENTER(0x3e4ae4u);
L_3e4ae4:;
    c->r[0] = 0x165671cu;
    { uint32_t ea = 0x3e4af0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_3e4af4(Cpu *restrict c) {
    FN_ENTER(0x3e4af4u);
L_3e4af4:;
    return;
}
void f_3e4af8(Cpu *restrict c) {
    FN_ENTER(0x3e4af8u);
L_3e4af8:;
    return;
}
void f_3e4afc(Cpu *restrict c) {
    FN_ENTER(0x3e4afcu);
L_3e4afc:;
    return;
}
void f_3e4b00(Cpu *restrict c) {
    FN_ENTER(0x3e4b00u);
L_3e4b00:;
    return;
}
void f_3e4b04(Cpu *restrict c) {
    FN_ENTER(0x3e4b04u);
L_3e4b04:;
    return;
}
void f_3e4b08(Cpu *restrict c) {
    FN_ENTER(0x3e4b08u);
L_3e4b08:;
    return;
}
void f_3e4b0c(Cpu *restrict c) {
    FN_ENTER(0x3e4b0cu);
L_3e4b0c:;
    return;
}
void f_3e4b10(Cpu *restrict c) {
    FN_ENTER(0x3e4b10u);
L_3e4b10:;
    return;
}
void f_3e4b14(Cpu *restrict c) {
    FN_ENTER(0x3e4b14u);
L_3e4b14:;
    return;
}
void f_3e4b18(Cpu *restrict c) {
    FN_ENTER(0x3e4b18u);
L_3e4b18:;
    return;
}
void f_3e4b1c(Cpu *restrict c) {
    FN_ENTER(0x3e4b1cu);
L_3e4b1c:;
    return;
}
void f_3e4b20(Cpu *restrict c) {
    FN_ENTER(0x3e4b20u);
L_3e4b20:;
    return;
}
void f_3e4b24(Cpu *restrict c) {
    FN_ENTER(0x3e4b24u);
L_3e4b24:;
    return;
}
void f_3e4b28(Cpu *restrict c) {
    FN_ENTER(0x3e4b28u);
L_3e4b28:;
    return;
}
void f_3e4b2c(Cpu *restrict c) {
    FN_ENTER(0x3e4b2cu);
L_3e4b2c:;
    return;
}
void f_3e4b30(Cpu *restrict c) {
    FN_ENTER(0x3e4b30u);
L_3e4b30:;
    c->r[0] = 0x16566c0u;
    { uint32_t ea = 0x3e4b3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_3e4b40(Cpu *restrict c) {
    FN_ENTER(0x3e4b40u);
L_3e4b40:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x7fu;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[4] = 0x0u;
    c->r[6] = 0x1u;
    c->r[14] = 0x3e4b64u; f_15efda0(c);
    c->r[1] = 0x1675b08u;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[5] = 0x3e4b78u + c->r[1];
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[14] = 0x3e4b84u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x3e4b9cu; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[5] + 0x14u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[4]); }
    c->r[1] = 0x4u;
    c->r[2] = 0x8u;
    c->r[3] = 0x9u;
    c->r[12] = 0x6u;
    c->r[14] = c->r[5] + 0x40u;
    { uint32_t ea = c->r[5] + 0x18u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x16u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x1au; ST16(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[6]); }
    c->r[6] = 0x5u;
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[12]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = 0x10000u;
    c->r[3] = 0x4458u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x80000000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[1]); }
    c->r[1] = f_adds(c, c->r[1], 0xf0000u);
    c->r[0] = c->r[0] + 0x0u + c->cf;
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1653f2cu;
    c->r[0] = 0x16565bcu;
    { uint32_t ea = 0x3e4c38u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1371fbdu;
    { uint32_t ea = 0x3e4c40u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3e4c44u + c->r[1];
    c->r[14] = 0x3e4c44u; f_9aedcc(c);
    c->r[1] = 0x16565c0u;
    { uint32_t ea = 0x3e4c50u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e4c70(Cpu *restrict c) {
    FN_ENTER(0x3e4c70u);
L_3e4c70:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1656594u;
    { uint32_t ea = 0x3e4c80u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4c84u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x8u;
    c->pc = c->r[4]; c->r[14] = 0x3e4c9cu; rt_dispatch(c);
    c->r[14] = 0x3e4ca0u; f_bfba6c(c);
    c->r[1] = 0x1656568u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3e4cb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e4cc0(Cpu *restrict c) {
    FN_ENTER(0x3e4cc0u);
L_3e4cc0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x165654cu;
    { uint32_t ea = 0x3e4cd0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4cd4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e4cecu; rt_dispatch(c);
    c->r[14] = 0x3e4cf0u; f_bfbf4c(c);
    c->r[1] = 0x1656524u;
    { uint32_t ea = 0x3e4cfcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e4d0c(Cpu *restrict c) {
    FN_ENTER(0x3e4d0cu);
L_3e4d0c:;
    c->v.s[0] = 0x40800000u;
    return;
}
void f_3e4d14(Cpu *restrict c) {
    FN_ENTER(0x3e4d14u);
L_3e4d14:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[4] = c->r[0] + 0x4u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4d34u; f_d21388(c);
    c->r[6] = c->r[13] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e4d40u; f_9bb3ec(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x3e4d54u; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x3e4d5cu; f_9bba24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e4f6c; }
    c->r[5] = 0x0u;
    c->r[6] = c->r[13] + 0x4u;
    c->r[9] = 0x1u;
    c->r[8] = c->r[13] + 0x3fu;
L_3e4d74:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4d80u; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_3e4f58; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x3e4d9cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x3e4dd0u: goto L_3e4dd0; case 0x3e4de4u: goto L_3e4de4; case 0x3e4e3cu: goto L_3e4e3c; case 0x3e4e54u: goto L_3e4e54; case 0x3e4e68u: goto L_3e4e68; case 0x3e4edcu: goto L_3e4edc; case 0x3e4efcu: goto L_3e4efc; case 0x3e4f1cu: goto L_3e4f1c; case 0x3e4f40u: goto L_3e4f40; case 0x3e4f58u: goto L_3e4f58; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_3e4dd0:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4ddcu; f_9bb9e4(c);
    c->r[14] = 0x3e4de0u; f_9b1d70(c);
    goto L_3e4f0c;
L_3e4de4:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4df0u; f_9bb9e4(c);
    c->r[14] = 0x3e4df4u; f_9b1b98(c);
    { uint32_t ea = c->r[13] + 0x3fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e4ec0; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4e14u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4e28u; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e4ec0; }
    { uint32_t ea = c->r[13] + 0x39u; ST8(ea, c->r[9]); }
    goto L_3e4f58;
L_3e4e3c:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4e48u; f_9bb9e4(c);
    c->r[14] = 0x3e4e4cu; f_9b1c84(c);
    c->r[1] = c->r[0];
    goto L_3e4ef0;
L_3e4e54:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4e60u; f_9bb9e4(c);
    c->r[14] = 0x3e4e64u; f_9b1e70(c);
    goto L_3e4f2c;
L_3e4e68:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4e74u; f_9bb9e4(c);
    c->r[14] = 0x3e4e78u; f_9b1f5c(c);
    { uint32_t ea = c->r[13] + 0x3fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x39u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e4ec0; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4e98u; rt_dispatch(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e4eacu; rt_dispatch(c);
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CS) { goto L_3e4ec0; }
    { uint32_t ea = c->r[13] + 0x39u; ST8(ea, c->r[9]); }
    goto L_3e4f58;
L_3e4ec0:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x3e4ed8u; rt_dispatch(c);
    goto L_3e4f58;
L_3e4edc:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4ee8u; f_9bb9e4(c);
    c->r[14] = 0x3e4eecu; f_9b204c(c);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
L_3e4ef0:;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4ef8u; f_d21530(c);
    goto L_3e4f58;
L_3e4efc:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4f08u; f_9bb9e4(c);
    c->r[14] = 0x3e4f0cu; f_9b2138(c);
L_3e4f0c:;
    c->r[1] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4f18u; f_d215b4(c);
    goto L_3e4f58;
L_3e4f1c:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4f28u; f_9bb9e4(c);
    c->r[14] = 0x3e4f2cu; f_9b2238(c);
L_3e4f2c:;
    c->r[2] = c->r[0];
    c->r[0] = c->r[4];
    c->r[3] = c->r[1];
    c->r[14] = 0x3e4f3cu; f_d21638(c);
    goto L_3e4f58;
L_3e4f40:;
    c->r[0] = c->r[6];
    c->r[1] = c->r[5];
    c->r[14] = 0x3e4f4cu; f_9bb9e4(c);
    c->r[14] = 0x3e4f50u; f_9b2328(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4f58u; f_d216c0(c);
L_3e4f58:;
    c->r[0] = c->r[6];
    c->r[5] = c->r[5] + 0x1u;
    c->r[14] = 0x3e4f64u; f_9bba24(c);
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_CC) { goto L_3e4d74; }
L_3e4f6c:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x3e4f74u; f_9bb7b8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0x3e4f7cu; f_d213cc(c);
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3e4f84(Cpu *restrict c) {
    FN_ENTER(0x3e4f84u);
L_3e4f84:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 8u; ST64(ea + 0u, c->v.d[8]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x38u;
    c->r[5] = c->r[0];
    c->r[0] = c->r[13] + 0xcu;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    c->r[9] = c->r[0] + 0x4u;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e4facu; f_d219cc(c);
    c->r[6] = c->r[13] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e4fb8u; f_9bb3ec(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0x3e4fccu; rt_dispatch(c);
    c->r[0] = c->r[6];
    c->r[14] = 0x3e4fd4u; f_9bba24(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e520c; }
    c->r[10] = 0x0u;
    c->r[5] = c->r[13] + 0x4u;
    c->r[8] = c->r[13];
    c->r[11] = 0x1u;
    c->r[7] = 0x0u;
L_3e4ff0:;
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e4ffcu; f_9bb9e4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x4u;
    (void)f_subs(c, c->r[0], 0xbu);
    if (COND_HI) { goto L_3e51f8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x3e5018u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x3e504cu: goto L_3e504c; case 0x3e508cu: goto L_3e508c; case 0x3e50b0u: goto L_3e50b0; case 0x3e50d4u: goto L_3e50d4; case 0x3e5100u: goto L_3e5100; case 0x3e5140u: goto L_3e5140; case 0x3e5164u: goto L_3e5164; case 0x3e5188u: goto L_3e5188; case 0x3e51b4u: goto L_3e51b4; case 0x3e51d8u: goto L_3e51d8; case 0x3e51f8u: goto L_3e51f8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_3e504c:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x3e5068u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[11]); } }
    c->r[14] = 0x3e5080u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x3e5088u; f_9b1b24(c);
    goto L_3e51f8;
L_3e508c:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e5094u; f_d21a1c(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e50a4u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x3e50acu; f_9b1c0c(c);
    goto L_3e51f8;
L_3e50b0:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e50b8u; f_d21a64(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e50c8u; f_9bb9e4(c);
    c->r[1] = c->r[6];
    c->r[14] = 0x3e50d0u; f_9b1cfc(c);
    goto L_3e51f8;
L_3e50d4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e50dcu; f_d21aac(c);
    c->r[6] = c->r[0];
    c->r[4] = c->r[1];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e50f0u; f_9bb9e4(c);
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->r[14] = 0x3e50fcu; f_9b1de4(c);
    goto L_3e51f8;
L_3e5100:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST8(ea, c->r[10]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[8];
    c->pc = c->r[3]; c->r[14] = 0x3e511cu; rt_dispatch(c);
    { uint32_t ea = c->r[13]; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x35u; ST8(ea, c->r[11]); } }
    c->r[14] = 0x3e5134u; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x3e513cu; f_9b1ee8(c);
    goto L_3e51f8;
L_3e5140:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e5148u; f_d21a1c(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e5158u; f_9bb9e4(c);
    c->r[1] = (uint32_t)(int32_t)(int16_t)(c->r[4]);
    c->r[14] = 0x3e5160u; f_9b1fd4(c);
    goto L_3e51f8;
L_3e5164:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e516cu; f_d21a64(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e517cu; f_9bb9e4(c);
    c->r[1] = c->r[4];
    c->r[14] = 0x3e5184u; f_9b20c4(c);
    goto L_3e51f8;
L_3e5188:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e5190u; f_d21aac(c);
    c->r[4] = c->r[0];
    c->r[6] = c->r[1];
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e51a4u; f_9bb9e4(c);
    c->r[2] = c->r[4];
    c->r[3] = c->r[6];
    c->r[14] = 0x3e51b0u; f_9b21ac(c);
    goto L_3e51f8;
L_3e51b4:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e51bcu; f_d21af8(c);
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->v.s[16] = c->v.s[0];
    c->r[14] = 0x3e51ccu; f_9bb9e4(c);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x3e51d4u; f_9b22b0(c);
    goto L_3e51f8;
L_3e51d8:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e51e0u; f_d21a64(c);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[1] = c->r[7];
    c->r[14] = 0x3e51f0u; f_9bb9e4(c);
    c->r[1] = c->r[8];
    c->r[14] = 0x3e51f8u; f_9b26ac(c);
L_3e51f8:;
    c->r[0] = c->r[5];
    c->r[7] = c->r[7] + 0x1u;
    c->r[14] = 0x3e5204u; f_9bba24(c);
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_CC) { goto L_3e4ff0; }
L_3e520c:;
    c->r[0] = c->r[13] + 0x4u;
    c->r[14] = 0x3e5214u; f_9bb7b8(c);
    c->r[0] = c->r[9];
    c->r[14] = 0x3e521cu; f_d21a04(c);
    c->r[13] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->r[13] = c->r[13] + 8u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e522c(Cpu *restrict c) {
    FN_ENTER(0x3e522cu);
L_3e522c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_3e5268; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[0] = 0x1655fc8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2];
    c->r[2] = 0xc0u;
    { uint32_t ea = 0x3e525cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5260u; f_43046c(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_3e5268:;
    return;
}
void f_3e5270(Cpu *restrict c) {
    FN_ENTER(0x3e5270u);
L_3e5270:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_3e52b0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_3e52b0; }
    c->r[0] = 0x1655f78u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2];
    c->r[2] = c->r[12];
    { uint32_t ea = 0x3e52acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e52b0u; f_43046c(c);
L_3e52b0:;
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e52bc(Cpu *restrict c) {
    FN_ENTER(0x3e52bcu);
L_3e52bc:;
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x19u);
    if (COND_HI) { c->r[0] = 0x0u; }
    if (COND_HI) { return; }
    c->r[1] = 0x14421e0u;
    c->r[0] = (uint32_t)(int32_t)(int8_t)(c->r[0]);
    c->r[1] = 0x3e52e0u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_3e52e8(Cpu *restrict c) {
    FN_ENTER(0x3e52e8u);
L_3e52e8:;
    c->r[3] = 0x144214cu;
    c->r[2] = 0x1442150u;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[12] = 0x3e5304u + c->r[2];
    c->r[3] = 0x3e5308u + c->r[3];
    goto L_3e5318;
L_3e5308:;
    c->r[0] = c->r[0] + 0x2u;
    (void)f_subs(c, c->r[0], 0x62u);
    if (COND_CS) { c->r[0] = 0x0u; }
    if (COND_CS) { return; }
L_3e5318:;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { return; }
    c->r[2] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] + 0x1u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_3e5308; }
    c->r[0] = c->r[0] + 0x1u;
    return;
}
void f_3e5344(Cpu *restrict c) {
    FN_ENTER(0x3e5344u);
L_3e5344:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[2] = 0x27u;
    c->r[3] = 0x1fu;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x26u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x28u; ST16(ea, c->r[0]); }
    c->r[0] = 0x3e7u;
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1653828u;
    { uint32_t ea = c->r[4] + 0x32u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2eu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0x3e53acu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e53b0u; f_75bac0(c);
    c->r[1] = 0x100u;
    c->r[2] = c->r[4];
    c->r[3] = 0x11u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x3e53c4u; f_9ca420(c);
    c->r[0] = 0x1653bf0u;
    { uint32_t ea = 0x3e53d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e53f0(Cpu *restrict c) {
    FN_ENTER(0x3e53f0u);
L_3e53f0:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[0] = 0x2u;
    c->r[1] = 0x1u;
    c->r[2] = 0x27u;
    c->r[3] = 0x1fu;
    { uint32_t ea = c->r[4] + 0x23u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x33u; uint32_t v = LD8(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4]; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[0]); }
    c->r[0] = 0xffffu;
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x26u; ST8(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x28u; ST16(ea, c->r[0]); }
    c->r[0] = 0x3e7u;
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[0]); }
    c->r[0] = 0x1653770u;
    { uint32_t ea = c->r[4] + 0x32u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x30u; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2eu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST16(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[5]); }
    { uint32_t ea = 0x3e5464u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5468u; f_75bac0(c);
    c->r[1] = 0x100u;
    c->r[2] = c->r[4];
    c->r[3] = 0x11u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0x3e547cu; f_9ca420(c);
    { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x33u; ST8(ea, c->r[8]); }
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e5494(Cpu *restrict c) {
    FN_ENTER(0x3e5494u);
L_3e5494:;
    c->r[1] = 0x1655d84u;
    c->r[2] = 0x2u;
    { uint32_t ea = 0x3e54a4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x52u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x53u; ST8(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST16(ea, c->r[2]); }
    c->r[2] = 0x3e7u;
    { uint32_t ea = c->r[0] + 0x5au; ST16(ea, c->r[2]); }
    c->r[2] = 0x6u;
    { uint32_t ea = c->r[0] + 0x62u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x78u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1000u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x7u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x80u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    return;
}
void f_3e5544(Cpu *restrict c) {
    FN_ENTER(0x3e5544u);
L_3e5544:;
    return;
}
void f_3e5548(Cpu *restrict c) {
    FN_ENTER(0x3e5548u);
L_3e5548:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_3e554c(Cpu *restrict c) {
    FN_ENTER(0x3e554cu);
L_3e554c:;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    return;
}
void f_3e5554(Cpu *restrict c) {
    FN_ENTER(0x3e5554u);
L_3e5554:;
    c->r[0] = c->r[0] + 0x30u;
    return;
}
void f_3e555c(Cpu *restrict c) {
    FN_ENTER(0x3e555cu);
L_3e555c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e5570; }
    c->r[0] = c->r[0] + 0x30u;
    c->r[2] = 0x35u;
    __attribute__((musttail)) return f_15efe30(c);
L_3e5570:;
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x52u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x53u; ST8(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0x54u; ST16(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[0] + 0x56u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x58u; ST16(ea, c->r[2]); }
    c->r[2] = 0x3e7u;
    { uint32_t ea = c->r[0] + 0x5au; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x62u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5eu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; ST8(ea, c->r[1]); }
    return;
}
void f_3e55b8(Cpu *restrict c) {
    FN_ENTER(0x3e55b8u);
L_3e55b8:;
    c->r[0] = c->r[0] + 0x68u;
    return;
}
void f_3e55c0(Cpu *restrict c) {
    FN_ENTER(0x3e55c0u);
L_3e55c0:;
    c->r[12] = c->r[0] + 0x68u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e55ec; }
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[14]); c->r[12] = c->r[12] + 16u; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x2u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_3e55ec:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[12] + 0x12u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x10u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[0]); }
    return;
}
void f_3e560c(Cpu *restrict c) {
    FN_ENTER(0x3e560cu);
L_3e560c:;
    c->r[1] = 0x1655c10u;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3e561cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    return;
}
void f_3e5628(Cpu *restrict c) {
    FN_ENTER(0x3e5628u);
L_3e5628:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    return;
}
void f_3e5634(Cpu *restrict c) {
    FN_ENTER(0x3e5634u);
L_3e5634:;
    return;
}
void f_3e5638(Cpu *restrict c) {
    FN_ENTER(0x3e5638u);
L_3e5638:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1653730u;
    { uint32_t ea = 0x3e564cu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xe50u;
    c->r[0] = c->r[0] + 0x15000u;
    c->r[14] = 0x3e5658u; f_3e5784(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x624du;
    c->r[2] = 0xffu;
    c->r[3] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; ST8(ea, c->r[2]); }
    c->r[1] = 0x604u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0] + 0x626u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x627u; ST8(ea, c->r[1]); }
    c->r[1] = 0x628u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x62cu;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[0] + 0x62au; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x62eu;
    c->r[3] = 0x3e7u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[3]); }
    c->r[1] = 0x636u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x634u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x632u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    c->r[1] = 0x630u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x638u; ST8(ea, c->r[2]); }
    c->r[0] = 0x16534d8u;
    { uint32_t ea = 0x3e56dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e56e0u; f_5f8678(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e56fc; }
    c->r[0] = 0x16536b4u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0x3e56f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e56fcu; f_5dd710(c);
L_3e56fc:;
    c->r[0] = 0x1653674u;
    { uint32_t ea = 0x3e5708u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e570cu; f_42cec0(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5714u; f_42ca74(c);
    c->r[0] = 0x1653aa4u;
    { uint32_t ea = 0x3e5720u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5728u; f_427ae4(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0x3e5734u; f_3a50f4(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & ~0x40000001u;
    c->r[0] = c->r[0] | 0x40000000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e574cu; f_4306c4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { c->r[0] = c->r[0] | 0x1u; }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e5784(Cpu *restrict c) {
    FN_ENTER(0x3e5784u);
L_3e5784:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[5] = v; }
    c->r[12] = c->r[2] + 0x14u;
    c->r[14] = c->r[2] + 0x10u;
    c->r[1] = c->r[2] + 0xcu;
    c->r[3] = c->r[2] + 0x8u;
    c->r[4] = c->r[2] + 0x4u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e57f4; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e5800; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e580c; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e5818; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e5824; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_3e5868; }
    c->r[5] = 0x5u;
    c->r[6] = c->r[12];
    goto L_3e582c;
L_3e57f4:;
    c->r[5] = 0x0u;
    c->r[6] = c->r[2];
    goto L_3e582c;
L_3e5800:;
    c->r[5] = 0x1u;
    c->r[6] = c->r[4];
    goto L_3e582c;
L_3e580c:;
    c->r[5] = 0x2u;
    c->r[6] = c->r[3];
    goto L_3e582c;
L_3e5818:;
    c->r[5] = 0x3u;
    c->r[6] = c->r[1];
    goto L_3e582c;
L_3e5824:;
    c->r[5] = 0x4u;
    c->r[6] = c->r[14];
L_3e582c:;
    c->r[5] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xc0u);
    if (COND_CS) { goto L_3e5850; }
    c->r[7] = ~0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    goto L_3e5868;
L_3e5850:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { c->r[5] = 0x4u; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
L_3e5868:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[6] = c->r[2];
    if (COND_EQ) { goto L_3e58e0; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[6] = c->r[4];
    if (COND_EQ) { goto L_3e58e0; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[6] = c->r[3];
    if (COND_EQ) { goto L_3e58e0; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x3u;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[6] = c->r[1];
    if (COND_EQ) { goto L_3e58e0; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x4u;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[6] = c->r[14];
    if (COND_EQ) { goto L_3e58e0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x5u;
    (void)f_subs(c, c->r[6], 0x1u);
    c->r[6] = c->r[12];
    if (COND_NE) { goto L_3e591c; }
L_3e58e0:;
    c->r[5] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xc0u);
    if (COND_CS) { goto L_3e5904; }
    c->r[7] = ~0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    goto L_3e591c;
L_3e5904:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { c->r[5] = 0x4u; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
L_3e591c:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = c->r[2];
    if (COND_EQ) { goto L_3e5994; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = c->r[4];
    if (COND_EQ) { goto L_3e5994; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = c->r[3];
    if (COND_EQ) { goto L_3e5994; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x3u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = c->r[1];
    if (COND_EQ) { goto L_3e5994; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x4u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = c->r[14];
    if (COND_EQ) { goto L_3e5994; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x5u;
    (void)f_subs(c, c->r[6], 0x2u);
    c->r[6] = c->r[12];
    if (COND_NE) { goto L_3e59d0; }
L_3e5994:;
    c->r[5] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD8(ea); c->r[5] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0xc0u);
    if (COND_CS) { goto L_3e59b8; }
    c->r[7] = ~0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[5]; ST8(ea, c->r[6]); }
    goto L_3e59d0;
L_3e59b8:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { c->r[5] = 0x4u; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
L_3e59d0:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_EQ) { goto L_3e5a44; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x1u;
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[2] = c->r[4];
    if (COND_EQ) { goto L_3e5a44; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x2u;
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[2] = c->r[3];
    if (COND_EQ) { goto L_3e5a44; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x3u;
    (void)f_subs(c, c->r[2], 0x3u);
    c->r[2] = c->r[1];
    if (COND_EQ) { goto L_3e5a44; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x4u;
    c->r[2] = c->r[14];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_3e5a44; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = 0x5u;
    c->r[2] = c->r[12];
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return; }
L_3e5a44:;
    c->r[1] = c->r[0] + c->r[5];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xc0u);
    if (COND_CS) { goto L_3e5a68; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e5a68:;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[1] = 0x4u; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e5a84(Cpu *restrict c) {
    FN_ENTER(0x3e5a84u);
L_3e5a84:;
    return;
}
void f_3e5a88(Cpu *restrict c) {
    FN_ENTER(0x3e5a88u);
L_3e5a88:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16532dcu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e5aa0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5aa4u; f_427ae4(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { goto L_3e5ac8; }
    c->r[0] = 0x16532c4u;
    c->r[1] = 0x9c60u;
    { uint32_t ea = 0x3e5abcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = 0x3e5ac4u; f_3cd470(c);
    goto L_3e5b04;
L_3e5ac8:;
    c->r[0] = 0x16532a8u;
    { uint32_t ea = 0x3e5ad4u + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5ad8u; f_427b10(c);
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5ae4u; f_427ae4(c);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_NE) { goto L_3e5b04; }
    c->r[0] = 0x1653284u;
    c->r[1] = 0x9c60u;
    { uint32_t ea = 0x3e5afcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = 0x3e5b04u; f_3cd2a8(c);
L_3e5b04:;
    c->r[0] = 0x165326cu;
    { uint32_t ea = 0x3e5b10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5b14u; f_427ae4(c);
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_NE) { goto L_3e5b34; }
    c->r[0] = 0x1653254u;
    { uint32_t ea = 0x3e5b28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x63cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x63cu; ST8(ea, c->r[1]); }
L_3e5b34:;
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e5b60; }
    c->r[0] = 0x165322cu;
    c->r[1] = 0x6cu;
    { uint32_t ea = 0x3e5b50u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5b54u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e5b60; }
    c->r[14] = 0x3e5b60u; f_41f230(c);
L_3e5b60:;
    c->r[0] = 0x1653210u;
    { uint32_t ea = 0x3e5b6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5b70u; f_427ae4(c);
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_LT) { goto L_3e5be8; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_3e5be8; }
    c->r[0] = 0x16531e0u;
    c->r[1] = 0x625bu;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[4], 0x3u);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x3e5b9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | sh_lsl(c->r[3], c->r[4]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    if (COND_HI) { goto L_3e5be8; }
    c->r[0] = c->r[0] + 0xe50u;
    c->r[5] = c->r[0] + 0x15000u;
    c->r[0] = c->r[5];
    c->r[14] = 0x3e5bc0u; f_3e6880(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_3e5be8; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_3e5be8; }
    c->r[1] = c->r[5] + (c->r[0] << 2);
    c->r[0] = c->r[5] + c->r[0];
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0] + 0x20u; ST8(ea, c->r[1]); }
L_3e5be8:;
    c->r[0] = 0x1653180u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3e5bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5c00u; f_42d35c(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x3e5c10u; f_425dc4(c);
    c->r[0] = 0x16535a4u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x3e5c20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5c24u; f_3a7c14(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6264u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e5c6c(Cpu *restrict c) {
    FN_ENTER(0x3e5c6cu);
L_3e5c6c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[0] = 0x16530f8u;
    c->r[4] = c->r[1];
    c->r[1] = c->r[2] + 0x4u;
    { uint32_t ea = 0x3e5c84u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5c88u; f_428020(c);
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[1] = 0xcu; }
    c->r[0] = c->r[1] + c->r[4];
    c->r[14] = 0x3e5c9cu; f_7543d4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[4];
    c->r[2] = 0x5u;
    c->r[14] = 0x3e5cacu; f_42d8f4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x3u);
    if (COND_HI) { goto L_3e5d8c; }
    c->r[2] = 0x5e58u;
    c->r[1] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_3e5d60; }
    c->r[2] = 0x5e5cu;
    c->r[1] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_3e5d60; }
    c->r[2] = 0x5e60u;
    c->r[1] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_3e5d60; }
    c->r[2] = 0x5e64u;
    c->r[1] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_3e5d60; }
    c->r[2] = 0x5e68u;
    c->r[1] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_3e5d60; }
    c->r[2] = 0x5e6cu;
    c->r[1] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0x5u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_NE) { goto L_3e5dbc; }
L_3e5d60:;
    c->r[3] = 0x5e70u;
    c->r[2] = c->r[0] + c->r[2];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0xc0u);
    if (COND_CS) { goto L_3e5d98; }
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
    goto L_3e5dbc;
L_3e5d8c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_GE) { goto L_3e5dbc; }
    goto L_3e5dd8;
L_3e5d98:;
    c->r[2] = 0x5e54u;
    c->r[3] = c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[2] + 0x1u;
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { c->r[1] = 0x4u; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_3e5dbc:;
    c->r[1] = 0x625bu;
    c->r[2] = c->r[0];
    c->r[3] = 0x1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & ~sh_lsl(c->r[3], c->r[4]);
    { uint32_t ea = c->r[2]; ST8(ea, c->r[1]); }
L_3e5dd8:;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    c->r[14] = 0x3e5de4u; f_42d35c(c);
    c->r[0] = 0x1652f84u;
    c->r[1] = c->r[4];
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3e5df8u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5dfcu; f_425dc4(c);
    c->r[0] = 0x16533b8u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0x3e5e0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5e10u; f_3a50f4(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[0] + 0x63bu; ST8(ea, c->r[1]); }
    c->r[1] = 0x6264u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1652f70u;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x3e5e44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_23ca94(c);
}
void f_3e5e5c(Cpu *restrict c) {
    FN_ENTER(0x3e5e5cu);
L_3e5e5c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1652f08u;
    c->r[5] = c->r[1];
    { uint32_t ea = 0x3e5e74u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5e78u; f_427ae4(c);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_3e5f0c; }
    c->r[0] = 0x1652ef0u;
    c->r[1] = 0x9c60u;
    { uint32_t ea = 0x3e5e90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = 0x3e5e98u; f_3cd2a8(c);
    { uint32_t ea = c->r[4] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e5f0c; }
    c->r[0] = 0x1652eccu;
    { uint32_t ea = 0x3e5eb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5eb4u; f_42d620(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e5ed4; }
    c->r[0] = 0x1652eacu;
    c->r[2] = 0x0u;
    { uint32_t ea = 0x3e5ed0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5ed4u; f_42c684(c);
L_3e5ed4:;
    c->r[0] = 0x1652e98u;
    c->r[6] = 0x604u;
    { uint32_t ea = 0x3e5ee4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + c->r[6];
    c->r[14] = 0x3e5eecu; f_42ef98(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = c->r[0] + c->r[6];
    c->r[14] = 0x3e5efcu; f_42f0b8(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[0] + 0x63au; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x63bu; ST8(ea, c->r[1]); }
L_3e5f0c:;
    c->r[0] = 0x1652e68u;
    { uint32_t ea = 0x3e5f18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5f1cu; f_4772c4(c);
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e5f58; }
    c->r[0] = 0x13c8u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e5f58; }
    c->r[0] = c->r[5];
    c->r[1] = 0x1u;
    c->r[2] = 0x411u;
    c->r[14] = 0x3e5f48u; f_483060(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e5f58; }
    c->r[0] = c->r[5];
    c->r[14] = 0x3e5f58u; f_48eb08(c);
L_3e5f58:;
    c->r[0] = 0x1652e10u;
    c->r[1] = 0x6264u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x3e5f6cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] | 0x40000000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e5f98; }
    c->r[0] = 0x1652c48u;
    { uint32_t ea = 0x3e5f90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5f94u; f_75feb4(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e5f98:;
    c->r[0] = c->r[0] & 0xcfffffffu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e5fc4(Cpu *restrict c) {
    FN_ENTER(0x3e5fc4u);
L_3e5fc4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[5] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffe7fu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1652d90u;
    { uint32_t ea = 0x3e5fecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e5ff0u; f_4306c4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_3e6040; }
    c->r[0] = c->r[1] | 0x80u;
    c->r[1] = 0x625bu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1652d58u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    { uint32_t ea = 0x3e6024u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    c->r[1] = c->r[1] & 0xf0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10000000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_3e6040:;
    c->r[1] = c->r[1] | 0x100u;
    c->r[0] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e6060(Cpu *restrict c) {
    FN_ENTER(0x3e6060u);
L_3e6060:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffff9ffu;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1652cf4u;
    { uint32_t ea = 0x3e6088u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e608cu; f_4306c4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_3e60b0; }
    c->r[0] = c->r[1] | 0x200u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_3e60b0:;
    c->r[1] = c->r[1] | 0x400u;
    c->r[0] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e60cc(Cpu *restrict c) {
    FN_ENTER(0x3e60ccu);
L_3e60cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[4] = c->r[2];
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffe7ffu;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1652c88u;
    { uint32_t ea = 0x3e60f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e60f8u; f_4306c4(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_3e6120; }
    c->r[0] = c->r[1] | 0x800u;
    c->r[0] = c->r[0] | 0x20000000u;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_3e6120:;
    c->r[1] = c->r[1] | 0x1000u;
    c->r[0] = c->r[0] + 0x1cu;
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e613c(Cpu *restrict c) {
    FN_ENTER(0x3e613cu);
L_3e613c:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[7] = c->r[13];
    c->r[6] = c->r[1];
    c->r[4] = c->r[0];
    c->r[1] = 0x40u;
    c->r[5] = c->r[2];
    c->r[0] = c->r[7];
    c->r[14] = 0x3e6160u; f_15efdc4(c);
    c->r[0] = c->r[6];
    c->r[1] = c->r[7];
    c->r[2] = 0x28u;
    c->r[14] = 0x3e6170u; f_a0ca9c(c);
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_3e618c; }
    c->r[0] = 0x1653240u;
    { uint32_t ea = 0x3e6184u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6188u; f_da7d50(c);
    c->r[5] = 0x13u;
L_3e618c:;
    c->r[2] = c->r[13];
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[3] = 0x28u;
    c->r[14] = 0x3e61a0u; f_a0c958(c);
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e61ac(Cpu *restrict c) {
    FN_ENTER(0x3e61acu);
L_3e61ac:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[11]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[13] = c->r[13] - 0x8u;
    c->r[3] = c->r[2];
    c->r[2] = c->r[1];
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = 0x11u;
    c->r[14] = 0x3e61ccu; f_9ca404(c);
    c->r[13] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[11] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e61d4(Cpu *restrict c) {
    FN_ENTER(0x3e61d4u);
L_3e61d4:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[0];
    c->r[5] = 0x0u;
    c->r[6] = 0x3b60u;
L_3e61e8:;
    c->r[0] = c->r[4] + c->r[5];
    c->r[14] = 0x3e61f0u; f_a0c640(c);
    c->r[5] = c->r[5] + 0x98u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_3e61e8; }
    c->r[7] = 0x64u;
    c->r[5] = c->r[13];
    c->r[8] = 0x0u;
    c->r[6] = c->r[4];
L_3e620c:;
    c->r[0] = c->r[5];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e6218u; f_15efdc4(c);
    c->r[0] = c->r[6];
    c->r[1] = 0x0u;
    c->r[2] = c->r[5];
    c->r[3] = 0x28u;
    c->r[14] = 0x3e622cu; f_a0c958(c);
    { uint32_t ea = c->r[6] + 0x78u; ST8(ea, c->r[8]); }
    c->r[6] = c->r[6] + 0x98u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_3e620c; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e6248(Cpu *restrict c) {
    FN_ENTER(0x3e6248u);
L_3e6248:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[1];
    c->r[1] = 0x40u;
    c->r[0] = c->r[5];
    c->r[14] = 0x3e6264u; f_15efdc4(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[2] = c->r[5];
    c->r[3] = 0x28u;
    c->r[6] = 0x0u;
    c->r[14] = 0x3e627cu; f_a0c958(c);
    { uint32_t ea = c->r[4] + 0x78u; ST8(ea, c->r[6]); }
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e6288(Cpu *restrict c) {
    FN_ENTER(0x3e6288u);
L_3e6288:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[7] = 0xc4a0u;
    c->r[4] = c->r[0];
    c->r[0] = 0x3ac8u;
    c->r[6] = 0x0u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffff0000u;
    c->r[5] = c->r[4] + c->r[0];
L_3e62a4:;
    c->r[0] = c->r[5] + c->r[6];
    c->r[14] = 0x3e62acu; f_a0dbbc(c);
    c->r[6] = c->r[6] - 0x98u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_NE) { goto L_3e62a4; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e62c0(Cpu *restrict c) {
    FN_ENTER(0x3e62c0u);
L_3e62c0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x80u;
    c->r[5] = c->r[13];
    c->r[4] = c->r[1];
    c->r[6] = c->r[0];
    c->r[1] = 0x40u;
    c->r[0] = c->r[5];
    c->r[14] = 0x3e62e0u; f_15efdc4(c);
    c->r[6] = c->r[6] + 0x78u;
    c->r[7] = 0x64u;
    c->r[8] = c->r[13] + 0x40u;
    c->r[9] = 0x0u;
L_3e62f0:;
    c->r[0] = c->r[5];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e62fcu; f_15efdc4(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e631c; }
    c->r[0] = c->r[6] - 0x78u;
    c->r[1] = c->r[5];
    c->r[2] = 0x28u;
    c->r[14] = 0x3e6318u; f_a0ca9c(c);
    goto L_3e6340;
L_3e631c:;
    c->r[0] = c->r[8];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e6328u; f_15efdc4(c);
    c->r[0] = c->r[6] - 0x78u;
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x28u;
    c->r[14] = 0x3e633cu; f_a0c958(c);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[9]); }
L_3e6340:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x40u;
    c->r[14] = 0x3e6350u; f_5df378(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = 0x20u;
    c->r[14] = 0x3e6360u; f_5df378(c);
    c->r[6] = c->r[6] + 0x98u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_3e62f0; }
    c->r[13] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_3e6374(Cpu *restrict c) {
    FN_ENTER(0x3e6374u);
L_3e6374:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[6] = c->r[13];
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    c->r[1] = 0x40u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e6394u; f_15efdc4(c);
    c->r[7] = 0x64u;
L_3e6398:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[2] = 0x40u;
    c->r[14] = 0x3e63a8u; f_5df2a8(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x13u;
    c->r[2] = c->r[6];
    c->r[3] = 0x28u;
    c->r[14] = 0x3e63bcu; f_a0c958(c);
    c->r[1] = c->r[5] + 0x78u;
    c->r[0] = c->r[4];
    c->r[2] = 0x20u;
    c->r[14] = 0x3e63ccu; f_5df2a8(c);
    c->r[5] = c->r[5] + 0x98u;
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_3e6398; }
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e63e0(Cpu *restrict c) {
    FN_ENTER(0x3e63e0u);
L_3e63e0:;
    c->r[1] = c->r[0] + 0x110u;
    c->r[0] = 0x0u;
    c->r[2] = 0x64u;
L_3e63ec:;
    { uint32_t ea = c->r[1] - 0x98u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[1] + 0x130u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x1u; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { c->r[0] = c->r[0] + 0x1u; }
    c->r[2] = f_subs(c, c->r[2], 0x2u);
    if (COND_NE) { goto L_3e63ec; }
    return;
}
void f_3e6414(Cpu *restrict c) {
    FN_ENTER(0x3e6414u);
L_3e6414:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[1];
    c->r[6] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0x3e642cu; f_a0c93c(c);
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_3e64cc; }
    c->r[5] = c->r[6] + 0x110u;
    c->r[7] = 0x1u;
L_3e6444:;
    { uint32_t ea = c->r[5] - 0x98u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e6478; }
    { uint32_t ea = c->r[5]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e6480; }
    c->r[2] = c->r[7] + 0x1u;
    c->r[1] = c->r[7] + 0x2u;
    c->r[5] = c->r[5] + 0x130u;
    (void)f_subs(c, c->r[2], 0x64u);
    c->r[7] = c->r[1];
    if (COND_CC) { goto L_3e6444; }
    goto L_3e64cc;
L_3e6478:;
    c->r[5] = c->r[5] - 0x98u;
    c->r[7] = c->r[7] - 0x1u;
L_3e6480:;
    c->r[8] = c->r[13];
    c->r[1] = 0x40u;
    c->r[0] = c->r[8];
    c->r[14] = 0x3e6490u; f_15efdc4(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[8];
    c->r[2] = 0x28u;
    c->r[14] = 0x3e64a0u; f_a0ca9c(c);
    c->r[0] = 0x98u;
    c->r[1] = 0x13u;
    c->r[2] = c->r[8];
    c->r[3] = 0x28u;
    { uint32_t r = c->r[7] * c->r[0] + c->r[6]; c->r[0] = r; }
    c->r[14] = 0x3e64b8u; f_a0c958(c);
    c->r[1] = c->r[4] + 0x78u;
    c->r[0] = c->r[5];
    c->r[2] = 0x20u;
    c->r[14] = 0x3e64c8u; f_15efe30(c);
    c->r[0] = 0x1u;
L_3e64cc:;
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e64d4(Cpu *restrict c) {
    FN_ENTER(0x3e64d4u);
L_3e64d4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x54u;
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_3e668c; }
    c->r[0] = 0x3b68u;
    c->r[14] = 0x3e64f4u; f_9af3a0(c);
    c->r[7] = c->r[0];
    c->r[0] = 0x98u;
    c->r[1] = 0x64u;
    c->r[5] = 0x0u;
    c->r[6] = 0x3b60u;
    c->r[4] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_3e6510:;
    c->r[0] = c->r[7] + c->r[5];
    c->r[0] = c->r[0] + 0x8u;
    c->r[14] = 0x3e651cu; f_a0c640(c);
    c->r[5] = c->r[5] + 0x98u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_3e6510; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[4];
    c->r[2] = 0x3b60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[5];
    c->r[14] = 0x3e6540u; f_15efdd0(c);
    c->r[6] = 0x64u;
    c->r[4] = c->r[13] + 0x10u;
    c->r[7] = 0x0u;
L_3e654c:;
    c->r[0] = c->r[4];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e6558u; f_15efdc4(c);
    c->r[0] = c->r[5];
    c->r[1] = 0x0u;
    c->r[2] = c->r[4];
    c->r[3] = 0x28u;
    c->r[14] = 0x3e656cu; f_a0c958(c);
    { uint32_t ea = c->r[5] + 0x78u; ST8(ea, c->r[7]); }
    c->r[5] = c->r[5] + 0x98u;
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_3e654c; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_3e6658; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[7] = c->r[13] + 0x10u;
    c->r[0] = c->r[0] + 0x80u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x165262cu;
    { uint32_t ea = 0x3e65a8u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_3e65a4:;
    c->r[0] = c->r[7];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e65b0u; f_15efdc4(c);
    c->r[0] = (c->r[8] << 4) - c->r[8];
    c->r[1] = c->r[7];
    c->r[2] = 0x28u;
    c->r[0] = c->r[10] + (c->r[0] << 3);
    c->r[6] = c->r[0] + 0x4u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e65ccu; f_a0ca9c(c);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x98u;
    c->r[2] = c->r[7];
    c->r[3] = 0x28u;
    { uint32_t r = c->r[8] * c->r[1] + c->r[0]; c->r[4] = r; }
    c->r[1] = 0x13u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e65ecu; f_a0c958(c);
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1u;
    c->r[2] = 0x9bu;
    c->r[14] = 0x3e65fcu; f_75bc4c(c);
    c->r[4] = c->r[4] + 0x78u;
    c->r[1] = c->r[0];
    c->r[2] = 0x20u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e6610u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = 0x64u;
L_3e6618:;
    c->r[0] = c->r[5] - 0x78u;
    c->r[1] = c->r[6];
    c->r[14] = 0x3e6624u; f_a0d150(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3e663c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = 0x20u;
    c->r[14] = 0x3e663cu; f_15efe30(c);
L_3e663c:;
    c->r[5] = c->r[5] + 0x98u;
    c->r[9] = f_subs(c, c->r[9], 0x1u);
    if (COND_NE) { goto L_3e6618; }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_3e65a4; }
L_3e6658:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x98u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[4] = r; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_3e6684; }
    c->r[5] = c->r[6] - 0x90u;
L_3e6674:;
    c->r[0] = c->r[5] + c->r[4];
    c->r[14] = 0x3e667cu; f_a0dbbc(c);
    c->r[4] = f_subs(c, c->r[4], 0x98u);
    if (COND_NE) { goto L_3e6674; }
L_3e6684:;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e668cu; f_9af3e4(c);
L_3e668c:;
    c->r[13] = c->r[13] + 0x54u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e6698(Cpu *restrict c) {
    FN_ENTER(0x3e6698u);
L_3e6698:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x44u;
    c->r[9] = c->r[0];
    c->r[8] = c->r[13];
    c->r[10] = 0x98u;
    c->r[11] = 0x0u;
    c->r[4] = c->r[9] + 0x78u;
    goto L_3e6724;
L_3e66b8:;
    c->r[0] = c->r[8];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e66c4u; f_15efdc4(c);
    c->r[7] = c->r[6] - 0x78u;
    c->r[1] = c->r[8];
    c->r[2] = 0x28u;
    c->r[0] = c->r[7];
    c->r[14] = 0x3e66d8u; f_a0ca9c(c);
    { uint32_t r = c->r[5] * c->r[10] + c->r[9]; c->r[5] = r; }
    c->r[1] = 0x13u;
    c->r[2] = c->r[8];
    c->r[3] = 0x28u;
    c->r[0] = c->r[5];
    c->r[14] = 0x3e66f0u; f_a0c958(c);
    c->r[0] = c->r[5] + 0x78u;
    c->r[1] = c->r[6];
    c->r[2] = 0x20u;
    c->r[14] = 0x3e6700u; f_15efe30(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x40u;
    c->r[14] = 0x3e670cu; f_15efdc4(c);
    c->r[0] = c->r[7];
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    c->r[3] = 0x28u;
    c->r[14] = 0x3e6720u; f_a0c958(c);
    { uint32_t ea = c->r[6]; ST8(ea, c->r[11]); }
L_3e6724:;
    c->r[5] = ~0x0u;
    c->r[6] = c->r[4];
    c->r[0] = 0x0u;
L_3e6730:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_3e674c; }
    c->r[1] = ~0x0u;
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_3e6758; }
    goto L_3e66b8;
L_3e674c:;
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { c->r[5] = c->r[0]; }
    c->r[1] = c->r[5];
L_3e6758:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[6] = c->r[6] + 0x98u;
    c->r[5] = c->r[1];
    (void)f_subs(c, c->r[0], 0x64u);
    if (COND_CC) { goto L_3e6730; }
    c->r[13] = c->r[13] + 0x44u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e6774(Cpu *restrict c) {
    FN_ENTER(0x3e6774u);
L_3e6774:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0x28u;
    c->r[14] = 0x3e6784u; f_a0c640(c);
    c->r[0] = c->r[4] + 0xc8u;
    c->r[14] = 0x3e678cu; f_a0c640(c);
    c->r[0] = c->r[4] + 0x168u;
    c->r[14] = 0x3e6794u; f_a0c640(c);
    c->r[0] = c->r[4] + 0x208u;
    c->r[14] = 0x3e679cu; f_a0c640(c);
    c->r[0] = c->r[4] + 0x2a8u;
    c->r[14] = 0x3e67a4u; f_a0c640(c);
    c->r[0] = c->r[4] + 0x348u;
    c->r[14] = 0x3e67acu; f_a0c640(c);
    c->r[0] = 0x0u;
    c->r[1] = 0x4u;
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x20u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x21u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x25u; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e67f8(Cpu *restrict c) {
    FN_ENTER(0x3e67f8u);
L_3e67f8:;
    c->r[1] = 0x0u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[2] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x21u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x22u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x23u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x25u; ST8(ea, c->r[1]); }
    return;
}
void f_3e6840(Cpu *restrict c) {
    FN_ENTER(0x3e6840u);
L_3e6840:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = c->r[4] + 0x348u;
    c->r[14] = 0x3e6850u; f_a0dbbc(c);
    c->r[0] = c->r[4] + 0x2a8u;
    c->r[14] = 0x3e6858u; f_a0dbbc(c);
    c->r[0] = c->r[4] + 0x208u;
    c->r[14] = 0x3e6860u; f_a0dbbc(c);
    c->r[0] = c->r[4] + 0x168u;
    c->r[14] = 0x3e6868u; f_a0dbbc(c);
    c->r[0] = c->r[4] + 0xc8u;
    c->r[14] = 0x3e6870u; f_a0dbbc(c);
    c->r[0] = c->r[4] + 0x28u;
    c->r[14] = 0x3e6878u; f_a0dbbc(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e6880(Cpu *restrict c) {
    FN_ENTER(0x3e6880u);
L_3e6880:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_3e69d8; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[5], 0x1u);
    if (COND_EQ) { goto L_3e69e4; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_adds(c, c->r[4], 0x1u);
    if (COND_EQ) { goto L_3e69f0; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_adds(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_3e69fc; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_adds(c, c->r[14], 0x1u);
    if (COND_EQ) { goto L_3e6a08; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_adds(c, c->r[12], 0x1u);
    if (COND_EQ) { goto L_3e6a14; }
    (void)f_subs(c, c->r[2], 0x4u);
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    if (COND_CC) { c->r[3] = ~0x0u; }
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_LS) { c->r[2] = ~0x0u; }
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_LS) { goto L_3e690c; }
    (void)f_subs(c, c->r[5], c->r[2]);
    c->r[7] = 0x0u;
    if (COND_CC) { c->r[7] = 0x1u; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { c->r[6] = 0x1u; }
    { uint32_t r = c->r[6] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    if (COND_NE) { c->r[2] = c->r[5]; }
    if (COND_NE) { c->r[3] = 0x1u; }
L_3e690c:;
    (void)f_subs(c, c->r[4], 0x4u);
    if (COND_CC) { goto L_3e6938; }
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[6] = 0x0u;
    c->r[5] = 0x0u;
    if (COND_CC) { c->r[6] = 0x1u; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { c->r[5] = 0x1u; }
    { uint32_t r = c->r[5] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_NE) { c->r[2] = c->r[4]; }
    if (COND_NE) { c->r[3] = 0x2u; }
L_3e6938:;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CC) { goto L_3e6964; }
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[5] = 0x0u;
    c->r[4] = 0x0u;
    if (COND_CC) { c->r[5] = 0x1u; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { c->r[4] = 0x1u; }
    { uint32_t r = c->r[4] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    if (COND_NE) { c->r[2] = c->r[1]; }
    if (COND_NE) { c->r[3] = 0x3u; }
L_3e6964:;
    (void)f_subs(c, c->r[14], 0x4u);
    if (COND_CC) { goto L_3e6990; }
    (void)f_subs(c, c->r[14], c->r[2]);
    c->r[4] = 0x0u;
    c->r[1] = 0x0u;
    if (COND_CC) { c->r[4] = 0x1u; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    { uint32_t r = c->r[1] | c->r[4]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { c->r[2] = c->r[14]; }
    if (COND_NE) { c->r[3] = 0x4u; }
L_3e6990:;
    (void)f_subs(c, c->r[12], 0x4u);
    if (COND_CC) { goto L_3e69ac; }
    c->r[1] = 0x5u;
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_3e69b8; }
    (void)f_subs(c, c->r[12], c->r[2]);
    if (COND_CC) { goto L_3e69b8; }
L_3e69ac:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = c->r[3];
    if (COND_LT) { goto L_3e69d0; }
L_3e69b8:;
    c->r[2] = c->r[0] + (c->r[1] << 2);
    c->r[3] = ~0x0u;
    c->r[0] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[3]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20u; ST8(ea, c->r[2]); }
L_3e69d0:;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e69d8:;
    c->r[1] = 0x0u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e69e4:;
    c->r[1] = 0x1u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e69f0:;
    c->r[1] = 0x2u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e69fc:;
    c->r[1] = 0x3u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e6a08:;
    c->r[1] = 0x4u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
L_3e6a14:;
    c->r[1] = 0x5u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e6a20(Cpu *restrict c) {
    FN_ENTER(0x3e6a20u);
L_3e6a20:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[3];
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_3e6a88; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_3e6a88; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_3e6a88; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x3u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_3e6a88; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x4u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_EQ) { goto L_3e6a88; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x5u;
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_NE) { goto L_3e6ab4; }
L_3e6a88:;
    c->r[1] = c->r[0] + c->r[3];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD8(ea); c->r[1] = ea; c->r[5] = v; }
    c->r[7] = c->r[5] & 0xcu;
    (void)f_subs(c, c->r[7], 0x8u);
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    c->r[3] = c->r[3] + (c->r[3] << 2);
    c->r[0] = c->r[0] + (c->r[3] << 5);
    { uint32_t ea = c->r[0] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[5] | 0x4u;
    { uint32_t ea = c->r[1]; ST8(ea, c->r[0]); }
L_3e6ab4:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[5] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e6ab8(Cpu *restrict c) {
    FN_ENTER(0x3e6ab8u);
L_3e6ab8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x10cu;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[6] = c->r[4] + c->r[7];
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD8(ea); c->r[6] = ea; c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_3e6ce8; }
    c->r[1] = c->r[4] + (c->r[7] << 2);
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x3u);
    if (COND_HI) { goto L_3e6ce0; }
    c->r[8] = 0x0u;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e6c60; }
    c->r[0] = 0x165227cu;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x3e6b04u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6b08u; f_47617c(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_3e6c08; }
L_3e6b14:;
    c->r[0] = 0x16528a4u;
    { uint32_t ea = 0x3e6b20u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6b24u; f_da84f0(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e6c4c; }
    c->r[1] = 0x128u;
    c->r[11] = c->r[13] + 0x8u;
    { uint32_t r = c->r[5] * c->r[1] + c->r[0]; c->r[8] = r; }
    c->r[0] = 0x3030u;
    c->r[9] = c->r[11] + 0x4u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST8(ea, c->r[0]); }
    c->r[0] = 0x3034u;
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0x3e6b58u; f_a0c684(c);
    c->r[0] = 0x30acu;
    c->r[2] = 0x43u;
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = c->r[11] + 0x7cu;
    c->r[14] = 0x3e6b6cu; f_15efdd0(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e6c54; }
    c->r[8] = c->r[13] + 0xc8u;
    c->r[1] = 0x40u;
    c->r[0] = c->r[8];
    c->r[14] = 0x3e6b88u; f_15efdc4(c);
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = 0x28u;
    c->r[14] = 0x3e6b98u; f_a0ca9c(c);
    c->r[0] = 0x1652820u;
    { uint32_t ea = 0x3e6ba4u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6ba8u; f_da7d50(c);
    c->r[0] = c->r[7] + (c->r[7] << 2);
    c->r[1] = 0x13u;
    c->r[2] = c->r[8];
    c->r[3] = 0x28u;
    c->r[7] = c->r[4] + (c->r[0] << 5);
    c->r[0] = c->r[7] + 0x28u;
    c->r[14] = 0x3e6bc4u; f_a0c958(c);
    c->r[0] = 0x534u;
    c->r[2] = 0x20u;
    c->r[1] = c->r[10] + c->r[0];
    c->r[0] = c->r[7] + 0xa0u;
    c->r[14] = 0x3e6bd8u; f_15efe30(c);
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6becu; f_da7d50(c);
    c->r[8] = 0x0u;
    (void)f_subs(c, c->r[0], 0x13u);
    if (COND_NE) { goto L_3e6c58; }
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x40u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    goto L_3e6c58;
L_3e6c08:;
    c->r[0] = 0x1652168u;
    { uint32_t ea = 0x3e6c14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[5] << 2);
    { uint32_t ea = c->r[0] + 0xa90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x5u); }
    if (COND_EQ) { goto L_3e6c60; }
    c->r[0] = 0x1652148u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x3e6c38u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6c3cu; f_476140(c);
    c->r[10] = c->r[0];
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_3e6b14; }
    goto L_3e6c60;
L_3e6c4c:;
    c->r[8] = 0x1u;
    goto L_3e6c60;
L_3e6c54:;
    c->r[8] = 0x1u;
L_3e6c58:;
    c->r[0] = c->r[9];
    c->r[14] = 0x3e6c60u; f_a0dbbc(c);
L_3e6c60:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xcu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e6cd8; }
    c->r[0] = 0x1652104u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x3e6c7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6c80u; f_47617c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3e6ca4; }
    c->r[0] = 0x16520e8u;
    c->r[1] = c->r[5];
    { uint32_t ea = 0x3e6c98u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6c9cu; f_476140(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e6d08; }
L_3e6ca4:;
    c->r[0] = 0x16520c8u;
    c->r[1] = 0x6cu;
    { uint32_t ea = 0x3e6cb4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e6cb8u; f_427b3c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e6cc8; }
    c->r[1] = c->r[5];
    c->r[14] = 0x3e6cc8u; f_41f0b0(c);
L_3e6cc8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8u;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
L_3e6cd8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_3e6d14; }
L_3e6ce0:;
    c->r[0] = c->r[0] & 0xfeu;
L_3e6ce4:;
    { uint32_t ea = c->r[6]; ST8(ea, c->r[0]); }
L_3e6ce8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { c->r[0] = 0x0u; }
    { uint32_t ea = c->r[4]; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x10cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3e6d08:;
    { uint32_t ea = c->r[6]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_3e6ce0; }
L_3e6d14:;
    c->r[1] = c->r[0] & 0x6u;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_3e6ce8; }
    c->r[0] = c->r[0] & 0x7eu;
    c->r[0] = c->r[0] | 0x80u;
    goto L_3e6ce4;
}
void f_3e6d4c(Cpu *restrict c) {
    FN_ENTER(0x3e6d4cu);
L_3e6d4c:;
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_HI) { goto L_3e6e20; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_3e6d70; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_3e6df0; }
L_3e6d70:;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_3e6d88; }
    { uint32_t ea = c->r[0] + 0x21u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_3e6df8; }
L_3e6d88:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_3e6da0; }
    { uint32_t ea = c->r[0] + 0x22u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_3e6e00; }
L_3e6da0:;
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_3e6db8; }
    { uint32_t ea = c->r[0] + 0x23u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_3e6e08; }
L_3e6db8:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_3e6dd0; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_3e6e10; }
L_3e6dd0:;
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_3e6e20; }
    { uint32_t ea = c->r[0] + 0x25u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_3e6e20; }
    c->r[1] = 0x5u;
    goto L_3e6e14;
L_3e6df0:;
    c->r[1] = 0x0u;
    goto L_3e6e14;
L_3e6df8:;
    c->r[1] = 0x1u;
    goto L_3e6e14;
L_3e6e00:;
    c->r[1] = 0x2u;
    goto L_3e6e14;
L_3e6e08:;
    c->r[1] = 0x3u;
    goto L_3e6e14;
L_3e6e10:;
    c->r[1] = 0x4u;
L_3e6e14:;
    c->r[1] = c->r[1] + (c->r[1] << 2);
    c->r[0] = c->r[0] + (c->r[1] << 5);
    c->r[2] = c->r[0] + 0x28u;
L_3e6e20:;
    c->r[0] = c->r[2];
    return;
}
void f_3e6e28(Cpu *restrict c) {
    FN_ENTER(0x3e6e28u);
L_3e6e28:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x8cu;
    c->r[8] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[8] + 0x8u;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e6e58u; f_3e76e4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xcu;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_3e6e84; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    goto L_3e6e90;
L_3e6e84:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e6e8cu; f_3e76e4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e6e90:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0x10u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_3e6eb8; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    goto L_3e6ec4;
L_3e6eb8:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e6ec0u; f_3e76e4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e6ec4:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0x14u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_3e6eec; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    goto L_3e6ef8;
L_3e6eec:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e6ef4u; f_3e76e4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e6ef8:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0x18u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_3e6f20; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    goto L_3e6f2c;
L_3e6f20:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e6f28u; f_3e76e4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e6f2c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0x1cu;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_3e6f54; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    goto L_3e6f60;
L_3e6f54:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e6f5cu; f_3e76e4(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
L_3e6f60:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_3e7030; }
    c->r[1] = c->r[1] - c->r[0];
    c->r[2] = ~0x0u;
    c->r[2] = c->r[2] + (uint32_t)((int32_t)c->r[1] >> 2);
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_3e7030; }
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 2);
    c->r[12] = c->r[0] - 0x4u;
    c->r[7] = 0x0u;
    c->r[3] = c->r[1] - 0x2u;
L_3e6f90:;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[2] - c->r[7];
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_3e6fb0; }
    c->r[1] = c->r[2];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { goto L_3e6fd0; }
    goto L_3e7020;
L_3e6fb0:;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[5]); } }
    if (COND_CS) { { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[1]); } }
    if (COND_CC) { c->r[5] = c->r[1]; }
    c->r[1] = c->r[3];
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_3e7020; }
L_3e6fd0:;
    c->r[4] = c->r[12] + (c->r[1] << 2);
    c->r[6] = c->r[1] - 0x1u;
L_3e6fd8:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { goto L_3e6fec; }
    c->r[5] = c->r[1];
    goto L_3e6ff4;
L_3e6fec:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_3e6ff4:;
    { uint32_t ea = c->r[4] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[5]);
    if (COND_CS) { { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[5]); } }
    if (COND_CS) { { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); } }
    if (COND_CC) { c->r[5] = c->r[1]; }
    c->r[1] = c->r[6] - 0x2u;
    c->r[6] = c->r[6] - 0x1u;
    c->r[4] = c->r[4] - 0x8u;
    (void)f_subs(c, c->r[6], c->r[7]);
    c->r[6] = c->r[1];
    if (COND_HI) { goto L_3e6fd8; }
L_3e7020:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_NE) { goto L_3e6f90; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e7030:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_3e7098; }
    c->r[1] = c->r[1] - c->r[0];
    c->r[7] = 0x0u;
    c->r[2] = c->r[13] + 0x20u;
    c->r[3] = 0x0u;
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 2);
L_3e7070:;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_HI) { goto L_3e708c; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x5u);
    if (COND_CS) { { uint32_t ea = c->r[2] + (c->r[7] << 2); ST32(ea, c->r[3]); } }
    if (COND_CS) { c->r[7] = c->r[7] + 0x1u; }
L_3e708c:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { goto L_3e7070; }
L_3e7098:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = f_subs(c, c->r[7], c->r[1]);
    if (COND_LS) { c->r[2] = c->r[10]; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_3e71dc; }
    c->r[0] = c->r[8] + 0xa0u;
    c->r[11] = c->r[8] + 0xc0u;
    c->r[10] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x16522f0u;
    { uint32_t ea = 0x3e70d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_3e70d4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_CS) { goto L_3e71c0; }
    c->r[1] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] - c->r[1];
    c->r[2] = (uint32_t)((int32_t)c->r[2] >> 2);
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LS) { goto L_3e7214; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[4] = 0x0u;
L_3e7114:;
    c->r[0] = c->r[11] + (c->r[4] << 2);
    { uint32_t ea = c->r[0] - 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_3e71b0; }
    c->r[0] = c->r[11] + c->r[4];
    { uint32_t ea = c->r[0] - 0xa0u; uint32_t v = (uint32_t)(int32_t)(int8_t)LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_3e71b0; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CS) { goto L_3e71c0; }
    c->r[6] = c->r[13] + 0x48u;
    c->r[1] = 0x40u;
    c->r[0] = c->r[6];
    c->r[14] = 0x3e7150u; f_15efdc4(c);
    c->r[0] = c->r[8] - 0x78u;
    c->r[1] = c->r[6];
    c->r[2] = 0x28u;
    c->r[14] = 0x3e7160u; f_a0ca9c(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e716cu; f_da7d50(c);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + (c->r[10] << 2);
    c->r[2] = c->r[6];
    c->r[3] = 0x28u;
    c->r[5] = c->r[1] + (c->r[0] << 5);
    c->r[1] = 0x13u;
    c->r[0] = c->r[5];
    c->r[14] = 0x3e718cu; f_a0c958(c);
    c->r[1] = c->r[8];
    c->r[0] = c->r[5] + 0x78u;
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[5] + 0x98u; ST32(ea, c->r[0]); ST32(ea + 4, c->r[1]); }
L_3e71b0:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[8] = c->r[8] + 0xa0u;
    (void)f_subs(c, c->r[4], 0x6u);
    if (COND_CC) { goto L_3e7114; }
L_3e71c0:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_3e70d4; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_3e71dc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e7208; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { c->r[2] = c->r[1] - 0x4u; }
    if (COND_NE) { c->r[3] = ~0x3u; }
    if (COND_NE) { c->r[2] = c->r[2] - c->r[0]; }
    if (COND_NE) { c->r[2] = c->r[3] & ~c->r[2]; }
    if (COND_NE) { c->r[1] = c->r[1] + c->r[2]; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); } }
    c->r[14] = 0x3e7208u; f_9af3c4(c);
L_3e7208:;
    c->r[0] = c->r[10];
    c->r[13] = c->r[13] + 0x8cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3e7214:;
    c->r[0] = c->r[13] + 0x3cu;
    c->r[14] = 0x3e721cu; f_15eff14(c);
    rt_udf(c, 0x3e721cu);
}
void f_3e7220(Cpu *restrict c) {
    FN_ENTER(0x3e7220u);
L_3e7220:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x5cu;
    c->r[5] = c->r[1];
    c->r[4] = c->r[0];
    c->r[6] = 0xffffu;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_3e733c; }
    { uint32_t ea = c->r[5] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[8] = c->r[13] + 0x20u;
    c->r[1] = c->r[5] + 0x55u;
    c->r[2] = 0x35u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x3e7258u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0xf6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD16(ea); c->r[7] = v; }
    c->r[1] = c->r[8] + 0x13u;
    c->r[2] = 0x22u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x97u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x96u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x95u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x8bu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x93u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x91u; uint32_t v = LD8(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[5] + 0x94u; uint32_t v = LD8(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x8eu; uint32_t v = LD16(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x8cu; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[14] = 0x3e72acu; f_15efe30(c);
    { uint32_t ea = c->r[4] + 0x28u; ST16(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x2eu; ST8(ea, c->r[9]); }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2fu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x31u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2du; ST8(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x33u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x2u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x0u; }
    (void)f_subs(c, c->r[7], c->r[6]);
    { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[1]); }
    if (COND_EQ) { goto L_3e732c; }
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] + (c->r[7] >> 15);
    c->r[7] = c->r[7] & 0x7fffu;
    c->r[6] = c->r[7];
L_3e732c:;
    { uint32_t ea = c->r[4] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[6]); }
    c->r[13] = c->r[13] + 0x5cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3e733c:;
    c->r[0] = 0x0u;
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[4]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x22u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x23u; ST8(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x24u; ST16(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x26u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; ST16(ea, c->r[1]); }
    c->r[1] = 0x3e7u;
    { uint32_t ea = c->r[4] + 0x2au; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x32u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2eu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; ST8(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x5cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_3e7384(Cpu *restrict c) {
    FN_ENTER(0x3e7384u);
L_3e7384:;
    { uint32_t ea = c->r[13] - 24u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[11]); ST32(ea + 20u, c->r[14]); c->r[13] = c->r[13] - 24u; }
    c->r[0] = 0x16519e8u;
    { uint32_t ea = 0x3e7394u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e7444; }
    c->r[0] = 0x165201cu;
    { uint32_t ea = 0x3e73a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e73acu; f_da7d68(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e7444; }
    c->r[0] = 0x16519acu;
    c->r[1] = 0x1u;
    c->r[2] = 0x1u;
    c->r[3] = 0x0u;
    c->r[5] = 0x0u;
    { uint32_t ea = 0x3e73d0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e73d4u; f_431460(c);
    c->r[4] = 0xe100u;
    c->r[1] = 0x0u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x5f50000u;
    c->r[0] = c->r[4];
    c->r[14] = 0x3e73e8u; f_15efdb8(c);
    c->r[0] = 0x1651988u;
    { uint32_t ea = 0x3e73f4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x1651fc8u;
    { uint32_t ea = 0x3e73fcu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
L_3e73f8:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0x3e7408u; rt_dispatch(c);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e7410u; f_da7d68(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e7434; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = c->r[5] + 0x1u;
    c->r[14] = 0x3e7428u; f_15efdb8(c);
    (void)f_subs(c, c->r[5], 0x63u);
    if (COND_LS) { goto L_3e73f8; }
    goto L_3e7444;
L_3e7434:;
    c->r[0] = 0x1653d9cu;
    c->r[1] = 0x0u;
    { uint32_t ea = 0x3e7444u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_3e7444:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 24u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[11] = LD32(ea + 16u); c->pc = LD32(ea + 20u); } return;
}
void f_3e7460(Cpu *restrict c) {
    FN_ENTER(0x3e7460u);
L_3e7460:;
    __attribute__((musttail)) return f_d2d978(c);
}
void f_3e7464(Cpu *restrict c) {
    FN_ENTER(0x3e7464u);
L_3e7464:;
    return;
}
void f_3e7468(Cpu *restrict c) {
    FN_ENTER(0x3e7468u);
L_3e7468:;
    return;
}
void f_3e746c(Cpu *restrict c) {
    FN_ENTER(0x3e746cu);
L_3e746c:;
    return;
}
void f_3e7470(Cpu *restrict c) {
    FN_ENTER(0x3e7470u);
L_3e7470:;
    return;
}
void f_3e7474(Cpu *restrict c) {
    FN_ENTER(0x3e7474u);
L_3e7474:;
    return;
}
void f_3e7478(Cpu *restrict c) {
    FN_ENTER(0x3e7478u);
L_3e7478:;
    return;
}
void f_3e747c(Cpu *restrict c) {
    FN_ENTER(0x3e747cu);
L_3e747c:;
    return;
}
void f_3e7480(Cpu *restrict c) {
    FN_ENTER(0x3e7480u);
L_3e7480:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_3e7484(Cpu *restrict c) {
    FN_ENTER(0x3e7484u);
L_3e7484:;
    c->r[1] = 0x1653da0u;
    { uint32_t ea = 0x3e7490u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_3e749c(Cpu *restrict c) {
    FN_ENTER(0x3e749cu);
L_3e749c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1653d80u;
    { uint32_t ea = 0x3e74b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x1653d54u;
    { uint32_t ea = 0x3e74c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e74c0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e74dc(Cpu *restrict c) {
    FN_ENTER(0x3e74dcu);
L_3e74dc:;
    return;
}
void f_3e74e0(Cpu *restrict c) {
    FN_ENTER(0x3e74e0u);
L_3e74e0:;
    c->r[0] = 0x1653d28u;
    { uint32_t ea = 0x3e74ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_3e74f0(Cpu *restrict c) {
    FN_ENTER(0x3e74f0u);
L_3e74f0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_3e74f4(Cpu *restrict c) {
    FN_ENTER(0x3e74f4u);
L_3e74f4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1653d2cu;
    { uint32_t ea = 0x3e7508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7514u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x3e751cu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e7568; }
L_3e7528:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_3e7528; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_3e7560; }
    c->r[0] = 0x1651634u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x3e7554u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x3e7560u; rt_dispatch(c);
L_3e7560:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_3e7568:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x3e7574u; f_3e7644(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7584(Cpu *restrict c) {
    FN_ENTER(0x3e7584u);
L_3e7584:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x1653c9cu;
    { uint32_t ea = 0x3e7598u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e75a4u; f_bfc268(c);
    c->r[0] = c->r[4] + 0x2cu;
    c->r[14] = 0x3e75acu; f_15f004c(c);
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e75f8; }
L_3e75b8:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_3e75b8; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_3e75f0; }
    c->r[0] = 0x16515a4u;
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x3e75e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x3e75f0u; rt_dispatch(c);
L_3e75f0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
L_3e75f8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0x4u;
    c->r[14] = 0x3e7604u; f_3e7644(c);
    c->r[0] = 0x1653c0cu;
    { uint32_t ea = 0x3e7610u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e7610u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7630(Cpu *restrict c) {
    FN_ENTER(0x3e7630u);
L_3e7630:;
    __attribute__((musttail)) return f_9af55c(c);
}
void f_3e7634(Cpu *restrict c) {
    FN_ENTER(0x3e7634u);
L_3e7634:;
    c->r[0] = 0x1653bdcu;
    { uint32_t ea = 0x3e7640u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_3e7644(Cpu *restrict c) {
    FN_ENTER(0x3e7644u);
L_3e7644:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x3e7664u; f_3e7644(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->r[14] = 0x3e7670u; f_3e7644(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_3e76bc; }
L_3e767c:;
    c->r[1] = ldrex32(c, c->r[0]);
    c->r[2] = c->r[1] - 0x1u;
    c->r[3] = strex32(c, c->r[0], c->r[2]);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_3e767c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_3e76b4; }
    c->r[0] = 0x16514e0u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0x3e76a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2]; c->r[14] = 0x3e76b4u; rt_dispatch(c);
L_3e76b4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
L_3e76bc:;
    c->r[0] = 0x1651d84u;
    { uint32_t ea = 0x3e76c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e76e4(Cpu *restrict c) {
    FN_ENTER(0x3e76e4u);
L_3e76e4:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[5] = c->r[0];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] - c->r[9];
    c->r[0] = 0x1u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[6] >> 2);
    (void)f_subs(c, c->r[0], 0x40000000u);
    if (COND_CS) { goto L_3e77a8; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = ~0xc0000000u;
    c->r[1] = c->r[1] - c->r[9];
    c->r[2] = (uint32_t)((int32_t)c->r[1] >> 2);
    (void)f_adds(c, c->r[2], 0xe0000002u);
    if (COND_HI) { goto L_3e7740; }
    c->r[4] = (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_CC) { c->r[4] = c->r[0]; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_3e779c; }
    (void)f_subs(c, c->r[4], 0x40000000u);
    if (COND_CS) { goto L_3e77b0; }
L_3e7740:;
    c->r[0] = (c->r[4] << 2);
    c->r[14] = 0x3e7748u; f_9af37c(c);
    c->r[7] = c->r[0];
L_3e774c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[6] >> 2);
    c->r[2] = c->r[7];
    c->r[4] = c->r[7] + (c->r[4] << 2);
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); c->r[2] = ea; }
    c->r[8] = c->r[2] + 0x4u;
    if (COND_LT) { goto L_3e777c; }
    c->r[0] = c->r[7];
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[14] = 0x3e777cu; f_15efdd0(c);
L_3e777c:;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_3e7798; }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_9af3c4(c);
L_3e7798:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
L_3e779c:;
    c->r[4] = 0x0u;
    c->r[7] = 0x0u;
    goto L_3e774c;
L_3e77a8:;
    c->r[0] = c->r[5];
    c->r[14] = 0x3e77b0u; f_15eff5c(c);
L_3e77b0:;
    c->r[14] = 0x3e77b4u; f_15eff68(c);
    __attribute__((musttail)) return f_3e77b4(c);
}
void f_3e77b4(Cpu *restrict c) {
    FN_ENTER(0x3e77b4u);
L_3e77b4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1672f48u;
    c->r[4] = 0x0u;
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[3] = 0x1u;
    c->r[5] = 0x3e77d8u + c->r[0];
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
    c->r[14] = 0x3e7820u; f_15efda0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xffu;
    c->r[1] = 0xffu;
    c->r[2] = 0xffu;
    c->r[3] = 0xffu;
    c->r[14] = 0x3e7838u; f_15efda0(c);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0x3e7850u; f_15efda0(c);
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
    c->r[1] = 0x1653988u;
    c->r[0] = 0x165395cu;
    c->r[3] = 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x3e78b0u + c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x1371627u;
    { uint32_t ea = 0x3e78b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3e78bcu + c->r[1];
    c->r[14] = 0x3e78bcu; f_9aedcc(c);
    c->r[1] = 0x1653964u;
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0x3e78d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x1653930u;
    c->r[1] = 0x1371612u;
    { uint32_t ea = 0x3e78ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x3e78f0u + c->r[1];
    c->r[2] = c->r[0];
    c->r[14] = 0x3e78f4u; f_9aedcc(c);
    c->r[1] = 0x1653940u;
    { uint32_t ea = 0x3e7900u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_3e792c(Cpu *restrict c) {
    FN_ENTER(0x3e792cu);
L_3e792c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653908u;
    { uint32_t ea = 0x3e793cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7940u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0xccu;
    c->pc = c->r[4]; c->r[14] = 0x3e7958u; rt_dispatch(c);
    c->r[14] = 0x3e795cu; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16538d8u;
    { uint32_t ea = 0x3e7970u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7980(Cpu *restrict c) {
    FN_ENTER(0x3e7980u);
L_3e7980:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16538bcu;
    { uint32_t ea = 0x3e7990u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7994u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e79acu; rt_dispatch(c);
    c->r[14] = 0x3e79b0u; f_bfbf4c(c);
    c->r[1] = 0x1653894u;
    { uint32_t ea = 0x3e79bcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e79cc(Cpu *restrict c) {
    FN_ENTER(0x3e79ccu);
L_3e79cc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1653868u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e79e4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e79e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7a08(Cpu *restrict c) {
    FN_ENTER(0x3e7a08u);
L_3e7a08:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x165383cu;
    { uint32_t ea = 0x3e7a18u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7a1cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x78u;
    c->pc = c->r[4]; c->r[14] = 0x3e7a34u; rt_dispatch(c);
    c->r[14] = 0x3e7a38u; f_bfba6c(c);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x165380cu;
    { uint32_t ea = 0x3e7a4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7a5c(Cpu *restrict c) {
    FN_ENTER(0x3e7a5cu);
L_3e7a5c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16537f0u;
    { uint32_t ea = 0x3e7a6cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7a70u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7a88u; rt_dispatch(c);
    c->r[14] = 0x3e7a8cu; f_bfbf4c(c);
    c->r[1] = 0x16537c8u;
    { uint32_t ea = 0x3e7a98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7aa8(Cpu *restrict c) {
    FN_ENTER(0x3e7aa8u);
L_3e7aa8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x165379cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e7ac0u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e7ac4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7ae4(Cpu *restrict c) {
    FN_ENTER(0x3e7ae4u);
L_3e7ae4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653770u;
    { uint32_t ea = 0x3e7af4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7af8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e7b10u; rt_dispatch(c);
    c->r[14] = 0x3e7b14u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1653738u;
    { uint32_t ea = 0x3e7b30u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7b64(Cpu *restrict c) {
    FN_ENTER(0x3e7b64u);
L_3e7b64:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16536f8u;
    { uint32_t ea = 0x3e7b74u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7b78u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7b90u; rt_dispatch(c);
    c->r[14] = 0x3e7b94u; f_bfbf4c(c);
    c->r[1] = 0x16536d0u;
    { uint32_t ea = 0x3e7ba0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7bb0(Cpu *restrict c) {
    FN_ENTER(0x3e7bb0u);
L_3e7bb0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16536a4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e7bc8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e7bccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7bec(Cpu *restrict c) {
    FN_ENTER(0x3e7becu);
L_3e7bec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653678u;
    { uint32_t ea = 0x3e7bfcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7c00u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7c18u; rt_dispatch(c);
    c->r[14] = 0x3e7c1cu; f_bfba6c(c);
    c->r[2] = 0x1653640u;
    c->r[1] = 0x0u;
    c->r[3] = ~0x0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x3e7c38u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[3]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7c74(Cpu *restrict c) {
    FN_ENTER(0x3e7c74u);
L_3e7c74:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16535f8u;
    { uint32_t ea = 0x3e7c84u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7c88u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7ca0u; rt_dispatch(c);
    c->r[14] = 0x3e7ca4u; f_bfbf4c(c);
    c->r[1] = 0x16535d0u;
    { uint32_t ea = 0x3e7cb0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7cc0(Cpu *restrict c) {
    FN_ENTER(0x3e7cc0u);
L_3e7cc0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x16535a4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e7cd8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e7cdcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7cfc(Cpu *restrict c) {
    FN_ENTER(0x3e7cfcu);
L_3e7cfc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653578u;
    { uint32_t ea = 0x3e7d0cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7d10u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e7d28u; rt_dispatch(c);
    c->r[14] = 0x3e7d2cu; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1653540u;
    { uint32_t ea = 0x3e7d48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x10u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7d94(Cpu *restrict c) {
    FN_ENTER(0x3e7d94u);
L_3e7d94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16534e8u;
    { uint32_t ea = 0x3e7da4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7da8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7dc0u; rt_dispatch(c);
    c->r[14] = 0x3e7dc4u; f_bfbf4c(c);
    c->r[1] = 0x16534c0u;
    { uint32_t ea = 0x3e7dd0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7de0(Cpu *restrict c) {
    FN_ENTER(0x3e7de0u);
L_3e7de0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1653494u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e7df8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e7dfcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7e1c(Cpu *restrict c) {
    FN_ENTER(0x3e7e1cu);
L_3e7e1c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653468u;
    { uint32_t ea = 0x3e7e2cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7e30u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e7e48u; rt_dispatch(c);
    c->r[14] = 0x3e7e4cu; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1653430u;
    { uint32_t ea = 0x3e7e68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7e9c(Cpu *restrict c) {
    FN_ENTER(0x3e7e9cu);
L_3e7e9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16533f0u;
    { uint32_t ea = 0x3e7eacu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7eb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7ec8u; rt_dispatch(c);
    c->r[14] = 0x3e7eccu; f_bfbf4c(c);
    c->r[1] = 0x16533c8u;
    { uint32_t ea = 0x3e7ed8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7ee8(Cpu *restrict c) {
    FN_ENTER(0x3e7ee8u);
L_3e7ee8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x165339cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e7f00u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e7f04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e7f24(Cpu *restrict c) {
    FN_ENTER(0x3e7f24u);
L_3e7f24:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653370u;
    { uint32_t ea = 0x3e7f34u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7f38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e7f50u; rt_dispatch(c);
    c->r[14] = 0x3e7f54u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1653338u;
    { uint32_t ea = 0x3e7f70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7fb0(Cpu *restrict c) {
    FN_ENTER(0x3e7fb0u);
L_3e7fb0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16532ecu;
    { uint32_t ea = 0x3e7fc0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e7fc4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e7fdcu; rt_dispatch(c);
    c->r[14] = 0x3e7fe0u; f_bfbf4c(c);
    c->r[1] = 0x16532c4u;
    { uint32_t ea = 0x3e7fecu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e7ffc(Cpu *restrict c) {
    FN_ENTER(0x3e7ffcu);
L_3e7ffc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1653298u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e8014u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8018u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8038(Cpu *restrict c) {
    FN_ENTER(0x3e8038u);
L_3e8038:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x165326cu;
    { uint32_t ea = 0x3e8048u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e804cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e8064u; rt_dispatch(c);
    c->r[14] = 0x3e8068u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1653234u;
    { uint32_t ea = 0x3e8084u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    c->r[1] = 0x7fu;
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e80bc(Cpu *restrict c) {
    FN_ENTER(0x3e80bcu);
L_3e80bc:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16531f0u;
    { uint32_t ea = 0x3e80ccu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e80d0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e80e8u; rt_dispatch(c);
    c->r[14] = 0x3e80ecu; f_bfbf4c(c);
    c->r[1] = 0x16531c8u;
    { uint32_t ea = 0x3e80f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8108(Cpu *restrict c) {
    FN_ENTER(0x3e8108u);
L_3e8108:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x165319cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e8120u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8124u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8144(Cpu *restrict c) {
    FN_ENTER(0x3e8144u);
L_3e8144:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1653170u;
    { uint32_t ea = 0x3e8154u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8158u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x30u;
    c->pc = c->r[4]; c->r[14] = 0x3e8170u; rt_dispatch(c);
    c->r[14] = 0x3e8174u; f_bfba6c(c);
    c->r[2] = 0x1653138u;
    c->r[1] = 0x0u;
    c->r[3] = ~0x0u;
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x3e8190u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x8u; ST8(ea, c->r[3]); c->r[4] = ea; }
    { uint32_t ea = c->r[4] + 0x3u; ST8(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2u; ST8(ea, c->r[2]); }
    c->r[2] = 0xffffu;
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[2]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[0] + 0x2du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x29u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x25u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x21u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1du; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x19u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x15u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2cu; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x28u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x24u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x20u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x1cu; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x18u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x14u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[2] + 0x10u; ST8(ea, c->r[1]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8260(Cpu *restrict c) {
    FN_ENTER(0x3e8260u);
L_3e8260:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x165305cu;
    { uint32_t ea = 0x3e8270u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8274u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e828cu; rt_dispatch(c);
    c->r[14] = 0x3e8290u; f_bfbf4c(c);
    c->r[1] = 0x1653034u;
    { uint32_t ea = 0x3e829cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e82ac(Cpu *restrict c) {
    FN_ENTER(0x3e82acu);
L_3e82ac:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1653008u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e82c4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e82c8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e82e8(Cpu *restrict c) {
    FN_ENTER(0x3e82e8u);
L_3e82e8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652fdcu;
    { uint32_t ea = 0x3e82f8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e82fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[4]; c->r[14] = 0x3e8314u; rt_dispatch(c);
    c->r[14] = 0x3e8318u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1652fa4u;
    { uint32_t ea = 0x3e8334u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = 0x7fu;
    { uint32_t ea = c->r[0] + 0x12u; ST8(ea, c->r[3]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x17u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x13u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8394(Cpu *restrict c) {
    FN_ENTER(0x3e8394u);
L_3e8394:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652f38u;
    { uint32_t ea = 0x3e83a4u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e83a8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e83c0u; rt_dispatch(c);
    c->r[14] = 0x3e83c4u; f_bfbf4c(c);
    c->r[1] = 0x1652f10u;
    { uint32_t ea = 0x3e83d0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e83e0(Cpu *restrict c) {
    FN_ENTER(0x3e83e0u);
L_3e83e0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652ee4u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e83f8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e83fcu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e841c(Cpu *restrict c) {
    FN_ENTER(0x3e841cu);
L_3e841c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652eb8u;
    { uint32_t ea = 0x3e842cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8430u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x28u;
    c->pc = c->r[4]; c->r[14] = 0x3e8448u; rt_dispatch(c);
    c->r[14] = 0x3e844cu; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1652e80u;
    { uint32_t ea = 0x3e8468u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x19u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x15u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x18u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x14u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x10u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[1] = 0xffffu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7f7f0000u;
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e84f0(Cpu *restrict c) {
    FN_ENTER(0x3e84f0u);
L_3e84f0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652decu;
    { uint32_t ea = 0x3e8500u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8504u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e851cu; rt_dispatch(c);
    c->r[14] = 0x3e8520u; f_bfbf4c(c);
    c->r[1] = 0x1652dc4u;
    { uint32_t ea = 0x3e852cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e853c(Cpu *restrict c) {
    FN_ENTER(0x3e853cu);
L_3e853c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652d98u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e8554u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8558u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8578(Cpu *restrict c) {
    FN_ENTER(0x3e8578u);
L_3e8578:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652d6cu;
    { uint32_t ea = 0x3e8588u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e858cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x1cu;
    c->pc = c->r[4]; c->r[14] = 0x3e85a4u; rt_dispatch(c);
    c->r[14] = 0x3e85a8u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1652d34u;
    { uint32_t ea = 0x3e85c4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x15u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x14u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x10u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8628(Cpu *restrict c) {
    FN_ENTER(0x3e8628u);
L_3e8628:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652cc4u;
    { uint32_t ea = 0x3e8638u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e863cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e8654u; rt_dispatch(c);
    c->r[14] = 0x3e8658u; f_bfbf4c(c);
    c->r[1] = 0x1652c9cu;
    { uint32_t ea = 0x3e8664u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8674(Cpu *restrict c) {
    FN_ENTER(0x3e8674u);
L_3e8674:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652c70u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e868cu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8690u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e86b0(Cpu *restrict c) {
    FN_ENTER(0x3e86b0u);
L_3e86b0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652c44u;
    { uint32_t ea = 0x3e86c0u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e86c4u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x18u;
    c->pc = c->r[4]; c->r[14] = 0x3e86dcu; rt_dispatch(c);
    c->r[14] = 0x3e86e0u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1652c0cu;
    { uint32_t ea = 0x3e86fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x15u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x10u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8750(Cpu *restrict c) {
    FN_ENTER(0x3e8750u);
L_3e8750:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652bacu;
    { uint32_t ea = 0x3e8760u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8764u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e877cu; rt_dispatch(c);
    c->r[14] = 0x3e8780u; f_bfbf4c(c);
    c->r[1] = 0x1652b84u;
    { uint32_t ea = 0x3e878cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e879c(Cpu *restrict c) {
    FN_ENTER(0x3e879cu);
L_3e879c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652b58u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e87b4u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e87b8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e87d8(Cpu *restrict c) {
    FN_ENTER(0x3e87d8u);
L_3e87d8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652b2cu;
    { uint32_t ea = 0x3e87e8u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e87ecu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e8804u; rt_dispatch(c);
    c->r[14] = 0x3e8808u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1652af4u;
    { uint32_t ea = 0x3e8824u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8864(Cpu *restrict c) {
    FN_ENTER(0x3e8864u);
L_3e8864:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652aa8u;
    { uint32_t ea = 0x3e8874u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8878u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e8890u; rt_dispatch(c);
    c->r[14] = 0x3e8894u; f_bfbf4c(c);
    c->r[1] = 0x1652a80u;
    { uint32_t ea = 0x3e88a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e88b0(Cpu *restrict c) {
    FN_ENTER(0x3e88b0u);
L_3e88b0:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652a54u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e88c8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e88ccu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e88ec(Cpu *restrict c) {
    FN_ENTER(0x3e88ecu);
L_3e88ec:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652a28u;
    { uint32_t ea = 0x3e88fcu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8900u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e8918u; rt_dispatch(c);
    c->r[14] = 0x3e891cu; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16529f0u;
    { uint32_t ea = 0x3e8938u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8978(Cpu *restrict c) {
    FN_ENTER(0x3e8978u);
L_3e8978:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16529a4u;
    { uint32_t ea = 0x3e8988u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e898cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e89a4u; rt_dispatch(c);
    c->r[14] = 0x3e89a8u; f_bfbf4c(c);
    c->r[1] = 0x165297cu;
    { uint32_t ea = 0x3e89b4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e89c4(Cpu *restrict c) {
    FN_ENTER(0x3e89c4u);
L_3e89c4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652950u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e89dcu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e89e0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8a00(Cpu *restrict c) {
    FN_ENTER(0x3e8a00u);
L_3e8a00:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652924u;
    { uint32_t ea = 0x3e8a10u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8a14u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e8a2cu; rt_dispatch(c);
    c->r[14] = 0x3e8a30u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16528ecu;
    { uint32_t ea = 0x3e8a4cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8a88(Cpu *restrict c) {
    FN_ENTER(0x3e8a88u);
L_3e8a88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16528a4u;
    { uint32_t ea = 0x3e8a98u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8a9cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e8ab4u; rt_dispatch(c);
    c->r[14] = 0x3e8ab8u; f_bfbf4c(c);
    c->r[1] = 0x165287cu;
    { uint32_t ea = 0x3e8ac4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8ad4(Cpu *restrict c) {
    FN_ENTER(0x3e8ad4u);
L_3e8ad4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652850u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e8aecu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8af0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8b10(Cpu *restrict c) {
    FN_ENTER(0x3e8b10u);
L_3e8b10:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652824u;
    { uint32_t ea = 0x3e8b20u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8b24u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x14u;
    c->pc = c->r[4]; c->r[14] = 0x3e8b3cu; rt_dispatch(c);
    c->r[14] = 0x3e8b40u; f_bfba6c(c);
    c->r[1] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x16527ecu;
    { uint32_t ea = 0x3e8b5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t ea = c->r[0] + 0x11u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xdu; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x9u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0xcu; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; ST8(ea, c->r[2]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x3u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x2u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8b9c(Cpu *restrict c) {
    FN_ENTER(0x3e8b9cu);
L_3e8b9c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16527a0u;
    { uint32_t ea = 0x3e8bacu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8bb0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e8bc8u; rt_dispatch(c);
    c->r[14] = 0x3e8bccu; f_bfbf4c(c);
    c->r[1] = 0x1652778u;
    { uint32_t ea = 0x3e8bd8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8be8(Cpu *restrict c) {
    FN_ENTER(0x3e8be8u);
L_3e8be8:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x165274cu;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e8c00u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8c04u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8c24(Cpu *restrict c) {
    FN_ENTER(0x3e8c24u);
L_3e8c24:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x1652720u;
    { uint32_t ea = 0x3e8c34u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8c38u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x10u;
    c->pc = c->r[4]; c->r[14] = 0x3e8c50u; rt_dispatch(c);
    c->r[14] = 0x3e8c54u; f_bfba6c(c);
    c->r[2] = 0x16526f0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0x3e8c68u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xau; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xeu; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8c88(Cpu *restrict c) {
    FN_ENTER(0x3e8c88u);
L_3e8c88:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0x16526c4u;
    { uint32_t ea = 0x3e8c98u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0x3e8c9cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x4cu;
    c->pc = c->r[4]; c->r[14] = 0x3e8cb4u; rt_dispatch(c);
    c->r[14] = 0x3e8cb8u; f_bfbf4c(c);
    c->r[1] = 0x165269cu;
    { uint32_t ea = 0x3e8cc4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_3e8cd4(Cpu *restrict c) {
    FN_ENTER(0x3e8cd4u);
L_3e8cd4:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[5] = c->r[0];
    c->r[0] = 0x1652670u;
    c->r[4] = c->r[1];
    { uint32_t ea = 0x3e8cecu + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6];
    c->r[14] = 0x3e8cf0u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    c->pc = c->r[12]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_3e8d10(Cpu *restrict c) {
    FN_ENTER(0x3e8d10u);
L_3e8d10:;
    c->r[1] = 0x1652514u;
    { uint32_t ea = 0x3e8d1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    return;
}
void f_3e8d28(Cpu *restrict c) {
    FN_ENTER(0x3e8d28u);
L_3e8d28:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0x16524f4u;
    { uint32_t ea = 0x3e8d3cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x16524f8u;
    { uint32_t ea = 0x3e8d4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x3e8d4cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
