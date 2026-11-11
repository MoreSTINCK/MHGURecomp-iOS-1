#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_4332ac(Cpu *c);
void f_a6a438(Cpu *c);
void f_a7fc58(Cpu *c);
void f_a7ff38(Cpu *c);
void f_a82674(Cpu *c);
void f_a826fc(Cpu *c);
void f_a82760(Cpu *c);
void f_a8487c(Cpu *c);
void f_b3eff4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe30(Cpu *c);
void f_b8ab90(Cpu *restrict c) {
    FN_ENTER(0xb8ab90u);
L_b8ab90:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x278u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[10] = c->r[1];
    c->r[8] = c->r[2];
    c->r[5] = c->r[0];
    c->r[1] = 0x1u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[3]); }
    c->r[4] = 0x0u;
    c->r[0] = c->r[10];
    c->r[14] = 0xb8abccu; f_a7ff38(c);
    { uint32_t ea = c->r[5] + 0x198u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[8] + (c->r[8] << 4);
    c->r[0] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[5] + 0x198u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x164u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] & 0x1fu;
    c->r[1] = c->r[2] | (c->r[1] << 5);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xad8u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[9] << 2);
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x204u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7] + 0x204u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[7]); }
    c->r[7] = 0xab22u;
    { uint32_t ea = c->r[0] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xee2d0000u;
    (void)f_subs(c, c->r[6], c->r[7]);
    if (COND_EQ) { c->r[6] = c->r[3] & 0xff00u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] ^ 0x300u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_b8ac4c; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_b8ac7c; }
L_b8ac4c:;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[7]); }
    c->r[7] = 0x3u;
    c->r[3] = (c->r[3] & 0xffff00ffu) | ((c->r[7] << 8) & 0xff00u);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[4]); }
    c->r[1] = 0xb22u;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
L_b8ac7c:;
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x20e4u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x4cu;
    { uint32_t r = c->r[8] * c->r[0] + c->r[3]; c->r[1] = r; }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_b8ada4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8ad0c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[10] + 0xecu;
    c->r[4] = 0x3dcu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[3]); }
L_b8ad0c:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b8ad48; }
    c->r[3] = 0xeb4294u;
    c->r[7] = 0xeb4294u;
    { uint32_t ea = 0xb8ad24u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xb8ad28u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0xef000u;
    c->r[1] = c->r[1] | 0x2d400000u;
    goto L_b8ad50;
L_b8ad48:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_b8ad50:;
    c->r[3] = 0x20e8u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_b8ad74; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_b8ad90;
L_b8ad74:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_b8ad90:;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b8ada4:;
    { uint32_t r = c->r[8] * c->r[0] + c->r[3]; c->r[0] = r; }
    c->r[2] = 0x20ecu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_b8aebc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8ae20; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[6] = 0x3ddu;
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
L_b8ae20:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8ae60; }
    c->r[2] = 0xeb4180u;
    c->r[3] = 0xeb4180u;
    { uint32_t ea = 0xb8ae38u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb8ae3cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x5000u;
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xb8550000u;
    c->r[0] = c->r[0] | c->r[1];
    goto L_b8ae68;
L_b8ae60:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_b8ae68:;
    c->r[2] = 0x20f0u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b8ae8c; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b8aea8;
L_b8ae8c:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b8aea8:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b8aebc:;
    c->r[0] = 0x4cu;
    c->r[7] = 0x20f4u;
    c->r[2] = c->r[10];
    { uint32_t r = c->r[8] * c->r[0] + c->r[3]; c->r[1] = r; }
    { uint32_t ea = c->r[2] + c->r[7]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_EQ) { goto L_b8afe0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8af44; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[10] + 0xecu;
    c->r[4] = 0x3deu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[3]); }
L_b8af44:;
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_b8af84; }
    c->r[3] = 0xeb405cu;
    c->r[7] = 0xeb405cu;
    { uint32_t ea = 0xb8af5cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xb8af60u + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[7] + c->r[3];
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[2] = 0x3000u;
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xcb5c0000u;
    c->r[1] = c->r[1] | c->r[2];
    goto L_b8af8c;
L_b8af84:;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
L_b8af8c:;
    c->r[3] = 0x20f8u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[1]);
    if (COND_NE) { goto L_b8afb0; }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_b8afcc;
L_b8afb0:;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] | 0x2u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
L_b8afcc:;
    c->r[3] = c->r[3] | 0x1u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
L_b8afe0:;
    { uint32_t r = c->r[8] * c->r[0] + c->r[3]; c->r[0] = r; }
    c->r[2] = 0x20fcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_EQ) { goto L_b8b0ec; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8b05c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[10] + 0xecu;
    c->r[6] = 0x3dfu;
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
L_b8b05c:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8b098; }
    c->r[2] = 0xeb3f44u;
    c->r[3] = 0xeb3f44u;
    { uint32_t ea = 0xb8b074u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0xb8b078u + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[3] + c->r[2];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x60000u;
    c->r[0] = c->r[0] | 0x82000000u;
    goto L_b8b0a0;
L_b8b098:;
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_b8b0a0:;
    c->r[2] = 0x2100u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { goto L_b8b0c4; }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_b8b0e0;
L_b8b0c4:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[0] + 0x154u; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b8b0e0:;
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b8b0ec:;
    c->r[0] = 0x2abcu;
    c->r[6] = c->r[10];
    { uint32_t ea = c->r[5] + 0xae6u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[1] = v; }
    c->r[0] = 0xd554u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_b8b250; }
    c->r[2] = 0x28f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_b8b1b4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8b184; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x517u;
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
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8b184:;
    c->r[1] = 0x28f0u;
    c->r[2] = 0x51eu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x8a480000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2ac0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_b8b1b4:;
    c->r[3] = 0x2930u;
    c->r[2] = 0x2afcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b8b3a4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8b234; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x51fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8b234:;
    c->r[2] = 0x2930u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xb526u;
    c->r[0] = 0x2b00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x8ae80000u;
    goto L_b8b38c;
L_b8b250:;
    c->r[2] = 0x28e0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_EQ) { goto L_b8b2f4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8b2c4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x517u;
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
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8b2c4:;
    c->r[1] = 0x28e0u;
    c->r[2] = 0xb51cu;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x21d70000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[1]); }
    c->r[1] = 0x2ac0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_b8b2f4:;
    c->r[3] = 0x2920u;
    c->r[2] = 0x2afcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_b8b3a4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8b374; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x51fu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8b374:;
    c->r[2] = 0x2920u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x524u;
    c->r[0] = 0x2b00u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x21770000u;
L_b8b38c:;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_b8b3a4:;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8b41c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x313u;
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
    c->r[1] = 0x1a9cu;
    c->r[2] = 0x1aa0u;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_b8b41c:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[14] = 0xb8b430u; f_a6a438(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[0] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[6] = c->r[1] & c->r[0];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[6]); }
    c->r[1] = c->r[1] & (c->r[7] << 2);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + 0xfu;
    c->r[7] = c->r[7] & 0xfffffff0u;
    c->r[0] = c->r[6] + c->r[7];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LS) { goto L_b8b484; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[7];
    c->r[14] = 0xb8b480u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b8b484:;
    c->r[0] = c->r[6] + c->r[7];
    c->r[2] = c->r[10];
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1a9cu;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[2] + 0x154u; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x1u;
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[2] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8b4fc; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xfffcu;
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x30000u;
    c->r[2] = c->r[2] & (c->r[0] << 2);
    c->r[0] = c->r[6];
    c->r[14] = 0xb8b4d4u; f_15efe30(c);
    { uint32_t ea = c->r[5] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[0]); }
L_b8b4fc:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8b570; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x317u;
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
    c->r[1] = 0x1abcu;
    c->r[2] = 0x1ac0u;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_b8b570:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb8b584u; f_a6a438(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b8b5d8; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0xb8b5d4u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8b5d8:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1abcu;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    c->r[1] = c->r[1] | 0x1u;
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    if (COND_EQ) { goto L_b8b648; }
    c->r[1] = 0x3e800000u;
    c->r[3] = 0x4cu;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x42000000u;
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[8] * c->r[3] + c->r[2]; c->r[2] = r; }
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[0] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[8] * c->r[3] + c->r[1]; c->r[1] = r; }
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.f[0] = (float)c->v.s[0];
    ST32(c->r[0] + 16u, c->v.s[0]);
L_b8b648:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_b8b990; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b8bb6c; }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8b680u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8b698u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xeae4acu;
    { uint32_t ea = 0xb8b724u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1e0u;
    c->r[1] = c->r[13] + 0x230u;
    c->r[14] = 0xb8b78cu; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x200u;
    c->r[12] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[12]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0x9b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9b4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x9d0u;
    { uint32_t ea = c->r[5] + 0x9b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x9bcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x9c0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x9c4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x9c8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x9ccu; ST32(ea, c->r[9]); }
    c->r[8] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); ST32(ea + 8u, c->r[14]); }
    c->r[14] = c->r[13] + 0x250u;
    c->r[12] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x9dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[8] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0xa40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xa50u;
    { uint32_t ea = c->r[5] + 0xa48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[9]); ST32(ea + 16u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0xa64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xa68u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x9e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x9e4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x9e8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x9ecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x9f0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x9f4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x9f8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5] + 0xa00u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xa04u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa08u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa0cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xa18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xa1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xa24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0xa28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xa2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0xa34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xa38u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[13] + 0x1e0u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x234u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xb8b96cu; rt_dispatch(c);
    c->r[2] = c->r[13] + 0x210u;
    c->r[3] = 0x0u;
    c->r[12] = c->r[5] + 0xab0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[0] = c->r[5] + 0xac0u;
    c->r[1] = c->r[7];
    c->r[14] = 0xb8b98cu; f_272ea8(c);
    goto L_b8c48c;
L_b8b990:;
    c->r[0] = 0xeae234u;
    { uint32_t ea = 0xb8b99cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[5] + 0xa70u;
    c->r[0] = c->r[13] + 0x230u;
    c->r[14] = 0xb8ba04u; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[13] + 0x250u;
    c->r[12] = c->r[13] + 0x230u;
    c->r[8] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[8] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0x9b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x9b8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x9bcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0x9c0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x9c4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0x9c8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x9ccu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x9d0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x9d4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0x9d8u; ST32(ea, c->r[9]); }
    c->r[8] = c->r[5] + 0xa90u;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x9dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xaa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0xaa4u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[8] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0xa80u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0xa84u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa74u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xa70u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0xa88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0xa78u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa40u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0xa44u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xa48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa4cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xa50u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xa54u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[5] + 0xa60u;
    { uint32_t ea = c->r[5] + 0xa58u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xa5cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x9e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[5] + 0x9e4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5] + 0x9e8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[5] + 0x9ecu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[5] + 0x9f0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x9f4u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5] + 0x9f8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x9fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[5] + 0xa00u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0xa04u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0xa08u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa0cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xa14u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xa18u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0xa1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa20u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xa24u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0xa28u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xa2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa30u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0xa34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xa38u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa3cu; ST32(ea, c->r[0]); }
    goto L_b8c48c;
L_b8bb6c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[2]; c->r[14] = 0xb8bb80u; rt_dispatch(c);
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x7cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    c->pc = c->r[2]; c->r[14] = 0xb8bb98u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x1e0u;
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x230u;
    c->r[14] = 0xb8bc24u; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x250u;
    c->r[8] = c->r[13] + 0x230u;
    c->r[9] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[8] = LD32(ea + 8u); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0x9b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9b4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x9c0u;
    { uint32_t ea = c->r[5] + 0x9b8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x9bcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[12]); }
    c->r[0] = c->r[5] + 0x9d0u;
    c->r[12] = c->r[13] + 0x1e0u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    c->r[14] = c->r[13] + 0x200u;
    c->r[8] = c->r[13] + 0x1f0u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x9dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[12]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[8] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0xa40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xa50u;
    { uint32_t ea = c->r[5] + 0xa48u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa4cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[9]); ST32(ea + 16u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0xa64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xa68u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0xad0u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8be88; }
    c->r[4] = c->r[5];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[7] = c->r[13] + 0x230u;
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[4] = c->r[4] + 0xab4u; c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x80u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[7];
    c->pc = c->r[3]; c->r[14] = 0xb8bcf0u; rt_dispatch(c);
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[13] + 0x1d0u;
    c->r[1] = c->r[7];
    c->r[14] = 0xb8bd08u; f_272ea8(c);
    c->r[3] = 0xac4u;
    c->r[2] = 0xac8u;
    c->r[1] = 0xaccu;
    c->r[0] = 0xab8u;
    c->v.s[6] = c->r[6];
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[10] = c->r[9];
    c->v.s[12] = c->r[8];
    c->r[3] = c->r[5] + c->r[3];
    c->r[2] = c->r[5] + c->r[2];
    c->r[1] = c->r[5] + c->r[1];
    c->r[0] = c->r[5] + c->r[0];
    c->v.s[28] = LD32(c->r[3]);
    c->r[3] = c->r[5] + 0xac0u;
    c->v.s[24] = LD32(c->r[2]);
    c->v.s[30] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[2] = c->r[5] + 0xab0u;
    c->v.s[26] = LD32(c->r[3]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.f[20] = c->v.f[10] - c->v.f[4];
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[18] = c->v.f[6] - c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[22] = c->v.f[12] - c->v.f[8];
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8bd8c; }
    c->r[14] = 0xb8bd88u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b8bd8c:;
    c->v.s[16] = 0x3f800000u;
    c->v.s[14] = LD32(c->r[13] + 464u);
    c->v.s[1] = LD32(c->r[13] + 468u);
    c->v.s[5] = LD32(c->r[13] + 476u);
    c->v.s[3] = LD32(c->r[13] + 472u);
    c->r[0] = 0xeaddecu;
    c->r[1] = 0xaf4u;
    c->r[2] = c->r[5] + 0xaf0u;
    c->r[1] = c->r[5] + c->r[1];
    c->v.s[6] = LD32(c->r[1]);
    c->v.f[2] = c->v.f[16] / c->v.f[2];
    { uint32_t ea = 0xb8bdc0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[0] + 12u);
    c->v.f[7] = c->v.f[30] * c->v.f[2];
    c->v.f[9] = c->v.f[28] * c->v.f[2];
    c->v.f[11] = c->v.f[26] * c->v.f[2];
    c->v.f[15] = c->v.f[24] * c->v.f[2];
    c->v.s[24] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[7] * c->v.f[1];
    c->v.f[13] = c->v.f[14] * c->v.f[7];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[5] * c->v.f[11]);
    c->v.f[4] = c->v.f[7] * c->v.f[3];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[3] * c->v.f[11]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[5] * c->v.f[15]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[1] * c->v.f[15]);
    c->v.f[2] = c->v.f[14] * c->v.f[11];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[14] * c->v.f[9]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[15]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[3] * c->v.f[9]);
    c->v.s[5] = LD32(c->r[2]);
    c->v.f[14] = c->v.f[16] - c->v.f[6];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[9]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[11]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[15]);
    c->v.f[7] = c->v.f[0] * c->v.f[12];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[13] * c->v.f[24]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[3] = c->v.f[14] * c->v.f[24];
    c->v.f[18] = c->v.f[18] * c->v.f[5];
    c->v.f[20] = c->v.f[20] * c->v.f[5];
    c->v.f[22] = c->v.f[22] * c->v.f[5];
    c->v.f[1] = c->v.f[13] * c->v.f[6];
    c->v.f[24] = c->v.f[14] * c->v.f[12];
    vfp_cmp_f(c, c->v.f[7], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b8bfcc; }
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[26] = c->v.f[3] - c->v.f[1];
    c->v.f[28] = c->v.f[14] * c->v.f[10];
    c->v.f[30] = c->v.f[14] * c->v.f[8];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[2] * c->v.f[6]);
    goto L_b8bfe4;
L_b8be88:;
    c->r[7] = c->r[13] + 0x150u;
    c->r[1] = c->r[5] + 0xa70u;
    c->r[0] = c->r[7];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[1]); }
    c->r[14] = 0xb8be9cu; f_4332ac(c);
    c->r[0] = c->r[13] + 0x230u;
    c->r[1] = c->r[13] + 0x1e0u;
    c->r[2] = c->r[7];
    c->r[14] = 0xb8beacu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x230u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = c->r[13] + 0x190u;
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x234u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x26cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x150u;
    c->r[14] = 0xb8bf38u; f_272ea8(c);
    c->r[1] = 0xeadc3cu;
    c->v.s[1] = LD32(c->r[13] + 336u);
    c->v.s[14] = LD32(c->r[13] + 340u);
    c->v.s[12] = LD32(c->r[13] + 344u);
    c->r[0] = 0xaf4u;
    c->v.s[4] = LD32(c->r[13] + 348u);
    c->v.s[22] = 0x3f800000u;
    c->v.s[18] = c->r[4];
    c->v.s[20] = c->r[7];
    c->v.s[16] = c->r[6];
    c->r[0] = c->r[5] + c->r[0];
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = 0xb8bf70u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[10] = c->v.f[22] - c->v.f[6];
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[3] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[1] + 12u);
    c->v.f[5] = c->v.f[0] * c->v.f[14];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[3] = c->v.f[10] * c->v.f[3];
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b8c204; }
    c->v.f[24] = c->v.f[10] * c->v.f[0];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[26] = c->v.f[3] - c->v.f[1];
    c->v.f[28] = c->v.f[10] * c->v.f[8];
    c->v.f[30] = c->v.f[10] * c->v.f[2];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[6] * c->v.f[4]);
    goto L_b8c220;
L_b8bfcc:;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[26] = c->v.f[1] + c->v.f[3];
    c->v.f[28] = c->v.f[14] * c->v.f[10];
    c->v.f[30] = c->v.f[14] * c->v.f[8];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[6]);
L_b8bfe4:;
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8c00c; }
    c->r[14] = 0xb8c008u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b8c00c:;
    c->v.f[4] = c->v.f[16] / c->v.f[2];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x190u;
    c->v.f[6] = c->v.f[28] * c->v.f[4];
    c->v.f[2] = c->v.f[24] * c->v.f[4];
    c->v.f[0] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = c->v.f[26] * c->v.f[4];
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[9] = c->v.f[4] + c->v.f[4];
    c->v.f[12] = c->v.f[2] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[9];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[9] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[14] = c->v.f[12] + c->v.f[6];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[11] = c->v.f[5] - c->v.f[10];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[10] = c->v.f[5] + c->v.f[10];
    c->v.f[14] = c->v.f[16] - c->v.f[14];
    c->v.f[6] = c->v.f[16] - c->v.f[6];
    c->v.f[2] = c->v.f[16] - c->v.f[4];
    ST32(c->r[13] + 400u, c->v.s[14]);
    ST32(c->r[13] + 404u, c->v.s[7]);
    ST32(c->r[13] + 408u, c->v.s[11]);
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 416u, c->v.s[1]);
    ST32(c->r[13] + 420u, c->v.s[6]);
    ST32(c->r[13] + 424u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 432u, c->v.s[10]);
    ST32(c->r[13] + 436u, c->v.s[0]);
    ST32(c->r[13] + 440u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0x9e0u;
    ST32(c->r[13] + 448u, c->v.s[22]);
    ST32(c->r[13] + 452u, c->v.s[20]);
    ST32(c->r[13] + 456u, c->v.s[18]);
    ST32(c->r[0], c->v.s[14]);
    c->r[0] = 0x9e4u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[1]);
    c->r[0] = 0x9e8u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[10]);
    c->r[0] = 0x9ecu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[22]);
    c->r[0] = c->r[5] + 0x9f0u;
    ST32(c->r[0], c->v.s[7]);
    c->r[0] = 0x9f4u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[6]);
    c->r[0] = 0x9f8u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x9fcu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[20]);
    c->r[0] = c->r[5] + 0xa00u;
    ST32(c->r[0], c->v.s[11]);
    c->r[0] = 0xa04u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[8]);
    c->r[0] = 0xa08u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0xa0cu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[18]);
    c->r[0] = c->r[13] + 0x150u;
    c->r[14] = 0xb8c158u; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x188u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x184u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x180u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0xa10u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5] + 0xa70u;
    { uint32_t ea = c->r[5] + 0xa14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xa20u;
    { uint32_t ea = c->r[5] + 0xa18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xa1cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[12]); }
    { uint32_t ea = c->r[5] + 0xa30u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa34u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0xa38u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xab0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xab4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xab8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[5] + 0xabcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xac0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xac4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xac8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaccu; ST32(ea, c->r[0]); }
    goto L_b8c40c;
L_b8c204:;
    c->v.f[24] = c->v.f[6] * c->v.f[14];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[26] = c->v.f[3] + c->v.f[1];
    c->v.f[28] = c->v.f[6] * c->v.f[12];
    c->v.f[30] = c->v.f[6] * c->v.f[4];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[10] * c->v.f[2]);
L_b8c220:;
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b8c248; }
    c->r[14] = 0xb8c244u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b8c248:;
    c->v.f[4] = c->v.f[22] / c->v.f[2];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x190u;
    c->v.f[6] = c->v.f[28] * c->v.f[4];
    c->v.f[2] = c->v.f[24] * c->v.f[4];
    c->v.f[0] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = c->v.f[26] * c->v.f[4];
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[9] = c->v.f[4] + c->v.f[4];
    ST32(c->r[13] + 336u, c->v.s[4]);
    ST32(c->r[13] + 340u, c->v.s[2]);
    ST32(c->r[13] + 344u, c->v.s[6]);
    ST32(c->r[13] + 348u, c->v.s[0]);
    c->v.f[14] = c->v.f[2] * c->v.f[10];
    c->v.f[12] = c->v.f[6] * c->v.f[8];
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[4] = c->v.f[4] * c->v.f[9];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[9] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[6] = c->v.f[14] + c->v.f[12];
    c->v.f[12] = c->v.f[4] + c->v.f[12];
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[11] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[10] = c->v.f[5] + c->v.f[10];
    c->v.f[6] = c->v.f[22] - c->v.f[6];
    c->v.f[8] = c->v.f[22] - c->v.f[12];
    c->v.f[12] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[22] - c->v.f[4];
    ST32(c->r[13] + 400u, c->v.s[6]);
    ST32(c->r[13] + 404u, c->v.s[7]);
    ST32(c->r[13] + 408u, c->v.s[11]);
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 416u, c->v.s[1]);
    ST32(c->r[13] + 420u, c->v.s[8]);
    ST32(c->r[13] + 424u, c->v.s[12]);
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 432u, c->v.s[10]);
    ST32(c->r[13] + 436u, c->v.s[0]);
    ST32(c->r[13] + 440u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xaf0u;
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[5] + 0x9e0u;
    c->v.f[14] = c->v.f[18] * c->v.f[4];
    c->v.f[3] = c->v.f[20] * c->v.f[4];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    ST32(c->r[13] + 448u, c->v.s[14]);
    ST32(c->r[13] + 452u, c->v.s[3]);
    ST32(c->r[13] + 456u, c->v.s[4]);
    ST32(c->r[0], c->v.s[6]);
    c->r[0] = 0x9e4u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[1]);
    c->r[0] = 0x9e8u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[10]);
    c->r[0] = 0x9ecu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[14]);
    c->r[0] = c->r[5] + 0x9f0u;
    ST32(c->r[0], c->v.s[7]);
    c->r[0] = 0x9f4u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[8]);
    c->r[0] = 0x9f8u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x9fcu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[3]);
    c->r[0] = c->r[5] + 0xa00u;
    ST32(c->r[0], c->v.s[11]);
    c->r[0] = 0xa04u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[12]);
    c->r[0] = 0xa08u;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0xa0cu;
    c->r[0] = c->r[5] + c->r[0];
    ST32(c->r[0], c->v.s[4]);
    c->r[0] = c->r[13] + 0x230u;
    c->r[14] = 0xb8c3b8u; f_4332ac(c);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x250u;
    c->r[8] = c->r[13] + 0x230u;
    c->r[9] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[14]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[8]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[8] = LD32(ea + 8u); }
    { uint32_t ea = c->r[9]; c->r[0] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[9] = LD32(ea + 8u); }
    { uint32_t ea = c->r[5] + 0xa10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5] + 0xa20u;
    { uint32_t ea = c->r[5] + 0xa18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa1cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); ST32(ea + 12u, c->r[12]); }
    c->r[0] = c->r[5] + 0xa30u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b8c40c:;
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa74u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa8cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa98u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xa9cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x21cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xaacu; ST32(ea, c->r[0]); }
L_b8c48c:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] | 0x2u;
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8c500; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x31au;
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
    c->r[1] = 0x1ad4u;
    c->r[2] = 0x1ad8u;
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[10] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_b8c500:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x2u;
    c->r[14] = 0xb8c514u; f_a6a438(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] - 0x1u;
    c->r[3] = 0x0u - c->r[0];
    c->r[1] = c->r[1] + c->r[2];
    c->r[0] = c->r[1] & c->r[3];
    c->r[1] = 0xfffcu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x30000u;
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[1] & (c->r[4] << 2);
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[10] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] & c->r[3];
    c->r[6] = c->r[1] + 0xfu;
    c->r[6] = c->r[6] & 0xfffffff0u;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[1], c->r[2]);
    if (COND_LS) { goto L_b8c568; }
    c->r[0] = c->r[10];
    c->r[1] = c->r[6];
    c->r[14] = 0xb8c564u; f_a82674(c);
    { uint32_t ea = c->r[10] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8c568:;
    c->r[1] = c->r[0] + c->r[6];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[10] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x1ad4u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x1u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_b8c888; }
    { uint32_t ea = c->r[5] + 0x9b0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[6] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x9b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9bcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9ccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9d0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9d4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9d8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9dcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x2cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x9e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x9e8u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0x9ecu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5] + 0x9f0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5] + 0x9f4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x9f8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0x9fcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xa00u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa04u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xa08u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0xa0cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[8]); }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x30u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x34u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0] + 0x38u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x3cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[0] + 0x40u; ST32(ea, c->r[12]); }
    c->r[12] = c->r[0] + 0x44u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[7]); }
    c->r[2] = c->r[0] + 0x50u;
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa18u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xa1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xa20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0xa24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0xa28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xa30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa34u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xa38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xa3cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[4]); }
    c->r[4] = 0x3f800000u;
    c->r[12] = c->r[0] + 0x64u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x60u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[10]); ST32(ea + 16u, c->r[14]); }
    c->r[12] = c->r[0] + 0x78u;
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x88u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa48u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[5] + 0xa4cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[5] + 0xa50u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[5] + 0xa54u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[5] + 0xa58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0xa5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0xa60u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[5] + 0xa64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[5] + 0xa68u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5] + 0xa6cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[4]); }
    c->r[4] = 0x3f800000u;
    c->r[12] = c->r[0] + 0x94u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x90u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[9]); ST32(ea + 12u, c->r[10]); }
    c->r[12] = c->r[0] + 0xa8u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0xa4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[0] + 0xb8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b8c888:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3];
    c->r[0] = c->r[0] & 0xfffffffdu;
    { uint32_t ea = c->r[10] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x1fe00000u;
    c->r[7] = c->r[2] & c->r[0];
    c->r[0] = 0xe061u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xcc1f0000u;
    { uint32_t sc = 0; uint32_t r = c->r[7] ^ 0x800000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8c8d0; }
    c->r[7] = 0xfffeu;
    c->r[7] = (c->r[7] & 0xFFFFu) | 0xe01f0000u;
    c->r[2] = c->r[2] & c->r[7];
    c->r[2] = c->r[2] | 0x1u;
    c->r[2] = c->r[2] | 0x800000u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[1]); }
L_b8c8d0:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_EQ) { goto L_b8c94c; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8c940; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[1] = c->r[1] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[1] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[1] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
L_b8c940:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b8c94c:;
    { uint32_t ea = c->r[5] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_b8c978; }
    { uint32_t ea = c->r[10] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_b8c978; }
    { uint32_t ea = c->r[10] + 0x134u; uint32_t v = LD8(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x8u);
    if (COND_EQ) { goto L_b8c9bc; }
L_b8c978:;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b8c9a0; }
    c->r[1] = 0xeb2628u;
    c->r[2] = 0xeb2628u;
    { uint32_t ea = 0xb8c990u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xb8c994u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + c->r[1];
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
L_b8c9a0:;
    { uint32_t ea = c->r[10] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = 0x8u;
    { uint32_t ea = c->r[10] + 0x134u; ST8(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[10] + 0x138u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x150u; ST32(ea, c->r[0]); }
L_b8c9bc:;
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[5];
    c->pc = c->r[1]; c->r[14] = 0xb8c9ccu; rt_dispatch(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_b8ca80; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x28c0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_b8ca80; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_b8ca58; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[3] = 0x517u;
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
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b8ca58:;
    c->r[1] = 0x28c0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x7518u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xd3d30000u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[0] = 0x2ac0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
L_b8ca80:;
    c->r[4] = 0x0u;
    c->r[2] = c->r[13] + 0x228u;
    c->r[0] = c->r[10];
    c->r[1] = 0x2u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[4]); }
    c->r[14] = 0xb8caa0u; f_a8487c(c);
    { uint32_t ea = c->r[5] + 0xad8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[6] << 2);
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[4]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 16) & 0x7fffu;
    c->r[1] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[10];
    c->r[14] = 0xb8cadcu; f_a7fc58(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xb8cae4u; f_a826fc(c);
    c->r[0] = c->r[10];
    c->r[1] = 0x4u;
    c->r[2] = 0x0u;
    c->r[14] = 0xb8caf4u; f_b3eff4(c);
    c->r[0] = c->r[10];
    c->r[14] = 0xb8cafcu; f_a82760(c);
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
