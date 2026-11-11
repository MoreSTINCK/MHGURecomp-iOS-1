#include "cpu.h"
#include "neon_rt.h"
void f_ce10bc(Cpu *c);
void f_cd6cd4(Cpu *restrict c) {
    FN_ENTER(0xcd6cd4u);
L_cd6cd4:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x308u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[4] = 0x180u;
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x184u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x170u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[6] + 0x18cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[1] >> 16) - c->r[0];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[0] + 0x2u;
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD16(ea); c->r[14] = v; }
    c->r[4] = 0x188u;
    { uint32_t ea = c->r[6] + c->r[4]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[6] = (uint32_t)(uint16_t)(c->r[7]);
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[6]); }
    c->r[5] = (c->r[5] >> 4) & 0xfu;
    c->r[6] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.s[2] = c->r[0];
    c->v.s[16] = LD32(c->r[4]);
    c->v.s[18] = LD32(c->r[4] + 8u);
    c->v.s[20] = LD32(c->r[4] + 12u);
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    if (COND_EQ) { goto L_cd6d84; }
    (void)f_subs(c, c->r[5], 0x1u);
    if (COND_NE) { goto L_cd6d9c; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_cd6db0;
L_cd6d84:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_cd6db0;
L_cd6d9c:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_cd6db0:;
    c->v.f[22] = c->v.f[0] / c->v.f[2];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[2] << 4);
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[7] >> 16);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[1] >> 16);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[14] >> 1);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd6f64; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cd6f64; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    c->v.s[6] = 0x4b400000u;
    c->r[6] = 0xd62468u;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = 0xcd6e24u + c->r[6]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = c->v.s[20];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->r[1] = c->v.s[6];
    c->r[7] = c->r[1] + 0x400u;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[7] = c->r[7] & 0xfffu;
    c->r[1] = c->r[6] + (c->r[1] << 2);
    c->r[7] = c->r[6] + (c->r[7] << 2);
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[13] + 0x1f0u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[7]);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[4]);
    c->r[5] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[4] = c->r[0] - c->r[1];
    c->r[1] = 0xd62400u;
    { uint32_t ea = 0xcd6e8cu + c->r[1]; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[1] = 0x0u;
L_cd6e8c:;
    (void)f_subs(c, c->r[14], c->r[1]);
    c->r[12] = c->r[4];
    if (COND_NE) { c->r[12] = c->r[12] + c->r[1]; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[0] = (c->r[12] << 12);
    (void)f_subs(c, c->r[1], c->r[2]);
    c->r[0] = sdiv32(c->r[0], c->r[14]);
    c->r[6] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[6] = c->r[6] & 0xfffu;
    c->r[0] = c->r[8] + (c->r[0] << 2);
    c->v.s[4] = LD32(c->r[0]);
    c->r[0] = c->r[8] + (c->r[6] << 2);
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[7], c->v.s[4]);
    c->v.f[4] = c->v.f[0] * c->v.f[6];
    ST32(c->r[5], c->v.s[4]);
    ST32(c->r[0], c->v.s[2]);
    c->r[0] = 0x0u;
    c->v.s[4] = LD32(c->r[10] + 4u);
    c->v.s[6] = LD32(c->r[10] + 8u);
    c->v.s[8] = LD32(c->r[10]);
    c->v.s[10] = LD32(c->r[10] + 20u);
    c->v.s[3] = LD32(c->r[13] + 500u);
    c->v.s[14] = LD32(c->r[10] + 16u);
    c->v.s[12] = LD32(c->r[10] + 24u);
    c->v.s[1] = LD32(c->r[13] + 496u);
    c->v.s[5] = LD32(c->r[13] + 504u);
    c->v.s[7] = LD32(c->r[10] + 36u);
    c->v.s[9] = LD32(c->r[10] + 40u);
    c->v.s[11] = LD32(c->r[10] + 32u);
    c->v.f[14] = c->v.f[14] * c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[8] = c->v.f[3] * c->v.f[12];
    c->v.f[10] = c->v.f[3] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.s[4] = LD32(c->r[10] + 48u);
    c->v.s[12] = LD32(c->r[10] + 52u);
    c->v.s[3] = LD32(c->r[10] + 56u);
    { uint32_t ea = c->r[9] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[6] = c->v.f[12] + c->v.f[10];
    c->v.f[8] = c->v.f[3] + c->v.f[8];
    ST32(c->r[9], c->v.s[4]);
    ST32(c->r[9] + 4u, c->v.s[6]);
    ST32(c->r[9] + 8u, c->v.s[8]);
    c->r[9] = c->r[9] + 0x10u;
    if (COND_LT) { goto L_cd6e8c; }
L_cd6f64:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[0] = 0x11au;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[7] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[9] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[7] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[12] = c->r[2] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[2] + 0x80u;
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[8]); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    c->r[1] = c->r[2] + 0x40u;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[12]); }
    c->r[1] = c->r[2];
    c->r[2] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[12]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[8]); }
    c->r[1] = c->r[13] + 0x1b4u;
    c->r[6] = c->r[14];
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0x34u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[14] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[7] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_HI) { goto L_cd7f38; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[24] = c->v.f[20] - c->v.f[18];
    c->v.f[26] = c->v.f[18] + c->v.f[20];
    c->v.s[28] = 0x40490fdbu;
    c->v.s[30] = 0x4422f983u;
    c->v.s[17] = 0x4b400000u;
    c->r[0] = c->r[5] - 0x1u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] | c->r[7];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] - c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x1f0u;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[5];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[7] - c->r[0];
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 24);
    c->r[0] = c->r[0] - (c->r[4] >> 24);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 16) & 0xffu;
    c->r[1] = (c->r[2] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 8) & 0xffu;
    c->r[1] = (c->r[2] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[4]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - 0x1u;
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x200u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 24);
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 16);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[4]); }
    c->r[1] = c->r[0] & 0xfu;
    c->r[0] = 0xd620a8u;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[1]); }
    { uint32_t ea = 0xcd71e4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd6209cu;
    { uint32_t ea = 0xcd71f0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    goto L_cd721c;
L_cd7204:;
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[2] = 0x100u;
    if (COND_LT) { goto L_cd7570; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[3];
    goto L_cd754c;
L_cd721c:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    c->r[14] = c->r[13] + 0x34u;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[14]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[14] = LD32(ea + 8u); }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[9] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_cd7388; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cd7388; }
    c->v.f[0] = c->v.f[0] * c->v.f[28];
    c->v.s[2] = c->v.s[17];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[30]);
    c->r[0] = c->v.s[2];
    c->v.s[2] = c->v.s[20];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[1]);
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[4]);
L_cd72b8:;
    (void)f_subs(c, c->r[6], c->r[1]);
    c->r[2] = c->r[4];
    if (COND_NE) { c->r[2] = c->r[2] + c->r[1]; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = (c->r[2] << 12);
    (void)f_subs(c, c->r[1], c->r[7]);
    c->r[2] = sdiv32(c->r[2], c->r[6]);
    c->r[3] = c->r[2] + 0x400u;
    c->r[2] = c->r[2] & 0xfffu;
    c->r[3] = c->r[3] & 0xfffu;
    c->r[2] = c->r[9] + (c->r[2] << 2);
    c->v.s[4] = LD32(c->r[2]);
    c->r[2] = c->r[9] + (c->r[3] << 2);
    c->v.s[6] = LD32(c->r[2]);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[5], c->v.s[4]);
    c->v.f[4] = c->v.f[0] * c->v.f[6];
    ST32(c->r[14], c->v.s[4]);
    ST32(c->r[12], c->v.s[2]);
    c->v.s[4] = LD32(c->r[10] + 4u);
    c->v.s[6] = LD32(c->r[10] + 8u);
    c->v.s[8] = LD32(c->r[10]);
    c->v.s[10] = LD32(c->r[10] + 20u);
    c->v.s[3] = LD32(c->r[13] + 500u);
    c->v.s[14] = LD32(c->r[10] + 16u);
    c->v.s[12] = LD32(c->r[10] + 24u);
    c->v.s[1] = LD32(c->r[13] + 496u);
    c->v.s[5] = LD32(c->r[13] + 504u);
    c->v.s[7] = LD32(c->r[10] + 36u);
    c->v.s[9] = LD32(c->r[10] + 40u);
    c->v.s[11] = LD32(c->r[10] + 32u);
    c->v.f[14] = c->v.f[14] * c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[8] = c->v.f[3] * c->v.f[12];
    c->v.f[10] = c->v.f[3] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.s[4] = LD32(c->r[10] + 48u);
    c->v.s[12] = LD32(c->r[10] + 52u);
    c->v.s[3] = LD32(c->r[10] + 56u);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[8]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[6] = c->v.f[12] + c->v.f[10];
    c->v.f[8] = c->v.f[3] + c->v.f[8];
    ST32(c->r[0] - 8u, c->v.s[4]);
    ST32(c->r[0] - 4u, c->v.s[6]);
    ST32(c->r[0], c->v.s[8]);
    c->r[0] = c->r[0] + 0x10u;
    if (COND_LT) { goto L_cd72b8; }
L_cd7388:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { goto L_cd75d4; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cd7464; }
    c->r[0] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_cd7420; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0xcd73bcu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0xcd73d0u: goto L_cd73d0; case 0xcd73ecu: goto L_cd73ec; case 0xcd7404u: goto L_cd7404; case 0xcd7428u: goto L_cd7428; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd73d0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LE) { goto L_cd7464; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd7460;
L_cd73ec:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LE) { goto L_cd7464; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] - c->r[0];
    goto L_cd7458;
L_cd7404:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_GE) { goto L_cd7464; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd7460;
L_cd7420:;
    c->r[1] = 0x100u;
    goto L_cd7464;
L_cd7428:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_cd7464; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_GE) { goto L_cd7448; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd7460;
L_cd7448:;
    c->r[1] = 0x100u;
    if (COND_LE) { goto L_cd7464; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[4];
L_cd7458:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 8);
L_cd7460:;
    c->r[1] = sdiv32(c->r[0], c->r[1]);
L_cd7464:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[6] - 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    c->r[0] = c->r[0] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[2] = 0x100u;
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    if (COND_HI) { goto L_cd7570; }
    c->r[7] = (c->r[7] << 2);
    c->r[6] = 0xcd74d4u + 0x8u;
    c->r[3] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[6]; switch (c->pc) { case 0xcd74ecu: goto L_cd74ec; case 0xcd7508u: goto L_cd7508; case 0xcd7534u: goto L_cd7534; case 0xcd7558u: goto L_cd7558; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd74ec:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x100u;
    if (COND_LE) { goto L_cd7570; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cd756c;
L_cd7508:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_cd7570; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_cd7204; }
    c->r[7] = c->r[2];
    c->r[2] = (c->r[3] << 8);
    c->r[2] = sdiv32(c->r[2], c->r[7]);
    goto L_cd7570;
L_cd7534:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_LT) { goto L_cd7570; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
L_cd754c:;
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] << 8);
    goto L_cd756c;
L_cd7558:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GE) { goto L_cd7570; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cd756c:;
    c->r[2] = sdiv32(c->r[2], c->r[3]);
L_cd7570:;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    c->r[0] = c->r[0] | (c->r[1] << 24);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
L_cd75d4:;
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cd7818; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_cd7a28; }
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[8]); }
    ST32(c->r[12], c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[10] + 4u);
    c->v.s[2] = LD32(c->r[10] + 8u);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[10] + 20u);
    c->v.s[14] = LD32(c->r[13] + 500u);
    c->v.s[10] = LD32(c->r[10] + 16u);
    c->v.s[8] = LD32(c->r[10] + 24u);
    c->v.s[12] = LD32(c->r[13] + 496u);
    c->v.s[1] = LD32(c->r[13] + 504u);
    c->v.s[3] = LD32(c->r[10] + 36u);
    c->v.s[5] = LD32(c->r[10] + 40u);
    c->v.s[7] = LD32(c->r[10] + 32u);
    c->v.s[9] = LD32(c->r[10] + 56u);
    (void)f_subs(c, c->r[1], c->r[0]);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[10] + 48u);
    c->v.s[14] = LD32(c->r[10] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[19] = c->v.f[8] + c->v.f[10];
    c->v.f[21] = c->v.f[14] + c->v.f[6];
    c->v.f[23] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 496u, c->v.s[19]);
    ST32(c->r[13] + 500u, c->v.s[21]);
    ST32(c->r[13] + 504u, c->v.s[23]);
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[8]); }
    if (COND_CC) { goto L_cd7f18; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd7e40; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = 0x0u;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x18u;
L_cd76bc:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + (c->r[9] << 4);
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[8] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    ST32(c->r[13] + 352u, c->v.s[19]);
    ST32(c->r[13] + 356u, c->v.s[21]);
    ST32(c->r[13] + 360u, c->v.s[23]);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_cd7748; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_cd773c; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    c->r[0] = c->r[1];
    if (COND_NE) { goto L_cd7748; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[1]); }
    goto L_cd7748;
L_cd773c:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
L_cd7748:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_cd7768; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
L_cd7768:;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[12] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x1e8u;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd77f8u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[8] = c->r[8] + 0x10u;
    c->r[0] = c->r[0] + c->r[9];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd76bc; }
    goto L_cd7f18;
L_cd7818:;
    { uint32_t ea = c->r[5]; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[14]; ST32(ea, c->r[8]); }
    ST32(c->r[12], c->v.s[26]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[10] + 4u);
    c->v.s[2] = LD32(c->r[10] + 8u);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[10] + 20u);
    c->v.s[14] = LD32(c->r[13] + 500u);
    c->v.s[10] = LD32(c->r[10] + 16u);
    c->v.s[8] = LD32(c->r[10] + 24u);
    c->v.s[12] = LD32(c->r[13] + 496u);
    c->v.s[1] = LD32(c->r[13] + 504u);
    c->v.s[3] = LD32(c->r[10] + 36u);
    c->v.s[5] = LD32(c->r[10] + 40u);
    c->v.s[7] = LD32(c->r[10] + 32u);
    c->v.s[9] = LD32(c->r[10] + 56u);
    (void)f_subs(c, c->r[1], c->r[0]);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[10] + 48u);
    c->v.s[14] = LD32(c->r[10] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[19] = c->v.f[8] + c->v.f[10];
    c->v.f[21] = c->v.f[14] + c->v.f[6];
    c->v.f[23] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 496u, c->v.s[19]);
    ST32(c->r[13] + 500u, c->v.s[21]);
    ST32(c->r[13] + 504u, c->v.s[23]);
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[8]); }
    if (COND_CC) { goto L_cd7f18; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd7d64; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x18u;
L_cd78d4:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 288u, c->v.s[19]);
    ST32(c->r[13] + 292u, c->v.s[21]);
    ST32(c->r[13] + 296u, c->v.s[23]);
    c->r[0] = c->r[0] + (c->r[8] << 4);
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[9] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[2]); }
    c->r[3] = c->r[13] + 0x1a0u;
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_cd7960; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cd7954; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    c->r[0] = c->r[1];
    if (COND_NE) { goto L_cd7960; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[1]); }
    goto L_cd7960;
L_cd7954:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
L_cd7960:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd797c; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
L_cd797c:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[13] + 0x200u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x1e8u;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd7a08u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd78d4; }
    goto L_cd7f18;
L_cd7a28:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cd7f18; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = 0x0u;
    c->r[9] = 0x18u;
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = 0x0u;
    c->r[2] = c->r[1];
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    if (COND_EQ) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
L_cd7ac4:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[8] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[8] << 4);
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd7c90; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd7b9c; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cd7b8c; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_cd7b9c; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    goto L_cd7b9c;
L_cd7b8c:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
L_cd7b9c:;
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd7bc8; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_cd7bc8:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_cd7c90; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x200u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[1] = c->r[13] + 0xe0u;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    goto L_cd7d14;
L_cd7c90:;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[12] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_cd7d14:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x1e8u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd7d40u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd7ac4; }
    goto L_cd7f18;
L_cd7d64:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[0] + 0x18u;
L_cd7d70:;
    ST32(c->r[13] + 288u, c->v.s[19]);
    ST32(c->r[13] + 292u, c->v.s[21]);
    ST32(c->r[13] + 296u, c->v.s[23]);
    c->r[2] = c->r[9] - 0x18u;
    c->r[3] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[3] = c->r[13] + 0x1a0u;
    { uint32_t ea = c->r[9] - 8u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x1e8u;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd7e24u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_cd7d70; }
    goto L_cd7f18;
L_cd7e40:;
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[0] + 0x18u;
L_cd7e4c:;
    c->r[2] = c->r[9] - 0x18u;
    c->r[3] = c->r[13] + 0xe0u;
    c->r[12] = c->r[13] + 0x200u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[3] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[9] - 8u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    ST32(c->r[13] + 352u, c->v.s[19]);
    ST32(c->r[13] + 356u, c->v.s[21]);
    ST32(c->r[13] + 360u, c->v.s[23]);
    c->r[1] = c->r[13] + 0xe0u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x1e8u;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd7f04u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_cd7e4c; }
L_cd7f18:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = 0x0u;
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd721c; }
L_cd7f38:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
