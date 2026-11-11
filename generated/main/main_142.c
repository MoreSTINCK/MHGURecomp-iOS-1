#include "cpu.h"
#include "neon_rt.h"
void f_a6a438(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a80108(Cpu *c);
void f_a80998(Cpu *c);
void f_a814c0(Cpu *c);
void f_dc2460(Cpu *c);
void f_dc53c0(Cpu *c);
void f_dd5b68(Cpu *c);
void f_15efdd0(Cpu *c);
void f_15f00d0(Cpu *c);
void f_a7bdd4(Cpu *restrict c) {
    FN_ENTER(0xa7bdd4u);
L_a7bdd4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 32u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); c->r[13] = c->r[13] - 32u; }
    c->r[13] = c->r[13] - 0x98u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[0];
    c->r[0] = 0x8e4u;
    c->r[8] = c->r[1];
    c->r[1] = 0x8bcu;
    c->r[6] = c->r[2];
    c->r[2] = 0x8c0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x30000u;
    c->r[4] = c->r[10];
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[4] + c->r[0]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[0] = v; }
    c->r[0] = c->r[10] + (c->r[0] << 3);
    { uint32_t ea = c->r[0] + c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = 0x158u;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[1] + (c->r[0] << 3);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8158u;
    { uint32_t r = c->r[0] * c->r[1] + c->r[10]; c->r[0] = r; }
    c->r[1] = 0x8204u;
    c->r[0] = c->r[0] + c->r[1];
    c->r[1] = c->r[10] + 0xacu;
    c->r[14] = 0xa7be50u; f_15efdd0(c);
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[10];
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x168u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[10] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x164u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | (c->r[6] << 16);
    { uint32_t ea = c->r[10] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[0] = 0xfc311cu;
    c->r[1] = 0xfc311cu;
    { uint32_t ea = c->r[10] + 0x1e4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x1e8u; ST32(ea, c->r[4]); }
    { uint32_t ea = 0xa7be9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7bea0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x1e0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[10] + 0x168u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x168u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x16cu; ST32(ea, c->r[2]); }
    c->r[0] = (c->r[0] & 0xffffffe0u) | ((c->r[1] << 0) & 0x1fu);
    c->r[1] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7befcu; f_a7fc58(c);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x16cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[9] = c->r[10];
    c->r[3] = 0x38u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x80000u;
    c->r[1] = c->r[1] & 0x1fu;
    { uint32_t ea = c->r[10] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[1]); }
    c->r[1] = 0xfff8u;
    { uint32_t ea = c->r[9] + 0x154u; uint32_t v = LD32(ea); c->r[9] = ea; c->r[2] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x1f0000u;
    c->r[7] = c->r[2] & c->r[1];
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[7] ^ c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7bf64; }
    c->r[7] = 0x6u;
    c->r[3] = f_adds(c, c->r[3], 0x1u);
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xffe00000u;
    c->r[2] = c->r[2] & c->r[7];
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = c->r[4] + 0x0u + c->cf;
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7bf64:;
    c->r[0] = c->r[0] & 0xfeu;
    { uint32_t r = c->r[0] ^ 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7fa60; }
    { uint32_t ea = c->r[8] + 0x298u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7bf8c; }
    { uint32_t ea = c->r[8] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    goto L_a7bf90;
L_a7bf8c:;
    c->r[0] = 0x0u;
L_a7bf90:;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[14] = c->r[10];
    { uint32_t ea = c->r[8] + 0x11u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a7c048; }
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    c->r[6] = 0x2048u;
    c->r[7] = 0x223cu;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_a7c1a4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c030; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x409u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c030:;
    c->r[7] = 0x2048u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[0] = 0x2250u;
    c->r[7] = 0x409u;
    goto L_a7c194;
L_a7c048:;
    { uint32_t ea = c->r[8] + 0x264u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    c->r[7] = 0x223cu;
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x6u);
    if (COND_NE) { goto L_a7c100; }
    c->r[6] = 0x2050u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_a7c1a4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c0e4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x409u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c0e4:;
    c->r[7] = 0x2050u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[7] = 0xf40au;
    c->r[0] = 0x2250u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x645d0000u;
    goto L_a7c194;
L_a7c100:;
    c->r[6] = 0x2058u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[6]);
    if (COND_EQ) { goto L_a7c1a4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c17c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x409u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c17c:;
    c->r[7] = 0x2058u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[7]); }
    c->r[7] = 0xd40bu;
    c->r[0] = 0x2250u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x534b0000u;
L_a7c194:;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c1a4:;
    c->r[0] = 0x220cu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    c->r[0] = 0xfbcbf4u;
    { uint32_t ea = 0xa7c1bcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[12] + 0x29u; uint32_t v = LD8(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a7c310; }
    c->r[4] = 0x2010u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_a7c26c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c244; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[6] = 0x401u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c244:;
    c->r[6] = 0x2010u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0x7402u;
    c->r[7] = 0x2210u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x45ef0000u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c26c:;
    c->r[4] = 0x2958u;
    c->r[6] = 0x2b54u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_a7c45c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c2f4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[6] = 0x52au;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c2f4:;
    c->r[6] = 0x2958u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    c->r[7] = 0xc52bu;
    c->r[3] = 0x2b58u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x31c20000u;
    goto L_a7c44c;
L_a7c310:;
    c->r[4] = 0x2008u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_a7c3b0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c38c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[6] = 0x401u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c38c:;
    c->r[6] = 0x2008u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x2210u;
    c->r[6] = 0x401u;
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c3b0:;
    c->r[4] = 0x2950u;
    c->r[6] = 0x2b54u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], c->r[4]);
    if (COND_EQ) { goto L_a7c45c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c438; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[6] = 0x52au;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c438:;
    c->r[6] = 0x2950u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    c->r[3] = 0x2b58u;
    c->r[7] = 0x52au;
L_a7c44c:;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + c->r[3]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c45c:;
    c->r[3] = 0x1d74u;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[4] + c->r[3]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[6] = v; }
    c->r[3] = 0xfbc8f0u;
    { uint32_t ea = 0xa7c474u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x2c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { goto L_a7c568; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c4e0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[0] = 0x36eu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[0] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    { uint32_t ea = c->r[1] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[0] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[4]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7c4e0:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_a7c520; }
    c->r[0] = 0xfc2ac0u;
    c->r[1] = 0xfc2ac0u;
    { uint32_t ea = 0xa7c4f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7c4fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x2000u;
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[7]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd0e50000u;
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    goto L_a7c528;
L_a7c520:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
L_a7c528:;
    c->r[0] = 0x1d78u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a7c548; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a7c55c;
L_a7c548:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c55c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c568:;
    c->r[0] = 0x1ec4u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[3] + 0x2d0u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7c668; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c5e0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[4] = 0x398u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7c5e0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a7c620; }
    c->r[0] = 0xfc29c0u;
    c->r[1] = 0xfc29c0u;
    { uint32_t ea = 0xa7c5f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7c5fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x3000u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x811a0000u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    goto L_a7c628;
L_a7c620:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_a7c628:;
    c->r[0] = 0x1ec8u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a7c648; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a7c65c;
L_a7c648:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c65c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c668:;
    c->r[0] = 0x1eccu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[3] + 0x2d4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7c768; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c6e0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[4] = 0x399u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7c6e0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a7c720; }
    c->r[0] = 0xfc28c0u;
    c->r[1] = 0xfc28c0u;
    { uint32_t ea = 0xa7c6f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7c6fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x6000u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xc1f60000u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | c->r[1];
    goto L_a7c728;
L_a7c720:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_a7c728:;
    c->r[0] = 0x1ed0u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a7c748; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a7c75c;
L_a7c748:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c75c:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c768:;
    c->r[0] = 0x1ed4u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[3] + 0x2d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_EQ) { goto L_a7c864; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c7e0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x39au;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7c7e0:;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7c81c; }
    c->r[0] = 0xfc27c0u;
    c->r[1] = 0xfc27c0u;
    { uint32_t ea = 0xa7c7f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7c7fcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0xeb000u;
    c->r[1] = c->r[0] | 0xbb000000u;
    goto L_a7c824;
L_a7c81c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[1]); }
L_a7c824:;
    c->r[0] = 0x1ed8u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_NE) { goto L_a7c844; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a7c858;
L_a7c844:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[2] = c->r[0] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c858:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c864:;
    c->r[0] = 0x2b8cu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[8] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { goto L_a7ca98; }
    c->r[0] = 0x39f8u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_a7c924; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c8fc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x531u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c8fc:;
    c->r[0] = 0x39f8u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0xf73fu;
    c->r[0] = 0x2b90u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xd6aa0000u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c924:;
    c->r[6] = 0x29a0u;
    c->r[0] = 0x2b94u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7c9d4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7c9ac; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x532u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7c9ac:;
    c->r[0] = 0x29a0u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0xd534u;
    c->r[0] = 0x2b98u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x539c0000u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7c9d4:;
    c->r[6] = 0x2980u;
    c->r[0] = 0x2b7cu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7ca84; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7ca5c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x52fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7ca5c:;
    c->r[0] = 0x2980u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x4530u;
    c->r[0] = 0x2b80u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x6620000u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7ca84:;
    c->r[0] = 0xfc5114u;
    { uint32_t ea = 0xa7ca90u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7cc98;
L_a7ca98:;
    c->r[0] = 0x2988u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_a7cb38; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cb14; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x531u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cb14:;
    c->r[0] = 0x2988u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2b90u;
    c->r[7] = 0x531u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7cb38:;
    c->r[6] = 0x2990u;
    c->r[0] = 0x2b94u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7cbe4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cbc0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x532u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cbc0:;
    c->r[0] = 0x2990u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2b98u;
    c->r[7] = 0x532u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7cbe4:;
    c->r[6] = 0x2978u;
    c->r[0] = 0x2b7cu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7cc90; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cc6c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x52fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cc6c:;
    c->r[0] = 0x2978u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2b80u;
    c->r[7] = 0x52fu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7cc90:;
    c->r[0] = 0xfc4f0cu;
    { uint32_t ea = 0xa7cc9cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7cc98:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[7]); }
    c->r[6] = 0x3980u;
    c->r[0] = 0x3b84u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7cd64; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cd40; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x730u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cd40:;
    c->r[0] = 0x3980u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3b88u;
    c->r[7] = 0x730u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7cd64:;
    c->r[6] = 0x29a8u;
    c->r[0] = 0x2bacu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[12] + 0x230u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_a7ce14; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cdf0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x535u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cdf0:;
    c->r[0] = 0x29a8u;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2bb0u;
    c->r[7] = 0x535u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7ce14:;
    c->r[0] = 0x2bb4u;
    c->r[7] = c->r[10];
    (void)f_subs(c, c->r[6], 0x1u);
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[4] = v; }
    if (COND_NE) { goto L_a7cec0; }
    c->r[0] = 0x29b8u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_EQ) { goto L_a7cf60; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cea4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x536u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cea4:;
    c->r[0] = 0x29b8u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = 0x537u;
    c->r[0] = 0x2bb8u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x7f50000u;
    goto L_a7cf50;
L_a7cec0:;
    c->r[0] = 0x29b0u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_EQ) { goto L_a7cf60; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cf3c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x536u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cf3c:;
    c->r[0] = 0x29b0u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2bb8u;
    c->r[7] = 0x536u;
L_a7cf50:;
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7cf60:;
    c->r[0] = 0x3aecu;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[12] + 0x23cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d00c; }
    c->r[0] = 0x38f0u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_a7d0a8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7cff4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x71du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7cff4:;
    c->r[0] = 0x38f0u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0xe71eu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x296a0000u;
    goto L_a7d094;
L_a7d00c:;
    c->r[0] = 0x38e8u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[6], c->r[0]);
    if (COND_EQ) { goto L_a7d0a8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7d088; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x71du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_a7d088:;
    c->r[0] = 0x38e8u;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x71du;
L_a7d094:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x3af0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[3]); }
    c->r[0] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7d0a8:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = 0xfu;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[14]); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[6] = 0x3fu; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a7d104; }
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d0d8u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->v.s[0] = 0x3f800000u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xfc4aacu;
    c->r[1] = 0x30u;
    { uint32_t ea = 0xa7d0fcu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d100u; f_a80108(c);
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7d104:;
    c->r[7] = 0x1u;
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7d154; }
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d120u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->v.s[0] = 0x3f800000u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xfc4a64u;
    c->r[1] = 0x30u;
    { uint32_t ea = 0xa7d144u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d148u; f_a80108(c);
    { uint32_t ea = c->r[8] + 0x2fcu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { c->r[7] = 0x1u; }
L_a7d154:;
    { uint32_t ea = c->r[8] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d170; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_a7d1e0; }
L_a7d170:;
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[1], 0x0u); }
    if (COND_EQ) { goto L_a7d1d8; }
    c->r[0] = c->r[10];
    c->r[1] = 0x3u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa7d198u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = ~0x1fu;
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[0] = 0x4u;
    c->r[1] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d1d4u; f_a80998(c);
    { uint32_t ea = c->r[8] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7d1d8:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d2d8; }
L_a7d1e0:;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d2d8; }
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa7d204u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a7d260; }
    c->v.s[0] = 0x3f800000u;
    c->r[2] = c->r[13] + 0x60u;
    c->r[0] = c->r[10];
    c->r[1] = 0x3fu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa7d244u; f_a80108(c);
    c->r[7] = 0x0u;
    goto L_a7d288;
L_a7d260:;
    c->v.s[0] = 0x3f800000u;
    c->r[2] = c->r[13] + 0x60u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2fu;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa7d288u; f_a80108(c);
L_a7d288:;
    c->r[0] = c->r[10];
    c->r[1] = 0x5u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa7d29cu; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = ~0x1fu;
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[0] = 0x4u;
    c->r[1] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[4]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d2d8u; f_a80998(c);
L_a7d2d8:;
    { uint32_t ea = c->r[8] + 0x224u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d31c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x6u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d2f4u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->v.s[0] = 0x3f800000u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xfc4890u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0xa7d318u + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d31cu; f_a80108(c);
L_a7d31c:;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[8] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d3a0; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d3a0; }
    c->r[0] = c->r[10];
    c->r[1] = 0x7u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d34cu; f_a7ff38(c);
    c->v.s[16] = 0x3f800000u;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = 0x0u;
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x70u;
    c->r[0] = c->r[10];
    c->r[1] = 0xfu;
    c->r[14] = 0xa7d374u; f_a80108(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = ~0x1fu;
    c->v.s[0] = c->v.s[16];
    c->r[0] = c->r[0] | c->r[3];
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xfc480cu;
    c->r[1] = 0x20u;
    { uint32_t ea = 0xa7d39cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d3a0u; f_a80108(c);
L_a7d3a0:;
    { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d4a8; }
    c->r[0] = c->r[10];
    c->r[1] = 0xeu;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0xa7d3c0u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[7] = ~0x1fu;
    c->r[4] = 0x4u;
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    c->r[6] = c->r[13] + 0x88u;
    c->r[1] = c->r[6];
    c->r[14] = 0xa7d400u; f_a80998(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x11u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d410u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] | c->r[7];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d44cu; f_a80998(c);
    { uint32_t ea = c->r[8] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7d4a8; }
    c->r[0] = c->r[10];
    c->r[1] = 0x12u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d468u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = ~0x1fu;
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[8] + 0x280u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d4a8u; f_a80998(c);
L_a7d4a8:;
    { uint32_t ea = c->r[8] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[8];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d530; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d530; }
    c->r[0] = c->r[10];
    c->r[1] = 0xau;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0xa7d4e0u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d500; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_a7d500:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[14] = 0xa7d514u; f_a814c0(c);
    c->r[0] = 0xfc467cu;
    c->v.s[0] = 0x3f800000u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xa7d52cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d530u; f_a80108(c);
L_a7d530:;
    c->r[0] = c->r[10];
    c->r[1] = 0xcu;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7d540u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->v.s[2] = 0x3b808081u;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = (c->r[0] >> 8) & 0xffu;
    c->v.s[0] = c->r[2];
    c->v.s[4] = c->r[1];
    c->r[1] = (c->r[0] >> 24);
    c->v.f[0] = (float)c->v.s[0];
    c->r[0] = (c->r[0] >> 16) & 0xffu;
    c->v.f[4] = (float)c->v.s[4];
    c->v.s[6] = c->r[0];
    c->v.f[16] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = (float)c->v.s[6];
    c->v.s[6] = c->r[1];
    c->v.f[18] = c->v.f[4] * c->v.f[2];
    ST32(c->r[13] + 96u, c->v.s[16]);
    c->v.f[4] = (float)c->v.s[6];
    c->v.f[20] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 100u, c->v.s[18]);
    c->v.f[0] = c->v.f[4] * c->v.f[2];
    ST32(c->r[13] + 104u, c->v.s[20]);
    ST32(c->r[13] + 108u, c->v.s[0]);
    { uint32_t ea = c->r[10] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_a7d60c; }
    c->r[0] = 0xfbb7f0u;
    { uint32_t ea = 0xa7d5c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x29u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d60c; }
    c->v.s[22] = 0x400ccccdu;
    c->v.s[0] = c->v.s[16];
    c->v.s[1] = c->v.s[22];
    c->r[14] = 0xa7d5dcu; f_15f00d0(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->v.s[1] = c->v.s[22];
    ST32(c->r[13] + 96u, c->v.s[16]);
    c->r[14] = 0xa7d5f0u; f_15f00d0(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->v.s[1] = c->v.s[22];
    ST32(c->r[13] + 100u, c->v.s[18]);
    c->r[14] = 0xa7d604u; f_15f00d0(c);
    c->v.s[20] = c->v.s[0];
    ST32(c->r[13] + 104u, c->v.s[20]);
L_a7d60c:;
    { uint32_t ea = c->r[4] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xf00000u;
    c->r[0] = c->r[0] - 0x100000u;
    c->r[0] = (c->r[0] >> 20);
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_a7d6a0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0xa7d634u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0xa7d654u: goto L_a7d654; case 0xa7d678u: goto L_a7d678; case 0xa7d6a0u: goto L_a7d6a0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_a7d654:;
    { uint32_t ea = c->r[10] + 0xdbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffff0u;
    goto L_a7d684;
L_a7d678:;
    { uint32_t ea = c->r[10] + 0xdbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x8u;
    c->r[0] = (c->r[0] & 0xfffffff0u) | ((c->r[1] << 0) & 0xfu);
L_a7d684:;
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[0] * c->v.f[16];
    c->v.f[4] = c->v.f[0] * c->v.f[18];
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    ST32(c->r[13] + 96u, c->v.s[2]);
    ST32(c->r[13] + 100u, c->v.s[4]);
    ST32(c->r[13] + 104u, c->v.s[0]);
L_a7d6a0:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = 0x3f800000u;
    c->r[2] = c->r[13] + 0x60u;
    c->r[3] = 0x0u;
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[10];
    if (COND_NE) { c->r[1] = 0xfu; }
    if (COND_EQ) { c->r[1] = 0x3fu; }
    c->r[14] = 0xa7d6c4u; f_a80108(c);
    c->r[8] = 0xfffcu;
    (void)f_subs(c, c->r[7], 0x1u);
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[4]); }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x30000u;
    if (COND_NE) { goto L_a7da1c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x12u;
    c->r[2] = 0x0u;
    c->r[6] = 0x0u;
    c->r[14] = 0xa7d6ecu; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d710; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
L_a7d710:;
    { uint32_t ea = c->r[4] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d724; }
    { uint32_t ea = c->r[0] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_a7d724:;
    c->r[0] = c->r[10];
    c->r[2] = c->r[6];
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa7d738u; f_a814c0(c);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_a7d754; }
    { uint32_t ea = c->r[2] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7d780; }
L_a7d754:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x88u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[2] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa7d780u; f_a80998(c);
L_a7d780:;
    c->r[0] = c->r[10];
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    c->r[4] = 0x0u;
    c->r[14] = 0xa7d794u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->v.s[0] = 0x3f800000u;
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[4]); }
    c->r[2] = c->r[13] + 0x50u;
    c->r[1] = 0x3fu;
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7d7ccu; f_a80108(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0xbaeau;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xa5830000u;
    (void)f_subs(c, c->r[3], c->r[6]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x500u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7d7fc; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7d828; }
L_a7d7fc:;
    c->r[3] = 0x5u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[6]); }
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[4]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x50000u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7d828:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a7d89c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x1d9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x10ccu;
    c->r[2] = 0x10d0u;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7d89c:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x764u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xa7d8b0u; f_a6a438(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = c->r[8] & (c->r[4] << 2);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[4] = c->r[1] + 0xfu;
    c->r[4] = c->r[4] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_a7d924; }
    c->r[0] = 0xfffu;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = 0xfbb4a8u;
    c->r[7] = c->r[7] & 0xfffff000u;
    c->r[1] = c->r[7];
    { uint32_t ea = 0xa7d908u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa7d90cu; f_dc2460(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    if (COND_NE) { c->r[1] = c->r[1] + c->r[7]; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[1]); }
L_a7d924:;
    c->r[1] = c->r[0] + c->r[4];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10ccu;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_NE) { c->r[1] = 0x0u; }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    c->r[1] = 0x1bf4u;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[2];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x280u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_EQ) { goto L_a7dac4; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7d9dc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[4] = 0x33eu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[2]); }
L_a7d9dc:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a7da74; }
    c->r[2] = 0xfc15c4u;
    c->r[3] = 0xfc15c4u;
    { uint32_t ea = 0xa7d9f4u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xa7d9f8u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x377b0000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_a7da7c;
L_a7da1c:;
    c->r[0] = c->r[10];
    c->r[1] = 0x13u;
    c->r[2] = 0x0u;
    c->r[8] = 0x0u;
    c->r[14] = 0xa7da30u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = ~0x1fu;
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x88u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[4] + 0x258u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[8]); }
    c->r[14] = 0xa7da6cu; f_a80998(c);
    goto L_a7db18;
L_a7da74:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_a7da7c:;
    c->r[2] = 0x1bf8u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_a7daa0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7dab8;
L_a7daa0:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7dab8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7dac4:;
    { uint32_t ea = c->r[4] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfbb2d8u;
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7dad8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->r[3] = c->r[2];
    c->r[14] = 0xa7db14u; f_dc53c0(c);
    { uint32_t ea = c->r[4] + 0x258u; uint32_t v = LD32(ea); c->r[8] = v; }
L_a7db18:;
    c->r[0] = c->r[10];
    c->r[1] = 0x14u;
    c->r[2] = 0x0u;
    c->r[14] = 0xa7db28u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    (void)f_subs(c, c->r[7], 0x1u);
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    if (COND_NE) { goto L_a7dd44; }
    { uint32_t ea = c->r[4] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_EQ) { goto L_a7dd44; }
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7db68u; f_a814c0(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = 0xbaeau;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa5830000u;
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_a7db94; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7dbb8; }
L_a7db94:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[6]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7dbb8:;
    c->r[1] = 0xfbb948u;
    { uint32_t ea = c->r[10] + 0xe54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xa7dbccu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_a7dbe0; }
    { uint32_t ea = c->r[10] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_a7dbf8; }
L_a7dbe0:;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
L_a7dbf8:;
    c->r[1] = 0x1be4u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_EQ) { goto L_a7dcf8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7dc6c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
L_a7dc6c:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_a7dcac; }
    c->r[1] = 0xfc1334u;
    c->r[2] = 0xfc1334u;
    { uint32_t ea = 0xa7dc84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7dc88u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_a7dcb4;
L_a7dcac:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_a7dcb4:;
    c->r[2] = 0x1be8u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_a7dcd4; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7dcec;
L_a7dcd4:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7dcec:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7dcf8:;
    { uint32_t ea = c->r[4] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfbb0a0u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7dd10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[14] = 0xa7dd44u; f_dc53c0(c);
L_a7dd44:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_a7ddb8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x1dau;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    c->r[1] = 0x10d4u;
    c->r[2] = 0x10d8u;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7ddb8:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x768u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xa7ddccu; f_a6a438(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[6] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[7] = c->r[1] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_a7de44; }
    c->r[0] = 0xfffu;
    c->r[6] = c->r[7] + c->r[0];
    c->r[0] = 0xfbaf84u;
    c->r[6] = c->r[6] & 0xfffff000u;
    c->r[1] = c->r[6];
    { uint32_t ea = 0xa7de2cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa7de30u; f_dc2460(c);
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    if (COND_NE) { c->r[1] = c->r[1] + c->r[6]; }
    { uint32_t ea = c->r[10] + 0x18u; ST32(ea, c->r[1]); }
L_a7de44:;
    c->r[1] = c->r[0] + c->r[7];
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = 0xf000u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x10d4u;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x8f230000u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    c->r[2] = c->r[10];
    if (COND_NE) { { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); } }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[1] = c->r[1] & 0xfffffffdu;
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1c14u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[1], c->r[8]);
    if (COND_EQ) { goto L_a7df88; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7defc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x342u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7defc:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_a7df38; }
    c->r[0] = 0xfc10a4u;
    c->r[1] = 0xfc10a4u;
    { uint32_t ea = 0xa7df14u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7df18u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[7];
    goto L_a7df44;
L_a7df38:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_a7df44:;
    c->r[2] = 0x1c18u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7df64; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7df7c;
L_a7df64:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7df7c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7df88:;
    c->r[0] = 0x1be4u;
    c->r[7] = c->r[10];
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_a7e09c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e008; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
L_a7e008:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e048; }
    c->r[1] = 0xfc0f98u;
    c->r[2] = 0xfc0f98u;
    { uint32_t ea = 0xa7e020u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7e024u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7e050;
L_a7e048:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7e050:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7e078; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7e090;
L_a7e078:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e090:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e09c:;
    c->r[0] = 0x1c0cu;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e15c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e110; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x341u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7e110:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1c10u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a7e148; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a7e150;
L_a7e148:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7e150:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e15c:;
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e630; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7e180u; f_a814c0(c);
    c->r[3] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[0] = c->r[0] + (c->r[0] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[1] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + (c->r[2] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[3] >> 31);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 1);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 20u);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[4] = 0xbaeau;
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[8]); }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xa5830000u;
    c->r[3] = c->r[1] & 0xff00u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_a7e234; }
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x1600u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7e200; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7e280; }
L_a7e200:;
    c->r[3] = 0x16u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x160000u;
    goto L_a7e274;
L_a7e234:;
    (void)f_subs(c, c->r[7], c->r[4]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7e24c; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7e280; }
L_a7e24c:;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
L_a7e274:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7e280:;
    c->r[1] = 0xfbb280u;
    { uint32_t ea = c->r[10] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xa7e294u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_a7e2a8; }
    { uint32_t ea = c->r[10] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_a7e2c0; }
L_a7e2a8:;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
L_a7e2c0:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0xfbaad8u;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[3] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7e2d8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[3];
    c->r[3] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    c->r[14] = 0xa7e314u; f_dc53c0(c);
    { uint32_t ea = c->r[7] + 0x2acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = c->r[7];
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7e334u; f_a814c0(c);
    c->r[3] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[3]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    c->r[7] = (uint32_t)((int32_t)c->r[0] >> 31);
    c->r[0] = c->r[0] + (c->r[7] >> 30);
    c->r[7] = 0xbaeau;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xa5830000u;
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[1] >> 31);
    c->r[0] = c->r[1] + (c->r[0] >> 30);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[2] >> 31);
    c->r[0] = c->r[2] + (c->r[0] >> 30);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)((int32_t)c->r[3] >> 31);
    c->r[0] = c->r[3] + (c->r[0] >> 30);
    c->r[0] = (uint32_t)((int32_t)c->r[0] >> 2);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x1700u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7e3ac; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7e3d8; }
L_a7e3ac:;
    c->r[3] = 0x17u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[8]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x170000u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7e3d8:;
    c->r[1] = 0xfbb124u;
    { uint32_t ea = c->r[10] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = 0xa7e3f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_a7e404; }
    { uint32_t ea = c->r[10] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_a7e41c; }
L_a7e404:;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
L_a7e41c:;
    { uint32_t ea = c->r[4] + 0x2a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_a7e528; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e494; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
L_a7e494:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e4d4; }
    c->r[1] = 0xfc0b0cu;
    c->r[2] = 0xfc0b0cu;
    { uint32_t ea = 0xa7e4acu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7e4b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7e4dc;
L_a7e4d4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7e4dc:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7e504; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7e51c;
L_a7e504:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e51c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e528:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e5e0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e594; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x341u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[6]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7e594:;
    c->r[0] = 0x0u;
    c->r[2] = 0x1c10u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a7e5cc; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a7e5d4;
L_a7e5cc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7e5d4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e5e0:;
    { uint32_t ea = c->r[4] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfba7b8u;
    c->r[3] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7e5f8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 1) & 0x7fffu;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 17) & 0x3fffu;
    c->r[2] = c->r[13] + 0x38u;
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x40u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->r[14] = 0xa7e630u; f_dc53c0(c);
L_a7e630:;
    c->r[0] = 0x0u;
    c->r[1] = 0x15u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[6]); }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7e650u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0xfba744u;
    c->r[1] = 0x1u;
    { uint32_t ea = 0xa7e66cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] - 0x1u;
    c->r[7] = c->r[0];
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_a7e6b4; }
    { uint32_t ea = c->r[4] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7e6acu; f_a814c0(c);
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_a7e6b4:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { goto L_a7e6c8; }
    { uint32_t ea = c->r[4] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7edd0; }
L_a7e6c8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[12] = 0xbaeau;
    c->r[4] = c->r[8];
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xa5830000u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_a7e7e0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e74c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x342u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7e74c:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a7e790; }
    c->r[0] = 0xfc0854u;
    c->r[1] = 0xfc0854u;
    { uint32_t ea = 0xa7e764u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7e768u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0xf000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8f230000u;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7e79c;
L_a7e790:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_a7e79c:;
    c->r[2] = 0x1c18u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7e7bc; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7e7d4;
L_a7e7bc:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e7d4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e7e0:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[7];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[4] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_a7e8f4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e864; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x33cu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[7]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
L_a7e864:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e8a4; }
    c->r[1] = 0xfc073cu;
    c->r[2] = 0xfc073cu;
    { uint32_t ea = 0xa7e87cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7e880u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7e8ac;
L_a7e8a4:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7e8ac:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7e8d0; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7e8e8;
L_a7e8d0:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e8e8:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e8f4:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7e9c0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7e968; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x341u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7e968:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x1c10u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a7e9ac; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a7e9b4;
L_a7e9ac:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7e9b4:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7e9c0:;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[12]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7e9e8; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7ea18; }
L_a7e9e8:;
    c->r[3] = 0x4u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[12]); }
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0xaeau;
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[0]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x40000u;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7ea18:;
    c->r[1] = 0x227cu;
    c->r[0] = c->r[10];
    (void)f_subs(c, c->r[6], 0x2u);
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_CC) { goto L_a7ead4; }
    c->r[3] = 0x2080u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_a7eb70; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7eaa8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x40fu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
L_a7eaa8:;
    c->r[2] = 0x2080u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0xa410u;
    c->r[0] = 0x2280u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb06a0000u;
    goto L_a7eb60;
L_a7ead4:;
    c->r[3] = 0x2078u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_a7eb70; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7eb4c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x40fu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[1] = v; }
L_a7eb4c:;
    c->r[2] = 0x2078u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x2280u;
    c->r[1] = 0x40fu;
L_a7eb60:;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7eb70:;
    c->r[1] = 0xfba990u;
    { uint32_t ea = c->r[10] + 0xe2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xa7eb84u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_NE) { goto L_a7eb98; }
    { uint32_t ea = c->r[10] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_a7ebb0; }
L_a7eb98:;
    { uint32_t ea = c->r[10] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x108u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1u;
    { uint32_t ea = c->r[10] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] & 0x1fffu) | ((c->r[1] << 13) & 0xffffe000u);
    { uint32_t ea = c->r[10] + 0x10cu; ST32(ea, c->r[0]); }
L_a7ebb0:;
    { uint32_t ea = c->r[4] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfba1ecu;
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7ebc4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->r[3] = c->r[2];
    c->r[14] = 0xa7ec00u; f_dc53c0(c);
L_a7ec00:;
    { uint32_t ea = c->r[4] + 0x11u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_a7eca4; }
    c->r[1] = 0x1e4cu;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a7eeec; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7ec84; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x389u;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
L_a7ec84:;
    c->r[1] = 0x0u;
    c->r[2] = 0x1e50u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { goto L_a7eec8; }
    goto L_a7eeb4;
L_a7eca4:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7ece8; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[4] + 0x260u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7ece0u; f_a80998(c);
    goto L_a7ecec;
L_a7ece8:;
    c->r[4] = c->r[4] + 0x260u;
L_a7ecec:;
    c->r[1] = 0x1e4cu;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_a7edb4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7ed6c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[6] = 0x389u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[2]); }
L_a7ed6c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a7ee8c; }
    c->r[2] = 0x0u;
    c->r[3] = 0xfc0230u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    c->r[2] = 0xfc0228u;
    { uint32_t ea = 0xa7ed8cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xa7ed90u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x5000u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x32100000u;
    c->r[1] = c->r[0] | c->r[1];
    goto L_a7ee9c;
L_a7edb4:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_LS) { goto L_a7eef4; }
    goto L_a7f9b8;
L_a7edd0:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[7];
    c->r[7] = c->r[6];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7fa84; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7ee50; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x342u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7ee50:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x1c18u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a7fa70; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a7fa78;
L_a7ee8c:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
L_a7ee9c:;
    c->r[2] = 0x1e50u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_a7eec8; }
L_a7eeb4:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7eee0;
L_a7eec8:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7eee0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7eeec:;
    (void)f_subs(c, c->r[8], 0x3u);
    if (COND_HI) { goto L_a7f9b8; }
L_a7eef4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_a7ef1c; }
    c->r[0] = c->r[10];
    c->r[1] = 0x15u;
    c->r[2] = 0x1u;
    c->r[14] = 0xa7ef10u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[0] = c->r[0] & 0x1fu;
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
L_a7ef1c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7ef64; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[4] + 0x260u; uint32_t v = LD32(ea); c->r[4] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7ef58u; f_a80998(c);
    goto L_a7ef68;
L_a7ef64:;
    c->r[4] = c->r[4] + 0x260u;
L_a7ef68:;
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_HI) { goto L_a7f020; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_a7f1cc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7efe0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7efe0:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a7f180; }
    c->r[0] = 0xfbffc0u;
    c->r[1] = 0xfbffc0u;
    { uint32_t ea = 0xa7eff8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7effcu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7f188;
L_a7f020:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[0] + 0x2ecu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x2f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = 0xfb9d20u;
    { uint32_t ea = 0xa7f044u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xa7f048u; f_dd5b68(c);
    { uint32_t ea = c->r[6] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7f064u; f_a814c0(c);
    c->r[0] = 0xfc2b2cu;
    c->v.s[0] = 0x0u;
    c->r[1] = 0xfu;
    c->r[3] = 0x0u;
    { uint32_t ea = 0xa7f07cu + c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7f080u; f_a80108(c);
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = 0x4aeeu;
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = (c->r[8] & 0xFFFFu) | 0xdd070000u;
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[2] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[3] = r; } }
    if (COND_NE) { goto L_a7f0ac; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7f0d0; }
L_a7f0ac:;
    c->r[2] = c->r[2] & 0xffff00ffu;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[4]); }
    c->r[1] = 0xaeeu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7f0d0:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_a7f2a8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7f140; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7f140:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a7f250; }
    c->r[0] = 0xfbfe60u;
    c->r[1] = 0xfbfe60u;
    { uint32_t ea = 0xa7f158u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7f15cu + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7f258;
L_a7f180:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7f188:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7f1a8; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f1c0;
L_a7f1a8:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f1c0:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f1cc:;
    c->r[0] = 0xdf191cu;
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = 0x2aecu;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0x47bf0000u;
    c->r[0] = 0xa7f1ecu + c->r[0];
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[0] + (c->r[8] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_EQ) { c->r[6] = (c->r[3] >> 8) & 0xffu; }
    if (COND_EQ) { (void)f_subs(c, c->r[6], c->r[0]); }
    if (COND_NE) { goto L_a7f208; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a7f240; }
L_a7f208:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[7] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = c->r[3] | (c->r[7] << 8);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[1]); }
    c->r[1] = 0xaecu;
    c->r[0] = c->r[1] | (c->r[0] << 16);
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f240:;
    c->r[0] = 0xfb9b60u;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = 0xa7f250u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f970;
L_a7f250:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7f258:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7f284; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f29c;
L_a7f284:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f29c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f2a8:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0xfb9af0u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[1] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7f2c0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa7f2f8u; f_dc53c0(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10];
    c->r[14] = 0xa7f314u; f_a814c0(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[8]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7f33c; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7f368; }
L_a7f33c:;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[8]); }
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[4]); }
    c->r[1] = 0xaeeu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7f368:;
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7f46c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7f3d4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7f3d4:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a7f414; }
    c->r[0] = 0xfbfbccu;
    c->r[1] = 0xfbfbccu;
    { uint32_t ea = 0xa7f3ecu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7f3f0u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7f41c;
L_a7f414:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7f41c:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7f448; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f460;
L_a7f448:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f460:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f46c:;
    c->r[4] = c->r[8];
    c->r[0] = 0x1c8cu;
    c->r[8] = c->r[10];
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[2] = v; }
    c->r[0] = 0xfb98dcu;
    { uint32_t ea = 0xa7f488u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x2e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_a7f584; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7f4f4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[6] = 0x351u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[8]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[2]); }
L_a7f4f4:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_a7f534; }
    c->r[2] = 0xfbfaacu;
    c->r[3] = 0xfbfaacu;
    { uint32_t ea = 0xa7f50cu + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xa7f510u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
    c->r[2] = 0x7000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x931b0000u;
    c->r[1] = c->r[1] | c->r[2];
    goto L_a7f53c;
L_a7f534:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[1]); }
L_a7f53c:;
    c->r[3] = 0x1c90u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_a7f560; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_a7f578;
L_a7f560:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7f578:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[1]); }
L_a7f584:;
    c->r[2] = 0x1c94u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[0] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_a7f690; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7f5fc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[6] = 0x352u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[2]); }
L_a7f5fc:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7f638; }
    c->r[2] = 0xfbf9a4u;
    c->r[3] = 0xfbf9a4u;
    { uint32_t ea = 0xa7f614u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xa7f618u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0xd000u;
    c->r[0] = c->r[0] | 0x6000000u;
    goto L_a7f640;
L_a7f638:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_a7f640:;
    c->r[2] = 0x1c98u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7f66c; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f684;
L_a7f66c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f684:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f690:;
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = 0xfb9708u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[7] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xa7f6a8u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x50u;
    c->r[3] = c->r[2];
    { uint32_t ea = c->r[13]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[6]); }
    c->r[14] = 0xa7f6e0u; f_dc53c0(c);
    { uint32_t ea = c->r[7] + 0x168u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7f6f4; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
L_a7f6f4:;
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[2] = 0x0u;
    c->r[3] = 0x0u;
    c->r[7] = 0x0u;
    c->r[14] = 0xa7f70cu; f_a814c0(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { c->r[3] = c->r[2] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[3] ^ 0x200u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_a7f734; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_a7f760; }
L_a7f734:;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[4]); }
    c->r[2] = (c->r[2] & 0xffff00ffu) | ((c->r[3] << 8) & 0xff00u);
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[7]); }
    c->r[1] = 0xaeeu;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x20000u;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[9]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_a7f760:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_a7f86c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7f7d8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x33cu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[7]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7f7d8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_a7f818; }
    c->r[0] = 0xfbf7c8u;
    c->r[1] = 0xfbf7c8u;
    { uint32_t ea = 0xa7f7f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7f7f4u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x4000u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[4]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xaf30000u;
    { uint32_t ea = c->r[4] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7f820;
L_a7f818:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
L_a7f820:;
    c->r[2] = 0x1be8u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7f848; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f860;
L_a7f848:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f860:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f86c:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], c->r[6]);
    if (COND_EQ) { goto L_a7f968; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7f8dc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x351u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7f8dc:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_a7f91c; }
    c->r[0] = 0xfbf6c4u;
    c->r[1] = 0xfbf6c4u;
    { uint32_t ea = 0xa7f8f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = 0xa7f8f8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[1] + c->r[0];
    c->r[1] = 0x7000u;
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; ST32(ea, c->r[6]); }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x931b0000u;
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | c->r[1];
    goto L_a7f924;
L_a7f91c:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
L_a7f924:;
    c->r[2] = 0x1c90u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_a7f944; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_a7f95c;
L_a7f944:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f95c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7f968:;
    c->r[0] = 0xfb943cu;
    { uint32_t ea = 0xa7f974u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7f970:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x204u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[2]); }
    c->r[1] = (c->r[1] >> 16) & 0x7fffu;
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[2]); }
    c->r[1] = 0x0u;
    c->r[2] = c->r[13] + 0x88u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    c->r[3] = c->r[2];
    c->r[14] = 0xa7f9b8u; f_dc53c0(c);
L_a7f9b8:;
    c->r[1] = c->r[13] + 0x88u;
    c->r[0] = c->r[10];
    c->r[14] = 0xa7f9c4u; f_a7fc58(c);
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x40u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7fa0c; }
    { uint32_t ea = c->r[4] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[0] >> 16) & 0x7fffu;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { c->r[0] = (uint32_t)(uint16_t)(c->r[0]); }
    if (COND_EQ) { (void)f_subs(c, c->r[0], c->r[1]); }
    if (COND_NE) { goto L_a7fa0c; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; }
    if (COND_EQ) { goto L_a7fa60; }
L_a7fa0c:;
    c->r[0] = c->r[10];
    c->r[1] = 0x17u;
    c->r[2] = 0x0u;
    c->r[6] = c->r[4];
    c->r[4] = 0x0u;
    c->r[14] = 0xa7fa24u; f_a7ff38(c);
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->r[3] = ~0x1fu;
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[5]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[2] = c->r[13] + 0x50u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x88u;
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[6] + 0x268u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0xa7fa60u; f_a80998(c);
L_a7fa60:;
    c->r[13] = c->r[11] - 0x40u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->r[13] = c->r[13] + 32u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_a7fa70:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7fa78:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
L_a7fa84:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_a7ec00; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_a7faf8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x341u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = (c->r[2] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[2]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_a7faf8:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->r[2] = 0x1c10u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_a7fb34; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] | 0x2u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a7fb3c;
L_a7fb34:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_a7fb3c:;
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[9]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[9] + 0x4u; ST32(ea, c->r[0]); }
    goto L_a7ec00;
}
