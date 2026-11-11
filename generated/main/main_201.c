#include "cpu.h"
#include "neon_rt.h"
void f_cb0ad8(Cpu *c);
void f_ce0de8(Cpu *c);
void f_cda090(Cpu *restrict c) {
    FN_ENTER(0xcda090u);
L_cda090:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x348u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[1]); }
    c->r[9] = c->r[0];
    c->r[12] = c->r[3];
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = 0x3f800000u;
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x180u; uint32_t v = LD32(ea); c->r[3] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[3] - 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[3] + 4u; c->r[4] = LD32(ea + 0u); c->r[14] = LD32(ea + 4u); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[3] + 0xcu; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[3] = (uint32_t)(uint16_t)(c->r[4]);
    c->r[7] = (uint32_t)(uint16_t)(c->r[14]);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[4] >> 16) - c->r[3];
    c->v.s[2] = c->r[7];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[3]); }
    c->r[10] = c->r[3] + 0x2u;
    c->r[3] = (uint32_t)(uint16_t)(c->r[5]);
    c->r[5] = (uint32_t)(uint16_t)(c->r[0]);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[1] >> 4) & 0xfu;
    c->v.s[16] = LD32(c->r[6]);
    c->v.s[18] = LD32(c->r[6] + 8u);
    c->v.s[20] = LD32(c->r[6] + 12u);
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[7]); }
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cda144; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_NE) { goto L_cda16c; }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    goto L_cda180;
L_cda144:;
    c->r[3] = 0x2u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    goto L_cda180;
L_cda16c:;
    c->r[3] = 0x1u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[3]); }
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[3]); }
    c->r[3] = 0x2u;
L_cda180:;
    c->v.f[22] = c->v.f[0] / c->v.f[2];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[3]); }
    c->r[3] = c->r[12] + (c->r[10] << 4);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[0] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[9]); }
    c->r[1] = c->r[0] | (c->r[4] << 16);
    c->r[0] = (c->r[14] >> 16);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[3]); }
    c->r[3] = (c->r[5] >> 1);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[0] | (c->r[7] << 16);
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_EQ) { goto L_cda378; }
    c->v.s[2] = c->r[3];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_adds(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_cda378; }
    c->v.s[4] = 0x40490fdbu;
    c->v.s[6] = 0x4422f983u;
    c->v.s[8] = 0x4b400000u;
    c->r[3] = 0xd5f080u;
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[12] = 0x0u;
    { uint32_t ea = 0xcda20cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.s[4] = c->v.s[20];
    c->v.f[2] = c->v.f[2] * c->v.f[22];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[6]);
    c->r[0] = c->v.s[8];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[3] + (c->r[0] << 2);
    c->r[1] = c->r[3] + (c->r[1] << 2);
    c->r[3] = 0xd5f040u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x230u;
    c->v.s[6] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = 0xcda24cu + c->r[3]; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[6]);
    c->r[4] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[7] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[0] - c->r[1];
    c->r[0] = 0x0u;
L_cda274:;
    (void)f_subs(c, c->r[5], c->r[12]);
    c->r[1] = c->r[14];
    if (COND_NE) { c->r[1] = c->r[1] + c->r[12]; }
    c->r[12] = c->r[12] + 0x1u;
    c->r[1] = (c->r[1] << 12);
    (void)f_subs(c, c->r[12], c->r[10]);
    c->r[1] = sdiv32(c->r[1], c->r[5]);
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[9] = c->r[1] + 0x400u;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[9] = c->r[9] & 0xfffu;
    c->r[1] = c->r[3] + (c->r[1] << 2);
    c->v.s[6] = LD32(c->r[1]);
    c->r[1] = c->r[3] + (c->r[9] << 2);
    c->v.s[8] = LD32(c->r[1]);
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    ST32(c->r[7], c->v.s[6]);
    c->v.f[6] = c->v.f[2] * c->v.f[8];
    ST32(c->r[4], c->v.s[6]);
    ST32(c->r[2], c->v.s[4]);
    c->v.s[6] = LD32(c->r[8] + 4u);
    c->v.s[8] = LD32(c->r[8] + 8u);
    c->v.s[10] = LD32(c->r[8]);
    c->v.s[12] = LD32(c->r[8] + 20u);
    c->v.s[5] = LD32(c->r[13] + 564u);
    c->v.s[1] = LD32(c->r[8] + 16u);
    c->v.s[14] = LD32(c->r[8] + 24u);
    c->v.s[3] = LD32(c->r[13] + 560u);
    c->v.s[7] = LD32(c->r[13] + 568u);
    c->v.s[9] = LD32(c->r[8] + 36u);
    c->v.s[11] = LD32(c->r[8] + 40u);
    c->v.s[13] = LD32(c->r[8] + 32u);
    c->v.f[1] = c->v.f[1] * c->v.f[5];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[10] = c->v.f[5] * c->v.f[14];
    c->v.f[12] = c->v.f[5] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[13] * c->v.f[7]);
    c->v.s[6] = LD32(c->r[8] + 48u);
    c->v.s[14] = LD32(c->r[8] + 52u);
    c->v.s[5] = LD32(c->r[8] + 56u);
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[11]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[7] * c->v.f[9]);
    c->v.f[6] = c->v.f[6] + c->v.f[1];
    c->v.f[8] = c->v.f[14] + c->v.f[12];
    c->v.f[10] = c->v.f[5] + c->v.f[10];
    ST32(c->r[6], c->v.s[6]);
    ST32(c->r[6] + 4u, c->v.s[8]);
    ST32(c->r[6] + 8u, c->v.s[10]);
    c->r[6] = c->r[6] + 0x10u;
    if (COND_LT) { goto L_cda274; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[2] + 0xau; uint32_t v = LD16(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x2u; uint32_t v = LD16(ea); c->r[2] = v; }
    c->r[1] = c->r[2] | (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[3] | (c->r[0] << 16);
L_cda378:;
    c->r[3] = (uint32_t)(uint16_t)(c->r[1]);
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[24] = 0x0u;
    (void)f_subs(c, c->r[3], 0x0u);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[26] = c->v.s[24];
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cda3ac; }
    c->r[1] = c->r[3] + 0x1u;
    c->v.s[2] = c->r[1];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[26] = c->v.f[0] / c->v.f[2];
L_cda3ac:;
    c->r[1] = (c->r[7] >> 16);
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[1]); }
    c->r[1] = (c->r[4] >> 16);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    c->r[1] = (uint32_t)(uint16_t)(c->r[0]);
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_cda3dc; }
    c->r[0] = c->r[1] + 0x1u;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[24] = c->v.f[0] / c->v.f[2];
L_cda3dc:;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[1]); }
    c->r[0] = 0x11au;
    c->r[3] = c->r[13] + 0x208u;
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[0] = v; c->r[1] = v2; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[2] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xcda428u; f_ce0de8(c);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[9] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    c->r[3] = c->r[0] + 0xc0u;
    c->r[2] = c->r[0] + 0x80u;
    c->r[4] = c->r[0];
    c->r[12] = c->r[3];
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[2]); }
    c->r[4] = c->r[4] + 0x40u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[1]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    c->r[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[0]); }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x1e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[12];
    { uint32_t ea = c->r[5]; c->r[5] = c->r[5] + 16u; c->r[1] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); c->r[4] = c->r[4] + 16u; }
    c->r[14] = c->r[6];
    c->r[9] = c->r[7];
    { uint32_t ea = c->r[5]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); c->r[3] = LD32(ea + 12u); }
    { uint32_t ea = c->r[4]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); ST32(ea + 12u, c->r[3]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); }
    c->r[0] = c->r[13] + 0x12cu;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[12]); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[6]); ST32(ea + 8u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x1d4u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x54u; ST16(ea, c->r[0]); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[14] + 0x14u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x21cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_cdb7b8; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = ~0x0u;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[28] = c->v.f[20] - c->v.f[18];
    c->v.f[30] = c->v.f[18] + c->v.f[20];
    c->v.s[17] = 0x40490fdbu;
    c->v.s[19] = 0x4422f983u;
    c->v.s[21] = 0x4b400000u;
    c->v.s[23] = 0x3f000000u;
    c->r[0] = c->r[0] + (uint32_t)(uint16_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x230u;
    c->r[14] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[3] - c->r[0];
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[12], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[2] >> 24);
    c->r[0] = c->r[0] - (c->r[6] >> 24);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16) & 0xffu;
    c->r[1] = (c->r[2] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8) & 0xffu;
    c->r[1] = (c->r[2] >> 8) & 0xffu;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[9]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] - 0x1u;
    c->r[3] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x240u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 24);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd5eafcu;
    { uint32_t ea = 0xcda790u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd5eaf0u;
    { uint32_t ea = 0xcda79cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    goto L_cda7b8;
L_cda7a0:;
    (void)f_subs(c, c->r[7], c->r[2]);
    c->r[2] = 0x100u;
    if (COND_LT) { goto L_cdab44; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[3];
    goto L_cdab18;
L_cda7b8:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[12], c->r[0]);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[12] = v; }
    if (COND_GE) { goto L_cda918; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cda918; }
    c->v.f[0] = c->v.f[0] * c->v.f[17];
    c->v.s[2] = c->v.s[21];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[19]);
    c->r[0] = c->v.s[2];
    c->v.s[2] = c->v.s[20];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[1]);
    c->r[1] = 0x0u;
    c->r[0] = c->r[0] + 0x8u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[4]);
L_cda844:;
    (void)f_subs(c, c->r[7], c->r[1]);
    c->r[2] = c->r[6];
    if (COND_NE) { c->r[2] = c->r[2] + c->r[1]; }
    c->r[1] = c->r[1] + 0x1u;
    c->r[2] = (c->r[2] << 12);
    (void)f_subs(c, c->r[1], c->r[10]);
    c->r[2] = sdiv32(c->r[2], c->r[7]);
    c->r[3] = c->r[2] + 0x400u;
    c->r[2] = c->r[2] & 0xfffu;
    c->r[3] = c->r[3] & 0xfffu;
    c->r[2] = c->r[12] + (c->r[2] << 2);
    c->v.s[4] = LD32(c->r[2]);
    c->r[2] = c->r[12] + (c->r[3] << 2);
    c->r[3] = 0x0u;
    c->v.s[6] = LD32(c->r[2]);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    ST32(c->r[5], c->v.s[4]);
    c->v.f[4] = c->v.f[0] * c->v.f[6];
    ST32(c->r[9], c->v.s[4]);
    ST32(c->r[14], c->v.s[2]);
    c->v.s[4] = LD32(c->r[8] + 4u);
    c->v.s[6] = LD32(c->r[8] + 8u);
    c->v.s[8] = LD32(c->r[8]);
    c->v.s[10] = LD32(c->r[8] + 20u);
    c->v.s[3] = LD32(c->r[13] + 564u);
    c->v.s[14] = LD32(c->r[8] + 16u);
    c->v.s[12] = LD32(c->r[8] + 24u);
    c->v.s[1] = LD32(c->r[13] + 560u);
    c->v.s[5] = LD32(c->r[13] + 568u);
    c->v.s[7] = LD32(c->r[8] + 36u);
    c->v.s[9] = LD32(c->r[8] + 40u);
    c->v.s[11] = LD32(c->r[8] + 32u);
    c->v.f[14] = c->v.f[14] * c->v.f[3];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[8] = c->v.f[3] * c->v.f[12];
    c->v.f[10] = c->v.f[3] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.s[4] = LD32(c->r[8] + 48u);
    c->v.s[12] = LD32(c->r[8] + 52u);
    c->v.s[3] = LD32(c->r[8] + 56u);
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[3]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[6] = c->v.f[12] + c->v.f[10];
    c->v.f[8] = c->v.f[3] + c->v.f[8];
    ST32(c->r[0] - 8u, c->v.s[4]);
    ST32(c->r[0] - 4u, c->v.s[6]);
    ST32(c->r[0], c->v.s[8]);
    c->r[0] = c->r[0] + 0x10u;
    if (COND_LT) { goto L_cda844; }
L_cda918:;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[10] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cdabac; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_cdaa08; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_cda9b8; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0xcda954u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0xcda968u: goto L_cda968; case 0xcda984u: goto L_cda984; case 0xcda99cu: goto L_cda99c; case 0xcda9c0u: goto L_cda9c0; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cda968:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_LE) { goto L_cdaa08; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[7] << 8);
    goto L_cdaa04;
L_cda984:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LE) { goto L_cdaa08; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[7] - c->r[0];
    goto L_cda9fc;
L_cda99c:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_GE) { goto L_cdaa08; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[7] << 8);
    goto L_cdaa04;
L_cda9b8:;
    c->r[1] = 0x100u;
    goto L_cdaa08;
L_cda9c0:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[7]);
    if (COND_EQ) { goto L_cdaa08; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[7], c->r[1]);
    if (COND_GE) { goto L_cda9ec; }
    c->r[0] = (c->r[7] << 8);
    goto L_cdaa04;
L_cda9ec:;
    c->r[1] = 0x100u;
    if (COND_LE) { goto L_cdaa08; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[7];
L_cda9fc:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 8);
L_cdaa04:;
    c->r[1] = sdiv32(c->r[0], c->r[1]);
L_cdaa08:;
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
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
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[6] = c->r[2] - 0x1u;
    c->r[2] = 0x100u;
    (void)f_subs(c, c->r[6], 0x3u);
    if (COND_HI) { goto L_cdaab4; }
    c->r[6] = (c->r[6] << 2);
    c->r[5] = 0xcdaa7cu + 0x8u;
    c->r[3] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[6] + c->r[5]; uint32_t v = LD32(ea); c->r[6] = v; }
    c->pc = c->r[6] + c->r[5]; switch (c->pc) { case 0xcdaa94u: goto L_cdaa94; case 0xcdaabcu: goto L_cdaabc; case 0xcdaaf4u: goto L_cdaaf4; case 0xcdab24u: goto L_cdab24; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cdaa94:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x100u;
    if (COND_LE) { goto L_cdab44; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cdab40;
L_cdaab4:;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_cdab44;
L_cdaabc:;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[3]);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_EQ) { goto L_cdab44; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_cda7a0; }
    c->r[7] = c->r[2];
    c->r[2] = (c->r[3] << 8);
    c->r[2] = sdiv32(c->r[2], c->r[7]);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_cdab44;
L_cdaaf4:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[6], c->r[7]);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    if (COND_LT) { goto L_cdab44; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
L_cdab18:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] << 8);
    goto L_cdab40;
L_cdab24:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[7] = v; }
    if (COND_GE) { goto L_cdab44; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
L_cdab40:;
    c->r[2] = sdiv32(c->r[2], c->r[3]);
L_cdab44:;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
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
    c->r[3] = 0x0u;
    c->r[0] = c->r[0] | (c->r[1] << 24);
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
L_cdabac:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cdaca0; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sdiv32(c->r[7], c->r[1]);
    c->r[0] = c->r[7] - c->r[0] * c->r[1];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[0] = c->v.f[24] * c->v.f[0];
    if (COND_NE) { goto L_cdac50; }
    c->v.s[2] = LD32(c->r[13] + 520u);
    c->v.s[4] = LD32(c->r[13] + 536u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 544u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 280u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 528u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[24] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 344u, c->v.s[12]);
    ST32(c->r[13] + 408u, c->v.s[2]);
    ST32(c->r[13] + 472u, c->v.s[6]);
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_NE) { goto L_cdaca8; }
    goto L_cdb004;
L_cdac50:;
    c->v.s[2] = LD32(c->r[13] + 524u);
    c->v.s[4] = LD32(c->r[13] + 540u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 548u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 284u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 532u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[24] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 348u, c->v.s[12]);
    ST32(c->r[13] + 412u, c->v.s[2]);
    ST32(c->r[13] + 476u, c->v.s[6]);
L_cdaca0:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_cdb004; }
L_cdaca8:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_NE) { goto L_cdb358; }
    { uint32_t ea = c->r[10]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[3]); }
    ST32(c->r[14], c->v.s[28]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[8] + 4u);
    c->v.s[2] = LD32(c->r[8] + 8u);
    c->v.s[4] = LD32(c->r[8]);
    c->v.s[6] = LD32(c->r[8] + 20u);
    c->v.s[14] = LD32(c->r[13] + 564u);
    c->v.s[10] = LD32(c->r[8] + 16u);
    c->v.s[8] = LD32(c->r[8] + 24u);
    c->v.s[12] = LD32(c->r[13] + 560u);
    c->v.s[1] = LD32(c->r[13] + 568u);
    c->v.s[3] = LD32(c->r[8] + 36u);
    c->v.s[5] = LD32(c->r[8] + 40u);
    c->v.s[7] = LD32(c->r[8] + 32u);
    c->v.s[9] = LD32(c->r[8] + 56u);
    (void)f_subs(c, c->r[1], c->r[0]);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[8] + 48u);
    c->v.s[14] = LD32(c->r[8] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[25] = c->v.f[8] + c->v.f[10];
    c->v.f[27] = c->v.f[14] + c->v.f[6];
    c->v.f[29] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 560u, c->v.s[25]);
    ST32(c->r[13] + 564u, c->v.s[27]);
    ST32(c->r[13] + 568u, c->v.s[29]);
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[3]); }
    if (COND_CC) { goto L_cdb78c; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    c->r[9] = 0x18u;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
L_cdad60:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = c->r[7] + (c->r[10] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 384u, c->v.s[25]);
    ST32(c->r[13] + 388u, c->v.s[27]);
    ST32(c->r[13] + 392u, c->v.s[29]);
    if (COND_EQ) { goto L_cdae34; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[1] = sdiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    if (COND_NE) { goto L_cdae60; }
    c->v.s[2] = LD32(c->r[13] + 524u);
    c->v.s[4] = LD32(c->r[13] + 532u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 548u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 284u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 540u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[26] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 412u, c->v.s[12]);
    ST32(c->r[13] + 348u, c->v.s[2]);
    ST32(c->r[13] + 476u, c->v.s[6]);
    c->v.s[4] = LD32(c->r[13] + 408u);
    c->v.s[2] = LD32(c->r[13] + 472u);
    goto L_cdaeb0;
L_cdae34:;
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[1]); }
    goto L_cdaeb0;
L_cdae60:;
    c->v.s[6] = LD32(c->r[13] + 520u);
    c->v.s[2] = LD32(c->r[13] + 528u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[4] = LD32(c->r[13] + 544u);
    c->v.s[10] = c->r[0];
    c->v.f[8] = c->v.f[2] - c->v.f[6];
    c->v.s[2] = c->v.s[6];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[13] + 280u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 536u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[12] = c->v.f[4] - c->v.f[2];
    c->v.f[10] = c->v.f[26] * c->v.f[10];
    c->v.s[4] = c->v.s[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[12]);
    ST32(c->r[13] + 408u, c->v.s[4]);
    ST32(c->r[13] + 344u, c->v.s[6]);
    ST32(c->r[13] + 472u, c->v.s[2]);
L_cdaeb0:;
    c->v.f[0] = c->v.f[4] + c->v.f[2];
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[0] = c->v.f[0] * c->v.f[23];
    ST32(c->r[13] + 408u, c->v.s[0]);
    if (COND_EQ) { goto L_cdaf3c; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_cdaf1c; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cdaf10; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    c->r[0] = c->r[1];
    if (COND_NE) { goto L_cdaf1c; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    goto L_cdaf1c;
L_cdaf10:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
L_cdaf1c:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_cdaf3c; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
L_cdaf3c:;
    c->r[1] = c->r[13] + 0x100u;
    c->r[12] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcdafdcu; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cdad60; }
    goto L_cdb78c;
L_cdb004:;
    { uint32_t ea = c->r[10]; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[9]; ST32(ea, c->r[3]); }
    ST32(c->r[14], c->v.s[30]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[0] = LD32(c->r[8] + 4u);
    c->v.s[2] = LD32(c->r[8] + 8u);
    c->v.s[4] = LD32(c->r[8]);
    c->v.s[6] = LD32(c->r[8] + 20u);
    c->v.s[14] = LD32(c->r[13] + 564u);
    c->v.s[10] = LD32(c->r[8] + 16u);
    c->v.s[8] = LD32(c->r[8] + 24u);
    c->v.s[12] = LD32(c->r[13] + 560u);
    c->v.s[1] = LD32(c->r[13] + 568u);
    c->v.s[3] = LD32(c->r[8] + 36u);
    c->v.s[5] = LD32(c->r[8] + 40u);
    c->v.s[7] = LD32(c->r[8] + 32u);
    c->v.s[9] = LD32(c->r[8] + 56u);
    (void)f_subs(c, c->r[1], c->r[0]);
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[4] = c->v.f[14] * c->v.f[8];
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[8] = LD32(c->r[8] + 48u);
    c->v.s[14] = LD32(c->r[8] + 52u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[5]);
    c->v.f[25] = c->v.f[8] + c->v.f[10];
    c->v.f[27] = c->v.f[14] + c->v.f[6];
    c->v.f[29] = c->v.f[9] + c->v.f[4];
    ST32(c->r[13] + 560u, c->v.s[25]);
    ST32(c->r[13] + 564u, c->v.s[27]);
    ST32(c->r[13] + 568u, c->v.s[29]);
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[3]); }
    if (COND_CC) { goto L_cdb78c; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    c->r[9] = 0x18u;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
L_cdb0b0:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 320u, c->v.s[25]);
    ST32(c->r[13] + 324u, c->v.s[27]);
    ST32(c->r[13] + 328u, c->v.s[29]);
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = c->r[7] + (c->r[10] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cdb184; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[1] = sdiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    if (COND_NE) { goto L_cdb1b8; }
    c->v.s[0] = LD32(c->r[13] + 524u);
    c->v.s[2] = LD32(c->r[13] + 532u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 548u);
    c->v.s[10] = c->r[0];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[6] = c->v.s[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[13] + 284u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 540u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[26] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 412u, c->v.s[12]);
    ST32(c->r[13] + 348u, c->v.s[0]);
    ST32(c->r[13] + 476u, c->v.s[6]);
    c->v.s[2] = LD32(c->r[13] + 280u);
    c->v.s[0] = LD32(c->r[13] + 344u);
    goto L_cdb208;
L_cdb184:;
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = c->r[0];
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[2]); }
    goto L_cdb208;
L_cdb1b8:;
    c->v.s[0] = LD32(c->r[13] + 520u);
    c->v.s[2] = LD32(c->r[13] + 528u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 536u);
    c->v.s[10] = LD32(c->r[13] + 544u);
    c->v.s[12] = c->r[0];
    c->v.f[6] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = c->v.s[0];
    c->v.f[10] = c->v.f[10] - c->v.f[8];
    c->v.s[14] = c->v.s[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    ST32(c->r[13] + 280u, c->v.s[2]);
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    ST32(c->r[13] + 408u, c->v.s[14]);
    c->v.f[12] = c->v.f[26] * c->v.f[12];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[10]);
    ST32(c->r[13] + 344u, c->v.s[0]);
    ST32(c->r[13] + 472u, c->v.s[8]);
L_cdb208:;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[0] = c->v.f[0] * c->v.f[23];
    ST32(c->r[13] + 344u, c->v.s[0]);
    if (COND_EQ) { goto L_cdb290; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    if (COND_NE) { goto L_cdb274; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cdb268; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    c->r[0] = c->r[1];
    if (COND_NE) { goto L_cdb274; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    goto L_cdb274;
L_cdb268:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
L_cdb274:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cdb290; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
L_cdb290:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x240u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcdb330u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cdb0b0; }
    goto L_cdb78c;
L_cdb358:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cdb78c; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = 0x0u;
    c->r[10] = 0x0u;
    c->r[9] = 0x18u;
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
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
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
L_cdb3f0:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[4], 0x0u);
    c->r[0] = c->r[7] + (c->r[10] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[10] << 4);
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_cdb4e8; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[10];
    c->r[1] = sdiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    if (COND_NE) { goto L_cdb50c; }
    c->v.s[2] = LD32(c->r[13] + 524u);
    c->v.s[4] = LD32(c->r[13] + 532u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 548u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 284u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 540u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[26] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 412u, c->v.s[12]);
    ST32(c->r[13] + 348u, c->v.s[2]);
    ST32(c->r[13] + 476u, c->v.s[6]);
    goto L_cdb55c;
L_cdb4e8:;
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    goto L_cdb55c;
L_cdb50c:;
    c->v.s[2] = LD32(c->r[13] + 520u);
    c->v.s[4] = LD32(c->r[13] + 528u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 544u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 280u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 536u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[26] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 408u, c->v.s[12]);
    ST32(c->r[13] + 344u, c->v.s[2]);
    ST32(c->r[13] + 472u, c->v.s[6]);
L_cdb55c:;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cdb6a8; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cdb5c8; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cdb5b8; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    if (COND_NE) { goto L_cdb5c8; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    goto L_cdb5c8;
L_cdb5b8:;
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
L_cdb5c8:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cdb5f4; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_cdb5f4:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], c->r[10]);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[1] = 0x0u;
    c->r[2] = c->r[10];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_cdb6a8; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x240u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_cdb714;
L_cdb6a8:;
    c->r[1] = c->r[13] + 0x100u;
    c->r[12] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
L_cdb714:;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcdb76cu; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cdb3f0; }
L_cdb78c:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = 0x0u;
    c->r[12] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cda7b8; }
L_cdb7b8:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
