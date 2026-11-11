#include "cpu.h"
#include "neon_rt.h"
void f_2630d84(Cpu *c);
void f_2631104(Cpu *c);
void f_2631f8c(Cpu *c);
void f_2632394(Cpu *c);
void f_2633080(Cpu *c);
void f_2633558(Cpu *c);
void f_2634238(Cpu *c);
void f_2634760(Cpu *c);
void f_26357a0(Cpu *c);
void f_283aa78(Cpu *c);
void f_283ac04(Cpu *c);
void f_284cba4(Cpu *c);
void f_284cbb0(Cpu *c);
void f_284d030(Cpu *c);
void f_262d8c0(Cpu *restrict c) {
    FN_ENTER(0x262d8c0u);
L_262d8c0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x19cu;
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] + 0x12u; uint32_t v = LD16(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x118u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x114u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x140u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[14] = v; }
    c->r[9] = (uint32_t)(uint16_t)(c->r[14]);
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x126u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_NE) { { uint32_t r = c->r[2] & 0x40u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_2630978; }
    { uint32_t ea = c->r[1] + 0x120u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t r = c->r[10] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2630978; }
    c->r[12] = c->r[6] + 0x28u;
    c->r[2] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_CC) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_HI) { goto L_262d970; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = 0x1u; }
L_262d970:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x12u);
    if (COND_HI) { goto L_262db64; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_262db64; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x10u;
    c->r[0] = c->r[1] + (c->r[14] << 1);
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[9] = v; }
    c->r[0] = c->r[1] + 0x8u;
    c->r[14] = 0x262d9b0u; f_284cba4(c);
    c->r[6] = c->r[0];
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_LT) { goto L_262d9f0; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262d9e8u; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_262d9f0:;
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { goto L_262da0c; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262da08u; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
L_262da0c:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262da28; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262da24u; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
L_262da28:;
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262da44; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262da40u; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
L_262da44:;
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262da60; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262da5cu; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
L_262da60:;
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262da7c; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262da78u; f_284cbb0(c);
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
L_262da7c:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[1] + 0x20u;
    c->r[3] = c->r[0] + 0x20u;
    c->r[2] = c->r[3] ^ c->r[2];
    (void)f_subs(c, c->r[2], 0x3fu);
    if (COND_HI) { { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[1]); } }
    if (COND_HI) { c->r[0] = c->r[1]; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] - c->r[0];
    (void)f_subs(c, c->r[1], 0x7fu);
    if (COND_GT) { goto L_262dac0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x80u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_262dac0:;
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[8] = c->r[4] + 0x1u;
L_262dad0:;
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262dae0u; f_284cbb0(c);
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_262db08; }
    c->r[0] = c->r[6];
    c->r[2] = 0x10u;
    c->r[14] = 0x262db00u; f_284cbb0(c);
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_262db08:;
    c->r[7] = c->r[7] + 0x4u;
    c->r[5] = c->r[5] + 0x4u;
    c->r[9] = c->r[9] + 0x4u;
    c->r[10] = c->r[10] + 0x4u;
    c->r[8] = f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_262dad0; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x8u;
    c->r[2] = 0x10u;
    c->r[4] = c->r[0] + (c->r[4] << 2);
    c->r[0] = c->r[6];
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x262db3cu; f_284cbb0(c);
    { uint32_t ea = c->r[5] + c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xffffffc0u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD16(ea); c->r[9] = v; }
    goto L_262db6c;
L_262db64:;
    c->r[1] = c->r[8] + 0x8u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
L_262db6c:;
    c->r[0] = c->r[0] | 0x1u;
    c->r[4] = c->r[10] & 0x200u;
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_EQ) { goto L_262e048; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
L_262dbbc:;
    c->r[1] = (c->r[6] << 1);
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_EQ) { goto L_262e030; }
    c->r[9] = c->r[1];
    c->r[4] = c->r[1];
    c->r[12] = c->r[1];
    c->r[10] = c->r[1];
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[6]); }
    if (COND_CS) { goto L_262dc88; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = c->r[1];
    c->r[9] = c->r[1];
    c->r[4] = c->r[1];
    c->r[12] = c->r[1];
L_262dc10:;
    c->r[2] = c->r[10];
    c->r[3] = c->r[5];
    c->r[10] = c->r[2] + 0x1u;
L_262dc1c:;
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[5], c->r[14]);
    if (COND_LE) { goto L_262dc34; }
    c->r[9] = c->r[10];
    goto L_262dc40;
L_262dc34:;
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_LT) { c->r[12] = c->r[10]; }
L_262dc40:;
    { uint32_t ea = c->r[7] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_GT) { goto L_262dc6c; }
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    c->r[6] = c->r[10] + 0x1u;
    if (COND_LT) { c->r[4] = c->r[10]; }
    (void)f_subs(c, c->r[10], c->r[8]);
    c->r[10] = c->r[6];
    if (COND_LT) { goto L_262dc1c; }
    goto L_262dc78;
L_262dc6c:;
    (void)f_subs(c, c->r[10], c->r[8]);
    if (COND_LT) { goto L_262dc10; }
    goto L_262dc7c;
L_262dc78:;
    c->r[10] = c->r[2];
L_262dc7c:;
    (void)f_subs(c, c->r[9], c->r[1]);
    c->r[5] = c->r[8];
    if (COND_NE) { c->r[5] = c->r[9] - 0x1u; }
L_262dc88:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[9], c->r[8]);
    if (COND_NE) { c->r[1] = c->r[9] + 0x1u; }
    { uint32_t ea = c->r[2] + c->r[9]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262dcc0; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262dd54; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262dd54; }
L_262dcc0:;
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[8]); }
    if (COND_EQ) { goto L_262dd54; }
    { uint32_t ea = c->r[7] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[6] = f_subs(c, c->r[14], c->r[6]);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[14]); }
    c->r[14] = 0x16u;
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    c->r[3] = f_subs(c, c->r[2], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[14]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_GE) { goto L_262dd20; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_262dd24;
L_262dd20:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
L_262dd24:;
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[2], c->r[8]);
    c->r[5] = 0x16u;
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[5]; c->r[3] = r; }
    c->r[5] = f_subs(c, c->r[14], c->r[6]);
    if (COND_MI) { c->r[5] = 0x0u - c->r[5]; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_GE) { goto L_262dd54; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_262dd54:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], c->r[1]);
    if (COND_NE) { goto L_262dd74; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[5] = c->r[2];
    goto L_262dd80;
L_262dd74:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[12] - 0x1u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
L_262dd80:;
    (void)f_subs(c, c->r[12], c->r[2]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { c->r[1] = c->r[12] + 0x1u; }
    { uint32_t ea = c->r[2] + c->r[12]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262ddb8; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[5]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262de3c; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262de3c; }
L_262ddb8:;
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[9] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[9]); }
    if (COND_EQ) { goto L_262de3c; }
    { uint32_t ea = c->r[7] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[8] = f_subs(c, c->r[14], c->r[6]);
    c->r[6] = 0x16u;
    if (COND_MI) { c->r[8] = 0x0u - c->r[8]; }
    c->r[3] = f_subs(c, c->r[2], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_GE) { goto L_262de10; }
    { uint32_t ea = c->r[0] + (c->r[5] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
L_262de10:;
    c->r[3] = f_subs(c, c->r[2], c->r[9]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = f_subs(c, c->r[14], c->r[6]);
    if (COND_MI) { c->r[5] = 0x0u - c->r[5]; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_GE) { goto L_262de3c; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_262de3c:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_NE) { goto L_262de5c; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[14] = c->r[2];
    goto L_262de68;
L_262de5c:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[14] = c->r[10] - 0x1u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
L_262de68:;
    (void)f_subs(c, c->r[10], c->r[2]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_NE) { c->r[1] = c->r[10] + 0x1u; }
    { uint32_t ea = c->r[2] + c->r[10]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262dea4; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[14]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262df30; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262df30; }
L_262dea4:;
    { uint32_t ea = c->r[7] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[8]); }
    if (COND_EQ) { goto L_262df30; }
    { uint32_t ea = c->r[0] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[9] = f_subs(c, c->r[12], c->r[6]);
    c->r[6] = 0x16u;
    if (COND_MI) { c->r[9] = 0x0u - c->r[9]; }
    c->r[3] = f_subs(c, c->r[2], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_GE) { goto L_262defc; }
    { uint32_t ea = c->r[7] + (c->r[14] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[14] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[7] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
L_262defc:;
    c->r[3] = f_subs(c, c->r[2], c->r[8]);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[14] = r; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = f_subs(c, c->r[12], c->r[6]);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[14], c->r[3]);
    if (COND_GE) { goto L_262df30; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_262df30:;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_NE) { goto L_262df4c; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[12] = c->r[2];
    goto L_262df58;
L_262df4c:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[4] - 0x1u;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
L_262df58:;
    (void)f_subs(c, c->r[4], c->r[2]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { c->r[1] = c->r[4] + 0x1u; }
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262df9c; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[12]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262e030; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_262e030; }
L_262df9c:;
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[14] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[14]); }
    if (COND_EQ) { goto L_262e030; }
    { uint32_t ea = c->r[0] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = f_subs(c, c->r[6], c->r[8]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    c->r[6] = 0x16u;
    if (COND_MI) { c->r[8] = 0x0u - c->r[8]; }
    c->r[3] = f_subs(c, c->r[2], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_GE) { goto L_262dffc; }
    { uint32_t ea = c->r[7] + (c->r[12] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[12] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_262e000;
L_262dffc:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262e000:;
    c->r[3] = f_subs(c, c->r[2], c->r[14]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = f_subs(c, c->r[4], c->r[6]);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_MI) { c->r[4] = 0x0u - c->r[4]; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_GE) { goto L_262e030; }
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
L_262e030:;
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[9]);
    if (COND_NE) { goto L_262dbbc; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_262e04c;
L_262e048:;
    c->r[9] = 0x0u;
L_262e04c:;
    c->r[1] = c->r[10] + (c->r[9] << 1);
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[5] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[5];
    c->r[14] = 0x262e068u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[14] = 0x262e078u; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x580u;
    (void)f_subs(c, c->r[1], 0x7u);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[0] = 0x280u; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[1] = 0x851fu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x51eb0000u;
    c->r[0] = c->r[0] | 0x32u;
    { uint64_t r = (uint64_t)c->r[0] * c->r[1]; c->r[0] = (uint32_t)r; c->r[1] = (uint32_t)(r >> 32); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; } }
    c->r[10] = (c->r[1] >> 5);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_262e120; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262e130; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[13] + 0x9cu;
    c->r[0] = 0x78u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[3] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x262e0f8u; f_2630d84(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[0];
    c->r[0] = 0x78u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[5];
    c->r[14] = 0x262e11cu; f_2631104(c);
    goto L_262e174;
L_262e120:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_262e220;
L_262e130:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[13] + 0x9cu;
    c->r[0] = 0x78u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[3] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x262e150u; f_2631f8c(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[0];
    c->r[0] = 0x78u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[5];
    c->r[14] = 0x262e174u; f_2632394(c);
L_262e174:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262e238; }
L_262e190:;
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x127u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262e220; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_262e69c; }
    { uint32_t ea = c->r[1] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_262e1d0; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[1], 0x80u);
    if (COND_LE) { goto L_262e2ac; }
L_262e1d0:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] - 0x69u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_262e69c; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_LT) { goto L_262e5c8; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_262e564; }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[1] = 0x2u;
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_NE) { goto L_262e574; }
    goto L_262e5c8;
L_262e220:;
    { uint32_t ea = c->r[1] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x7u);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x12cu; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_262e6f8; }
    goto L_262e760;
L_262e238:;
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    if (COND_EQ) { goto L_2630748; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { goto L_262e270; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[1]); }
    goto L_2630748;
L_262e270:;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_LT) { goto L_2630748; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[9] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_26306f8; }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GT) { c->r[2] = c->r[3]; }
    if (COND_GT) { c->r[1] = 0x1u; }
    c->r[3] = 0x2u;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_NE) { goto L_2630708; }
    goto L_2630748;
L_262e2ac:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x28u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[5] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + (c->r[5] << 2); c->r[12] = v; }
    (void)f_subs(c, c->r[5], 0x2u);
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[12];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[12];
    if (COND_CC) { goto L_262e32c; }
    c->r[6] = 0x1u;
    c->r[3] = 0x1u;
    c->r[1] = c->r[12];
    c->r[2] = c->r[12];
L_262e308:;
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LT) { c->r[2] = c->r[6]; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_GT) { c->r[1] = c->r[6]; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_CC) { goto L_262e308; }
L_262e32c:;
    c->r[3] = 0xffffu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[9] + c->r[3];
    c->r[6] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[6] = (c->r[6] << 3);
    c->r[3] = c->r[6] + (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] >> 31);
    c->r[3] = c->r[6] + (uint32_t)((int32_t)c->r[3] >> 1);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[7] - c->r[3];
    c->r[6] = f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[14] + (c->r[14] >> 31);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x1fu);
    c->r[7] = c->r[10] - (uint32_t)((int32_t)c->r[3] >> 1);
    if (COND_GT) { goto L_262e3e0; }
    c->r[3] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[2] = c->r[7] - c->r[2];
    c->r[3] = c->r[3] + c->r[10];
    c->r[10] = c->r[1] - c->r[3];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LE) { (void)f_subs(c, c->r[2], 0x3fu); }
    if (COND_GT) { goto L_262e3c0; }
    c->r[1] = f_subs(c, c->r[8], c->r[7]);
    c->r[6] = c->r[1];
    if (COND_MI) { c->r[6] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[6], 0x41u);
    if (COND_GE) { c->r[1] = 0x0u; }
L_262e3c0:;
    (void)f_subs(c, c->r[10], c->r[2]);
    if (COND_LE) { (void)f_subs(c, c->r[10], 0x3fu); }
    if (COND_LE) { goto L_26307f8; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_2630828; }
    goto L_262e1d0;
L_262e3e0:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = c->r[7] - c->r[2];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[2], 0x3fu);
    if (COND_GT) { goto L_262e408; }
    c->r[2] = f_subs(c, c->r[8], c->r[7]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], 0x49u);
    if (COND_GE) { c->r[8] = c->r[7]; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[8]); }
L_262e408:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] - c->r[2];
    c->r[8] = c->r[2];
    (void)f_subs(c, c->r[1], 0x3fu);
    if (COND_GT) { goto L_262e438; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[2];
    c->r[1] = f_subs(c, c->r[0], c->r[1]);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x49u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[8] = c->r[1] - c->r[0]; }
L_262e438:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { (void)f_subs(c, c->r[8], c->r[2]); }
    if (COND_EQ) { goto L_262e1d0; }
    c->r[0] = 0x400000u;
    (void)f_subs(c, c->r[2], c->r[7]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_262e47c; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] - c->r[7];
    c->r[2] = 0x10u;
    c->r[0] = c->r[8] - c->r[0];
    c->r[14] = 0x262e470u; f_284cba4(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_262e47c:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_262e50c; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[3] = c->r[0] - c->r[7];
    c->r[0] = c->r[8] - c->r[2];
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
L_262e4a0:;
    { uint32_t ea = c->r[4] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_GE) { goto L_262e4b4; }
    c->r[0] = c->r[3] + c->r[0];
    goto L_262e4f4;
L_262e4b4:;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LE) { goto L_262e4c8; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[6] + c->r[0];
    goto L_262e4f4;
L_262e4c8:;
    c->r[1] = c->r[0] - c->r[7];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x10u;
    c->r[6] = c->r[3];
    c->r[14] = 0x262e4dcu; f_284cbb0(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] + c->r[3];
    c->r[3] = c->r[6];
L_262e4f4:;
    c->r[8] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[4] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    c->r[10] = (uint32_t)(uint16_t)(c->r[8]);
    (void)f_subs(c, c->r[10], c->r[5]);
    if (COND_CC) { goto L_262e4a0; }
L_262e50c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_262e1d0; }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_262e520:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 3);
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_LT) { goto L_262e520; }
    goto L_262e1d0;
L_262e564:;
    c->r[1] = 0x1u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_EQ) { goto L_262e5c8; }
L_262e574:;
    c->r[2] = c->r[1] + (c->r[1] << 3);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[5] + (c->r[2] << 2);
    c->r[2] = c->r[2] + 0x44u;
L_262e584:;
    c->r[3] = c->r[0] + (c->r[0] << 3);
    { uint32_t ea = c->r[2] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[5] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x48u;
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { c->r[0] = c->r[1]; }
    c->r[3] = c->r[0] + (c->r[0] << 3);
    c->r[3] = c->r[7] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_LT) { c->r[0] = c->r[1] + 0x1u; }
    c->r[1] = c->r[1] + 0x2u;
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_NE) { goto L_262e584; }
L_262e5c8:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_262e69c; }
    c->r[1] = c->r[0] + (c->r[0] << 3);
    c->r[4] = 0x0u;
    c->r[2] = ~0x0u;
    c->r[12] = c->r[5] + (c->r[1] << 2);
    c->r[1] = 0x93e0u;
    c->r[5] = c->r[5] + 0x10u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = c->r[12] + 0x10u; uint32_t v = LD32(ea); c->r[14] = v; }
L_262e5f0:;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_262e628; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x0u;
    c->r[3] = 0x0u;
    c->r[6] = f_subs(c, c->r[14], c->r[6]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_LT) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[6], 0x10u);
    if (COND_LT) { c->r[3] = 0x1u; }
    { uint32_t r = c->r[7] & c->r[3]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { c->r[2] = c->r[4]; }
    if (COND_NE) { c->r[1] = c->r[6]; }
L_262e628:;
    c->r[4] = c->r[4] + 0x1u;
    c->r[5] = c->r[5] + 0x24u;
    (void)f_subs(c, c->r[9], c->r[4]);
    if (COND_NE) { goto L_262e5f0; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_adds(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_262e69c; }
    c->r[0] = c->r[2] + (c->r[2] << 3);
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[1] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[7] = c->r[1] - (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[3] = c->r[2] + 0x20u;
    c->r[6] = c->r[7] + 0x20u;
    c->r[3] = c->r[3] & 0xffffffc0u;
    c->r[6] = c->r[6] & 0xffffffc0u;
    c->r[2] = f_subs(c, c->r[3], c->r[2]);
    c->r[3] = c->r[2];
    if (COND_MI) { c->r[3] = 0x0u - c->r[2]; }
    c->r[6] = f_subs(c, c->r[6], c->r[7]);
    c->r[5] = c->r[6];
    if (COND_MI) { c->r[5] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[5], c->r[3]);
    if (COND_LT) { c->r[2] = c->r[6]; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
L_262e69c:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262e6b8; }
    c->r[0] = 0x78u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[5];
    c->r[14] = 0x262e6b8u; f_2633080(c);
L_262e6b8:;
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x78u;
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0x262e6dcu; f_2633558(c);
    (void)f_subs(c, c->r[5], 0x7u);
    if (COND_NE) { goto L_262e73c; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[9] = v; }
L_262e6f8:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[13] + 0x9cu;
    c->r[0] = 0x79u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[3] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x262e718u; f_2630d84(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[0];
    c->r[0] = 0x79u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x262e738u; f_2631104(c);
    goto L_262e7a0;
L_262e73c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0x262e74cu; f_284d030(c);
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x12cu; uint32_t v = LD32(ea); c->r[9] = v; }
L_262e760:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = c->r[13] + 0x9cu;
    c->r[0] = 0x79u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[9]); }
    c->r[3] = c->r[5];
    c->r[1] = c->r[6];
    c->r[14] = 0x262e780u; f_2631f8c(c);
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[0];
    c->r[0] = 0x79u;
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0x262e7a0u; f_2632394(c);
L_262e7a0:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[12] = c->r[0];
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_262e868; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[7] = c->r[0] - (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[3] = c->r[2] + 0x20u;
    c->r[6] = c->r[7] + 0x20u;
    c->r[0] = c->r[0] - (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] & 0xffffffc0u;
    c->r[6] = c->r[6] & 0xffffffc0u;
    c->r[2] = f_subs(c, c->r[3], c->r[2]);
    c->r[3] = c->r[2];
    if (COND_MI) { c->r[3] = 0x0u - c->r[2]; }
    c->r[7] = f_subs(c, c->r[6], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_MI) { c->r[6] = 0x0u - c->r[7]; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { c->r[2] = c->r[7]; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[12] + (c->r[12] << 3);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[1] - 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] - 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[7] = c->r[0] - (uint32_t)((int32_t)c->r[1] >> 1);
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[3] = c->r[2] + 0x20u;
    c->r[6] = c->r[7] + 0x20u;
    c->r[0] = c->r[0] + (uint32_t)((int32_t)c->r[1] >> 1);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[3] & 0xffffffc0u;
    c->r[6] = c->r[6] & 0xffffffc0u;
    c->r[2] = f_subs(c, c->r[3], c->r[2]);
    c->r[3] = c->r[2];
    if (COND_MI) { c->r[3] = 0x0u - c->r[2]; }
    c->r[7] = f_subs(c, c->r[6], c->r[7]);
    c->r[6] = c->r[7];
    if (COND_MI) { c->r[6] = 0x0u - c->r[7]; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_LT) { c->r[2] = c->r[7]; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[1] + 0x148u; ST32(ea, c->r[0]); }
L_262e868:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x12u);
    if (COND_HI) { goto L_262fd10; }
    c->r[1] = 0x262e87cu + 0xcu;
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x262e8d4u: goto L_262e8d4; case 0x262ed20u: goto L_262ed20; case 0x262ed7cu: goto L_262ed7c; case 0x262ed9cu: goto L_262ed9c; case 0x262ede4u: goto L_262ede4; case 0x262ee40u: goto L_262ee40; case 0x262ee9cu: goto L_262ee9c; case 0x262eef8u: goto L_262eef8; case 0x262ef7cu: goto L_262ef7c; case 0x262f070u: goto L_262f070; case 0x262f164u: goto L_262f164; case 0x262f258u: goto L_262f258; case 0x262f34cu: goto L_262f34c; case 0x262f440u: goto L_262f440; case 0x262f4f8u: goto L_262f4f8; case 0x262fd10u: goto L_262fd10; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_262e8d4:;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[9]); }
    c->r[6] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 1);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[1] - 0x2u; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[1] = c->r[6] + 0x4u;
L_262e8fc:;
    c->r[3] = c->r[4] + c->r[2];
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x20u;
    c->r[7] = c->r[7] & 0xffffffc0u;
    { uint32_t ea = c->r[6] + c->r[2]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x20u;
    c->r[3] = c->r[3] & 0xffffffc0u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[2], 0xe0u);
    if (COND_NE) { goto L_262e8fc; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[1], 0x2cu);
    if (COND_GE) { { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_GE) { { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_GE) { c->r[1] = c->r[2] - c->r[1]; }
    if (COND_GE) { (void)f_subs(c, c->r[1], 0x2bu); }
    if (COND_GT) { goto L_262e970; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
L_262e970:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_262ea8c; }
    c->r[0] = c->r[0] + 0x4u;
    c->r[6] = 0x0u;
    c->r[5] = c->r[3];
    c->r[8] = 0x0u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0x4u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
L_262e9b8:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->r[6] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], c->r[2]);
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_LT) { c->r[7] = c->r[6]; }
    (void)f_subs(c, c->r[10], c->r[2]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_GT) { c->r[8] = c->r[6]; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GT) { c->r[5] = c->r[1]; }
    (void)f_subs(c, c->r[1], c->r[3]);
    if (COND_LT) { c->r[5] = c->r[0]; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[3] = c->r[1]; }
    c->r[0] = f_subs(c, c->r[10], c->r[0]);
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_GT) { goto L_262ea40; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[4] = c->r[3];
    c->r[14] = 0x262ea24u; f_26357a0(c);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[4];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_262ea40; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    goto L_262ea80;
L_262ea40:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = f_subs(c, c->r[10], c->r[0]);
    if (COND_MI) { c->r[0] = 0x0u - c->r[0]; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_GT) { goto L_262ea80; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[6];
    c->r[4] = c->r[3];
    c->r[14] = 0x262ea64u; f_26357a0(c);
    (void)f_adds(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[3] = c->r[4];
    if (COND_EQ) { c->r[0] = c->r[6]; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_262ea80:;
    (void)f_subs(c, c->r[14], c->r[6]);
    if (COND_NE) { goto L_262e9b8; }
    goto L_262eaa8;
L_262ea8c:;
    c->r[0] = ~0x0u;
    c->r[7] = 0x0u;
    c->r[8] = 0x0u;
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_262eaa8:;
    c->r[10] = c->r[3];
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262eb08; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[12] + (c->r[12] << 3);
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->r[2] = c->r[12] + 0x1u;
    c->r[1] = c->r[1] - 0x14u;
L_262eacc:;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + (c->r[6] >> 31);
    c->r[4] = c->r[3] - 0x1u;
    c->r[4] = c->r[4] - (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LE) { c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1); }
    if (COND_LE) { c->r[3] = c->r[3] + c->r[6]; }
    if (COND_LE) { c->r[3] = c->r[3] + 0x1u; }
    if (COND_LE) { (void)f_subs(c, c->r[0], c->r[3]); }
    if (COND_LE) { goto L_262eba8; }
    c->r[2] = c->r[2] - 0x1u;
    c->r[1] = c->r[1] - 0x24u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_GT) { goto L_262eacc; }
L_262eb08:;
    c->r[0] = c->r[12] + (c->r[12] << 3);
    c->r[12] = c->r[12] + 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[8]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
L_262eb54:;
    c->r[2] = c->r[3];
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_EQ) { goto L_262eb9c; }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_NE) { goto L_262eb9c; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[1] = c->r[3];
    if (COND_CS) { goto L_262eba8; }
L_262eb9c:;
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_LT) { goto L_262eb54; }
L_262eba8:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262ec04; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    c->r[0] = 0x0u;
L_262ebc4:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + (c->r[6] >> 31);
    c->r[4] = c->r[3] - 0x1u;
    c->r[4] = c->r[4] - (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_LE) { c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1); }
    if (COND_LE) { c->r[3] = c->r[3] + c->r[6]; }
    if (COND_LE) { c->r[3] = c->r[3] + 0x1u; }
    if (COND_LE) { (void)f_subs(c, c->r[1], c->r[3]); }
    if (COND_LE) { goto L_262ec08; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + 0x24u;
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_LT) { goto L_262ebc4; }
    goto L_262ec08;
L_262ec04:;
    c->r[0] = 0x0u;
L_262ec08:;
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_NE) { goto L_262ecb8; }
    c->r[0] = c->r[12] + (c->r[12] << 3);
    c->r[12] = c->r[12] + 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[7]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262ec60:;
    c->r[2] = c->r[3];
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_262eca8; }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_NE) { goto L_262eca8; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[1] = c->r[3];
    if (COND_CS) { goto L_262ecbc; }
L_262eca8:;
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_LT) { goto L_262ec60; }
    goto L_262ecbc;
L_262ecb8:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262ecbc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_262f6b8; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262f5f8; }
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[0] + 0x10u;
    c->r[0] = 0x0u;
L_262ece0:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[6] + (c->r[6] >> 31);
    c->r[4] = c->r[3] - 0x1u;
    c->r[4] = c->r[4] - (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_LE) { c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1); }
    if (COND_LE) { c->r[3] = c->r[3] + c->r[6]; }
    if (COND_LE) { c->r[3] = c->r[3] + 0x1u; }
    if (COND_LE) { (void)f_subs(c, c->r[1], c->r[3]); }
    if (COND_LE) { goto L_262f5fc; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[2] + 0x24u;
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_LT) { goto L_262ece0; }
    goto L_262f5fc;
L_262ed20:;
    { uint32_t ea = c->r[4] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_262fd10; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[0] + 0x20u;
    c->r[3] = c->r[12];
    c->r[1] = c->r[1] & 0xffffffc0u;
    c->r[2] = c->r[2] + 0x10u;
L_262ed44:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] >> 31);
    c->r[6] = c->r[6] - (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[6] = f_subs(c, c->r[6], c->r[0]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x1fu);
    if (COND_LE) { c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1); }
    if (COND_LE) { c->r[7] = c->r[7] + c->r[1]; }
    if (COND_LE) { { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); } }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[2] = c->r[2] + 0x24u;
    if (COND_NE) { goto L_262ed44; }
    goto L_262fd10;
L_262ed7c:;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_262edb8;
L_262ed9c:;
    { uint32_t ea = c->r[4] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
L_262edb8:;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[12];
    c->r[3] = c->r[8];
    c->r[0] = (c->r[0] << 6);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x8cu;
    c->r[14] = 0x262eddcu; f_2634238(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_262fd10;
L_262ede4:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262fd10; }
    { uint32_t ea = c->r[4] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[12];
    c->r[1] = c->r[0] + 0x20u;
    c->r[2] = c->r[2] + 0x10u;
    c->r[1] = c->r[1] & 0xffffffc0u;
L_262ee04:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] >> 31);
    c->r[5] = (uint32_t)((int32_t)c->r[7] >> 1) - c->r[0];
    c->r[6] = f_adds(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x3fu);
    if (COND_LE) { c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1); }
    if (COND_LE) { c->r[7] = c->r[1] - c->r[7]; }
    if (COND_LE) { { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); } }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[2] = c->r[2] + 0x24u;
    if (COND_NE) { goto L_262ee04; }
    goto L_262fd10;
L_262ee40:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262fd10; }
    { uint32_t ea = c->r[4] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[12];
    c->r[1] = c->r[0] + 0x20u;
    c->r[2] = c->r[2] + 0x10u;
    c->r[1] = c->r[1] & 0xffffffc0u;
L_262ee60:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] >> 31);
    c->r[5] = (uint32_t)((int32_t)c->r[7] >> 1) - c->r[0];
    c->r[6] = f_adds(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x3fu);
    if (COND_LE) { c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1); }
    if (COND_LE) { c->r[7] = c->r[1] - c->r[7]; }
    if (COND_LE) { { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); } }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[2] = c->r[2] + 0x24u;
    if (COND_NE) { goto L_262ee60; }
    goto L_262fd10;
L_262ee9c:;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262fd10; }
    { uint32_t ea = c->r[4] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[12];
    c->r[1] = c->r[0] + 0x20u;
    c->r[2] = c->r[2] + 0x10u;
    c->r[1] = c->r[1] & 0xffffffc0u;
L_262eebc:;
    { uint32_t ea = c->r[2] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] >> 31);
    c->r[5] = (uint32_t)((int32_t)c->r[7] >> 1) - c->r[0];
    c->r[6] = f_adds(c, c->r[5], c->r[6]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x3fu);
    if (COND_LE) { c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1); }
    if (COND_LE) { c->r[7] = c->r[1] - c->r[7]; }
    if (COND_LE) { { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[7]); } }
    c->r[3] = f_subs(c, c->r[3], 0x1u);
    c->r[2] = c->r[2] + 0x24u;
    if (COND_NE) { goto L_262eebc; }
    goto L_262fd10;
L_262eef8:;
    { uint32_t ea = c->r[4] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    if (COND_LT) { goto L_262fd10; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[1] + 0x20u;
    c->r[6] = c->r[12];
    c->r[12] = c->r[0] + 0x20u;
    c->r[12] = c->r[12] & 0xffffffc0u;
    c->r[3] = c->r[3] & 0xffffffc0u;
    c->r[7] = c->r[2] + 0x10u;
L_262ef2c:;
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[2] + (c->r[2] >> 31);
    c->r[2] = (uint32_t)((int32_t)c->r[5] >> 1) - c->r[0];
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 1);
    c->r[2] = f_adds(c, c->r[2], c->r[4]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], 0x1fu);
    if (COND_LE) { c->r[2] = c->r[12] - c->r[5]; }
    if (COND_LE) { { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); } }
    c->r[2] = c->r[4] - c->r[5];
    c->r[2] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], 0x1fu);
    if (COND_LE) { c->r[2] = c->r[5] + c->r[3]; }
    if (COND_LE) { { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); } }
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    c->r[7] = c->r[7] + 0x24u;
    if (COND_NE) { goto L_262ef2c; }
    goto L_262f5ec;
L_262ef7c:;
    { uint32_t ea = c->r[4] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x8cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[0] = 0x20u - c->r[10];
    c->r[14] = c->r[10] + 0x20u;
    c->r[5] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = c->r[14] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[9];
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[8] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[12];
L_262efe4:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[14];
    c->r[4] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[12] = f_subs(c, c->r[10], c->r[1]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[12], 0x20u);
    if (COND_LT) { goto L_262f024; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f02c; }
L_262f024:;
    c->r[1] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f02c:;
    c->r[1] = c->r[3] - c->r[4];
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[3] = c->r[5];
    if (COND_LT) { goto L_262f058; }
    c->r[1] = f_subs(c, c->r[9], c->r[1]);
    c->r[3] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f060; }
L_262f058:;
    c->r[1] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f060:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x24u;
    if (COND_NE) { goto L_262efe4; }
    goto L_262f5e8;
L_262f070:;
    { uint32_t ea = c->r[4] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x9cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xa4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[0] = 0x20u - c->r[10];
    c->r[14] = c->r[10] + 0x20u;
    c->r[5] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = c->r[14] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[9];
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[8] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[12];
L_262f0d8:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[14];
    c->r[4] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[12] = f_subs(c, c->r[10], c->r[1]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[12], 0x20u);
    if (COND_LT) { goto L_262f118; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f120; }
L_262f118:;
    c->r[1] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f120:;
    c->r[1] = c->r[3] - c->r[4];
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[3] = c->r[5];
    if (COND_LT) { goto L_262f14c; }
    c->r[1] = f_subs(c, c->r[9], c->r[1]);
    c->r[3] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f154; }
L_262f14c:;
    c->r[1] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f154:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x24u;
    if (COND_NE) { goto L_262f0d8; }
    goto L_262f5e8;
L_262f164:;
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xacu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[0] = 0x20u - c->r[10];
    c->r[14] = c->r[10] + 0x20u;
    c->r[5] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = c->r[14] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[9];
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[8] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[12];
L_262f1cc:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[14];
    c->r[4] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[12] = f_subs(c, c->r[10], c->r[1]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[12], 0x20u);
    if (COND_LT) { goto L_262f20c; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f214; }
L_262f20c:;
    c->r[1] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f214:;
    c->r[1] = c->r[3] - c->r[4];
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[3] = c->r[5];
    if (COND_LT) { goto L_262f240; }
    c->r[1] = f_subs(c, c->r[9], c->r[1]);
    c->r[3] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f248; }
L_262f240:;
    c->r[1] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f248:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x24u;
    if (COND_NE) { goto L_262f1cc; }
    goto L_262f5e8;
L_262f258:;
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[0] = 0x20u - c->r[10];
    c->r[14] = c->r[10] + 0x20u;
    c->r[5] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = c->r[14] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[9];
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[8] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[12];
L_262f2c0:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[14];
    c->r[4] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[12] = f_subs(c, c->r[10], c->r[1]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[12], 0x20u);
    if (COND_LT) { goto L_262f300; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f308; }
L_262f300:;
    c->r[1] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f308:;
    c->r[1] = c->r[3] - c->r[4];
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[3] = c->r[5];
    if (COND_LT) { goto L_262f334; }
    c->r[1] = f_subs(c, c->r[9], c->r[1]);
    c->r[3] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f33c; }
L_262f334:;
    c->r[1] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f33c:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x24u;
    if (COND_NE) { goto L_262f2c0; }
    goto L_262f5e8;
L_262f34c:;
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xbcu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[0] = 0x20u - c->r[10];
    c->r[14] = c->r[10] + 0x20u;
    c->r[5] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = c->r[14] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[9];
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[8] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[12];
L_262f3b4:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[14];
    c->r[4] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[12] = f_subs(c, c->r[10], c->r[1]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[12], 0x20u);
    if (COND_LT) { goto L_262f3f4; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f3fc; }
L_262f3f4:;
    c->r[1] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f3fc:;
    c->r[1] = c->r[3] - c->r[4];
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[3] = c->r[5];
    if (COND_LT) { goto L_262f428; }
    c->r[1] = f_subs(c, c->r[9], c->r[1]);
    c->r[3] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f430; }
L_262f428:;
    c->r[1] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f430:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x24u;
    if (COND_NE) { goto L_262f3b4; }
    goto L_262f5e8;
L_262f440:;
    { uint32_t ea = c->r[4] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xdcu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[14]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[3] = c->r[1] + 0x20u;
    c->r[4] = c->r[12];
    c->r[8] = c->r[0] + 0x20u;
    c->r[2] = c->r[3] - c->r[14];
    c->r[8] = c->r[8] & 0xffffffc0u;
    c->r[3] = c->r[3] & 0xffffffc0u;
    c->r[2] = c->r[2] & 0xffffffc0u;
    c->r[12] = c->r[1] - c->r[2];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[2] + 0x10u;
L_262f48c:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[6] + (c->r[6] >> 31);
    c->r[6] = c->r[2] + (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[7] = (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[2] = c->r[2] - c->r[7];
    c->r[6] = f_subs(c, c->r[0], c->r[6]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x1fu);
    if (COND_LE) { c->r[6] = c->r[8] - c->r[7]; }
    if (COND_LE) { { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[6]); } }
    c->r[6] = f_subs(c, c->r[1], c->r[2]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x20u);
    c->r[6] = c->r[3];
    if (COND_LT) { goto L_262f4e0; }
    c->r[2] = f_subs(c, c->r[14], c->r[2]);
    c->r[6] = c->r[12];
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], 0x1fu);
    if (COND_GT) { goto L_262f4e8; }
L_262f4e0:;
    c->r[2] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[2]); }
L_262f4e8:;
    c->r[4] = f_subs(c, c->r[4], 0x1u);
    c->r[5] = c->r[5] + 0x24u;
    if (COND_NE) { goto L_262f48c; }
    goto L_262f5e8;
L_262f4f8:;
    { uint32_t ea = c->r[4] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xe8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xecu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[9]); }
    if (COND_LT) { goto L_262fd10; }
    c->r[0] = 0x20u - c->r[10];
    c->r[14] = c->r[10] + 0x20u;
    c->r[5] = c->r[2] + 0x20u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + c->r[1];
    c->r[14] = c->r[14] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[0] = c->r[0] + c->r[14];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] - c->r[9];
    c->r[5] = c->r[5] & 0xffffffc0u;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[8] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x10u;
    c->r[0] = c->r[12];
L_262f560:;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[14];
    c->r[4] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[3] + (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[4] >> 1);
    c->r[12] = f_subs(c, c->r[10], c->r[1]);
    if (COND_MI) { c->r[12] = 0x0u - c->r[12]; }
    (void)f_subs(c, c->r[12], 0x20u);
    if (COND_LT) { goto L_262f5a0; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = f_subs(c, c->r[7], c->r[1]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f5a8; }
L_262f5a0:;
    c->r[1] = c->r[7] - c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f5a8:;
    c->r[1] = c->r[3] - c->r[4];
    c->r[3] = f_subs(c, c->r[2], c->r[1]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x20u);
    c->r[3] = c->r[5];
    if (COND_LT) { goto L_262f5d4; }
    c->r[1] = f_subs(c, c->r[9], c->r[1]);
    c->r[3] = c->r[8];
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_262f5dc; }
L_262f5d4:;
    c->r[1] = c->r[3] + c->r[4];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[1]); }
L_262f5dc:;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    c->r[6] = c->r[6] + 0x24u;
    if (COND_NE) { goto L_262f560; }
L_262f5e8:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_262f5ec:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_262fd10;
L_262f5f8:;
    c->r[0] = 0x0u;
L_262f5fc:;
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_NE) { goto L_262f6b4; }
    c->r[0] = c->r[12] + (c->r[12] << 3);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262f658:;
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_262f6a4; }
    { uint32_t ea = c->r[9] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_NE) { goto L_262f6a4; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[1] = c->r[3];
    if (COND_CS) { goto L_262f6b8; }
L_262f6a4:;
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_LT) { goto L_262f658; }
    goto L_262f6b8;
L_262f6b4:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
L_262f6b8:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_LT) { goto L_262f770; }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_262f770; }
    c->r[0] = c->r[12] + (c->r[12] << 3);
    c->r[12] = c->r[12] + 0x1u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[8]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x2u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x6u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); c->r[0] = ea; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[5]); }
L_262f71c:;
    c->r[2] = c->r[3];
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_EQ) { goto L_262f764; }
    { uint32_t ea = c->r[9] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_NE) { goto L_262f764; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    c->r[1] = c->r[3];
    if (COND_CS) { goto L_262f770; }
L_262f764:;
    c->r[3] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_LT) { goto L_262f71c; }
L_262f770:;
    (void)f_subs(c, c->r[12], 0x1u);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[12]); }
    if (COND_LT) { goto L_262f87c; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + 0x10u;
L_262f79c:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[3] + (c->r[3] >> 31);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[1] + (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[4] = (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = f_subs(c, c->r[7], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x1fu);
    if (COND_GT) { goto L_262f7d0; }
    c->r[1] = c->r[2] - c->r[4];
    goto L_262f868;
L_262f7d0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = f_subs(c, c->r[7], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x1fu);
    if (COND_GT) { goto L_262f7f0; }
    c->r[1] = c->r[9] - c->r[4];
    goto L_262f868;
L_262f7f0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = f_subs(c, c->r[7], c->r[3]);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0x2fu);
    if (COND_GT) { goto L_262f810; }
    c->r[1] = c->r[8] - c->r[4];
    goto L_262f868;
L_262f810:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = f_subs(c, c->r[7], c->r[3]);
    if (COND_MI) { c->r[7] = 0x0u - c->r[7]; }
    (void)f_subs(c, c->r[7], 0x2fu);
    if (COND_GT) { goto L_262f830; }
    c->r[1] = c->r[14] - c->r[4];
    goto L_262f868;
L_262f830:;
    c->r[1] = c->r[1] - (uint32_t)((int32_t)c->r[6] >> 1);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = f_subs(c, c->r[1], c->r[6]);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x2fu);
    if (COND_GT) { goto L_262f854; }
    c->r[1] = c->r[4] + c->r[12];
    goto L_262f868;
L_262f854:;
    c->r[1] = f_subs(c, c->r[1], c->r[3]);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x2fu);
    if (COND_GT) { goto L_262f86c; }
    c->r[1] = c->r[4] + c->r[14];
L_262f868:;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_262f86c:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    c->r[0] = c->r[0] + 0x24u;
    if (COND_NE) { goto L_262f79c; }
L_262f87c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[2], 0x20u);
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_CS) { c->r[2] = 0x20u; }
    (void)f_subs(c, c->r[2], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x134u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[0] + 0x130u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x138u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x13cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[14]); }
    if (COND_EQ) { goto L_262fa04; }
    c->r[0] = 0x0u;
L_262f8f8:;
    c->r[1] = c->r[14] + (c->r[0] << 1);
    c->r[3] = (c->r[0] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[6] = v; }
    goto L_262f92c;
L_262f928:;
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[6] = v; }
L_262f92c:;
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_HI) { goto L_262f9ac; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[5] = c->r[10];
    if (COND_LE) { goto L_262f95c; }
    { uint32_t ea = c->r[5] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    goto L_262f974;
L_262f95c:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    c->r[5] = c->r[4];
    if (COND_LT) { { uint32_t ea = c->r[5] + (c->r[0] << 2); ST32(ea, c->r[3]); } }
L_262f974:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[9] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[9] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_LE) { goto L_262f994; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    goto L_262f928;
L_262f994:;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[9] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_LT) { { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[3]); } }
    goto L_262f928;
L_262f9ac:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CC) { goto L_262f8f8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[9];
    c->r[9] = 0x0u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_CC) { goto L_262fa70; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[5] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_262fa1c; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[2]; }
    if (COND_LT) { c->r[0] = 0x1u; }
    c->r[2] = 0x2u;
    goto L_262fa24;
L_262fa04:;
    c->r[0] = 0x0u;
    c->r[9] = 0x0u;
    c->r[14] = 0x262fa10u; f_2634760(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_262faf0;
L_262fa1c:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1u;
L_262fa24:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[5], 0x2u);
    if (COND_EQ) { goto L_262fa70; }
L_262fa38:;
    c->r[3] = c->r[7];
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_LT) { c->r[1] = c->r[6]; }
    if (COND_LT) { c->r[0] = c->r[2]; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_LT) { c->r[0] = c->r[2] + 0x1u; }
    c->r[2] = c->r[2] + 0x2u;
    if (COND_LT) { c->r[1] = c->r[3]; }
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_CC) { goto L_262fa38; }
L_262fa70:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[4];
    c->r[14] = 0x262fa7cu; f_2634760(c);
    c->r[7] = c->r[0];
    c->r[6] = c->r[13] + 0xb8u;
L_262fa84:;
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    c->r[14] = 0x262fa90u; f_2634760(c);
    (void)f_subs(c, c->r[0], c->r[7]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[6] + c->r[9]; ST8(ea, c->r[0]); }
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], c->r[5]);
    if (COND_CC) { goto L_262fa84; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    c->r[9] = 0x0u;
L_262fac4:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] - c->r[2];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_GT) { c->r[9] = c->r[0]; }
    c->r[0] = c->r[0] + 0x1u;
    if (COND_GT) { c->r[1] = c->r[2]; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CC) { goto L_262fac4; }
L_262faf0:;
    { uint32_t ea = c->r[10] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x20u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_262fb1c; }
L_262fb10:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    goto L_262fd10;
L_262fb1c:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262fd0c; }
    { uint32_t ea = c->r[14] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x20u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GT) { goto L_262fd0c; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
    c->r[3] = 0x0u;
L_262fb54:;
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + 0x2u;
    c->r[2] = c->r[2] + 0x2u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { c->r[4] = c->r[13] + 0xb8u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + c->r[3]; ST8(ea, c->r[0]); } }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_CC) { goto L_262fb54; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[4] = c->r[13] + 0xb8u;
    goto L_262fb9c;
L_262fb94:;
    { uint32_t ea = c->r[4] + c->r[2]; ST8(ea, c->r[1]); }
    goto L_262fc38;
L_262fb9c:;
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262fc38; }
    c->r[3] = 0x0u;
L_262fbac:;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_262fc2c; }
    { uint32_t ea = c->r[14] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LE) { goto L_262fc2c; }
    { uint32_t ea = c->r[10] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_262fc2c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LE) { goto L_262fc2c; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_262fb94; }
L_262fc2c:;
    c->r[3] = c->r[3] + 0x1u;
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_CC) { goto L_262fbac; }
L_262fc38:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[5]);
    if (COND_CC) { goto L_262fb9c; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
L_262fc54:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_GE) { goto L_262fc78; }
    c->r[2] = 0x0u;
    c->r[3] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[3] + c->r[0]; ST8(ea, c->r[2]); }
    goto L_262fc80;
L_262fc78:;
    c->r[2] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
L_262fc80:;
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_262fc54; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262fd0c; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_262fcfc; }
    c->r[0] = 0x0u;
L_262fcac:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2] + (c->r[2] << 3);
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[6] + (c->r[6] >> 31);
    c->r[3] = c->r[3] - c->r[5];
    c->r[5] = c->r[4];
    c->r[3] = c->r[3] + (uint32_t)((int32_t)c->r[12] >> 1);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_MI) { c->r[3] = 0x0u - c->r[3]; }
    (void)f_subs(c, c->r[3], 0xfu);
    if (COND_LE) { goto L_2630980; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_LT) { goto L_262fcac; }
L_262fcfc:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_EQ) { goto L_2630998; }
    goto L_2630aa8;
L_262fd0c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
L_262fd10:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262fd34; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x79u;
    c->r[1] = c->r[12];
    c->r[4] = c->r[12];
    c->r[14] = 0x262fd30u; f_2633080(c);
    c->r[12] = c->r[4];
L_262fd34:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x79u;
    c->r[2] = c->r[12];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[14] = 0x262fd54u; f_2633558(c);
    (void)f_subs(c, c->r[4], 0x7u);
    if (COND_EQ) { goto L_262fde4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x3au; ST8(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x262fd6cu; f_284d030(c);
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x152u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x7u);
    if (COND_NE) { goto L_262fde4; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_262fde4; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
L_262fd9c:;
    c->r[2] = c->r[3] + c->r[7];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[1] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[1]);
    if (COND_EQ) { goto L_262fdcc; }
    c->r[1] = c->r[5] + c->r[7];
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
L_262fdcc:;
    c->r[1] = c->r[2] + c->r[7];
    c->r[7] = c->r[7] + 0x2u;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); ST32(ea, c->r[6]); }
    if (COND_NE) { goto L_262fd9c; }
L_262fde4:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_NE) { goto L_2630968; }
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD16(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_2630968; }
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[14]); }
L_262fe44:;
    c->r[0] = c->r[10] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[12] + (c->r[7] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[8], c->r[2]);
    if (COND_NE) { goto L_262fe64; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_2630000;
L_262fe64:;
    c->r[5] = c->r[8] + 0x1u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[7]); }
    c->r[6] = (uint32_t)(uint16_t)(c->r[5]);
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LS) { goto L_262fe88; }
    c->r[3] = c->r[8];
    c->r[1] = c->r[8];
    c->r[4] = c->r[8];
    goto L_262ff20;
L_262fe88:;
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x0u;
    c->r[3] = c->r[8];
    c->r[1] = c->r[8];
    c->r[4] = c->r[8];
L_262fea0:;
    c->r[14] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[9] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[9] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[12], c->r[7]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_LT) { c->r[3] = c->r[5]; }
    (void)f_subs(c, c->r[12], c->r[7]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[12] = c->r[2];
    { uint32_t ea = c->r[10] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_GT) { c->r[4] = c->r[5]; }
    (void)f_subs(c, c->r[2], c->r[7]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[10] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_LT) { c->r[8] = c->r[5]; }
    (void)f_subs(c, c->r[2], c->r[7]);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_GT) { c->r[1] = c->r[5]; }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[0] = c->r[2] | c->r[0];
    c->r[2] = c->r[12];
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_LS) { goto L_262fea0; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; }
    c->r[9] = c->r[10];
    if (COND_NE) { goto L_262ffe8; }
L_262ff20:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[8]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[9] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] - c->r[2];
    (void)f_subs(c, c->r[2], 0xbfu);
    if (COND_GT) { goto L_262ffe8; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[12] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[6] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[7] - c->r[2];
    (void)f_subs(c, c->r[2], 0xbfu);
    if (COND_GT) { goto L_262fff0; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[7] = c->r[13] + 0xb8u;
    c->r[2] = (c->r[9] << 3) - c->r[9];
    c->r[9] = c->r[9] + 0x1u;
    (void)f_subs(c, c->r[9], 0x4u);
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[7]); }
    { uint32_t ea = c->r[2] + 0x4u; ST16(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x2u; ST16(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[2] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x8u; ST16(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x6u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_2630000; }
    goto L_2630968;
L_262ffe8:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    goto L_262fff8;
L_262fff0:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
L_262fff8:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
L_2630000:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_CC) { goto L_262fe44; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[2], 0x4u);
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[0] = 0x1u; }
    { uint32_t r = c->r[0] ^ c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_2630968; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_2630968; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[13] + 0xb8u;
    c->r[5] = 0x0u;
    c->r[3] = 0x0u;
    c->r[12] = c->r[0] + 0x34u;
    c->r[2] = c->r[4] - 0x1u;
L_2630058:;
    c->r[0] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_GE) { goto L_26300bc; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[4] = c->r[13] + 0xb8u;
    c->r[0] = c->r[2] - c->r[1];
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[6] = c->r[12] + (c->r[1] << 2);
    c->r[1] = (c->r[5] << 3) - c->r[5];
    c->r[1] = c->r[4] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
L_2630088:;
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = f_subs(c, c->r[5], c->r[1]);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_LE) { { uint32_t ea = c->r[6] - 0x4u; ST32(ea, c->r[5]); } }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = f_subs(c, c->r[4], c->r[1]);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x20u);
    if (COND_LT) { { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); } }
    c->r[6] = c->r[6] + 0x1cu;
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_2630088; }
L_26300bc:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[3] + 0x1u;
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_LT) { goto L_2630058; }
    c->r[2] = 0x0u;
    c->r[0] = 0x20u;
    c->r[1] = 0x0u;
    c->r[7] = c->r[13] + 0xb8u;
L_26300e0:;
    c->r[2] = (c->r[2] << 3) - c->r[2];
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0xffffffc0u) | ((c->r[0] << 0) & 0x3fu);
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0xffffffc0u) | ((c->r[0] << 0) & 0x3fu);
    { uint32_t ea = c->r[2] + 0x18u; ST32(ea, c->r[3]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_LT) { goto L_26300e0; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = 0x0u;
    c->r[0] = 0x0u;
L_2630124:;
    c->r[1] = (c->r[1] << 3) - c->r[1];
    c->r[2] = c->r[13] + 0xb8u;
    c->r[3] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + (c->r[2] << 1);
    c->r[2] = c->r[12] + (c->r[2] << 1);
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_HI) { goto L_263019c; }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[3] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] - c->r[6];
    c->r[6] = c->r[7] - c->r[12];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[12] = v; }
L_2630168:;
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[7] = c->r[6] + c->r[7];
    { uint32_t ea = c->r[14] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[3] + c->r[7];
    { uint32_t ea = c->r[4] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + c->r[2]; uint32_t v = LD8(ea); c->r[7] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + c->r[2]; ST8(ea, c->r[7]); }
    c->r[7] = c->r[2] + 0x1u;
    c->r[2] = c->r[7];
    if (COND_LT) { goto L_2630168; }
L_263019c:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_2630124; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_LT) { goto L_2630968; }
    c->r[0] = 0x56baacu;
    c->r[1] = 0x0u;
    c->r[5] = c->r[13] + 0xa0u;
    c->r[0] = 0x26301d0u + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
L_26301d0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[10]);
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_GE) { goto L_26302d0; }
    c->r[0] = c->r[10] - (c->r[10] << 3);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[10]); }
    c->r[8] = (c->r[0] << 2);
L_26301fc:;
    c->r[0] = (c->r[6] << 3) - c->r[6];
    c->r[2] = 0x16u;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD16(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x6u;
    c->r[0] = c->r[5];
    c->r[14] = 0x2630220u; f_283aa78(c);
    (void)f_subs(c, c->r[6], c->r[10]);
    if (COND_LT) { goto L_2630278; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[0] = c->r[4] + (c->r[0] << 2);
L_263023c:;
    c->r[1] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[12] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LE) { goto L_2630288; }
    c->r[2] = c->r[1];
    c->r[6] = c->r[6] - c->r[10];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 12u; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[6], c->r[10]);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[7]); c->r[0] = c->r[0] + 12u; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = c->r[1];
    if (COND_GE) { goto L_263023c; }
L_2630278:;
    c->r[0] = (c->r[6] << 3) - c->r[6];
    c->r[4] = c->r[13] + 0xb8u;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    goto L_263028c;
L_2630288:;
    c->r[4] = c->r[13] + 0xb8u;
L_263028c:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = c->r[13] + 0xa0u;
    c->r[2] = 0x16u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[6] << 3) - c->r[6];
    c->r[1] = c->r[5];
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x4u; ST16(ea, c->r[9]); }
    c->r[0] = c->r[0] + 0x6u;
    c->r[14] = 0x26302b4u; f_283aa78(c);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[6] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_LT) { goto L_26301fc; }
L_26302d0:;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_26301d0; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[2] = 0x0u;
    c->r[12] = 0x0u;
    c->r[7] = c->r[13] + 0xb8u;
L_26302f8:;
    c->r[1] = c->r[2] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_GE) { goto L_26303f0; }
    c->r[0] = (c->r[2] << 3) - c->r[2];
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->r[14] = c->r[0] + 0x4u;
L_2630314:;
    c->r[2] = (c->r[3] << 3) - c->r[3];
    { uint32_t ea = c->r[14]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_GE) { goto L_26303e0; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GE) { goto L_2630398; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[0];
    c->r[4] = 0x10u;
    c->r[6] = c->r[6] & 0xffffffc0u;
    c->r[5] = c->r[5] & 0xffffffc0u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_263037c; }
    c->r[10] = c->r[5] + 0x40u;
    c->r[4] = 0x20u;
    (void)f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_26303e0; }
L_263037c:;
    c->r[0] = c->r[0] - c->r[5];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LT) { c->r[0] = c->r[2] + 0x3fu; }
    if (COND_LT) { c->r[0] = c->r[0] & 0xffffffc0u; }
    if (COND_LT) { c->r[0] = c->r[0] - c->r[2]; }
    if (COND_LT) { (void)f_subs(c, c->r[0], c->r[4]); }
    if (COND_LT) { goto L_26303e0; }
L_2630398:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[8] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_26303d4; }
L_26303b8:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[2] = c->r[2] + 0x40u;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[2];
    if (COND_LT) { goto L_26303b8; }
L_26303d4:;
    { uint32_t ea = c->r[3] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[3] + 0x14u; ST32(ea, c->r[0]); }
L_26303e0:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_LT) { goto L_2630314; }
L_26303f0:;
    c->r[12] = c->r[12] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LT) { goto L_26302f8; }
    c->r[0] = 0x56b86cu;
    c->r[1] = 0x0u;
    c->r[0] = 0x2630410u + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_2630410:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = (uint32_t)(uint16_t)(c->r[9]);
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_GE) { goto L_2630514; }
    c->r[0] = c->r[9] - (c->r[9] << 3);
    c->r[4] = c->r[9];
    c->r[12] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[12]); }
L_2630438:;
    c->r[0] = (c->r[8] << 3) - c->r[8];
    c->r[2] = 0x12u;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD16(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xau;
    c->r[0] = c->r[13] + 0xa0u;
    c->r[14] = 0x2630464u; f_283aa78(c);
    (void)f_subs(c, c->r[8], c->r[9]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[4]); }
    if (COND_LT) { goto L_26304c0; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[4]);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = (c->r[0] << 3) - c->r[0];
    c->r[0] = c->r[7] + (c->r[0] << 2);
L_2630484:;
    c->r[1] = c->r[12] + c->r[0];
    { uint32_t ea = c->r[4] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_LE) { goto L_26304c0; }
    c->r[2] = c->r[1];
    c->r[8] = c->r[8] - c->r[9];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 12u; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[8], c->r[9]);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[7]); c->r[0] = c->r[0] + 12u; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = c->r[1];
    if (COND_GE) { goto L_2630484; }
L_26304c0:;
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_GT) { goto L_26304f8; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = (c->r[8] << 3) - c->r[8];
    c->r[1] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x12u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST16(ea, c->r[10]); }
    c->r[0] = c->r[0] + 0xau;
    c->r[1] = c->r[13] + 0xa0u;
    c->r[14] = 0x26304f8u; f_283aa78(c);
L_26304f8:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[7] = c->r[13] + 0xb8u;
    c->r[4] = c->r[4] + 0x1u;
    c->r[8] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[8], c->r[10]);
    if (COND_LT) { goto L_2630438; }
L_2630514:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_2630410; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[2] = 0x0u;
    c->r[12] = 0x0u;
L_2630534:;
    c->r[1] = c->r[2] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_GE) { goto L_263062c; }
    c->r[0] = (c->r[2] << 3) - c->r[2];
    c->r[0] = c->r[7] + (c->r[0] << 2);
    c->r[14] = c->r[0] + 0x8u;
L_2630550:;
    c->r[2] = (c->r[3] << 3) - c->r[3];
    { uint32_t ea = c->r[14]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[7] + (c->r[2] << 2);
    { uint32_t ea = c->r[3] + 0x6u; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_GE) { goto L_263061c; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_GE) { goto L_26305d4; }
    c->r[6] = c->r[2];
    c->r[5] = c->r[0];
    c->r[4] = 0x10u;
    c->r[6] = c->r[6] & 0xffffffc0u;
    c->r[5] = c->r[5] & 0xffffffc0u;
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_26305b8; }
    c->r[10] = c->r[5] + 0x40u;
    c->r[4] = 0x20u;
    (void)f_subs(c, c->r[10], c->r[6]);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[10] = v; }
    if (COND_NE) { goto L_263061c; }
L_26305b8:;
    c->r[0] = c->r[0] - c->r[5];
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LT) { c->r[0] = c->r[2] + 0x3fu; }
    if (COND_LT) { c->r[0] = c->r[0] & 0xffffffc0u; }
    if (COND_LT) { c->r[0] = c->r[0] - c->r[2]; }
    if (COND_LT) { (void)f_subs(c, c->r[0], c->r[4]); }
    if (COND_LT) { goto L_263061c; }
L_26305d4:;
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[9] + (c->r[0] << 1);
    c->r[0] = c->r[8] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_HI) { goto L_2630610; }
L_26305f4:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    c->r[2] = c->r[2] + 0x40u;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    c->r[2] = c->r[0] + 0x1u;
    c->r[0] = c->r[2];
    if (COND_LT) { goto L_26305f4; }
L_2630610:;
    { uint32_t ea = c->r[3] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[3] + 0x18u; ST32(ea, c->r[0]); }
L_263061c:;
    c->r[1] = c->r[1] + 0x1u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    (void)f_subs(c, c->r[3], c->r[10]);
    if (COND_LT) { goto L_2630550; }
L_263062c:;
    c->r[12] = c->r[12] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[12]);
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LT) { goto L_2630534; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_NE) { goto L_2630968; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[2] + c->r[3];
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[7] = c->r[1] - (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_MI) { c->r[7] = 0x0u - c->r[7]; }
    (void)f_subs(c, c->r[7], 0x1fu);
    if (COND_GT) { goto L_26306ac; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[6] + c->r[0];
    c->r[6] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = ~0x3fu;
    c->r[5] = c->r[7] - (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_GT) { goto L_26306ac; }
    c->r[0] = (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[7] = c->r[0] - c->r[7];
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[7], 0x20u);
    if (COND_GT) { c->r[0] = 0x40u; }
L_26306ac:;
    c->r[7] = c->r[2] + c->r[1];
    c->r[7] = c->r[7] + (c->r[7] >> 31);
    c->r[6] = c->r[3] - (uint32_t)((int32_t)c->r[7] >> 1);
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_MI) { c->r[6] = 0x0u - c->r[6]; }
    (void)f_subs(c, c->r[6], 0x1fu);
    if (COND_GT) { goto L_26308c0; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[5] + c->r[6];
    c->r[6] = c->r[6] + (c->r[6] >> 31);
    c->r[5] = c->r[7] - (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_LE) { goto L_26308a8; }
    c->r[0] = ~0x3fu;
    c->r[7] = 0x1u;
    goto L_26308c0;
L_26306f8:;
    c->r[1] = 0x0u;
    c->r[3] = 0x1u;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_EQ) { goto L_2630748; }
L_2630708:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[3] + (c->r[3] << 3);
    c->r[6] = c->r[7] + (c->r[6] << 2);
    c->r[5] = c->r[6] + 0x3cu;
L_2630718:;
    { uint32_t ea = c->r[5] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[5] + 0x48u;
    (void)f_subs(c, c->r[2], c->r[6]);
    if (COND_GT) { c->r[2] = c->r[6]; }
    if (COND_GT) { c->r[1] = c->r[3]; }
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_GT) { c->r[1] = c->r[3] + 0x1u; }
    c->r[3] = c->r[3] + 0x2u;
    if (COND_GT) { c->r[2] = c->r[4]; }
    (void)f_subs(c, c->r[3], c->r[9]);
    if (COND_NE) { goto L_2630718; }
L_2630748:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 3);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[5] + (c->r[1] << 2);
    { uint32_t ea = c->r[3] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[1] + (c->r[1] >> 31);
    c->r[0] = c->r[0] + c->r[1];
    c->r[6] = c->r[6] & 0xfffffffeu;
    c->r[1] = c->r[1] - c->r[6];
    c->r[1] = c->r[1] + 0x20u;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = ~0x3fu;
    c->r[0] = c->r[0] & 0xffffffc0u;
    c->r[1] = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x40u);
    if (COND_LE) { c->r[0] = 0x40u; }
    (void)f_subs(c, c->r[9], 0x3u);
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_26307ec; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], 0x33u);
    if (COND_CC) { goto L_262e190; }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x150u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + c->r[1]; ST16(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_26307ec:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_262e190;
L_26307f8:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = f_subs(c, c->r[0], c->r[2]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    (void)f_subs(c, c->r[2], 0x40u);
    if (COND_GT) { goto L_2630820; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = c->r[0] - c->r[3];
L_2630820:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_262e1d0; }
L_2630828:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[0] = c->r[12] + c->r[1]; }
    if (COND_NE) { { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); } }
    if (COND_NE) { (void)f_subs(c, c->r[5], 0x1u); }
    if (COND_EQ) { goto L_2630868; }
    c->r[0] = 0x1u;
    c->r[2] = 0x1u;
L_2630848:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    c->r[0] = (uint32_t)(uint16_t)(c->r[2]);
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_CC) { goto L_2630848; }
L_2630868:;
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_262e1d0; }
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
L_2630878:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 3);
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[2] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2] + 0x14u; ST32(ea, c->r[3]); }
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_LT) { goto L_2630878; }
    goto L_262e1d0;
L_26308a8:;
    c->r[6] = (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[7] = c->r[6] - c->r[7];
    (void)f_subs(c, c->r[7], 0x20u);
    c->r[7] = 0x0u;
    if (COND_GT) { c->r[0] = 0x40u; }
    if (COND_GT) { c->r[7] = 0x1u; }
L_26308c0:;
    c->r[1] = c->r[3] + c->r[1];
    c->r[1] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = c->r[2] - (uint32_t)((int32_t)c->r[1] >> 1);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_MI) { c->r[1] = 0x0u - c->r[1]; }
    (void)f_subs(c, c->r[1], 0x1fu);
    if (COND_GT) { goto L_2630914; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x2u;
    c->r[6] = c->r[1] + (c->r[1] >> 31);
    c->r[1] = ~0x3fu;
    c->r[5] = c->r[3] - (uint32_t)((int32_t)c->r[6] >> 1);
    (void)f_subs(c, c->r[5], 0x20u);
    if (COND_LE) { c->r[1] = (uint32_t)((int32_t)c->r[6] >> 1); }
    if (COND_LE) { c->r[3] = c->r[1] - c->r[3]; }
    if (COND_LE) { c->r[1] = 0x40u; }
    if (COND_LE) { (void)f_subs(c, c->r[3], 0x20u); }
    if (COND_GT) { goto L_2630924; }
L_2630914:;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    c->r[2] = c->r[7];
    if (COND_EQ) { goto L_2630968; }
L_2630924:;
    c->r[0] = (c->r[2] << 3) - c->r[2];
    c->r[2] = c->r[13] + 0xb8u;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[0] = c->r[9] + (c->r[2] << 1);
    c->r[2] = c->r[8] + (c->r[2] << 1);
    { uint32_t ea = c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_HI) { goto L_2630968; }
L_263094c:;
    { uint32_t ea = c->r[4] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    c->r[3] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[4] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    c->r[3] = c->r[2] + 0x1u;
    c->r[2] = c->r[3];
    if (COND_LT) { goto L_263094c; }
L_2630968:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_2630978:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_2630980:;
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[12] >> 1);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[1] + c->r[0];
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_NE) { goto L_2630aa8; }
L_2630998:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[12];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = c->r[12] + (c->r[12] << 3);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[1] << 2);
    { uint32_t ea = c->r[12] + c->r[1]; ST16(ea, c->r[3]); c->r[12] = ea; }
    { uint32_t ea = c->r[12] + 0x6u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x4u; ST16(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x2u; ST16(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12] + 0x8u; ST32(ea, c->r[3]); c->r[12] = ea; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[2];
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[12] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x1u;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
L_2630a24:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[4]);
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_EQ) { goto L_2630a70; }
    { uint32_t ea = c->r[8] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_NE) { goto L_2630a70; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    (void)f_subs(c, c->r[4], c->r[6]);
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    if (COND_CS) { goto L_2630a80; }
L_2630a70:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { goto L_2630a24; }
L_2630a80:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[9];
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x20u;
    c->r[1] = c->r[1] & 0xffffffc0u;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
L_2630aa8:;
    c->r[0] = 0x80000001u;
    c->r[6] = ~0x80000000u;
    c->r[2] = 0x0u;
L_2630ab4:;
    c->r[3] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_2630ae4; }
    { uint32_t ea = c->r[10] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_GT) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[14] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_LT) { c->r[6] = c->r[3]; }
L_2630ae4:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_CC) { goto L_2630ab4; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] - c->r[6];
    c->r[2] = 0x20u - c->r[2];
    c->r[2] = c->r[2] + c->r[6];
    c->r[2] = c->r[2] & 0xffffffc0u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { c->r[2] = 0x40u; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2630d74; }
    c->r[4] = c->r[2] + c->r[1];
    c->r[1] = c->r[0] - 0x41u;
    c->r[2] = (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[1], 0x40u);
    c->r[1] = 0x0u;
    if (COND_CC) { c->r[2] = 0x800000u; }
    c->r[2] = sdiv32(c->r[2], c->r[0]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[2]); }
L_2630b40:;
    c->r[0] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_2630bcc; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[1] + (c->r[5] << 1);
    c->r[0] = (c->r[5] << 1);
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[10] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_HI) { goto L_2630bcc; }
    c->r[5] = c->r[9];
L_2630b80:;
    { uint32_t ea = c->r[7] + (c->r[9] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[3];
    c->r[1] = c->r[0] - c->r[6];
    c->r[0] = c->r[2];
    c->r[2] = 0x10u;
    c->r[14] = 0x2630b98u; f_284cbb0(c);
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[8] + (c->r[9] << 2); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + c->r[9]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[3] + c->r[9]; ST8(ea, c->r[0]); }
    c->r[9] = (uint32_t)(uint16_t)(c->r[5]);
    { uint32_t ea = c->r[10]; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[9], c->r[0]);
    if (COND_LS) { goto L_2630b80; }
L_2630bcc:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] + 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_2630b40; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_CC) { goto L_2630cb8; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    c->r[9] = 0x20u;
L_2630c04:;
    c->r[2] = c->r[13] + 0xb8u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_2630ca8; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD8(ea); c->r[5] = v; }
    c->r[6] = c->r[5] | c->r[6];
    { uint32_t r = c->r[6] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_2630ca8; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[5] - c->r[6];
    (void)f_subs(c, c->r[2], 0x7fu);
    if (COND_GT) { goto L_2630ca8; }
    c->r[3] = (c->r[0] << 1);
    c->r[2] = c->r[14];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD16(ea); c->r[2] = ea; c->r[4] = v; }
    c->r[3] = c->r[1] + (c->r[0] << 1);
    { uint32_t ea = c->r[3]; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_HI) { goto L_2630ca8; }
    c->r[6] = c->r[6] + c->r[5];
    c->r[6] = c->r[6] + (c->r[6] >> 31);
    c->r[5] = (uint32_t)((int32_t)c->r[6] >> 1);
    c->r[5] = (c->r[5] & 0xffffffc0u) | ((c->r[9] << 0) & 0x3fu);
    c->r[6] = c->r[5] - (uint32_t)((int32_t)c->r[6] >> 1);
L_2630c84:;
    c->r[5] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[7] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[6] + c->r[4];
    { uint32_t ea = c->r[7] + (c->r[5] << 2); ST32(ea, c->r[4]); }
    c->r[4] = (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[2]; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_LS) { goto L_2630c84; }
L_2630ca8:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_2630c04; }
L_2630cb8:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[12], 0x1u);
    if (COND_LT) { goto L_2630d38; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    c->r[0] = 0x0u;
L_2630cd4:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[2] + (c->r[2] << 3);
    c->r[2] = (c->r[7] << 2);
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD16(ea); c->r[3] = ea; c->r[6] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[2] + 0x10u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[5] = v; }
    (void)f_subs(c, c->r[5], c->r[4]);
    if (COND_LE) { goto L_2630d28; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[8] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[3] + c->r[6];
    c->r[5] = c->r[5] + (c->r[5] >> 31);
    c->r[5] = (uint32_t)((int32_t)c->r[5] >> 1);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[2] + (c->r[7] << 2);
    c->r[2] = f_subs(c, c->r[3], c->r[6]);
    if (COND_MI) { c->r[2] = 0x0u - c->r[2]; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[2]); }
L_2630d28:;
    c->r[0] = c->r[0] + 0x1u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_LT) { goto L_2630cd4; }
L_2630d38:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[0] = c->r[14] + (c->r[0] << 1);
    { uint32_t ea = c->r[0] - 0x2u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[5];
    c->r[14] = 0x2630d5cu; f_283ac04(c);
    c->r[0] = c->r[9];
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[14] = 0x2630d6cu; f_283ac04(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_262fb10;
L_2630d74:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_262fd10;
}
