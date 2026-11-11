#include "cpu.h"
#include "neon_rt.h"
void f_9c5814(Cpu *c);
void f_cb0ad8(Cpu *c);
void f_ce0de8(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe24(Cpu *c);
void f_cdb7c8(Cpu *restrict c) {
    FN_ENTER(0xcdb7c8u);
L_cdb7c8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x3c8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[17] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x184u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x18cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x170u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[3]); }
    c->r[6] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[6]); }
    c->r[6] = (c->r[12] >> 16) - c->r[6];
    c->r[5] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[6]); }
    c->r[6] = 0x180u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[6] = 0x188u;
    c->r[0] = c->r[3] + (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[4]); }
    c->r[6] = (c->r[14] >> 4) & 0xfu;
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[20] = LD32(c->r[1]);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 12u);
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[0] + (c->r[5] << 3);
    c->r[9] = c->r[0] + (c->r[5] << 3);
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = c->r[7];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cdb8ac; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_cdb8c4; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_cdb8d8;
L_cdb8ac:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_cdb8d8;
L_cdb8c4:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_cdb8d8:;
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[8] >> 16);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[4]); }
    c->v.s[22] = 0x3c23d70au;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] >> 16);
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] >> 1);
    c->r[10] = c->r[13] + 0x260u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + (c->r[5] << 2);
    c->r[5] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 564u);
    ST32(c->r[13] + 180u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 560u);
    ST32(c->r[13] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[2] + 0x238u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x23cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[2]); }
    c->v.s[28] = c->r[2];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[3]); }
    c->v.s[26] = c->r[3];
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[7]); }
    c->v.s[24] = c->r[7];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (c->r[14] >> 28);
    c->r[0] = c->r[1] | (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd5d820u;
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xcdb9fcu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_cdba10;
L_cdb9fc:;
    c->v.s[28] = LD32(c->r[6] + 20u);
    c->v.s[26] = LD32(c->r[6] + 24u);
    c->v.s[24] = LD32(c->r[6] + 28u);
    c->r[4] = c->r[4] + 0x10u;
    c->r[5] = c->r[5] + 0x14u;
L_cdba10:;
    c->r[6] = c->r[10] + c->r[4];
    c->v.s[30] = LD32(c->r[6]);
    c->v.f[16] = c->v.f[30] * c->v.f[30];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[18] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdba48; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcdba40u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[18] = c->v.s[0];
L_cdba48:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cdba9c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + c->r[5]; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_cdb9fc; }
    goto L_cdbaf8;
L_cdba9c:;
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdbab8; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcdbab4u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cdbab8:;
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->v.f[2] = c->v.f[17] / c->v.f[18];
    c->v.f[4] = c->v.f[30] * c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[28];
    c->v.f[8] = c->v.f[0] * c->v.f[26];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[6], c->v.s[4]);
    ST32(c->r[6] + 4u, c->v.s[6]);
    ST32(c->r[6] + 8u, c->v.s[8]);
    ST32(c->r[6] + 12u, c->v.s[0]);
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_cdb9fc; }
L_cdbaf8:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cdbf38; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cdbf38; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    c->v.s[6] = 0x4b400000u;
    c->r[2] = 0xd5d73cu;
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[18] = LD32(c->r[13] + 44u);
    c->v.s[26] = 0x34000000u;
    c->v.s[23] = 0x43800000u;
    c->v.s[19] = 0xbf800000u;
    c->v.s[25] = 0x3f000000u;
    { uint32_t ea = 0xcdbb50u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->r[0] = c->v.s[6];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = 0x2cu;
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[0] - (c->r[2] << 4);
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[13] + 180u);
    c->v.s[2] = LD32(c->r[13] + 216u);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 240u, c->v.s[0]);
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[2] + (c->r[2] << 2);
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + (c->r[3] << 2);
    c->r[0] = (c->r[0] << 3);
    c->r[4] = c->r[0] - (c->r[1] << 3);
    c->r[0] = 0x20u;
    c->r[0] = c->r[0] - (c->r[2] << 4);
    c->r[0] = c->r[0] + (c->r[3] << 4);
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x24u;
    c->r[0] = c->r[0] - (c->r[2] << 4);
    c->r[0] = c->r[0] + (c->r[3] << 4);
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x28u;
    c->r[0] = c->r[0] - (c->r[2] << 4);
    c->r[0] = c->r[0] + (c->r[3] << 4);
    c->r[0] = c->r[7] + c->r[0];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[3] << 4);
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    c->r[0] = 0x34u;
    { uint32_t r = c->r[3] * c->r[0]; c->r[1] = r; }
    c->r[1] = c->r[1] + 0x68u;
    c->r[0] = c->r[1] - c->r[2] * c->r[0];
    c->r[0] = c->r[7] + c->r[0];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] & 0x4u;
    c->r[8] = c->r[0] & 0x2u;
    c->r[0] = 0xd5d630u;
    { uint32_t ea = 0xcdbc5cu + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_cdbc58:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = LD32(c->r[13] + 624u);
    c->v.s[8] = LD32(c->r[13] + 608u);
    c->v.s[10] = LD32(c->r[13] + 612u);
    c->v.s[1] = LD32(c->r[13] + 632u);
    c->v.s[12] = LD32(c->r[13] + 616u);
    (void)f_subs(c, c->r[1], c->r[7]);
    if (COND_NE) { c->r[0] = c->r[0] + c->r[7]; }
    c->r[0] = (c->r[0] << 12);
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[10] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[10] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[29] = c->v.f[16] * c->v.f[0];
    c->v.f[27] = c->v.f[16] * c->v.f[2];
    c->v.f[0] = c->v.f[20] * c->v.f[29];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[20] * c->v.f[27];
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 628u);
    ST32(c->r[0], c->v.s[18]);
    c->v.s[4] = LD32(c->r[13] + 692u);
    c->v.s[2] = LD32(c->r[13] + 688u);
    c->v.s[6] = LD32(c->r[13] + 696u);
    c->v.f[28] = c->v.f[4] * c->v.f[0];
    c->v.f[24] = c->v.f[14] * c->v.f[4];
    c->v.s[0] = LD32(c->r[13] + 644u);
    c->v.s[14] = LD32(c->r[13] + 640u);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[30] = c->v.f[4] * c->v.f[1];
    c->v.s[4] = LD32(c->r[13] + 648u);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[0] = c->v.f[28] * c->v.f[28];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdbd2c; }
    c->r[14] = 0xcdbd28u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cdbd2c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdbd48; }
    c->v.f[0] = c->v.f[17] / c->v.f[2];
    c->v.f[30] = c->v.f[0] * c->v.f[30];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_cdbd48:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 688u);
    c->v.s[2] = LD32(c->r[13] + 692u);
    c->v.s[4] = LD32(c->r[13] + 696u);
    c->v.s[12] = LD32(c->r[0] + 20u);
    c->v.s[1] = LD32(c->r[0] + 16u);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 24u);
    c->v.s[3] = LD32(c->r[0] + 36u);
    c->v.s[5] = LD32(c->r[0] + 40u);
    c->v.s[7] = LD32(c->r[0] + 32u);
    c->v.s[9] = LD32(c->r[0] + 56u);
    c->v.f[1] = c->v.f[1] * c->v.f[2];
    c->v.f[12] = c->v.f[2] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[0] + 48u);
    c->v.f[2] = c->v.f[2] * c->v.f[14];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.s[14] = LD32(c->r[0] + 52u);
    c->r[0] = 0x0u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[7] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[5]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[3]);
    c->v.f[0] = c->v.f[10] + c->v.f[1];
    c->v.f[4] = c->v.f[14] + c->v.f[12];
    c->v.f[6] = c->v.f[9] + c->v.f[2];
    ST32(c->r[13] + 688u, c->v.s[0]);
    ST32(c->r[13] + 692u, c->v.s[4]);
    ST32(c->r[13] + 696u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.f[22] = c->v.f[8] - c->v.f[4];
    c->v.f[21] = c->v.f[2] - c->v.f[0];
    c->v.f[31] = c->v.f[10] - c->v.f[6];
    c->v.f[2] = c->v.f[22] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdbe0c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcdbe0cu; f_15efddc(c);
L_cdbe0c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[26]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdbe28; }
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_cdbe28:;
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[28] * c->v.f[22];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[21]);
    c->v.s[0] = c->v.s[19];
    { uint32_t ea = c->r[1] + (c->r[7] << 4); ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[31]);
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[7] << 4); ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + (c->r[7] << 4); ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[2], c->v.f[19]);
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[0] + c->r[6]; ST32(ea, c->r[1]); }
    if (COND_MI) { goto L_cdbe84; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[17]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[17]; }
L_cdbe84:;
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcdbe90u; f_15efe24(c);
    c->v.s[2] = LD32(c->r[13] + 216u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = c->v.s[17];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cdbedc; }
    c->v.s[2] = LD32(c->r[13] + 180u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cdbedc; }
    goto L_cdbec0;
L_cdbec0:;
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->r[0] = c->r[13] + 0x2a8u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 240u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcdbed8u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cdbedc:;
    c->v.f[0] = c->v.f[17] - c->v.f[2];
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[6] = c->r[6] + 0x10u;
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = c->v.s[25];
    c->v.f[0] = c->v.f[0] * c->v.f[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->v.s[0] = c->v.s[25];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[0]);
    { uint32_t ea = c->r[1] + (c->r[7] << 2); ST32(ea, c->r[0]); }
    c->r[7] = c->r[7] + 0x1u;
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[4];
    c->r[4] = c->r[4] + 0x8u;
    ST32(c->r[0] + 80u, c->v.s[0]);
    ST32(c->r[0] + 84u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[7], c->r[0]);
    if (COND_LT) { goto L_cdbc58; }
L_cdbf38:;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x11au;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    c->r[7] = c->r[2];
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[3];
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x238u;
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3];
    c->r[14] = 0xcdbf9cu; f_ce0de8(c);
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x130u;
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[4]); }
    c->r[6] = 0x0u;
    c->r[2] = c->r[1] + 0x80u;
    c->r[14] = c->r[1] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1];
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[2] = c->r[2] + 16u; }
    { uint32_t ea = c->r[1]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[2]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[1]); }
    c->r[5] = c->r[1];
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[1]); }
    c->r[0] = c->r[14];
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 16u; c->r[1] = LD32(ea + 0u); c->r[8] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[8]); ST32(ea + 8u, c->r[10]); ST32(ea + 12u, c->r[12]); c->r[6] = c->r[6] + 16u; }
    c->r[8] = c->r[4];
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[0]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[6]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x130u;
    c->r[0] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[14]; c->r[14] = c->r[14] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[8]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    c->r[1] = 0x0u;
    c->r[0] = c->r[13] + 0x15cu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x204u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x84u; ST16(ea, c->r[0]); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[14] + 0x44u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_cdd738; }
    c->r[0] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[25] = 0x34000000u;
    c->v.s[27] = 0xbf800000u;
    c->v.s[29] = 0x3f800000u;
    c->v.s[21] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80u;
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 24);
    c->r[0] = c->r[0] - (c->r[3] >> 24);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16) & 0xffu;
    c->r[1] = (c->r[4] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 8) & 0xffu;
    c->r[1] = (c->r[4] >> 8) & 0xffu;
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->v.s[2] = LD32(c->r[13] + 44u);
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[3]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[3]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2c0u;
    c->r[1] = c->r[0] + 0xc0u;
    c->v.f[4] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 216u);
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 180u);
    ST32(c->r[13] + 40u, c->v.s[4]);
    c->r[0] = c->r[1] & 0x4u;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] & 0x2u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 24);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 16);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[3] >> 8);
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd5cf98u;
    { uint32_t ea = 0xcdc2f4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd5cf8cu;
    { uint32_t ea = 0xcdc300u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    goto L_cdc324;
L_cdc308:;
    (void)f_subs(c, c->r[5], c->r[2]);
    c->r[2] = 0x100u;
    if (COND_LT) { goto L_cdc8a0; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[3];
    goto L_cdc868;
L_cdc324:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_cdc698; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cdc698; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[26] = LD32(c->r[13] + 44u);
    c->r[5] = 0x0u;
    c->r[6] = 0xcu;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = 0x4b400000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    c->r[0] = c->v.s[2];
    c->v.s[2] = LD32(c->r[13] + 48u);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[22] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[1]);
    c->r[4] = c->r[0] + 0x4u;
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[2] * c->v.f[0]);
L_cdc3e0:;
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = LD32(c->r[13] + 624u);
    c->v.s[4] = LD32(c->r[13] + 612u);
    c->v.s[6] = LD32(c->r[13] + 616u);
    c->v.s[10] = LD32(c->r[13] + 632u);
    if (COND_NE) { c->r[0] = c->r[0] + c->r[5]; }
    c->r[0] = (c->r[0] << 12);
    c->r[0] = sdiv32(c->r[0], c->r[7]);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[2] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[24] = c->v.f[22] * c->v.f[0];
    c->v.f[23] = c->v.f[22] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 608u);
    c->v.f[0] = c->v.f[20] * c->v.f[24];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[20] * c->v.f[23];
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 628u);
    ST32(c->r[0], c->v.s[26]);
    c->v.s[19] = LD32(c->r[13] + 692u);
    c->v.s[17] = LD32(c->r[13] + 688u);
    c->v.s[30] = LD32(c->r[13] + 696u);
    c->v.f[18] = c->v.f[19] * c->v.f[0];
    c->v.f[16] = c->v.f[8] * c->v.f[19];
    c->v.s[0] = LD32(c->r[13] + 644u);
    c->v.s[8] = LD32(c->r[13] + 640u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[17]);
    c->v.s[4] = LD32(c->r[13] + 648u);
    c->v.f[28] = c->v.f[19] * c->v.f[10];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[17] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[30] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[8] * c->v.f[30]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdc4b4; }
    c->r[14] = 0xcdc4b0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cdc4b4:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdc4d0; }
    c->v.f[0] = c->v.f[29] / c->v.f[2];
    c->v.f[28] = c->v.f[0] * c->v.f[28];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
L_cdc4d0:;
    c->v.s[6] = LD32(c->r[9] + 20u);
    c->v.s[10] = LD32(c->r[9] + 16u);
    c->v.s[0] = LD32(c->r[9] + 4u);
    c->v.s[2] = LD32(c->r[9] + 8u);
    c->v.s[4] = LD32(c->r[9]);
    c->v.s[8] = LD32(c->r[9] + 24u);
    c->v.s[12] = LD32(c->r[9] + 36u);
    c->v.s[14] = LD32(c->r[9] + 40u);
    c->v.s[1] = LD32(c->r[9] + 32u);
    c->v.s[3] = LD32(c->r[9] + 52u);
    c->v.s[5] = LD32(c->r[9] + 56u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[19];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[17]);
    c->v.f[4] = c->v.f[19] * c->v.f[8];
    c->v.f[6] = c->v.f[19] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[30]);
    c->v.s[8] = LD32(c->r[9] + 48u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[30] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[30] * c->v.f[12]);
    c->v.f[17] = c->v.f[8] + c->v.f[10];
    c->v.f[0] = c->v.f[3] + c->v.f[6];
    c->v.f[4] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 688u, c->v.s[17]);
    ST32(c->r[13] + 692u, c->v.s[0]);
    ST32(c->r[13] + 696u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[10] + 4u);
    c->v.s[8] = LD32(c->r[10] + 8u);
    c->v.f[31] = c->v.f[6] - c->v.f[0];
    c->v.f[19] = c->v.f[2] - c->v.f[17];
    c->v.f[30] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[31] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdc580; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcdc580u; f_15efddc(c);
L_cdc580:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdc59c; }
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
L_cdc59c:;
    c->v.f[2] = c->v.f[18] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[19]);
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->v.s[27];
    c->r[0] = c->r[2] + c->r[6];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[30]);
    ST32(c->r[0] - 12u, c->v.s[17]);
    c->r[0] = c->r[2] + (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[27]);
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    c->r[0] = 0x0u;
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[2] + c->r[6]; ST32(ea, c->r[0]); }
    if (COND_MI) { goto L_cdc5f0; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[29]; }
L_cdc5f0:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcdc600u; f_15efe24(c);
    c->v.s[2] = LD32(c->r[13] + 216u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = c->v.s[29];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cdc644; }
    c->v.s[2] = LD32(c->r[13] + 180u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    c->v.s[2] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cdc644; }
    c->v.s[2] = LD32(c->r[13] + 180u);
    c->r[0] = c->r[13] + 0x2a8u;
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcdc640u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cdc644:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[29] - c->v.f[2];
    c->r[6] = c->r[6] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = 0x43800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = c->v.s[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[2]);
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->v.s[0];
    c->v.s[0] = c->v.s[21];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[0]);
    { uint32_t ea = c->r[1] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[8]);
    ST32(c->r[4] - 4u, c->v.s[0]);
    ST32(c->r[4], c->v.s[2]);
    c->r[4] = c->r[4] + 0x8u;
    if (COND_LT) { goto L_cdc3e0; }
L_cdc698:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_cdc904; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_cdc780; }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_cdc730; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0xcdc6ccu + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0xcdc6e0u: goto L_cdc6e0; case 0xcdc6fcu: goto L_cdc6fc; case 0xcdc714u: goto L_cdc714; case 0xcdc738u: goto L_cdc738; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cdc6e0:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_LE) { goto L_cdc780; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[5] << 8);
    goto L_cdc77c;
L_cdc6fc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_LE) { goto L_cdc780; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[5] - c->r[0];
    goto L_cdc774;
L_cdc714:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_GE) { goto L_cdc780; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[5] << 8);
    goto L_cdc77c;
L_cdc730:;
    c->r[1] = 0x100u;
    goto L_cdc780;
L_cdc738:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_EQ) { goto L_cdc780; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[5], c->r[1]);
    if (COND_GE) { goto L_cdc764; }
    c->r[0] = (c->r[5] << 8);
    goto L_cdc77c;
L_cdc764:;
    c->r[1] = 0x100u;
    if (COND_LE) { goto L_cdc780; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[5];
L_cdc774:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 8);
L_cdc77c:;
    c->r[1] = sdiv32(c->r[0], c->r[1]);
L_cdc780:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    c->r[0] = c->r[0] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[2] = 0x100u;
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    if (COND_HI) { goto L_cdc8a0; }
    c->r[7] = (c->r[7] << 2);
    c->r[6] = 0xcdc7f0u + 0x8u;
    c->r[3] = c->r[5] + 0x1u;
    { uint32_t ea = c->r[7] + c->r[6]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[6]; switch (c->pc) { case 0xcdc808u: goto L_cdc808; case 0xcdc824u: goto L_cdc824; case 0xcdc850u: goto L_cdc850; case 0xcdc888u: goto L_cdc888; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cdc808:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x100u;
    if (COND_LE) { goto L_cdc8a0; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cdc89c;
L_cdc824:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_cdc8a0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_cdc308; }
    c->r[7] = c->r[2];
    c->r[2] = (c->r[3] << 8);
    c->r[2] = sdiv32(c->r[2], c->r[7]);
    goto L_cdc8a0;
L_cdc850:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[5], c->r[7]);
    if (COND_LT) { goto L_cdc8a0; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
L_cdc868:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] << 8);
    goto L_cdc89c;
L_cdc888:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GE) { goto L_cdc8a0; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cdc89c:;
    c->r[2] = sdiv32(c->r[2], c->r[3]);
L_cdc8a0:;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    c->r[0] = c->r[0] | (c->r[1] << 24);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
L_cdc904:;
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_EQ) { goto L_cdcdd4; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[5], c->r[0]);
    if (COND_NE) { goto L_cdd294; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 40u);
    c->v.s[8] = LD32(c->r[13] + 624u);
    c->v.s[2] = LD32(c->r[13] + 608u);
    c->v.s[4] = LD32(c->r[13] + 612u);
    c->v.s[6] = LD32(c->r[13] + 616u);
    c->v.s[10] = LD32(c->r[13] + 632u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 628u);
    c->v.s[28] = LD32(c->r[13] + 692u);
    c->v.s[26] = LD32(c->r[13] + 688u);
    c->v.s[22] = LD32(c->r[13] + 696u);
    c->v.f[16] = c->v.f[28] * c->v.f[0];
    c->v.f[18] = c->v.f[8] * c->v.f[28];
    c->v.s[0] = LD32(c->r[13] + 644u);
    c->v.s[8] = LD32(c->r[13] + 640u);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[2] * c->v.f[26]);
    c->v.s[4] = LD32(c->r[13] + 648u);
    c->v.f[24] = c->v.f[28] * c->v.f[10];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[0] = c->v.f[16] * c->v.f[16];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdc9b0; }
    c->r[14] = 0xcdc9acu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cdc9b0:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdc9cc; }
    c->v.f[0] = c->v.f[29] / c->v.f[2];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
L_cdc9cc:;
    c->v.s[6] = LD32(c->r[9] + 20u);
    c->v.s[10] = LD32(c->r[9] + 16u);
    c->v.s[0] = LD32(c->r[9] + 4u);
    c->v.s[2] = LD32(c->r[9] + 8u);
    c->v.s[4] = LD32(c->r[9]);
    c->v.s[8] = LD32(c->r[9] + 24u);
    c->v.s[12] = LD32(c->r[9] + 36u);
    c->v.s[14] = LD32(c->r[9] + 40u);
    c->v.s[1] = LD32(c->r[9] + 32u);
    c->v.s[3] = LD32(c->r[9] + 52u);
    c->v.s[5] = LD32(c->r[9] + 56u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[28];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[26]);
    c->v.f[4] = c->v.f[28] * c->v.f[8];
    c->v.f[6] = c->v.f[28] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[22]);
    c->v.s[8] = LD32(c->r[9] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[14]);
    c->v.f[23] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[3] + c->v.f[6];
    c->v.f[22] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 688u, c->v.s[23]);
    ST32(c->r[13] + 692u, c->v.s[26]);
    ST32(c->r[13] + 696u, c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[10]);
    c->v.s[2] = LD32(c->r[10] + 4u);
    c->v.s[4] = LD32(c->r[10] + 8u);
    c->v.f[28] = c->v.f[2] - c->v.f[26];
    c->v.f[17] = c->v.f[0] - c->v.f[23];
    c->v.f[30] = c->v.f[4] - c->v.f[22];
    c->v.f[2] = c->v.f[28] * c->v.f[28];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdca7c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcdca7cu; f_15efddc(c);
L_cdca7c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdca98; }
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_cdca98:;
    c->v.f[2] = c->v.f[18] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[28]);
    c->v.s[0] = c->v.s[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[30]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[27]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdcac4; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[29]; }
L_cdcac4:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcdcad4u; f_15efe24(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.s[0] = c->v.s[29];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cdcb18; }
    c->v.s[0] = LD32(c->r[13] + 180u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.s[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cdcb18; }
    c->v.s[0] = LD32(c->r[13] + 180u);
    c->r[0] = c->r[13] + 0x2a8u;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcdcb18u; f_9c5814(c);
L_cdcb18:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cdd714; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[29] - c->v.f[0];
    c->r[8] = 0x0u;
    c->r[10] = 0x18u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.s[2] = 0x43800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[30] = LD32(c->r[13] + 572u);
    c->v.s[4] = LD32(c->r[13] + 588u);
    c->v.s[17] = LD32(c->r[13] + 584u);
    c->v.s[24] = LD32(c->r[13] + 568u);
    c->v.s[2] = LD32(c->r[13] + 576u);
    c->v.s[18] = LD32(c->r[13] + 580u);
    c->v.s[6] = LD32(c->r[13] + 596u);
    c->r[0] = (c->r[2] >> 24);
    c->r[1] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 592u);
    c->v.f[31] = c->v.f[4] - c->v.f[30];
    c->v.s[16] = c->v.s[30];
    c->v.f[19] = c->v.f[6] - c->v.f[18];
    c->v.f[28] = c->v.f[2] - c->v.f[24];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->v.f[0] = c->v.f[0] - c->v.f[17];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[31] * c->v.f[21]);
    c->r[1] = (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xff000000u) | ((c->r[2] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[0] * c->v.f[21]);
    c->r[5] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[3]); }
L_cdcbc8:;
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = c->r[0];
    c->v.s[8] = c->v.s[24];
    c->r[0] = c->r[7] + (c->r[8] << 1);
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[2]); }
    c->r[2] = 0xff000000u;
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 432u, c->v.s[23]);
    ST32(c->r[13] + 436u, c->v.s[26]);
    ST32(c->r[13] + 440u, c->v.s[22]);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[2] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[1] = c->r[2] & (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] + c->r[8];
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 12u);
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[28]);
    c->v.s[0] = c->v.s[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[28]);
    ST32(c->r[13] + 328u, c->v.s[8]);
    ST32(c->r[13] + 392u, c->v.s[0]);
    c->v.s[0] = c->v.s[30];
    ST32(c->r[13] + 456u, c->v.s[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[31]);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[19]);
    ST32(c->r[13] + 332u, c->v.s[0]);
    ST32(c->r[13] + 396u, c->v.s[2]);
    ST32(c->r[13] + 460u, c->v.s[16]);
    if (COND_EQ) { goto L_cdcd10; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cdccf0; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cdcce8; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); } }
    goto L_cdccf0;
L_cdcce8:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
L_cdccf0:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_cdcd10; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
L_cdcd10:;
    c->r[1] = c->r[13] + 0x130u;
    c->r[12] = c->r[13] + 0x2c0u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcdcdb0u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x10u;
    c->r[8] = c->r[8] + 0x8u;
    c->r[0] = c->r[9] + 0x1u;
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_LT) { goto L_cdcbc8; }
    goto L_cdd714;
L_cdcdd4:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.s[8] = LD32(c->r[13] + 624u);
    c->v.s[2] = LD32(c->r[13] + 608u);
    c->v.s[4] = LD32(c->r[13] + 612u);
    c->v.s[6] = LD32(c->r[13] + 616u);
    c->v.s[10] = LD32(c->r[13] + 632u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 628u);
    c->v.s[28] = LD32(c->r[13] + 692u);
    c->v.s[26] = LD32(c->r[13] + 688u);
    c->v.s[22] = LD32(c->r[13] + 696u);
    c->v.f[18] = c->v.f[28] * c->v.f[0];
    c->v.f[16] = c->v.f[8] * c->v.f[28];
    c->v.s[0] = LD32(c->r[13] + 644u);
    c->v.s[8] = LD32(c->r[13] + 640u);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[26] * c->v.f[4]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[26]);
    c->v.s[4] = LD32(c->r[13] + 648u);
    c->v.f[24] = c->v.f[28] * c->v.f[10];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdce6c; }
    c->r[14] = 0xcdce68u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cdce6c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdce88; }
    c->v.f[0] = c->v.f[29] / c->v.f[2];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
L_cdce88:;
    c->v.s[6] = LD32(c->r[9] + 20u);
    c->v.s[10] = LD32(c->r[9] + 16u);
    c->v.s[0] = LD32(c->r[9] + 4u);
    c->v.s[2] = LD32(c->r[9] + 8u);
    c->v.s[4] = LD32(c->r[9]);
    c->v.s[8] = LD32(c->r[9] + 24u);
    c->v.s[12] = LD32(c->r[9] + 36u);
    c->v.s[14] = LD32(c->r[9] + 40u);
    c->v.s[1] = LD32(c->r[9] + 32u);
    c->v.s[3] = LD32(c->r[9] + 52u);
    c->v.s[5] = LD32(c->r[9] + 56u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[28];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[26]);
    c->v.f[4] = c->v.f[28] * c->v.f[8];
    c->v.f[6] = c->v.f[28] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[22]);
    c->v.s[8] = LD32(c->r[9] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[14]);
    c->v.f[23] = c->v.f[8] + c->v.f[10];
    c->v.f[26] = c->v.f[3] + c->v.f[6];
    c->v.f[22] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 688u, c->v.s[23]);
    ST32(c->r[13] + 692u, c->v.s[26]);
    ST32(c->r[13] + 696u, c->v.s[22]);
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[10]);
    c->v.s[2] = LD32(c->r[10] + 4u);
    c->v.s[4] = LD32(c->r[10] + 8u);
    c->v.f[17] = c->v.f[2] - c->v.f[26];
    c->v.f[28] = c->v.f[0] - c->v.f[23];
    c->v.f[30] = c->v.f[4] - c->v.f[22];
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cdcf38; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcdcf38u; f_15efddc(c);
L_cdcf38:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdcf54; }
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.f[30] = c->v.f[30] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[28] = c->v.f[28] * c->v.f[0];
L_cdcf54:;
    c->v.f[2] = c->v.f[18] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[28]);
    c->v.s[0] = c->v.s[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[30]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[27]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cdcf80; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[29]; }
L_cdcf80:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcdcf90u; f_15efe24(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 216u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.s[0] = c->v.s[29];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cdcfd4; }
    c->v.s[0] = LD32(c->r[13] + 180u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[0]);
    c->v.s[0] = 0x0u;
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cdcfd4; }
    c->v.s[0] = LD32(c->r[13] + 180u);
    c->r[0] = c->r[13] + 0x2a8u;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcdcfd4u; f_9c5814(c);
L_cdcfd4:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cdd714; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[29] - c->v.f[0];
    c->r[8] = 0x0u;
    c->r[10] = 0x18u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.s[2] = 0x43800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[18] = LD32(c->r[13] + 580u);
    c->v.s[2] = LD32(c->r[13] + 596u);
    c->v.s[16] = LD32(c->r[13] + 568u);
    c->v.s[24] = LD32(c->r[13] + 572u);
    c->v.s[4] = LD32(c->r[13] + 588u);
    c->v.s[17] = LD32(c->r[13] + 584u);
    c->v.s[6] = LD32(c->r[13] + 592u);
    c->r[1] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 576u);
    c->v.f[31] = c->v.f[2] - c->v.f[18];
    c->v.s[30] = c->v.s[18];
    c->v.f[19] = c->v.f[4] - c->v.f[24];
    c->v.f[28] = c->v.f[6] - c->v.f[17];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->v.f[0] = c->v.f[0] - c->v.f[16];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[31] * c->v.f[21]);
    c->r[1] = (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = (c->r[1] & 0xff000000u) | ((c->r[2] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[0] * c->v.f[21]);
    c->r[5] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = c->r[3] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[3]); }
L_cdd084:;
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[9] = c->r[0];
    ST32(c->r[13] + 368u, c->v.s[23]);
    ST32(c->r[13] + 372u, c->v.s[26]);
    ST32(c->r[13] + 376u, c->v.s[22]);
    c->v.s[8] = c->v.s[17];
    c->r[0] = c->r[7] + (c->r[8] << 1);
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xff000000u;
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[5]); }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[2] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[1] = c->r[2] & (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[1]); }
    c->r[2] = c->r[2] + c->r[8];
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.s[6] = LD32(c->r[2] + 12u);
    ST32(c->r[13] + 392u, c->v.s[16]);
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[28]);
    c->v.s[0] = c->v.s[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[28]);
    ST32(c->r[13] + 456u, c->v.s[8]);
    ST32(c->r[13] + 520u, c->v.s[0]);
    c->v.s[0] = c->v.s[24];
    ST32(c->r[13] + 396u, c->v.s[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[19]);
    c->v.s[2] = c->v.s[18];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[31]);
    ST32(c->r[13] + 460u, c->v.s[0]);
    ST32(c->r[13] + 524u, c->v.s[2]);
    if (COND_EQ) { goto L_cdd1c0; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cdd1a4; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cdd19c; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[9]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[1]); } }
    goto L_cdd1a4;
L_cdd19c:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
L_cdd1a4:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cdd1c0; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
L_cdd1c0:;
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x2c0u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcdd260u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x10u;
    c->r[8] = c->r[8] + 0x8u;
    c->r[0] = c->r[9] + 0x1u;
    c->r[5] = c->r[5] + 0x4u;
    (void)f_subs(c, c->r[9], c->r[1]);
    if (COND_LT) { goto L_cdd084; }
    goto L_cdd714;
L_cdd294:;
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cdd714; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[8] = 0x0u;
    c->r[10] = 0x18u;
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = 0x0u;
    c->r[2] = c->r[1];
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[13] + 0x130u;
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    if (COND_EQ) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[9] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
L_cdd35c:;
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[5] = c->r[0];
    c->r[0] = c->r[7] + (c->r[8] << 1);
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[8] << 1);
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[13] + 568u);
    c->v.s[2] = LD32(c->r[13] + 576u);
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xff000000u;
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[5] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->v.s[4] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 12u);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[12] = LD32(c->r[0]);
    c->v.s[14] = LD32(c->r[0] + 4u);
    c->v.s[1] = LD32(c->r[0] + 8u);
    c->v.s[3] = LD32(c->r[0] + 12u);
    c->v.s[2] = LD32(c->r[13] + 592u);
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    ST32(c->r[13] + 328u, c->v.s[5]);
    ST32(c->r[13] + 392u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 584u);
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[4] = c->v.s[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 588u);
    ST32(c->r[13] + 456u, c->v.s[4]);
    ST32(c->r[13] + 520u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 572u);
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[4] = c->v.s[0];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[6] = LD32(c->r[13] + 596u);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[2]);
    ST32(c->r[13] + 332u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[13] + 580u);
    c->v.f[6] = c->v.f[6] - c->v.f[4];
    c->v.s[8] = c->v.s[4];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[3] * c->v.f[6]);
    ST32(c->r[13] + 396u, c->v.s[8]);
    ST32(c->r[13] + 460u, c->v.s[0]);
    ST32(c->r[13] + 524u, c->v.s[4]);
    if (COND_EQ) { goto L_cdd62c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cdd554; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cdd544; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    if (COND_NE) { goto L_cdd554; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    goto L_cdd554;
L_cdd544:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
L_cdd554:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cdd580; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_cdd580:;
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[5]);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[1] = 0x0u;
    c->r[2] = c->r[8];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_cdd62c; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x2c0u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[13] + 0x130u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_cdd694;
L_cdd62c:;
    c->r[1] = c->r[13] + 0x130u;
    c->r[12] = c->r[13] + 0x2c0u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
L_cdd694:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcdd6ecu; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x10u;
    c->r[9] = c->r[9] + 0x4u;
    c->r[8] = c->r[8] + 0x8u;
    c->r[6] = c->r[6] + 0x4u;
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cdd35c; }
L_cdd714:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cdc324; }
L_cdd738:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
