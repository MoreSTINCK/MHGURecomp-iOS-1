#include "cpu.h"
#include "neon_rt.h"
void f_db480c(Cpu *restrict c) {
    FN_ENTER(0xdb480cu);
L_db480c:;
    { uint32_t ea = c->r[13] - 8u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[14]); c->r[13] = c->r[13] - 8u; }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = 0x0u;
    { uint32_t r = c->r[12] & 0x8u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[2] = v; } }
    if (COND_EQ) { { uint32_t r = c->r[2] & 0x10u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_db4990; }
L_db4828:;
    c->r[2] = 0x494cu;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[4] = v; }
    c->r[2] = 0xb6c4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x4748u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[4], c->r[2]);
    if (COND_EQ) { goto L_db48e0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db48b4; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[4] + (c->r[4] << 1);
    c->r[4] = 0x8e9u;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[14] = (c->r[14] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[2] = c->r[2] + (c->r[4] << 2);
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_db48b4:;
    c->r[2] = 0x4748u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
    c->r[2] = 0x4950u;
    c->r[3] = 0x8e9u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[3]); }
L_db48e0:;
    c->r[4] = 0x4768u;
    c->r[2] = 0x496cu;
    c->r[3] = c->r[1];
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[2] = v; }
    { uint32_t ea = c->r[12] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[2], c->r[4]);
    if (COND_EQ) { { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4960; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[4] + (c->r[4] << 1);
    c->r[4] = 0x8edu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[14] = (c->r[14] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[12] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[2] = c->r[2] + (c->r[4] << 2);
    { uint32_t ea = c->r[3]; c->r[4] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_db4960:;
    c->r[2] = 0x4768u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[2]); }
L_db496c:;
    c->r[2] = 0x4970u;
    c->r[3] = 0x8edu;
L_db4974:;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[3]); }
L_db498c:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 8u; c->r[4] = LD32(ea + 0u); c->pc = LD32(ea + 4u); } return;
L_db4990:;
    c->r[0] = c->r[3] - 0x3u;
    (void)f_subs(c, c->r[0], 0x9u);
    if (COND_HI) { goto L_db49b0; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[2] = 0x3c1u;
    c->r[3] = 0x1u;
    { uint32_t r = c->r[3] & shc_lsr(c, c->r[2], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_db49d8; }
L_db49b0:;
    c->r[2] = 0xabd2c0u;
    c->r[0] = (c->r[12] >> 5) & 0x7ffu;
    c->r[2] = 0xdb49c0u + c->r[2];
    { uint32_t ea = c->r[2] + (c->r[0] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_EQ) { goto L_db4b28; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_EQ) { goto L_db4c84; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_db4828; }
L_db49d8:;
    c->r[2] = 0x494cu;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb6c4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[2] = 0x4758u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { goto L_db4a94; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4a64; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x8e9u;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[14] = v; }
    c->r[14] = (c->r[14] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[12] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[12] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_db4a64:;
    c->r[2] = 0x4758u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[2]); }
    c->r[2] = 0x38ebu;
    c->r[0] = 0x4950u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0x10c60000u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[2]); }
L_db4a94:;
    c->r[0] = 0x496cu;
    c->r[14] = c->r[1];
    { uint32_t ea = c->r[14] + c->r[0]; uint32_t v = LD32(ea); c->r[14] = ea; c->r[2] = v; }
    c->r[0] = 0x4768u;
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x2u;
    (void)f_subs(c, c->r[2], c->r[3]);
    if (COND_EQ) { goto L_db498c; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4b18; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[4] = 0x8edu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = (c->r[3] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[14]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[12] = v; }
L_db4b18:;
    c->r[2] = 0x4768u;
    { uint32_t ea = c->r[12] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[2]); }
    goto L_db496c;
L_db4b28:;
    c->r[2] = 0x494cu;
    c->r[0] = c->r[1];
    c->r[4] = 0x4750u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb6c4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_db4be4; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4bb4; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x8e9u;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_db4bb4:;
    c->r[3] = 0x4750u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[3] = 0x8eau;
    c->r[0] = 0x4950u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x77de0000u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[3]); }
L_db4be4:;
    c->r[0] = 0x496cu;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[4] = v; }
    c->r[0] = 0x4770u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x1u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_EQ) { goto L_db498c; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4c68; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[14] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x8edu;
    { uint32_t ea = c->r[2] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[14] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[12]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_db4c68:;
    c->r[3] = 0x4770u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0xd8eeu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xcdc80000u;
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    c->r[2] = 0x4970u;
    goto L_db4974;
L_db4c84:;
    c->r[2] = 0x494cu;
    c->r[0] = c->r[1];
    c->r[4] = 0x4760u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    c->r[2] = 0xb6c4u;
    c->r[2] = (c->r[2] & 0xFFFFu) | 0xffff0000u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[3], c->r[4]);
    if (COND_EQ) { goto L_db4d40; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4d10; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[12] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x8e9u;
    { uint32_t ea = c->r[2] + (c->r[12] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[12] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[0]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_db4d10:;
    c->r[3] = 0x4760u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[3]); }
    c->r[3] = 0x18ecu;
    c->r[0] = 0x4950u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0xc4420000u;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[3]); }
L_db4d40:;
    c->r[0] = 0x496cu;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[12] + c->r[0]; uint32_t v = LD32(ea); c->r[12] = ea; c->r[4] = v; }
    c->r[0] = 0x4768u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = 0x3u;
    (void)f_subs(c, c->r[4], c->r[3]);
    if (COND_EQ) { goto L_db498c; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[3] = v; }
    { uint32_t r = c->r[3] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4dc4; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[14] = c->r[3] + (c->r[3] << 1);
    c->r[3] = 0x8edu;
    { uint32_t ea = c->r[2] + (c->r[14] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = (c->r[4] & 0x80000000u) | ((c->r[3] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[14] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[12]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
L_db4dc4:;
    c->r[3] = 0x4768u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[12]; ST32(ea, c->r[2]); }
    goto L_db496c;
}
