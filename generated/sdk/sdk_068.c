#include "cpu.h"
#include "neon_rt.h"
void f_282c2ac(Cpu *c);
void f_283abec(Cpu *c);
void f_283aea4(Cpu *c);
void f_283b27c(Cpu *c);
void f_283b288(Cpu *c);
void f_283b8dc(Cpu *c);
void f_2852acc(Cpu *c);
void f_2852d18(Cpu *c);
void f_2853828(Cpu *c);
void f_2855e2c(Cpu *c);
void f_2855e98(Cpu *c);
void f_2855eb0(Cpu *c);
void f_2855ec8(Cpu *c);
void f_2856294(Cpu *c);
void f_28562a0(Cpu *c);
void f_28562b8(Cpu *c);
void f_282a160(Cpu *restrict c) {
    FN_ENTER(0x282a160u);
L_282a160:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x7cu;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[9] = c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t r = c->r[1] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { c->r[2] = c->r[0]; }
    (void)f_subs(c, c->r[7], 0x1u);
    if (COND_LT) { goto L_282a1bc; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282a1bc; }
    c->r[0] = (c->r[7] << 2);
    c->r[4] = c->r[2];
    c->r[14] = 0x282a1acu; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282a29c; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
L_282a1bc:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_282a260; }
    c->r[0] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[14] = 0x282a1ecu; f_2856294(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282a2ac; }
    c->r[0] = 0x20u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0x282a218u; f_28562b8(c);
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_282a2a4; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_282b24c; }
    c->r[0] = (c->r[5] << 2);
    c->r[14] = 0x282a248u; f_283b27c(c);
    c->r[14] = c->r[0];
    (void)f_subs(c, c->r[14], 0x0u);
    if (COND_EQ) { goto L_282b2d0; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[4] = c->r[14];
    goto L_282b250;
L_282a260:;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x20u; ST32(ea, c->r[10]); }
    c->r[8] = c->r[9];
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282a2c4; }
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = (c->r[5] << 5);
    c->r[14] = 0x282a290u; f_2852d18(c);
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LS) { goto L_282a2c8; }
    goto L_282a2dc;
L_282a29c:;
    c->r[5] = 0xcu;
    goto L_282c228;
L_282a2a4:;
    c->r[0] = c->r[6];
    c->r[14] = 0x282a2acu; f_28562a0(c);
L_282a2ac:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xcu;
L_282a2b4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_282c218; }
    goto L_282c200;
L_282a2c4:;
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
L_282a2c8:;
    c->r[7] = c->r[5] + 0x1u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[7] | c->r[5];
    (void)f_subs(c, c->r[1], (c->r[0] >> 26));
    if (COND_EQ) { goto L_282a2e8; }
L_282a2dc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    goto L_282c1ec;
L_282a2e8:;
    c->r[6] = (c->r[10] << 2);
    c->r[4] = (c->r[5] << 3);
    { uint32_t r = c->r[6] * c->r[5]; c->r[0] = r; }
    c->r[1] = c->r[4] + (c->r[10] << 2);
    c->r[0] = c->r[0] + (c->r[7] << 3);
    c->r[0] = c->r[1] + (c->r[0] << 1);
    c->r[1] = 0x1u;
    c->r[0] = c->r[0] + 0xcu;
    c->r[14] = 0x282a30cu; f_2852acc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c124; }
    c->r[1] = c->r[6];
    c->r[6] = (c->r[7] << 3);
    c->r[2] = c->r[0] + c->r[1];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t r = c->r[2] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[1] = 0x4u - c->r[1]; }
    c->r[0] = c->r[2] + c->r[1];
    c->r[3] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[3] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[2] = 0x4u - c->r[2]; }
    c->r[0] = c->r[3] + c->r[2];
    c->r[7] = c->r[0] + c->r[6];
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t r = c->r[7] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    if (COND_NE) { c->r[3] = 0x4u - c->r[3]; }
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[0] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_282a404; }
    c->r[7] = c->r[0] + c->r[4];
    c->r[4] = c->r[5] + (c->r[5] << 1);
    { uint32_t r = c->r[7] & 0x3u; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[2] + c->r[3];
    c->r[7] = 0x4u - c->r[7];
    if (COND_NE) { c->r[3] = c->r[3] + c->r[7]; }
    c->r[3] = c->r[3] + (c->r[4] << 3);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[3] + (c->r[10] << 3);
    c->r[3] = c->r[3] + c->r[4];
    c->r[3] = c->r[1] + c->r[3];
    c->r[3] = c->r[0] + c->r[3];
    c->r[12] = c->r[3] + 0x10u;
    c->r[3] = c->r[1] + c->r[7];
    c->r[3] = c->r[0] + c->r[3];
    c->r[1] = c->r[0] + c->r[1];
    c->r[0] = c->r[2] + c->r[6];
    c->r[6] = (c->r[10] << 3);
    c->r[0] = c->r[0] + c->r[4];
    c->r[14] = c->r[3] + 0x10u;
    c->r[0] = c->r[0] + 0x4u;
    c->r[4] = c->r[4] + 0x4u;
    c->r[2] = 0x0u;
    c->r[7] = c->r[5];
L_282a3cc:;
    c->r[3] = c->r[12] + c->r[2];
    c->r[7] = f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[3]); }
    c->r[3] = c->r[14] + c->r[2];
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[3]); }
    c->r[2] = c->r[2] + c->r[6];
    c->r[0] = c->r[0] + 0x8u;
    c->r[4] = c->r[4] + 0x8u;
    if (COND_NE) { goto L_282a3cc; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
L_282a3f8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); c->r[1] = c->r[1] + 0x8u; }
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_282a3f8; }
L_282a404:;
    c->r[4] = c->r[8];
    c->r[0] = c->r[11] - 0x20u;
    c->r[1] = c->r[4];
    c->r[2] = 0x4u;
    c->r[14] = 0x282a418u; f_2853828(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GT) { goto L_282a434; }
    if (COND_LT) { goto L_282c1dc; }
    c->r[4] = c->r[8];
    c->r[1] = 0x1u;
L_282a434:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[0] = c->r[2] & 0x2u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] & 0x1u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] & 0x4u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + (c->r[10] << 2);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + c->r[1];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_GT) { c->r[1] = c->r[10]; }
    c->r[0] = c->r[1] & ~0x80000003u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[8] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[0] = c->r[0] & 0xfffffffcu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    goto L_282a500;
L_282a4c4:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[0]); }
L_282a4d0:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + c->r[2];
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282a500:;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_282a530; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_282c130; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_282a99c; }
    goto L_282c130;
L_282a530:;
    { uint32_t ea = c->r[12] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[4];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282a980; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = 0x0u;
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[3]); }
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[3], 0xau);
    c->r[6] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[5] = c->r[1] & c->r[0];
L_282a588:;
    c->r[7] = c->r[8];
    c->r[8] = c->r[4] + 0x28u;
L_282a590:;
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_GE) { goto L_282a970; }
    { uint32_t ea = c->r[8] - 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282a804; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[1] = c->r[6] | c->r[1];
    { uint32_t r = c->r[5] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_282a7ec; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282a628; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[7];
    c->r[7] = c->r[12];
    c->r[12] = c->r[5];
    c->r[5] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], 0xau);
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[3] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    c->r[6] = c->r[5];
    c->r[5] = c->r[12];
    c->r[12] = c->r[7];
    c->r[7] = c->r[14];
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_NE) { c->r[1] = c->r[2] & c->r[1]; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_NE) { goto L_282a7ec; }
L_282a628:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282a69c; }
L_282a630:;
    { uint32_t ea = c->r[8] - 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282a6e8; }
L_282a63c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282a760; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_282a760; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282a688; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282a66cu; f_2855e2c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282a688:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282a738; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282a760; }
    goto L_282a7ec;
L_282a69c:;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282a7ec; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282a6acu; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { goto L_282a7ec; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282a630; }
    c->r[14] = 0x282a6d0u; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { goto L_282a630; }
    goto L_282a7ec;
L_282a6e8:;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282a70c; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282a6f8u; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_EQ) { goto L_282a7ec; }
L_282a70c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282a7ec; }
    c->r[14] = 0x282a71cu; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { goto L_282a7ec; }
    { uint32_t ea = c->r[8] - 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_282a63c;
L_282a738:;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    c->r[14] = 0x282a740u; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[1] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282a7ec; }
L_282a760:;
    { uint32_t ea = c->r[8] - 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282a804; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_282a7ec; }
    c->r[1] = 0x1u;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282a7b0; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282a794u; f_2855e2c(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { c->r[1] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282a7b0:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282a7c4; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282a7ec; }
    goto L_282a804;
L_282a7c4:;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    c->r[14] = 0x282a7ccu; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[1] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282a804; }
L_282a7ec:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[8] = c->r[8] + 0x20u; c->r[0] = v; }
    c->r[7] = c->r[4] + 0x28u;
    c->r[4] = c->r[4] + 0x20u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282a590; }
    goto L_282a980;
L_282a804:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    if (COND_LT) { goto L_282a830; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xffu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282a828u; f_283aea4(c);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
L_282a830:;
    { uint32_t ea = c->r[8] - 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282a870; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282a870; }
    c->r[1] = c->r[1] + 0x4u;
L_282a84c:;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_GE) { goto L_282a864; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[3]); }
L_282a864:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282a84c; }
L_282a870:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { goto L_282a928; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_282a928; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[10], 0x4u);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    if (COND_CC) { goto L_282a8f0; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282a8f0; }
    c->r[1] = c->r[7] + (c->r[10] << 2);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_CC) { (void)f_subs(c, c->r[7], c->r[1]); }
    if (COND_CC) { goto L_282a8f0; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
L_282a8d0:;
    { uint32_t ea = c->r[1]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[1] = ea + 16u; }
    c->r[2] = f_subs(c, c->r[2], 0x4u);
    { uint32_t ea = c->r[3]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[3] = ea + 16u; }
    if (COND_NE) { goto L_282a8d0; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], c->r[1]);
    c->r[2] = c->r[1];
    if (COND_EQ) { goto L_282a910; }
L_282a8f0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[7] + (c->r[2] << 2);
    c->r[3] = c->r[3] + (c->r[2] << 2);
    c->r[2] = c->r[10] - c->r[2];
L_282a900:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x4u; c->r[7] = v; }
    c->r[2] = f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); c->r[3] = c->r[3] + 0x4u; }
    if (COND_NE) { goto L_282a900; }
L_282a910:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[3]); }
    goto L_282a954;
L_282a928:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[0] = c->r[3]; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    if (COND_EQ) { c->r[1] = c->r[0]; }
    c->r[0] = c->r[4] + 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
L_282a954:;
    { uint32_t ea = c->r[8] - 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[14];
    c->r[4] = c->r[4] + 0x8u;
    { uint32_t ea = c->r[2] + (c->r[1] << 3); ST32(ea, c->r[3]); c->r[2] = ea; }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[4]); }
L_282a970:;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = c->r[4] - 0x8u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282a588; }
L_282a980:;
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c130; }
L_282a99c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] - 0x20u;
    c->r[14] = 0x282a9b0u; f_2853828(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[1] = 0x1u; }
    if (COND_LT) { goto L_282c188; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_282a9ec; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    goto L_282aad4;
L_282a9ec:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { goto L_282aac0; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_LT) { goto L_282aa98; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[2] + 0x4u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
L_282aa28:;
    c->r[2] = c->r[14];
    c->r[1] = c->r[12];
L_282aa30:;
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_GE) { goto L_282aa88; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[8] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_NE) { goto L_282aa60; }
    { uint32_t ea = c->r[8] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_LT) { goto L_282aa88; }
L_282aa60:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_GE) { goto L_282aa30; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
L_282aa88:;
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282aa28; }
    goto L_282aac0;
L_282aa98:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_282aa98; }
L_282aac0:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
L_282aad4:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[1] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    if (COND_EQ) { goto L_282a4c4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[7]); }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[3], 0xau);
    c->r[1] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    c->r[1] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[1]); }
L_282ab50:;
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282ac3c; }
    goto L_282b234;
L_282ab64:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_282ac50; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282ac50; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282aba8; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282ab8cu; f_2855e2c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282aba8:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282abf8; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_282adf4; }
    c->r[9] = c->r[4];
    goto L_282b220;
L_282abc0:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_EQ) { goto L_282ace8; }
    c->r[14] = 0x282abdcu; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { goto L_282ace8; }
    c->r[9] = c->r[4];
    goto L_282b220;
L_282abf8:;
    c->r[14] = 0x282abfcu; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[7] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282adf4; }
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ac20:;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[3] = c->r[6];
    goto L_282b220;
L_282ac34:;
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ac3c:;
    c->r[5] = c->r[0];
    c->r[4] = c->r[9];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_LS) { goto L_282ac58; }
L_282ac50:;
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ac58:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_CS) { goto L_282ac6c; }
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ac6c:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282af30; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_282acd8; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282ace0; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], 0xau);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[3] | c->r[6]; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[1] = c->r[2] & c->r[1]; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_EQ) { goto L_282ace0; }
L_282acd8:;
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ace0:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282ad54; }
L_282ace8:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282ad64; }
L_282acf4:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282ade8; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_282ade8; }
    c->r[7] = 0x1u;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282ad3c; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282ad20u; f_2855e2c(c);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { c->r[7] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282ad3c:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282adc8; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_282ade8; }
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ad54:;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_NE) { goto L_282ada8; }
    c->r[9] = c->r[4];
    goto L_282b220;
L_282ad64:;
    (void)f_subs(c, c->r[3], 0x5fu);
    if (COND_EQ) { goto L_282ad7c; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282ad74u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282adb8; }
L_282ad7c:;
    { uint32_t ea = c->r[11] - 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282adb8; }
    c->r[14] = 0x282ad8cu; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282adb8; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_282acf4;
L_282ada8:;
    c->r[0] = c->r[3];
    c->r[14] = 0x282adb0u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282abc0; }
L_282adb8:;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_282b08c;
L_282adc8:;
    c->r[14] = 0x282adccu; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t r = c->r[7] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282ac50; }
L_282ade8:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282ab64; }
L_282adf4:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282ae30; }
    { uint32_t ea = c->r[12] + 0x38u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282ae30; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282ae18u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282adb8; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_282ae30:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282ae8c; }
    { uint32_t ea = c->r[12] + 0x38u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282ae8c; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282ae4cu; f_2855ec8(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282ae54u; f_2855e98(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_NE) { goto L_282ae8c; }
    c->r[0] = c->r[3];
    c->r[14] = 0x282ae70u; f_2855eb0(c);
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282ae78u; f_2855e98(c);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_EQ) { goto L_282ac34; }
L_282ae8c:;
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282af30; }
    { uint32_t ea = c->r[5] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282af30; }
    { uint32_t ea = c->r[12] + 0x38u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[7] = c->r[0] + 0x4u;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282aee4; }
L_282aeb8:;
    c->r[0] = c->r[3];
    c->r[14] = 0x282aec0u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282adb8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_282aeb8; }
    goto L_282af30;
L_282aee4:;
    c->r[0] = c->r[3];
    c->r[6] = c->r[3];
    c->r[14] = 0x282aef0u; f_2855eb0(c);
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282aef8u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282ac20; }
    c->r[0] = c->r[6];
    c->r[14] = 0x282af08u; f_2855ec8(c);
    { uint32_t ea = c->r[7] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282af10u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282adb8; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = c->r[7] + 0x4u; c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_282aee4; }
L_282af30:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_282afb4; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[10], 0x4u);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_282af98; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282af98; }
    c->r[2] = c->r[0] + (c->r[10] << 2);
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_CS) { goto L_282af70; }
    c->r[2] = c->r[4] + (c->r[10] << 2);
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_CC) { goto L_282af98; }
L_282af70:;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[4];
    c->r[3] = c->r[0];
L_282af7c:;
    { uint32_t ea = c->r[3]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[3] = ea + 16u; }
    c->r[1] = f_subs(c, c->r[1], 0x4u);
    { uint32_t ea = c->r[2]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[2] = ea + 16u; }
    if (COND_NE) { goto L_282af7c; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[10], c->r[1]);
    if (COND_EQ) { goto L_282afb4; }
L_282af98:;
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[2] = c->r[4] + (c->r[1] << 2);
    c->r[1] = c->r[10] - c->r[1];
L_282afa4:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = c->r[0] + 0x4u; c->r[3] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); c->r[2] = c->r[2] + 0x4u; }
    if (COND_NE) { goto L_282afa4; }
L_282afb4:;
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282afe4; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282afe4; }
    c->r[1] = c->r[1] + 0x4u;
L_282afd0:;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LT) { { uint32_t ea = c->r[4] + (c->r[0] << 2); ST32(ea, c->r[9]); } }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282afd0; }
L_282afe4:;
    { uint32_t ea = c->r[5] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14] + (c->r[0] << 3); uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_GE) { goto L_282b030; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[9];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[14];
    c->r[2] = c->r[7];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[3] + (c->r[0] << 3); ST32(ea, c->r[6]); c->r[3] = ea; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_282b094; }
L_282b028:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_282b218;
L_282b030:;
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_282b088; }
    c->r[0] = c->r[14] + (c->r[0] << 3);
    { uint32_t ea = c->r[12] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
L_282b04c:;
    { uint32_t ea = c->r[9] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282b070; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_GT) { goto L_282b0c4; }
    if (COND_GE) { goto L_282b07c; }
    goto L_282b088;
L_282b070:;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_LT) { goto L_282b0c4; }
    if (COND_GT) { goto L_282b088; }
L_282b07c:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_LT) { goto L_282b04c; }
L_282b088:;
    c->r[9] = c->r[4];
L_282b08c:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_282b220;
L_282b094:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_282b16c; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_282b028; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_LE) { goto L_282b178; }
    goto L_282b218;
L_282b0c4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[12] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_282b220; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[10], 0x4u);
    if (COND_CC) { goto L_282b13c; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282b13c; }
    c->r[1] = c->r[4] + (c->r[10] << 2);
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_CC) { { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_CC) { (void)f_subs(c, c->r[4], c->r[1]); }
    if (COND_CC) { goto L_282b13c; }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3];
    c->r[2] = c->r[4];
L_282b118:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[0] = f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    if (COND_NE) { goto L_282b118; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_EQ) { goto L_282b160; }
L_282b13c:;
    c->r[1] = c->r[4] + (c->r[0] << 2);
    c->r[2] = c->r[3] + (c->r[0] << 2);
    c->r[0] = c->r[10] - c->r[0];
L_282b148:;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = c->r[1] + 0x4u; c->r[3] = v; }
    c->r[0] = f_subs(c, c->r[0], 0x1u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); c->r[2] = c->r[2] + 0x4u; }
    if (COND_NE) { goto L_282b148; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
L_282b160:;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    goto L_282b08c;
L_282b16c:;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_LT) { goto L_282b208; }
L_282b178:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CC) { goto L_282b1f0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282b1f0; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + (c->r[1] << 2);
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_CC) { (void)f_subs(c, c->r[4], c->r[1]); }
    if (COND_CC) { goto L_282b1f0; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
L_282b1bc:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[0] = f_subs(c, c->r[0], 0x4u);
    { uint32_t ea = c->r[1]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[1] = ea + 16u; }
    if (COND_NE) { goto L_282b1bc; }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_282b218; }
L_282b1f0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
L_282b1f4:;
    { uint32_t ea = c->r[4] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_LT) { goto L_282b1f4; }
L_282b208:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
L_282b218:;
    c->r[7] = c->r[7] + 0x8u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[7]); }
L_282b220:;
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    c->r[0] = c->r[5] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[8] = c->r[5];
    if (COND_NE) { goto L_282ac3c; }
L_282b234:;
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_282ab50; }
    goto L_282a4d0;
L_282b24c:;
    c->r[14] = 0x0u;
L_282b250:;
    { uint32_t ea = c->r[3] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_282b290; }
    c->r[0] = (c->r[0] << 3);
    c->r[14] = 0x282b274u; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282c140; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    goto L_282b2a0;
L_282b290:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
L_282b2a0:;
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b308; }
    c->r[0] = (c->r[0] << 2);
    c->r[14] = 0x282b2b4u; f_283b27c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282c16c; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_282b310;
L_282b2d0:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x34u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[5] = 0xcu;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_282c198;
L_282b308:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_282b310:;
    c->r[0] = c->r[10] & 0x2u;
    c->r[4] = 0x1u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10] & 0x1u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] & 0x4u;
    { uint32_t ea = c->r[11] - 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = ~0x0u;
    c->r[6] = ~0x0u;
    c->r[8] = c->r[9];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    goto L_282b370;
L_282b354:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[6];
    c->r[6] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
L_282b370:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_LT) { goto L_282b3bc; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b3a8; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0x0u;
L_282b38c:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_282b38c; }
    goto L_282b3bc;
L_282b3a8:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[5] << 2);
    c->r[2] = 0xffu;
    c->r[14] = 0x282b3b8u; f_283aea4(c);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_282b3bc:;
    { uint32_t ea = c->r[3] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_282b3d4; }
    c->r[1] = (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282b3d4u; f_283abec(c);
L_282b3d4:;
    c->r[0] = c->r[11] - 0x24u;
    c->r[1] = c->r[8];
    c->r[2] = 0x4u;
    c->r[14] = 0x282b3e4u; f_2853828(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LE) { c->r[0] = 0x1u; }
    if (COND_LT) { goto L_282c294; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[4] + c->r[5];
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[8] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[3] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[7]); }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    if (COND_EQ) { goto L_282b81c; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_EQ) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0xau);
    c->r[12] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[10] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[12]); }
    c->r[0] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    goto L_282b514;
L_282b484:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_282b7d8; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_EQ) { goto L_282b4c8; }
    c->r[0] = c->r[1];
    c->r[14] = 0x282b4acu; f_2855e2c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[4] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282b4c8:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282b4f0; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_282b6b0; }
    goto L_282b7d8;
L_282b4dc:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_282b598;
L_282b4f0:;
    c->r[14] = 0x282b4f4u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[4] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282b6b0; }
    goto L_282b7d8;
L_282b514:;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b6b0; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[1] = c->r[12] | c->r[1];
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_282b7d8; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282b584; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[7];
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], 0xau);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[4] | c->r[7]; c->nf = r >> 31; c->zf = r == 0; c->r[4] = r; }
    c->r[7] = c->r[5];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { c->r[1] = c->r[2] & c->r[1]; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_NE) { goto L_282b7d8; }
L_282b584:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282b5f8; }
L_282b58c:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282b644; }
L_282b598:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b6a4; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_282b6a4; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = 0x1u;
    (void)f_subs(c, c->r[1], 0x5fu);
    if (COND_EQ) { goto L_282b5e4; }
    c->r[0] = c->r[1];
    c->r[14] = 0x282b5c8u; f_2855e2c(c);
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[4] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282b5e4:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282b684; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_282b6a4; }
    goto L_282b7d8;
L_282b5f8:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282b7d8; }
    c->r[14] = 0x282b608u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282b674; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_EQ) { goto L_282b58c; }
    c->r[14] = 0x282b62cu; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_282b58c; }
    goto L_282b7d8;
L_282b644:;
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282b65c; }
    c->r[14] = 0x282b654u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b674; }
L_282b65c:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282b674; }
    c->r[14] = 0x282b66cu; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b4dc; }
L_282b674:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_282b7d8;
L_282b684:;
    c->r[14] = 0x282b688u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t r = c->r[4] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282b7d8; }
L_282b6a4:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282b484; }
L_282b6b0:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_282b7d0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_NE) { goto L_282b750; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[8];
    c->r[14] = 0x282b6e8u; f_28562b8(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_282c234; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[7]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0x282b72cu; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282c164; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
L_282b750:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_282b798; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
L_282b780:;
    { uint32_t ea = c->r[14] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_282b780; }
L_282b798:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282b7c8; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282b7c8; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x4u;
L_282b7b8:;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282b7b8; }
L_282b7c8:;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[4]); }
    goto L_282b7d8;
L_282b7d0:;
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[10] = v; }
L_282b7d8:;
    { uint32_t ea = c->r[9] + 0x28u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    c->r[4] = c->r[9] - 0x8u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[6] = c->r[9];
    if (COND_NE) { goto L_282b514; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_282b824; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282b828; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_282b808:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282b808; }
    goto L_282b830;
L_282b81c:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_282c000;
L_282b824:;
    c->r[7] = 0x0u;
L_282b828:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_282b830:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_282b850; }
    goto L_282c008;
L_282b844:;
    c->r[10] = c->r[12];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
L_282b850:;
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_EQ) { goto L_282bf24; }
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282b87c; }
    { uint32_t ea = c->r[10] + 0x15u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282b8bc; }
L_282b87c:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_282c008; }
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[11] - 0x24u;
    c->r[2] = 0x4u;
    c->r[1] = c->r[6];
    c->r[14] = 0x282b8a0u; f_2853828(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[1] = 0x1u; }
    if (COND_LT) { goto L_282c18c; }
    c->r[6] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[6]); }
    goto L_282b97c;
L_282b8bc:;
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[5]); }
    c->r[2] = c->r[2] & 0xfffffff7u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[0] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[5];
    c->r[14] = 0x282b8e8u; f_282c2ac(c);
    { uint32_t ea = c->r[5] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6];
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[5] - 0x1u;
    c->r[14] = 0x282b90cu; f_283b8dc(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282bffc; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    if (COND_NE) { goto L_282b938; }
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_282bffc; }
L_282b938:;
    c->r[7] = c->r[6] - 0x1u;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[6] = c->r[5] + c->r[7];
    c->r[0] = c->r[11] - 0x24u;
    c->r[1] = c->r[6];
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[14] = 0x282b958u; f_2853828(c);
    c->r[1] = c->r[0];
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_LE) { c->r[1] = 0x1u; }
    if (COND_LT) { goto L_282c18c; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[7] + c->r[5];
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
L_282b97c:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282bf68; }
    c->r[5] = c->r[5] + c->r[7];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], 0x1u);
    c->r[0] = 0x0u;
    c->r[12] = 0x0u;
    if (COND_LT) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x40u; ST32(ea, c->r[5]); }
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[9], 0xau);
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[0]); }
    goto L_282ba8c;
L_282b9e8:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_282bebc; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[9], 0x5fu);
    if (COND_EQ) { goto L_282ba2c; }
    c->r[0] = c->r[9];
    c->r[6] = c->r[12];
    c->r[14] = 0x282ba10u; f_2855e2c(c);
    c->r[12] = c->r[6];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282ba2c:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282ba54; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_282bc48; }
    goto L_282bebc;
L_282ba40:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_282bb24;
L_282ba54:;
    c->r[7] = c->r[12];
    c->r[14] = 0x282ba5cu; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[12] = c->r[7];
    { uint32_t r = c->r[6] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bc48; }
    goto L_282bebc;
L_282ba7c:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[7];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_282bebc;
L_282ba8c:;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_HI) { goto L_282bebc; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_CC) { goto L_282bebc; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282bd90; }
    { uint32_t ea = c->r[11] - 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_EQ) { goto L_282bebc; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bb10; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], 0xau);
    if (COND_EQ) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[6] | c->r[5]; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_NE) { c->r[1] = c->r[2] & c->r[1]; }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x1u); }
    if (COND_NE) { goto L_282bebc; }
L_282bb10:;
    { uint32_t r = c->r[0] & 0x10u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282bb84; }
L_282bb18:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x20u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282bbd4; }
L_282bb24:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282bc3c; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { { uint32_t r = c->r[1] & 0x40u; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; } }
    if (COND_EQ) { goto L_282bc3c; }
    c->r[6] = 0x1u;
    (void)f_subs(c, c->r[9], 0x5fu);
    if (COND_EQ) { goto L_282bb70; }
    c->r[0] = c->r[9];
    c->r[6] = c->r[12];
    c->r[14] = 0x282bb54u; f_2855e2c(c);
    c->r[12] = c->r[6];
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[6] = 0x1u; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282bb70:;
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_NE) { goto L_282bc18; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282bc3c; }
    goto L_282bebc;
L_282bb84:;
    (void)f_subs(c, c->r[9], 0x5fu);
    if (COND_EQ) { goto L_282bebc; }
    c->r[0] = c->r[9];
    c->r[6] = c->r[12];
    c->r[14] = 0x282bb98u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282bc08; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282bb18; }
    c->r[14] = 0x282bbbcu; f_2855e2c(c);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282bb18; }
    goto L_282bebc;
L_282bbd4:;
    c->r[6] = c->r[12];
    (void)f_subs(c, c->r[9], 0x5fu);
    if (COND_EQ) { goto L_282bbf0; }
    c->r[0] = c->r[9];
    c->r[14] = 0x282bbe8u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282bc08; }
L_282bbf0:;
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5fu);
    if (COND_EQ) { goto L_282bc08; }
    c->r[14] = 0x282bc00u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282ba40; }
L_282bc08:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    goto L_282bebc;
L_282bc18:;
    c->r[7] = c->r[12];
    c->r[14] = 0x282bc20u; f_2855e2c(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[12] = c->r[7];
    { uint32_t r = c->r[6] ^ c->r[0]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bebc; }
L_282bc3c:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282b9e8; }
L_282bc48:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bc88; }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282bc88; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9];
    c->r[6] = c->r[12];
    c->r[14] = 0x282bc70u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282bc08; }
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
L_282bc88:;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bce8; }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bce8; }
    c->r[0] = c->r[9];
    c->r[6] = c->r[12];
    c->r[14] = 0x282bca8u; f_2855ec8(c);
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282bcb0u; f_2855e98(c);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282bce8; }
    c->r[0] = c->r[9];
    c->r[14] = 0x282bcccu; f_2855eb0(c);
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282bcd4u; f_2855e98(c);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = c->r[6];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282bebc; }
L_282bce8:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282bd90; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_282bd90; }
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[6] = c->r[0] + 0x4u;
    { uint32_t r = c->r[2] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_282bd44; }
L_282bd14:;
    c->r[0] = c->r[9];
    c->r[7] = c->r[12];
    c->r[14] = 0x282bd20u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282ba7c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[1] = v; }
    c->r[12] = c->r[7];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_282bd14; }
    goto L_282bd90;
L_282bd44:;
    c->r[0] = c->r[9];
    c->r[7] = c->r[12];
    c->r[14] = 0x282bd50u; f_2855eb0(c);
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282bd58u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282ba7c; }
    c->r[0] = c->r[9];
    c->r[14] = 0x282bd68u; f_2855ec8(c);
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282bd70u; f_2855e98(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282ba7c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = c->r[6] + 0x4u; c->r[0] = v; }
    c->r[12] = c->r[7];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282bd44; }
L_282bd90:;
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_EQ) { goto L_282beb0; }
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_NE) { goto L_282be28; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[5];
    c->r[10] = c->r[12];
    c->r[14] = 0x282bdccu; f_28562b8(c);
    c->r[6] = c->r[0];
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282c180; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] << 2);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0x282be08u; f_28562b8(c);
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_282c164; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[6]); }
    c->r[12] = c->r[10];
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x40u; uint32_t v = LD32(ea); c->r[5] = v; }
L_282be28:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[11] - 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_282be78; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
L_282be60:;
    { uint32_t ea = c->r[14] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LT) { goto L_282be60; }
L_282be78:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_282bea8; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282bea8; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + 0x4u;
L_282be98:;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282be98; }
L_282bea8:;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[6]); }
    goto L_282bebc;
L_282beb0:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] - 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[12] = v; }
L_282bebc:;
    { uint32_t ea = c->r[8] + 0x28u; uint32_t v = LD32(ea); c->r[8] = ea; c->r[0] = v; }
    c->r[10] = c->r[8] - 0x8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[4] = c->r[8];
    if (COND_NE) { goto L_282ba8c; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[12], 0x0u);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_EQ) { goto L_282bf74; }
    c->r[7] = 0x0u;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[10] = c->r[12];
    c->r[6] = c->r[1];
    if (COND_EQ) { goto L_282b850; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[12];
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_282b850; }
L_282bf10:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282bf10; }
    goto L_282b844;
L_282bf24:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_GE) { goto L_282bf80; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_282bf60; }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_282bf60; }
L_282bf44:;
    c->r[0] = 0x0u;
L_282bf48:;
    { uint32_t ea = c->r[14] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_282bf48; }
L_282bf60:;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[5]); }
    goto L_282c008;
L_282bf68:;
    { uint32_t ea = c->r[11] - 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = c->r[1];
    goto L_282c008;
L_282bf74:;
    c->r[7] = c->r[2];
    c->r[6] = c->r[1];
    goto L_282c008;
L_282bf80:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_282c008; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_282c008; }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_LT) { goto L_282c008; }
    { uint32_t ea = c->r[3] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x0u;
L_282bfa4:;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[8] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[14] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[12] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_282bfd8; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_GT) { goto L_282c110; }
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    if (COND_GE) { goto L_282bfec; }
    goto L_282c008;
L_282bfd8:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_LT) { goto L_282c110; }
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    if (COND_GT) { goto L_282c008; }
L_282bfec:;
    c->r[2] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_LT) { goto L_282bfa4; }
    goto L_282c008;
L_282bffc:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_282c000:;
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
L_282c008:;
    c->r[9] = c->r[7];
    { uint32_t ea = c->r[11] - 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c0f4; }
    { uint32_t ea = c->r[11] - 0x30u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[10] + 0x15u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_282c044; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[7]); }
L_282c044:;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] - 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[11] - 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_LT) { goto L_282c0e4; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_CC) { goto L_282c0c8; }
    c->r[4] = c->r[1];
    c->r[4] = c->r[4] & 0xfffffffcu;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_282c0c8; }
    c->r[2] = c->r[12] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_CS) { goto L_282c0a0; }
    c->r[2] = c->r[14] + (c->r[1] << 2);
    (void)f_subs(c, c->r[12], c->r[2]);
    if (COND_CC) { goto L_282c0c8; }
L_282c0a0:;
    c->r[7] = c->r[4];
    c->r[6] = c->r[14];
    c->r[2] = c->r[12];
L_282c0ac:;
    { uint32_t ea = c->r[2]; c->v.d[16] = LD64(ea + 0u); c->v.d[17] = LD64(ea + 8u); c->r[2] = ea + 16u; }
    c->r[7] = f_subs(c, c->r[7], 0x4u);
    { uint32_t ea = c->r[6]; ST64(ea + 0u, c->v.d[16]); ST64(ea + 8u, c->v.d[17]); c->r[6] = ea + 16u; }
    if (COND_NE) { goto L_282c0ac; }
    (void)f_subs(c, c->r[1], c->r[4]);
    c->r[6] = c->r[4];
    if (COND_EQ) { goto L_282c0e4; }
L_282c0c8:;
    c->r[2] = c->r[12] + (c->r[6] << 2);
    c->r[7] = c->r[14] + (c->r[6] << 2);
    c->r[1] = c->r[1] - c->r[6];
L_282c0d4:;
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = c->r[2] + 0x4u; c->r[6] = v; }
    c->r[1] = f_subs(c, c->r[1], 0x1u);
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); c->r[7] = c->r[7] + 0x4u; }
    if (COND_NE) { goto L_282c0d4; }
L_282c0e4:;
    { uint32_t ea = c->r[11] - 0x28u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[9];
    { uint32_t ea = c->r[11] - 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_282b850;
L_282c0f4:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_GE) { goto L_282c2a0; }
    { uint32_t ea = c->r[11] - 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_282b354; }
    goto L_282c2a0;
L_282c110:;
    c->r[6] = c->r[1];
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[9], 0x1u);
    if (COND_GE) { goto L_282bf44; }
    goto L_282bf60;
L_282c124:;
    c->r[5] = 0xcu;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_282a2b4;
L_282c130:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[0] >> 31);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_282c1ec;
L_282c140:;
    c->r[5] = 0xcu;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_282c198;
L_282c164:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_282c238;
L_282c16c:;
    c->r[5] = 0xcu;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_282c198;
L_282c180:;
    c->r[0] = c->r[5];
    goto L_282c238;
L_282c188:;
    goto L_282c1e0;
L_282c18c:;
    c->r[5] = 0x1u;
L_282c190:;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
L_282c194:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
L_282c198:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282c1a0u; f_28562a0(c);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c1b4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282c1b4u; f_283b288(c);
L_282c1b4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c1c8; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282c1c8u; f_283b288(c);
L_282c1c8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c1f0; }
    c->r[0] = c->r[4];
    goto L_282c1ec;
L_282c1dc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
L_282c1e0:;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_282c1ec:;
    c->r[14] = 0x282c1f0u; f_283b288(c);
L_282c1f0:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_282c218; }
L_282c200:;
    { uint32_t ea = c->r[3] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0x282c218u; f_282c2ac(c);
L_282c218:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_282c228; }
    c->r[0] = c->r[8];
    c->r[14] = 0x282c228u; f_283b288(c);
L_282c228:;
    c->r[0] = c->r[5];
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_282c234:;
    c->r[0] = c->r[8];
L_282c238:;
    c->r[14] = 0x282c23cu; f_28562a0(c);
    { uint32_t ea = c->r[11] - 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c250; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282c250u; f_283b288(c);
L_282c250:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0xcu;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c270; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0x282c270u; f_283b288(c);
L_282c270:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_282c284; }
    c->r[0] = c->r[4];
    c->r[14] = 0x282c284u; f_283b288(c);
L_282c284:;
    { uint32_t ea = c->r[11] - 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { goto L_282c218; }
    goto L_282c200;
L_282c294:;
    c->r[5] = 0x1u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_282c190;
L_282c2a0:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = (c->r[0] >> 31);
    goto L_282c194;
}
