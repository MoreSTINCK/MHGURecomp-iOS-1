#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_2be5d4(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efdf4(Cpu *c);
void f_36de70(Cpu *restrict c) {
    FN_ENTER(0x36de70u);
L_36de70:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x98u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[8] = c->r[1];
    c->r[7] = c->r[3];
    c->r[5] = c->r[2];
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_36def4; }
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_36e000; }
    c->r[1] = 0x1u;
    c->r[2] = 0x4du;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36df48; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x36dec8u; rt_dispatch(c);
    c->r[1] = 0x16cbcc4u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x36ded8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_36df50; }
L_36dee0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_36dee0; }
    goto L_36df50;
L_36def4:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_CC) { goto L_36dfb4; }
    (void)f_subs(c, c->r[0], 0x4u);
    if (COND_EQ) { goto L_36e4e4; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_3705d0; }
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x1u;
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    goto L_3705d0;
L_36df48:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_36e000; }
L_36df50:;
    c->r[0] = 0xfe8u;
    c->r[1] = 0xfecu;
    c->r[2] = c->r[8] + 0xff0u;
    c->r[10] = c->r[8] + 0x40u;
    c->v.s[6] = 0x38c90fdbu;
    c->r[0] = c->r[8] + c->r[0];
    c->r[1] = c->r[8] + c->r[1];
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = (float)c->v.s[0];
    c->v.f[2] = (float)c->v.s[2];
    { uint32_t ea = c->r[10]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
    c->v.f[4] = (float)c->v.s[4];
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[16] = c->v.f[0] * c->v.f[6];
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.f[18] = c->v.f[2] * c->v.f[6];
    c->v.f[20] = c->v.f[4] * c->v.f[6];
    if (COND_NE) { goto L_36e018; }
    c->r[0] = c->r[8];
    c->r[14] = 0x36dfa8u; f_2be5d4(c);
    c->v.s[2] = LD32(c->r[5] + 52u);
    c->v.f[22] = c->v.f[0] * c->v.f[2];
    goto L_36e01c;
L_36dfb4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
L_36dff0:;
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[9] = 0x2u;
    goto L_3705d0;
L_36e000:;
    c->r[0] = 0x16cab3cu;
    c->v.s[16] = 0x0u;
    { uint32_t ea = 0x36e010u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[16];
    c->v.s[20] = c->v.s[16];
    { uint32_t ea = c->r[0]; c->r[4] = LD32(ea + 0u); c->r[6] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); }
L_36e018:;
    c->v.s[22] = LD32(c->r[5] + 52u);
L_36e01c:;
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[1] = 0x3f2u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_36e198; }
    c->r[1] = 0x3e9u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_EQ) { goto L_36e46c; }
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_36e23c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_3705d0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36e05cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36e07cu: goto L_36e07c; case 0x36e6dcu: goto L_36e6dc; case 0x36e7d4u: goto L_36e7d4; case 0x36e8dcu: goto L_36e8dc; case 0x3705d0u: goto L_3705d0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e07c:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[0] = c->r[7] + 0x10u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[7] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[2] = LD32(c->r[5] + 36u);
    c->v.s[4] = LD32(c->r[5] + 40u);
    c->v.s[6] = LD32(c->r[5] + 20u);
    c->v.s[8] = LD32(c->r[5] + 24u);
    c->v.s[10] = LD32(c->r[5] + 16u);
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    c->v.f[17] = c->v.f[22] * c->v.f[4];
    c->v.f[21] = c->v.f[22] * c->v.f[2];
    c->v.f[19] = c->v.f[22] * c->v.f[0];
    c->v.f[23] = c->v.f[22] * c->v.f[8];
    c->v.f[27] = c->v.f[22] * c->v.f[6];
    c->v.f[25] = c->v.f[22] * c->v.f[10];
    if (COND_HI) { goto L_36f2e8; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36e0e8u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36e104u: goto L_36e104; case 0x36f304u: goto L_36f304; case 0x36f39cu: goto L_36f39c; case 0x36f424u: goto L_36f424; case 0x36f4ccu: goto L_36f4cc; case 0x36f560u: goto L_36f560; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e104:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e10cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e118u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e124u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e130u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e13cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e148u; f_15efdf4(c);
    c->v.f[10] = c->v.f[24] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[30];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = c->v.s[24] ^ 0x80000000u;
    c->v.f[22] = c->v.f[30] * c->v.f[18];
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[28] * c->v.f[10];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[26] = c->v.f[20] * c->v.f[10];
    c->v.f[10] = c->v.f[12] * c->v.f[20];
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[30]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    goto L_36f5f0;
L_36e198:;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_36e240; }
    c->r[0] = 0x158au;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36e23c; }
    c->r[0] = 0x1590u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_CC) { goto L_36e23c; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_LT) { goto L_36e23c; }
    c->r[1] = 0x158cu;
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_36e23c; }
    c->r[1] = 0x1594u;
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { c->r[2] = c->r[1] + (c->r[0] << 5); }
    if (COND_NE) { (void)f_subs(c, c->r[2], 0x0u); }
    if (COND_EQ) { goto L_36e23c; }
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[7] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[1] + (c->r[0] << 5); uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_36dff0;
L_36e23c:;
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
L_36e240:;
    c->r[0] = c->r[0] | 0x4u;
    c->r[9] = 0x0u;
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_EQ) { goto L_3705d0; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x36e260u; rt_dispatch(c);
    c->r[1] = 0x16cb92cu;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x36e270u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_36e288; }
L_36e278:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_36e278; }
L_36e288:;
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x36e29cu; rt_dispatch(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_3705d0; }
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36e2ec; }
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[2] = LD32(c->r[4]);
    c->v.s[4] = LD32(c->r[4] + 8u);
    c->v.s[6] = LD32(c->r[4] + 12u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[22] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_36e2ec; }
    c->r[14] = 0x36e2e8u; f_15efddc(c);
    c->v.s[22] = c->v.s[0];
L_36e2ec:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x6u);
    if (COND_HI) { goto L_3705d0; }
    c->r[6] = c->r[7];
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (c->r[3] << 2);
    c->r[7] = 0x36e314u + 0x4u;
    { uint32_t ea = c->r[3] + c->r[7]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->pc = c->r[3] + c->r[7]; switch (c->pc) { case 0x36e33cu: goto L_36e33c; case 0x36e9e4u: goto L_36e9e4; case 0x36ec78u: goto L_36ec78; case 0x36ed08u: goto L_36ed08; case 0x36edd4u: goto L_36edd4; case 0x36f0e4u: goto L_36f0e4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e33c:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.s[12] = c->r[2];
    c->v.s[14] = c->r[1];
    c->v.s[7] = c->r[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[6] + 32u, c->v.s[0]);
    c->v.s[10] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[5] = LD32(c->r[4] + 32u);
    c->v.s[6] = LD32(c->r[4] + 20u);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[8] = LD32(c->r[4] + 24u);
    c->v.s[1] = LD32(c->r[4] + 36u);
    c->v.s[3] = LD32(c->r[4] + 40u);
    c->v.s[9] = LD32(c->r[4] + 56u);
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[5]);
    c->v.f[4] = c->v.f[12] * c->v.f[8];
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.s[8] = LD32(c->r[4] + 48u);
    c->v.s[12] = LD32(c->r[4] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[7] * c->v.f[3]);
    c->v.f[0] = c->v.f[10] + c->v.f[8];
    c->v.f[2] = c->v.f[6] + c->v.f[12];
    ST32(c->r[6], c->v.s[0]);
    c->v.f[0] = c->v.f[4] + c->v.f[9];
    ST32(c->r[6] + 4u, c->v.s[2]);
    ST32(c->r[6] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD16(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[5] + 32u);
    c->v.s[20] = LD32(c->r[5] + 36u);
    c->v.s[16] = LD32(c->r[5] + 40u);
    (void)f_subs(c, c->r[0], 0x2u);
    if (COND_NE) { goto L_36e3f8; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0xd0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x36e3ecu; rt_dispatch(c);
    c->r[4] = c->r[0];
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_3705d0; }
L_36e3f8:;
    c->v.s[6] = LD32(c->r[4] + 20u);
    c->v.s[10] = LD32(c->r[4] + 16u);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[8] = LD32(c->r[4] + 24u);
    c->v.s[12] = LD32(c->r[4] + 36u);
    c->v.s[14] = LD32(c->r[4] + 40u);
    c->v.s[1] = LD32(c->r[4] + 32u);
    c->v.s[3] = LD32(c->r[4] + 56u);
    c->r[9] = 0x2u;
    c->v.f[10] = c->v.f[20] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[4] = c->v.f[20] * c->v.f[8];
    c->v.f[6] = c->v.f[20] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[16] * c->v.f[1]);
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[8] = LD32(c->r[4] + 52u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[0] = c->v.f[10] + c->v.f[0];
    c->v.f[2] = c->v.f[6] + c->v.f[8];
    c->v.f[4] = c->v.f[4] + c->v.f[3];
    ST32(c->r[6] + 16u, c->v.s[0]);
    ST32(c->r[6] + 20u, c->v.s[2]);
    ST32(c->r[6] + 24u, c->v.s[4]);
    goto L_3705d0;
L_36e46c:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[9] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[7] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x6u);
    if (COND_HI) { goto L_3705d0; }
    c->r[1] = 0x1u;
    c->r[2] = 0x4du;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_36e54c; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[1]; c->r[14] = 0x36e4a8u; rt_dispatch(c);
    c->r[1] = 0x16cb6e4u;
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = 0x36e4b8u + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_EQ) { goto L_36e4d8; }
L_36e4c0:;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_36e594; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_NE) { goto L_36e4c0; }
L_36e4d8:;
    c->r[0] = c->r[7];
    c->r[7] = c->r[8];
    goto L_36e59c;
L_36e4e4:;
    { uint32_t ea = c->r[5] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[5] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[5] + 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0x18u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[1]); }
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.s[2] = c->r[2];
    ST32(c->r[7] + 4u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[5] + 20u);
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[7] + 20u, c->v.s[0]);
    goto L_3705cc;
L_36e54c:;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_3705d0; }
    { uint32_t ea = c->r[8] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1428u;
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_36dff0;
L_36e594:;
    c->r[0] = c->r[7];
    c->r[7] = 0x0u;
L_36e59c:;
    { uint32_t ea = c->r[7] + 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[5] + 0x2u; uint32_t v = LD16(ea); c->r[4] = v; }
    c->r[2] = 0x0u;
    c->r[3] = 0x1000u;
    c->r[6] = 0x1004u;
    c->r[1] = 0x1008u;
    c->r[9] = 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[7] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[7] + 0x48u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + 0x14u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[7] + c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + 0x18u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[0] + 0x1cu; ST32(ea, c->r[2]); }
    c->r[0] = 0x7d1u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_3705d0; }
    c->v.s[19] = LD32(c->r[5] + 32u);
    c->v.s[21] = LD32(c->r[5] + 36u);
    c->v.s[17] = LD32(c->r[5] + 40u);
    c->v.s[27] = LD32(c->r[5] + 20u);
    c->v.s[23] = LD32(c->r[5] + 24u);
    c->v.s[25] = LD32(c->r[5] + 16u);
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD16(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x5u);
    if (COND_HI) { goto L_36f6c4; }
    c->r[0] = (c->r[5] << 2);
    c->r[1] = 0x36e62cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36e648u: goto L_36e648; case 0x36f6e4u: goto L_36f6e4; case 0x36f77cu: goto L_36f77c; case 0x36f800u: goto L_36f800; case 0x36f8a8u: goto L_36f8a8; case 0x36f93cu: goto L_36f93c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e648:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e650u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e65cu; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e668u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e674u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e680u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e68cu; f_15efdf4(c);
    c->v.f[10] = c->v.f[24] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[30];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = c->v.s[24] ^ 0x80000000u;
    c->v.f[22] = c->v.f[30] * c->v.f[18];
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[28] * c->v.f[10];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[26] = c->v.f[20] * c->v.f[10];
    c->v.f[10] = c->v.f[12] * c->v.f[20];
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[30]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    goto L_36f9cc;
L_36e6dc:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[7] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 16u);
    c->v.s[2] = LD32(c->r[5] + 20u);
    c->v.s[4] = LD32(c->r[5] + 24u);
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    c->v.f[17] = c->v.f[22] * c->v.f[4];
    c->v.f[21] = c->v.f[22] * c->v.f[2];
    c->v.f[19] = c->v.f[22] * c->v.f[0];
    if (COND_HI) { goto L_36faa0; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36e724u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36e740u: goto L_36e740; case 0x36fab0u: goto L_36fab0; case 0x36fb48u: goto L_36fb48; case 0x36fbccu: goto L_36fbcc; case 0x36fc74u: goto L_36fc74; case 0x36fd08u: goto L_36fd08; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e740:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e748u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e754u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e760u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e76cu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e778u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e784u; f_15efdf4(c);
    c->v.f[10] = c->v.f[24] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[30];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = c->v.s[24] ^ 0x80000000u;
    c->v.f[22] = c->v.f[30] * c->v.f[18];
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[28] * c->v.f[10];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[26] = c->v.f[20] * c->v.f[10];
    c->v.f[10] = c->v.f[12] * c->v.f[20];
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[30]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    goto L_36fd98;
L_36e7d4:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[7] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[2] = LD32(c->r[5] + 36u);
    c->v.s[4] = LD32(c->r[5] + 20u);
    c->v.s[6] = LD32(c->r[5] + 24u);
    c->v.s[8] = LD32(c->r[5] + 16u);
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    c->v.f[17] = c->v.f[22] * c->v.f[2];
    c->v.f[19] = c->v.f[22] * c->v.f[0];
    c->v.f[21] = c->v.f[22] * c->v.f[6];
    c->v.f[25] = c->v.f[22] * c->v.f[4];
    c->v.f[23] = c->v.f[22] * c->v.f[8];
    if (COND_HI) { goto L_36fe24; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36e82cu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36e848u: goto L_36e848; case 0x36fe34u: goto L_36fe34; case 0x36feccu: goto L_36fecc; case 0x36ff50u: goto L_36ff50; case 0x36fff8u: goto L_36fff8; case 0x370098u: goto L_370098; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e848:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e850u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e85cu; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e868u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e874u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e880u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e88cu; f_15efdf4(c);
    c->v.f[10] = c->v.f[24] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[30];
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = c->v.s[24] ^ 0x80000000u;
    c->v.f[22] = c->v.f[30] * c->v.f[18];
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->r[0] = 0x0u;
    c->v.f[8] = c->v.f[28] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[28] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[26] = c->v.f[20] * c->v.f[10];
    c->v.f[10] = c->v.f[12] * c->v.f[20];
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[30]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    goto L_370128;
L_36e8dc:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[7] + 32u, c->v.s[0]);
    { uint32_t ea = c->r[7]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[10]); }
    { uint32_t ea = c->r[7] + 0xcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[5] + 32u);
    c->v.s[2] = LD32(c->r[5] + 36u);
    c->v.s[4] = LD32(c->r[5] + 20u);
    c->v.s[6] = LD32(c->r[5] + 24u);
    c->v.s[8] = LD32(c->r[5] + 16u);
    { uint32_t ea = c->r[8] + 0x38u; uint32_t v = LD16(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    c->v.f[17] = c->v.f[22] * c->v.f[2];
    c->v.f[19] = c->v.f[22] * c->v.f[0];
    c->v.f[21] = c->v.f[22] * c->v.f[6];
    c->v.f[25] = c->v.f[22] * c->v.f[4];
    c->v.f[23] = c->v.f[22] * c->v.f[8];
    if (COND_HI) { goto L_3701cc; }
    c->r[0] = (c->r[0] << 2);
    c->r[1] = 0x36e934u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[1]; switch (c->pc) { case 0x36e950u: goto L_36e950; case 0x3701dcu: goto L_3701dc; case 0x370274u: goto L_370274; case 0x3702f8u: goto L_3702f8; case 0x3703a0u: goto L_3703a0; case 0x370434u: goto L_370434; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_36e950:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e958u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e964u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e970u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36e97cu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36e988u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36e994u; f_15efdf4(c);
    c->v.f[10] = c->v.f[24] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[30];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.s[4] = c->v.s[24] ^ 0x80000000u;
    c->v.f[22] = c->v.f[30] * c->v.f[18];
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[28] * c->v.f[10];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[26] = c->v.f[20] * c->v.f[10];
    c->v.f[10] = c->v.f[12] * c->v.f[20];
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[28] * c->v.f[30]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    goto L_3704c4;
L_36e9e4:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[9] = c->r[6];
    c->v.s[8] = 0x3f000000u;
    c->v.s[24] = 0x38c90fdbu;
    c->v.s[10] = c->v.s[8];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[9] + 32u, c->v.s[0]);
    c->v.s[0] = 0x43360b61u;
    c->v.s[2] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 20u);
    c->v.s[6] = LD32(c->r[5] + 24u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[0] = c->v.s[2];
    c->v.s[2] = c->v.s[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->r[0];
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[8]);
    c->v.s[17] = LD32(c->r[4] + 48u);
    c->v.s[28] = LD32(c->r[4] + 52u);
    c->v.s[30] = LD32(c->r[4] + 56u);
    c->r[0] = c->v.s[0];
    c->v.f[0] = (float)c->v.s[2];
    c->r[1] = c->v.s[4];
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[1];
    c->v.s[22] = c->r[0];
    c->v.f[20] = (float)c->v.s[2];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36ea70u; f_15efde8(c);
    c->v.f[20] = c->v.f[20] * c->v.f[24];
    c->v.s[18] = c->v.s[0];
    c->v.f[26] = (float)c->v.s[22];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36ea84u; f_15efde8(c);
    c->v.f[24] = c->v.f[26] * c->v.f[24];
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x36ea94u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36eaa0u; f_15efdf4(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36eaacu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x36eab8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.s[6] = c->v.s[22] ^ 0x80000000u;
    c->v.f[8] = c->v.f[16] * c->v.f[0];
    c->r[8] = 0x0u;
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[4];
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[4]);
    ST32(c->r[13] + 88u, c->v.s[6]);
    c->v.f[6] = c->v.f[22] * c->v.f[26];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[8]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[16]);
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[26]);
    ST32(c->r[13] + 96u, c->v.s[4]);
    c->v.f[4] = c->v.f[18] * c->v.f[20];
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[16];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[8]); }
    ST32(c->r[13] + 112u, c->v.s[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[20];
    ST32(c->r[13] + 116u, c->v.s[4]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x36eb4cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[3];
    c->v.s[8] = c->r[7];
    c->v.s[10] = c->r[12];
    c->v.s[5] = c->r[14];
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->r[6];
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[4] = c->r[2];
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[6]);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[3] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[12] = LD32(c->r[5] + 32u);
    c->v.s[1] = LD32(c->r[13] + 88u);
    c->v.s[14] = LD32(c->r[5] + 40u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.s[6] = c->v.s[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[1] = c->v.f[17] + c->v.f[3];
    c->v.s[3] = c->v.s[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[5]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[12] * c->v.f[5]);
    ST32(c->r[9], c->v.s[1]);
    c->v.f[6] = c->v.f[28] + c->v.f[6];
    c->v.f[0] = c->v.f[17] + c->v.f[4];
    c->v.f[2] = c->v.f[28] + c->v.f[2];
    c->v.f[4] = c->v.f[30] + c->v.f[8];
    ST32(c->r[9] + 4u, c->v.s[6]);
    c->v.f[12] = c->v.f[30] + c->v.f[3];
    ST32(c->r[9] + 8u, c->v.s[12]);
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[9] + 0x1cu; ST32(ea, c->r[8]); }
    ST32(c->r[9] + 16u, c->v.s[0]);
    ST32(c->r[9] + 20u, c->v.s[2]);
    ST32(c->r[9] + 24u, c->v.s[4]);
    c->r[9] = 0x2u;
    goto L_3705d0;
L_36ec78:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[3] = c->r[6];
    c->v.s[12] = c->r[2];
    c->v.s[14] = c->r[1];
    c->v.s[7] = c->r[0];
    c->r[9] = 0x1u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[3] + 32u, c->v.s[0]);
    c->v.s[10] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[5] = LD32(c->r[4] + 32u);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[6] = LD32(c->r[4] + 20u);
    c->v.s[1] = LD32(c->r[4] + 36u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[8] = LD32(c->r[4] + 24u);
    c->v.s[3] = LD32(c->r[4] + 40u);
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[4] + 48u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[5]);
    c->v.f[4] = c->v.f[10] + c->v.f[4];
    ST32(c->r[3], c->v.s[4]);
    c->v.f[4] = c->v.f[12] * c->v.f[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[0]);
    c->v.s[6] = LD32(c->r[4] + 52u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[0] = c->v.f[4] + c->v.f[6];
    ST32(c->r[3] + 4u, c->v.s[0]);
    c->v.f[0] = c->v.f[12] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[7] * c->v.f[3]);
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[3] + 8u, c->v.s[0]);
    goto L_3705d0;
L_36ed08:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->r[3] = c->r[6];
    c->v.s[8] = c->r[2];
    c->v.s[10] = c->r[1];
    c->v.s[3] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[3] + 32u, c->v.s[0]);
    c->v.s[6] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[1] = LD32(c->r[4] + 32u);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[9] = LD32(c->r[4] + 20u);
    c->v.s[12] = LD32(c->r[4] + 36u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[14] = LD32(c->r[4] + 40u);
    c->v.s[5] = LD32(c->r[5] + 36u);
    c->v.s[7] = LD32(c->r[4] + 24u);
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[4] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[1] = LD32(c->r[5] + 32u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    c->v.f[6] = c->v.f[8] * c->v.f[9];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[0]);
    ST32(c->r[3], c->v.s[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.s[9] = LD32(c->r[4] + 52u);
    c->v.f[0] = c->v.f[6] + c->v.f[9];
    c->v.f[6] = c->v.f[8] * c->v.f[7];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[2]);
    ST32(c->r[3] + 4u, c->v.s[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[14]);
    c->v.s[8] = LD32(c->r[4] + 56u);
    c->v.f[2] = c->v.f[6] + c->v.f[8];
    ST32(c->r[3] + 8u, c->v.s[2]);
    ST32(c->r[3] + 16u, c->v.s[4]);
    ST32(c->r[3] + 24u, c->v.s[2]);
    c->v.s[2] = c->v.s[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[5]);
    { uint32_t ea = c->r[3] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[1]);
    ST32(c->r[3] + 4u, c->v.s[2]);
    ST32(c->r[3] + 20u, c->v.s[0]);
    goto L_3705cc;
L_36edd4:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.s[8] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[6]); }
    c->v.s[24] = 0x38c90fdbu;
    c->v.s[10] = c->v.s[8];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[6] + 32u, c->v.s[0]);
    c->v.s[0] = 0x43360b61u;
    c->v.s[2] = LD32(c->r[5] + 16u);
    c->v.s[4] = LD32(c->r[5] + 20u);
    c->v.s[6] = LD32(c->r[5] + 24u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[2] = vcvt_s32_f64((double)c->v.f[10]);
    c->r[0] = c->v.s[2];
    c->v.s[2] = c->v.s[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[2]);
    c->v.s[2] = c->r[0];
    c->v.s[4] = vcvt_s32_f64((double)c->v.f[8]);
    c->v.s[17] = LD32(c->r[4] + 48u);
    c->v.s[28] = LD32(c->r[4] + 52u);
    c->v.s[30] = LD32(c->r[4] + 56u);
    c->r[0] = c->v.s[0];
    c->v.f[0] = (float)c->v.s[2];
    c->r[1] = c->v.s[4];
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->r[1] = (uint32_t)(uint16_t)(c->r[1]);
    c->r[0] = (uint32_t)(uint16_t)(c->r[0]);
    c->v.s[2] = c->r[1];
    c->v.s[22] = c->r[0];
    c->v.f[20] = (float)c->v.s[2];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36ee60u; f_15efde8(c);
    c->v.f[20] = c->v.f[20] * c->v.f[24];
    c->v.s[18] = c->v.s[0];
    c->v.f[26] = (float)c->v.s[22];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36ee74u; f_15efde8(c);
    c->v.f[24] = c->v.f[26] * c->v.f[24];
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x36ee84u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36ee90u; f_15efdf4(c);
    c->v.s[16] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36ee9cu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[24];
    c->r[14] = 0x36eea8u; f_15efdf4(c);
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.s[6] = c->v.s[22] ^ 0x80000000u;
    c->v.f[8] = c->v.f[16] * c->v.f[0];
    c->r[9] = 0x0u;
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[13] + 0x50u;
    c->r[2] = c->r[4];
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[4]);
    ST32(c->r[13] + 88u, c->v.s[6]);
    c->v.f[6] = c->v.f[22] * c->v.f[26];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[9]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[16]);
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[26]);
    ST32(c->r[13] + 96u, c->v.s[4]);
    c->v.f[4] = c->v.f[18] * c->v.f[20];
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[16];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[9]); }
    ST32(c->r[13] + 112u, c->v.s[2]);
    c->v.f[0] = c->v.f[16] * c->v.f[20];
    ST32(c->r[13] + 116u, c->v.s[4]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x10u;
    c->r[14] = 0x36ef3cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[6]); }
    c->v.s[6] = c->r[7];
    c->v.s[2] = c->r[10];
    c->v.s[4] = c->r[4];
    c->v.s[0] = c->r[6];
    c->v.s[10] = c->r[14];
    c->v.s[14] = c->r[12];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[2] = c->r[0];
    c->v.f[4] = c->v.f[4] * c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[10] = c->r[1];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[2]); }
    c->v.s[12] = LD32(c->r[5] + 32u);
    { uint32_t ea = c->r[4] + 0xcu; ST32(ea, c->r[9]); }
    c->r[9] = 0x1u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.s[2] = c->r[3];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[6] = c->v.f[17] + c->v.f[6];
    c->v.f[2] = c->v.f[28] + c->v.f[4];
    c->v.f[0] = c->v.f[30] + c->v.f[0];
    ST32(c->r[4], c->v.s[6]);
    ST32(c->r[4] + 4u, c->v.s[2]);
    ST32(c->r[4] + 8u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x30u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_NE) { goto L_3705d0; }
    c->r[1] = 0x31b4u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x2u);
    if (COND_EQ) { goto L_3705e4; }
    (void)f_subs(c, c->r[1], 0x1u);
    if (COND_NE) { goto L_3705d0; }
    c->r[1] = 0x2u;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    c->r[1] = 0x31b0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_NE) { goto L_3705d0; }
    c->r[9] = 0x1u;
    c->r[1] = 0x31d0u;
    c->r[2] = 0x31c0u;
    { uint32_t ea = c->r[0]; ST8(ea, c->r[9]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x31d4u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x31d8u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x31dcu;
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x31c4u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[2] = 0x31c8u;
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + c->r[2]; ST32(ea, c->r[0]); }
    c->r[0] = 0x31ccu;
    { uint32_t ea = c->r[8] + c->r[0]; ST32(ea, c->r[1]); }
    goto L_3705d0;
L_36f0e4:;
    c->v.s[0] = LD32(c->r[5] + 8u);
    c->v.s[8] = c->r[2];
    c->v.s[10] = c->r[1];
    c->v.s[3] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[6] + 32u, c->v.s[0]);
    c->v.s[6] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[1] = LD32(c->r[4] + 32u);
    c->v.s[0] = LD32(c->r[4] + 4u);
    c->v.s[5] = LD32(c->r[4] + 20u);
    c->v.s[12] = LD32(c->r[4] + 36u);
    c->v.s[2] = LD32(c->r[4] + 8u);
    c->v.s[14] = LD32(c->r[4] + 40u);
    c->v.s[18] = LD32(c->r[5] + 32u);
    c->v.s[16] = LD32(c->r[5] + 36u);
    c->v.f[6] = c->v.f[8] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[4] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[1] = LD32(c->r[4] + 24u);
    c->v.f[4] = c->v.f[6] + c->v.f[4];
    c->v.f[6] = c->v.f[8] * c->v.f[5];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[0]);
    ST32(c->r[6], c->v.s[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.s[5] = LD32(c->r[4] + 52u);
    c->v.f[0] = c->v.f[6] + c->v.f[5];
    c->v.f[6] = c->v.f[8] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[2]);
    ST32(c->r[6] + 4u, c->v.s[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[14]);
    c->v.s[8] = LD32(c->r[4] + 56u);
    c->v.f[2] = c->v.f[6] + c->v.f[8];
    ST32(c->r[6] + 8u, c->v.s[2]);
    ST32(c->r[6] + 16u, c->v.s[4]);
    ST32(c->r[6] + 20u, c->v.s[0]);
    ST32(c->r[6] + 24u, c->v.s[2]);
    { uint32_t ea = c->r[6] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = (uint32_t)(int32_t)(int16_t)LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[8];
    c->pc = c->r[2]; c->r[14] = 0x36f198u; rt_dispatch(c);
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[4] = 0x0u;
    c->v.f[6] = c->v.f[22] * c->v.f[18];
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[3]); }
    c->v.s[2] = c->r[3];
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[14] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[10] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[5]); }
    c->v.s[0] = c->r[5];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[4]); }
    c->v.s[8] = c->r[4];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[8] = c->v.f[8] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    c->v.s[1] = c->r[1];
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[10] = c->v.f[10] + c->v.f[8];
    c->v.f[1] = c->v.f[1] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[12] = LD32(c->r[6]);
    c->v.s[14] = LD32(c->r[13] + 88u);
    c->v.f[10] = c->v.f[10] + c->v.f[12];
    c->v.s[12] = c->r[14];
    c->v.f[14] = c->v.f[14] * c->v.f[4];
    ST32(c->r[6], c->v.s[10]);
    c->v.f[10] = c->v.f[12] * c->v.f[4];
    c->v.s[12] = c->r[8];
    c->v.s[3] = LD32(c->r[6] + 4u);
    c->v.s[5] = c->v.s[10];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + c->v.f[1];
    c->v.f[3] = c->v.f[5] + c->v.f[3];
    c->v.s[5] = c->r[12];
    ST32(c->r[6] + 4u, c->v.s[3]);
    c->v.s[3] = c->r[7];
    c->v.s[7] = LD32(c->r[6] + 8u);
    c->v.f[4] = c->v.f[3] * c->v.f[4];
    c->v.s[3] = c->v.s[14];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.f[6] = c->v.f[3] + c->v.f[4];
    c->v.f[6] = c->v.f[6] + c->v.f[7];
    ST32(c->r[6] + 8u, c->v.s[6]);
    c->v.f[6] = c->v.f[22] * c->v.f[16];
    c->v.s[3] = LD32(c->r[6] + 16u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.f[0] = c->v.f[2] + c->v.f[8];
    c->v.f[2] = c->v.f[10] + c->v.f[1];
    c->v.f[0] = c->v.f[0] + c->v.f[3];
    ST32(c->r[6] + 16u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 20u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    c->v.f[2] = c->v.f[14] + c->v.f[4];
    ST32(c->r[6] + 20u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[6] + 24u);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    ST32(c->r[6] + 24u, c->v.s[0]);
    goto L_3705cc;
L_36f2e8:;
    c->v.s[0] = c->r[10];
    c->v.s[12] = c->r[6];
    c->v.s[14] = c->r[4];
    c->v.s[1] = c->v.s[0];
    c->v.s[3] = c->v.s[12];
    c->v.s[5] = c->v.s[14];
    goto L_36f644;
L_36f304:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f30cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f318u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f324u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f330u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f33cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f348u; f_15efdf4(c);
    c->v.f[12] = c->v.f[28] * c->v.f[24];
    c->v.f[8] = c->v.f[22] * c->v.f[20];
    c->v.f[26] = c->v.f[24] * c->v.f[20];
    c->v.f[10] = c->v.f[28] * c->v.f[22];
    c->v.f[4] = -(float)(c->v.f[24] * c->v.f[0]);
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[29] = c->v.f[20] * c->v.f[18];
    c->v.s[6] = c->v.s[12];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[26]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[10] * c->v.f[18]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[12] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[0]);
    goto L_36f4b8;
L_36f39c:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f3a4u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f3b0u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f3bcu; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f3c8u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f3d4u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[26] = c->v.f[24] * c->v.f[28];
    c->r[14] = 0x36f3e4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[28]);
    c->v.f[6] = -(float)(c->v.f[20] * c->v.f[30]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[18];
    c->v.f[26] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[30];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    goto L_36f5e4;
L_36f424:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f42cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f438u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f444u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f450u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f45cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[31] = c->v.f[28] * c->v.f[26];
    c->v.f[29] = c->v.f[20] * c->v.f[18];
    c->r[14] = 0x36f470u; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.f[6] = c->v.f[30] * c->v.f[18];
    c->v.s[22] = c->v.s[31];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[29]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[31] * c->v.f[30]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.s[6] = c->v.s[30] ^ 0x80000000u;
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[18]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36f4b8:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    goto L_36f604;
L_36f4cc:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f4d4u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f4e0u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f4ecu; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f4f8u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f504u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[22] = c->v.f[28] * c->v.f[26];
    c->r[14] = 0x36f514u; f_15efdf4(c);
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[6] = c->v.f[28] * c->v.f[0];
    c->v.f[8] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[30]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[30] * c->v.f[20];
    c->v.s[10] = c->v.s[28] ^ 0x80000000u;
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    c->v.f[26] = c->v.f[26] * c->v.f[20];
    goto L_36f5e8;
L_36f560:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f568u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f574u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f580u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f58cu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f598u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f5a4u; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[26];
    c->v.f[12] = c->v.f[26] * c->v.f[20];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = -(float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[28] * c->v.f[4];
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[18]);
L_36f5e4:;
    ST32(c->r[13] + 84u, c->v.s[22]);
L_36f5e8:;
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36f5f0:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[29] = c->v.f[20] * c->v.f[18];
L_36f604:;
    ST32(c->r[13] + 112u, c->v.s[26]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 116u, c->v.s[10]);
    ST32(c->r[13] + 120u, c->v.s[29]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[14] = LD32(c->r[7] + 16u);
    c->v.s[12] = LD32(c->r[7] + 20u);
    c->v.s[0] = LD32(c->r[7] + 24u);
    c->v.s[3] = LD32(c->r[7] + 4u);
    c->v.s[1] = LD32(c->r[7] + 8u);
    c->v.s[5] = LD32(c->r[7]);
L_36f644:;
    c->v.f[9] = c->v.f[27] * c->v.f[8];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[25] * c->v.f[22]);
    c->r[9] = 0x2u;
    c->v.f[7] = c->v.f[27] * c->v.f[6];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[23] * c->v.f[10]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[23] * c->v.f[26]);
    c->v.f[11] = c->v.f[27] * c->v.f[24];
    c->v.f[6] = c->v.f[21] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[8] = c->v.f[21] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[22]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[23] * c->v.f[29]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[26]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[10]);
    c->v.f[2] = c->v.f[9] + c->v.f[3];
    c->v.f[3] = c->v.f[21] * c->v.f[24];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[17] * c->v.f[29]);
    c->v.f[5] = c->v.f[7] + c->v.f[5];
    c->v.f[1] = c->v.f[11] + c->v.f[1];
    c->v.f[4] = c->v.f[8] + c->v.f[12];
    ST32(c->r[7], c->v.s[5]);
    ST32(c->r[7] + 4u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] + c->v.f[14];
    c->v.f[0] = c->v.f[3] + c->v.f[0];
    ST32(c->r[7] + 8u, c->v.s[1]);
    ST32(c->r[7] + 16u, c->v.s[2]);
    ST32(c->r[7] + 20u, c->v.s[4]);
    ST32(c->r[7] + 24u, c->v.s[0]);
    goto L_3705d0;
L_36f6c4:;
    c->v.s[1] = c->r[10];
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.s[5] = c->r[12];
    c->v.s[3] = c->r[14];
    c->v.s[14] = c->r[3];
    c->v.s[0] = c->r[6];
    c->v.s[12] = c->r[7];
    goto L_36fa24;
L_36f6e4:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f6ecu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f6f8u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f704u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f710u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f71cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f728u; f_15efdf4(c);
    c->v.f[12] = c->v.f[28] * c->v.f[24];
    c->v.f[8] = c->v.f[22] * c->v.f[20];
    c->v.f[26] = c->v.f[24] * c->v.f[20];
    c->v.f[10] = c->v.f[28] * c->v.f[22];
    c->v.f[4] = -(float)(c->v.f[24] * c->v.f[0]);
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[29] = c->v.f[20] * c->v.f[18];
    c->v.s[6] = c->v.s[12];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[26]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[10] * c->v.f[18]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[12] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[0]);
    goto L_36f894;
L_36f77c:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f784u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f790u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f79cu; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f7a8u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f7b4u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[26] = c->v.f[24] * c->v.f[28];
    c->r[14] = 0x36f7c4u; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[28]);
    c->v.f[6] = -(float)(c->v.f[20] * c->v.f[30]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[18];
    c->v.f[26] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[30];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    goto L_36f9c0;
L_36f800:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f808u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f814u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f820u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f82cu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f838u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[31] = c->v.f[28] * c->v.f[26];
    c->v.f[29] = c->v.f[20] * c->v.f[18];
    c->r[14] = 0x36f84cu; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.f[6] = c->v.f[30] * c->v.f[18];
    c->v.s[22] = c->v.s[31];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[29]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[31] * c->v.f[30]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.s[6] = c->v.s[30] ^ 0x80000000u;
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[18]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36f894:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    goto L_36f9e0;
L_36f8a8:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f8b0u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f8bcu; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f8c8u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f8d4u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f8e0u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[22] = c->v.f[28] * c->v.f[26];
    c->r[14] = 0x36f8f0u; f_15efdf4(c);
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[6] = c->v.f[28] * c->v.f[0];
    c->v.f[8] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[30]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[30] * c->v.f[20];
    c->v.s[10] = c->v.s[28] ^ 0x80000000u;
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    c->v.f[26] = c->v.f[26] * c->v.f[20];
    goto L_36f9c4;
L_36f93c:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f944u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f950u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f95cu; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36f968u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36f974u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36f980u; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[26];
    c->v.f[12] = c->v.f[26] * c->v.f[20];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = -(float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[28] * c->v.f[4];
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[18]);
L_36f9c0:;
    ST32(c->r[13] + 84u, c->v.s[22]);
L_36f9c4:;
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36f9cc:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[29] = c->v.f[20] * c->v.f[18];
L_36f9e0:;
    ST32(c->r[13] + 112u, c->v.s[26]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[0] = 0x0u;
    ST32(c->r[13] + 116u, c->v.s[10]);
    ST32(c->r[13] + 120u, c->v.s[29]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[14] = LD32(c->r[10] + 16u);
    c->v.s[0] = LD32(c->r[10] + 20u);
    c->v.s[12] = LD32(c->r[10] + 24u);
    c->v.s[3] = LD32(c->r[10] + 4u);
    c->v.s[1] = LD32(c->r[10] + 8u);
    c->v.s[5] = LD32(c->r[10]);
L_36fa24:;
    c->v.f[9] = c->v.f[27] * c->v.f[8];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[25] * c->v.f[22]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[23] * c->v.f[10]);
    c->v.f[7] = c->v.f[27] * c->v.f[6];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[23] * c->v.f[26]);
    c->v.f[11] = c->v.f[27] * c->v.f[24];
    c->v.f[6] = c->v.f[21] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[8] = c->v.f[21] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[22]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[23] * c->v.f[29]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[26]);
    c->v.f[2] = c->v.f[9] + c->v.f[3];
    c->v.f[3] = c->v.f[21] * c->v.f[24];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[17] * c->v.f[29]);
    c->v.f[5] = c->v.f[7] + c->v.f[5];
    c->v.f[1] = c->v.f[11] + c->v.f[1];
    c->v.f[0] = c->v.f[8] + c->v.f[0];
    ST32(c->r[10], c->v.s[5]);
    ST32(c->r[10] + 4u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] + c->v.f[14];
    c->v.f[4] = c->v.f[3] + c->v.f[12];
    ST32(c->r[10] + 8u, c->v.s[1]);
    ST32(c->r[10] + 16u, c->v.s[2]);
    ST32(c->r[10] + 20u, c->v.s[0]);
    ST32(c->r[10] + 24u, c->v.s[4]);
    goto L_3705d0;
L_36faa0:;
    c->v.s[14] = c->r[4];
    c->v.s[0] = c->r[6];
    c->v.s[12] = c->r[10];
    goto L_36fde0;
L_36fab0:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fab8u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fac4u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fad0u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fadcu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fae8u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36faf4u; f_15efdf4(c);
    c->v.f[12] = c->v.f[28] * c->v.f[24];
    c->v.f[8] = c->v.f[22] * c->v.f[20];
    c->v.f[26] = c->v.f[24] * c->v.f[20];
    c->v.f[10] = c->v.f[28] * c->v.f[22];
    c->v.f[4] = -(float)(c->v.f[24] * c->v.f[0]);
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[23] = c->v.f[20] * c->v.f[18];
    c->v.s[6] = c->v.s[12];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[26]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[10] * c->v.f[18]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[12] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[0]);
    goto L_36fc60;
L_36fb48:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fb50u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fb5cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fb68u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fb74u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fb80u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[26] = c->v.f[24] * c->v.f[28];
    c->r[14] = 0x36fb90u; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[28]);
    c->v.f[6] = -(float)(c->v.f[20] * c->v.f[30]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[18];
    c->v.f[26] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[30];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    goto L_36fd8c;
L_36fbcc:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fbd4u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fbe0u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fbecu; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fbf8u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fc04u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[25] = c->v.f[28] * c->v.f[26];
    c->v.f[23] = c->v.f[20] * c->v.f[18];
    c->r[14] = 0x36fc18u; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.f[6] = c->v.f[30] * c->v.f[18];
    c->v.s[22] = c->v.s[25];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[23]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[25] * c->v.f[30]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.s[6] = c->v.s[30] ^ 0x80000000u;
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[18]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36fc60:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    goto L_36fdac;
L_36fc74:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fc7cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fc88u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fc94u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fca0u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fcacu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[22] = c->v.f[28] * c->v.f[26];
    c->r[14] = 0x36fcbcu; f_15efdf4(c);
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[6] = c->v.f[28] * c->v.f[0];
    c->v.f[8] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[30]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[30] * c->v.f[20];
    c->v.s[10] = c->v.s[28] ^ 0x80000000u;
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    c->v.f[26] = c->v.f[26] * c->v.f[20];
    goto L_36fd90;
L_36fd08:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fd10u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fd1cu; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fd28u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fd34u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fd40u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fd4cu; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[26];
    c->v.f[12] = c->v.f[26] * c->v.f[20];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = -(float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[28] * c->v.f[4];
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[18]);
L_36fd8c:;
    ST32(c->r[13] + 84u, c->v.s[22]);
L_36fd90:;
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36fd98:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[23] = c->v.f[20] * c->v.f[18];
L_36fdac:;
    ST32(c->r[13] + 112u, c->v.s[26]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 116u, c->v.s[10]);
    ST32(c->r[13] + 120u, c->v.s[23]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[14] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[12] = LD32(c->r[7] + 8u);
L_36fde0:;
    c->v.f[6] = c->v.f[21] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[19] * c->v.f[2]);
    c->r[9] = 0x1u;
    c->v.f[8] = c->v.f[21] * c->v.f[8];
    c->v.f[2] = c->v.f[21] * c->v.f[24];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[26]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[23]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[10]);
    c->v.f[4] = c->v.f[6] + c->v.f[14];
    c->v.f[0] = c->v.f[8] + c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[12];
    ST32(c->r[7], c->v.s[4]);
    ST32(c->r[7] + 4u, c->v.s[0]);
    ST32(c->r[7] + 8u, c->v.s[2]);
    goto L_3705d0;
L_36fe24:;
    c->v.s[12] = c->r[4];
    c->v.s[0] = c->r[6];
    c->v.s[14] = c->r[10];
    goto L_370170;
L_36fe34:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fe3cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fe48u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fe54u; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fe60u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fe6cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36fe78u; f_15efdf4(c);
    c->v.f[12] = c->v.f[28] * c->v.f[24];
    c->v.f[6] = c->v.f[22] * c->v.f[20];
    c->v.f[26] = c->v.f[24] * c->v.f[20];
    c->v.f[10] = c->v.f[28] * c->v.f[22];
    c->v.f[4] = -(float)(c->v.f[24] * c->v.f[0]);
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[27] = c->v.f[20] * c->v.f[18];
    c->v.s[8] = c->v.s[12];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[26]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[10] * c->v.f[18]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[12] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[6] * c->v.f[18]);
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[0]);
    goto L_36ffe4;
L_36fecc:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fed4u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36fee0u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36feecu; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36fef8u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36ff04u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[26] = c->v.f[24] * c->v.f[28];
    c->r[14] = 0x36ff14u; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[28]);
    c->v.f[8] = -(float)(c->v.f[20] * c->v.f[30]);
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[18];
    c->v.f[26] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[30];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    goto L_37011c;
L_36ff50:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36ff58u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36ff64u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x36ff70u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x36ff7cu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x36ff88u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[29] = c->v.f[28] * c->v.f[26];
    c->v.f[27] = c->v.f[20] * c->v.f[18];
    c->r[14] = 0x36ff9cu; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.f[6] = c->v.f[30] * c->v.f[18];
    c->v.s[22] = c->v.s[29];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.s[8] = c->v.s[30] ^ 0x80000000u;
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[27]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[29] * c->v.f[30]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[18]);
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_36ffe4:;
    ST32(c->r[13] + 96u, c->v.s[8]);
    ST32(c->r[13] + 100u, c->v.s[6]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    goto L_37013c;
L_36fff8:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x370000u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x37000cu; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x370018u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x370024u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x370030u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[22] = c->v.f[28] * c->v.f[26];
    c->r[14] = 0x370040u; f_15efdf4(c);
    c->v.f[6] = c->v.f[28] * c->v.f[0];
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[30]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[30] * c->v.f[20];
    c->v.s[10] = c->v.s[28] ^ 0x80000000u;
    c->v.f[8] = c->v.f[26] * c->v.f[6];
    c->v.f[6] = c->v.f[28] * c->v.f[18];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[30] * c->v.f[18]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    c->v.f[24] = c->v.f[6] * c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 96u, c->v.s[8]);
    c->v.f[26] = c->v.f[26] * c->v.f[20];
    goto L_37012c;
L_370098:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x3700a0u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x3700acu; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x3700b8u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x3700c4u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x3700d0u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x3700dcu; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[6] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[26];
    c->v.f[12] = c->v.f[26] * c->v.f[20];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = -(float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[28] * c->v.f[4];
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[10] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[18]);
L_37011c:;
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_370128:;
    ST32(c->r[13] + 96u, c->v.s[8]);
L_37012c:;
    ST32(c->r[13] + 100u, c->v.s[6]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[27] = c->v.f[20] * c->v.f[18];
L_37013c:;
    ST32(c->r[13] + 112u, c->v.s[26]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 116u, c->v.s[10]);
    ST32(c->r[13] + 120u, c->v.s[27]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[12] = LD32(c->r[7]);
    c->v.s[0] = LD32(c->r[7] + 4u);
    c->v.s[14] = LD32(c->r[7] + 8u);
L_370170:;
    c->v.f[8] = c->v.f[25] * c->v.f[8];
    c->v.f[1] = c->v.f[25] * c->v.f[24];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[2]);
    c->r[0] = 0x0u;
    c->v.f[4] = c->v.f[25] * c->v.f[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[23] * c->v.f[22]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[26]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[21] * c->v.f[27]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[2] = c->v.f[8] + c->v.f[12];
    c->v.f[6] = c->v.f[1] + c->v.f[14];
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[7], c->v.s[2]);
    ST32(c->r[7] + 8u, c->v.s[6]);
    ST32(c->r[7] + 16u, c->v.s[2]);
    c->v.f[2] = c->v.f[19] + c->v.f[0];
    c->v.f[0] = c->v.f[17] + c->v.f[0];
    ST32(c->r[7] + 24u, c->v.s[6]);
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[7] + 4u, c->v.s[2]);
    ST32(c->r[7] + 20u, c->v.s[0]);
    goto L_3705cc;
L_3701cc:;
    c->v.s[14] = c->r[4];
    c->v.s[12] = c->r[6];
    c->v.s[0] = c->r[10];
    goto L_37050c;
L_3701dc:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x3701e4u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x3701f0u; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x3701fcu; f_15efde8(c);
    c->v.s[22] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x370208u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x370214u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x370220u; f_15efdf4(c);
    c->v.f[12] = c->v.f[28] * c->v.f[24];
    c->v.f[8] = c->v.f[22] * c->v.f[20];
    c->v.f[26] = c->v.f[24] * c->v.f[20];
    c->v.f[10] = c->v.f[28] * c->v.f[22];
    c->v.f[4] = -(float)(c->v.f[24] * c->v.f[0]);
    c->v.f[24] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[27] = c->v.f[20] * c->v.f[18];
    c->v.s[6] = c->v.s[12];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[26]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[10] * c->v.f[18]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[12] * c->v.f[22]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[0]);
    goto L_37038c;
L_370274:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x37027cu; f_15efde8(c);
    c->v.s[24] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x370288u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x370294u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x3702a0u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x3702acu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[26] = c->v.f[24] * c->v.f[28];
    c->r[14] = 0x3702bcu; f_15efdf4(c);
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[26] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[4] = -(float)(c->v.f[20] * c->v.f[28]);
    c->v.f[6] = -(float)(c->v.f[20] * c->v.f[30]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[12] = c->v.f[24] * c->v.f[18];
    c->v.f[26] = c->v.f[28] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[30];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[30] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[0]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    goto L_3704b8;
L_3702f8:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x370300u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x37030cu; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x370318u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x370324u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x370330u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[29] = c->v.f[28] * c->v.f[26];
    c->v.f[27] = c->v.f[20] * c->v.f[18];
    c->r[14] = 0x370344u; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[20];
    c->v.f[6] = c->v.f[30] * c->v.f[18];
    c->v.s[22] = c->v.s[29];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[27]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[29] * c->v.f[30]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = -c->v.f[4] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.s[6] = c->v.s[30] ^ 0x80000000u;
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[18]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_37038c:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    goto L_3704d8;
L_3703a0:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x3703a8u; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x3703b4u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x3703c0u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x3703ccu; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x3703d8u; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->v.f[22] = c->v.f[28] * c->v.f[26];
    c->r[14] = 0x3703e8u; f_15efdf4(c);
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[6] = c->v.f[28] * c->v.f[0];
    c->v.f[8] = c->v.f[28] * c->v.f[18];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[30]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[30] * c->v.f[20];
    c->v.s[10] = c->v.s[28] ^ 0x80000000u;
    c->v.f[24] = c->v.f[8] * c->v.f[0];
    c->v.f[4] = c->v.f[4] * c->v.f[18];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[30]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[30] * c->v.f[18]);
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    ST32(c->r[13] + 80u, c->v.s[2]);
    ST32(c->r[13] + 84u, c->v.s[22]);
    c->v.f[26] = c->v.f[26] * c->v.f[20];
    goto L_3704bc;
L_370434:;
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x37043cu; f_15efde8(c);
    c->v.s[28] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x370448u; f_15efde8(c);
    c->v.s[26] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x370454u; f_15efde8(c);
    c->v.s[30] = c->v.s[0];
    c->v.s[0] = c->v.s[20];
    c->r[14] = 0x370460u; f_15efdf4(c);
    c->v.s[20] = c->v.s[0];
    c->v.s[0] = c->v.s[18];
    c->r[14] = 0x37046cu; f_15efdf4(c);
    c->v.s[18] = c->v.s[0];
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0x370478u; f_15efdf4(c);
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[20] * c->v.f[0];
    c->v.f[10] = c->v.f[28] * c->v.f[26];
    c->v.f[12] = c->v.f[26] * c->v.f[20];
    c->v.f[24] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[0];
    c->v.f[6] = -(float)(c->v.f[30] * c->v.f[18]);
    c->r[0] = 0x0u;
    c->v.f[22] = c->v.f[28] * c->v.f[4];
    c->v.f[4] = c->v.f[28] * c->v.f[30];
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[26] * c->v.f[8]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[10] * c->v.f[30]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[30] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[12]);
    ST32(c->r[13] + 80u, c->v.s[2]);
    c->v.f[10] = -(float)(c->v.f[28] * c->v.f[18]);
L_3704b8:;
    ST32(c->r[13] + 84u, c->v.s[22]);
L_3704bc:;
    ST32(c->r[13] + 88u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
L_3704c4:;
    ST32(c->r[13] + 96u, c->v.s[6]);
    ST32(c->r[13] + 100u, c->v.s[8]);
    ST32(c->r[13] + 104u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->v.f[27] = c->v.f[20] * c->v.f[18];
L_3704d8:;
    ST32(c->r[13] + 112u, c->v.s[26]);
    c->r[0] = 0x0u;
    ST32(c->r[13] + 116u, c->v.s[10]);
    ST32(c->r[13] + 120u, c->v.s[27]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->v.s[14] = LD32(c->r[7]);
    c->v.s[12] = LD32(c->r[7] + 4u);
    c->v.s[0] = LD32(c->r[7] + 8u);
L_37050c:;
    c->v.s[1] = 0x0u;
    c->v.f[3] = c->v.f[25] * c->v.f[6];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[23] * c->v.f[2]);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[7] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[7] = c->v.f[25] * c->v.f[24];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[21] * c->v.f[26]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[21] * c->v.f[27]);
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[9] = c->v.f[22] * c->v.f[1];
    c->v.f[11] = c->v.f[26] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[5] = c->v.f[25] * c->v.f[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[23] * c->v.f[22]);
    c->v.s[13] = c->v.s[2];
    c->v.s[15] = c->v.s[9];
    c->v.f[14] = c->v.f[3] + c->v.f[14];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[6]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[17] * c->v.f[8]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[19] * c->v.f[8]);
    c->v.f[10] = c->v.f[10] * c->v.f[1];
    c->v.f[1] = c->v.f[27] * c->v.f[1];
    c->v.f[0] = c->v.f[7] + c->v.f[0];
    c->v.f[12] = c->v.f[5] + c->v.f[12];
    c->v.f[2] = c->v.f[2] + c->v.f[11];
    c->v.f[3] = c->v.f[13] + c->v.f[11];
    c->v.s[13] = c->v.s[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[17] * c->v.f[24]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[19] * c->v.f[24]);
    c->v.f[5] = c->v.f[15] + c->v.f[10];
    c->v.f[3] = c->v.f[3] + c->v.f[14];
    c->v.f[8] = c->v.f[9] + c->v.f[10];
    c->v.f[2] = c->v.f[2] + c->v.f[14];
    c->v.f[4] = c->v.f[4] + c->v.f[1];
    c->v.f[6] = c->v.f[13] + c->v.f[1];
    c->v.f[5] = c->v.f[5] + c->v.f[12];
    ST32(c->r[7], c->v.s[3]);
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    ST32(c->r[7] + 4u, c->v.s[5]);
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    ST32(c->r[7] + 8u, c->v.s[6]);
    c->v.f[6] = c->v.f[8] + c->v.f[12];
    ST32(c->r[7] + 16u, c->v.s[2]);
    ST32(c->r[7] + 20u, c->v.s[6]);
    ST32(c->r[7] + 24u, c->v.s[0]);
L_3705cc:;
    c->r[9] = 0x3u;
L_3705d0:;
    c->r[0] = c->r[9];
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
L_3705e4:;
    c->r[1] = 0x31b0u;
    c->r[0] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD8(ea); c->r[0] = ea; c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_37062c; }
    c->r[0] = 0x31d0u;
    c->r[9] = 0x2u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    c->r[0] = 0x31d4u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = 0x31d8u;
    { uint32_t ea = c->r[8] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    goto L_3705d0;
L_37062c:;
    c->r[1] = 0x31c0u;
    c->r[2] = c->r[8];
    c->r[3] = c->r[8];
    c->r[7] = 0x1u;
    c->r[9] = 0x2u;
    { uint32_t ea = c->r[2] + c->r[1]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[1]); }
    c->r[1] = 0x31c4u;
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[1]); }
    c->r[1] = 0x31c8u;
    { uint32_t ea = c->r[8] + c->r[1]; uint32_t v = LD32(ea); c->r[8] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; ST8(ea, c->r[7]); }
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[3]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[3]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); }
    goto L_3705d0;
}
