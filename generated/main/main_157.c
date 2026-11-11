#include "cpu.h"
#include "neon_rt.h"
void f_742f7c(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a80998(Cpu *c);
void f_a814c0(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a83f74(Cpu *c);
void f_aeb990(Cpu *c);
void f_aebb34(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_aee1e8(Cpu *restrict c) {
    FN_ENTER(0xaee1e8u);
L_aee1e8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0xccu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_af04dc; }
    c->r[0] = c->r[5];
    c->r[1] = c->r[8];
    c->r[14] = 0xaee220u; f_aebb34(c);
    c->r[1] = 0xc215u;
    c->r[0] = 0x1u;
    c->r[2] = c->r[5] + 0x50u;
    c->r[3] = 0x0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x7c820000u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xaee240u; f_742f7c(c);
    { uint32_t ea = c->r[5] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[5]); }
    c->r[9] = 0xdaedu;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x4u); }
    if (COND_NE) { goto L_aee970; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaee270u; f_a7ff38(c);
    c->r[5] = c->r[8];
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x164u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3e8u;
    { uint32_t ea = c->r[8] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xaee2a0u; f_a7a7ac(c);
    { uint32_t ea = c->r[8] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aee2c8; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[8] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aee2c8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[4] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[6] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    c->r[14] = 0xaee2f0u; f_a814c0(c);
    { uint32_t ea = c->r[6] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[4]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xaee324u; f_a7fc58(c);
    c->r[0] = 0xf53868u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xaee33cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->r[14] = 0xaee340u; f_a80108(c);
    { uint32_t ea = c->r[8] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xd005u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43da0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_aee364; }
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aee3d8;
L_aee364:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aee3c0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aee3c0:;
    { uint32_t ea = c->r[8] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aee3d8:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aee418; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = 0xfff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = f_adds(c, c->r[2], 0x9u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aee418:;
    c->r[3] = 0x2724u;
    c->r[2] = c->r[8];
    c->r[6] = 0x2888u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[3] = 0xd8ecu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_aee4cc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aee4a8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[7] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_aee4a8:;
    c->r[7] = 0x2888u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0xf511u;
    c->r[2] = 0x2728u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xafea0000u;
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aee4cc:;
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[9]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_aee4f0; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aee514; }
L_aee4f0:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aee514:;
    c->r[0] = c->r[13] + 0x40u;
    c->r[1] = 0x80u;
    c->r[14] = 0xaee520u; f_15efdc4(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[10] = 0x0u;
    c->r[0] = c->r[5] + 0x200u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x240u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x280u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x1c0u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x117cu;
    c->r[0] = c->r[8] + c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4afb4u;
    { uint32_t ea = 0xaee560u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4afa8u;
    { uint32_t ea = 0xaee56cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4af9cu;
    { uint32_t ea = 0xaee578u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4af90u;
    { uint32_t ea = 0xaee584u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4af84u;
    { uint32_t ea = 0xaee590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + 0xecu;
    c->r[9] = c->r[0] + 0x30c00u;
L_aee598:;
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x1u); }
    if (COND_NE) { goto L_aee950; }
    (void)f_subs(c, c->r[10], 0x3u);
    if (COND_CC) { goto L_aee5bc; }
    { uint32_t ea = c->r[5] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_aee950; }
L_aee5bc:;
    c->r[0] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_aee6a8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x1efu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[9] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[9] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[9] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[9] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_aee6a8:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7bcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xaee6bcu; f_a6a438(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[7] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_aee710; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[7];
    c->r[14] = 0xaee70cu; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_aee710:;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_aee850; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xaee750u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x7cu; ST32(ea, c->r[0]); }
L_aee850:;
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x3u);
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    if (COND_HI) { goto L_aee8e8; }
    c->r[0] = (c->r[10] << 2);
    c->r[1] = 0xaee874u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xaee888u: goto L_aee888; case 0xaee894u: goto L_aee894; case 0xaee8a0u: goto L_aee8a0; case 0xaee8acu: goto L_aee8ac; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_aee888:;
    { uint32_t ea = c->r[8] + 0xeccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_aee8b4;
L_aee894:;
    { uint32_t ea = c->r[8] + 0xed4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_aee8b4;
L_aee8a0:;
    { uint32_t ea = c->r[8] + 0xedcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_aee8b4;
L_aee8ac:;
    { uint32_t ea = c->r[8] + 0xee4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
L_aee8b4:;
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_aee8d0; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_aee8e8; }
L_aee8d0:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aee8e8:;
    c->r[0] = c->r[8];
    c->r[14] = 0xaee8f0u; f_a826fc(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x2u;
    c->r[2] = 0x14u;
    c->r[14] = 0xaee900u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aee948; }
    c->r[1] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x3f800000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
L_aee948:;
    c->r[0] = c->r[8];
    c->r[14] = 0xaee950u; f_a82760(c);
L_aee950:;
    c->r[10] = c->r[10] + 0x1u;
    (void)f_subs(c, c->r[10], 0x4u);
    if (COND_NE) { goto L_aee598; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0xaee968u; f_a7b778(c);
    c->r[9] = 0xdaedu;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x316a0000u;
L_aee970:;
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_af04dc; }
    { uint32_t ea = c->r[10] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_af04dc; }
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0xaee99cu; f_a7a7ac(c);
    c->r[1] = 0x1bf4u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x280u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_aeeaa8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeea14; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[8] + 0xecu;
    c->r[6] = 0x33eu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[2]); }
L_aeea14:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aeea54; }
    c->r[2] = 0xf5058cu;
    c->r[3] = 0xf5058cu;
    { uint32_t ea = 0xaeea2cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaeea30u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x377b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_aeea5c;
L_aeea54:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_aeea5c:;
    c->r[2] = 0x1bf8u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_aeea80; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aeea9c;
L_aeea80:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aeea9c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aeeaa8:;
    { uint32_t ea = c->r[5] + 0x17du; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x38u;
    c->r[6] = 0x6u;
    c->r[2] = 0xd000u;
    c->r[4] = 0x7000u;
    c->r[3] = 0x350fu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x80000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xffe00000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x726b0000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0x7b740000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xf8700000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aeeb10; }
    c->r[10] = c->r[2];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_aeeb40; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaeeafcu; f_a7ff38(c);
    c->r[2] = c->r[8] + 0x164u;
    c->r[3] = ~0x1fu;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] | c->r[3];
    goto L_aeeb5c;
L_aeeb10:;
    c->r[4] = c->r[3];
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_aeecf4; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaeeb2cu; f_a7ff38(c);
    c->r[2] = c->r[8] + 0x164u;
    c->r[3] = ~0x1fu;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] | c->r[3];
    goto L_aeed10;
L_aeeb40:;
    c->r[0] = c->r[8];
    c->r[1] = 0x15u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaeeb50u; f_a7ff38(c);
    c->r[2] = c->r[8] + 0x164u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
L_aeeb5c:;
    { uint32_t ea = c->r[8] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aeeb90; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[8] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aeeb90:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[8] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[2] = 0xf4a958u;
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x12bcu;
    { uint32_t ea = 0xaeebbcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aeebdc; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_aeebf0; }
L_aeebdc:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aeebf0:;
    c->r[12] = c->r[8];
    c->r[0] = 0xfff8u;
    { uint32_t ea = c->r[12] + 0x154u; uint32_t v = LD32(ea); c->r[12] = ea; c->r[2] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1f0000u;
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = c->r[2] & c->r[0];
    { uint32_t r = c->r[3] ^ c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeec38; }
    c->r[2] = c->r[2] & c->r[6];
    c->r[3] = f_adds(c, c->r[7], 0x1u);
    c->r[0] = ~0x0u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] & c->r[0];
    c->r[3] = c->r[3] + 0x0u + c->cf;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeec38:;
    c->r[7] = 0x1c9cu;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x1b8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aeedb0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeecb4; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x353u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aeecb4:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aeed64; }
    c->r[1] = 0xf502e4u;
    c->r[2] = 0xf502e4u;
    c->r[0] = 0x3000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xee650000u;
    { uint32_t ea = 0xaeecd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaeecd8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    goto L_aeed6c;
L_aeecf4:;
    c->r[0] = c->r[8];
    c->r[1] = 0x15u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaeed04u; f_a7ff38(c);
    c->r[2] = c->r[8] + 0x164u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
L_aeed10:;
    { uint32_t ea = c->r[8] + 0x164u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x168u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_aef694; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_aef674; }
    { uint32_t ea = c->r[10] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_aef678;
L_aeed64:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aeed6c:;
    c->r[3] = 0x1ca0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aeed8c; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aeeda4;
L_aeed8c:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeeda4:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeedb0:;
    { uint32_t ea = c->r[5] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aeedc4; }
    { uint32_t ea = c->r[3] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_aeedc8;
L_aeedc4:;
    c->r[3] = 0x0u;
L_aeedc8:;
    c->r[6] = 0x1cacu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_aeeecc; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeee40; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x355u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aeee40:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aeee80; }
    c->r[1] = 0xf50158u;
    c->r[2] = 0xf50158u;
    c->r[0] = 0x4000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xe7100000u;
    { uint32_t ea = 0xaeee60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaeee64u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    goto L_aeee88;
L_aeee80:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_aeee88:;
    c->r[3] = 0x1cb0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aeeea8; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aeeec0;
L_aeeea8:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeeec0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeeecc:;
    c->r[7] = 0x1cb4u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aeefd4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeef48; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x356u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aeef48:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aeef88; }
    c->r[1] = 0xf50050u;
    c->r[2] = 0xf50050u;
    c->r[0] = 0xe000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x61660000u;
    { uint32_t ea = 0xaeef68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaeef6cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    goto L_aeef90;
L_aeef88:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aeef90:;
    c->r[3] = 0x1cb8u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aeefb0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aeefc8;
L_aeefb0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeefc8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aeefd4:;
    c->r[7] = 0x1cbcu;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x16cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aef0d4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef050; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x357u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aef050:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aef088; }
    c->r[1] = 0xf4ff50u;
    c->r[2] = 0xf4ff50u;
    { uint32_t ea = 0xaef068u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaef06cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[10];
    goto L_aef090;
L_aef088:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aef090:;
    c->r[3] = 0x1cc0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aef0b0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aef0c8;
L_aef0b0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef0c8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef0d4:;
    c->r[7] = 0x1cc4u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x174u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aef1d4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef150; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x358u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aef150:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aef188; }
    c->r[1] = 0xf4fe50u;
    c->r[2] = 0xf4fe50u;
    { uint32_t ea = 0xaef168u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaef16cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[4];
    goto L_aef190;
L_aef188:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aef190:;
    c->r[3] = 0x1cc8u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aef1b0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aef1c8;
L_aef1b0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef1c8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef1d4:;
    c->r[7] = 0x1cccu;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x178u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aef2f4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef250; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x359u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aef250:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aef290; }
    c->r[1] = 0xf4fd48u;
    c->r[2] = 0xf4fd48u;
    c->r[0] = 0x3000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xa27e0000u;
    { uint32_t ea = 0xaef270u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaef274u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[0];
    goto L_aef298;
L_aef290:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aef298:;
    c->r[3] = 0x1cd0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aef2d0; }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aef2e8;
L_aef2d0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef2e8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef2f4:;
    c->r[3] = 0x2a04u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[4] = v; }
    c->r[3] = 0xd60cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[5];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_EQ) { goto L_aef3b8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef390; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x500u;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_aef390:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3000u;
    c->r[7] = 0x2a08u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x55e0000u;
    c->r[0] = c->r[5] ^ c->r[0];
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef3b8:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x29c4u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1bcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[5];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_aef474; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef44c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4f8u;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_aef44c:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xb000u;
    c->r[7] = 0x29c8u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x25f10000u;
    c->r[0] = c->r[5] ^ c->r[0];
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef474:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x297cu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[5];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_aef530; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef508; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4efu;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_aef508:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0xc000u;
    c->r[7] = 0x2980u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x4a0d0000u;
    c->r[0] = c->r[5] ^ c->r[0];
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef530:;
    c->r[6] = 0x2878u;
    c->r[0] = 0x2724u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_aef5e0; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef5b8; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[3] = 0x4a4u;
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
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_aef5b8:;
    c->r[0] = 0x2878u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x350fu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xf8700000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[1]); }
L_aef5e0:;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_aef60c; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aef638; }
L_aef60c:;
    c->r[6] = c->r[6] & 0xffff00ffu;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] | 0x3u;
    c->r[0] = 0xaedu;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[12] + 0x4u; ST32(ea, c->r[0]); }
L_aef638:;
    { uint32_t ea = c->r[8] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[8] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_af04a4;
L_aef674:;
    { uint32_t ea = c->r[10] + 0x260u; uint32_t v = LD32(ea); c->r[3] = v; }
L_aef678:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x40u;
    c->r[2] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    c->r[14] = 0xaef694u; f_a80998(c);
L_aef694:;
    { uint32_t ea = c->r[8] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aef6bc; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[8] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aef6bc:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[8] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0xf49e24u;
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[10] + 0x2f8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[8] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaef6f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], 0x2u);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_aef7dc; }
    c->r[3] = 0x12bcu;
    { uint32_t ea = c->r[8] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_aef714; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aef728; }
L_aef714:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aef728:;
    c->r[1] = 0x1be4u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aef988; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef7a0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
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
L_aef7a0:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1be8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_aef970; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    goto L_aef97c;
L_aef7dc:;
    { uint32_t ea = c->r[8] + 0xe2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_aef7f4; }
    { uint32_t ea = c->r[8] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aef808; }
L_aef7f4:;
    { uint32_t ea = c->r[8] + 0x118u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[8] + 0x10cu; ST32(ea, c->r[0]); }
L_aef808:;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = 0x4000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_aef8b4; }
    c->r[2] = 0x1be4u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[10] + 0x250u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_aefa88; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef898; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[8] + 0xecu;
    c->r[0] = 0x33cu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_aef898:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_aefa30; }
    c->r[0] = 0xf4f708u;
    c->r[3] = 0xf4f708u;
    { uint32_t ea = 0xaef8b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaef8b4u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_aef948;
L_aef8b4:;
    c->r[0] = 0x1be4u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[10] + 0x260u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_aefa88; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aef930; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[8] + 0xecu;
    c->r[4] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[0]); }
L_aef930:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_aefa30; }
    c->r[0] = 0xf4f670u;
    c->r[3] = 0xf4f670u;
    { uint32_t ea = 0xaef948u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xaef94cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
L_aef948:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[12];
    goto L_aefa38;
L_aef970:;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aef97c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aef988:;
    c->r[1] = 0x2724u;
    c->r[0] = c->r[8];
    c->r[3] = 0x2878u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_aefb48; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aefa18; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
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
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aefa18:;
    c->r[2] = 0x2878u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[4]); }
    goto L_aefb34;
L_aefa30:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_aefa38:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_aefa60; }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aefa7c;
L_aefa60:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefa7c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefa88:;
    c->r[1] = 0x2724u;
    c->r[0] = c->r[8];
    c->r[3] = 0x2880u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xd8ecu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_aefb48; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aefb18; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x4a4u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
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
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aefb18:;
    c->r[2] = 0x2880u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x9510u;
    c->r[0] = 0x2728u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x17c90000u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
L_aefb34:;
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x158u; ST32(ea, c->r[1]); }
L_aefb48:;
    c->r[0] = c->r[8];
    c->r[1] = 0xfff8u;
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[3] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] ^ c->r[7]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aefb90; }
    c->r[3] = f_adds(c, c->r[7], 0x1u);
    c->r[2] = c->r[2] & c->r[6];
    c->r[7] = ~0x0u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] & c->r[7];
    c->r[3] = c->r[3] + 0x0u + c->cf;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefb90:;
    c->r[7] = 0x1c9cu;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x1b8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aefc98; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aefc0c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x353u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aefc0c:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aefc4c; }
    c->r[1] = 0xf4f394u;
    c->r[2] = 0xf4f394u;
    { uint32_t ea = 0xaefc24u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaefc28u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x3000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xee650000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[2];
    goto L_aefc54;
L_aefc4c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aefc54:;
    c->r[3] = 0x1ca0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aefc74; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aefc8c;
L_aefc74:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefc8c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefc98:;
    { uint32_t ea = c->r[5] + 0xe0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aefcb4; }
    { uint32_t ea = c->r[3] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_aefcb8;
L_aefcb4:;
    c->r[3] = 0x0u;
L_aefcb8:;
    c->r[6] = 0x1cacu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_aefdc4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aefd30; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x355u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aefd30:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aefd70; }
    c->r[1] = 0xf4f270u;
    c->r[2] = 0xf4f270u;
    { uint32_t ea = 0xaefd48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaefd4cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x4000u;
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe7100000u;
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[2];
    goto L_aefd78;
L_aefd70:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_aefd78:;
    c->r[3] = 0x1cb0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aefda0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aefdb8;
L_aefda0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefdb8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefdc4:;
    c->r[7] = 0x1cb4u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x168u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aefed4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aefe40; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x356u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aefe40:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aefe80; }
    c->r[1] = 0xf4f160u;
    c->r[2] = 0xf4f160u;
    { uint32_t ea = 0xaefe58u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaefe5cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0xe000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x61660000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[2];
    goto L_aefe88;
L_aefe80:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aefe88:;
    c->r[3] = 0x1cb8u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aefeb0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aefec8;
L_aefeb0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefec8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aefed4:;
    c->r[7] = 0x1cbcu;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x16cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aeffe4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeff50; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x357u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_aeff50:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aeff90; }
    c->r[1] = 0xf4f050u;
    c->r[2] = 0xf4f050u;
    { uint32_t ea = 0xaeff68u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaeff6cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0xd000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x726b0000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[2];
    goto L_aeff98;
L_aeff90:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_aeff98:;
    c->r[3] = 0x1cc0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_aeffc0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aeffd8;
L_aeffc0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aeffd8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aeffe4:;
    c->r[7] = 0x1cc4u;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x174u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_af00f4; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0060; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x358u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_af0060:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_af00a0; }
    c->r[1] = 0xf4ef40u;
    c->r[2] = 0xf4ef40u;
    { uint32_t ea = 0xaf0078u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf007cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x7000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x7b740000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[2];
    goto L_af00a8;
L_af00a0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_af00a8:;
    c->r[3] = 0x1cc8u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_af00d0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af00e8;
L_af00d0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af00e8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af00f4:;
    c->r[7] = 0x1cccu;
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x178u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_af0204; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0170; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x359u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
L_af0170:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_af01b0; }
    c->r[1] = 0xf4ee30u;
    c->r[2] = 0xf4ee30u;
    { uint32_t ea = 0xaf0188u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaf018cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = 0x3000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa27e0000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[2];
    goto L_af01b8;
L_af01b0:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
L_af01b8:;
    c->r[3] = 0x1cd0u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_af01e0; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_af01f8;
L_af01e0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af01f8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0204:;
    c->r[3] = 0x2a04u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[5] + 0x34u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[4] = v; }
    c->r[3] = 0xd60cu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = c->r[12];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_af02c8; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af02a0; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x500u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_af02a0:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x3000u;
    c->r[6] = 0x2a08u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x55e0000u;
    c->r[7] = c->r[12] ^ c->r[7];
    { uint32_t ea = c->r[8] + c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af02c8:;
    c->r[6] = 0x29c4u;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x1bcu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = c->r[12];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_af0384; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af035c; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x4f8u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_af035c:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0xb000u;
    c->r[6] = 0x29c8u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x25f10000u;
    c->r[7] = c->r[12] ^ c->r[7];
    { uint32_t ea = c->r[8] + c->r[6]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0384:;
    c->r[6] = 0x297cu;
    c->r[7] = c->r[8];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[6] = c->r[12];
    c->r[6] = c->r[6] & 0xfffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_af0440; }
    { uint32_t ea = c->r[8] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_af0418; }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[8] + 0xecu;
    c->r[5] = 0x4efu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[8] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_af0418:;
    { uint32_t ea = c->r[3] + (c->r[6] << 3); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    c->r[3] = 0xc000u;
    c->r[7] = 0x2980u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x4a0d0000u;
    c->r[3] = c->r[12] ^ c->r[3];
    { uint32_t ea = c->r[8] + c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0440:;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], c->r[9]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; } }
    if (COND_NE) { goto L_af046c; }
    { uint32_t ea = c->r[8] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_af0498; }
L_af046c:;
    c->r[6] = c->r[6] & 0xffff00ffu;
    { uint32_t ea = c->r[8] + 0x1d8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[7]); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_af0498:;
    { uint32_t ea = c->r[10] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x40u;
    c->r[3] = c->r[2];
L_af04a4:;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x28u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0xaf04d0u; f_aeb990(c);
    c->r[0] = c->r[8];
    c->r[1] = 0x0u;
    c->r[14] = 0xaf04dcu; f_a7b778(c);
L_af04dc:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
