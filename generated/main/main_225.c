#include "cpu.h"
#include "neon_rt.h"
void f_a6a438(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a82674(Cpu *c);
void f_dd0dac(Cpu *c);
void f_dd2adc(Cpu *c);
void f_dd3c2c(Cpu *c);
void f_e54a4c(Cpu *c);
void f_e55010(Cpu *c);
void f_e589e8(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_e56458(Cpu *restrict c) {
    FN_ENTER(0xe56458u);
L_e56458:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xbcu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[12] = 0x5b1eu;
    c->r[7] = 0x7b1cu;
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[0] + 0xd7u; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc28e0000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xc5350000u;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[6] = c->r[3] & 0xff00u;
    if (COND_EQ) { goto L_e564d0; }
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { (void)f_subs(c, c->r[6], 0x0u); }
    if (COND_NE) { goto L_e564c0; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_EQ) { goto L_e56518; }
L_e564c0:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[1] = 0xb1cu;
    goto L_e564fc;
L_e564d0:;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_e564e8; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[12]);
    if (COND_EQ) { goto L_e56518; }
L_e564e8:;
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[3] = (c->r[3] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0xb1cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
L_e564fc:;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
L_e56518:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[1] = c->r[8];
    c->r[0] = c->r[5];
    c->r[14] = 0xe56528u; f_e55010(c);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x120000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_e56544; }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x104u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_NE) { c->r[2] = 0x1u; }
L_e56544:;
    { uint32_t ea = c->r[5] + 0xd3u; uint32_t v = LD8(ea); c->r[3] = v; }
    c->r[12] = 0xe000u;
    c->r[14] = 0xa9e1u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc4960000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0x54580000u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_e5656c; }
    { uint32_t ea = c->r[5] + 0x134u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_HI) { goto L_e56874; }
L_e5656c:;
    { uint32_t ea = c->r[5] + 0xd5u; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_e56874; }
    c->r[3] = 0x5134u;
    c->r[7] = c->r[8];
    c->r[0] = c->r[5];
    c->r[5] = 0x4f40u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[3] = 0xaedcu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56644; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56614; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9e6u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56614:;
    c->r[6] = 0x4f40u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0x19e8u;
    c->r[7] = 0x5138u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x70840000u;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e56644:;
    c->r[5] = 0x4f10u;
    c->r[6] = 0x5114u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e566fc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e566d0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9e2u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e566d0:;
    c->r[6] = 0x4f10u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x5118u;
    c->r[6] = 0x9e2u;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e566fc:;
    c->r[5] = 0x4f20u;
    c->r[6] = 0x5124u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e567b4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56788; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9e4u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56788:;
    c->r[6] = 0x4f20u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x5128u;
    c->r[6] = 0x9e4u;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e567b4:;
    c->r[5] = 0xbe2598u;
    c->r[6] = 0x2d4cu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = 0xe567ccu + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[5] + 0x31au; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e56ac8; }
    c->r[5] = 0x4680u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56b78; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56858; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x569u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56858:;
    c->r[6] = 0x4680u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0xa8d0u;
    c->r[7] = 0x2d50u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x6ee80000u;
    goto L_e56b60;
L_e56874:;
    c->r[3] = 0x50e4u;
    c->r[7] = c->r[8];
    c->r[4] = c->r[5];
    c->r[5] = 0x4ee0u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[3] = 0xaf2cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e5693c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56910; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9dcu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56910:;
    c->r[6] = 0x4ee0u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x50e8u;
    c->r[6] = 0x9dcu;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e5693c:;
    c->r[5] = 0x4f30u;
    c->r[6] = 0x5134u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e569f4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e569c8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9e6u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e569c8:;
    c->r[6] = 0x4f30u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x5138u;
    c->r[6] = 0x9e6u;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e569f4:;
    c->r[7] = 0xbe2364u;
    { uint32_t ea = 0xe56a00u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x31au; uint32_t v = LD8(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_e570c4; }
    c->r[5] = 0x2d4cu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[5]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[6] + 0x31cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[5];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_EQ) { goto L_e56ac0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56a94; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[1] = 0x569u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[1] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56a94:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2d50u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] ^ 0x990000u;
    c->r[0] = c->r[0] ^ 0x23000000u;
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e56ac0:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    goto L_e57174;
L_e56ac8:;
    c->r[5] = 0x2b50u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56b78; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56b48; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x569u;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56b48:;
    c->r[6] = 0x2b50u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0xc56au;
    c->r[7] = 0x2d50u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x52230000u;
L_e56b60:;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e56b78:;
    { uint32_t ea = c->r[0] + 0x134u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x50ecu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_e56ce0; }
    c->r[5] = 0x4ee8u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56c3c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56c10; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9ddu;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56c10:;
    c->r[6] = 0x4ee8u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x50f0u;
    c->r[6] = 0x9ddu;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e56c3c:;
    c->r[5] = 0x4ee0u;
    c->r[6] = 0x50e4u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56e4c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56cc8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9dcu;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56cc8:;
    c->r[6] = 0x4ee0u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x50e8u;
    c->r[6] = 0x9dcu;
    goto L_e56e34;
L_e56ce0:;
    c->r[5] = 0x4ef0u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56d90; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56d60; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9ddu;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56d60:;
    c->r[6] = 0x4ef0u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0x49deu;
    c->r[7] = 0x50f0u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xce140000u;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e56d90:;
    c->r[5] = 0x4ed8u;
    c->r[6] = 0x50e4u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_e56e4c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56e1c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[4] = 0x9dcu;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56e1c:;
    c->r[6] = 0x4ed8u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0xe9dbu;
    c->r[7] = 0x50e8u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xfd6a0000u;
L_e56e34:;
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[6]); }
L_e56e4c:;
    c->r[5] = c->r[0];
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_e56fe8; }
    { uint32_t ea = c->r[5] + 0xd3u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e56fe8; }
    c->r[6] = 0x4f08u;
    c->r[7] = 0x5104u;
    c->r[2] = c->r[8];
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_e56f18; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56ef0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[5] = 0x9e0u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e56ef0:;
    c->r[7] = 0x4f08u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x5108u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[2]); }
L_e56f18:;
    c->r[2] = 0x1ddcu;
    c->r[1] = c->r[8];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[2] = 0xbe5c88u;
    { uint32_t ea = 0xe56f34u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_e57968; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e56fac; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[5] = 0x37bu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[3]); }
L_e56fac:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e57910; }
    c->r[3] = 0xbe7ff0u;
    c->r[7] = 0xbe7ff0u;
    c->r[5] = c->r[0];
    { uint32_t ea = 0xe56fc8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xe56fccu + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] | c->r[12];
    goto L_e57918;
L_e56fe8:;
    c->r[2] = 0x4f00u;
    c->r[1] = 0x5104u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_e57094; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57068; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x9e0u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57068:;
    c->r[1] = 0x4f00u;
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x5108u;
    c->r[1] = 0x9e0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57094:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e57968; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e578ec; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x37bu;
    goto L_e5789c;
L_e570c4:;
    c->r[1] = 0x2b48u;
    c->r[0] = 0x2d4cu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_e57174; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57148; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = 0x569u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57148:;
    c->r[0] = 0x2b48u;
    c->r[1] = 0x569u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2d50u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57174:;
    c->r[1] = 0x4f40u;
    c->r[0] = 0x5114u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_e57228; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e571f8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = 0x9e2u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e571f8:;
    c->r[0] = 0x4f40u;
    c->r[1] = 0x49e8u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x39d20000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5118u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57228:;
    c->r[1] = 0x4ee8u;
    c->r[0] = 0x50ecu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_e572d8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e572ac; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = 0x9ddu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e572ac:;
    c->r[0] = 0x4ee8u;
    c->r[1] = 0x9ddu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x50f0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e572d8:;
    c->r[0] = 0x5124u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0xd5u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e574f0; }
    c->r[0] = 0x4f28u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_e57398; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57368; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = 0x9e4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57368:;
    c->r[0] = 0x4f28u;
    c->r[1] = 0xb9e5u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x286b0000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5128u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57398:;
    c->r[0] = 0x5104u;
    c->r[7] = c->r[8];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    if (COND_NE) { goto L_e57714; }
    c->r[0] = 0x4f08u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_e57448; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57420; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x9e0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57420:;
    c->r[0] = 0x4f08u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5108u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57448:;
    c->r[2] = 0xbe5758u;
    c->r[0] = 0x1ddcu;
    c->r[1] = c->r[8];
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = 0xe57464u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_e57968; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e574d4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x37bu;
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e574d4:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e57910; }
    c->r[0] = 0xbe7accu;
    c->r[3] = 0xbe7accu;
    { uint32_t ea = 0xe574ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xe574f0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_e576f0;
L_e574f0:;
    c->r[0] = 0x4f20u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_e57590; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57564; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x9e4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57564:;
    c->r[0] = 0x4f20u;
    c->r[1] = 0x9e4u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5128u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57590:;
    c->r[0] = 0x5104u;
    c->r[1] = c->r[8];
    (void)f_subs(c, c->r[2], 0x1u);
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    if (COND_NE) { goto L_e577c4; }
    c->r[0] = 0x4f18u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_e57650; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57620; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x9e0u;
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57620:;
    c->r[0] = 0x4f18u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x79e3u;
    c->r[0] = 0x5108u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xa6bc0000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e57650:;
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e5786c; }
    c->r[0] = 0x1ddcu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[2] + 0x224u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_e57968; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e576d8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[6] = 0x37bu;
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e576d8:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e57910; }
    c->r[0] = 0xbe78c8u;
    c->r[3] = 0xbe78c8u;
    { uint32_t ea = 0xe576f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xe576f4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_e576f0:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[12];
    goto L_e57918;
L_e57714:;
    c->r[0] = 0x4f00u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_e577b4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57788; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x9e0u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57788:;
    c->r[0] = 0x4f00u;
    c->r[1] = 0x9e0u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5108u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e577b4:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[8];
    c->r[5] = c->r[4];
    goto L_e57874;
L_e577c4:;
    c->r[0] = 0x4f00u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_e5786c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57840; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x9e0u;
    c->r[5] = c->r[4];
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_e57840:;
    c->r[0] = 0x4f00u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x5108u;
    c->r[1] = 0x9e0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_e5786c:;
    c->r[1] = 0x1ddcu;
    c->r[0] = c->r[8];
L_e57874:;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_e57968; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e578ec; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[7] = 0x37bu;
    c->r[5] = c->r[4];
L_e5789c:;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_e578ec:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1de0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_e5792c; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    goto L_e57944;
L_e57910:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_e57918:;
    c->r[2] = 0x1de0u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_e57940; }
L_e5792c:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_e5795c;
L_e57940:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_e57944:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_e5795c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_e57968:;
    c->v.s[0] = 0x437f0000u;
    c->v.s[2] = LD32(c->r[5] + 220u);
    c->r[3] = c->r[8];
    c->r[1] = 0x7f8u;
    c->r[7] = 0x30u;
    c->r[4] = c->r[5];
    c->r[14] = 0x6u;
    c->r[12] = ~0x0u;
    { uint32_t ea = c->r[3] + 0x154u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x100000u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x100000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xffe00000u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->r[6] = c->r[0] & c->r[1];
    { uint32_t r = c->r[6] ^ c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[5] + 0xd0u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_EQ) { c->r[6] = (c->r[0] >> 11) & 0xffu; }
    c->r[2] = c->v.s[0];
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[2]); }
    if (COND_EQ) { goto L_e589a4; }
L_e579c4:;
    c->r[0] = c->r[0] & c->r[14];
    c->r[3] = 0x0u;
    c->r[7] = f_adds(c, c->r[7], 0x1u);
    c->r[1] = c->r[1] & c->r[12];
    c->r[0] = c->r[0] | (c->r[5] << 19);
    c->r[3] = c->r[3] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[2] << 11);
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e579f0:;
    c->r[2] = 0x0u;
    c->r[7] = c->r[4];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57a20; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[0] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x600000u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e57a20:;
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57a50; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0] + 32u);
    c->v.s[0] = LD32(c->r[0] + 36u);
    c->v.s[2] = LD32(c->r[0] + 40u);
    c->v.s[8] = LD32(c->r[0] + 20u);
    c->v.s[6] = LD32(c->r[0] + 24u);
    c->v.s[10] = LD32(c->r[0] + 16u);
    goto L_e57a50;
L_e57a50:;
    c->v.f[10] = c->v.f[4] + c->v.f[10];
    c->v.f[8] = c->v.f[0] + c->v.f[8];
    c->v.s[12] = 0x3f000000u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[12];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[6] = c->v.f[6] * c->v.f[12];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[12] = c->v.f[0] - c->v.f[8];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    ST32(c->r[13] + 160u, c->v.s[10]);
    ST32(c->r[13] + 164u, c->v.s[8]);
    ST32(c->r[13] + 168u, c->v.s[6]);
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[12]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_e57aa8; }
    c->r[14] = 0xe57aa4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_e57aa8:;
    c->r[0] = c->r[8];
    c->r[1] = 0xeu;
    c->r[2] = 0x0u;
    ST32(c->r[13] + 172u, c->v.s[2]);
    c->r[14] = 0xe57abcu; f_a7ff38(c);
    c->r[0] = 0xbe1288u;
    { uint32_t ea = c->r[7] + 0xdau; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[13] + 0xa0u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xe57adcu + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[3] = 0x3u; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xe57ae8u; f_dd0dac(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    c->r[2] = 0x1u;
    c->r[14] = 0xe57af8u; f_dd3c2c(c);
    { uint32_t ea = c->r[7] + 0x84u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xe57b10u; f_dd2adc(c);
    c->r[0] = 0x19fcu;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    c->r[10] = 0x0u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x19e4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1da8u;
    c->r[14] = c->r[8] + c->r[0];
    c->r[0] = 0x1db8u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1db4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1da4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1e28u;
    c->r[4] = c->r[8] + c->r[0];
    c->r[0] = 0x2d3cu;
    c->r[12] = c->r[8] + c->r[0];
    c->r[0] = 0x1e24u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x20a8u;
    c->r[1] = c->r[8] + c->r[0];
    c->r[0] = 0x20a4u;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x44u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0x2d40u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3e9u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73e8u;
    { uint32_t ea = 0xe57bd0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73e0u;
    { uint32_t ea = 0xe57bdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73d0u;
    { uint32_t ea = 0xe57be8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73c8u;
    { uint32_t ea = 0xe57bf4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73b8u;
    { uint32_t ea = 0xe57c00u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73b0u;
    { uint32_t ea = 0xe57c0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe73a0u;
    { uint32_t ea = 0xe57c18u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xbe7398u;
    { uint32_t ea = 0xe57c24u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    goto L_e57c30;
L_e57c28:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    goto L_e58424;
L_e57c30:;
    { uint32_t ea = c->r[7] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + c->r[10];
    c->v.s[0] = LD32(c->r[9] + 212u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_e587e8; }
    { uint32_t ea = c->r[9] + 0x5a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57d14; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_e57df0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57cd4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = c->r[14];
    c->r[14] = 0x3d4u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[14] << 0) & 0x7fffffffu);
    c->r[14] = c->r[5];
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_e57cd4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57da4; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x3000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x29f20000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_e57db0;
L_e57d14:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57df0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57d84; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x3d4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e57d84:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57dc0; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
    goto L_e57dd0;
L_e57da4:;
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_e57db0:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_e57dcc; }
L_e57dc0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e57de4;
L_e57dcc:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_e57dd0:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e57de4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e57df0:;
    { uint32_t ea = c->r[9] + 0x5a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57eb4; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_e57fa4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57e74; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x384u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_e57e74:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e57f54; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xe000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7a8e0000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_e57f60;
L_e57eb4:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e58044; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e57f24; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x384u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e57f24:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e58030; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_e58038;
L_e57f54:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_e57f60:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_e57f80; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e57f98;
L_e57f80:;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e57f98:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e57fa4:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4ee0u;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_e580e4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e5801c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x567u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e5801c:;
    c->r[1] = 0x4ee0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x29dcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x19880000u;
    goto L_e580cc;
L_e58030:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e58038:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e58044:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4ed8u;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_e580e4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e580bc; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x567u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e580bc:;
    c->r[1] = 0x4ed8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xc9dbu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe4e20000u;
L_e580cc:;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e580e4:;
    { uint32_t ea = c->r[9] + 0x5a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9] + 0xd0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e581c0; }
    { uint32_t ea = c->r[7] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0xfffffffeu;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_e581c0; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_e582c4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e58184; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x374u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[7] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_e58184:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e5827c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x22660000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_e58288;
L_e581c0:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e5838c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e58234; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x374u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e58234:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e58264; }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_e5826c;
L_e58264:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e5826c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_e5838c;
L_e5827c:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_e58288:;
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_e582a0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_e582b8;
L_e582a0:;
    { uint32_t ea = c->r[14]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e582b8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e582c4:;
    { uint32_t ea = c->r[7] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e5838c; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_e58474; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e5834c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x376u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[7] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_e5834c:;
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e58448; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x3000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x75a50000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_e58454;
L_e5838c:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e58474; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e58408; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0x376u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e58408:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_e58460; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[5]); }
L_e58424:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    goto L_e58468;
L_e58448:;
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_e58454:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_e57c28; }
L_e58460:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e58468:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_e58474:;
    c->r[0] = c->r[7];
    c->r[1] = c->r[8];
    c->r[14] = 0xe58480u; f_e54a4c(c);
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_e584e8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x2fcu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e584e8:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[0] + 0xbf0u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[14] = 0xe58500u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_e58554; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xe58550u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_e58554:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_e58654; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[8] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xe58598u; f_15efe30(c);
    { uint32_t ea = c->r[9] + 0x5e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    goto L_e58658;
L_e58654:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
L_e58658:;
    c->r[8] = c->r[4];
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_e586c0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x2ffu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_e586c0:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xbfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xe586d4u; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[7] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_e5872c; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[6];
    c->r[14] = 0xe58728u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
L_e5872c:;
    c->r[0] = c->r[7] + c->r[6];
    (void)f_subs(c, c->r[7], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_e5879c; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[7];
    c->r[14] = 0xe58770u; f_15efe30(c);
    { uint32_t ea = c->r[9] + 0x5d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x5dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
L_e5879c:;
    c->r[7] = c->r[4] + 0x84u;
    c->r[0] = 0x5bcu;
    c->r[1] = c->r[9] + 0x5c0u;
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[7] = LD32(ea + 8u); }
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[1] = LD32(c->r[1]);
    c->r[1] = 0xeu;
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = 0xe587d8u; f_e589e8(c);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = 0x0u;
L_e587e8:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x530u;
    (void)f_subs(c, c->r[10], 0x2980u);
    c->r[0] = c->r[0] + 0x100u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    if (COND_NE) { goto L_e57c30; }
    c->r[2] = 0xfff8u;
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[3] = c->r[0] & c->r[2];
    c->r[2] = 0x38u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[3] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e5884c; }
    c->r[3] = 0x6u;
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[3] = ~0x0u;
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e5884c:;
    c->r[2] = 0x2d4cu;
    c->r[3] = c->r[8];
    c->r[6] = 0x2b48u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[7] = v; }
    c->r[2] = 0xd2c4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_e58900; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e588dc; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x569u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[7] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[7] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_e588dc:;
    c->r[7] = 0x2b48u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[3] = 0x2d50u;
    c->r[7] = 0x569u;
    { uint32_t ea = c->r[8] + c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_e58904;
L_e58900:;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
L_e58904:;
    c->r[3] = 0x2b38u;
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_e5899c; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_e5897c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x567u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_e5897c:;
    c->r[3] = 0x2b38u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[2] = 0x567u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_e5899c:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_e589a4:;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[3] = c->r[5];
    if (COND_NE) { c->r[3] = 0x1u; }
    c->r[3] = c->r[3] ^ (c->r[0] >> 19);
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_e579c4; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_e579f0;
}
