#include "cpu.h"
#include "neon_rt.h"
void f_db2b0c(Cpu *c);
void f_db480c(Cpu *c);
void f_db4dd8(Cpu *c);
void f_db0d30(Cpu *restrict c) {
    FN_ENTER(0xdb0d30u);
L_db0d30:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[13] = c->r[13] - 0x14u;
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[3]); }
    c->r[9] = c->r[2];
    c->r[10] = c->r[1];
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[0]); }
    c->r[12] = 0xbaf3u;
    { uint32_t ea = c->r[10] + 0x1d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x53e90000u;
    { uint32_t r = c->r[8] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_db0dc8; }
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[6] = v; }
    c->r[2] = c->r[8] & 0x1fu;
    c->r[14] = 0xdb15u;
    { uint32_t ea = c->r[1] + 4u; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    c->r[2] = c->r[2] - 0x11u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xdea60000u;
    (void)f_subs(c, c->r[2], 0x1u);
    c->r[5] = c->r[3] & 0xff00u;
    if (COND_HI) { goto L_db0e10; }
    (void)f_subs(c, c->r[0], c->r[14]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[5] ^ 0x100u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_db0da0; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_EQ) { goto L_db0e50; }
L_db0da0:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    c->r[3] = (c->r[3] & 0xffff00ffu) | ((c->r[0] << 8) & 0xff00u);
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[12]); }
    c->r[1] = 0xb15u;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x10000u;
    goto L_db0e44;
L_db0dc8:;
    { uint32_t ea = c->r[1] + 0x164u; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[5] = 0x9b16u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xd2650000u;
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[6] & 0xff00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_db0df4; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_EQ) { goto L_db0e50; }
L_db0df4:;
    c->r[6] = c->r[6] & 0xffff00ffu;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[12]); }
    c->r[1] = 0xb16u;
    goto L_db0e40;
L_db0e10:;
    (void)f_subs(c, c->r[0], c->r[14]);
    if (COND_EQ) { (void)f_subs(c, c->r[5], 0x0u); }
    if (COND_NE) { goto L_db0e28; }
    { uint32_t ea = c->r[10] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[12]);
    if (COND_EQ) { goto L_db0e50; }
L_db0e28:;
    c->r[3] = c->r[3] & 0xffff00ffu;
    { uint32_t ea = c->r[10] + 0x1d8u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x1dcu; ST32(ea, c->r[12]); }
    c->r[1] = 0xb15u;
L_db0e40:;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db0e44:;
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
L_db0e50:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = c->r[7] & 0x40000u;
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xdb0e6cu; f_db2b0c(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[6];
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[3] = c->r[5];
    c->r[14] = 0xdb0e84u; f_db480c(c);
    c->r[1] = 0x48fcu;
    c->r[4] = c->r[10];
    { uint32_t ea = c->r[9] + 0x5u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[2] = v; }
    c->r[1] = 0xb714u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[3] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_db0f34; }
    c->r[3] = 0x46f8u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db0fd8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db0f1c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[6] = 0x8dfu;
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
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_db0f1c:;
    c->r[2] = 0x46f8u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4900u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x8dfu;
    goto L_db0fc0;
L_db0f34:;
    c->r[3] = 0x4700u;
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db0fd8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db0fa8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[6] = 0x8dfu;
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
    { uint32_t ea = c->r[4]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_db0fa8:;
    c->r[2] = 0x4700u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x4900u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[1]); }
    c->r[1] = 0x8e0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x5cb0000u;
L_db0fc0:;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db0fd8:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[11] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[7]); }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[8] = c->r[7] & 0x4000000u;
    { uint32_t ea = c->r[11]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[11];
    c->pc = c->r[6]; c->r[14] = 0xdb100cu; rt_dispatch(c);
    c->r[0] = c->r[11];
    c->r[1] = c->r[10];
    c->r[2] = c->r[9];
    c->r[3] = c->r[5];
    c->r[14] = 0xdb1020u; f_db4dd8(c);
    c->r[0] = 0x4164u;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0xbeacu;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { goto L_db10d0; }
    c->r[3] = 0x3f60u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1174; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db10b8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x7ecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_db10b8:;
    c->r[2] = 0x3f60u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4168u;
    c->r[2] = 0x7ecu;
    goto L_db115c;
L_db10d0:;
    c->r[3] = 0x3f68u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1174; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1144; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x7ecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_db1144:;
    c->r[2] = 0x3f68u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xd7edu;
    c->r[1] = 0x4168u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x62170000u;
L_db115c:;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1174:;
    c->r[2] = 0x4a1cu;
    c->r[1] = c->r[10];
    c->r[11] = c->r[4];
    (void)f_subs(c, c->r[8], 0x0u);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_NE) { goto L_db1218; }
    c->r[3] = 0x4818u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db12bc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1200; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x903u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_db1200:;
    c->r[2] = 0x4818u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4a20u;
    c->r[2] = 0x903u;
    goto L_db12a4;
L_db1218:;
    c->r[3] = 0x4820u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db12bc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db128c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x903u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
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
L_db128c:;
    c->r[2] = 0x4820u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x1904u;
    c->r[1] = 0x4a20u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf2120000u;
L_db12a4:;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db12bc:;
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] & 0x1fu;
    c->r[7] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[7], 0x11u);
    if (COND_HI) { goto L_db2a24; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = (c->r[7] << 2);
    c->r[6] = 0xdb12e0u + 0x48u;
    c->r[4] = 0xe8d7u;
    c->r[14] = 0x2908u;
    c->r[5] = 0x4048u;
    c->r[9] = 0xd906u;
    c->r[8] = 0x204au;
    c->r[12] = 0x27f8u;
    c->r[2] = 0x491fu;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xfe110000u;
    c->r[14] = (c->r[14] & 0xFFFFu) | 0xda5e0000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xccc70000u;
    c->r[9] = (c->r[9] & 0xFFFFu) | 0xb21a0000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x55ce0000u;
    c->r[12] = (c->r[12] & 0xFFFFu) | 0x4e8a0000u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10fa0000u;
    c->r[3] = c->r[1] & 0x400000u;
    c->r[1] = 0xa04bu;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x814b0000u;
    c->pc = c->r[7] + c->r[6]; switch (c->pc) { case 0xdb1370u: goto L_db1370; case 0xdb14b4u: goto L_db14b4; case 0xdb1730u: goto L_db1730; case 0xdb17d8u: goto L_db17d8; case 0xdb19b0u: goto L_db19b0; case 0xdb1a54u: goto L_db1a54; case 0xdb1ba4u: goto L_db1ba4; case 0xdb1f0cu: goto L_db1f0c; case 0xdb2a24u: goto L_db2a24; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_db1370:;
    c->r[7] = 0x46a8u;
    c->r[3] = 0x48acu;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_db141c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db13f0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x8d5u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db13f0:;
    c->r[3] = 0x46a8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x48b0u;
    c->r[3] = 0x8d5u;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[3]); }
L_db141c:;
    c->r[7] = 0x46c8u;
    c->r[3] = 0x48ccu;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_db160c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db149c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x8d9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db149c:;
    c->r[3] = 0x46c8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x48d0u;
    c->r[3] = 0x8d9u;
    goto L_db15f4;
L_db14b4:;
    c->r[7] = 0x48e8u;
    c->r[3] = 0x4aecu;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_db1560; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1534; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x91du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db1534:;
    c->r[3] = 0x48e8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x4af0u;
    c->r[3] = 0x91du;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[3]); }
L_db1560:;
    c->r[7] = 0x48c8u;
    c->r[3] = 0x4accu;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_db160c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db15e0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x919u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db15e0:;
    c->r[3] = 0x48c8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[3]); }
    c->r[2] = 0x4ad0u;
    c->r[3] = 0x919u;
L_db15f4:;
    { uint32_t ea = c->r[10] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[3]); }
L_db160c:;
    c->r[7] = 0x3fb8u;
    c->r[3] = 0x41bcu;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_db16c0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1694; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x7f7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db1694:;
    c->r[3] = 0x3fb8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x41c0u;
    c->r[2] = 0x7f7u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db16c0:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_db2a24; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1728; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_db1728:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[1]); }
    goto L_db2a10;
L_db1730:;
    c->r[2] = 0x48acu;
    c->r[1] = c->r[10];
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_NE) { goto L_db22d4; }
    c->r[3] = 0x46b0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db2370; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db17b8; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d5u;
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
L_db17b8:;
    c->r[2] = 0x46b0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xf8d6u;
    c->r[1] = 0x48b0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xa71c0000u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    goto L_db235c;
L_db17d8:;
    c->r[7] = 0x46b8u;
    c->r[2] = 0x48acu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[2], c->r[7]);
    if (COND_EQ) { goto L_db1880; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1858; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x8d5u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db1858:;
    c->r[2] = 0x46b8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x48b0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1880:;
    c->r[2] = 0x48ccu;
    c->r[1] = c->r[10];
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    if (COND_NE) { goto L_db240c; }
    c->r[3] = 0x46d8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1938; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1908; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d9u;
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
L_db1908:;
    c->r[2] = 0x46d8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0xf8dbu;
    c->r[0] = 0x48d0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x89110000u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db1938:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5049u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x28180000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_db2530; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db19a8; }
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
L_db19a8:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[0]); }
    goto L_db251c;
L_db19b0:;
    c->r[7] = 0x4aecu;
    c->r[1] = c->r[10];
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[1] + c->r[7]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[7] = v; }
    if (COND_NE) { goto L_db25e8; }
    c->r[2] = 0x48f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[7], c->r[2]);
    if (COND_EQ) { goto L_db2684; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1a38; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x91du;
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
L_db1a38:;
    c->r[2] = 0x48f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x691eu;
    c->r[1] = 0x4af0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x47790000u;
    goto L_db266c;
L_db1a54:;
    c->r[7] = 0x48f8u;
    c->r[3] = 0x4aecu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_EQ) { goto L_db1afc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1ad4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x91du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db1ad4:;
    c->r[3] = 0x48f8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x4af0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1afc:;
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = 0x4accu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_LT) { goto L_db2858; }
    c->r[3] = 0x48d8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db28fc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1b88; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x919u;
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
L_db1b88:;
    c->r[2] = 0x48d8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x691bu;
    c->r[1] = 0x4ad0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x2de90000u;
    goto L_db28e4;
L_db1ba4:;
    c->r[3] = 0x46e8u;
    c->r[2] = 0x48ccu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1c54; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1c24; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[5] = 0x8d9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
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
L_db1c24:;
    c->r[2] = 0x46e8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xf8ddu;
    c->r[1] = 0x48d0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xc0b30000u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1c54:;
    c->r[3] = 0x3fc0u;
    c->r[2] = 0x41bcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1cfc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1cd4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[5] = 0x7f7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
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
L_db1cd4:;
    c->r[2] = 0x3fc0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x41c0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1cfc:;
    c->r[3] = 0x46b8u;
    c->r[2] = 0x48acu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1da4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1d7c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d5u;
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
L_db1d7c:;
    c->r[2] = 0x46b8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x48b0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1da4:;
    c->r[3] = 0x4830u;
    c->r[2] = 0x4a2cu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1e4c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1e24; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x905u;
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
L_db1e24:;
    c->r[2] = 0x4830u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4a30u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1e4c:;
    c->r[3] = 0x4840u;
    c->r[2] = 0x4a3cu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1ef4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1ecc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x907u;
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
L_db1ecc:;
    c->r[2] = 0x4840u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4a40u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db1ef4:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x5046u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0x64430000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_NE) { goto L_db2270; }
    goto L_db2a24;
L_db1f0c:;
    c->r[3] = 0x46f0u;
    c->r[2] = 0x48ccu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db1fbc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db1f8c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[5] = 0x8d9u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
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
L_db1f8c:;
    c->r[2] = 0x46f0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x38deu;
    c->r[1] = 0x48d0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf5040000u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db1fbc:;
    c->r[3] = 0x3fc0u;
    c->r[2] = 0x41bcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db2064; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db203c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[5] = 0x7f7u;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[2] = c->r[2] + (c->r[2] << 1);
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
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
L_db203c:;
    c->r[2] = 0x3fc0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x41c0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db2064:;
    c->r[3] = 0x46b8u;
    c->r[2] = 0x48acu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db210c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db20e4; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d5u;
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
L_db20e4:;
    c->r[2] = 0x46b8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x48b0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db210c:;
    c->r[3] = 0x4830u;
    c->r[2] = 0x4a2cu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db21b4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db218c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x905u;
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
L_db218c:;
    c->r[2] = 0x4830u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x4a30u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db21b4:;
    c->r[3] = 0x4840u;
    c->r[2] = 0x4a3cu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db225c; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2234; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x907u;
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
L_db2234:;
    c->r[2] = 0x4840u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x4a40u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db225c:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x9047u;
    c->r[0] = (c->r[0] & 0xFFFFu) | 0xed020000u;
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_EQ) { goto L_db2a24; }
L_db2270:;
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db22cc; }
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
L_db22cc:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[0]); }
    goto L_db2a10;
L_db22d4:;
    c->r[3] = 0x46b8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db2370; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2348; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d5u;
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
L_db2348:;
    c->r[2] = 0x46b8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[1] = 0x48b0u;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[4]); }
L_db235c:;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db2370:;
    c->r[3] = 0x46e0u;
    c->r[2] = 0x48ccu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db2734; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db23f0; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d9u;
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
L_db23f0:;
    c->r[2] = 0x46e0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x68dcu;
    c->r[1] = 0x48d0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xd5990000u;
    goto L_db271c;
L_db240c:;
    c->r[3] = 0x46d0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db24b0; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2480; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x8d9u;
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
L_db2480:;
    c->r[2] = 0x46d0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x78dau;
    c->r[0] = 0x48d0u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0x192f0000u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db24b0:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_db2530; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2518; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_db2518:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[5]); }
L_db251c:;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
L_db2530:;
    c->r[1] = 0x41bcu;
    c->r[0] = c->r[10];
    c->r[3] = 0x3fc0u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[2] = v; }
    c->r[1] = 0xbe54u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db2a24; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db25bc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[10] + 0xecu;
    c->r[7] = 0x7f7u;
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
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
L_db25bc:;
    c->r[2] = 0x3fc0u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[0] = 0x41c0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
    goto L_db2a24;
L_db25e8:;
    c->r[3] = 0x48f8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_db2684; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db265c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[6] = 0x91du;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[6] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[0] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] & 0x7fffffffu;
    { uint32_t ea = c->r[0] + (c->r[3] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[0] = c->r[0] + (c->r[3] << 2);
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[7] = LD32(ea + 4u); }
    { uint32_t ea = c->r[0] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[7]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db265c:;
    c->r[3] = 0x48f8u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[3]); }
    c->r[1] = 0x4af0u;
L_db266c:;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db2684:;
    c->r[3] = 0x48d0u;
    c->r[2] = 0x4accu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db2734; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2704; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x919u;
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
L_db2704:;
    c->r[2] = 0x48d0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0x91au;
    c->r[1] = 0x4ad0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xf8bd0000u;
L_db271c:;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db2734:;
    c->r[3] = 0x3fb8u;
    c->r[2] = 0x41bcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db27e8; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db27bc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x7f7u;
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
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] + (c->r[2] << 1);
    c->r[0] = c->r[0] + (c->r[2] << 2);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
L_db27bc:;
    c->r[2] = 0x3fb8u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x41c0u;
    c->r[1] = 0x7f7u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db27e8:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_EQ) { goto L_db2a24; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2850; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_db2850:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[8]); }
    goto L_db2a10;
L_db2858:;
    c->r[3] = 0x48e0u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db28fc; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db28cc; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x919u;
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
L_db28cc:;
    c->r[2] = 0x48e0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[2]); }
    c->r[2] = 0xe91cu;
    c->r[1] = 0x4ad0u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xacb70000u;
L_db28e4:;
    { uint32_t ea = c->r[10] + c->r[1]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[2]); }
L_db28fc:;
    c->r[3] = 0x3fc0u;
    c->r[2] = 0x41bcu;
    c->r[1] = c->r[10];
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db29a4; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db297c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[7] = 0x7f7u;
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
L_db297c:;
    c->r[2] = 0x3fc0u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x41c0u;
    { uint32_t ea = c->r[10] + c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
L_db29a4:;
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_db2a24; }
    { uint32_t ea = c->r[10] + 0x54u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2a0c; }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xecu;
    c->r[0] = c->r[0] + 0x30c00u;
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] & 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] | 0x80000000u;
    { uint32_t ea = c->r[0] + (c->r[1] << 2); ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[10] + 0x1c8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] + (c->r[1] << 1);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[10] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[10] + 0x64u; ST32(ea, c->r[0]); }
L_db2a0c:;
    { uint32_t ea = c->r[10] + 0x1c8u; ST32(ea, c->r[5]); }
L_db2a10:;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + 0x158u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[10] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x154u; ST32(ea, c->r[0]); }
L_db2a24:;
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = ~0x0u;
    c->v.s[0] = LD32(c->r[1] + 296u);
    c->r[1] = 0x6u;
    c->r[1] = (c->r[1] & 0xFFFFu) | 0xffe00000u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_db2ab4; }
    c->v.s[2] = 0x437f0000u;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[2] = v; }
    c->r[3] = 0x7f8u;
    c->r[5] = 0x20u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x100000u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x100000u;
    c->r[6] = c->r[2] & c->r[3];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t r = c->r[6] ^ c->r[5]; c->nf = r >> 31; c->zf = r == 0; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->v.s[0];
    if (COND_NE) { goto L_db2a98; }
    { uint32_t sc = 0; uint32_t r = c->r[2] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2a98; }
    c->r[6] = (c->r[2] >> 11);
    c->r[5] = (uint32_t)(uint8_t)(c->r[3]);
    c->r[6] = c->r[6] | (c->r[7] << 21);
    c->r[6] = (uint32_t)(uint8_t)(c->r[6]);
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db2afc; }
L_db2a98:;
    c->r[1] = c->r[2] & c->r[1];
    c->r[2] = 0x21u;
    c->r[0] = c->r[7] & c->r[0];
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x180000u;
    c->r[2] = (c->r[2] & 0xfff807ffu) | ((c->r[3] << 11) & 0x7f800u);
    c->r[1] = c->r[2] | c->r[1];
    goto L_db2af4;
L_db2ab4:;
    { uint32_t ea = c->r[10] + 0x154u; uint32_t v = LD32(ea); c->r[10] = ea; c->r[2] = v; }
    c->r[3] = 0xfff8u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x1f0000u;
    c->r[7] = c->r[2] & c->r[3];
    c->r[3] = 0x38u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x80000u;
    { uint32_t r = c->r[7] ^ c->r[3]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2afc; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[1] = c->r[2] & c->r[1];
    c->r[2] = f_adds(c, c->r[3], 0x1u);
    c->r[1] = c->r[1] | c->r[2];
    c->r[2] = 0x0u;
    c->r[2] = c->r[2] + 0x0u + c->cf;
    c->r[0] = c->r[7] & c->r[0];
    c->r[0] = c->r[0] | c->r[2];
L_db2af4:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[10] + 0x4u; ST32(ea, c->r[0]); }
L_db2afc:;
    c->r[0] = c->r[11];
    c->r[13] = c->r[13] + 0x14u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
