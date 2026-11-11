#include "cpu.h"
#include "neon_rt.h"
void f_2618600(Cpu *c);
void f_261f29c(Cpu *c);
void f_283af94(Cpu *c);
void f_284cbb0(Cpu *c);
void f_284d00c(Cpu *c);
void f_2619914(Cpu *restrict c) {
    FN_ENTER(0x2619914u);
L_2619914:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x1cu;
    c->r[14] = c->r[0];
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] - 0x4u;
    { uint32_t ea = c->r[2] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0xbu);
    if (COND_NE) { goto L_2619954; }
    c->r[0] = c->r[14];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->r[14] = LD32(ea + 32u); }
    __attribute__((musttail)) return f_284d00c(c);
L_2619954:;
    { uint32_t r = c->r[3] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261da6c; }
    (void)f_subs(c, c->r[1], 0xfcu);
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[14]); }
    if (COND_GT) { goto L_261d034; }
    if (COND_NE) { goto L_261d10c; }
    c->r[1] = c->r[0] - 0x8u;
    c->r[6] = 0x6u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t sc = 0; uint32_t r = c->r[3] & 0x8000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->r[7] = (c->r[3] >> 8) & 0xfu;
    if (COND_NE) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[7], 0x9u);
    if (COND_HI) { c->r[6] = ~0x9u; }
    c->r[7] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->r[7] = 0x80ffu;
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[3] = c->r[3] & c->r[7];
    (void)f_subs(c, c->r[3], 0x8000u);
    if (COND_NE) { goto L_26199bc; }
    c->r[1] = c->r[0] - 0xcu;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
L_26199bc:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x1u;
    c->r[9] = sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_26199f8; }
    { uint32_t ea = c->r[14] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x26199e0u; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x10u;
    c->r[14] = 0x26199f0u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = c->r[0];
L_26199f8:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[4] = 0x5u;
    c->r[5] = 0x3u;
    c->r[10] = 0x0u;
    c->r[0] = sh_lsl(c->r[6], c->r[0]);
    c->r[6] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x582218u;
    c->r[0] = 0x2619a2cu + c->r[0];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x531170u;
    c->r[0] = 0x2619a38u + c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[12]); }
    goto L_2619a48;
L_2619a40:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_2619a48:;
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + 0x2u;
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    if (COND_GT) { goto L_2619a7c; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[5], c->r[7]);
    c->r[2] = sh_asr(c->r[2], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_2619a94; }
    goto L_2619aa0;
L_2619a7c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1eu - c->r[10];
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[2] = sh_lsr(c->r[0], c->r[1]);
L_2619a94:;
    c->r[0] = c->r[3];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_2619aa0:;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_2619ae8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_2619b1c; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_2619b4c; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_2619c80; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[1]);
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_2619c98; }
    goto L_2619ca4;
L_2619ae8:;
    c->r[8] = c->r[1];
L_2619aec:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[8] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_2619b84; }
    c->r[3] = 0xeu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[3]);
    c->r[1] = sh_asr(c->r[1], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_2619b9c; }
    goto L_2619ba8;
L_2619b1c:;
    c->r[2] = c->r[0];
    c->r[8] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[8], 0x10u);
    if (COND_GT) { goto L_2619cdc; }
    c->r[1] = 0xeu - c->r[1];
    (void)f_subs(c, c->r[8], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[5], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_2619cf4; }
    goto L_2619d00;
L_2619b4c:;
    c->r[8] = c->r[1];
L_2619b50:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x3u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_2619bf0; }
    c->r[3] = 0xdu - c->r[8];
    c->r[7] = 0x7u;
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[7], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_2619c0c; }
    goto L_2619c18;
L_2619b84:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_2619b9c:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_2619ba8:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2619d98; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_2619da0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_2619dd0; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_2619e64; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_2619e7c; }
    goto L_2619e88;
L_2619bf0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x7u;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1du - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[3], c->r[2]);
    c->r[3] = c->r[8] - 0xdu;
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_2619c0c:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_2619c18:;
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_HI) { goto L_2619ec4; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x2619c2cu + 0x8u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x2619c50u: goto L_2619c50; case 0x2619ef4u: goto L_2619ef4; case 0x2619f24u: goto L_2619f24; case 0x2619f2cu: goto L_2619f2c; case 0x2619f5cu: goto L_2619f5c; case 0x2619f8cu: goto L_2619f8c; case 0x261af30u: goto L_261af30; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_2619c50:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a438; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a450; }
    goto L_261a45c;
L_2619c80:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_lsr(c->r[0], c->r[2]);
L_2619c98:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_2619ca4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_2619d4c; }
    c->r[1] = c->r[0];
    c->r[8] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[8], 0x10u);
    if (COND_GT) { goto L_2619d5c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[8], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_2619d74; }
    goto L_2619d80;
L_2619cdc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1eu - c->r[1];
    c->r[1] = c->r[1] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_2619cf4:;
    c->r[0] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_2619d00:;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CS) { goto L_2619d1c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_LS) { goto L_261a0c0; }
    goto L_261d0fc;
L_2619d1c:;
    c->r[2] = c->r[0];
    c->r[1] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_2619e00; }
    c->r[7] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_2619e18; }
    goto L_2619e24;
L_2619d4c:;
    c->r[8] = c->r[2];
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261a130; }
    goto L_261a1e0;
L_2619d5c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_2619d74:;
    c->r[0] = c->r[1];
    c->r[8] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_2619d80:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0x4u;
    if (COND_NE) { c->r[1] = 0x5u; }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_LS) { goto L_261a0c0; }
    goto L_261d0fc;
L_2619d98:;
    c->r[1] = 0x1u;
    goto L_261b0bc;
L_2619da0:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_2619fbc; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_2619fd4; }
    goto L_2619fe0;
L_2619dd0:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a018; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[5], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a030; }
    goto L_261a03c;
L_2619e00:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1fu - c->r[8];
    c->r[7] = c->r[8] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_2619e18:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_2619e24:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2619e34; }
    c->r[8] = c->r[1];
    goto L_261a1f4;
L_2619e34:;
    c->r[2] = c->r[0];
    c->r[8] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[8], 0x10u);
    if (COND_GT) { goto L_261a088; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[8], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261a0a0; }
    goto L_261a0ac;
L_2619e64:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_2619e7c:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_2619e88:;
    c->r[1] = 0x7u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261b0b8; }
    c->r[1] = c->r[0];
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261a494; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261a4ac; }
    goto L_261a4b8;
L_2619ec4:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a4f0; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261a508; }
    goto L_261a510;
L_2619ef4:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a520; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a538; }
    goto L_261a544;
L_2619f24:;
    c->r[1] = 0x1u;
    goto L_261af30;
L_2619f2c:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a57c; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a594; }
    goto L_261a5a0;
L_2619f5c:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a5d8; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a5f0; }
    goto L_261a5fc;
L_2619f8c:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a634; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a64c; }
    goto L_261a658;
L_2619fbc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_2619fd4:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_2619fe0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261a080; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a3dc; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261a3f4; }
    goto L_261a400;
L_261a018:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1eu - c->r[10];
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a030:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a03c:;
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_CS) { goto L_261a050; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_261b0b8;
L_261a050:;
    c->r[1] = c->r[0];
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261a694; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261a6ac; }
    goto L_261a6b8;
L_261a080:;
    c->r[1] = 0x2u;
    goto L_261b0b8;
L_261a088:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261a0a0:;
    c->r[0] = c->r[2];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261a0ac:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0x6u;
    if (COND_NE) { c->r[1] = 0xfu; }
    (void)f_subs(c, c->r[1], 0x9u);
    if (COND_HI) { goto L_261d0fc; }
L_261a0c0:;
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x261a0ccu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x2619aecu: goto L_2619aec; case 0x2619b50u: goto L_2619b50; case 0x261a0f8u: goto L_261a0f8; case 0x261a128u: goto L_261a128; case 0x261a1f4u: goto L_261a1f4; case 0x261a284u: goto L_261a284; case 0x261a2b4u: goto L_261a2b4; case 0x261a2e4u: goto L_261a2e4; case 0x261a314u: goto L_261a314; case 0x261a344u: goto L_261a344; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_261a0f8:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a704; }
    c->r[3] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261a71c; }
    goto L_261a728;
L_261a128:;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_NE) { goto L_261a1e0; }
L_261a130:;
    { uint32_t ea = c->r[14] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[10] = c->r[4];
    c->r[1] = c->r[3] + 0x38u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[3] + 0x54u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[1] = c->r[3] + 0x34u; }
    { uint32_t ea = c->r[3] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + (c->r[6] << 1);
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + 0x1u;
    c->r[3] = 0x0u;
L_261a174:;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_261a1a0; }
    { uint32_t ea = c->r[0] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_261a1a0; }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[7] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[6]); }
L_261a1a0:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_261a174; }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[14] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14];
    c->r[14] = 0x261a1ccu; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = 0x3u;
    c->r[6] = 0x1u;
    c->r[4] = c->r[10];
L_261a1e0:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[8];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_2619a48;
L_261a1f4:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a224; }
    c->r[3] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261a23c; }
    goto L_261a248;
L_261a224:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - 0xfu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261a23c:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a248:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_261c460; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a374; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a38c; }
    goto L_261a398;
L_261a284:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a760; }
    c->r[3] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261a778; }
    goto L_261a784;
L_261a2b4:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[8] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a7c0; }
    c->r[3] = 0xeu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[3]);
    c->r[1] = sh_asr(c->r[1], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261a7d8; }
    goto L_261a7e4;
L_261a2e4:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a82c; }
    c->r[3] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_asr(c->r[2], c->r[3]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261a844; }
    goto L_261a850;
L_261a314:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a88c; }
    c->r[3] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_asr(c->r[2], c->r[3]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261a8a4; }
    goto L_261a8b0;
L_261a344:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261a8ec; }
    c->r[3] = 0xfu - c->r[8];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261a904; }
    goto L_261a910;
L_261a374:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a38c:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a398:;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261a3ac; }
    c->r[10] = c->r[2];
    goto L_261c460;
L_261a3ac:;
    c->r[1] = c->r[0];
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261a9b8; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261a9d0; }
    goto L_261a9dc;
L_261a3dc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261a3f4:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a400:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261a6fc; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261a958; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261a970; }
    goto L_261a97c;
L_261a438:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a450:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a45c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261aa24; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261aa5c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261aa74; }
    goto L_261aa80;
L_261a494:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261a4ac:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a4b8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_261aa30; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261aabc; }
    c->r[0] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261aad4; }
    goto L_261aadc;
L_261a4f0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261a508:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a510:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x20u;
    if (COND_NE) { c->r[1] = 0x2u; }
    goto L_261af2c;
L_261a520:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a538:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a544:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261aa3c; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261aaec; }
    c->r[0] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ab04; }
    goto L_261ab0c;
L_261a57c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a594:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a5a0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261aa44; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ab1c; }
    c->r[0] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ab34; }
    goto L_261ab3c;
L_261a5d8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a5f0:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a5fc:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261aa4c; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ab4c; }
    c->r[0] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ab64; }
    goto L_261ab6c;
L_261a634:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a64c:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a658:;
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261af2c; }
    c->r[1] = c->r[0];
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261abe8; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ac00; }
    goto L_261ac0c;
L_261a694:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261a6ac:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a6b8:;
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261a6cc; }
    c->r[10] = c->r[3];
    goto L_261b0bc;
L_261a6cc:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ac44; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261ac5c; }
    goto L_261ac68;
L_261a6fc:;
    c->r[1] = 0x4u;
    goto L_261b0bc;
L_261a704:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - 0xfu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261a71c:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a728:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261aa54; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261ab7c; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261ab94; }
    goto L_261aba0;
L_261a760:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - 0xfu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261a778:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a784:;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_261b738; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261aca0; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261acb8; }
    goto L_261acc4;
L_261a7c0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261a7d8:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261a7e4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261acd8; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261ace0; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_261ace8; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261b0c4; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b0dc; }
    goto L_261b0e8;
L_261a82c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
    c->r[2] = c->r[8] - 0xfu;
L_261a844:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a850:;
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261c9ac; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261acf0; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261ad08; }
    goto L_261ad14;
L_261a88c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
    c->r[2] = c->r[8] - 0xfu;
L_261a8a4:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a8b0:;
    c->r[2] = 0x1u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261c7ec; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261ad28; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261ad40; }
    goto L_261ad4c;
L_261a8ec:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = c->r[8] - 0xfu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[8];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261a904:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a910:;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_261a928; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_NE) { goto L_261ce08; }
    goto L_261cdb4;
L_261a928:;
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261ad60; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261ad78; }
    goto L_261ad84;
L_261a958:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261a970:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a97c:;
    c->r[1] = 0xau;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261b0b8; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ae5c; }
    c->r[0] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ae74; }
    goto L_261ae7c;
L_261a9b8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261a9d0:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261a9dc:;
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261a9f0; }
    c->r[10] = c->r[3];
    goto L_261c460;
L_261a9f0:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ae8c; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261aea4; }
    goto L_261aeb0;
L_261aa24:;
    c->r[1] = 0x6u;
    goto L_261af2c;
L_261aa30:;
    c->r[1] = 0x9u;
    c->r[10] = c->r[3];
    goto L_261b0bc;
L_261aa3c:;
    c->r[1] = 0x5u;
    goto L_261af2c;
L_261aa44:;
    c->r[1] = 0x30u;
    goto L_261af2c;
L_261aa4c:;
    c->r[1] = 0x4u;
    goto L_261af2c;
L_261aa54:;
    c->r[1] = 0x1u;
    goto L_261b920;
L_261aa5c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261aa74:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261aa80:;
    c->r[1] = 0xcu;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261af30; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261aefc; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261af14; }
    goto L_261af20;
L_261aabc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
    c->r[2] = c->r[3] - 0xfu;
L_261aad4:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261aadc:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xbu;
    if (COND_NE) { c->r[1] = 0x6u; }
    goto L_261b0bc;
L_261aaec:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261ab04:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ab0c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xeu;
    if (COND_NE) { c->r[1] = 0xau; }
    goto L_261af30;
L_261ab1c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261ab34:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ab3c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x9u;
    if (COND_NE) { c->r[1] = 0x40u; }
    goto L_261af30;
L_261ab4c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261ab64:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ab6c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xbu;
    if (COND_NE) { c->r[1] = 0x7u; }
    goto L_261af30;
L_261ab7c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261ab94:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261aba0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261b004; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261b010; }
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_261b01c; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    if (COND_GT) { goto L_261b374; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b38c; }
    goto L_261b398;
L_261abe8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261ac00:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ac0c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_261aee8; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261af40; }
    c->r[0] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261af58; }
    goto L_261af60;
L_261ac44:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261ac5c:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ac68:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261aef4; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261af70; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261af88; }
    goto L_261af94;
L_261aca0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261acb8:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261acc4:;
    c->r[1] = 0x2u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261adcc; }
L_261acd0:;
    c->r[10] = c->r[2];
    goto L_261b738;
L_261acd8:;
    c->r[1] = 0x4u;
    goto L_261ceb0;
L_261ace0:;
    c->r[1] = 0x3u;
    goto L_261ceb0;
L_261ace8:;
    c->r[1] = 0x2u;
    goto L_261ceb0;
L_261acf0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_261ad08:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261ad14:;
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261adfc; }
    c->r[10] = c->r[1];
    goto L_261c9ac;
L_261ad28:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_261ad40:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261ad4c:;
    c->r[2] = 0x2u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261ae2c; }
    c->r[10] = c->r[1];
    goto L_261c7ec;
L_261ad60:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261ad78:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261ad84:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261b120; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261b128; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261b158; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b4ec; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b504; }
    goto L_261b510;
L_261adcc:;
    c->r[1] = c->r[0];
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261b16c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b184; }
    goto L_261b190;
L_261adfc:;
    c->r[2] = c->r[0];
    c->r[3] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261b1a4; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[1]);
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261b1bc; }
    goto L_261b1c8;
L_261ae2c:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b1dc; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261b1f4; }
    goto L_261b200;
L_261ae5c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261ae74:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ae7c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xeu;
    if (COND_NE) { c->r[1] = 0xdu; }
    goto L_261b0bc;
L_261ae8c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261aea4:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261aeb0:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261affc; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261b048; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b060; }
    goto L_261b06c;
L_261aee8:;
    c->r[1] = 0x8u;
    c->r[10] = c->r[3];
    goto L_261af30;
L_261aef4:;
    c->r[1] = 0xcu;
    goto L_261b0bc;
L_261aefc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261af14:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261af20:;
    c->r[1] = 0x50u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261afcc; }
L_261af2c:;
    c->r[10] = c->r[2];
L_261af30:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_2619a48;
L_261af40:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
    c->r[2] = c->r[3] - 0xfu;
L_261af58:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261af60:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xdu;
    if (COND_NE) { c->r[1] = 0xfu; }
    goto L_261af30;
L_261af70:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261af88:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261af94:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261b0b4; }
    c->r[1] = c->r[0];
    c->r[3] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261b29c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b2b4; }
    goto L_261b2c0;
L_261afcc:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b314; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b32c; }
    goto L_261b338;
L_261affc:;
    c->r[1] = 0x4u;
    goto L_261c460;
L_261b004:;
    c->r[1] = 0x3u;
    c->r[10] = c->r[2];
    goto L_261b920;
L_261b010:;
    c->r[1] = 0x2u;
    c->r[10] = c->r[2];
    goto L_261b920;
L_261b01c:;
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[3], 0x10u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    if (COND_GT) { goto L_261b3ac; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_asr(c->r[7], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b3c4; }
    goto L_261b3d0;
L_261b048:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261b060:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261b06c:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261b4a4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261b4b0; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261b4bc; }
    c->r[7] = c->r[0];
    c->r[3] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261ba54; }
    c->r[2] = 0xeu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[2]);
    c->r[1] = sh_asr(c->r[1], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ba6c; }
    goto L_261ba78;
L_261b0b4:;
    c->r[1] = 0xfu;
L_261b0b8:;
    c->r[10] = c->r[2];
L_261b0bc:;
    c->r[4] = c->r[1] + c->r[4];
    goto L_2619a40;
L_261b0c4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261b0dc:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b0e8:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261b308; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b3e4; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b3fc; }
    goto L_261b408;
L_261b120:;
    c->r[1] = 0x3u;
    goto L_261b15c;
L_261b128:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b548; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b560; }
    goto L_261b56c;
L_261b158:;
    c->r[1] = 0x4u;
L_261b15c:;
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261cdb4; }
    goto L_261ce08;
L_261b16c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261b184:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b190:;
    c->r[1] = 0x3u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261b23c; }
    c->r[10] = c->r[3];
    goto L_261b738;
L_261b1a4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261b1bc:;
    c->r[0] = c->r[2];
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261b1c8:;
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261b26c; }
    c->r[10] = c->r[3];
    goto L_261c9ac;
L_261b1dc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261b1f4:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261b200:;
    c->r[2] = 0x3u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261c7ec; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261b584; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[5], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b59c; }
    goto L_261b5a8;
L_261b23c:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b5f4; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261b60c; }
    goto L_261b618;
L_261b26c:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b650; }
    c->r[3] = 0xeu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[3]);
    c->r[1] = sh_asr(c->r[1], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261b668; }
    goto L_261b674;
L_261b29c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261b2b4:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b2c0:;
    c->r[1] = 0x20u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261b2d4; }
    c->r[10] = c->r[3];
    goto L_261b0bc;
L_261b2d4:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x3u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b6bc; }
    c->r[3] = 0xdu - c->r[3];
    c->r[7] = 0x7u;
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[7], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261b6d8; }
    goto L_261b6e4;
L_261b308:;
    c->r[1] = 0x5u;
    c->r[10] = c->r[2];
    goto L_261ceb0;
L_261b314:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261b32c:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b338:;
    c->r[1] = 0x60u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261af30; }
    c->r[1] = c->r[0];
    c->r[3] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261b7d8; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[7]);
    c->r[2] = sh_asr(c->r[2], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b7f0; }
    goto L_261b7fc;
L_261b374:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261b38c:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b398:;
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261b444; }
    c->r[10] = c->r[3];
    goto L_261b920;
L_261b3ac:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261b3c4:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b3d0:;
    c->r[1] = 0x4u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261b474; }
    c->r[10] = c->r[3];
    goto L_261b920;
L_261b3e4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261b3fc:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b408:;
    c->r[1] = 0x6u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261ceb0; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261b850; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b868; }
    goto L_261b874;
L_261b444:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[3] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b888; }
    c->r[3] = 0xeu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[3]);
    c->r[1] = sh_asr(c->r[1], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261b8a0; }
    goto L_261b8ac;
L_261b474:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261b8f4; }
    c->r[0] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261b90c; }
    goto L_261b914;
L_261b4a4:;
    c->r[1] = 0x6u;
    c->r[10] = c->r[2];
    goto L_261c460;
L_261b4b0:;
    c->r[1] = 0x7u;
    c->r[10] = c->r[2];
    goto L_261c460;
L_261b4bc:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261bac0; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261bad8; }
    goto L_261bae4;
L_261b4ec:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261b504:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b510:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261b724; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261b94c; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b964; }
    goto L_261b970;
L_261b548:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261b560:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b56c:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0x5u;
    if (COND_NE) { c->r[1] = 0x6u; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261cdb4; }
    goto L_261ce08;
L_261b584:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1eu - c->r[10];
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_261b59c:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261b5a8:;
    (void)f_subs(c, c->r[3], 0x2u);
    if (COND_EQ) { goto L_261bb20; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261bb50; }
    c->r[2] = 0x4u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_261bb80; }
    c->r[2] = c->r[0];
    c->r[10] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261bdd4; }
    c->r[1] = 0xeu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[5], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261bdec; }
    goto L_261bdf8;
L_261b5f4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261b60c:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b618:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261b734; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261b9b8; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261b9d0; }
    goto L_261b9dc;
L_261b650:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[3];
    c->r[3] = c->r[3] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261b668:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261b674:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261bb88; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261bbb8; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261bbc0; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261be08; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261be20; }
    goto L_261be2c;
L_261b6bc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = 0x7u;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1du - c->r[3];
    c->r[3] = c->r[3] - 0xdu;
    c->r[0] = c->r[0] & sh_lsl(c->r[7], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261b6d8:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b6e4:;
    (void)f_subs(c, c->r[2], 0x6u);
    if (COND_HI) { goto L_261bf68; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0x261b6f8u + 0x8u;
    c->r[1] = 0xf0u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x261b0bcu: goto L_261b0bc; case 0x261b71cu: goto L_261b71c; case 0x261bf98u: goto L_261bf98; case 0x261bfc8u: goto L_261bfc8; case 0x261bff8u: goto L_261bff8; case 0x261c028u: goto L_261c028; case 0x261c058u: goto L_261c058; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_261b71c:;
    c->r[1] = 0x100u;
    goto L_261b0bc;
L_261b724:;
    c->r[1] = 0x7u;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261cdb4; }
    goto L_261ce08;
L_261b734:;
    c->r[1] = 0x4u;
L_261b738:;
    c->r[2] = c->r[12] - c->r[4];
    c->r[7] = c->r[9];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_2619a48; }
    { uint32_t ea = c->r[14] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[12];
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[1] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 1);
    c->r[3] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_261b788; }
    c->r[9] = c->r[7];
    goto L_261b7ac;
L_261b788:;
    c->r[3] = c->r[2] - 0x1u;
    c->r[9] = c->r[7];
L_261b790:;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[7]); }
    if (COND_LT) { goto L_261b790; }
L_261b7ac:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[14] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14];
    c->r[14] = 0x261b7c0u; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[5];
    c->r[4] = c->r[6];
    c->r[5] = 0x3u;
    c->r[6] = 0x1u;
    goto L_2619a48;
L_261b7d8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261b7f0:;
    c->r[0] = c->r[1];
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b7fc:;
    c->r[1] = 0x70u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_261b810; }
    c->r[10] = c->r[3];
    goto L_261af30;
L_261b810:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[3] + 0x3u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261bbc8; }
    c->r[6] = c->r[12];
    c->r[12] = 0xdu - c->r[3];
    c->r[3] = 0x7u;
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[3], c->r[12]);
    c->r[3] = 0x0u;
    c->r[7] = sh_asr(c->r[7], c->r[12]);
    c->r[12] = c->r[6];
    c->r[6] = 0x1u;
    if (COND_EQ) { goto L_261bbe4; }
    goto L_261bbf0;
L_261b850:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261b868:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b874:;
    c->r[1] = 0x7u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261ba24; }
    c->r[10] = c->r[2];
    goto L_261ceb0;
L_261b888:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[3];
    c->r[3] = c->r[3] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261b8a0:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261b8ac:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261bc34; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261bc3c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_261bc44; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c134; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261c14c; }
    goto L_261c158;
L_261b8f4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
    c->r[2] = c->r[3] - 0xfu;
L_261b90c:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261b914:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x6u;
    if (COND_NE) { c->r[1] = 0x8u; }
L_261b920:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[4] = 0x5u;
    c->r[0] = c->r[9] + sh_lsl(c->r[1], c->r[0]);
    { uint32_t ea = c->r[13]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[9] = c->r[0];
    if (COND_GE) { c->r[9] = c->r[9] + c->r[1]; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_GE) { c->r[9] = c->r[0]; }
    goto L_2619a40;
L_261b94c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261b964:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261b970:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261bc4c; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261bc54; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_261bc84; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c1a4; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c1bc; }
    goto L_261c1c8;
L_261b9b8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261b9d0:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261b9dc:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261bc8c; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261bc94; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261bcc4; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c1e0; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c1f8; }
    goto L_261c204;
L_261ba24:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261bccc; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261bce4; }
    goto L_261bcf0;
L_261ba54:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[2];
    c->r[2] = c->r[2] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261ba6c:;
    c->r[0] = c->r[7];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[7]); }
L_261ba78:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_261bd28; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261bd34; }
    c->r[10] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_261bd40; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_GT) { goto L_261c3c8; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c3e0; }
    goto L_261c3ec;
L_261bac0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261bad8:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261bae4:;
    c->r[1] = 0x5u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261c460; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261bd6c; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261bd84; }
    goto L_261bd90;
L_261bb20:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261be64; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261be7c; }
    goto L_261be88;
L_261bb50:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261bec0; }
    c->r[1] = 0xeu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[5], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261bed8; }
    goto L_261bee4;
L_261bb80:;
    c->r[10] = c->r[1];
    goto L_261c7ec;
L_261bb88:;
    c->r[3] = c->r[0];
    c->r[1] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261bef4; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[5], c->r[7]);
    c->r[2] = sh_asr(c->r[2], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261bf0c; }
    goto L_261bf18;
L_261bbb8:;
    c->r[2] = 0x6u;
    goto L_261c9ac;
L_261bbc0:;
    c->r[2] = 0x5u;
    goto L_261c9ac;
L_261bbc8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1du - c->r[3];
    c->r[3] = c->r[3] - 0xdu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[7] = 0x7u;
    c->r[0] = c->r[0] & sh_lsl(c->r[7], c->r[2]);
    c->r[7] = sh_lsr(c->r[0], c->r[2]);
L_261bbe4:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261bbf0:;
    (void)f_subs(c, c->r[7], 0x7u);
    if (COND_CS) { goto L_261bc04; }
    c->r[0] = 0xa0u;
    c->r[1] = c->r[0] + (c->r[7] << 4);
    goto L_261af2c;
L_261bc04:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c104; }
    c->r[0] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c11c; }
    goto L_261c124;
L_261bc34:;
    c->r[1] = 0xau;
    goto L_261b920;
L_261bc3c:;
    c->r[1] = 0x7u;
    goto L_261b920;
L_261bc44:;
    c->r[1] = 0x9u;
    goto L_261b920;
L_261bc4c:;
    c->r[1] = 0x9u;
    goto L_261b15c;
L_261bc54:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c23c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c254; }
    goto L_261c260;
L_261bc84:;
    c->r[1] = 0x8u;
    goto L_261b15c;
L_261bc8c:;
    c->r[1] = 0x6u;
    goto L_261acd0;
L_261bc94:;
    c->r[7] = c->r[0];
    c->r[3] = c->r[2] + 0x2u;
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261c298; }
    c->r[2] = 0xeu - c->r[2];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[2]);
    c->r[1] = sh_asr(c->r[1], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c2b0; }
    goto L_261c2bc;
L_261bcc4:;
    c->r[1] = 0x5u;
    goto L_261acd0;
L_261bccc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261bce4:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261bcf0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261bf60; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c088; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261c0a0; }
    goto L_261c0ac;
L_261bd28:;
    c->r[1] = 0x10u;
    c->r[10] = c->r[3];
    goto L_261c460;
L_261bd34:;
    c->r[1] = 0x9u;
    c->r[10] = c->r[3];
    goto L_261c460;
L_261bd40:;
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_GT) { goto L_261c3fc; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c414; }
    goto L_261c420;
L_261bd6c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261bd84:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261bd90:;
    c->r[1] = 0xau;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261bda4; }
    c->r[10] = c->r[2];
    goto L_261c460;
L_261bda4:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c430; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c448; }
    goto L_261c454;
L_261bdd4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1eu - c->r[1];
    c->r[1] = c->r[1] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261bdec:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261bdf8:;
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[2] = 0xbu;
    if (COND_CC) { c->r[2] = c->r[3] + 0x8u; }
    goto L_261c7ec;
L_261be08:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_261be20:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261be2c:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c0f0; }
    c->r[2] = c->r[0];
    c->r[3] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[3], 0x10u);
    if (COND_GT) { goto L_261c304; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[3], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[1]);
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261c31c; }
    goto L_261c328;
L_261be64:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261be7c:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261be88:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c0fc; }
    c->r[2] = c->r[0];
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261c33c; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261c354; }
    goto L_261c360;
L_261bec0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1eu - c->r[1];
    c->r[1] = c->r[1] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261bed8:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261bee4:;
    (void)f_subs(c, c->r[3], 0x3u);
    c->r[2] = 0xfu;
    if (COND_CC) { c->r[2] = c->r[3] + 0xcu; }
    goto L_261c7ec;
L_261bef4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1eu - c->r[10];
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[2] = sh_lsr(c->r[0], c->r[1]);
L_261bf0c:;
    c->r[0] = c->r[3];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261bf18:;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_261c4f8; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_261c528; }
    c->r[10] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_261c534; }
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    if (COND_GT) { goto L_261c920; }
    c->r[0] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[1], c->r[0]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261c938; }
    goto L_261c940;
L_261bf60:;
    c->r[1] = 0x9u;
    goto L_261ceb0;
L_261bf68:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c584; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c59c; }
    goto L_261c5a4;
L_261bf98:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c5b4; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c5cc; }
    goto L_261c5d4;
L_261bfc8:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c5e4; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c5fc; }
    goto L_261c604;
L_261bff8:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c614; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c62c; }
    goto L_261c634;
L_261c028:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c644; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c65c; }
    goto L_261c664;
L_261c058:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c674; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261c68c; }
    goto L_261c694;
L_261c088:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261c0a0:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c0ac:;
    c->r[1] = 0x8u;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261c0c0; }
    c->r[10] = c->r[2];
    goto L_261ceb0;
L_261c0c0:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c6a4; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c6bc; }
    goto L_261c6c8;
L_261c0f0:;
    c->r[2] = 0x8u;
    c->r[10] = c->r[1];
    goto L_261c9ac;
L_261c0fc:;
    c->r[2] = 0x5u;
    goto L_261c7ec;
L_261c104:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261c11c:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c124:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x80u;
    if (COND_NE) { c->r[1] = 0x90u; }
    goto L_261af30;
L_261c134:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261c14c:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261c158:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261c828; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261c834; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261c868; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x3u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261cb78; }
    c->r[0] = 0xdu - c->r[2];
    c->r[2] = 0x7u;
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[2], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261cb94; }
    goto L_261cb9c;
L_261c1a4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261c1bc:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c1c8:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0x10u;
    if (COND_NE) { c->r[1] = 0xbu; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261cdb4; }
    goto L_261ce08;
L_261c1e0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261c1f8:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c204:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c560; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c704; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261c71c; }
    goto L_261c728;
L_261c23c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261c254:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c260:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c568; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261c760; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261c778; }
    goto L_261c784;
L_261c298:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[2];
    c->r[2] = c->r[2] - 0xeu;
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261c2b0:;
    c->r[0] = c->r[7];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[7]); }
L_261c2bc:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261c898; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261c8a4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261c8d4; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261cbb0; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261cbc8; }
    goto L_261cbd4;
L_261c304:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[7] = sh_lsr(c->r[0], c->r[3]);
L_261c31c:;
    c->r[0] = c->r[2];
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261c328:;
    c->r[2] = 0x7u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261c398; }
    c->r[10] = c->r[3];
    goto L_261c9ac;
L_261c33c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_261c354:;
    c->r[0] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261c360:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c578; }
    c->r[2] = c->r[0];
    c->r[10] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c7bc; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261c7d4; }
    goto L_261c7e0;
L_261c398:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c8e0; }
    c->r[0] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261c8f8; }
    goto L_261c900;
L_261c3c8:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261c3e0:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c3ec:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = 0x8u;
    if (COND_NE) { c->r[1] = 0xbu; }
    goto L_261c460;
L_261c3fc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261c414:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c420:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = 0xcu;
    if (COND_NE) { c->r[1] = 0xdu; }
    goto L_261c460;
L_261c430:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261c448:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c454:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0xeu;
    if (COND_NE) { c->r[1] = 0xfu; }
L_261c460:;
    c->r[2] = c->r[12] - c->r[4];
    c->r[3] = c->r[9];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CS) { goto L_2619a48; }
    { uint32_t ea = c->r[14] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[4];
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[2] << 1);
    c->r[2] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[14] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_261c4c8; }
    c->r[0] = c->r[1] + 0x1u;
L_261c4a8:;
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] - 0x2u;
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    if (COND_GT) { goto L_261c4a8; }
L_261c4c8:;
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[3];
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = c->r[14];
    c->r[14] = 0x261c4e4u; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[5];
    c->r[5] = 0x3u;
    c->r[4] = c->r[7];
    goto L_2619a48;
L_261c4f8:;
    c->r[2] = c->r[0];
    c->r[10] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261c950; }
    c->r[0] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[1], c->r[0]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261c968; }
    goto L_261c970;
L_261c528:;
    c->r[2] = 0xbu;
    c->r[10] = c->r[1];
    goto L_261c9ac;
L_261c534:;
    c->r[2] = c->r[0];
    (void)f_subs(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    if (COND_GT) { goto L_261c980; }
    c->r[0] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[1] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[1], c->r[0]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261c998; }
    goto L_261c9a0;
L_261c560:;
    c->r[1] = 0x7u;
    goto L_261b738;
L_261c568:;
    c->r[1] = 0xau;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261cdb4; }
    goto L_261ce08;
L_261c578:;
    c->r[2] = 0x10u;
    c->r[10] = c->r[1];
    goto L_261c7ec;
L_261c584:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261c59c:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c5a4:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xd0u;
    if (COND_NE) { c->r[1] = 0xe0u; }
    goto L_261b0b8;
L_261c5b4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261c5cc:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c5d4:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x30u;
    if (COND_NE) { c->r[1] = 0x40u; }
    goto L_261b0b8;
L_261c5e4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261c5fc:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c604:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x50u;
    if (COND_NE) { c->r[1] = 0x60u; }
    goto L_261b0b8;
L_261c614:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261c62c:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c634:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x70u;
    if (COND_NE) { c->r[1] = 0x80u; }
    goto L_261b0b8;
L_261c644:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261c65c:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c664:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x90u;
    if (COND_NE) { c->r[1] = 0xa0u; }
    goto L_261b0b8;
L_261c674:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261c68c:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c694:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xb0u;
    if (COND_NE) { c->r[1] = 0xc0u; }
    goto L_261b0b8;
L_261c6a4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261c6bc:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c6c8:;
    c->r[1] = 0xau;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_EQ) { goto L_261ceb0; }
    c->r[3] = c->r[0];
    c->r[2] = c->r[10] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261cafc; }
    c->r[7] = 0xeu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[1] = c->r[1] & sh_lsl(c->r[5], c->r[7]);
    c->r[1] = sh_asr(c->r[1], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261cb14; }
    goto L_261cb20;
L_261c704:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261c71c:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c728:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c910; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ca6c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ca84; }
    goto L_261ca90;
L_261c760:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261c778:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c784:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261c918; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261caa0; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261cab8; }
    goto L_261cac4;
L_261c7bc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261c7d4:;
    c->r[0] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261c7e0:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[2] = 0x6u;
    if (COND_NE) { c->r[2] = 0x7u; }
L_261c7ec:;
    c->r[1] = c->r[12] - c->r[4];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LT) { goto L_261ce08; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_GE) { goto L_261ce08; }
    c->r[1] = c->r[0] + 0x4u;
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    goto L_261cdf4;
L_261c828:;
    c->r[1] = 0xcu;
    c->r[10] = c->r[2];
    goto L_261b920;
L_261c834:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x3u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261cbe4; }
    c->r[2] = 0xdu - c->r[2];
    c->r[7] = 0x7u;
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[7], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261cc00; }
    goto L_261cc0c;
L_261c868:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261cc4c; }
    c->r[0] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[2], c->r[0]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261cc64; }
    goto L_261cc6c;
L_261c898:;
    c->r[1] = 0x8u;
    c->r[10] = c->r[3];
    goto L_261b738;
L_261c8a4:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261cc7c; }
    c->r[3] = 0xfu - c->r[3];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[3]);
    c->r[2] = sh_asr(c->r[2], c->r[3]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261cc94; }
    goto L_261cca0;
L_261c8d4:;
    c->r[1] = 0xau;
    c->r[10] = c->r[3];
    goto L_261b738;
L_261c8e0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
    c->r[2] = c->r[3] - 0xfu;
L_261c8f8:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261c900:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0x1u;
    if (COND_NE) { c->r[2] = 0x9u; }
    goto L_261c9ac;
L_261c910:;
    c->r[1] = 0x9u;
    goto L_261acd0;
L_261c918:;
    c->r[1] = 0xcu;
    goto L_261b15c;
L_261c920:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261c938:;
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261c940:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0xau;
    if (COND_NE) { c->r[2] = 0xcu; }
    goto L_261c9ac;
L_261c950:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261c968:;
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261c970:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0xdu;
    if (COND_NE) { c->r[2] = 0xeu; }
    goto L_261c9ac;
L_261c980:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261c998:;
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261c9a0:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = 0xfu;
    if (COND_NE) { c->r[2] = 0x10u; }
L_261c9ac:;
    c->r[0] = c->r[12] - c->r[4];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CS) { goto L_261ce08; }
    { uint32_t ea = c->r[14] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[14] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[8] = c->r[4];
    c->r[5] = 0x0u;
    c->r[1] = c->r[3] + 0x38u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[3] + 0x54u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[1] = c->r[3] + 0x34u; }
    { uint32_t ea = c->r[3] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] + (c->r[7] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] - 0x2u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[7] = c->r[3] + 0x1u;
    c->r[3] = 0x0u;
L_261c9fc:;
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD8(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_261ca28; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_NE) { goto L_261ca28; }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[4] = c->r[6] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
L_261ca28:;
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_NE) { goto L_261c9fc; }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = c->r[3] - 0x1u;
    { uint32_t ea = c->r[14] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14];
    c->r[14] = 0x261ca54u; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[5] = 0x3u;
    c->r[6] = 0x1u;
    c->r[4] = c->r[8];
    goto L_261ce08;
L_261ca6c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261ca84:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ca90:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0xbu;
    if (COND_NE) { c->r[1] = 0xcu; }
    goto L_261b738;
L_261caa0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261cab8:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cac4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261cb68; }
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261ccb0; }
    c->r[7] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261ccc8; }
    goto L_261ccd4;
L_261cafc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[10] - 0xeu;
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = 0x1eu - c->r[10];
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[1] = sh_lsr(c->r[0], c->r[1]);
L_261cb14:;
    c->r[0] = c->r[3];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261cb20:;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_261cd14; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_EQ) { goto L_261cd44; }
    c->r[10] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_261cd50; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    if (COND_GT) { goto L_261ce18; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ce30; }
    goto L_261ce3c;
L_261cb68:;
    c->r[1] = 0xeu;
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_EQ) { goto L_261cdb4; }
    goto L_261ce08;
L_261cb78:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = 0x7u;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1du - c->r[2];
    c->r[2] = c->r[2] - 0xdu;
    c->r[0] = c->r[0] & sh_lsl(c->r[7], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261cb94:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cb9c:;
    c->r[1] = 0xa0u;
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_CC) { c->r[1] = 0x30u; }
    if (COND_CC) { c->r[1] = c->r[1] + (c->r[0] << 4); }
    goto L_261b920;
L_261cbb0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261cbc8:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cbd4:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = 0xdu;
    if (COND_NE) { c->r[1] = 0xeu; }
    goto L_261b738;
L_261cbe4:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = 0x7u;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1du - c->r[2];
    c->r[2] = c->r[2] - 0xdu;
    c->r[0] = c->r[0] & sh_lsl(c->r[7], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261cc00:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cc0c:;
    (void)f_subs(c, c->r[3], 0x6u);
    if (COND_HI) { goto L_261cf4c; }
    c->r[2] = (c->r[3] << 2);
    c->r[3] = 0x261cc20u + 0x8u;
    c->r[1] = 0xb0u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0x261b920u: goto L_261b920; case 0x261cc44u: goto L_261cc44; case 0x261cf7cu: goto L_261cf7c; case 0x261cf84u: goto L_261cf84; case 0x261cf8cu: goto L_261cf8c; case 0x261cf94u: goto L_261cf94; case 0x261cf9cu: goto L_261cf9c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_261cc44:;
    c->r[1] = 0xc0u;
    goto L_261b920;
L_261cc4c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[0] = sh_lsr(c->r[0], c->r[3]);
L_261cc64:;
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cc6c:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xbu;
    if (COND_NE) { c->r[1] = 0xeu; }
    goto L_261b920;
L_261cc7c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[3];
    c->r[3] = c->r[3] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261cc94:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cca0:;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[1] = 0xfu;
    if (COND_NE) { c->r[1] = 0x10u; }
    goto L_261b738;
L_261ccb0:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[7] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_lsr(c->r[0], c->r[2]);
L_261ccc8:;
    c->r[0] = c->r[1];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ccd4:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261cd0c; }
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261cd7c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261cd94; }
    goto L_261cda0;
L_261cd0c:;
    c->r[1] = 0xfu;
    goto L_261b15c;
L_261cd14:;
    c->r[1] = c->r[0];
    c->r[10] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x10u);
    if (COND_GT) { goto L_261ce4c; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ce64; }
    goto L_261ce70;
L_261cd44:;
    c->r[1] = 0xbu;
    c->r[10] = c->r[2];
    goto L_261ceb0;
L_261cd50:;
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[10], 0x10u);
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    if (COND_GT) { goto L_261ce80; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[10], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261ce98; }
    goto L_261cea4;
L_261cd7c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261cd94:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cda0:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[1] = 0xdu; }
    (void)f_subs(c, c->r[12], c->r[4]);
    if (COND_NE) { goto L_261ce08; }
L_261cdb4:;
    c->r[2] = c->r[0] + 0x4u;
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[2];
    c->r[2] = c->r[1] + c->r[3];
L_261cdcc:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[7] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[7]); }
    if (COND_LT) { goto L_261cdcc; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[14] + 0x34u; ST32(ea, c->r[0]); }
L_261cdf4:;
    c->r[0] = c->r[14];
    c->r[14] = 0x261cdfcu; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    c->r[6] = 0x1u;
L_261ce08:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_2619a48;
L_261ce18:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261ce30:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ce3c:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0x1u;
    if (COND_NE) { c->r[1] = 0xcu; }
    goto L_261ceb0;
L_261ce4c:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261ce64:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261ce70:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0xdu;
    if (COND_NE) { c->r[1] = 0xeu; }
    goto L_261ceb0;
L_261ce80:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261ce98:;
    c->r[0] = c->r[1];
    c->r[10] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cea4:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[1] = 0xfu;
    if (COND_NE) { c->r[1] = 0x10u; }
L_261ceb0:;
    (void)f_subs(c, c->r[12], c->r[4]);
    c->r[7] = c->r[9];
    if (COND_NE) { goto L_2619a48; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[12];
    c->r[4] = c->r[2];
    { uint32_t ea = c->r[14] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[2] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    c->r[2] = c->r[3] + (c->r[4] << 1);
    c->r[3] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_CS) { goto L_261cf00; }
    c->r[9] = c->r[7];
    goto L_261cf24;
L_261cf00:;
    c->r[3] = c->r[2] - 0x1u;
    c->r[9] = c->r[7];
L_261cf08:;
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[7]); }
    if (COND_LT) { goto L_261cf08; }
L_261cf24:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[0] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[14] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[14];
    c->r[14] = 0x261cf38u; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[5];
    c->r[5] = 0x3u;
    c->r[4] = c->r[12];
    goto L_2619a48;
L_261cf4c:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261cfcc; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261cfe4; }
    goto L_261cfec;
L_261cf7c:;
    c->r[1] = 0xd0u;
    goto L_261b920;
L_261cf84:;
    c->r[1] = 0xe0u;
    goto L_261b920;
L_261cf8c:;
    c->r[1] = 0xf0u;
    goto L_261b920;
L_261cf94:;
    c->r[1] = 0x100u;
    goto L_261b920;
L_261cf9c:;
    c->r[1] = c->r[0];
    c->r[2] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261d000; }
    c->r[0] = 0xfu - c->r[10];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[0]);
    c->r[0] = sh_asr(c->r[3], c->r[0]);
    c->r[3] = 0x0u;
    if (COND_EQ) { goto L_261d018; }
    goto L_261d020;
L_261cfcc:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261cfe4:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261cfec:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0x10u;
    c->r[10] = c->r[2];
    if (COND_NE) { c->r[1] = 0x20u; }
    goto L_261b920;
L_261d000:;
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[10];
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = c->r[10] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[0] = sh_lsr(c->r[0], c->r[2]);
L_261d018:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261d020:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = 0xdu;
    c->r[10] = c->r[2];
    if (COND_NE) { c->r[1] = 0xfu; }
    goto L_261b920;
L_261d034:;
    (void)f_subs(c, c->r[1], 0xfdu);
    if (COND_NE) { goto L_261da6c; }
    c->r[1] = c->r[0] - 0x8u;
    c->r[3] = c->r[0] - 0x14u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0xcu;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x10u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x12u; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[10] = (c->r[1] >> 9) & 0xfu;
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] - 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xf4u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[6] = c->r[0];
    c->r[8] = (c->r[0] >> 10) & 0x3fu;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[6] = c->r[6] & 0x3ffu;
    if (COND_NE) { goto L_261d0c0; }
    { uint32_t ea = c->r[14] + 0xeu; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0xcu; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[14] = 0x261d0a8u; f_261f29c(c);
    c->r[1] = c->r[0];
    c->r[0] = c->r[5];
    c->r[2] = 0x10u;
    c->r[14] = 0x261d0b8u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[5] = c->r[0];
L_261d0c0:;
    (void)f_adds(c, c->r[6], c->r[10]);
    c->r[1] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[9] = 0x0u;
    if (COND_EQ) { goto L_261d12c; }
    (void)f_subs(c, c->r[1], c->r[8]);
    c->r[7] = 0x0u;
    if (COND_CC) { goto L_261d130; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_261d0f0; }
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - (c->r[6] << 2);
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[0]); }
L_261d0f0:;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    goto L_261d130;
L_261d0fc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_261da6c; }
    c->r[0] = c->r[0] - 0x4u;
    goto L_261da68;
L_261d10c:;
    c->r[0] = c->r[1] - 0x5u;
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_CS) { c->r[0] = c->r[1] - 0xfau; }
    if (COND_CS) { (void)f_subs(c, c->r[0], 0x2u); }
    if (COND_CS) { goto L_261da6c; }
    c->r[0] = c->r[14] + 0x58u;
    c->r[1] = 0x1b7u;
    c->r[14] = 0x261d12cu; f_283af94(c);
L_261d12c:;
    c->r[7] = 0x0u;
L_261d130:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    c->r[6] = 0x1u;
    c->r[5] = 0x3u;
    c->r[10] = 0x1u;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_261d150;
L_261d148:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_261d150:;
    { uint32_t ea = c->r[14] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_261d15c;
L_261d158:;
    c->r[10] = 0x1u;
L_261d15c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[10];
    goto L_261d170;
L_261d168:;
    c->r[9] = c->r[9] + (c->r[10] << 4);
    c->r[1] = 0x1u;
L_261d170:;
    c->r[3] = c->r[12];
    c->r[10] = c->r[1];
    c->r[1] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261d1a4; }
    c->r[7] = 0xeu - c->r[7];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[5], c->r[7]);
    c->r[2] = sh_asr(c->r[2], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261d1bc; }
    goto L_261d1c8;
L_261d1a4:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1eu - c->r[7];
    c->r[7] = c->r[7] - 0xeu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[2] = sh_lsr(c->r[0], c->r[1]);
L_261d1bc:;
    c->r[12] = c->r[3];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d1c8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261d210; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_261d3b8; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_261d3ec; }
    c->r[3] = c->r[12];
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d240; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[6], c->r[1]);
    c->r[2] = sh_asr(c->r[2], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d258; }
    goto L_261d264;
L_261d210:;
    c->r[2] = c->r[12];
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d270; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d288; }
    goto L_261d294;
L_261d240:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[2] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[2] = sh_lsr(c->r[0], c->r[2]);
L_261d258:;
    c->r[12] = c->r[3];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d264:;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { c->r[2] = 0x0u; }
    goto L_261d360;
L_261d270:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d288:;
    c->r[12] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261d294:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_261d168; }
    c->r[2] = c->r[12];
    c->r[1] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261d2cc; }
    c->r[7] = 0xfu - c->r[7];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[7]);
    c->r[3] = sh_asr(c->r[3], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261d2e4; }
    goto L_261d2f0;
L_261d2cc:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1fu - c->r[7];
    c->r[7] = c->r[7] - 0xfu;
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_lsr(c->r[0], c->r[1]);
L_261d2e4:;
    c->r[12] = c->r[2];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261d2f0:;
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_261d300; }
    c->r[7] = c->r[1];
    goto L_261d3ac;
L_261d300:;
    c->r[2] = c->r[12];
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d330; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d348; }
    goto L_261d354;
L_261d330:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d348:;
    c->r[12] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261d354:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[2] = 0x6u;
    if (COND_EQ) { c->r[2] = 0x7u; }
L_261d360:;
    c->r[1] = c->r[2] & 0x7u;
    (void)f_subs(c, c->r[1], 0x7u);
    if (COND_EQ) { goto L_261da60; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0x261d378u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0x261d168u: goto L_261d168; case 0x261d398u: goto L_261d398; case 0x261d3acu: goto L_261d3ac; case 0x261d3bcu: goto L_261d3bc; case 0x261d3f0u: goto L_261d3f0; case 0x261d5b4u: goto L_261d5b4; case 0x261d940u: goto L_261d940; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_261d398:;
    c->r[9] = 0x0u;
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_261d170; }
    goto L_261d4d0;
L_261d3ac:;
    c->r[9] = c->r[9] + (c->r[10] << 3);
    c->r[1] = 0x1u;
    goto L_261d170;
L_261d3b8:;
    c->r[7] = c->r[1];
L_261d3bc:;
    c->r[3] = c->r[12];
    c->r[1] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261d43c; }
    c->r[7] = 0xeu - c->r[7];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[5], c->r[7]);
    c->r[2] = sh_asr(c->r[2], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261d454; }
    goto L_261d460;
L_261d3ec:;
    c->r[7] = c->r[1];
L_261d3f0:;
    c->r[3] = c->r[12];
    c->r[1] = c->r[7] + 0x3u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261d4a8; }
    c->r[7] = 0xdu - c->r[7];
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[4] = c->r[2] & sh_lsl(c->r[0], c->r[7]);
    c->r[4] = sh_asr(c->r[4], c->r[7]);
    if (COND_NE) { goto L_261d4e0; }
    c->r[0] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
    c->r[7] = 0x3u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[3];
    c->r[14] = (c->r[0] >> 13) & 0x7u;
    goto L_261d5e8;
L_261d43c:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1eu - c->r[7];
    c->r[7] = c->r[7] - 0xeu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[2] = sh_lsr(c->r[0], c->r[1]);
L_261d454:;
    c->r[12] = c->r[3];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d460:;
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_261d548; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_261d554; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_261d584; }
    c->r[2] = c->r[12];
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d63c; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d654; }
    goto L_261d660;
L_261d4a8:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
    c->r[1] = c->r[1] | (c->r[2] << 16);
    c->r[2] = 0x1du - c->r[7];
    c->r[1] = c->r[1] & sh_lsl(c->r[0], c->r[2]);
    c->r[4] = sh_lsr(c->r[1], c->r[2]);
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7] - 0xdu;
    goto L_261d4e4;
L_261d4d0:;
    { uint32_t r = c->r[10] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_261d5fc; }
    c->r[1] = c->r[10];
    goto L_261d60c;
L_261d4e0:;
    c->r[3] = c->r[12];
L_261d4e4:;
    c->r[7] = c->r[1] + 0x3u;
    c->r[0] = c->r[4] + 0x1u;
    c->r[12] = c->r[3] - 0x4u;
    (void)f_subs(c, c->r[7], 0x10u);
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    if (COND_GT) { goto L_261d524; }
    c->r[1] = 0xdu - c->r[1];
    c->r[0] = 0x7u;
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[0], c->r[1]);
    c->r[14] = sh_asr(c->r[2], c->r[1]);
    if (COND_NE) { goto L_261d5e4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[12]); }
    goto L_261d5e8;
L_261d524:;
    { uint32_t ea = c->r[3] - 0x8u; uint32_t v = LD16(ea); c->r[3] = v; }
    c->r[0] = 0x7u;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[12]); }
    c->r[7] = c->r[1] - 0xdu;
    c->r[2] = c->r[3] | (c->r[2] << 16);
    c->r[3] = 0x1du - c->r[1];
    c->r[2] = c->r[2] & sh_lsl(c->r[0], c->r[3]);
    c->r[14] = sh_lsr(c->r[2], c->r[3]);
    goto L_261d5e8;
L_261d548:;
    c->r[3] = 0x0u;
    c->r[7] = c->r[1];
    goto L_261d7a8;
L_261d554:;
    c->r[2] = c->r[12];
    c->r[7] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[2] - 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d670; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[1]);
    c->r[3] = sh_asr(c->r[3], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d688; }
    goto L_261d694;
L_261d584:;
    c->r[3] = c->r[12];
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261d6a4; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[1]);
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d6bc; }
    goto L_261d6c8;
L_261d5b4:;
    c->r[3] = c->r[12];
    c->r[1] = c->r[7] + 0x2u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x10u);
    if (COND_GT) { goto L_261d70c; }
    c->r[7] = 0xeu - c->r[7];
    (void)f_subs(c, c->r[1], 0x10u);
    c->r[2] = c->r[2] & sh_lsl(c->r[5], c->r[7]);
    c->r[2] = sh_asr(c->r[2], c->r[7]);
    c->r[7] = 0x0u;
    if (COND_EQ) { goto L_261d724; }
    goto L_261d730;
L_261d5e4:;
    c->r[12] = c->r[3];
L_261d5e8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_261d15c; }
    goto L_261d970;
L_261d5fc:;
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] - 0x1u;
    c->r[8] = f_adds(c, c->r[8], c->r[0]);
    if (COND_EQ) { c->r[8] = c->r[8] + c->r[0]; }
L_261d60c:;
    (void)f_subs(c, c->r[10], 0x1u);
    c->r[9] = 0x0u;
    c->r[10] = 0x1u;
    if (COND_EQ) { goto L_261d15c; }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_261d620:;
    c->r[2] = f_adds(c, c->r[8], c->r[0]);
    if (COND_EQ) { c->r[2] = c->r[2] + c->r[0]; }
    c->r[8] = f_adds(c, c->r[2], c->r[0]);
    if (COND_EQ) { c->r[8] = c->r[8] + c->r[0]; }
    c->r[1] = f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_261d620; }
    goto L_261d158;
L_261d63c:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d654:;
    c->r[12] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261d660:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x4u;
    if (COND_EQ) { c->r[3] = 0x5u; }
    goto L_261d7a8;
L_261d670:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d688:;
    c->r[12] = c->r[2];
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[2]); }
L_261d694:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x2u;
    if (COND_EQ) { c->r[3] = 0x3u; }
    goto L_261d7a8;
L_261d6a4:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_lsr(c->r[0], c->r[2]);
L_261d6bc:;
    c->r[12] = c->r[3];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d6c8:;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261d6dc; }
    c->r[7] = c->r[2];
    goto L_261d7a8;
L_261d6dc:;
    c->r[1] = c->r[12];
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d778; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261d790; }
    goto L_261d79c;
L_261d70c:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x1eu - c->r[7];
    c->r[7] = c->r[7] - 0xeu;
    c->r[0] = c->r[0] | (c->r[2] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[5], c->r[1]);
    c->r[2] = sh_lsr(c->r[0], c->r[1]);
L_261d724:;
    c->r[12] = c->r[3];
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d730:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_261d7bc; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_261d7c4; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_261d7f4; }
    c->r[3] = c->r[12];
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261d804; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[1]);
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d81c; }
    goto L_261d828;
L_261d778:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d790:;
    c->r[12] = c->r[1];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261d79c:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x6u;
    if (COND_EQ) { c->r[3] = 0x7u; }
L_261d7a8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_261d15c; }
    goto L_261da28;
L_261d7bc:;
    c->r[3] = 0x1u;
    goto L_261d7f8;
L_261d7c4:;
    c->r[3] = c->r[12];
    c->r[2] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] - 0x4u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    (void)f_subs(c, c->r[2], 0x10u);
    if (COND_GT) { goto L_261d864; }
    c->r[1] = 0xfu - c->r[1];
    (void)f_subs(c, c->r[2], 0x10u);
    c->r[7] = c->r[7] & sh_lsl(c->r[6], c->r[1]);
    c->r[7] = sh_asr(c->r[7], c->r[1]);
    c->r[1] = 0x0u;
    if (COND_EQ) { goto L_261d87c; }
    goto L_261d888;
L_261d7f4:;
    c->r[3] = 0x0u;
L_261d7f8:;
    c->r[7] = c->r[1];
    c->r[10] = c->r[3] + 0x4u;
    goto L_261d15c;
L_261d804:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_lsr(c->r[0], c->r[2]);
L_261d81c:;
    c->r[12] = c->r[3];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d828:;
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_EQ) { goto L_261d894; }
    c->r[1] = c->r[12];
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d8d0; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261d8e8; }
    goto L_261d8f4;
L_261d864:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x1fu - c->r[1];
    c->r[1] = c->r[1] - 0xfu;
    c->r[0] = c->r[0] | (c->r[7] << 16);
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[2]);
    c->r[7] = sh_lsr(c->r[0], c->r[2]);
L_261d87c:;
    c->r[12] = c->r[3];
    c->r[2] = c->r[1];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[3]); }
L_261d888:;
    c->r[3] = 0x7u;
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_NE) { goto L_261d8a0; }
L_261d894:;
    c->r[7] = c->r[2];
    c->r[10] = c->r[3] + 0x4u;
    goto L_261d15c;
L_261d8a0:;
    c->r[1] = c->r[12];
    c->r[7] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[7], 0x10u);
    if (COND_GT) { goto L_261d908; }
    c->r[2] = 0xfu - c->r[2];
    (void)f_subs(c, c->r[7], 0x10u);
    c->r[3] = c->r[3] & sh_lsl(c->r[6], c->r[2]);
    c->r[3] = sh_asr(c->r[3], c->r[2]);
    c->r[2] = 0x0u;
    if (COND_EQ) { goto L_261d920; }
    goto L_261d92c;
L_261d8d0:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d8e8:;
    c->r[12] = c->r[1];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261d8f4:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x5u;
    if (COND_EQ) { c->r[3] = 0x6u; }
    c->r[10] = c->r[3] + 0x4u;
    goto L_261d15c;
L_261d908:;
    { uint32_t ea = c->r[12] - 0x8u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | (c->r[3] << 16);
    c->r[3] = 0x1fu - c->r[2];
    c->r[2] = c->r[2] - 0xfu;
    c->r[0] = c->r[0] & sh_lsl(c->r[6], c->r[3]);
    c->r[3] = sh_lsr(c->r[0], c->r[3]);
L_261d920:;
    c->r[12] = c->r[1];
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[1]); }
L_261d92c:;
    (void)f_subs(c, c->r[3], 0x0u);
    c->r[3] = 0x3u;
    if (COND_EQ) { c->r[3] = 0x4u; }
    c->r[10] = c->r[3] + 0x4u;
    goto L_261d15c;
L_261d940:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[10] + c->r[2];
    c->r[10] = 0x1u;
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_LE) { goto L_261d150; }
    goto L_261da60;
L_261d970:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[14] + c->r[9];
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x8u);
    c->r[9] = c->r[4];
    if (COND_LT) { c->r[9] = c->r[9] + 0x1u; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_261da0c; }
    c->r[1] = c->r[12] + 0x4u;
    c->r[3] = f_subs(c, c->r[4], 0x1u);
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[14]); }
    if (COND_EQ) { goto L_261da08; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = c->r[14];
    if (COND_EQ) { goto L_261d9cc; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[4] - 0x2u;
    c->r[1] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[14] + 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_261d9cc:;
    (void)f_subs(c, c->r[4], 0x2u);
    if (COND_EQ) { goto L_261da08; }
    c->r[1] = c->r[1] + 0x2u;
L_261d9d8:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = f_subs(c, c->r[3], 0x2u);
    c->r[2] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[1] - 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[1] + 0x2u;
    if (COND_NE) { goto L_261d9d8; }
L_261da08:;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
L_261da0c:;
    c->r[1] = c->r[12] + 0x4u;
    c->r[9] = c->r[9] + c->r[14];
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[8]); }
    c->r[14] = 0x261da20u; f_2618600(c);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_261d148;
L_261da28:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[12] + 0x4u;
    c->r[9] = c->r[3] + c->r[9];
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x261da54u; f_2618600(c);
    c->r[14] = c->r[4];
    c->r[9] = c->r[9] + 0x2u;
    goto L_261d148;
L_261da60:;
    { uint32_t ea = c->r[14] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_261da68:;
    { uint32_t ea = c->r[14] + 0x18u; ST32(ea, c->r[0]); }
L_261da6c:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
