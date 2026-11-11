#include "cpu.h"
#include "neon_rt.h"
void f_9c5814(Cpu *c);
void f_cb0ad8(Cpu *c);
void f_ce0de8(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efe24(Cpu *c);
void f_cd7f50(Cpu *restrict c) {
    FN_ENTER(0xcd7f50u);
L_cd7f50:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x3d8u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    c->v.s[20] = 0x3f800000u;
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[2] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[2];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2] + 0x184u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[2] + 0x18cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[2] + 0x170u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[3]); }
    c->r[6] = (uint32_t)(uint16_t)(c->r[12]);
    c->r[4] = (uint32_t)(uint16_t)(c->r[9]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    c->r[6] = (c->r[12] >> 16) - c->r[6];
    c->r[5] = c->r[6] + 0x2u;
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[6]); }
    c->r[6] = 0x180u;
    { uint32_t ea = c->r[1] + c->r[6]; uint32_t v = LD16(ea); c->r[1] = ea; c->r[10] = v; }
    c->r[6] = 0x188u;
    c->r[0] = c->r[3] + (c->r[5] << 4);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + c->r[6]; uint32_t v = LD16(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[4]); }
    c->r[6] = (c->r[14] >> 4) & 0xfu;
    c->r[8] = c->r[0] + (c->r[5] << 4);
    c->r[4] = 0x0u;
    (void)f_subs(c, c->r[6], 0x0u);
    c->v.s[0] = LD32(c->r[1]);
    ST32(c->r[13] + 44u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    ST32(c->r[13] + 56u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 12u);
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 52u, c->v.s[0]);
    c->v.s[0] = c->r[7];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_cd8030; }
    (void)f_subs(c, c->r[6], 0x1u);
    if (COND_NE) { goto L_cd8048; }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    goto L_cd805c;
L_cd8030:;
    c->r[0] = 0x2u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    goto L_cd805c;
L_cd8048:;
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
L_cd805c:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[9] >> 16);
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[4]); }
    c->v.s[22] = 0x3c23d70au;
    c->r[9] = 0x0u;
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[12] >> 16);
    c->r[9] = (c->r[9] & 0xFFFFu) | 0x42c80000u;
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - 0x1u;
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[10] >> 1);
    c->r[10] = c->r[13] + 0x270u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[8] + (c->r[5] << 2);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 40u, c->v.s[0]);
    c->v.s[28] = LD32(c->r[2] + 564u);
    c->v.s[30] = LD32(c->r[2] + 560u);
    { uint32_t ea = c->r[2] + 0x238u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0x23cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x2b8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[2]); }
    c->v.s[17] = c->r[2];
    { uint32_t ea = c->r[1] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[3]); }
    c->v.s[26] = c->r[3];
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x27cu; ST32(ea, c->r[7]); }
    c->v.s[24] = c->r[7];
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[1] + 0x10u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x280u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x14u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x294u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x28u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x298u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x29cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x30u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2a0u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2a4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x38u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x2a8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[1] + 0x3cu; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[1] = (c->r[14] >> 28);
    c->r[0] = c->r[1] | (c->r[0] << 4);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd610a8u;
    { uint32_t ea = c->r[13] + 0x2acu; ST32(ea, c->r[6]); }
    { uint32_t ea = 0xcd8174u + c->r[0]; uint32_t v = LD32(ea); c->r[6] = v; }
    goto L_cd8188;
L_cd8174:;
    c->v.s[17] = LD32(c->r[5] + 20u);
    c->v.s[26] = LD32(c->r[5] + 24u);
    c->v.s[24] = LD32(c->r[5] + 28u);
    c->r[4] = c->r[4] + 0x10u;
    c->r[7] = c->r[7] + 0x14u;
L_cd8188:;
    c->r[5] = c->r[10] + c->r[4];
    c->v.s[19] = LD32(c->r[5]);
    c->v.f[16] = c->v.f[19] * c->v.f[19];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[18] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd81bc; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcd81b8u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_cd81bc:;
    vfp_cmp_f(c, c->v.f[18], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_cd8214; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[10] + c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0x8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[5] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] + c->r[7]; ST32(ea, c->r[9]); }
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_cd8174; }
    goto L_cd826c;
L_cd8214:;
    c->v.f[0] = sqrtf(c->v.f[16]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd822c; }
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcd822cu; f_15efddc(c);
L_cd822c:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.f[2] = c->v.f[20] / c->v.f[18];
    c->v.f[4] = c->v.f[19] * c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[17];
    c->v.f[8] = c->v.f[0] * c->v.f[26];
    c->v.f[0] = c->v.f[0] * c->v.f[24];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    c->v.f[6] = c->v.f[2] * c->v.f[6];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[5], c->v.s[4]);
    ST32(c->r[5] + 4u, c->v.s[6]);
    ST32(c->r[5] + 8u, c->v.s[8]);
    ST32(c->r[5] + 12u, c->v.s[0]);
    (void)f_subs(c, c->r[4], 0x20u);
    if (COND_NE) { goto L_cd8174; }
L_cd826c:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd8618; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cd8618; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    c->v.s[6] = 0x4b400000u;
    c->r[2] = 0xd60fc4u;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[18] = LD32(c->r[13] + 52u);
    c->v.f[22] = c->v.f[28] - c->v.f[30];
    c->v.s[24] = 0x34000000u;
    c->v.s[17] = 0x0u;
    c->v.s[19] = 0x43800000u;
    c->v.s[26] = 0xbf800000u;
    c->r[10] = 0x0u;
    { uint32_t ea = 0xcd82c8u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 40u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[13] + 44u);
    c->r[0] = c->v.s[6];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x2c0u;
    c->v.s[2] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    c->v.f[16] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = LD32(c->r[13] + 56u);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[2]);
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2cu;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->r[9] = c->r[0] - (c->r[2] << 4);
    c->r[0] = (c->r[1] << 4);
    c->r[0] = c->r[0] - (c->r[2] << 4);
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] + (c->r[1] << 3);
    c->r[1] = 0x48u;
    c->r[0] = c->r[1] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[2] << 3);
    c->r[0] = c->r[0] - (c->r[1] << 2);
    c->r[6] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[0] & 0x4u;
    c->r[7] = c->r[0] & 0x2u;
    c->r[0] = 0xd60f00u;
    { uint32_t ea = 0xcd838cu + c->r[0]; uint32_t v = LD32(ea); c->r[4] = v; }
L_cd8388:;
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = LD32(c->r[13] + 640u);
    c->v.s[8] = LD32(c->r[13] + 624u);
    c->v.s[10] = LD32(c->r[13] + 628u);
    c->v.s[1] = LD32(c->r[13] + 648u);
    c->v.s[12] = LD32(c->r[13] + 632u);
    (void)f_subs(c, c->r[1], c->r[10]);
    if (COND_NE) { c->r[0] = c->r[0] + c->r[10]; }
    c->r[0] = (c->r[0] << 12);
    c->r[0] = sdiv32(c->r[0], c->r[1]);
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[4] + (c->r[0] << 2);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[4] + (c->r[1] << 2);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[16] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 644u);
    ST32(c->r[0], c->v.s[18]);
    c->v.s[4] = LD32(c->r[13] + 708u);
    c->v.s[2] = LD32(c->r[13] + 704u);
    c->v.s[6] = LD32(c->r[13] + 712u);
    c->v.f[23] = c->v.f[4] * c->v.f[0];
    c->v.f[21] = c->v.f[14] * c->v.f[4];
    c->v.s[0] = LD32(c->r[13] + 660u);
    c->v.s[14] = LD32(c->r[13] + 656u);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[25] = c->v.f[4] * c->v.f[1];
    c->v.s[4] = LD32(c->r[13] + 664u);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.f[0] = c->v.f[23] * c->v.f[23];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd8454; }
    c->r[14] = 0xcd8450u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd8454:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd8470; }
    c->v.f[0] = c->v.f[20] / c->v.f[2];
    c->v.f[25] = c->v.f[0] * c->v.f[25];
    c->v.f[23] = c->v.f[23] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_cd8470:;
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 704u);
    c->v.s[2] = LD32(c->r[13] + 708u);
    c->v.s[4] = LD32(c->r[13] + 712u);
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
    ST32(c->r[13] + 704u, c->v.s[0]);
    ST32(c->r[13] + 708u, c->v.s[4]);
    ST32(c->r[13] + 712u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[8] = LD32(c->r[0] + 4u);
    c->v.s[10] = LD32(c->r[0] + 8u);
    c->v.f[31] = c->v.f[8] - c->v.f[4];
    c->v.f[29] = c->v.f[2] - c->v.f[0];
    c->v.f[27] = c->v.f[10] - c->v.f[6];
    c->v.f[2] = c->v.f[31] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd8534; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd8534u; f_15efddc(c);
L_cd8534:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd8550; }
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
    c->v.f[31] = c->v.f[31] * c->v.f[0];
    c->v.f[29] = c->v.f[29] * c->v.f[0];
L_cd8550:;
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[2] = c->v.f[23] * c->v.f[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[29]);
    c->v.s[0] = c->v.s[26];
    c->r[0] = c->r[0] + (c->r[10] << 4);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[27]);
    { uint32_t ea = c->r[0] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x24u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[1] = v; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[26]);
    { uint32_t ea = c->r[0] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = 0x0u;
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[9]; ST32(ea, c->r[1]); }
    if (COND_MI) { goto L_cd85a8; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[20]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[20]; }
L_cd85a8:;
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd85b4u; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[20];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd85e8; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    c->v.s[2] = c->v.s[17];
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd85e8; }
    c->v.f[0] = c->v.f[28] - c->v.f[0];
    c->r[0] = c->r[13] + 0x2b8u;
    c->v.f[0] = c->v.f[0] / c->v.f[22];
    c->r[14] = 0xcd85e4u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd85e8:;
    c->v.f[0] = c->v.f[20] - c->v.f[2];
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[9] = c->r[9] + 0x10u;
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.f[0] = c->v.f[0] * c->v.f[19];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[6] + (c->r[10] << 2); ST32(ea, c->r[0]); }
    c->r[10] = c->r[10] + 0x1u;
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[10], c->r[0]);
    if (COND_LT) { goto L_cd8388; }
L_cd8618:;
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = 0x0u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->v.s[4];
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], (c->r[2] >> 16));
    c->r[3] = (c->r[2] >> 16);
    if (COND_EQ) { goto L_cd8670; }
    goto L_cd865c;
L_cd865c:;
    c->r[2] = c->r[3] + 0x1u;
    c->v.s[0] = 0x3f800000u;
    c->v.s[2] = c->r[2];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[18] = c->v.f[0] / c->v.f[2];
L_cd8670:;
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[1], (c->r[0] >> 16));
    c->r[2] = (c->r[0] >> 16);
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[3]); }
    if (COND_EQ) { goto L_cd8698; }
    c->r[0] = c->r[2] + 0x1u;
    c->v.s[0] = 0x3f800000u;
    c->v.s[2] = c->r[0];
    c->v.f[2] = (float)(int32_t)c->v.s[2];
    c->v.f[4] = c->v.f[0] / c->v.f[2];
L_cd8698:;
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[2]); }
    ST32(c->r[13] + 80u, c->v.s[4]);
    c->r[0] = 0x11au;
    c->r[2] = c->r[13] + 0x248u;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x11cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xeu; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xcd86ecu; f_ce0de8(c);
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[2] = c->r[13] + 0x140u;
    c->r[12] = 0x0u;
    { uint32_t ea = c->r[5] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[2] + 0xc0u;
    c->r[1] = c->r[2] + 0x80u;
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[1]); }
    c->r[5] = c->r[14];
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2];
    c->r[2] = c->r[14];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 16u; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[2]; c->r[3] = LD32(ea + 0u); c->r[4] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[3]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x220u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e0u; ST32(ea, c->r[1]); }
    c->r[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x224u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e4u; ST32(ea, c->r[1]); }
    c->r[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1e8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ecu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x230u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x234u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x238u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[5]; c->r[5] = c->r[5] + 16u; c->r[1] = LD32(ea + 0u); c->r[9] = LD32(ea + 4u); c->r[10] = LD32(ea + 8u); c->r[12] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); ST32(ea + 12u, c->r[12]); c->r[0] = c->r[0] + 16u; }
    c->r[9] = c->r[4];
    c->r[10] = c->r[6];
    { uint32_t ea = c->r[5]; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); c->r[3] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[3]); ST32(ea + 12u, c->r[7]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1a4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x140u;
    c->r[0] = c->r[13] + 0x160u;
    { uint32_t ea = c->r[14]; c->r[14] = c->r[14] + 16u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); c->r[1] = c->r[1] + 16u; }
    { uint32_t ea = c->r[14]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[9]); ST32(ea + 4u, c->r[10]); ST32(ea + 8u, c->r[12]); }
    c->r[1] = 0x0u;
    c->r[0] = c->r[13] + 0x16cu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[4]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[11] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x214u;
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD16(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[1] - 0x40u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[14] + 0x94u; ST16(ea, c->r[0]); }
    c->r[14] = c->r[13] + 0x100u;
    { uint32_t ea = c->r[14] + 0x54u; ST16(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1dcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[1], c->r[0]);
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    if (COND_LT) { c->r[1] = 0x1u; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_NE) { c->r[2] = 0x1u; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_HI) { goto L_cda080; }
    c->r[0] = c->r[1] | c->r[2];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[29] = 0x34000000u;
    c->v.s[31] = 0xbf800000u;
    c->v.s[23] = 0x3f800000u;
    c->v.s[20] = 0x3f000000u;
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80u;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x80000u;
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2c0u;
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[0] + (c->r[1] << 2);
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + (c->r[1] << 2);
    c->r[1] = c->r[3];
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[2] - c->r[0];
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = 0x0u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    (void)f_subs(c, c->r[3], 0x0u);
    if (COND_NE) { c->r[1] = 0x1u; }
    c->r[0] = c->r[1] & c->r[0];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[4] >> 24);
    c->r[0] = c->r[0] - (c->r[6] >> 24);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16) & 0xffu;
    c->r[1] = (c->r[4] >> 16) & 0xffu;
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8) & 0xffu;
    c->r[1] = (c->r[4] >> 8) & 0xffu;
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->v.s[2] = LD32(c->r[13] + 52u);
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1] - c->r[0];
    c->r[1] = (uint32_t)(uint8_t)(c->r[6]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[0]); }
    c->r[0] = (uint32_t)(uint8_t)(c->r[4]);
    c->r[0] = c->r[0] - c->r[1];
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] - 0x1u;
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2d0u;
    c->v.f[4] = c->v.f[2] - c->v.f[0];
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[13] + 60u, c->v.s[0]);
    c->v.f[0] = c->v.f[28] - c->v.f[30];
    ST32(c->r[13] + 48u, c->v.s[4]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 140u, c->v.s[0]);
    c->r[0] = c->r[0] + 0x1u;
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] & 0x4u;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[1] & 0x2u;
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 24);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 16);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[0]); }
    c->r[0] = (c->r[6] >> 8);
    c->r[0] = (c->r[0] << 8);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xfu;
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xd60830u;
    { uint32_t ea = 0xcd8a5cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd60824u;
    { uint32_t ea = 0xcd8a68u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3];
    goto L_cd8a8c;
L_cd8a70:;
    (void)f_subs(c, c->r[4], c->r[2]);
    c->r[2] = 0x100u;
    if (COND_LT) { goto L_cd8fb0; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[2] - c->r[3];
    goto L_cd8f8c;
L_cd8a8c:;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[8];
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[11] + 0x8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[11] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_GE) { goto L_cd8db8; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_adds(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_cd8db8; }
    c->v.s[2] = 0x40490fdbu;
    c->v.s[4] = 0x4422f983u;
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[24] = LD32(c->r[13] + 52u);
    c->r[5] = 0x0u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 40u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = 0x4b400000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[13] + 44u);
    c->r[0] = c->v.s[2];
    c->r[1] = c->r[0] + 0x400u;
    c->r[0] = c->r[0] & 0xfffu;
    c->r[1] = c->r[1] & 0xfffu;
    c->r[0] = c->r[2] + (c->r[0] << 2);
    c->r[1] = c->r[2] + (c->r[1] << 2);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1]);
    c->r[4] = c->r[0] + 0x8u;
    c->v.f[22] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = LD32(c->r[13] + 56u);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[2]);
L_cd8b40:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[7], c->r[5]);
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[8] = LD32(c->r[13] + 640u);
    c->v.s[4] = LD32(c->r[13] + 628u);
    c->v.s[6] = LD32(c->r[13] + 632u);
    c->v.s[10] = LD32(c->r[13] + 648u);
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
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[22] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[13] + 624u);
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 644u);
    ST32(c->r[0], c->v.s[24]);
    c->v.s[25] = LD32(c->r[13] + 708u);
    c->v.s[21] = LD32(c->r[13] + 704u);
    c->v.s[16] = LD32(c->r[13] + 712u);
    c->v.f[17] = c->v.f[25] * c->v.f[0];
    c->v.f[26] = c->v.f[8] * c->v.f[25];
    c->v.s[0] = LD32(c->r[13] + 660u);
    c->v.s[8] = LD32(c->r[13] + 656u);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[2] * c->v.f[21]);
    c->v.s[4] = LD32(c->r[13] + 664u);
    c->v.f[19] = c->v.f[25] * c->v.f[10];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[21] * c->v.f[6]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[8] * c->v.f[16]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[0] = c->v.f[17] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd8c0c; }
    c->r[14] = 0xcd8c08u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd8c0c:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd8c28; }
    c->v.f[0] = c->v.f[23] / c->v.f[2];
    c->v.f[19] = c->v.f[0] * c->v.f[19];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
    c->v.f[26] = c->v.f[26] * c->v.f[0];
L_cd8c28:;
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
    c->v.f[10] = c->v.f[10] * c->v.f[25];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[21]);
    c->v.f[4] = c->v.f[25] * c->v.f[8];
    c->v.f[6] = c->v.f[25] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[21] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[16]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[21] = c->v.f[8] + c->v.f[10];
    c->v.f[0] = c->v.f[3] + c->v.f[6];
    c->v.f[4] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 704u, c->v.s[21]);
    ST32(c->r[13] + 708u, c->v.s[0]);
    ST32(c->r[13] + 712u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[9] + 4u);
    c->v.s[8] = LD32(c->r[9] + 8u);
    c->v.f[27] = c->v.f[6] - c->v.f[0];
    c->v.f[25] = c->v.f[2] - c->v.f[21];
    c->v.f[16] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[27] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd8cd8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd8cd8u; f_15efddc(c);
L_cd8cd8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[29]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd8cf4; }
    c->v.f[0] = c->v.f[23] / c->v.f[0];
    c->v.f[16] = c->v.f[16] * c->v.f[0];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
    c->v.f[25] = c->v.f[25] * c->v.f[0];
L_cd8cf4:;
    c->v.f[2] = c->v.f[17] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[25]);
    ST32(c->r[4] - 8u, c->v.s[21]);
    c->v.s[0] = c->v.s[31];
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[16]);
    { uint32_t ea = c->r[4] - 0x4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[4] + 0x4u; ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[2], c->v.f[31]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd8d3c; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[23]; }
L_cd8d3c:;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd8d4cu; f_15efe24(c);
    vfp_cmp_f(c, c->v.f[0], c->v.f[30]);
    c->v.s[2] = c->v.s[23];
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd8d84; }
    c->v.s[2] = 0x0u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd8d84; }
    c->v.f[0] = c->v.f[28] - c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 140u);
    c->r[0] = c->r[13] + 0x2b8u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd8d80u; f_9c5814(c);
    c->v.s[2] = c->v.s[0];
L_cd8d84:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[23] - c->v.f[2];
    c->r[4] = c->r[4] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[2] : c->v.s[0];
    c->v.s[2] = 0x43800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[10] + (c->r[5] << 2); ST32(ea, c->r[0]); }
    c->r[5] = c->r[5] + 0x1u;
    (void)f_subs(c, c->r[5], c->r[8]);
    if (COND_LT) { goto L_cd8b40; }
L_cd8db8:;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[12] = LD32(c->r[13] + 80u);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[7], 0x0u);
    if (COND_EQ) { goto L_cd9014; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_cd8ea4; }
    c->r[0] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[0], 0x3u);
    if (COND_HI) { goto L_cd8e54; }
    c->r[0] = (c->r[0] << 2);
    c->r[2] = 0xcd8df0u + 0x4u;
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->pc = c->r[0] + c->r[2]; switch (c->pc) { case 0xcd8e04u: goto L_cd8e04; case 0xcd8e20u: goto L_cd8e20; case 0xcd8e38u: goto L_cd8e38; case 0xcd8e5cu: goto L_cd8e5c; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd8e04:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_LE) { goto L_cd8ea4; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd8ea0;
L_cd8e20:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_LE) { goto L_cd8ea4; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[4] - c->r[0];
    goto L_cd8e98;
L_cd8e38:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x100u;
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_GE) { goto L_cd8ea4; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd8ea0;
L_cd8e54:;
    c->r[1] = 0x100u;
    goto L_cd8ea4;
L_cd8e5c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[4]);
    if (COND_EQ) { goto L_cd8ea4; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[4], c->r[1]);
    if (COND_GE) { goto L_cd8e88; }
    c->r[0] = (c->r[4] << 8);
    goto L_cd8ea0;
L_cd8e88:;
    c->r[1] = 0x100u;
    if (COND_LE) { goto L_cd8ea4; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] - c->r[4];
L_cd8e98:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = (c->r[0] << 8);
L_cd8ea0:;
    c->r[1] = sdiv32(c->r[0], c->r[1]);
L_cd8ea4:;
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[7] = c->r[7] - 0x1u;
    (void)f_subs(c, c->r[7], 0x3u);
    { uint32_t r = c->r[1] * c->r[0] + c->r[2]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[0] = c->r[2] | c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[2] = r; }
    c->r[2] = c->r[3] + (c->r[2] >> 8);
    c->r[0] = c->r[0] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t r = c->r[1] * c->r[2]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[2] = 0x100u;
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    if (COND_HI) { goto L_cd8fb0; }
    c->r[7] = (c->r[7] << 2);
    c->r[5] = 0xcd8f14u + 0x8u;
    c->r[3] = c->r[4] + 0x1u;
    { uint32_t ea = c->r[7] + c->r[5]; uint32_t v = LD32(ea); c->r[7] = v; }
    c->pc = c->r[7] + c->r[5]; switch (c->pc) { case 0xcd8f2cu: goto L_cd8f2c; case 0xcd8f48u: goto L_cd8f48; case 0xcd8f74u: goto L_cd8f74; case 0xcd8f98u: goto L_cd8f98; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_cd8f2c:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[3]);
    c->r[2] = 0x100u;
    if (COND_LE) { goto L_cd8fb0; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_cd8fac;
L_cd8f48:;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[7], c->r[3]);
    if (COND_EQ) { goto L_cd8fb0; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_GE) { goto L_cd8a70; }
    c->r[7] = c->r[2];
    c->r[2] = (c->r[3] << 8);
    c->r[2] = sdiv32(c->r[2], c->r[7]);
    goto L_cd8fb0;
L_cd8f74:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = 0x0u;
    (void)f_subs(c, c->r[4], c->r[7]);
    if (COND_LT) { goto L_cd8fb0; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[2] = c->r[3] - c->r[2];
L_cd8f8c:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = (c->r[2] << 8);
    goto L_cd8fac;
L_cd8f98:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_GE) { goto L_cd8fb0; }
    c->r[2] = (c->r[3] << 8);
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
L_cd8fac:;
    c->r[2] = sdiv32(c->r[2], c->r[3]);
L_cd8fb0:;
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[2] * c->r[0] + c->r[1]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] & 0xff00u;
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[0] = c->r[1] | c->r[0];
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    c->r[1] = c->r[3] + (c->r[1] >> 8);
    c->r[0] = c->r[0] | (c->r[1] << 24);
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] * c->r[1]; c->r[1] = r; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[1] = (c->r[1] << 16);
    c->r[1] = uxtb16(c->r[1]);
    c->r[0] = c->r[0] | c->r[1];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
L_cd9014:;
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd90fc; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = sdiv32(c->r[4], c->r[1]);
    c->r[0] = c->r[4] - c->r[0] * c->r[1];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[0] = c->v.f[12] * c->v.f[0];
    if (COND_NE) { goto L_cd90ac; }
    c->v.s[2] = LD32(c->r[13] + 584u);
    c->v.s[4] = LD32(c->r[13] + 600u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 608u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 344u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 592u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 408u, c->v.s[12]);
    ST32(c->r[13] + 472u, c->v.s[2]);
    ST32(c->r[13] + 536u, c->v.s[6]);
    goto L_cd90fc;
L_cd90ac:;
    c->v.s[2] = LD32(c->r[13] + 588u);
    c->v.s[4] = LD32(c->r[13] + 604u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 612u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 348u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 596u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 412u, c->v.s[12]);
    ST32(c->r[13] + 476u, c->v.s[2]);
    ST32(c->r[13] + 540u, c->v.s[6]);
L_cd90fc:;
    (void)f_subs(c, c->r[4], 0x0u);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[10]); }
    if (COND_EQ) { goto L_cd9648; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[4], c->r[0]);
    if (COND_NE) { goto L_cd9b80; }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 48u);
    c->v.s[8] = LD32(c->r[13] + 640u);
    c->v.s[2] = LD32(c->r[13] + 624u);
    c->v.s[4] = LD32(c->r[13] + 628u);
    c->v.s[6] = LD32(c->r[13] + 632u);
    c->v.s[10] = LD32(c->r[13] + 648u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 644u);
    c->v.s[26] = LD32(c->r[13] + 708u);
    c->v.s[24] = LD32(c->r[13] + 704u);
    c->v.s[22] = LD32(c->r[13] + 712u);
    c->v.f[19] = c->v.f[26] * c->v.f[0];
    c->v.f[17] = c->v.f[8] * c->v.f[26];
    c->v.s[0] = LD32(c->r[13] + 660u);
    c->v.s[8] = LD32(c->r[13] + 656u);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.s[4] = LD32(c->r[13] + 664u);
    c->v.f[16] = c->v.f[26] * c->v.f[10];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd91ac; }
    c->r[14] = 0xcd91a8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd91ac:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd91c8; }
    c->v.f[0] = c->v.f[23] / c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_cd91c8:;
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
    c->v.f[10] = c->v.f[10] * c->v.f[26];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[24]);
    c->v.f[4] = c->v.f[26] * c->v.f[8];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[22]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[12]);
    c->v.f[26] = c->v.f[8] + c->v.f[10];
    c->v.f[22] = c->v.f[3] + c->v.f[6];
    c->v.f[24] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 704u, c->v.s[26]);
    ST32(c->r[13] + 708u, c->v.s[22]);
    ST32(c->r[13] + 712u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[27] = c->v.f[2] - c->v.f[22];
    c->v.f[21] = c->v.f[0] - c->v.f[26];
    c->v.f[25] = c->v.f[4] - c->v.f[24];
    c->v.f[2] = c->v.f[27] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd9278; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd9278u; f_15efddc(c);
L_cd9278:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[29]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd9294; }
    c->v.f[0] = c->v.f[23] / c->v.f[0];
    c->v.f[25] = c->v.f[25] * c->v.f[0];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_cd9294:;
    c->v.f[2] = c->v.f[19] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[21]);
    c->v.s[0] = c->v.s[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[25]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[31]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd92c0; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[23]; }
L_cd92c0:;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd92d0u; f_15efe24(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = c->v.s[23];
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd9308; }
    c->v.s[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd9308; }
    c->v.f[0] = c->v.f[28] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 140u);
    c->r[0] = c->r[13] + 0x2b8u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd9308u; f_9c5814(c);
L_cd9308:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cda060; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[23] - c->v.f[0];
    c->r[10] = 0x0u;
    c->r[9] = 0x18u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.s[2] = 0x43800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    { uint32_t r = c->r[1] * c->r[0]; c->r[0] = r; }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = (c->r[0] & 0xff000000u) | ((c->r[2] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
L_cd9378:;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[10] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[2]); }
    c->r[2] = 0xff000000u;
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[1]); }
    ST32(c->r[13] + 448u, c->v.s[26]);
    ST32(c->r[13] + 452u, c->v.s[22]);
    ST32(c->r[13] + 456u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[2] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[1] = c->r[2] & (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_cd94a0; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + c->r[10];
    c->r[3] = sdiv32(c->r[2], c->r[7]);
    c->r[2] = c->r[2] - c->r[3] * c->r[7];
    c->v.s[0] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    if (COND_NE) { goto L_cd94cc; }
    c->v.s[2] = LD32(c->r[13] + 588u);
    c->v.s[4] = LD32(c->r[13] + 596u);
    c->r[2] = c->r[2] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 612u);
    c->v.s[10] = c->r[2];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 348u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 604u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[18] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 476u, c->v.s[12]);
    ST32(c->r[13] + 412u, c->v.s[2]);
    ST32(c->r[13] + 540u, c->v.s[6]);
    c->v.s[4] = LD32(c->r[13] + 472u);
    c->v.s[2] = LD32(c->r[13] + 536u);
    goto L_cd951c;
L_cd94a0:;
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[4] = c->r[2];
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[3]); }
    goto L_cd951c;
L_cd94cc:;
    c->v.s[6] = LD32(c->r[13] + 584u);
    c->v.s[2] = LD32(c->r[13] + 592u);
    c->r[2] = c->r[2] + 0x1u;
    c->v.s[4] = LD32(c->r[13] + 608u);
    c->v.s[10] = c->r[2];
    c->v.f[8] = c->v.f[2] - c->v.f[6];
    c->v.s[2] = c->v.s[6];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[13] + 344u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 600u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[12] = c->v.f[4] - c->v.f[2];
    c->v.f[10] = c->v.f[18] * c->v.f[10];
    c->v.s[4] = c->v.s[2];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[12]);
    ST32(c->r[13] + 472u, c->v.s[4]);
    ST32(c->r[13] + 408u, c->v.s[6]);
    ST32(c->r[13] + 536u, c->v.s[2]);
L_cd951c:;
    c->v.f[0] = c->v.f[4] + c->v.f[2];
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    ST32(c->r[13] + 472u, c->v.s[0]);
    if (COND_EQ) { goto L_cd9584; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd9564; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cd955c; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); } }
    goto L_cd9564;
L_cd955c:;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
L_cd9564:;
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], c->r[2]);
    if (COND_NE) { goto L_cd9584; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
L_cd9584:;
    c->r[1] = c->r[13] + 0x140u;
    c->r[12] = c->r[13] + 0x2d0u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x268u;
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcd9624u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[8] = c->r[8] + 0x4u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd9378; }
    goto L_cda060;
L_cd9648:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x0u;
    c->v.s[0] = LD32(c->r[13] + 60u);
    c->v.s[8] = LD32(c->r[13] + 640u);
    c->v.s[2] = LD32(c->r[13] + 624u);
    c->v.s[4] = LD32(c->r[13] + 628u);
    c->v.s[6] = LD32(c->r[13] + 632u);
    c->v.s[10] = LD32(c->r[13] + 648u);
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 644u);
    c->v.s[26] = LD32(c->r[13] + 708u);
    c->v.s[24] = LD32(c->r[13] + 704u);
    c->v.s[22] = LD32(c->r[13] + 712u);
    c->v.f[19] = c->v.f[26] * c->v.f[0];
    c->v.f[17] = c->v.f[8] * c->v.f[26];
    c->v.s[0] = LD32(c->r[13] + 660u);
    c->v.s[8] = LD32(c->r[13] + 656u);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[2] * c->v.f[24]);
    c->v.s[4] = LD32(c->r[13] + 664u);
    c->v.f[16] = c->v.f[26] * c->v.f[10];
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[22] * c->v.f[0]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[22] * c->v.f[4]);
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd96e0; }
    c->r[14] = 0xcd96dcu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_cd96e0:;
    vfp_cmp_f(c, c->v.f[2], c->v.f[29]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd96fc; }
    c->v.f[0] = c->v.f[23] / c->v.f[2];
    c->v.f[16] = c->v.f[0] * c->v.f[16];
    c->v.f[19] = c->v.f[19] * c->v.f[0];
    c->v.f[17] = c->v.f[17] * c->v.f[0];
L_cd96fc:;
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
    c->v.f[10] = c->v.f[10] * c->v.f[26];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[24]);
    c->v.f[4] = c->v.f[26] * c->v.f[8];
    c->v.f[6] = c->v.f[26] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[22]);
    c->v.s[8] = LD32(c->r[6] + 48u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[22] * c->v.f[12]);
    c->v.f[26] = c->v.f[8] + c->v.f[10];
    c->v.f[22] = c->v.f[3] + c->v.f[6];
    c->v.f[24] = c->v.f[5] + c->v.f[4];
    ST32(c->r[13] + 704u, c->v.s[26]);
    ST32(c->r[13] + 708u, c->v.s[22]);
    ST32(c->r[13] + 712u, c->v.s[24]);
    { uint32_t ea = c->r[13] + 0x2ccu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[9] + 4u);
    c->v.s[4] = LD32(c->r[9] + 8u);
    c->v.f[27] = c->v.f[2] - c->v.f[22];
    c->v.f[21] = c->v.f[0] - c->v.f[26];
    c->v.f[25] = c->v.f[4] - c->v.f[24];
    c->v.f[2] = c->v.f[27] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_cd97ac; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcd97acu; f_15efddc(c);
L_cd97ac:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[29]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd97c8; }
    c->v.f[0] = c->v.f[23] / c->v.f[0];
    c->v.f[25] = c->v.f[25] * c->v.f[0];
    c->v.f[27] = c->v.f[27] * c->v.f[0];
    c->v.f[21] = c->v.f[21] * c->v.f[0];
L_cd97c8:;
    c->v.f[2] = c->v.f[19] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[21]);
    c->v.s[0] = c->v.s[31];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[25]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[31]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_cd97f4; }
    vfp_cmp_f(c, c->v.f[2], c->v.f[23]);
    c->v.s[0] = c->v.s[2];
    vfp_mrs_flags(c);
    if (COND_GT) { c->v.s[0] = c->v.s[23]; }
L_cd97f4:;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { c->v.f[0] = fabsf(c->v.f[0]); }
    c->r[14] = 0xcd9804u; f_15efe24(c);
    c->v.s[2] = c->v.s[0];
    c->v.s[0] = c->v.s[23];
    vfp_cmp_f(c, c->v.f[2], c->v.f[30]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_cd983c; }
    c->v.s[0] = 0x0u;
    vfp_cmp_f(c, c->v.f[2], c->v.f[28]);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_cd983c; }
    c->v.f[0] = c->v.f[28] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 140u);
    c->r[0] = c->r[13] + 0x2b8u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->r[14] = 0xcd983cu; f_9c5814(c);
L_cd983c:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cda060; }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[23] - c->v.f[0];
    c->r[10] = 0x0u;
    c->r[9] = 0x18u;
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.s[0] = COND_EQ ? c->v.s[0] : c->v.s[2];
    c->v.s[2] = 0x43800000u;
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = vcvt_s32_f64((double)c->v.f[0]);
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[2] >> 24);
    c->r[0] = c->v.s[0];
    { uint32_t r = c->r[0] * c->r[1]; c->r[0] = r; }
    c->r[0] = (c->r[0] << 16);
    c->r[0] = (c->r[0] & 0xff000000u) | ((c->r[2] << 0) & 0xffffffu);
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[1]); }
L_cd98ac:;
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[13] + 384u, c->v.s[26]);
    ST32(c->r[13] + 388u, c->v.s[22]);
    ST32(c->r[13] + 392u, c->v.s[24]);
    c->r[0] = c->r[7] + (c->r[10] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[2]); }
    c->r[2] = 0xff000000u;
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[0] = c->r[2] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[3];
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[1] = c->r[2] & (c->r[1] << 16);
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[1] | c->r[3];
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[2], 0x0u);
    if (COND_EQ) { goto L_cd99cc; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[2] = c->r[2] + c->r[10];
    c->r[3] = sdiv32(c->r[2], c->r[7]);
    c->r[2] = c->r[2] - c->r[3] * c->r[7];
    c->v.s[0] = c->r[2];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    if (COND_NE) { goto L_cd9a00; }
    c->v.s[0] = LD32(c->r[13] + 588u);
    c->v.s[2] = LD32(c->r[13] + 596u);
    c->r[2] = c->r[2] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 612u);
    c->v.s[10] = c->r[2];
    c->v.f[2] = c->v.f[2] - c->v.f[0];
    c->v.s[6] = c->v.s[0];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[2]);
    ST32(c->r[13] + 348u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 604u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[18] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 476u, c->v.s[12]);
    ST32(c->r[13] + 412u, c->v.s[0]);
    ST32(c->r[13] + 540u, c->v.s[6]);
    c->v.s[2] = LD32(c->r[13] + 344u);
    c->v.s[0] = LD32(c->r[13] + 408u);
    goto L_cd9a50;
L_cd99cc:;
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[2] = c->r[2];
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[6]); }
    goto L_cd9a50;
L_cd9a00:;
    c->v.s[0] = LD32(c->r[13] + 584u);
    c->v.s[2] = LD32(c->r[13] + 592u);
    c->r[2] = c->r[2] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 600u);
    c->v.s[10] = LD32(c->r[13] + 608u);
    c->v.s[12] = c->r[2];
    c->v.f[6] = c->v.f[2] - c->v.f[0];
    c->v.s[2] = c->v.s[0];
    c->v.f[10] = c->v.f[10] - c->v.f[8];
    c->v.s[14] = c->v.s[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    ST32(c->r[13] + 344u, c->v.s[2]);
    c->v.f[12] = (float)(int32_t)c->v.s[12];
    ST32(c->r[13] + 472u, c->v.s[14]);
    c->v.f[12] = c->v.f[18] * c->v.f[12];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[10]);
    ST32(c->r[13] + 408u, c->v.s[0]);
    ST32(c->r[13] + 536u, c->v.s[8]);
L_cd9a50:;
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x0u);
    c->v.f[0] = c->v.f[0] * c->v.f[20];
    ST32(c->r[13] + 408u, c->v.s[0]);
    if (COND_EQ) { goto L_cd9ab4; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd9a98; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_cd9a90; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], c->r[10]);
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_EQ) { { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); } }
    goto L_cd9a98;
L_cd9a90:;
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
L_cd9a98:;
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x1u);
    if (COND_NE) { goto L_cd9ab4; }
    c->r[1] = c->r[1] & 0xffffffu;
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
L_cd9ab4:;
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[12] = c->r[13] + 0x2d0u;
    c->r[1] = c->r[12];
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[2] = 0x3u;
    c->r[3] = c->r[13] + 0x268u;
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcd9b54u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[10] = c->r[10] + 0x1u;
    c->r[8] = c->r[8] + 0x4u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[10];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd98ac; }
    goto L_cda060;
L_cd9b80:;
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], c->r[0]);
    if (COND_CC) { goto L_cda060; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[3] = v; }
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
    c->r[1] = c->r[13] + 0x140u;
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2u;
    if (COND_EQ) { c->r[0] = 0x0u; }
    (void)f_subs(c, c->r[3], c->r[2]);
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3u;
    if (COND_EQ) { c->r[0] = 0x1u; }
    c->r[0] = c->r[1] + (c->r[0] << 6);
    c->r[0] = c->r[0] | 0xcu;
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[0] + 0x4u;
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0];
    c->r[0] = (c->r[0] >> 24);
    c->r[1] = c->r[1] & 0xffffffu;
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[1]); }
L_cd9c44:;
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[7] + (c->r[8] << 4);
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + (c->r[8] << 4);
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[1]); }
    c->r[3] = c->r[7] + c->r[9];
    { uint32_t ea = c->r[0] + 4u; c->r[1] = LD32(ea + 0u); c->r[2] = LD32(ea + 4u); }
    { uint32_t ea = c->r[3] - 0x18u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x1c0u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x1c4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1c8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[7] + c->r[9]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x200u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x204u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x208u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = 0xff000000u;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10] - 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[10]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] * c->r[3]; c->r[0] = r; }
    c->r[0] = c->r[1] & (c->r[0] << 16);
    c->r[0] = c->r[0] | c->r[2];
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd9dbc; }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + c->r[8];
    c->r[1] = sdiv32(c->r[0], c->r[2]);
    c->r[0] = c->r[0] - c->r[1] * c->r[2];
    c->v.s[0] = c->r[0];
    c->v.f[0] = (float)(int32_t)c->v.s[0];
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x1u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    if (COND_NE) { goto L_cd9de0; }
    c->v.s[2] = LD32(c->r[13] + 588u);
    c->v.s[4] = LD32(c->r[13] + 596u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 612u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 348u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 604u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[18] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 476u, c->v.s[12]);
    ST32(c->r[13] + 412u, c->v.s[2]);
    ST32(c->r[13] + 540u, c->v.s[6]);
    goto L_cd9e30;
L_cd9dbc:;
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1d8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x260u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    goto L_cd9e30;
L_cd9de0:;
    c->v.s[2] = LD32(c->r[13] + 584u);
    c->v.s[4] = LD32(c->r[13] + 592u);
    c->r[0] = c->r[0] + 0x1u;
    c->v.s[8] = LD32(c->r[13] + 608u);
    c->v.s[10] = c->r[0];
    c->v.f[4] = c->v.f[4] - c->v.f[2];
    c->v.s[6] = c->v.s[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[4]);
    ST32(c->r[13] + 344u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 600u);
    c->v.f[10] = (float)(int32_t)c->v.s[10];
    c->v.f[10] = c->v.f[18] * c->v.f[10];
    c->v.f[8] = c->v.f[8] - c->v.f[6];
    c->v.s[12] = c->v.s[6];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    ST32(c->r[13] + 472u, c->v.s[12]);
    ST32(c->r[13] + 408u, c->v.s[2]);
    ST32(c->r[13] + 536u, c->v.s[6]);
L_cd9e30:;
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_cd9f78; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd9e84; }
    (void)f_subs(c, c->r[8], 0x0u);
    if (COND_EQ) { goto L_cd9e74; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], c->r[8]);
    if (COND_NE) { goto L_cd9e84; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    goto L_cd9e84;
L_cd9e74:;
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
L_cd9e84:;
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_cd9eb0; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0xffffffu;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
L_cd9eb0:;
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
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
    if (COND_NE) { { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[1] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] | c->r[1]; c->nf = r >> 31; c->zf = r == 0; c->r[0] = r; } }
    if (COND_NE) { goto L_cd9f78; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[12] = c->r[13] + 0x2d0u;
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    c->r[1] = c->r[13] + 0x140u;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    goto L_cd9ffc;
L_cd9f78:;
    c->r[1] = c->r[13] + 0x140u;
    c->r[12] = c->r[13] + 0x2d0u;
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[0] = c->r[12];
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
L_cd9ffc:;
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0x4u;
    c->r[3] = c->r[13] + 0x268u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[12];
    c->r[14] = 0xcda038u; f_cb0ad8(c);
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->r[8] + 0x1u;
    c->r[10] = c->r[10] + 0x4u;
    c->r[9] = c->r[9] + 0x10u;
    c->r[0] = c->r[0] + c->r[8];
    c->r[6] = c->r[6] + 0x4u;
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_LT) { goto L_cd9c44; }
L_cda060:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[2] + 0x1u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LT) { goto L_cd8a8c; }
L_cda080:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
