#include "cpu.h"
#include "neon_rt.h"
void f_9aa47c(Cpu *c);
void f_9aedcc(Cpu *c);
void f_9af3c4(Cpu *c);
void f_9af630(Cpu *c);
void f_9bb638(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7a7ac(Cpu *c);
void f_a7b778(Cpu *c);
void f_a7fbb4(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a80998(Cpu *c);
void f_a814c0(Cpu *c);
void f_a81a68(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a83f20(Cpu *c);
void f_a83f74(Cpu *c);
void f_a855c0(Cpu *c);
void f_a85804(Cpu *c);
void f_a85814(Cpu *c);
void f_a85844(Cpu *c);
void f_a87660(Cpu *c);
void f_a87958(Cpu *c);
void f_a879b0(Cpu *c);
void f_a879b4(Cpu *c);
void f_a87a24(Cpu *c);
void f_a93ca8(Cpu *c);
void f_aaf6d8(Cpu *c);
void f_aaf8d0(Cpu *c);
void f_aafc90(Cpu *c);
void f_ae77bc(Cpu *c);
void f_aeadbc(Cpu *c);
void f_aeafe4(Cpu *c);
void f_aeb13c(Cpu *c);
void f_aeb990(Cpu *c);
void f_aec430(Cpu *c);
void f_aeca5c(Cpu *c);
void f_d0804c(Cpu *c);
void f_d08088(Cpu *c);
void f_d091ec(Cpu *c);
void f_dd5cc8(Cpu *c);
void f_dd5d64(Cpu *c);
void f_15efdc4(Cpu *c);
void f_15efe30(Cpu *c);
void f_15efff8(Cpu *c);
void f_15f00d0(Cpu *c);
void f_15f0ea4(Cpu *c);
void f_ae5120(Cpu *restrict c) {
    FN_ENTER(0xae5120u);
L_ae5120:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xd0u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae5198; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_ae519c;
L_ae5198:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae519c:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae51c0; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae51c0:;
    c->r[2] = 0xf54340u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xae51d4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_ae51e8; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae51fc; }
L_ae51e8:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae51fc:;
    c->r[0] = c->r[4];
    c->r[7] = 0xdaedu;
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_NE) { goto L_ae5230; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ae525c; }
L_ae5230:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_ae525c:;
    c->r[0] = 0x2724u;
    c->r[8] = c->r[4];
    c->r[2] = 0x45b8u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[0] = 0xd8ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae5318; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae52e8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae52e8:;
    c->r[1] = 0x45b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8b7u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf8bd0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae5318:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xae533cu; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae5364u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0xc0u;
    c->r[3] = c->r[13] + 0xb8u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae5374u; f_aafc90(c);
    c->r[0] = 0x1be4u;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae5484; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae53ec; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae53ec:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae542c; }
    c->r[1] = 0xf59bb4u;
    c->r[2] = 0xf59bb4u;
    { uint32_t ea = 0xae5404u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae5408u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae5434;
L_ae542c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_ae5434:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae545c; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ae5478;
L_ae545c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae5478:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae5484:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x45c8u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae5530; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae5500; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae5500:;
    c->r[1] = 0x45c8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8b9u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xfc2d0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae5530:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae5a64; }
    c->r[8] = c->r[0] + 0x1u;
    c->r[0] = 0xf59a28u;
    c->v.s[20] = 0x0u;
    c->r[1] = 0x1824u;
    c->v.s[16] = 0x3f000000u;
    c->v.s[22] = 0x3e000000u;
    c->v.s[24] = 0x40400000u;
    c->v.s[26] = 0x40800000u;
    c->v.s[28] = 0x40a00000u;
    c->v.s[30] = 0x40c00000u;
    c->v.s[17] = 0x40e00000u;
    c->r[11] = c->r[4] + 0x154u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1be8u;
    c->r[1] = c->r[4] + c->r[1];
    { uint32_t ea = 0xae5590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf59a1cu;
    { uint32_t ea = 0xae55a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_ae55ac:;
    c->r[6] = c->r[8] - 0x2u;
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[6] & 0x1u;
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xae55dcu; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae5660; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x2c4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae5660:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae5674u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[10] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[1] & (c->r[7] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[10] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_ae56c8; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae56c4u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
L_ae56c8:;
    c->r[0] = c->r[10] + c->r[7];
    (void)f_subs(c, c->r[10], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[11]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_ae5934; }
    c->v.s[0] = c->r[6];
    c->v.f[18] = (float)(int32_t)c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[18];
    c->r[14] = 0xae5700u; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    c->r[0] = 0x3e000000u;
    c->v.s[1] = c->v.s[18];
    c->v.f[19] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = c->v.s[16];
    ST32(c->r[13] + 40u, c->v.s[19]);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->v.s[21] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae5728u; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[21] = c->v.f[21] * c->v.f[22];
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 48u, c->v.s[0]);
    ST32(c->r[13] + 52u, c->v.s[21]);
    c->v.s[0] = c->v.s[16];
    c->v.s[23] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae574cu; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] + c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[23];
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 56u, c->v.s[0]);
    ST32(c->r[13] + 60u, c->v.s[21]);
    c->v.s[0] = c->v.s[16];
    c->v.s[23] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae5774u; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.f[21] = c->v.f[21] * c->v.f[23];
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 64u, c->v.s[0]);
    ST32(c->r[13] + 68u, c->v.s[21]);
    c->v.s[0] = c->v.s[16];
    c->v.s[23] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae579cu; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[26];
    c->v.f[21] = c->v.f[21] * c->v.f[23];
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 72u, c->v.s[0]);
    ST32(c->r[13] + 76u, c->v.s[21]);
    c->v.s[0] = c->v.s[16];
    c->v.s[23] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae57c4u; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[28];
    c->v.f[21] = c->v.f[21] * c->v.f[23];
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 80u, c->v.s[0]);
    ST32(c->r[13] + 84u, c->v.s[21]);
    c->v.s[0] = c->v.s[16];
    c->v.s[23] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae57ecu; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[30];
    c->v.f[21] = c->v.f[21] * c->v.f[23];
    c->v.s[1] = c->v.s[18];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 88u, c->v.s[0]);
    ST32(c->r[13] + 92u, c->v.s[21]);
    c->v.s[0] = c->v.s[16];
    c->v.s[23] = LD32(c->r[5] + 60u);
    c->r[14] = 0xae5814u; f_15f00d0(c);
    c->v.s[2] = LD32(c->r[5] + 144u);
    c->v.f[0] = c->v.f[0] * c->v.f[17];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[2] = c->v.f[21] * c->v.f[23];
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[10], c->v.s[19]);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae5934:;
    c->r[3] = c->r[13] + 0xa8u;
    c->r[6] = c->r[13] + 0xa8u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[1];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae595cu; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[13] + 0x28u;
    c->r[14] = 0xae596cu; f_aafc90(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_EQ) { goto L_ae5a58; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae59d8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae59d8:;
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_ae5a10; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[9]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae5a18;
L_ae5a10:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_ae5a18:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_ae5a34; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae5a4c;
L_ae5a34:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
L_ae5a4c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[11]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0x4u; ST32(ea, c->r[0]); }
L_ae5a58:;
    c->r[8] = c->r[8] - 0x1u;
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_GT) { goto L_ae55ac; }
L_ae5a64:;
    c->r[1] = 0xf53a9cu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae5a78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae5a8c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae5aa4; }
L_ae5a8c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae5aa4:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae5b50; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae5b24; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae5b24:;
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae5b50:;
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xae5b74u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[7] = c->r[13] + 0x28u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae5ba8u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0xa8u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[7];
    c->r[14] = 0xae5bb8u; f_aafc90(c);
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae5cb4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae5c28; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[6]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae5c28:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae5c68; }
    c->r[1] = 0xf59378u;
    c->r[2] = 0xf59378u;
    { uint32_t ea = 0xae5c40u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae5c44u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae5c70;
L_ae5c68:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_ae5c70:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae5c90; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae5ca8;
L_ae5c90:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ae5ca8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ae5cb4:;
    c->r[13] = c->r[13] + 0xd0u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ae5ce4(Cpu *restrict c) {
    FN_ENTER(0xae5ce4u);
L_ae5ce4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 24u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); c->r[13] = c->r[13] - 24u; }
    c->r[13] = c->r[13] - 0xc0u;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae5d5c; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_ae5d60;
L_ae5d5c:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae5d60:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae5d84; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae5d84:;
    c->r[2] = 0xf5377cu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xae5d98u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_ae5dac; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae5dc0; }
L_ae5dac:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae5dc0:;
    c->r[0] = c->r[4];
    c->r[7] = 0xdaedu;
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_NE) { goto L_ae5df4; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ae5e20; }
L_ae5df4:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_ae5e20:;
    c->r[0] = 0x2724u;
    c->r[8] = c->r[4];
    c->r[2] = 0x45b8u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[0] = 0xd8ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae5edc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae5eac; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae5eac:;
    c->r[1] = 0x45b8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xe8b7u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf8bd0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae5edc:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xae5f04u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x18u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae5f2cu; f_a7fc58(c);
    c->r[2] = c->r[13] + 0xb0u;
    c->r[3] = c->r[13] + 0xa8u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae5f3cu; f_aafc90(c);
    c->r[0] = 0x1be4u;
    c->r[5] = c->r[4];
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x4000u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae604c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae5fbc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae5fbc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae5ff4; }
    c->r[1] = 0xf58fe4u;
    c->r[2] = 0xf58fe4u;
    { uint32_t ea = 0xae5fd4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae5fd8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[6];
    goto L_ae5ffc;
L_ae5ff4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_ae5ffc:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae6024; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ae6040;
L_ae6024:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6040:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae604c:;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x45c0u;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae6104; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae60d4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae60d4:;
    c->r[1] = 0x45c0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x58b8u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x94270000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae6104:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    c->r[10] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0xae612cu; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[10]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6558; }
    c->r[1] = 0xff0u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[20] = 0x0u;
    c->r[11] = c->r[4] + 0x154u;
    c->r[6] = c->r[13] + 0x98u;
    c->r[0] = c->r[1] & (c->r[0] >> 4);
    c->r[1] = 0x1824u;
    c->r[9] = c->r[4] + c->r[1];
    c->v.s[0] = c->r[0];
    c->r[0] = 0xf53388u;
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = 0xae618cu + c->r[0]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[5] = c->r[0] + 0x30c00u;
    c->v.f[18] = c->v.f[16] / c->v.f[0];
L_ae6194:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae61f4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2c4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[5] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[5] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[5] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[5] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae61f4:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae6208u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[7] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[7] = c->r[1] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ae625c; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae6258u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae625c:;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[11]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_ae64d4; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[6] = c->v.f[20] + c->v.f[16];
    c->v.s[4] = LD32(c->r[1] + 144u);
    c->v.s[0] = LD32(c->r[1] + 60u);
    c->v.f[2] = c->v.f[20] * c->v.f[4];
    c->v.f[8] = c->v.f[18] * c->v.f[0];
    ST32(c->r[13] + 24u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    ST32(c->r[13] + 28u, c->v.s[18]);
    ST32(c->r[13] + 32u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 36u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 40u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 44u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 48u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 52u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 56u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 60u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 64u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 68u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 72u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 76u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 84u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 88u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 92u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 96u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 100u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 104u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 108u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 112u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 116u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 120u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[4];
    ST32(c->r[13] + 124u, c->v.s[8]);
    c->v.f[6] = c->v.f[6] + c->v.f[16];
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 128u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] + c->v.f[16];
    c->v.f[10] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[8] * c->v.f[0];
    ST32(c->r[13] + 132u, c->v.s[8]);
    c->v.f[8] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13] + 136u, c->v.s[10]);
    ST32(c->r[13] + 140u, c->v.s[6]);
    c->v.f[20] = c->v.f[2] + c->v.f[16];
    ST32(c->r[13] + 144u, c->v.s[8]);
    ST32(c->r[13] + 148u, c->v.s[4]);
    c->v.f[18] = c->v.f[4] * c->v.f[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x44u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae64d4:;
    c->r[3] = c->r[13] + 0x98u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[1];
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae64f8u; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[13] + 0x18u;
    c->r[14] = 0xae6508u; f_aafc90(c);
    { uint32_t ea = c->r[4] + 0xfbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae6528; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_ae6540; }
L_ae6528:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae6540:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_CC) { goto L_ae6194; }
L_ae6558:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = 0x4000u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_ae6664; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae65d8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae65d8:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ae6610; }
    c->r[0] = 0xf589c8u;
    c->r[1] = 0xf589c8u;
    { uint32_t ea = 0xae65f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xae65f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[9];
    goto L_ae6618;
L_ae6610:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_ae6618:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae663c; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ae6658;
L_ae663c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6658:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6664:;
    c->r[1] = 0xf52e9cu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae6678u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae668c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae66a4; }
L_ae668c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae66a4:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae674c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6720; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae6720:;
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae674c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[7] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xae6774u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae67a8u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x98u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0xae67b8u; f_aafc90(c);
    { uint32_t ea = c->r[7] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae68ac; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6828; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae6828:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae6860; }
    c->r[1] = 0xf58778u;
    c->r[2] = 0xf58778u;
    { uint32_t ea = 0xae6840u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae6844u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[9];
    goto L_ae6868;
L_ae6860:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_ae6868:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae6888; }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae68a0;
L_ae6888:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ae68a0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
L_ae68ac:;
    c->r[13] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->r[13] = c->r[13] + 24u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ae68e0(Cpu *restrict c) {
    FN_ENTER(0xae68e0u);
L_ae68e0:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x54u;
    c->r[4] = c->r[0];
    c->r[5] = c->r[1];
    c->r[7] = 0xdaedu;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[6] = r; } }
    if (COND_NE) { goto L_ae6958; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_ae6984; }
L_ae6958:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_ae6984:;
    c->r[0] = 0x2724u;
    c->r[8] = c->r[4];
    c->r[2] = 0x2520u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    c->r[0] = 0xd8ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae6a3c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6a10; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae6a10:;
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae6a3c:;
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae6a68; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_ae6a6c;
L_ae6a68:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae6a6c:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae6a90; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae6a90:;
    c->r[2] = 0xf52a70u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xae6aa4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    if (COND_NE) { goto L_ae6ab8; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_ae6acc; }
L_ae6ab8:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae6acc:;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[5]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    c->r[14] = 0xae6af4u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[5]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae6b1cu; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x44u;
    c->r[3] = c->r[13] + 0x38u;
    c->r[0] = c->r[4];
    c->r[14] = 0xae6b2cu; f_aafc90(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x45b0u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae6bd8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6ba8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae6ba8:;
    c->r[1] = 0x45b0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x58b6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x409a0000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae6bd8:;
    c->r[0] = 0x1be4u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae6cf8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6c5c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae6c5c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae6ca0; }
    c->r[1] = 0xf58344u;
    c->r[2] = 0xf58344u;
    { uint32_t ea = 0xae6c74u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae6c78u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae6cac;
L_ae6ca0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae6cac:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae6cd0; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ae6cec;
L_ae6cd0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6cec:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6cf8:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xae6d1cu; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0x28u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae6d50u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x20u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0xae6d60u; f_aafc90(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4598u;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae6e0c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6ddc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae6ddc:;
    c->r[1] = 0x4598u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x78b3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1c40000u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
L_ae6e0c:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae6ecc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae6e88; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae6e88:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae6edc; }
    c->r[1] = 0xf58118u;
    c->r[2] = 0xf58118u;
    { uint32_t ea = 0xae6ea0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae6ea4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae6ee8;
L_ae6ecc:;
    c->r[0] = 0x1be8u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    goto L_ae6f38;
L_ae6edc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae6ee8:;
    c->r[1] = 0x1be8u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_ae6f10; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ae6f2c;
L_ae6f10:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6f2c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_ae6f38:;
    c->r[0] = 0xf58060u;
    c->r[9] = c->r[5] + 0x4cu;
    c->r[8] = c->r[4] + 0x154u;
    c->r[11] = 0x0u;
    c->r[6] = c->r[13] + 0x28u;
    c->r[7] = 0x0u;
    { uint32_t ea = 0xae6f58u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf58058u;
    { uint32_t ea = 0xae6f64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[10] = c->r[0] + 0x30c00u;
L_ae6f6c:;
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[11]); }
    c->r[14] = 0xae6f8cu; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[11]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae6fbcu; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[13] + 0x20u;
    c->r[14] = 0xae6fccu; f_aafc90(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae70c4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae703c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae703c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7078; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae7084;
L_ae7078:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae7084:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_ae70a0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae70b8;
L_ae70a0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae70b8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae70c4:;
    c->r[7] = c->r[7] + 0x1u;
    (void)f_subs(c, c->r[7], 0x5u);
    if (COND_NE) { goto L_ae6f6c; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae716c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae7148; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae7148:;
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae716c:;
    c->r[1] = 0xf52394u;
    { uint32_t ea = c->r[4] + 0xe64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae7180u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae7194; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae71ac; }
L_ae7194:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae71ac:;
    c->r[0] = 0xf57df0u;
    c->r[7] = 0x0u;
    c->r[6] = c->r[13] + 0x28u;
    c->r[9] = c->r[13] + 0x20u;
    c->r[11] = 0x0u;
    { uint32_t ea = 0xae71c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf57de8u;
    { uint32_t ea = 0xae71d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
L_ae71d4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5] + (c->r[11] << 2);
    { uint32_t ea = c->r[0] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae72d4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae724c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = 0x33cu;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[10] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[10] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[5]; c->r[3] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    c->r[2] = c->r[10] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_ae724c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ae7288; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x4000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xaf30000u;
    c->r[1] = c->r[1] | c->r[2];
    goto L_ae7294;
L_ae7288:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_ae7294:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae72b0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_ae72c8;
L_ae72b0:;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
L_ae72c8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
L_ae72d4:;
    { uint32_t ea = c->r[0] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xae72f4u; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae7324u; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[9];
    c->r[14] = 0xae7334u; f_aafc90(c);
    c->r[1] = c->r[11] + 0x3u;
    c->r[0] = c->r[11] - 0x1u;
    (void)f_subs(c, c->r[1], 0x0u);
    c->r[11] = c->r[0];
    if (COND_GT) { goto L_ae71d4; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae744c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae73c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae73c0:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7404; }
    c->r[1] = 0xf57be0u;
    c->r[2] = 0xf57be0u;
    { uint32_t ea = 0xae73d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae73dcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae7410;
L_ae7404:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae7410:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_ae7428; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae7440;
L_ae7428:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae7440:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae744c:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x45a8u;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae74e8; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae74c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae74c0:;
    c->r[1] = 0x45a8u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xd8b5u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6e010000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae74e8:;
    c->r[1] = 0xf52018u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae74fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae7510; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae7528; }
L_ae7510:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae7528:;
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x0u;
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[6]); }
    c->r[14] = 0xae754cu; f_a814c0(c);
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[13] + 0x28u;
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae7580u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x20u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[14] = 0xae7590u; f_aafc90(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae768c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae7600; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae7600:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7644; }
    c->r[1] = 0xf579a0u;
    c->r[2] = 0xf579a0u;
    { uint32_t ea = 0xae7618u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae761cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae7650;
L_ae7644:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae7650:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_ae7668; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae7680;
L_ae7668:;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae7680:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae768c:;
    c->r[13] = c->r[13] + 0x54u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ae76d0(Cpu *restrict c) {
    FN_ENTER(0xae76d0u);
L_ae76d0:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x18u;
    c->r[4] = c->r[0];
    c->r[9] = c->r[13];
    c->r[8] = c->r[4] + 0x4cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); }
    c->r[0] = c->r[4];
    c->r[2] = 0xb0u;
    { uint32_t ea = c->r[4] + 0x60u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[6] = v; c->r[7] = v2; }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[14] = 0xae7708u; f_15efff8(c);
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); c->r[5] = LD32(ea + 16u); }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); ST32(ea + 16u, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[10]); }
    c->r[13] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_ae7724(Cpu *restrict c) {
    FN_ENTER(0xae7724u);
L_ae7724:;
    c->r[1] = c->r[0];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { return; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_ae7780; }
    { uint32_t ea = c->r[1] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_ae7780; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_ae7780; }
    { uint32_t ea = c->r[1] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
L_ae7780:;
    return;
}
void f_ae7784(Cpu *restrict c) {
    FN_ENTER(0xae7784u);
L_ae7784:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf5a904u;
    { uint32_t ea = 0xae7794u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae7798u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x138u;
    c->pc = c->r[4]; c->r[14] = 0xae77b0u; rt_dispatch(c);
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_ae77bc(c);
}
void f_ae77bc(Cpu *restrict c) {
    FN_ENTER(0xae77bcu);
L_ae77bc:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[8] = c->r[0];
    c->r[14] = 0xae77ccu; f_a87958(c);
    c->r[4] = 0x1u;
    c->r[0] = 0x5u;
    c->r[1] = 0x0u;
    c->r[9] = 0x10u;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x30u; ST16(ea, c->r[0]); }
    c->r[0] = 0xf5a8a4u;
    { uint32_t ea = c->r[8] + 0x34u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[8] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xae77f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[8] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[8] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[8] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[8] + 0x50u; ST8(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x40u; ST32(ea, c->r[1]); }
    c->r[1] = 0xbb60u;
    { uint32_t ea = c->r[8] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf5156cu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x430000u;
    { uint32_t ea = 0xae7844u + c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[0] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x210u;
    c->r[14] = 0xae785cu; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xae7870u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x3u;
    c->r[6] = 0x2u;
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = 0xc8a7a7u;
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    c->r[2] = 0xae78a4u + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xae78a8u; f_d091ec(c);
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[8] + 0x124u; ST32(ea, c->r[5]); }
    c->r[14] = 0xae78b8u; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xae78ccu; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[3] >> 1);
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 1);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); }
    c->r[2] = 0xc8be8cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    c->r[2] = 0xae790cu + c->r[2];
    c->r[14] = 0xae790cu; f_d091ec(c);
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    { uint32_t ea = c->r[8] + 0x128u; ST32(ea, c->r[5]); }
    c->r[14] = 0xae791cu; f_d0804c(c);
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0xae7930u; rt_dispatch(c);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)((int32_t)c->r[3] >> 2);
    c->r[3] = (uint32_t)((int32_t)c->r[0] >> 2);
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); }
    c->r[2] = 0xc8be2fu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[4] = 0x10u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    c->r[2] = 0xae7974u + c->r[2];
    c->r[14] = 0xae7974u; f_d091ec(c);
    { uint32_t ea = c->r[8] + 0x12cu; ST32(ea, c->r[5]); }
    c->r[0] = c->r[8] + 0xe0u;
    c->r[9] = c->r[8] + 0xa0u;
    c->r[10] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x29u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ae79e4; }
    c->r[1] = 0xbb60u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x430000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x2f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_NE) { goto L_ae79c4; }
    c->r[1] = 0x5544u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x440000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ae7a18; }
L_ae79c4:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[5] = 0x10u;
    c->r[14] = 0xae79d4u; f_d0804c(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x9u;
    goto L_ae7a34;
L_ae79e4:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[14] = 0xae79f0u; f_d0804c(c);
    c->r[1] = 0x7u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x100u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[4]); }
    goto L_ae7a54;
L_ae7a18:;
    c->r[0] = 0x210u;
    c->r[1] = 0x10u;
    c->r[5] = 0x10u;
    c->r[14] = 0xae7a28u; f_d0804c(c);
    c->r[1] = 0x0u;
    c->r[2] = 0x2u;
    c->r[3] = 0x6u;
L_ae7a34:;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[5]); }
    c->r[1] = 0x400u;
L_ae7a54:;
    c->r[2] = 0x1u;
    c->r[3] = 0x1u;
    c->r[14] = 0xae7a60u; f_d08088(c);
    { uint32_t ea = c->r[8] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x58u; ST8(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[8] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf593acu;
    { uint32_t ea = 0xae7a84u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[10] = c->r[10] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[10] = c->r[10] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[10]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[9] = c->r[9] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[9] = c->r[9] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[4] = c->r[4] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[4] = c->r[4] + 20u; }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ae7af8(Cpu *restrict c) {
    FN_ENTER(0xae7af8u);
L_ae7af8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf5a590u;
    { uint32_t ea = 0xae7b0cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7b28; }
    c->r[14] = 0xae7b20u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae7b28:;
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7b48; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7b40u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
L_ae7b48:;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7b68; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7b60u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
L_ae7b68:;
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7b88; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7b80u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
L_ae7b88:;
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7ba8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7ba0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
L_ae7ba8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_ae7bb8(Cpu *restrict c) {
    FN_ENTER(0xae7bb8u);
L_ae7bb8:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf5a4d0u;
    { uint32_t ea = 0xae7bccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7be8; }
    c->r[14] = 0xae7be0u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae7be8:;
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7c08; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7c00u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[0]); }
L_ae7c08:;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7c28; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7c20u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
L_ae7c28:;
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7c48; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7c40u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[0]); }
L_ae7c48:;
    { uint32_t ea = c->r[4] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae7c68; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xae7c60u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[0]); }
L_ae7c68:;
    c->r[0] = c->r[4];
    c->r[14] = 0xae7c70u; f_a879b4(c);
    c->r[0] = 0xf5a41cu;
    { uint32_t ea = 0xae7c7cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xae7c7cu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ae7c98(Cpu *restrict c) {
    FN_ENTER(0xae7c98u);
L_ae7c98:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[11] = c->r[1];
    c->r[10] = c->r[0];
    c->r[14] = 0xae7cacu; f_aaf8d0(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[11];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae7cd4u; f_9bb638(c);
    c->r[1] = 0xc8bac2u;
    c->r[9] = c->r[13] + 0x10u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[9];
    c->r[1] = 0xae7cecu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x3cu;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae7d4cu; f_9bb638(c);
    c->r[1] = 0xc8ba5au;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae7d60u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x44u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae7dc4u; f_9bb638(c);
    c->r[1] = 0xc8b9eau;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae7dd8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x40u;
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
    c->r[0] = c->r[10] + 0x54u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0xc8b99cu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0xae7e30u + c->r[0];
    c->r[0] = 0xc75bd5u;
    c->r[3] = 0xae7e38u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xae7e3cu; f_9af630(c);
    c->r[0] = c->r[11];
    c->r[14] = 0xae7e44u; f_9bb638(c);
    c->r[2] = c->r[9];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae7ea4u; f_9bb638(c);
    c->r[1] = 0xc8b928u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae7eb8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x50u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae7f18u; f_9bb638(c);
    c->r[1] = 0xc8b8bdu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae7f2cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x48u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae7f90u; f_9bb638(c);
    c->r[1] = 0xc8b851u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae7fa4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x4cu;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae8004u; f_9bb638(c);
    c->r[1] = 0xc8b7e7u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae8018u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x5cu;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae807cu; f_9bb638(c);
    c->r[1] = 0xc8b77cu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae8090u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x58u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae80f0u; f_9bb638(c);
    c->r[1] = 0xc8ae0fu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae8104u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x60u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae8168u; f_9bb638(c);
    c->r[1] = 0xc8ada3u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae817cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xa0u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae81dcu; f_9bb638(c);
    c->r[1] = 0xc8ad3bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae81f0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0xe0u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae8254u; f_9bb638(c);
    c->r[1] = 0xc8aca1u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae8268u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x120u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae82ccu; f_9bb638(c);
    c->r[1] = 0xc89d6bu;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae82e0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x124u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae8348u; f_9bb638(c);
    c->r[1] = 0xc8a570u;
    c->r[2] = c->r[9];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xae835cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x128u;
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
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xae83c0u; f_9bb638(c);
    c->r[1] = 0xc8a511u;
    c->r[1] = 0xae83ccu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[10]); }
    c->r[1] = c->r[10] + 0x12cu;
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
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ae845c(Cpu *restrict c) {
    FN_ENTER(0xae845cu);
L_ae845c:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_ae8460(Cpu *restrict c) {
    FN_ENTER(0xae8460u);
L_ae8460:;
    return;
}
void f_ae8468(Cpu *restrict c) {
    FN_ENTER(0xae8468u);
L_ae8468:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x108u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ae99e0; }
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0xae84acu; f_a7a7ac(c);
    c->r[6] = c->r[4];
    c->r[1] = 0xfff8u;
    c->r[2] = 0x38u;
    c->r[5] = 0x6u;
    c->r[3] = ~0x0u;
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffe00000u;
    c->r[1] = c->r[0] & c->r[1];
    { uint32_t r = c->r[1] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae84fc; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & c->r[5];
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[7] + 0x0u + c->cf;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae84fc:;
    c->r[1] = 0xd88b7cu;
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[1] = 0xae8510u + c->r[1];
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae8518u; f_a7ff38(c);
    { uint32_t ea = c->r[8] + 0x30u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = 0xdaedu;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x316a0000u;
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_NE) { goto L_ae853c; }
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xfffffu;
    c->r[0] = c->r[0] | (c->r[1] << 20);
L_ae853c:;
    c->r[9] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[9] + 0x164u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[3]); }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[1] = c->r[1] & 0x1fu;
    c->r[0] = c->r[1] | (c->r[0] << 5);
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[8] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xae8578u; f_a83f20(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0xae8584u; f_a7a7ac(c);
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    c->v.s[10] = c->r[1];
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    c->v.s[4] = c->r[2];
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[3]); }
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[3]);
    c->r[3] = (c->r[3] >> 16);
    c->v.s[6] = c->r[3];
    c->v.s[8] = c->r[2];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[2]); }
    c->v.f[2] = (float)(int32_t)c->v.s[0];
    c->v.f[0] = (float)(int32_t)c->v.s[6];
    c->v.f[6] = (float)(int32_t)c->v.s[4];
    c->v.f[4] = (float)(int32_t)c->v.s[8];
    c->v.f[8] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = (float)(int32_t)c->v.s[12];
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_ae8610; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ae8634; }
L_ae8610:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[7]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae8634:;
    c->r[0] = 0x2724u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    c->r[0] = 0xd8ecu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_ae86f0; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae86c8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae86c8:;
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2728u;
    c->r[1] = 0x4a4u;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae86f0:;
    c->r[0] = 0x1be4u;
    c->r[5] = c->r[4];
    c->r[12] = 0x4000u;
    { uint32_t ea = c->r[5] + c->r[0]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae87f4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae8770; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae8770:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae87a8; }
    c->r[1] = 0xf56830u;
    c->r[2] = 0xf56830u;
    { uint32_t ea = 0xae8788u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae878cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[12];
    goto L_ae87b0;
L_ae87a8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_ae87b0:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae87d0; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae87e8;
L_ae87d0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_ae87e8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_ae87f4:;
    c->r[1] = 0xf50d0cu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae8808u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_ae882c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_ae882c; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    goto L_ae884c;
L_ae882c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[2] = c->r[4];
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[2] + 0x10cu; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
L_ae884c:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae8870; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae8870:;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[6]); }
    c->r[1] = 0x100cu;
    c->r[2] = c->r[4];
    c->v.f[16] = c->v.f[2] / c->v.f[0];
    c->v.f[20] = c->v.f[6] / c->v.f[4];
    c->v.f[18] = c->v.f[8] / c->v.f[0];
    c->v.f[22] = c->v.f[10] / c->v.f[4];
    c->r[8] = 0x4630u;
    c->r[9] = c->r[13] + 0x70u;
    c->r[10] = c->r[13] + 0xf8u;
    c->r[5] = c->r[13] + 0xf0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] - 0xeecu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = 0x2728u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1174u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
L_ae88f0:;
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae88fcu; f_aaf6d8(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae89a4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae8978; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae8978:;
    { uint32_t ea = c->r[0] + c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x28c6u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x4fef0000u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae89a4:;
    { uint32_t ea = c->r[0] + 0xc10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xae89e8u; f_a814c0(c);
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[0] >> 16) & 0x7fffu;
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = c->r[0];
    c->v.s[2] = c->r[1];
    c->r[0] = c->r[4];
    c->r[1] = c->r[9];
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    c->v.f[4] = c->v.f[22] * c->v.f[0];
    c->v.f[6] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[4]);
    ST32(c->r[13] + 112u, c->v.s[4]);
    c->v.s[4] = vcvt_u32_f64((double)c->v.f[6]);
    ST32(c->r[13] + 116u, c->v.s[4]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[2]);
    ST32(c->r[13] + 124u, c->v.s[0]);
    c->r[14] = 0xae8a40u; f_a7fc58(c);
    c->r[0] = c->r[4];
    c->r[2] = c->r[10];
    c->r[3] = c->r[5];
    c->r[14] = 0xae8a50u; f_aafc90(c);
    c->r[6] = c->r[6] + 0x1u;
    (void)f_subs(c, c->r[6], 0x2u);
    if (COND_NE) { goto L_ae88f0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[9] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_ae9108; }
    c->r[0] = c->r[4];
    c->r[1] = 0x14u;
    c->r[2] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0xae8a88u; f_a7ff38(c);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = 0x3e8u;
    c->r[10] = 0xfff8u;
    c->r[8] = 0xdaedu;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0x1f0000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x316a0000u;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = 0x38u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] & c->r[10];
    { uint32_t r = c->r[1] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae8af4; }
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[3] = ~0x0u;
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = c->r[7] + 0x0u + c->cf;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae8af4:;
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xae8b14u; f_a814c0(c);
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[7]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    c->r[1] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xae8b48u; f_a7fc58(c);
    c->r[0] = 0xf59044u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xae8b60u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae8b64u; f_a80108(c);
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xd005u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x43da0000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_ae8b80; }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    goto L_ae8be8;
L_ae8b80:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae8bd8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[3] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[3] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae8bd8:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae8be8:;
    c->r[2] = 0x0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1fe00000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae8c20; }
    c->r[2] = 0xfffeu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[10], 0x9u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae8c20:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x4180u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_ae8ccc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae8ca4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_ae8ca4:;
    c->r[3] = 0x4180u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x830u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x2ae80000u;
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae8ccc:;
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[8]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[7] = r; } }
    if (COND_NE) { goto L_ae8cf0; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_ae8d14; }
L_ae8cf0:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[8]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae8d14:;
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = 0x80u;
    c->r[14] = 0xae8d20u; f_15efdc4(c);
    c->r[0] = c->r[9] + 0x60u;
    c->r[1] = c->r[9] + 0xa0u;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9] + 0xe0u;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[1] = 0x117cu;
    c->r[8] = c->r[4] + c->r[1];
    c->r[1] = c->r[13] + 0x50u;
    c->r[1] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf507b4u;
    { uint32_t ea = 0xae8d60u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf507a8u;
    { uint32_t ea = 0xae8d6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf5079cu;
    { uint32_t ea = 0xae8d78u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf50790u;
    { uint32_t ea = 0xae8d84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    goto L_ae8d98;
L_ae8d88:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[0] + (c->r[10] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[1];
L_ae8d98:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae8e7c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x1efu;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[2] + (c->r[0] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae8e7c:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7bcu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[14] = 0xae8e90u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[5] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[5] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_ae8ee4; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae8ee0u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[5] = v; }
L_ae8ee4:;
    c->r[0] = c->r[5] + c->r[6];
    (void)f_subs(c, c->r[5], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    if (COND_EQ) { goto L_ae9024; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[5];
    c->r[14] = 0xae8f24u; f_15efe30(c);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x5cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x7cu; ST32(ea, c->r[0]); }
L_ae9024:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], 0x2u);
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_ae9054; }
    (void)f_subs(c, c->r[10], 0x1u);
    if (COND_EQ) { goto L_ae9060; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ae909c; }
    { uint32_t ea = c->r[4] + 0xeccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9068;
L_ae9054:;
    { uint32_t ea = c->r[4] + 0xedcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9068;
L_ae9060:;
    { uint32_t ea = c->r[4] + 0xed4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae9068:;
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae9084; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_EQ) { goto L_ae909c; }
L_ae9084:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae909c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xae90a4u; f_a826fc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x2u;
    c->r[2] = 0x14u;
    c->r[14] = 0xae90b4u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae90f4; }
    c->r[1] = 0x0u;
    c->r[2] = 0x3f800000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
L_ae90f4:;
    c->r[0] = c->r[4];
    c->r[14] = 0xae90fcu; f_a82760(c);
    (void)f_subs(c, c->r[10], 0x2u);
    if (COND_NE) { goto L_ae8d88; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
L_ae9108:;
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[14] = 0xae9114u; f_a7b778(c);
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0xdaedu;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x316a0000u;
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_ae9194; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x2cau;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    c->r[0] = 0x1854u;
    c->r[1] = 0x1858u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[3] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae9194:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae91a8u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[5] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[5] = c->r[1] + 0xfu;
    c->r[5] = c->r[5] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ae91fc; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[14] = 0xae91f8u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae91fc:;
    c->r[1] = c->r[0] + c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1854u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_ae9300; }
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[22] + c->v.f[20];
    c->v.f[4] = c->v.f[18] + c->v.f[16];
    c->v.s[6] = 0x3f000000u;
    c->v.d[16] = 0x3fe570a3d70a3d71ull;
    c->v.d[17] = 0x3fd51eb851eb851full;
    c->r[2] = 0x0u;
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[1]); }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[9] + 60u);
    c->v.df[18] = (double)c->v.f[0];
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.df[16] = c->v.df[18] * c->v.df[16];
    c->v.df[17] = c->v.df[18] * c->v.df[17];
    c->v.f[0] = (float)c->v.df[16];
    c->v.f[2] = (float)c->v.df[17];
    ST32(c->r[13] + 116u, c->v.s[0]);
    ST32(c->r[13] + 120u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    c->v.s[2] = 0x40400000u;
    c->v.s[0] = LD32(c->r[9] + 64u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[4] = c->v.f[0] + c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[4]);
    ST32(c->r[13] + 88u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae9300:;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_ae934c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_ae9374; }
L_ae934c:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaedu;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae9374:;
    { uint32_t ea = c->r[9] + 0x58u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_ae94f4; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae9390u; f_aaf6d8(c);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4628u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae943c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae9410; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae9410:;
    c->r[1] = 0x4628u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0xa8c5u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2a640000u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_ae943c:;
    c->r[2] = 0x1f9cu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[9] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_ae9608; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae94b4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x3b3u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[6] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[6] + (c->r[0] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[6] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae94b4:;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_ae95a4; }
    c->r[0] = 0xf55aecu;
    c->r[3] = 0xf55aecu;
    { uint32_t ea = 0xae94ccu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xae94d0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x178000u;
    c->r[0] = c->r[0] | 0xeb000000u;
    goto L_ae95ac;
L_ae94f4:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x4620u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_ae9608; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae9574; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x4a4u;
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = (c->r[1] & 0x80000000u) | ((c->r[2] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[3] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[0] = c->r[3] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae9574:;
    c->r[1] = 0x4620u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x98c4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x6a1b0000u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    goto L_ae9608;
L_ae95a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae95ac:;
    c->r[2] = 0x1fa0u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae95e0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae95f8;
L_ae95e0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae95f8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae9608:;
    { uint32_t ea = c->r[0] + 0xc20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xc24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_ae9714; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae9688; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = 0x33cu;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[7] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[7] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[7] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae9688:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae96c8; }
    c->r[1] = 0xf55918u;
    c->r[2] = 0xf55918u;
    { uint32_t ea = 0xae96a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae96a4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_ae96d0;
L_ae96c8:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
L_ae96d0:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae96f0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9708;
L_ae96f0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae9708:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae9714:;
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_ae9730; }
    { uint32_t ea = c->r[2] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9734;
L_ae9730:;
    c->r[0] = 0x0u;
L_ae9734:;
    c->r[3] = 0x1da4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_ae9834; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae97a4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x374u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[6] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[6] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[6] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[2] = c->r[6] + (c->r[2] << 2);
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_ae97a4:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ae97e4; }
    c->r[2] = 0xf557fcu;
    c->r[3] = 0xf557fcu;
    { uint32_t ea = 0xae97bcu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xae97c0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x660000u;
    c->r[0] = c->r[0] | 0x22000000u;
    goto L_ae97ec;
L_ae97e4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_ae97ec:;
    c->r[2] = 0x1da8u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae980c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9824;
L_ae980c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
L_ae9824:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
L_ae9834:;
    c->r[1] = 0x4814u;
    c->r[0] = c->r[4];
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x8c3u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    c->r[1] = 0xb7fcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xe8c2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd5eb0000u;
    if (COND_NE) { c->r[1] = 0xb8c3u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x3acf0000u; }
    c->r[2] = c->r[1] & c->r[2];
    { uint32_t ea = c->r[3] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_ae9904; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae98dc; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = 0x8c2u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[5] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[5] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[3] = c->r[5] + (c->r[3] << 2);
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_ae98dc:;
    { uint32_t ea = c->r[3] + (c->r[2] << 3); uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[0] = 0xe000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd5eb0000u;
    c->r[0] = c->r[1] ^ c->r[0];
    c->r[1] = 0x4818u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_ae9904:;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xf4fbfcu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = 0xae9918u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_ae9958; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_NE) { goto L_ae9958; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9970;
L_ae9958:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae9970:;
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae9994; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_ae9994:;
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[13] + 0x70u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = c->r[5];
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[4];
    c->r[14] = 0xae99c4u; f_a7fc58(c);
    c->r[3] = c->r[13] + 0x50u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[5];
    c->r[14] = 0xae99d4u; f_aafc90(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xae99e0u; f_a7b778(c);
L_ae99e0:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_ae9a20(Cpu *restrict c) {
    FN_ENTER(0xae9a20u);
L_ae9a20:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[0] = 0xf58670u;
    { uint32_t ea = 0xae9a30u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xae9a34u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[1] = 0x48u;
    c->pc = c->r[4]; c->r[14] = 0xae9a4cu; rt_dispatch(c);
    c->r[14] = 0xae9a50u; f_a87958(c);
    c->r[1] = 0x1u;
    c->r[2] = 0x5u;
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; ST16(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    c->r[2] = 0xf5862cu;
    { uint32_t ea = 0xae9a78u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
}
void f_ae9a94(Cpu *restrict c) {
    FN_ENTER(0xae9a94u);
L_ae9a94:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xae9aa0u; f_a879b4(c);
    c->r[0] = 0xf585f4u;
    { uint32_t ea = 0xae9aacu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xae9aacu; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_ae9ac4(Cpu *restrict c) {
    FN_ENTER(0xae9ac4u);
L_ae9ac4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[10] = c->r[1];
    c->r[9] = c->r[0];
    c->r[14] = 0xae9ad8u; f_aaf8d0(c);
    c->r[11] = 0x0u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[11]); }
    c->r[14] = 0xae9b00u; f_9bb638(c);
    c->r[1] = 0xc88d24u;
    c->r[8] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[8];
    c->r[1] = 0xae9b18u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x6u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x3cu;
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
    c->r[14] = 0xae9b78u; f_9bb638(c);
    c->r[1] = 0xc89ca6u;
    c->r[1] = 0xae9b84u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = c->r[9] + 0x40u;
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
void f_ae9bd4(Cpu *restrict c) {
    FN_ENTER(0xae9bd4u);
L_ae9bd4:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_ae9bd8(Cpu *restrict c) {
    FN_ENTER(0xae9bd8u);
L_ae9bd8:;
    return;
}
void f_ae9bdc(Cpu *restrict c) {
    FN_ENTER(0xae9bdcu);
L_ae9bdc:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x40u;
    c->r[4] = c->r[1];
    c->r[8] = c->r[0];
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aea17c; }
    { uint32_t ea = c->r[0] + 0x2e8u; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x238u; uint32_t v = LD32(ea); c->r[10] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[10], 0x0u); }
    if (COND_EQ) { goto L_aea17c; }
    c->r[0] = c->r[4];
    c->r[1] = 0xfu;
    c->r[2] = 0x0u;
    c->r[14] = 0xae9c1cu; f_a7ff38(c);
    c->r[7] = c->r[4];
    c->r[1] = ~0x1fu;
    { uint32_t ea = c->r[7] + 0x164u; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[7] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[7] - 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[7] - 0x110u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_ae9ca8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x2cbu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x185cu;
    c->r[2] = 0x1860u;
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_ae9ca8:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xb2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xae9cbcu; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_ae9d10; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xae9d0cu; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ae9d10:;
    c->r[1] = c->r[0] + c->r[6];
    c->r[6] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x185cu;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x154u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_ae9d50; }
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
L_ae9d50:;
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[5] = 0x0u;
    c->r[14] = 0xae9d60u; f_a7a7ac(c);
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x30u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x18u;
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x238u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[5]); }
    c->r[14] = 0xae9da8u; f_a80998(c);
    c->r[1] = 0x1be4u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_EQ) { goto L_ae9e90; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae9e1c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[5] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae9e1c:;
    c->r[1] = 0xf5518cu;
    c->r[2] = 0xf5518cu;
    { uint32_t ea = 0xae9e2cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae9e30u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[10]); }
    c->r[1] = 0x1be8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x334000u;
    c->r[1] = c->r[1] | 0xac00000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae9e6c; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9e84;
L_ae9e6c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_ae9e84:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_ae9e90:;
    c->r[1] = 0x1fdcu;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[9]);
    if (COND_EQ) { goto L_ae9f7c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ae9f04; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[5] = 0x3bbu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_ae9f04:;
    c->r[1] = 0xf5509cu;
    c->r[2] = 0xf5509cu;
    c->r[3] = 0x2000u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x34910000u;
    { uint32_t ea = 0xae9f1cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xae9f20u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[9]); }
    c->r[1] = 0x1fe0u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | c->r[3];
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_ae9f58; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_ae9f70;
L_ae9f58:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_ae9f70:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
L_ae9f7c:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { { uint32_t r = c->r[1] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_ae9fa4; }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] & 0x1f00u;
    c->r[1] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[1]); }
L_ae9fa4:;
    c->r[0] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x38u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x80000u;
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[3] = 0xfff8u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); } }
    if (COND_NE) { c->r[0] = 0x1u; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1f0000u;
    if (COND_NE) { c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[0] << 13) & 0xffffe000u); }
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0] & c->r[3];
    { uint32_t r = c->r[3] ^ c->r[2]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aea00c; }
    c->r[5] = 0x6u;
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = f_adds(c, c->r[2], 0x1u);
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[5];
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[2] = c->r[3] | c->r[2];
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_aea00c:;
    c->r[3] = 0xf4f4f4u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = 0xaea020u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[5], c->r[2]);
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    if (COND_NE) { goto L_aea034; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { goto L_aea048; }
L_aea034:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[2]); }
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[3]); }
    c->r[1] = (c->r[1] & 0x1fffu) | ((c->r[2] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[1]); }
L_aea048:;
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0xbb14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x664d0000u;
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_EQ) { goto L_aea0b0; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_aea10c; }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[5] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; } }
    if (COND_NE) { goto L_aea08c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_aea10c; }
L_aea08c:;
    c->r[5] = c->r[5] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xb14u;
    goto L_aea104;
L_aea0b0:;
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { c->r[2] = c->r[5] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_aea0dc; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_aea10c; }
L_aea0dc:;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[12]); }
    c->r[5] = (c->r[5] & 0xffff00ffu) | ((c->r[1] << 8) & 0xff00u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xb14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
L_aea104:;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aea10c:;
    { uint32_t ea = c->r[4] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x18u;
    c->r[0] = c->r[4];
    c->r[14] = 0xaea160u; f_a7fc58(c);
    c->r[2] = c->r[13] + 0x8u;
    c->r[3] = c->r[13] + 0x28u;
    c->r[0] = c->r[4];
    c->r[14] = 0xaea170u; f_aafc90(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x0u;
    c->r[14] = 0xaea17cu; f_a7b778(c);
L_aea17c:;
    c->r[13] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_aea198(Cpu *restrict c) {
    FN_ENTER(0xaea198u);
L_aea198:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea19c(Cpu *restrict c) {
    FN_ENTER(0xaea19cu);
L_aea19c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1a0(Cpu *restrict c) {
    FN_ENTER(0xaea1a0u);
L_aea1a0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1a4(Cpu *restrict c) {
    FN_ENTER(0xaea1a4u);
L_aea1a4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1a8(Cpu *restrict c) {
    FN_ENTER(0xaea1a8u);
L_aea1a8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1ac(Cpu *restrict c) {
    FN_ENTER(0xaea1acu);
L_aea1ac:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1b0(Cpu *restrict c) {
    FN_ENTER(0xaea1b0u);
L_aea1b0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1b4(Cpu *restrict c) {
    FN_ENTER(0xaea1b4u);
L_aea1b4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1b8(Cpu *restrict c) {
    FN_ENTER(0xaea1b8u);
L_aea1b8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1bc(Cpu *restrict c) {
    FN_ENTER(0xaea1bcu);
L_aea1bc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1c0(Cpu *restrict c) {
    FN_ENTER(0xaea1c0u);
L_aea1c0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1c4(Cpu *restrict c) {
    FN_ENTER(0xaea1c4u);
L_aea1c4:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1c8(Cpu *restrict c) {
    FN_ENTER(0xaea1c8u);
L_aea1c8:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1cc(Cpu *restrict c) {
    FN_ENTER(0xaea1ccu);
L_aea1cc:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1d0(Cpu *restrict c) {
    FN_ENTER(0xaea1d0u);
L_aea1d0:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea1d4(Cpu *restrict c) {
    FN_ENTER(0xaea1d4u);
L_aea1d4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf57dc0u;
    { uint32_t ea = 0xaea1e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaea1e8u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_aea200(Cpu *restrict c) {
    FN_ENTER(0xaea200u);
L_aea200:;
    c->r[0] = 0xf57d9cu;
    { uint32_t ea = 0xaea20cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea210(Cpu *restrict c) {
    FN_ENTER(0xaea210u);
L_aea210:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea214(Cpu *restrict c) {
    FN_ENTER(0xaea214u);
L_aea214:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea218(Cpu *restrict c) {
    FN_ENTER(0xaea218u);
L_aea218:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea21c(Cpu *restrict c) {
    FN_ENTER(0xaea21cu);
L_aea21c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea220(Cpu *restrict c) {
    FN_ENTER(0xaea220u);
L_aea220:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea224(Cpu *restrict c) {
    FN_ENTER(0xaea224u);
L_aea224:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea228(Cpu *restrict c) {
    FN_ENTER(0xaea228u);
L_aea228:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea22c(Cpu *restrict c) {
    FN_ENTER(0xaea22cu);
L_aea22c:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea230(Cpu *restrict c) {
    FN_ENTER(0xaea230u);
L_aea230:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea234(Cpu *restrict c) {
    FN_ENTER(0xaea234u);
L_aea234:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea238(Cpu *restrict c) {
    FN_ENTER(0xaea238u);
L_aea238:;
    __attribute__((musttail)) return f_9af3c4(c);
}
void f_aea23c(Cpu *restrict c) {
    FN_ENTER(0xaea23cu);
L_aea23c:;
    c->r[0] = 0xf577f8u;
    { uint32_t ea = 0xaea248u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea24c(Cpu *restrict c) {
    FN_ENTER(0xaea24cu);
L_aea24c:;
    c->r[0] = 0xf57c88u;
    { uint32_t ea = 0xaea258u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea25c(Cpu *restrict c) {
    FN_ENTER(0xaea25cu);
L_aea25c:;
    c->r[0] = 0xf57ca8u;
    { uint32_t ea = 0xaea268u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea26c(Cpu *restrict c) {
    FN_ENTER(0xaea26cu);
L_aea26c:;
    c->r[0] = 0xf54894u;
    { uint32_t ea = 0xaea278u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea27c(Cpu *restrict c) {
    FN_ENTER(0xaea27cu);
L_aea27c:;
    c->r[0] = 0xf57c94u;
    { uint32_t ea = 0xaea288u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea28c(Cpu *restrict c) {
    FN_ENTER(0xaea28cu);
L_aea28c:;
    c->r[0] = 0xf57c90u;
    { uint32_t ea = 0xaea298u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea29c(Cpu *restrict c) {
    FN_ENTER(0xaea29cu);
L_aea29c:;
    c->r[0] = 0xf57c88u;
    { uint32_t ea = 0xaea2a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea2ac(Cpu *restrict c) {
    FN_ENTER(0xaea2acu);
L_aea2ac:;
    c->r[0] = 0xf57c80u;
    { uint32_t ea = 0xaea2b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea2bc(Cpu *restrict c) {
    FN_ENTER(0xaea2bcu);
L_aea2bc:;
    c->r[0] = 0xf57cb8u;
    { uint32_t ea = 0xaea2c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea2cc(Cpu *restrict c) {
    FN_ENTER(0xaea2ccu);
L_aea2cc:;
    c->r[0] = 0xf57cb0u;
    { uint32_t ea = 0xaea2d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea2dc(Cpu *restrict c) {
    FN_ENTER(0xaea2dcu);
L_aea2dc:;
    c->r[0] = 0xf57ca8u;
    { uint32_t ea = 0xaea2e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea2ec(Cpu *restrict c) {
    FN_ENTER(0xaea2ecu);
L_aea2ec:;
    c->r[0] = 0xf57ca0u;
    { uint32_t ea = 0xaea2f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea2fc(Cpu *restrict c) {
    FN_ENTER(0xaea2fcu);
L_aea2fc:;
    c->r[0] = 0xf57c98u;
    { uint32_t ea = 0xaea308u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea30c(Cpu *restrict c) {
    FN_ENTER(0xaea30cu);
L_aea30c:;
    c->r[0] = 0xf57c98u;
    { uint32_t ea = 0xaea318u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea31c(Cpu *restrict c) {
    FN_ENTER(0xaea31cu);
L_aea31c:;
    c->r[0] = 0xf57ca8u;
    { uint32_t ea = 0xaea328u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea32c(Cpu *restrict c) {
    FN_ENTER(0xaea32cu);
L_aea32c:;
    c->r[0] = 0xf57ca0u;
    { uint32_t ea = 0xaea338u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea33c(Cpu *restrict c) {
    FN_ENTER(0xaea33cu);
L_aea33c:;
    c->r[0] = 0xf57c9cu;
    { uint32_t ea = 0xaea348u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea34c(Cpu *restrict c) {
    FN_ENTER(0xaea34cu);
L_aea34c:;
    c->r[0] = 0x6u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    return;
}
void f_aea360(Cpu *restrict c) {
    FN_ENTER(0xaea360u);
L_aea360:;
    c->r[0] = 0xf57c80u;
    { uint32_t ea = 0xaea36cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea370(Cpu *restrict c) {
    FN_ENTER(0xaea370u);
L_aea370:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf57c90u;
    { uint32_t ea = 0xaea384u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaea384u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_aea39c(Cpu *restrict c) {
    FN_ENTER(0xaea39cu);
L_aea39c:;
    c->r[0] = 0xf57c6cu;
    { uint32_t ea = 0xaea3a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea3ac(Cpu *restrict c) {
    FN_ENTER(0xaea3acu);
L_aea3ac:;
    c->r[0] = 0xf57c64u;
    { uint32_t ea = 0xaea3b8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea3bc(Cpu *restrict c) {
    FN_ENTER(0xaea3bcu);
L_aea3bc:;
    c->r[0] = 0xf57c64u;
    { uint32_t ea = 0xaea3c8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea3cc(Cpu *restrict c) {
    FN_ENTER(0xaea3ccu);
L_aea3cc:;
    c->r[0] = 0xf57c60u;
    { uint32_t ea = 0xaea3d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea3dc(Cpu *restrict c) {
    FN_ENTER(0xaea3dcu);
L_aea3dc:;
    c->r[0] = 0xf57c58u;
    { uint32_t ea = 0xaea3e8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea3ec(Cpu *restrict c) {
    FN_ENTER(0xaea3ecu);
L_aea3ec:;
    c->r[0] = 0xf57ca0u;
    { uint32_t ea = 0xaea3f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea3fc(Cpu *restrict c) {
    FN_ENTER(0xaea3fcu);
L_aea3fc:;
    c->r[0] = 0xf57c98u;
    { uint32_t ea = 0xaea408u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    return;
}
void f_aea40c(Cpu *restrict c) {
    FN_ENTER(0xaea40cu);
L_aea40c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x10u;
    c->r[0] = 0x1836474u;
    c->r[7] = 0x0u;
    c->r[1] = 0x1u;
    c->r[8] = 0x2u;
    c->r[2] = 0x3u;
    c->r[3] = 0x6u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[0] = 0xaea438u + c->r[0];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[8]); }
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
    c->r[0] = 0xf575c0u;
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); }
    c->r[3] = 0x40u;
    { uint32_t ea = 0xaea480u + c->r[0]; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0xf4ee78u;
    { uint32_t ea = 0xaea488u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = 0xc88342u;
    c->r[1] = 0xaea490u + c->r[0];
    c->r[0] = c->r[9];
    c->r[14] = 0xaea494u; f_9aedcc(c);
    c->r[0] = 0xf57bf4u;
    c->r[2] = c->r[9];
    c->r[3] = 0xb0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea4b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf57a1cu;
    { uint32_t ea = 0xaea4c4u + c->r[0]; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0xc88321u;
    c->r[1] = 0xaea4ccu + c->r[0];
    c->r[0] = c->r[5];
    c->r[14] = 0xaea4d0u; f_9aedcc(c);
    c->r[0] = 0xf57bb8u;
    c->r[1] = 0xc88413u;
    c->r[2] = c->r[9];
    c->r[3] = 0xd0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea4f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea4f8u + c->r[1];
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf57a08u;
    { uint32_t ea = 0xaea508u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaea508u; f_9aedcc(c);
    c->r[1] = 0xf57b88u;
    c->r[2] = c->r[9];
    c->r[3] = 0x70u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea528u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf545d0u;
    c->r[1] = 0xc8855fu;
    { uint32_t ea = 0xaea53cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea540u + c->r[1];
    c->r[14] = 0xaea540u; f_9aedcc(c);
    c->r[1] = 0xf57b54u;
    c->r[2] = c->r[9];
    c->r[3] = 0x48u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea560u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf579a8u;
    c->r[1] = 0xc88546u;
    { uint32_t ea = 0xaea574u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea578u + c->r[1];
    c->r[14] = 0xaea578u; f_9aedcc(c);
    c->r[1] = 0xf57b2cu;
    c->r[2] = c->r[9];
    c->r[3] = 0xc0u;
    { uint32_t ea = 0xaea58cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57980u;
    c->r[1] = 0xc88532u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea5a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea5acu + c->r[1];
    c->r[14] = 0xaea5acu; f_9aedcc(c);
    c->r[1] = 0xf57afcu;
    c->r[2] = c->r[9];
    c->r[3] = 0xc0u;
    { uint32_t ea = 0xaea5c0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57954u;
    c->r[1] = 0xc8859du;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea5dcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea5e0u + c->r[1];
    c->r[14] = 0xaea5e0u; f_9aedcc(c);
    c->r[1] = 0xf57ac0u;
    c->r[2] = c->r[9];
    c->r[3] = 0xf0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea600u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57924u;
    c->r[1] = 0xc885a3u;
    { uint32_t ea = 0xaea614u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea618u + c->r[1];
    c->r[14] = 0xaea618u; f_9aedcc(c);
    c->r[1] = 0xf57a8cu;
    c->r[2] = c->r[9];
    c->r[3] = 0x90u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea638u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57934u;
    c->r[1] = 0xc88684u;
    { uint32_t ea = 0xaea64cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea650u + c->r[1];
    c->r[14] = 0xaea650u; f_9aedcc(c);
    c->r[1] = 0xf57a58u;
    c->r[2] = c->r[9];
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea670u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57904u;
    c->r[1] = 0xc88751u;
    { uint32_t ea = 0xaea684u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea688u + c->r[1];
    c->r[14] = 0xaea688u; f_9aedcc(c);
    c->r[1] = 0xf57a24u;
    c->r[2] = c->r[9];
    c->r[3] = 0x48u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea6a8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf578d4u;
    c->r[1] = 0xc88757u;
    { uint32_t ea = 0xaea6bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea6c0u + c->r[1];
    c->r[14] = 0xaea6c0u; f_9aedcc(c);
    c->r[1] = 0xf579fcu;
    c->r[2] = c->r[9];
    c->r[3] = 0x70u;
    { uint32_t ea = 0xaea6d4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf578a8u;
    c->r[1] = 0xc8873du;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea6f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea6f4u + c->r[1];
    c->r[14] = 0xaea6f4u; f_9aedcc(c);
    c->r[1] = 0xf579c0u;
    c->r[2] = c->r[9];
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea714u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57878u;
    c->r[1] = 0xc8871eu;
    { uint32_t ea = 0xaea728u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea72cu + c->r[1];
    c->r[14] = 0xaea72cu; f_9aedcc(c);
    c->r[1] = 0xf57990u;
    c->r[3] = 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea748u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xf4e408u;
    c->r[0] = 0xf57844u;
    { uint32_t ea = 0xaea75cu + c->r[1]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0xc88736u;
    { uint32_t ea = 0xaea764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea768u + c->r[1];
    c->r[2] = c->r[6];
    c->r[14] = 0xaea76cu; f_9aedcc(c);
    c->r[1] = 0xf57950u;
    c->r[2] = c->r[9];
    c->r[3] = 0x8a0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea78cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57810u;
    c->r[1] = 0xc88732u;
    { uint32_t ea = 0xaea7a0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea7a4u + c->r[1];
    c->r[14] = 0xaea7a4u; f_9aedcc(c);
    c->r[1] = 0xf57928u;
    c->r[2] = c->r[9];
    c->r[3] = 0x90u;
    { uint32_t ea = 0xaea7b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf577fcu;
    c->r[1] = 0xc887a1u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[7]); ST32(ea + 4u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea7d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea7d8u + c->r[1];
    c->r[14] = 0xaea7d8u; f_9aedcc(c);
    c->r[1] = 0xf578ecu;
    c->r[2] = c->r[9];
    c->r[3] = 0xc0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea7f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf577ccu;
    c->r[1] = 0xc887c6u;
    { uint32_t ea = 0xaea80cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea810u + c->r[1];
    c->r[14] = 0xaea810u; f_9aedcc(c);
    c->r[1] = 0xf578b8u;
    c->r[2] = c->r[9];
    c->r[3] = 0x1f8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea830u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf577a0u;
    c->r[1] = 0xc8888cu;
    { uint32_t ea = 0xaea844u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea848u + c->r[1];
    c->r[14] = 0xaea848u; f_9aedcc(c);
    c->r[1] = 0xf57884u;
    c->r[2] = c->r[9];
    c->r[3] = 0x2c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea868u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57770u;
    c->r[1] = 0xc889b2u;
    { uint32_t ea = 0xaea87cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea880u + c->r[1];
    c->r[14] = 0xaea880u; f_9aedcc(c);
    c->r[1] = 0xf57850u;
    c->r[2] = c->r[6];
    c->r[3] = 0x1cu;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea8a0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57760u;
    c->r[1] = 0xc88b37u;
    { uint32_t ea = 0xaea8b4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea8b8u + c->r[1];
    c->r[14] = 0xaea8b8u; f_9aedcc(c);
    c->r[1] = 0xf5781cu;
    c->r[2] = c->r[9];
    c->r[3] = 0x140u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea8d8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57730u;
    c->r[1] = 0xc88b33u;
    { uint32_t ea = 0xaea8ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea8f0u + c->r[1];
    c->r[14] = 0xaea8f0u; f_9aedcc(c);
    c->r[1] = 0xf577e8u;
    c->r[2] = c->r[5];
    c->r[3] = 0x1c0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaea910u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57708u;
    c->r[1] = 0xc88bc8u;
    { uint32_t ea = 0xaea924u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaea928u + c->r[1];
    c->r[14] = 0xaea928u; f_9aedcc(c);
    c->r[1] = 0xf577acu;
    c->r[6] = 0x0u;
    c->r[2] = 0x3f000000u;
    c->r[3] = 0x3f800000u;
    c->r[5] = 0x19u;
    c->r[4] = 0xb3d7u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xbf800000u;
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xbedd0000u;
    { uint32_t ea = 0xaea950u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf576d0u;
    c->r[1] = 0x15u;
    { uint32_t ea = 0xaea964u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xbf000000u;
    c->r[12] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    c->r[14] = c->r[0] + 0x1ecu;
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[12] = c->r[0] + 0x90u;
    { uint32_t ea = c->r[0] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x50u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x54u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x64u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x6cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x80u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x84u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[12] = c->r[0] + 0xd8u;
    { uint32_t ea = c->r[0] + 0xa0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0xd0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xd4u; ST32(ea, c->r[3]); }
    c->r[5] = 0x13u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[12] = c->r[0] + 0xe8u;
    { uint32_t ea = c->r[0] + 0xe4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[12] = c->r[0] + 0x110u;
    { uint32_t ea = c->r[0] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0xfcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x104u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x108u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x10cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    c->r[12] = c->r[0] + 0x11cu;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[12] = c->r[0] + 0x16cu;
    { uint32_t ea = c->r[0] + 0x128u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x12cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x134u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x138u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x13cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x140u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x144u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x148u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x160u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x168u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); }
    c->r[12] = c->r[0] + 0x178u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x184u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x188u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x190u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x194u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x198u; ST32(ea, c->r[5]); }
    c->r[5] = 0xb3d7u;
    { uint32_t ea = c->r[0] + 0x19cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1a0u; ST32(ea, c->r[7]); }
    c->r[12] = 0x3f400000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x3f5d0000u;
    { uint32_t ea = c->r[0] + 0x1a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1a8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[0] + 0x1b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1b8u; ST32(ea, c->r[6]); }
    c->r[6] = 0xb3d7u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xbf5d0000u;
    { uint32_t ea = c->r[0] + 0x1bcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1c0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1c4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x1c8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x1ccu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1d0u; ST32(ea, c->r[3]); }
    c->r[3] = 0xb3d7u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x3edd0000u;
    { uint32_t ea = c->r[0] + 0x1d4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x1d8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1dcu; ST32(ea, c->r[5]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[0] + 0x1e0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1e4u; ST32(ea, c->r[3]); }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xbf400000u;
    { uint32_t ea = c->r[0] + 0x1e8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x1fcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x200u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x204u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x208u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3e800000u;
    { uint32_t ea = c->r[0] + 0x20cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x210u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x214u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xbe800000u;
    { uint32_t ea = c->r[0] + 0x218u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x21cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x220u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x224u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x228u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x22cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x230u; ST32(ea, c->r[2]); }
    c->r[0] = 0xf57494u;
    c->r[1] = 0xc88a66u;
    c->r[2] = c->r[9];
    c->r[3] = 0x58u;
    { uint32_t ea = 0xaeaba4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaeaba8u + c->r[1];
    c->r[14] = 0xaeaba8u; f_9aedcc(c);
    c->r[1] = 0xf57538u;
    c->r[2] = c->r[9];
    c->r[3] = 0x100u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaeabc8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57464u;
    c->r[1] = 0xc88abau;
    { uint32_t ea = 0xaeabdcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaeabe0u + c->r[1];
    c->r[14] = 0xaeabe0u; f_9aedcc(c);
    c->r[1] = 0xf57504u;
    c->r[2] = c->r[9];
    c->r[3] = 0x138u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaeac00u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57484u;
    c->r[1] = 0xc88b65u;
    { uint32_t ea = 0xaeac14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaeac18u + c->r[1];
    c->r[14] = 0xaeac18u; f_9aedcc(c);
    c->r[1] = 0xf574d0u;
    c->r[2] = c->r[9];
    c->r[3] = 0x48u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = 0xaeac38u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0xf57454u;
    c->r[1] = 0xc88bc7u;
    { uint32_t ea = 0xaeac4cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xaeac50u + c->r[1];
    c->r[14] = 0xaeac50u; f_9aedcc(c);
    c->r[1] = 0xf574b0u;
    { uint32_t ea = 0xaeac5cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x8u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[13] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_aeadb0(Cpu *restrict c) {
    FN_ENTER(0xaeadb0u);
L_aeadb0:;
    c->r[0] = 0x0u;
    return;
}
void f_aeadb8(Cpu *restrict c) {
    FN_ENTER(0xaeadb8u);
L_aeadb8:;
    return;
}
void f_aeadbc(Cpu *restrict c) {
    FN_ENTER(0xaeadbcu);
L_aeadbc:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xaeadc8u; f_a87958(c);
    c->r[0] = 0xf57334u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xaeaddcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4df6cu;
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xaeadf8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaeadfcu; f_dd5cc8(c);
    c->r[0] = 0x2501u;
    c->r[12] = 0x1u;
    c->r[3] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x16c00000u;
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[5]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = 0xa509u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x50950000u;
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = 0xe4f0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd6830000u;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4ed98u;
    { uint32_t ea = c->r[4] + 0xa0u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xaeae44u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xc0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xc4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xc8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x3f800000u;
    { uint32_t ea = c->r[4] + 0xccu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xb0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa8u; ST32(ea, c->r[3]); }
    c->r[3] = 0xc4efu;
    { uint32_t ea = c->r[4] + 0xacu; ST32(ea, c->r[5]); }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x4a0d0000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x3f000000u;
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0xdcu; ST32(ea, c->r[3]); }
    c->r[3] = 0xf550fcu;
    { uint32_t ea = 0xaeae90u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0xd0u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf4ed10u;
    { uint32_t ea = c->r[4] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xaeaec0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x128u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x12cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x13cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x140u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x144u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x15cu; ST32(ea, c->r[1]); }
    c->r[1] = 0xf4dc04u;
    { uint32_t ea = 0xaeaf48u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xf8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xf4ec40u;
    { uint32_t ea = c->r[4] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = 0xaeaf6cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x104u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x114u; ST32(ea, c->r[1]); }
    c->r[1] = 0x50u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x50u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xaeafb0u; f_15efdc4(c);
    c->r[0] = 0x17cu;
    { uint32_t ea = c->r[4] + c->r[0]; ST16(ea, c->r[5]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_aeafe4(Cpu *restrict c) {
    FN_ENTER(0xaeafe4u);
L_aeafe4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf57118u;
    { uint32_t ea = 0xaeaff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb014; }
    c->r[14] = 0xaeb00cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xe0u; ST32(ea, c->r[0]); }
L_aeb014:;
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb02c; }
    c->r[14] = 0xaeb024u; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x164u; ST32(ea, c->r[0]); }
L_aeb02c:;
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb044; }
    c->r[14] = 0xaeb03cu; f_a87660(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x160u; ST32(ea, c->r[0]); }
L_aeb044:;
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb064; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaeb05cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_aeb064:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb084; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaeb07cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
L_aeb084:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb0a4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaeb09cu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[0]); }
L_aeb0a4:;
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb0c4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaeb0bcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[0]); }
L_aeb0c4:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeb0e4; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaeb0dcu; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[0]); }
L_aeb0e4:;
    c->r[0] = 0xf4dc70u;
    c->r[1] = c->r[4];
    { uint32_t ea = 0xaeb0f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaeb0f8u; f_dd5d64(c);
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_a879b4(c);
}
void f_aeb10c(Cpu *restrict c) {
    FN_ENTER(0xaeb10cu);
L_aeb10c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[14] = 0xaeb118u; f_aeafe4(c);
    c->r[0] = 0xf56ff0u;
    { uint32_t ea = 0xaeb124u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaeb124u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_aeb13c(Cpu *restrict c) {
    FN_ENTER(0xaeb13cu);
L_aeb13c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x4cu;
    c->r[9] = c->r[1];
    c->r[11] = c->r[0];
    c->r[14] = 0xaeb150u; f_a87a24(c);
    c->r[8] = 0x0u;
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb178u; f_9bb638(c);
    c->r[1] = 0xc886aeu;
    c->r[10] = c->r[13] + 0x10u;
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xaeb190u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x30u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb1f4u; f_9bb638(c);
    c->r[1] = 0xc88642u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb208u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xa0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb270u; f_9bb638(c);
    c->r[1] = 0xc885d2u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb284u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x17du;
    c->r[1] = c->r[11] + c->r[1];
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb2e8u; f_9bb638(c);
    c->r[1] = 0xc878a7u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb2fcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xa8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb360u; f_9bb638(c);
    c->r[1] = 0xc8783cu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb374u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xacu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb3d4u; f_9bb638(c);
    c->r[1] = 0xc8847au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb3e8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xb0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb44cu; f_9bb638(c);
    c->r[1] = 0xc88411u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb460u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    c->r[1] = c->r[1] + 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xc0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0xe0u;
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0xc883beu;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0xaeb4c0u + c->r[0];
    c->r[0] = 0xc72545u;
    c->r[3] = 0xaeb4c8u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xaeb4ccu; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xaeb4d4u; f_9bb638(c);
    c->r[2] = c->r[10];
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[12] = c->r[12] + 24u; }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb534u; f_9bb638(c);
    c->r[1] = 0xc88342u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb548u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xdcu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb5a8u; f_9bb638(c);
    c->r[1] = 0xc882dfu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb5bcu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xd8u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb620u; f_9bb638(c);
    c->r[1] = 0xc88270u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb634u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x22u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xd0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x164u;
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0xc88222u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0xaeb68cu + c->r[0];
    c->r[0] = 0xc72379u;
    c->r[3] = 0xaeb694u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xaeb698u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xaeb6a0u; f_9bb638(c);
    c->r[12] = c->r[10];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11] + 0x160u;
    c->r[1] = c->r[11];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0xc8696du;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[2] = 0xaeb6f8u + c->r[0];
    c->r[0] = 0xc7230du;
    c->r[3] = 0xaeb700u + c->r[0];
    c->r[0] = c->r[10];
    c->r[14] = 0xaeb704u; f_9af630(c);
    c->r[0] = c->r[9];
    c->r[14] = 0xaeb70cu; f_9bb638(c);
    c->r[12] = c->r[10];
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 24u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); c->r[2] = c->r[2] + 24u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb768u; f_9bb638(c);
    c->r[1] = 0xc7d122u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb77cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4000000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0xf0u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb7e4u; f_9bb638(c);
    c->r[1] = 0xc86cb6u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb7f8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4000000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x110u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb85cu; f_9bb638(c);
    c->r[1] = 0xc86d99u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeb870u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x14u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4000000u;
    c->r[1] = c->r[1] + 0x2u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x100u;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaeb8dcu; f_9bb638(c);
    c->r[1] = 0xc87fd8u;
    c->r[1] = 0xaeb8e8u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x17cu;
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[8]); }
    c->r[1] = c->r[0] + 0x18u;
    { uint32_t ea = c->r[10]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x30u; ST32(ea, c->r[0]); } }
    if (COND_NE) { { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    c->r[13] = c->r[13] + 0x4cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_aeb980(Cpu *restrict c) {
    FN_ENTER(0xaeb980u);
L_aeb980:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_aeb984(Cpu *restrict c) {
    FN_ENTER(0xaeb984u);
L_aeb984:;
    c->r[0] = 0x8u;
    c->r[1] = 0x0u;
    return;
}
void f_aeb990(Cpu *restrict c) {
    FN_ENTER(0xaeb990u);
L_aeb990:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    { uint32_t ea = c->r[13] - 48u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); c->r[13] = c->r[13] - 48u; }
    c->r[4] = c->r[1];
    c->r[1] = c->r[2];
    c->r[5] = c->r[3];
    c->r[0] = c->r[4];
    c->r[14] = 0xaeb9acu; f_a7fc58(c);
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[12] = 0x7006u;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xd6c10000u;
    (void)f_subs(c, c->r[2], c->r[12]);
    if (COND_NE) { goto L_aeb9d4; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_aeba4c;
L_aeb9d4:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeba30; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[2] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[1] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
L_aeba30:;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x3u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_aeba4c:;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[5] + 4u);
    c->v.s[8] = LD32(c->r[5] + 8u);
    c->v.s[10] = LD32(c->r[5] + 12u);
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1fe00000u;
    c->r[0] = c->r[3] & c->r[0];
    { uint32_t sc = 0; uint32_t r = c->r[0] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[16] = (float)(int32_t)c->v.s[2];
    c->v.f[20] = (float)(int32_t)c->v.s[10];
    c->v.f[18] = (float)(int32_t)c->v.s[0];
    c->v.f[22] = (float)(int32_t)c->v.s[8];
    c->v.f[24] = (float)(int32_t)c->v.s[6];
    c->v.f[26] = (float)(int32_t)c->v.s[4];
    if (COND_EQ) { goto L_aebaa8; }
    c->r[0] = 0xfffeu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xe01f0000u;
    c->r[0] = c->r[3] & c->r[0];
    c->r[0] = c->r[0] | 0x1u;
    c->r[0] = c->r[0] | 0x800000u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
L_aebaa8:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaebab0u; f_a826fc(c);
    c->r[0] = c->r[4];
    c->r[1] = 0x4u;
    c->r[2] = 0x10u;
    c->r[14] = 0xaebac0u; f_a83f74(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aebb24; }
    c->v.f[0] = c->v.f[20] / c->v.f[16];
    c->v.f[2] = c->v.f[22] / c->v.f[18];
    c->v.f[4] = c->v.f[24] / c->v.f[16];
    c->v.f[6] = c->v.f[26] / c->v.f[18];
    c->r[1] = 0x0u;
    c->r[2] = 0x3f800000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xbf800000u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 8u, c->v.s[6]);
    ST32(c->r[0] + 12u, c->v.s[4]);
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 24u, c->v.s[6]);
    ST32(c->r[0] + 28u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[2]); }
    ST32(c->r[0] + 40u, c->v.s[2]);
    ST32(c->r[0] + 44u, c->v.s[4]);
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 56u, c->v.s[2]);
    ST32(c->r[0] + 60u, c->v.s[0]);
L_aebb24:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->r[13] = c->r[13] + 48u; }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    __attribute__((musttail)) return f_a82760(c);
}
void f_aebb34(Cpu *restrict c) {
    FN_ENTER(0xaebb34u);
L_aebb34:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x54u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aec3f4; }
    { uint32_t ea = c->r[8] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_aebb68; }
    { uint32_t ea = c->r[8] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aec3f4; }
L_aebb68:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaebb70u; f_a85804(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaebb7cu; f_a85814(c);
    c->r[9] = c->r[0];
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[11] = 0x0u;
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[11]); }
    c->r[0] = c->r[0] | (c->r[1] << 16);
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x3fffu;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aebbc4; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[11] = v; }
L_aebbc4:;
    c->r[6] = c->r[4];
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0x4000u;
    { uint32_t ea = c->r[6] + 0x164u; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[1] << 5) & 0xffffffe0u);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaebc00u; f_a7ff38(c);
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aec024; }
    { uint32_t ea = c->r[8] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x64f6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1b220000u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_aec024; }
    c->r[0] = 0xc87ca3u;
    c->r[1] = 0x1u;
    c->r[10] = 0x1u;
    c->r[2] = 0xaebc34u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaebc38u; f_a7fbb4(c);
    c->v.s[0] = 0x42c80000u;
    c->r[7] = c->r[13] + 0x44u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[9];
    c->r[3] = c->r[7];
    c->r[14] = 0xaebc54u; f_a85844(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xaebc60u; f_a7fc58(c);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[10] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaebc7cu; f_a7ff38(c);
    c->r[0] = 0x1084u;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_aebca4; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[10] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_aebca8;
L_aebca4:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_aebca8:;
    { uint32_t ea = c->r[4] + 0xfd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0x4000u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aebcd4; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aebcd4:;
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaebcf8u; f_a814c0(c);
    c->r[0] = 0xf55e94u;
    c->v.s[0] = 0x0u;
    c->r[1] = 0x1fu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xaebd10u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaebd14u; f_a80108(c);
    c->r[1] = 0xf4d7ecu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaebd28u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_aebd3c; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aebd54; }
L_aebd3c:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aebd54:;
    { uint32_t ea = c->r[8] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aebd70; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xaebd6cu; f_aec430(c);
    goto L_aebd7c;
L_aebd70:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xaebd7cu; f_aeca5c(c);
L_aebd7c:;
    { uint32_t ea = c->r[8] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aec01c; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[10] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[10]); }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x3fffu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[10]); }
    c->r[14] = 0xaebdccu; f_a814c0(c);
    c->r[1] = c->r[13] + 0x34u;
    c->r[0] = c->r[4];
    c->r[14] = 0xaebdd8u; f_a7fc58(c);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xbaeau;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa5830000u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_aebe04; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aebe2c; }
L_aebe04:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[10]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_aebe2c:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aebe54; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aebe54:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[10] = 0x4000u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xaf30000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x1be4u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x16cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_aebf84; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aebef4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x33cu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_aebef4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aebf2c; }
    c->r[2] = 0xf530acu;
    c->r[3] = 0xf530acu;
    { uint32_t ea = 0xaebf0cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaebf10u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[10];
    goto L_aebf34;
L_aebf2c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_aebf34:;
    c->r[2] = 0x1be8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_aebf5c; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aebf78;
L_aebf5c:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aebf78:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aebf84:;
    c->r[1] = 0xf4d57cu;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaebf98u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_aebfac; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aebfc4; }
L_aebfac:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aebfc4:;
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x10u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[3] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[1];
    c->r[3] = c->r[13] + 0x10u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0xaec01cu; f_aeb990(c);
L_aec01c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaec024u; f_a81a68(c);
L_aec024:;
    c->r[0] = 0xc878b7u;
    c->r[1] = 0x1u;
    c->r[2] = 0xaec034u + c->r[0];
    c->r[0] = c->r[4];
    c->r[14] = 0xaec038u; f_a7fbb4(c);
    c->v.s[0] = 0x42c80000u;
    c->r[7] = c->r[13] + 0x44u;
    c->r[0] = c->r[4];
    c->r[1] = c->r[5];
    c->r[2] = c->r[9];
    c->r[3] = c->r[7];
    c->r[14] = 0xaec054u; f_a85844(c);
    c->r[0] = c->r[4];
    c->r[1] = c->r[7];
    c->r[14] = 0xaec060u; f_a7fc58(c);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x1u;
    c->r[0] = (c->r[0] & 0x1fu) | ((c->r[3] << 5) & 0xffffffe0u);
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = c->r[4];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    c->r[14] = 0xaec080u; f_a7ff38(c);
    c->r[0] = 0x1014u;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_aec0b0; }
    { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[0]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
    goto L_aec0b4;
L_aec0b0:;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_aec0b4:;
    { uint32_t ea = c->r[4] + 0xfccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aec0d8; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aec0d8:;
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[11];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaec0fcu; f_a814c0(c);
    c->r[0] = 0xf55a90u;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0x1fu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xaec114u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaec118u; f_a80108(c);
    c->r[1] = 0xf4d3e8u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaec12cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_aec140; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aec158; }
L_aec140:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aec158:;
    { uint32_t ea = c->r[8] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aec174; }
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xaec170u; f_aec430(c);
    goto L_aec180;
L_aec174:;
    c->r[0] = c->r[8];
    c->r[1] = c->r[4];
    c->r[14] = 0xaec180u; f_aeca5c(c);
L_aec180:;
    { uint32_t ea = c->r[8] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aec3ec; }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1eu; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[7] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[7]); }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x3fffu;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; ST32(ea, c->r[7]); }
    c->r[14] = 0xaec1d0u; f_a814c0(c);
    c->r[1] = c->r[13] + 0x34u;
    c->r[0] = c->r[4];
    c->r[14] = 0xaec1dcu; f_a7fc58(c);
    { uint32_t ea = c->r[6]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[5] = 0xbaeau;
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xa5830000u;
    (void)f_subs(c, c->r[3], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_aec208; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aec230; }
L_aec208:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[7]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[4] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4] + 0x154u; ST32(ea, c->r[0]); }
L_aec230:;
    { uint32_t ea = c->r[4] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0xfc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t r = c->r[0] & 0xffu; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_aec258; }
    c->r[0] = c->r[0] & 0x1f00u;
    { uint32_t ea = c->r[4] + 0x11cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x2000u;
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aec258:;
    c->r[1] = 0x100cu;
    { uint32_t ea = c->r[4] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x120u; ST32(ea, c->r[1]); } }
    if (COND_NE) { c->r[1] = 0x1u; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u); }
    c->r[1] = 0x1be4u;
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); } }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_aec37c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aec2f0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[6] = 0x33cu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
L_aec2f0:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aec328; }
    c->r[2] = 0xf52cb0u;
    c->r[3] = 0xf52cb0u;
    { uint32_t ea = 0xaec308u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaec30cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[10];
    goto L_aec330;
L_aec328:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_aec330:;
    c->r[2] = 0x1be8u;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_aec354; }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_aec370;
L_aec354:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aec370:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aec37c:;
    c->r[1] = 0xf4d184u;
    { uint32_t ea = c->r[4] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaec390u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_aec3a4; }
    { uint32_t ea = c->r[4] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_aec3bc; }
L_aec3a4:;
    { uint32_t ea = c->r[4] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[4] + 0x10cu; ST32(ea, c->r[0]); }
L_aec3bc:;
    c->r[3] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[0] = c->r[2] - c->r[0];
    c->r[2] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - c->r[1];
    c->r[1] = c->r[4];
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[14] = 0xaec3ecu; f_aeb990(c);
L_aec3ec:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaec3f4u; f_a81a68(c);
L_aec3f4:;
    c->r[13] = c->r[13] + 0x54u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_aec430(Cpu *restrict c) {
    FN_ENTER(0xaec430u);
L_aec430:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[10]); ST32(ea + 24u, c->r[11]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[11] = c->r[13] + 0x18u;
    c->r[13] = c->r[13] - 0x40u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[8] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aeca44; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_aec4c0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x173u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xda0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_aec4c0:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xaec4d4u; f_a6a438(c);
    c->r[3] = 0xfffcu;
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x30000u;
    c->r[3] = c->r[3] & (c->r[6] << 2);
    c->r[1] = c->r[1] + c->r[2];
    c->r[1] = c->r[1] & c->r[0];
    c->r[2] = c->r[2] + c->r[3];
    c->r[0] = c->r[2] & c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[0] + 0xfu;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[0], c->r[2]);
    if (COND_LS) { goto L_aec528; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xaec524u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aec528:;
    c->r[0] = c->r[1] + c->r[6];
    (void)f_subs(c, c->r[1], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xd9cu; ST32(ea, c->r[1]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    if (COND_EQ) { goto L_aec62c; }
    { uint32_t ea = c->r[8] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x130u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x140u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x150u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x134u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x144u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x154u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x128u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x138u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x148u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x12cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x14cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x15cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x2cu; ST32(ea, c->r[2]); }
L_aec62c:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4];
    c->r[6] = 0x28c0u;
    c->r[1] = c->r[3];
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x2abcu;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    c->r[1] = 0xd554u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_aec6ec; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aec6c4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x517u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aec6c4:;
    c->r[3] = 0x28c0u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[3] = 0x7518u;
    c->r[2] = 0x2ac0u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[4] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_aec6ec:;
    c->r[7] = 0x31d0u;
    c->r[3] = 0x33d4u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_aec790; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aec76c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[4] + 0xecu;
    c->r[6] = 0x63au;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[1] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[1] = c->r[1] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aec76c:;
    c->r[3] = 0x31d0u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x33d8u;
    c->r[2] = 0x63au;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_aec790:;
    c->r[1] = c->r[4];
    c->r[6] = 0xb03u;
    c->r[12] = 0x38u;
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xd9f30000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x80000u;
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_NE) { goto L_aec7cc; }
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_EQ) { goto L_aec7f8; }
L_aec7cc:;
    c->r[7] = c->r[7] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    c->r[2] = 0x0u;
    c->r[3] = 0xb03u;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    goto L_aec7fc;
L_aec7f8:;
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
L_aec7fc:;
    c->r[7] = 0xfff8u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x1f0000u;
    c->r[6] = c->r[2] & c->r[7];
    c->r[7] = 0xd03au;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa7d70000u;
    { uint32_t r = c->r[6] ^ c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aec83c; }
    c->r[6] = 0x6u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xffe00000u;
    c->r[2] = c->r[2] & c->r[6];
    c->r[6] = f_adds(c, c->r[12], 0x1u);
    c->r[2] = c->r[2] | c->r[6];
    c->r[6] = 0x0u;
    c->r[6] = c->r[6] + 0x0u + c->cf;
    c->r[3] = c->r[3] | c->r[6];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_aec83c:;
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_aec8b4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aec8a8; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[4] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] | 0x80000000u;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[2] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
L_aec8a8:;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_aec8b4:;
    c->r[7] = 0x0u;
    c->r[12] = 0xfaffu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x1fe00000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x25fc0000u;
    c->r[7] = c->r[2] & c->r[7];
    { uint32_t sc = 0; uint32_t r = c->r[7] ^ 0x600000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aec8e8; }
    c->r[7] = 0xfffeu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[7];
    c->r[2] = c->r[2] | 0x1u;
    c->r[2] = c->r[2] | 0x600000u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
L_aec8e8:;
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[4] + 0x1d8u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[12]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[7] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[5] = r; } }
    if (COND_NE) { goto L_aec90c; }
    { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_aec934; }
L_aec90c:;
    c->r[7] = c->r[7] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[12]); }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[6]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xaffu;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_aec934:;
    { uint32_t ea = c->r[8] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_aeca44; }
    { uint32_t ea = c->r[1] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x70u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_aec988; }
    c->r[1] = 0xf52650u;
    c->r[2] = 0xf52650u;
    { uint32_t ea = 0xaec968u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaec96cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aec988:;
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_aec9b4; }
    { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_aec9b4; }
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_aec9f4; }
L_aec9b4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aec9dc; }
    c->r[2] = 0xf525ecu;
    c->r[3] = 0xf525ecu;
    { uint32_t ea = 0xaec9ccu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xaec9d0u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_aec9dc:;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_aec9f4:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaec9fcu; f_a826fc(c);
    c->r[5] = c->r[7] + 0x8u;
L_aeca00:;
    c->r[1] = c->r[5] + 0x8u;
    c->r[0] = c->r[4];
    c->r[14] = 0xaeca0cu; f_a855c0(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_aeca28; }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaeca28u; f_a93ca8(c);
L_aeca28:;
    c->r[5] = c->r[5] + 0x40u;
    c->r[6] = f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_aeca00; }
    c->r[0] = c->r[4];
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->r[14] = LD32(ea + 28u); }
    __attribute__((musttail)) return f_a82760(c);
L_aeca44:;
    c->r[13] = c->r[11] - 0x18u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[10] = LD32(ea + 20u); c->r[11] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_aeca5c(Cpu *restrict c) {
    FN_ENTER(0xaeca5cu);
L_aeca5c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x5cu;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed198; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_aecaec; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[3] = 0x173u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0xda0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[4] + 0xd9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
L_aecaec:;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x5ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xaecb00u; f_a6a438(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_aecb54; }
    c->r[0] = c->r[4];
    c->r[1] = c->r[6];
    c->r[14] = 0xaecb50u; f_a82674(c);
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_aecb54:;
    c->r[1] = c->r[0] + c->r[6];
    c->r[9] = c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0xd9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_aecc58; }
    { uint32_t ea = c->r[5] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x140u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x150u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x134u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x144u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x148u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x13cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x15cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[1]); }
L_aecc58:;
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    c->r[7] = 0x28c0u;
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2abcu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[0] = 0xd554u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_aecd18; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeccf0; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x517u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_aeccf0:;
    c->r[2] = 0x28c0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x7518u;
    c->r[1] = 0x2ac0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[4] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
L_aecd18:;
    c->r[3] = 0x31d0u;
    c->r[2] = 0x33d4u;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_aecdbc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aecd98; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[7] = 0x63au;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_aecd98:;
    c->r[2] = 0x31d0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x33d8u;
    c->r[1] = 0x63au;
    { uint32_t ea = c->r[4] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aecdbc:;
    { uint32_t ea = c->r[5] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_aece0c; }
    c->r[1] = 0xf521c8u;
    c->r[2] = 0xf521c8u;
    { uint32_t ea = 0xaecdf0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xaecdf4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[4] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[1]); }
L_aece0c:;
    c->r[1] = c->r[4];
    c->r[14] = 0xb03u;
    c->r[12] = 0x38u;
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xd9f30000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x80000u;
    { uint32_t ea = c->r[1] + 4u; c->r[0] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0x74u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[14]);
    if (COND_NE) { goto L_aece44; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[2] = r; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x1dcu; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_aece70; }
L_aece44:;
    c->r[0] = c->r[0] & 0xffff00ffu;
    { uint32_t ea = c->r[4] + 0x1d8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[8]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xb03u;
    { uint32_t ea = c->r[4] + 0x1dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_aece74;
L_aece70:;
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
L_aece74:;
    c->r[2] = 0xfff8u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x1f0000u;
    c->r[2] = c->r[0] & c->r[2];
    { uint32_t r = c->r[2] ^ c->r[12]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aeceac; }
    c->r[2] = 0x6u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffe00000u;
    c->r[0] = c->r[0] & c->r[2];
    c->r[2] = f_adds(c, c->r[12], 0x1u);
    c->r[0] = c->r[0] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_aeceac:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_aed198; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_aed03c; }
    c->r[0] = 0xf520ecu;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = 0xaececcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf520e4u;
    { uint32_t ea = 0xaeced8u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[4] + 0xecu;
    c->r[10] = c->r[0] + 0x30c00u;
    goto L_aecef4;
L_aecee0:;
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_aecfe0; }
    goto L_aed008;
L_aecef4:;
    { uint32_t ea = c->r[8] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 31);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_aed02c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[0] & 0x3fu;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[1] >> 21) & 0xffu;
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_aecf48; }
    c->r[3] = ~0x0u;
    c->r[0] = c->r[0] & c->r[3];
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[1] = c->r[1] | (c->r[2] << 21);
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_aecf48:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_aecfc4; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aecfb4; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x80000000u;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[10] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x80000000u;
    { uint32_t ea = c->r[10] + (c->r[0] << 2); ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[10] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_aecfb4:;
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_aecfc4:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], c->r[7]); }
    if (COND_EQ) { goto L_aecee0; }
L_aecfe0:;
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[0]); }
L_aed008:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaed010u; f_a826fc(c);
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[8] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaed024u; f_a93ca8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xaed02cu; f_a82760(c);
L_aed02c:;
    c->r[8] = c->r[8] + 0x30u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_aecef4; }
    goto L_aed198;
L_aed03c:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x1u;
    c->r[7] = c->r[0] + 0x20u;
    c->r[0] = c->r[4] + 0xecu;
    c->r[10] = c->r[0] + 0x30c00u;
    goto L_aed068;
L_aed054:;
    { uint32_t ea = c->r[4] + 0x134u; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[0]);
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_NE) { goto L_aed158; }
    goto L_aed16c;
L_aed068:;
    { uint32_t ea = c->r[7] - 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 31);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_aed18c; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xbu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[3] = (c->r[2] >> 21) & 0xffu;
    c->r[0] = c->r[0] & 0x3fu;
    (void)f_subs(c, c->r[3], c->r[0]);
    if (COND_EQ) { goto L_aed0bc; }
    c->r[3] = ~0x0u;
    c->r[1] = c->r[1] & c->r[3];
    c->r[3] = 0xfffeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[0] = c->r[2] | (c->r[0] << 21);
    c->r[2] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_aed0bc:;
    { uint32_t ea = c->r[7] - 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7] - 0x20u;
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_aed13c; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aed12c; }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[10] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[10] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[1] = c->r[10] + (c->r[1] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[4] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_aed12c:;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[4] + 0x1c8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_aed13c:;
    { uint32_t ea = c->r[7] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x138u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0xau; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; } }
    if (COND_EQ) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_aed054; }
L_aed158:;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[4] + 0x124u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x134u; ST8(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x138u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x150u; ST32(ea, c->r[8]); }
L_aed16c:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaed174u; f_a826fc(c);
    { uint32_t ea = c->r[7] - 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] - 4u; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    c->r[0] = c->r[4];
    c->r[14] = 0xaed184u; f_a93ca8(c);
    c->r[0] = c->r[4];
    c->r[14] = 0xaed18cu; f_a82760(c);
L_aed18c:;
    c->r[7] = c->r[7] + 0x30u;
    c->r[5] = f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_aed068; }
L_aed198:;
    c->r[13] = c->r[11] - 0x1cu;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_aed1b0(Cpu *restrict c) {
    FN_ENTER(0xaed1b0u);
L_aed1b0:;
    c->r[3] = c->r[0] + 0xf0u;
    c->v.s[14] = 0x3f800000u;
    c->r[12] = 0x3f800000u;
    c->v.s[13] = 0x0u;
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); }
    c->v.s[2] = LD32(c->r[0] + 260u);
    c->v.s[4] = LD32(c->r[0] + 264u);
    c->v.s[0] = LD32(c->r[0] + 256u);
    c->v.s[6] = LD32(c->r[0] + 268u);
    { uint32_t ea = c->r[0] + 0x150u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x154u; ST32(ea, c->r[2]); }
    c->v.f[8] = c->v.f[4] + c->v.f[4];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    { uint32_t ea = c->r[0] + 0x158u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x15cu; ST32(ea, c->r[12]); }
    c->v.s[3] = LD32(c->r[0] + 272u);
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[7] = c->v.f[0] * c->v.f[10];
    c->v.f[5] = c->v.f[8] * c->v.f[6];
    c->v.f[10] = c->v.f[10] * c->v.f[6];
    c->v.f[9] = c->v.f[0] * c->v.f[8];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[1] = c->v.f[12] + c->v.f[4];
    c->v.f[11] = c->v.f[7] + c->v.f[5];
    c->v.f[15] = c->v.f[9] - c->v.f[10];
    c->v.f[5] = c->v.f[7] - c->v.f[5];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    c->v.f[11] = c->v.f[3] * c->v.f[11];
    c->v.f[1] = c->v.f[3] * c->v.f[1];
    ST32(c->r[0] + 288u, c->v.s[1]);
    c->v.f[1] = c->v.f[3] * c->v.f[15];
    ST32(c->r[0] + 292u, c->v.s[11]);
    c->v.f[3] = c->v.f[3] * c->v.f[13];
    ST32(c->r[0] + 296u, c->v.s[1]);
    c->v.f[1] = c->v.f[0] + c->v.f[0];
    ST32(c->r[0] + 300u, c->v.s[3]);
    c->v.s[3] = LD32(c->r[0] + 276u);
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[6] = c->v.f[1] * c->v.f[6];
    c->v.f[8] = c->v.f[3] * c->v.f[5];
    c->v.f[4] = c->v.f[0] + c->v.f[4];
    c->v.f[1] = c->v.f[2] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[12];
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    ST32(c->r[0] + 304u, c->v.s[8]);
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[8] = c->v.f[3] * c->v.f[1];
    c->v.f[0] = c->v.f[14] - c->v.f[0];
    c->v.f[4] = c->v.f[3] * c->v.f[4];
    ST32(c->r[0] + 308u, c->v.s[4]);
    c->v.f[4] = c->v.f[3] * c->v.f[13];
    ST32(c->r[0] + 312u, c->v.s[8]);
    c->v.f[8] = c->v.f[9] + c->v.f[10];
    ST32(c->r[0] + 316u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[0] + 280u);
    c->v.f[6] = c->v.f[4] * c->v.f[8];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[0] + 320u, c->v.s[6]);
    ST32(c->r[0] + 324u, c->v.s[2]);
    c->v.f[2] = c->v.f[4] * c->v.f[13];
    ST32(c->r[0] + 328u, c->v.s[0]);
    ST32(c->r[0] + 332u, c->v.s[2]);
    return;
}
void f_aed2b8(Cpu *restrict c) {
    FN_ENTER(0xaed2b8u);
L_aed2b8:;
    { uint32_t ea = c->r[0] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[0] + 0x7cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x70u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x78u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[1]); }
    c->v.s[4] = c->r[1];
    c->v.s[2] = LD32(c->r[0] + 172u);
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.s[4] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_aed308; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[4] = c->v.f[4] / c->v.f[2];
L_aed308:;
    ST32(c->r[0] + 100u, c->v.s[4]);
    c->v.s[2] = 0x3a83126fu;
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[2]); }
    c->v.s[4] = LD32(c->r[0] + 216u);
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    ST32(c->r[0] + 128u, c->v.s[2]);
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aed360; }
    { uint32_t ea = c->r[1] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[0] + 220u);
    c->v.s[2] = 0x3e800000u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_CC) { c->r[2] = c->r[1]; }
    c->v.s[4] = c->r[2];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
L_aed360:;
    ST32(c->r[0] + 132u, c->v.s[0]);
    c->r[1] = 0xe4f0u;
    { uint32_t ea = c->r[0] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd6830000u;
    (void)f_subs(c, c->r[2], 0x3u);
    if (COND_EQ) { goto L_aed394; }
    (void)f_subs(c, c->r[2], 0x2u);
    if (COND_EQ) { goto L_aed3d0; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_aed3e4; }
    c->r[1] = 0x64f1u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x80520000u;
    goto L_aed3d8;
L_aed394:;
    { uint32_t ea = c->r[0] + 0x160u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_aed3ac; }
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_aed3f8; }
L_aed3ac:;
    { uint32_t ea = c->r[0] + 0x17cu; uint32_t v = LD8(ea); c->r[2] = v; }
    c->r[3] = 0x14f4u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xab950000u;
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[3] = 0x64f6u; }
    if (COND_NE) { c->r[3] = (c->r[3] & 0xFFFFu) | 0x1b220000u; }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    return;
L_aed3d0:;
    c->r[1] = 0x34f2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe05f0000u;
L_aed3d8:;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    return;
L_aed3e4:;
    c->r[2] = 0xc4efu;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x4a0d0000u;
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[1]); }
    return;
L_aed3f8:;
    c->r[1] = 0xe4f3u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8a910000u;
    goto L_aed3d8;
}
void f_aed40c(Cpu *restrict c) {
    FN_ENTER(0xaed40cu);
L_aed40c:;
    { uint32_t ea = c->r[13] - 16u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[11]); ST32(ea + 12u, c->r[14]); c->r[13] = c->r[13] - 16u; }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_aed42c; }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed478; }
L_aed42c:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_aed518; }
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed518; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed450u; rt_dispatch(c);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed518; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed470u; rt_dispatch(c);
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
L_aed478:;
    { uint32_t ea = c->r[4] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed498; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed490u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x168u; ST32(ea, c->r[0]); }
L_aed498:;
    { uint32_t ea = c->r[4] + 0x16cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed4b8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed4b0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x16cu; ST32(ea, c->r[0]); }
L_aed4b8:;
    { uint32_t ea = c->r[4] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed4d8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed4d0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x174u; ST32(ea, c->r[0]); }
L_aed4d8:;
    { uint32_t ea = c->r[4] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed4f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed4f0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x178u; ST32(ea, c->r[0]); }
L_aed4f8:;
    { uint32_t ea = c->r[4] + 0x170u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed510u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x170u; ST32(ea, c->r[0]); }
L_aed518:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[11] = LD32(ea + 8u); c->pc = LD32(ea + 12u); } return;
}
void f_aed51c(Cpu *restrict c) {
    FN_ENTER(0xaed51cu);
L_aed51c:;
    { uint32_t ea = c->r[13] - 32u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[14]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x20u;
    c->r[0] = 0xf54be8u;
    { uint32_t ea = 0xaed530u + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = c->r[4];
    c->r[14] = 0xaed534u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x10u;
    c->r[8] = 0x10u;
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = 0x2c0u;
    c->pc = c->r[6]; c->r[14] = 0xaed550u; rt_dispatch(c);
    c->r[10] = c->r[0];
    c->r[14] = 0xaed558u; f_aeadbc(c);
    c->r[0] = 0xf54bb4u;
    c->r[9] = 0x0u;
    { uint32_t ea = 0xaed568u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x447a0000u;
    { uint32_t ea = c->r[10] + 0x188u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6000u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x46ea0000u;
    { uint32_t ea = c->r[10] + 0x18cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf4c64cu;
    { uint32_t ea = 0xaed590u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1a0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1a4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10] + 0x1c0u;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x1a8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x1acu; ST32(ea, c->r[9]); }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x41700000u;
    { uint32_t ea = c->r[10] + 0x190u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[10] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x184u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x180u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x1b0u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x1b1u; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x1b4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf53850u;
    { uint32_t ea = 0xaed5e0u + c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = c->r[12];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[12];
    c->r[0] = c->r[10] + 0x200u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[0] = c->r[10] + 0x240u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[0] = c->r[10] + 0x280u;
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[0] = 0xb4f8u;
    c->r[1] = 0x10u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x25f10000u;
    { uint32_t ea = c->r[10] + 0x1bcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x210u;
    c->r[14] = 0xaed66cu; f_d0804c(c);
    c->r[2] = 0x7u;
    c->r[1] = 0x2u;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); }
    c->r[1] = 0x100u;
    c->r[2] = 0x1u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[8]); }
    c->r[14] = 0xaed69cu; f_d08088(c);
    { uint32_t ea = c->r[10] + 0x1b8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[13] = c->r[13] + 0x20u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 32u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->pc = LD32(ea + 28u); } return;
}
void f_aed6bc(Cpu *restrict c) {
    FN_ENTER(0xaed6bcu);
L_aed6bc:;
    return;
}
void f_aed6c0(Cpu *restrict c) {
    FN_ENTER(0xaed6c0u);
L_aed6c0:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf54a48u;
    { uint32_t ea = 0xaed6d4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed6f8; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed6f0u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[0]); }
L_aed6f8:;
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    __attribute__((musttail)) return f_aeafe4(c);
}
void f_aed708(Cpu *restrict c) {
    FN_ENTER(0xaed708u);
L_aed708:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->r[0] = 0xf54a00u;
    { uint32_t ea = 0xaed71cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x8u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aed740; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1]; c->r[14] = 0xaed738u; rt_dispatch(c);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1b8u; ST32(ea, c->r[0]); }
L_aed740:;
    c->r[0] = c->r[4];
    c->r[14] = 0xaed748u; f_aeafe4(c);
    c->r[0] = 0xf549c4u;
    { uint32_t ea = 0xaed754u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xaed754u; f_9aa47c(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    c->pc = c->r[2]; __attribute__((musttail)) return rt_dispatch(c);
}
void f_aed770(Cpu *restrict c) {
    FN_ENTER(0xaed770u);
L_aed770:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x24u;
    c->r[8] = c->r[1];
    c->r[11] = c->r[0];
    c->r[14] = 0xaed784u; f_aeb13c(c);
    c->r[9] = 0x0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaed7acu; f_9bb638(c);
    c->r[1] = 0xc86146u;
    c->r[10] = c->r[13];
    c->r[12] = c->r[0] + 0x18u;
    c->r[2] = c->r[10];
    c->r[1] = 0xaed7c4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x180u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaed824u; f_9bb638(c);
    c->r[1] = 0xc860e0u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaed838u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1b0u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaed89cu; f_9bb638(c);
    c->r[1] = 0xc85591u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaed8b0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x194u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaed910u; f_9bb638(c);
    c->r[1] = 0xc85fffu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaed924u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x190u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaed988u; f_9bb638(c);
    c->r[1] = 0xc8467au;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaed99cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x188u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaed9fcu; f_9bb638(c);
    c->r[1] = 0xc8460du;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeda10u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x18cu;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaeda74u; f_9bb638(c);
    c->r[1] = 0xc85eacu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeda88u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = 0x1b1u;
    c->r[1] = c->r[11] + c->r[1];
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaedaecu; f_9bb638(c);
    c->r[1] = 0xc85e42u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaedb00u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xcu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1b4u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaedb64u; f_9bb638(c);
    c->r[1] = 0xc85ddeu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaedb78u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    c->r[1] = c->r[1] + 0x2fu;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1c0u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaedbe0u; f_9bb638(c);
    c->r[1] = 0xc85d69u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaedbf4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x184u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaedc5cu; f_9bb638(c);
    c->r[1] = 0xc85cfbu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaedc70u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x200u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaedcd0u; f_9bb638(c);
    c->r[1] = 0xc85c8fu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaedce4u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x240u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaedd48u; f_9bb638(c);
    c->r[1] = 0xc85c1fu;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaedd5cu + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x39u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x280u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaeddbcu; f_9bb638(c);
    c->r[1] = 0xc85bb3u;
    c->r[2] = c->r[10];
    c->r[12] = c->r[0] + 0x18u;
    c->r[1] = 0xaeddd0u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1b8u;
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
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[9]); }
    c->r[14] = 0xaede38u; f_9bb638(c);
    c->r[1] = 0xc70310u;
    c->r[1] = 0xaede44u + c->r[1];
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xau;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8000000u;
    c->r[1] = c->r[1] + 0xau;
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[11]); }
    c->r[1] = c->r[11] + 0x1a0u;
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
    c->r[13] = c->r[13] + 0x24u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
void f_aeded0(Cpu *restrict c) {
    FN_ENTER(0xaeded0u);
L_aeded0:;
    __attribute__((musttail)) return f_a879b0(c);
}
void f_aeded4(Cpu *restrict c) {
    FN_ENTER(0xaeded4u);
L_aeded4:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    c->r[4] = c->r[0];
    c->v.s[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x60u; ST32(ea, c->r[0]); }
    c->v.s[4] = c->r[0];
    c->v.s[2] = LD32(c->r[4] + 172u);
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.s[4] = c->v.s[0];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_aedf2c; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[4] = c->v.f[4] / c->v.f[2];
L_aedf2c:;
    ST32(c->r[4] + 100u, c->v.s[4]);
    c->v.s[2] = 0x3a83126fu;
    { uint32_t ea = c->r[4] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8cu; ST32(ea, c->r[1]); }
    c->v.s[4] = LD32(c->r[4] + 216u);
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    ST32(c->r[4] + 128u, c->v.s[2]);
    { uint32_t ea = c->r[4] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_aedf84; }
    { uint32_t ea = c->r[0] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[4] + 220u);
    c->v.s[2] = 0x3e800000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { c->r[1] = c->r[0]; }
    c->v.s[4] = c->r[1];
    c->v.f[4] = (float)c->v.s[4];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
L_aedf84:;
    ST32(c->r[4] + 132u, c->v.s[0]);
    c->r[0] = 0xe4f0u;
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xd6830000u;
    (void)f_subs(c, c->r[1], 0x3u);
    if (COND_EQ) { goto L_aedfbc; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_aedff4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_aee004; }
    c->r[0] = 0x64f1u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x80520000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_aee010;
L_aedfbc:;
    { uint32_t ea = c->r[4] + 0x160u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_aedfd4; }
    { uint32_t ea = c->r[4] + 0x164u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_aee1c8; }
L_aedfd4:;
    { uint32_t ea = c->r[4] + 0x17cu; uint32_t v = LD8(ea); c->r[1] = v; }
    c->r[2] = 0x14f4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xab950000u;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[2] = 0x64f6u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x1b220000u; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[2]); }
    goto L_aee010;
L_aedff4:;
    c->r[0] = 0x34f2u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xe05f0000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_aee010;
L_aee004:;
    c->r[1] = 0xc4efu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x4a0d0000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[1]); }
L_aee010:;
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    c->r[3] = 0xc440u;
    { uint32_t ea = c->r[4] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x20000u;
    { uint32_t ea = c->r[4] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x194u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1b4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x90u; ST32(ea, c->r[2]); }
    c->r[2] = 0xf4b3f8u;
    { uint32_t ea = 0xaee058u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD8(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_aee07c; }
    c->r[2] = c->r[2] + 0x44u;
    c->v.s[2] = c->r[1];
    c->r[2] = c->r[2] + 0x2c400u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[4] + 92u, c->v.s[0]);
L_aee07c:;
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x6u);
    if (COND_HI) { goto L_aee1b0; }
    c->r[2] = 0x1u;
    c->r[3] = 0x6cu;
    { uint32_t r = c->r[3] & shc_lsl(c, c->r[2], c->r[1]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_aee1b0; }
    c->v.s[0] = LD32(c->r[4] + 400u);
    c->v.d[1] = 0x4010000000000000ull;
    c->v.df[0] = (double)c->v.f[0];
    c->r[14] = 0xaee0a8u; f_15f0ea4(c);
    c->v.d[16] = 0x3ff0000000000000ull;
    c->v.df[16] = c->v.df[16] / c->v.df[0];
    c->v.f[0] = (float)c->v.df[16];
L_aee0b4:;
    ST32(c->r[4] + 108u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_aee108; }
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD8(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_NE) { goto L_aee138; }
    c->r[0] = 0x1506u;
    c->r[1] = 0xa50eu;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x72e30000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xf5a40000u;
    if (COND_NE) { c->r[0] = 0x3505u; }
    if (COND_NE) { c->r[1] = 0x550du; }
    if (COND_NE) { c->r[0] = (c->r[0] & 0xFFFFu) | 0x2e420000u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x96170000u; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3u;
    goto L_aee170;
L_aee108:;
    { uint32_t ea = c->r[4] + 0x1b0u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[1] = 0x250au;
    c->r[2] = 0xd502u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xe9770000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x6b370000u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[4] + 0x180u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[1] = 0xa509u; }
    if (COND_NE) { c->r[2] = 0x2501u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x50950000u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x16c00000u; }
    goto L_aee15c;
L_aee138:;
    c->r[1] = 0x550cu;
    (void)f_subs(c, c->r[2], 0x0u);
    c->r[2] = 0x4504u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x2f1c0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x31150000u;
    if (COND_NE) { c->r[1] = 0xd50bu; }
    if (COND_NE) { c->r[2] = 0xd503u; }
    if (COND_NE) { c->r[1] = (c->r[1] & 0xFFFFu) | 0x2c230000u; }
    if (COND_NE) { c->r[2] = (c->r[2] & 0xFFFFu) | 0x19e30000u; }
L_aee15c:;
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_aee184; }
L_aee170:;
    c->r[0] = 0xd82f74u;
    c->r[0] = 0xaee17cu + c->r[0];
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_aee184:;
    c->r[1] = 0xb4f8u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x25f10000u;
    { uint32_t ea = c->r[4] + 0x1bcu; ST32(ea, c->r[1]); }
    if (COND_NE) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[4] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->r[0] = 0x3500u; }
    if (COND_EQ) { c->r[0] = (c->r[0] & 0xFFFFu) | 0x55e0000u; }
    if (COND_EQ) { { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); } }
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_aee1b0:;
    c->v.s[2] = LD32(c->r[4] + 396u);
    c->v.s[0] = c->r[0];
    c->v.s[4] = 0x3f800000u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[4] / c->v.f[0];
    goto L_aee0b4;
L_aee1c8:;
    c->r[0] = 0xe4f3u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x8a910000u;
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    goto L_aee010;
}
