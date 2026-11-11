#include "cpu.h"
#include "neon_rt.h"
void f_db2b0c(Cpu *restrict c) {
    FN_ENTER(0xdb2b0cu);
L_db2b0c:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[0];
    c->r[0] = 0x7u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x80000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x1u; }
    if (COND_EQ) { { uint32_t sc = 1; uint32_t r = c->r[7] & 0x80000020u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_EQ) { goto L_db2d4c; }
L_db2b2c:;
    c->r[12] = 0x18e4u;
    c->r[8] = 0x98e2u;
    c->r[9] = c->r[0] & 0xfu;
    c->r[14] = c->r[1];
    c->r[12] = (c->r[12] & 0xFFFFu) | 0xc0e10000u;
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x5e830000u;
    (void)f_subs(c, c->r[9], 0x2u);
    if (COND_EQ) { goto L_db2d9c; }
    (void)f_subs(c, c->r[9], 0x8u);
    if (COND_EQ) { goto L_db2f8c; }
    (void)f_subs(c, c->r[9], 0x4u);
    if (COND_NE) { goto L_db3178; }
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    c->r[7] = 0x4710u;
    c->r[4] = 0x48fcu;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_EQ) { goto L_db2c08; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2be0; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[5] = 0x8e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = (c->r[7] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db2be0:;
    c->r[4] = 0x4710u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4910u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db2c08:;
    c->r[5] = 0x4740u;
    c->r[4] = 0x493cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db2cb8; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2c88; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e7u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db2c88:;
    c->r[4] = 0x4740u;
    c->r[5] = 0x98e8u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x9e8d0000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4940u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db2cb8:;
    c->r[5] = 0x4730u;
    c->r[4] = 0x491cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3380; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2d38; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e3u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db2d38:;
    c->r[4] = 0x4730u;
    c->r[5] = 0xe8e6u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x6d070000u;
    goto L_db3360;
L_db2d4c:;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x800u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_db47e4; }
    c->r[3] = 0x1u;
    c->r[0] = 0xcu;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x200000u;
    c->r[6] = c->r[7] & c->r[3];
    (void)f_subs(c, c->r[6], c->r[3]);
    if (COND_EQ) { goto L_db2b2c; }
    { uint32_t r = c->r[7] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_db47f4; }
    c->r[0] = 0x9u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x200000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x4u; }
    if (COND_EQ) { { uint32_t sc = 0; uint32_t r = c->r[7] & 0x400u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_db2b2c; }
    c->r[0] = 0x8u;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x100000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x2u; }
    if (COND_EQ) { c->r[0] = c->r[0] & (c->r[7] >> 8); }
    goto L_db2b2c;
L_db2d9c:;
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    c->r[5] = 0x4710u;
    c->r[4] = 0x48fcu;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db2e48; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2e20; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db2e20:;
    c->r[4] = 0x4710u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4910u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db2e48:;
    c->r[5] = 0x4738u;
    c->r[4] = 0x493cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db2ef4; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2ec8; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e7u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db2ec8:;
    c->r[4] = 0x4738u;
    c->r[5] = 0x8e7u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4940u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db2ef4:;
    c->r[5] = 0x4720u;
    c->r[4] = 0x491cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3380; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db2f74; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e3u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db2f74:;
    c->r[4] = 0x4720u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4920u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[12]); }
    goto L_db336c;
L_db2f8c:;
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    c->r[5] = 0x4710u;
    c->r[4] = 0x48fcu;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3038; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3010; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3010:;
    c->r[4] = 0x4710u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4910u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3038:;
    c->r[5] = 0x4738u;
    c->r[4] = 0x493cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db30e4; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db30b8; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e7u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db30b8:;
    c->r[4] = 0x4738u;
    c->r[5] = 0x8e7u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4940u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db30e4:;
    c->r[5] = 0x4728u;
    c->r[4] = 0x491cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3380; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3164; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e3u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3164:;
    c->r[4] = 0x4728u;
    c->r[5] = 0xe8e5u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x86950000u;
    goto L_db3360;
L_db3178:;
    { uint32_t ea = c->r[14] + 0x10u; uint32_t v = LD32(ea); c->r[14] = ea; c->r[3] = v; }
    c->r[5] = 0x4738u;
    c->r[4] = 0x492cu;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3228; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db31fc; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e7u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db31fc:;
    c->r[4] = 0x4738u;
    c->r[5] = 0x8e7u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4940u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3228:;
    c->r[5] = 0x4708u;
    c->r[4] = 0x490cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db32d4; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db32a8; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db32a8:;
    c->r[4] = 0x4708u;
    c->r[5] = 0x8e1u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4910u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db32d4:;
    c->r[5] = 0x4718u;
    c->r[4] = 0x491cu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3380; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3354; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e3u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3354:;
    c->r[4] = 0x4718u;
    c->r[5] = 0x8e3u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
L_db3360:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4920u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
L_db336c:;
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3380:;
    c->r[4] = 0x4994u;
    c->r[6] = c->r[1];
    (void)f_subs(c, c->r[0], 0x5u);
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    if (COND_NE) { goto L_db357c; }
    c->r[5] = 0x4798u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3438; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3408; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8f2u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3408:;
    c->r[4] = 0x4798u;
    c->r[5] = 0x78f3u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x8f350000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4998u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3438:;
    c->r[5] = 0x47f0u;
    c->r[4] = 0x49ecu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db34e8; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db34b8; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8fdu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db34b8:;
    c->r[4] = 0x47f0u;
    c->r[5] = 0xc8feu;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0xb310000u;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x49f0u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db34e8:;
    c->r[5] = 0x4800u;
    c->r[4] = 0x49fcu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3774; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3568; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8ffu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3568:;
    c->r[4] = 0x4800u;
    c->r[5] = 0x5900u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x39780000u;
    goto L_db3754;
L_db357c:;
    c->r[5] = 0x4790u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db361c; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db35f0; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8f2u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db35f0:;
    c->r[4] = 0x4790u;
    c->r[5] = 0x8f2u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4998u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db361c:;
    c->r[5] = 0x47e8u;
    c->r[4] = 0x49ecu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db36c8; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db369c; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8fdu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db369c:;
    c->r[4] = 0x47e8u;
    c->r[5] = 0x8fdu;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x49f0u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db36c8:;
    c->r[5] = 0x47f8u;
    c->r[4] = 0x49fcu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[4], c->r[5]);
    if (COND_EQ) { goto L_db3774; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3748; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8ffu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[6]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3748:;
    c->r[4] = 0x47f8u;
    c->r[5] = 0x8ffu;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
L_db3754:;
    { uint32_t ea = c->r[6]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4a00u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3774:;
    c->r[10] = 0xd7d9u;
    c->r[4] = c->r[9] - 0x3u;
    c->r[10] = (c->r[10] & 0xFFFFu) | 0xcf540000u;
    (void)f_subs(c, c->r[4], 0x9u);
    if (COND_HI) { goto L_db3bd8; }
    c->r[4] = (c->r[4] << 2);
    c->r[5] = 0xdb3794u + 0xcu;
    c->r[11] = 0x47deu;
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[11] = (c->r[11] & 0xFFFFu) | 0xb72e0000u;
    c->pc = c->r[4] + c->r[5]; switch (c->pc) { case 0xdb37c8u: goto L_db37c8; case 0xdb3bd8u: goto L_db3bd8; case 0xdb3de4u: goto L_db3de4; case 0xdb41e4u: goto L_db41e4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_db37c8:;
    c->r[6] = 0x3ed8u;
    c->r[5] = 0x40dcu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db3874; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3848; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x7dbu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3848:;
    c->r[5] = 0x3ed8u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x40e0u;
    c->r[5] = 0x7dbu;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3874:;
    c->r[6] = 0x3ef0u;
    c->r[5] = 0x40ecu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db391c; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db38f4; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x7ddu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db38f4:;
    c->r[5] = 0x3ef0u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x40f0u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db391c:;
    { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3b24; }
    c->r[6] = 0x4710u;
    c->r[5] = 0x490cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db39d0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db39a8; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db39a8:;
    c->r[5] = 0x4710u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x4910u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db39d0:;
    c->r[6] = 0x4738u;
    c->r[5] = 0x493cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db3a7c; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3a50; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e7u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3a50:;
    c->r[5] = 0x4738u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x4940u;
    c->r[5] = 0x8e7u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3a7c:;
    c->r[6] = 0x4720u;
    c->r[5] = 0x491cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db3b24; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3afc; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e3u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3afc:;
    c->r[5] = 0x4720u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x4920u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db3b24:;
    c->r[6] = 0x410cu;
    c->r[7] = c->r[1];
    (void)f_subs(c, c->r[9], 0xbu);
    if (COND_EQ) { goto L_db44a4; }
    (void)f_subs(c, c->r[9], 0xau);
    if (COND_NE) { goto L_db4540; }
    c->r[5] = 0x3f30u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db45f0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3bbc; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3bbc:;
    c->r[6] = 0x3f30u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0x97e6u;
    c->r[7] = 0x4110u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x8c00000u;
    goto L_db45d8;
L_db3bd8:;
    c->r[5] = 0x3ee0u;
    c->r[6] = 0x40dcu;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db3c90; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3c60; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7dbu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3c60:;
    c->r[6] = 0x3ee0u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0x97dcu;
    c->r[7] = 0x40e0u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xe4920000u;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db3c90:;
    c->r[5] = 0x3ee8u;
    c->r[6] = 0x40ecu;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db3d44; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3d18; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7ddu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3d18:;
    c->r[6] = 0x3ee8u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x40f0u;
    c->r[6] = 0x7ddu;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db3d44:;
    c->r[5] = 0x3f08u;
    c->r[6] = 0x410cu;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db45f0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3dcc; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3dcc:;
    c->r[6] = 0x3f08u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x4110u;
    c->r[6] = 0x7e1u;
    goto L_db45d8;
L_db3de4:;
    c->r[6] = 0x3ed8u;
    c->r[4] = 0x40dcu;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_db3e90; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3e64; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x7dbu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[5]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3e64:;
    c->r[4] = 0x3ed8u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    c->r[4] = 0x40e0u;
    c->r[5] = 0x7dbu;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3e90:;
    c->r[6] = 0x3ef0u;
    c->r[4] = 0x40ecu;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_db3f38; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3f10; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x7ddu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[5]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3f10:;
    c->r[4] = 0x3ef0u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    c->r[4] = 0x40f0u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3f38:;
    { uint32_t ea = c->r[2] + 0x5u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4140; }
    c->r[6] = 0x4710u;
    c->r[4] = 0x490cu;
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[5] + c->r[4]; uint32_t v = LD32(ea); c->r[5] = ea; c->r[4] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[4], c->r[6]);
    if (COND_EQ) { goto L_db3fec; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[4] = v; }
    { uint32_t r = c->r[4] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db3fc4; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    { uint32_t ea = c->r[3] + (c->r[4] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[4] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[4] = c->r[4] + (c->r[4] << 1);
    c->r[3] = c->r[3] + (c->r[4] << 2);
    { uint32_t ea = c->r[5]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db3fc4:;
    c->r[4] = 0x4710u;
    { uint32_t ea = c->r[3] + c->r[4]; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[4]); }
    c->r[4] = 0x4910u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db3fec:;
    c->r[6] = 0x4738u;
    c->r[5] = 0x493cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db4098; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db406c; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e7u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db406c:;
    c->r[5] = 0x4738u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x4940u;
    c->r[5] = 0x8e7u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[4] = c->r[4] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[5]); }
L_db4098:;
    c->r[6] = 0x4720u;
    c->r[5] = 0x491cu;
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[4] + c->r[5]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[5], c->r[6]);
    if (COND_EQ) { goto L_db4140; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[5] = v; }
    { uint32_t r = c->r[5] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4118; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[7] = 0x8e3u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[7] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    { uint32_t ea = c->r[3] + (c->r[5] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[5] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] + (c->r[5] << 1);
    c->r[3] = c->r[3] + (c->r[5] << 2);
    { uint32_t ea = c->r[4]; c->r[5] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] + 4u; ST32(ea + 0u, c->r[5]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db4118:;
    c->r[5] = 0x4720u;
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[5]); }
    c->r[4] = 0x4920u;
    { uint32_t ea = c->r[1] + c->r[4]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db4140:;
    c->r[5] = 0x3f10u;
    c->r[6] = 0x410cu;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db45f0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db41c8; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db41c8:;
    c->r[6] = 0x3f10u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0xa7e2u;
    c->r[7] = 0x4110u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x1ea50000u;
    goto L_db45d8;
L_db41e4:;
    c->r[5] = 0x3ed8u;
    c->r[7] = 0x40dcu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_db4298; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db426c; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7dbu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db426c:;
    c->r[7] = 0x3ed8u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0x40e0u;
    c->r[6] = 0x7dbu;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db4298:;
    c->r[5] = 0x3ef0u;
    c->r[7] = 0x40ecu;
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[6] + c->r[7]; uint32_t v = LD32(ea); c->r[6] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    if (COND_EQ) { goto L_db4348; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[7] = v; }
    { uint32_t r = c->r[7] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4320; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7ddu;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    { uint32_t ea = c->r[3] + (c->r[7] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[7] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[7] + (c->r[7] << 1);
    c->r[3] = c->r[3] + (c->r[7] << 2);
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db4320:;
    c->r[7] = 0x3ef0u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[6]; ST32(ea, c->r[7]); }
    c->r[7] = 0x40f0u;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[11]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db4348:;
    c->r[5] = 0x3f50u;
    c->r[6] = 0x410cu;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db4400; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db43d0; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db43d0:;
    c->r[6] = 0x3f50u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0x17eau;
    c->r[7] = 0x4110u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x59850000u;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db4400:;
    c->r[5] = 0x3ec0u;
    c->r[6] = 0x40c4u;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db46a0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4488; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7d8u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db4488:;
    c->r[6] = 0x3ec0u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x40c8u;
    c->r[6] = 0x7d8u;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[6]); }
    goto L_db468c;
L_db44a4:;
    c->r[5] = 0x3f38u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db45f0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4524; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db4524:;
    c->r[6] = 0x3f38u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0xa7e7u;
    c->r[7] = 0x4110u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0x50580000u;
    goto L_db45d8;
L_db4540:;
    c->r[5] = 0x3f20u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db45f0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db45c0; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7e1u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db45c0:;
    c->r[6] = 0x3f20u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[6] = 0xe7e4u;
    c->r[7] = 0x4110u;
    c->r[6] = (c->r[6] & 0xFFFFu) | 0xaf240000u;
L_db45d8:;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db45f0:;
    c->r[5] = 0x3ec8u;
    c->r[6] = 0x40c4u;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[3] + c->r[5]; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[6], c->r[5]);
    if (COND_EQ) { goto L_db46a0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[6] = v; }
    { uint32_t r = c->r[6] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db4678; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[3] = c->r[1] + 0xecu;
    c->r[4] = 0x7d8u;
    c->r[3] = c->r[3] + 0x30c00u;
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = (c->r[5] & 0x80000000u) | ((c->r[4] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    { uint32_t ea = c->r[3] + (c->r[6] << 2); uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[5] = c->r[5] & 0x7fffffffu;
    { uint32_t ea = c->r[3] + (c->r[6] << 2); ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[6] = c->r[6] + (c->r[6] << 1);
    c->r[3] = c->r[3] + (c->r[6] << 2);
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[3] + 0x4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[3] + 0x8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db4678:;
    c->r[6] = 0x3ec8u;
    { uint32_t ea = c->r[3] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[6]); }
    c->r[7] = 0x40c8u;
    { uint32_t ea = c->r[1] + c->r[7]; ST32(ea, c->r[10]); }
L_db468c:;
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[7] = c->r[7] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[6]); }
L_db46a0:;
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = 0x4b04u;
    c->r[7] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[6] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_LT) { goto L_db473c; }
    c->r[2] = 0x4900u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { goto L_db47e0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db472c; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[5] = 0x920u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db472c:;
    c->r[2] = 0x4900u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x920u;
    goto L_db47c0;
L_db473c:;
    c->r[2] = 0x4908u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[6], c->r[2]);
    if (COND_EQ) { goto L_db47e0; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD8(ea); c->r[2] = v; }
    { uint32_t r = c->r[2] & 0x80u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_db47b0; }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[1] + 0xecu;
    c->r[5] = 0x920u;
    c->r[2] = c->r[2] + 0x30c00u;
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = (c->r[6] & 0x80000000u) | ((c->r[5] << 0) & 0x7fffffffu);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    { uint32_t ea = c->r[2] + (c->r[3] << 2); uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] & 0x7fffffffu;
    { uint32_t ea = c->r[2] + (c->r[3] << 2); ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[3] = c->r[3] + (c->r[3] << 1);
    c->r[2] = c->r[2] + (c->r[3] << 2);
    { uint32_t ea = c->r[7]; c->r[3] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 4u; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + 0x1u;
    { uint32_t ea = c->r[1] + 0x64u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[3] = v; }
L_db47b0:;
    c->r[2] = 0x4908u;
    { uint32_t ea = c->r[3] + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = 0x7921u;
    c->r[3] = (c->r[3] & 0xFFFFu) | 0x8a710000u;
L_db47c0:;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[2]); }
    c->r[2] = 0x4b08u;
    { uint32_t ea = c->r[1] + c->r[2]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1] + 0x154u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + 0x158u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[2] | 0x3u;
    { uint32_t ea = c->r[1] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x158u; ST32(ea, c->r[3]); }
L_db47e0:;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_db47e4:;
    { uint32_t ea = c->r[3] + 0x13eu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x5u; }
    goto L_db2b2c;
L_db47f4:;
    c->r[0] = 0xau;
    { uint32_t sc = 0; uint32_t r = c->r[7] & 0x1000000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { c->r[0] = 0x8u; }
    if (COND_EQ) { c->r[0] = c->r[0] & (c->r[7] >> 22); }
    if (COND_EQ) { c->r[0] = c->r[0] | 0x3u; }
    goto L_db2b2c;
}
