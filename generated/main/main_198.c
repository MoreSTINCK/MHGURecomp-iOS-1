#include "cpu.h"
#include "neon_rt.h"
void f_9c5814(Cpu *c);
void f_ce10bc(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe24(Cpu *c);
void f_cd4e90(Cpu *restrict c) {
    FN_ENTER(0xcd4e90u);
L_cd4e90:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x398u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[17] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x184u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x18cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[2] + 0x170u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[3]); }
    c->r[6] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[8]);
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[6]); }
    c->r[6] = (c->r[12] >> 16) - c->r[6];
    c->r[5] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[6]); }
    c->r[6] = 0x180u;
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD16(ea); c->r[10] = v; }
    c->r[6] = 0x188u;
    c->r[0] = c->r[3] + (c->r[5] << 4);
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[4]); }
    c->r[6] = (c->r[14] >> 4) & 0xfu;
    c->v.s[0] = LD32(c->r[1]);
    c->r[4] = 0x0u;
    c->r[9] = c->r[0] + (c->r[5] << 4);
    (void)f_subs(c, c->r[6], 0x0u);
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 12u);
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 48u, c->v.s[0]);
    c->v.s[0] = c->r[7];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cd4f68; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_cd4f80; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_cd4f94;
L_cd4f68:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_cd4f94;
L_cd4f80:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_cd4f94:;
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[8] >> 16);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[4]); }
    c->v.s[20] = 0x3c23d70au;
    c->r[8] = 0x0u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] >> 16);
    c->r[8] = (c->r[8] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] >> 1);
    c->r[10] = c->r[13] + 0x230u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + (c->r[5] << 2);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 36u, c->v.s[0]);
    c->v.s[28] = LD32(c->r[2] + 564u);
    c->v.s[30] = LD32(c->r[2] + 560u);
    { uint32_t ea = c->r[2] + 0x238u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x23cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[2]); }
    c->v.s[26] = c->r[2];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[3]); }
    c->v.s[24] = c->r[3];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[7]); }
    c->v.s[22] = c->r[7];
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (c->r[14] >> 28);
    c->r[0] = c->r[1] | (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd64170u;
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[6]); }
    c->r[6] = 0x0u;
    { uint32_t ea = 0xcd50acu + c->r[0]; uint32_t v = LD32(ea); c->r[7] = v; }
    goto L_cd50c0;
L_cd50ac:;
    c->v.s[26] = LD32(c->r[5] + 20u);
    c->v.s[24] = LD32(c->r[5] + 24u);
    c->v.s[22] = LD32(c->r[5] + 28u);
    c->r[4] = c->r[4] + 0x10u;
    c->r[6] = c->r[6] + 0x14u;
L_cd50c0:;
    c->r[5] = c->r[10] + c->r[4];
    c->v.s[19] = LD32(c->r[5]);
    c->v.f[16] = c->v.f[19] * c->v.f[19];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[18] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd50f4; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcd50f0u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cd50f4:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cd514c; }
    { uint32_t ea = c->r[7]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + c->r[6]; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_cd50ac; }
    goto L_cd51a4;
L_cd514c:;
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd5164; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcd5164u; f_15efddc(c);
L_cd5164:;
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->v.f[2] = c->v.f[17] / c->v.f[18];
    c->v.f[4] = c->v.f[19] * c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[26];
    c->v.f[8] = c->v.f[0] * c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[5], c->v.s[4]);
    ST32(c->r[5] + 4u, c->v.s[6]);
    ST32(c->r[5] + 8u, c->v.s[8]);
    ST32(c->r[5] + 12u, c->v.s[0]);
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_cd50ac; }
L_cd51a4:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd5550; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cd5550; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    c->v.s[6] = 0x4b400000u;
    c->r[2] = 0xd6408cu;
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[18] = LD32(c->r[13] + 48u);
    c->v.f[20] = c->v.f[28] - c->v.f[30];
    c->v.s[19] = 0x34000000u;
    c->v.s[23] = 0x0u;
    c->v.s[25] = 0x43800000u;
    c->v.s[21] = 0xbf800000u;
    c->r[4] = 0x0u;
    { uint32_t ea = 0xcd5200u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->r[0] = c->v.s[6];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x280u;
    c->v.s[2] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    c->v.f[16] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = LD32(c->r[13] + 52u);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[2]);
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2cu;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[5] = c->r[0] - (c->r[2] << 4);
    c->r[0] = (c->r[1] << 4);
    c->r[0] = c->r[0] - (c->r[2] << 4);
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[1] << 3);
    c->r[1] = 0x48u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[2] << 3);
    c->r[0] = c->r[0] - (c->r[1] << 2);
    c->r[7] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] & 0x4u;
    c->r[6] = c->r[0] & 0x2u;
    c->r[0] = 0xd63fc8u;
    { uint32_t ea = 0xcd52c4u + c->r[0]; uint32_t v = LD32(ea); c->r[10] = v; }
L_cd52c0:;
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = LD32(c->r[13] + 576u);
    c->v.s[8] = LD32(c->r[13] + 560u);
    c->v.s[10] = LD32(c->r[13] + 564u);
    c->v.s[1] = LD32(c->r[13] + 584u);
    c->v.s[12] = LD32(c->r[13] + 568u);
    (void)f_subs(c, c->r[1], c->r[4]);
    if (COND_NE) { c->r[0] = c->r[0] + c->r[4]; }
    c->r[0] = (c->r[0] << 12);
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[10] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[10] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 580u);
    ST32(c->r[0], c->v.s[18]);
    c->v.s[4] = LD32(c->r[13] + 644u);
    c->v.s[2] = LD32(c->r[13] + 640u);
    c->v.s[6] = LD32(c->r[13] + 648u);
    c->v.f[29] = c->v.f[4] * c->v.f[0];
    c->v.f[27] = c->v.f[14] * c->v.f[4];
    c->v.s[0] = LD32(c->r[13] + 596u);
    c->v.s[14] = LD32(c->r[13] + 592u);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[31] = c->v.f[4] * c->v.f[1];
    c->v.s[4] = LD32(c->r[13] + 600u);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[0] = c->v.f[29] * c->v.f[29];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd538c; }
    c->r[14] = 0xcd5388u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd538c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[19]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd53a8; }
    c->v.f[0] = c->v.f[17] / c->v.f[2];
    c->v.f[31] = c->v.f[0] * c->v.f[31];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
L_cd53a8:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 640u);
    c->v.s[2] = LD32(c->r[13] + 644u);
    c->v.s[4] = LD32(c->r[13] + 648u);
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
    ST32(c->r[13] + 640u, c->v.s[0]);
    ST32(c->r[13] + 644u, c->v.s[4]);
    ST32(c->r[13] + 648u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.f[26] = c->v.f[8] - c->v.f[4];
    c->v.f[24] = c->v.f[2] - c->v.f[0];
    c->v.f[22] = c->v.f[10] - c->v.f[6];
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd546c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd546cu; f_15efddc(c);
L_cd546c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[19]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd5488; }
    c->v.f[0] = c->v.f[17] / c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_cd5488:;
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[29] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[24]);
    c->v.s[0] = c->v.s[21];
    c->r[0] = c->r[0] + (c->r[4] << 4);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[31] * c->v.f[22]);
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[21]);
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; ST32(ea, c->r[1]); }
    if (COND_MI) { goto L_cd54e0; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[17]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[17]; }
L_cd54e0:;
    (void)f_subs(c, c->r[6], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd54ecu; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[17];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd5520; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    c->v.s[2] = c->v.s[23];
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd5520; }
    c->v.f[0] = c->v.f[28] - c->v.f[0];
    c->r[0] = c->r[13] + 0x278u;
    c->v.f[0] = c->v.f[0] / c->v.f[20];
    c->r[14] = 0xcd551cu; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd5520:;
    c->v.f[0] = c->v.f[17] - c->v.f[2];
    (void)f_subs(c, c->r[8], 0x0u);
    c->r[5] = c->r[5] + 0x10u;
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[25];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[7] + (c->r[4] << 2); ST32(ea, c->r[0]); }
    c->r[4] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LT) { goto L_cd52c0; }
L_cd5550:;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x11au;
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea), v2 = LD32(ea + 4); c->r[2] = v; c->r[3] = v2; }
    c->r[7] = c->r[0];
    { uint32_t ea = c->r[7] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[7] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[10]); }
    c->r[8] = c->r[0] + 0xc0u;
    c->r[3] = c->r[0] + 0x80u;
    c->r[1] = c->r[0];
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 16u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[3] = c->r[3] + 16u; }
    { uint32_t ea = c->r[2]; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x200u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[0]); }
    c->r[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x204u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[0]); }
    c->r[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x208u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x210u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x214u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + 0x40u;
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[10]); }
    c->r[1] = c->r[8];
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[12] = LD32(ea + 8u); c->r[14] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[12]); ST32(ea + 12u, c->r[14]); c->r[0] = c->r[0] + 16u; }
    c->r[12] = c->r[4];
    c->r[14] = c->r[5];
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[1] = c->r[13] + 0x1f4u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x190u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x194u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[10]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[8]; c->r[8] = c->r[8] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[0] = c->r[0] + 16u; }
    { uint32_t ea = c->r[8]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[5]); }
    c->r[14] = c->r[13] + 0x100u;
    c->r[2] = 0x0u;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x74u; ST16(ea, c->r[0]); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[14] + 0x34u; ST16(ea, c->r[0]); }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    if (COND_LT) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[3] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_HI) { goto L_cd6cc4; }
    c->r[0] = c->r[2] | c->r[3];
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[25] = 0x34000000u;
    c->v.s[31] = 0x0u;
    c->v.s[19] = 0x43800000u;
    c->v.s[27] = 0xbf800000u;
    c->v.s[29] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x280u;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 24);
    c->r[0] = c->r[0] - (c->r[6] >> 24);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16) & 0xffu;
    c->r[1] = (c->r[4] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8) & 0xffu;
    c->r[1] = (c->r[4] >> 8) & 0xffu;
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.s[2] = LD32(c->r[13] + 48u);
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x290u;
    c->v.f[4] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 56u, c->v.s[0]);
    c->v.f[0] = c->v.f[28] - c->v.f[30];
    ST32(c->r[13] + 44u, c->v.s[4]);
    c->r[0] = c->r[1] & 0x4u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] & 0x2u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 24);
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16);
    ST32(c->r[13] + 128u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd639e8u;
    { uint32_t ea = 0xcd58a4u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd639dcu;
    { uint32_t ea = 0xcd58b0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3];
    goto L_cd58dc;
L_cd58b8:;
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[2] = 0x100u;
    if (COND_LT) { goto L_cd5dfc; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[3];
    goto L_cd5dd4;
L_cd58dc:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_cd5c04; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cd5c04; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[21] = LD32(c->r[13] + 48u);
    c->r[5] = 0x0u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 36u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = 0x4b400000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[13] + 40u);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1]);
    c->r[4] = c->r[0] + 0x8u;
    c->v.f[20] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = LD32(c->r[13] + 52u);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[0] * c->v.f[2]);
L_cd5990:;
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = LD32(c->r[13] + 576u);
    c->v.s[4] = LD32(c->r[13] + 564u);
    c->v.s[6] = LD32(c->r[13] + 568u);
    c->v.s[10] = LD32(c->r[13] + 584u);
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
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[20] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 560u);
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 580u);
    ST32(c->r[0], c->v.s[21]);
    c->v.s[18] = LD32(c->r[13] + 644u);
    c->v.s[16] = LD32(c->r[13] + 640u);
    c->v.s[24] = LD32(c->r[13] + 648u);
    c->v.f[26] = c->v.f[18] * c->v.f[0];
    c->v.f[23] = c->v.f[8] * c->v.f[18];
    c->v.s[0] = LD32(c->r[13] + 596u);
    c->v.s[8] = LD32(c->r[13] + 592u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[4] = LD32(c->r[13] + 600u);
    c->v.f[22] = c->v.f[18] * c->v.f[10];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd5a5c; }
    c->r[14] = 0xcd5a58u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd5a5c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd5a78; }
    c->v.f[0] = c->v.f[29] / c->v.f[2];
    c->v.f[22] = c->v.f[0] * c->v.f[22];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
L_cd5a78:;
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.s[12] = LD32(c->r[6] + 36u);
    c->v.s[14] = LD32(c->r[6] + 40u);
    c->v.s[1] = LD32(c->r[6] + 32u);
    c->v.s[3] = LD32(c->r[6] + 52u);
    c->v.s[5] = LD32(c->r[6] + 56u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[18];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[16]);
    c->v.f[4] = c->v.f[18] * c->v.f[8];
    c->v.f[6] = c->v.f[18] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[24]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[12]);
    c->v.f[16] = c->v.f[8] + c->v.f[10];
    c->v.f[0] = c->v.f[3] + c->v.f[6];
    c->v.f[4] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 640u, c->v.s[16]);
    ST32(c->r[13] + 644u, c->v.s[0]);
    ST32(c->r[13] + 648u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[9] + 4u);
    c->v.s[8] = LD32(c->r[9] + 8u);
    c->v.f[17] = c->v.f[6] - c->v.f[0];
    c->v.f[24] = c->v.f[2] - c->v.f[16];
    c->v.f[18] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd5b28; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd5b28u; f_15efddc(c);
L_cd5b28:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd5b44; }
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[24] = c->v.f[24] * c->v.f[0];
L_cd5b44:;
    c->v.f[2] = c->v.f[26] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[24]);
    ST32(c->r[4] - 8u, c->v.s[16]);
    c->v.s[0] = c->v.s[27];
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[18]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[2], c->v.f[27]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd5b8c; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[29]; }
L_cd5b8c:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd5b9cu; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[29];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd5bd4; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    c->v.s[2] = c->v.s[31];
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd5bd4; }
    c->v.f[0] = c->v.f[28] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->r[0] = c->r[13] + 0x278u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd5bd0u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd5bd4:;
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[29] - c->v.f[2];
    c->r[4] = c->r[4] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[10] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_LT) { goto L_cd5990; }
L_cd5c04:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_cd5e60; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cd5cec; }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_cd5c9c; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0xcd5c38u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0xcd5c4cu: goto L_cd5c4c; case 0xcd5c68u: goto L_cd5c68; case 0xcd5c80u: goto L_cd5c80; case 0xcd5ca4u: goto L_cd5ca4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd5c4c:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LE) { goto L_cd5cec; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd5ce8;
L_cd5c68:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LE) { goto L_cd5cec; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] - c->r[0];
    goto L_cd5ce0;
L_cd5c80:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_GE) { goto L_cd5cec; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd5ce8;
L_cd5c9c:;
    c->r[1] = 0x100u;
    goto L_cd5cec;
L_cd5ca4:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_cd5cec; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_GE) { goto L_cd5cd0; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd5ce8;
L_cd5cd0:;
    c->r[1] = 0x100u;
    if (COND_LE) { goto L_cd5cec; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[4];
L_cd5ce0:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 8);
L_cd5ce8:;
    c->r[1] = sdiv32(c->r[0], c->r[1]);
L_cd5cec:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    c->r[0] = c->r[0] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[2] = 0x100u;
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    if (COND_HI) { goto L_cd5dfc; }
    c->r[7] = (c->r[7] << 2);
    c->r[5] = 0xcd5d5cu + 0x8u;
    c->r[3] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[7] + c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[5]; switch (c->pc) { case 0xcd5d74u: goto L_cd5d74; case 0xcd5d90u: goto L_cd5d90; case 0xcd5dbcu: goto L_cd5dbc; case 0xcd5de4u: goto L_cd5de4; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd5d74:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x100u;
    if (COND_LE) { goto L_cd5dfc; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cd5df8;
L_cd5d90:;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_cd5dfc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_cd58b8; }
    c->r[7] = c->r[2];
    c->r[2] = (c->r[3] << 8);
    c->r[2] = sdiv32(c->r[2], c->r[7]);
    goto L_cd5dfc;
L_cd5dbc:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_LT) { goto L_cd5dfc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
L_cd5dd4:;
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] << 8);
    goto L_cd5df8;
L_cd5de4:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GE) { goto L_cd5dfc; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cd5df8:;
    c->r[2] = sdiv32(c->r[2], c->r[3]);
L_cd5dfc:;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    c->r[0] = c->r[0] | (c->r[1] << 24);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
L_cd5e60:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_cd6284; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_cd6680; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 44u);
    c->v.s[8] = LD32(c->r[13] + 576u);
    c->v.s[2] = LD32(c->r[13] + 560u);
    c->v.s[4] = LD32(c->r[13] + 564u);
    c->v.s[6] = LD32(c->r[13] + 568u);
    c->v.s[10] = LD32(c->r[13] + 584u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 580u);
    c->v.s[18] = LD32(c->r[13] + 644u);
    c->v.s[16] = LD32(c->r[13] + 640u);
    c->v.s[20] = LD32(c->r[13] + 648u);
    c->v.f[26] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[8] * c->v.f[18];
    c->v.s[0] = LD32(c->r[13] + 596u);
    c->v.s[8] = LD32(c->r[13] + 592u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[4] = LD32(c->r[13] + 600u);
    c->v.f[24] = c->v.f[18] * c->v.f[10];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[8] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd5f10; }
    c->r[14] = 0xcd5f0cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd5f10:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd5f2c; }
    c->v.f[0] = c->v.f[29] / c->v.f[2];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
L_cd5f2c:;
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.s[12] = LD32(c->r[6] + 36u);
    c->v.s[14] = LD32(c->r[6] + 40u);
    c->v.s[1] = LD32(c->r[6] + 32u);
    c->v.s[3] = LD32(c->r[6] + 52u);
    c->v.s[5] = LD32(c->r[6] + 56u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[18];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[16]);
    c->v.f[4] = c->v.f[18] * c->v.f[8];
    c->v.f[6] = c->v.f[18] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[20]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[20] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[14]);
    c->v.f[21] = c->v.f[8] + c->v.f[10];
    c->v.f[23] = c->v.f[3] + c->v.f[6];
    c->v.f[20] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 640u, c->v.s[21]);
    ST32(c->r[13] + 644u, c->v.s[23]);
    ST32(c->r[13] + 648u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[17] = c->v.f[2] - c->v.f[23];
    c->v.f[16] = c->v.f[0] - c->v.f[21];
    c->v.f[18] = c->v.f[4] - c->v.f[20];
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd5fdc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd5fdcu; f_15efddc(c);
L_cd5fdc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd5ff8; }
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
L_cd5ff8:;
    c->v.f[2] = c->v.f[26] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[16]);
    c->v.s[0] = c->v.s[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[18]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[27]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd6024; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[29]; }
L_cd6024:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd6034u; f_15efe24(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = c->v.s[29];
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd606c; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    c->v.s[0] = c->v.s[31];
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd606c; }
    c->v.f[0] = c->v.f[28] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->r[0] = c->r[13] + 0x278u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd606cu; f_9c5814(c);
L_cd606c:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cd6ca4; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[29] - c->v.f[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[6] = (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = (c->r[6] & 0xff000000u) | ((c->r[2] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[6]); }
    c->r[5] = c->r[0];
    c->r[4] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[5] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd6b70; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = 0x0u;
    c->r[9] = 0x18u;
    c->r[8] = c->r[0] + 0x4u;
L_cd60e4:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[10] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[2]); }
    c->r[2] = 0xff000000u;
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 416u, c->v.s[21]);
    ST32(c->r[13] + 420u, c->v.s[23]);
    ST32(c->r[13] + 424u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[2] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = c->r[2] & (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | c->r[5];
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd61a0; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cd6198; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[5]); } }
    if (COND_EQ) { c->r[1] = c->r[5]; }
    goto L_cd61a0;
L_cd6198:;
    c->r[0] = c->r[5];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[5]); }
L_cd61a0:;
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_cd61c0; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
L_cd61c0:;
    c->r[0] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0x290u;
    c->r[12] = c->r[0];
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd6250u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[8] = c->r[8] + 0x4u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd60e4; }
    goto L_cd6ca4;
L_cd6284:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->v.s[8] = LD32(c->r[13] + 576u);
    c->v.s[2] = LD32(c->r[13] + 560u);
    c->v.s[4] = LD32(c->r[13] + 564u);
    c->v.s[6] = LD32(c->r[13] + 568u);
    c->v.s[10] = LD32(c->r[13] + 584u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 580u);
    c->v.s[18] = LD32(c->r[13] + 644u);
    c->v.s[16] = LD32(c->r[13] + 640u);
    c->v.s[20] = LD32(c->r[13] + 648u);
    c->v.f[26] = c->v.f[18] * c->v.f[0];
    c->v.f[22] = c->v.f[8] * c->v.f[18];
    c->v.s[0] = LD32(c->r[13] + 596u);
    c->v.s[8] = LD32(c->r[13] + 592u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[4] = LD32(c->r[13] + 600u);
    c->v.f[24] = c->v.f[18] * c->v.f[10];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[16] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[8] * c->v.f[20]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[0] = c->v.f[26] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd631c; }
    c->r[14] = 0xcd6318u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd631c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd6338; }
    c->v.f[0] = c->v.f[29] / c->v.f[2];
    c->v.f[24] = c->v.f[0] * c->v.f[24];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
    c->v.f[22] = c->v.f[22] * c->v.f[0];
L_cd6338:;
    c->v.s[6] = LD32(c->r[6] + 20u);
    c->v.s[10] = LD32(c->r[6] + 16u);
    c->v.s[0] = LD32(c->r[6] + 4u);
    c->v.s[2] = LD32(c->r[6] + 8u);
    c->v.s[4] = LD32(c->r[6]);
    c->v.s[8] = LD32(c->r[6] + 24u);
    c->v.s[12] = LD32(c->r[6] + 36u);
    c->v.s[14] = LD32(c->r[6] + 40u);
    c->v.s[1] = LD32(c->r[6] + 32u);
    c->v.s[3] = LD32(c->r[6] + 52u);
    c->v.s[5] = LD32(c->r[6] + 56u);
    c->r[0] = 0x0u;
    c->v.f[10] = c->v.f[10] * c->v.f[18];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[16]);
    c->v.f[4] = c->v.f[18] * c->v.f[8];
    c->v.f[6] = c->v.f[18] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[20]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[20] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[20] * c->v.f[14]);
    c->v.f[21] = c->v.f[8] + c->v.f[10];
    c->v.f[23] = c->v.f[3] + c->v.f[6];
    c->v.f[20] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 640u, c->v.s[21]);
    ST32(c->r[13] + 644u, c->v.s[23]);
    ST32(c->r[13] + 648u, c->v.s[20]);
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[17] = c->v.f[2] - c->v.f[23];
    c->v.f[16] = c->v.f[0] - c->v.f[21];
    c->v.f[18] = c->v.f[4] - c->v.f[20];
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd63e8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd63e8u; f_15efddc(c);
L_cd63e8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[25]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd6404; }
    c->v.f[0] = c->v.f[29] / c->v.f[0];
    c->v.f[18] = c->v.f[18] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
L_cd6404:;
    c->v.f[2] = c->v.f[26] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[16]);
    c->v.s[0] = c->v.s[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[18]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[27]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd6430; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[29]; }
L_cd6430:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd6440u; f_15efe24(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = c->v.s[29];
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd6478; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    c->v.s[0] = c->v.s[31];
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd6478; }
    c->v.f[0] = c->v.f[28] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 128u);
    c->r[0] = c->r[13] + 0x278u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd6478u; f_9c5814(c);
L_cd6478:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cd6ca4; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[29] - c->v.f[0];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = (c->r[0] << 16);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[1];
    c->r[6] = (c->r[6] & 0xff000000u) | ((c->r[2] << 0) & 0xffffffu);
    c->r[4] = (c->r[1] >> 24);
    c->r[5] = c->r[5] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_cd6a44; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[8] = 0x0u;
    c->r[10] = 0x18u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[9] = c->r[0] + 0x4u;
L_cd64f8:;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 352u, c->v.s[21]);
    ST32(c->r[13] + 356u, c->v.s[23]);
    ST32(c->r[13] + 360u, c->v.s[20]);
    c->r[0] = c->r[7] + (c->r[8] << 4);
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xff000000u;
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[2] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[4]; c->r[1] = r; }
    c->r[1] = c->r[2] & (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | c->r[5];
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd65a8; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cd65a0; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[8]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[5]); } }
    if (COND_EQ) { c->r[1] = c->r[5]; }
    goto L_cd65a8;
L_cd65a0:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
L_cd65a8:;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd65c4; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
L_cd65c4:;
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x290u;
    c->r[12] = c->r[1];
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd6650u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] + 0x10u;
    c->r[9] = c->r[9] + 0x4u;
    c->r[0] = c->r[0] + c->r[8];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd64f8; }
    goto L_cd6ca4;
L_cd6680:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cd6ca4; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[9] = 0x0u;
    c->r[10] = 0x18u;
    (void)f_subs(c, c->r[3], c->r[0]);
    c->r[0] = 0x0u;
    c->r[2] = c->r[1];
    c->r[1] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_EQ) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] | c->r[0];
    c->r[1] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    if (COND_EQ) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[1]); }
L_cd6744:;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[9] << 4);
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[9] << 4);
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[7] + c->r[10];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[10]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xff000000u;
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd6968; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd688c; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_EQ) { goto L_cd687c; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    if (COND_NE) { goto L_cd688c; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    goto L_cd688c;
L_cd687c:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
L_cd688c:;
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd68b8; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_cd68b8:;
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[0], c->r[9]);
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[2], c->r[1]);
    c->r[1] = 0x0u;
    c->r[2] = c->r[9];
    if (COND_NE) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[9], 0x0u);
    if (COND_NE) { c->r[2] = 0x1u; }
    { uint32_t r = c->r[2] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[1] = r; }
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_cd6968; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->r[1] = c->r[13] + 0x290u;
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[12] = v; }
    goto L_cd69d4;
L_cd6968:;
    c->r[0] = c->r[13] + 0x120u;
    c->r[1] = c->r[13] + 0x290u;
    c->r[12] = c->r[0];
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[12] = v; }
L_cd69d4:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd6a18u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[9] = c->r[9] + 0x1u;
    c->r[10] = c->r[10] + 0x10u;
    c->r[8] = c->r[8] + 0x4u;
    c->r[0] = c->r[0] + c->r[9];
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd6744; }
    goto L_cd6ca4;
L_cd6a44:;
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0x18u;
L_cd6a58:;
    ST32(c->r[13] + 352u, c->v.s[21]);
    ST32(c->r[13] + 356u, c->v.s[23]);
    ST32(c->r[13] + 360u, c->v.s[20]);
    c->r[2] = c->r[10] - 0x18u;
    c->r[3] = c->r[13] + 0x1a0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[3] = c->r[13] + 0x1e0u;
    { uint32_t ea = c->r[10] - 8u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[1] = 0xff000000u;
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[1] = c->r[13] + 0x290u;
    c->r[12] = c->r[1];
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd6b48u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x4u;
    c->r[10] = c->r[10] + 0x10u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_cd6a58; }
    goto L_cd6ca4;
L_cd6b70:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[9] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0x18u;
L_cd6b84:;
    c->r[2] = c->r[10] - 0x18u;
    c->r[3] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[3] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[10] - 8u; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    ST32(c->r[13] + 416u, c->v.s[21]);
    ST32(c->r[13] + 420u, c->v.s[23]);
    ST32(c->r[13] + 424u, c->v.s[20]);
    c->r[1] = 0xff000000u;
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[1] = c->r[13] + 0x290u;
    c->r[0] = c->r[0] | c->r[5];
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x120u;
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[6]); }
    c->r[12] = c->r[0];
    c->r[0] = c->r[1];
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[12] = c->r[12] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[12]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[12] = c->r[12] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[12]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x228u;
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcd6c80u; f_ce10bc(c);
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[9] = c->r[9] + 0x4u;
    c->r[10] = c->r[10] + 0x10u;
    (void)f_subs(c, c->r[8], c->r[0]);
    if (COND_LT) { goto L_cd6b84; }
L_cd6ca4:;
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd58dc; }
L_cd6cc4:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
