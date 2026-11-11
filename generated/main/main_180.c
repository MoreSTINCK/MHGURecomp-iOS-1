#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_b4cf88(Cpu *c);
void f_bf5adc(Cpu *c);
void f_bf5c58(Cpu *c);
void f_bf5da8(Cpu *c);
void f_bf5f24(Cpu *c);
void f_bf60a0(Cpu *c);
void f_bf61f0(Cpu *c);
void f_15efddc(Cpu *c);
void f_15efde8(Cpu *c);
void f_15efe24(Cpu *c);
void f_bd7b64(Cpu *restrict c) {
    FN_ENTER(0xbd7b64u);
L_bd7b64:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0x198u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->r[5] = c->r[0];
    c->r[4] = c->r[1];
    c->r[6] = c->r[2];
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xc8u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[0] = c->r[3] - 0x3u;
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_HI) { goto L_bda148; }
    c->v.s[16] = 0x34000000u;
    c->v.s[0] = LD32(c->r[1] + 68u);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LS) { goto L_bda148; }
    { uint32_t ea = c->r[1] + 0x61u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[5] + 0x61u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[0], 0x0u); }
    if (COND_EQ) { goto L_bda148; }
    { uint32_t ea = c->r[1] + 0x5acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1] + 0x34cu; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[3], 0x3u);
    if (COND_NE) { goto L_bd7bf0; }
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x80cu; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[3]); }
    if (COND_EQ) { goto L_bda148; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { goto L_bd7c1c; }
    goto L_bda148;
L_bd7bf0:;
    (void)f_subs(c, c->r[2], c->r[0]);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0x80cu; uint32_t v = LD32(ea); c->r[3] = v; } }
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[3]); }
    if (COND_EQ) { goto L_bda148; }
    { uint32_t ea = c->r[1] + 0xa6cu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[3], c->r[7]);
    if (COND_NE) { (void)f_subs(c, c->r[0], c->r[7]); }
    if (COND_EQ) { goto L_bda148; }
    (void)f_subs(c, c->r[0], c->r[3]);
    if (COND_NE) { (void)f_subs(c, c->r[2], c->r[7]); }
    if (COND_EQ) { goto L_bda148; }
L_bd7c1c:;
    { uint32_t ea = c->r[5] + 0x6cu; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd7f40; }
    { uint32_t ea = c->r[1] + 0xb48u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { { uint32_t ea = c->r[1] + 0xc4u; uint32_t v = LD8(ea); c->r[0] = v; } }
    if (COND_NE) { { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; } }
    if (COND_NE) { goto L_bd7fe8; }
    { uint32_t ea = c->r[1] + 0xd56u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd7c54; }
    { uint32_t ea = c->r[1] + 0xb8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bd99f8; }
L_bd7c54:;
    c->r[1] = c->r[4] + 0x10u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[14] = 0xbd7c60u; f_272ea8(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0x70u;
    c->r[0] = c->r[13] + 0x110u;
    c->r[14] = 0xbd7c70u; f_272ea8(c);
    c->v.s[10] = LD32(c->r[13] + 272u);
    c->v.s[12] = LD32(c->r[13] + 276u);
    c->v.s[8] = LD32(c->r[13] + 340u);
    c->v.s[14] = LD32(c->r[13] + 336u);
    c->v.s[6] = LD32(c->r[13] + 280u);
    c->v.s[4] = LD32(c->r[13] + 344u);
    c->v.s[2] = LD32(c->r[13] + 284u);
    c->v.s[0] = LD32(c->r[13] + 348u);
    c->v.s[18] = 0x0u;
    c->v.s[11] = 0x3ddd0956u;
    c->v.s[5] = 0x3bbfa681u;
    c->v.s[7] = 0xbc80625au;
    c->v.s[13] = 0xbd0dee73u;
    c->v.s[15] = 0x3db056e5u;
    c->v.s[22] = 0xbe31325eu;
    c->v.s[20] = 0x3c687b9cu;
    c->v.s[24] = 0xbe36a584u;
    c->v.s[26] = 0x3f183577u;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[28] = 0xbb8eacddu;
    c->v.f[1] = c->v.f[8] * c->v.f[12];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[1]);
    c->v.s[3] = c->v.s[1] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[9] = COND_GT ? c->v.s[3] : c->v.s[1];
    c->v.s[3] = 0xbc6bd4b8u;
    vfp_cmp_f(c, c->v.f[18], c->v.f[1]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[9] * c->v.f[13]);
    c->v.s[5] = 0x3d30f1f4u;
    c->v.s[13] = LD32(c->r[0] + 68u);
    vfp_mrs_flags(c);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[3]);
    c->v.s[3] = 0x3f800000u;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[5] = 0xbf256968u;
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[9] * c->v.f[7]);
    c->v.s[7] = 0x3da2cff9u;
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[9] * c->v.f[15]);
    c->v.s[15] = 0x3fc91658u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[9] * c->v.f[11]);
    c->v.s[11] = 0x3f107581u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[9] * c->v.f[24]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[9] * c->v.f[20]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[9] * c->v.f[26]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[9] * c->v.f[22]);
    c->v.f[20] = c->v.f[13] * c->v.f[13];
    c->v.f[24] = c->v.f[3] - c->v.f[13];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[9] * c->v.f[11]);
    c->v.s[11] = c->v.s[5];
    c->v.f[9] = c->v.f[9] + c->v.f[3];
    c->v.s[22] = c->v.s[7];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[20] * c->v.f[28]);
    c->v.f[9] = c->v.f[3] / c->v.f[9];
    c->v.s[26] = c->v.s[15];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[20] * c->v.f[22]);
    c->v.f[22] = c->v.f[24] * c->v.f[24];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[22] * c->v.f[28]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[20] * c->v.f[11]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[22] * c->v.f[7]);
    c->v.s[7] = 0xbf800000u;
    c->v.f[11] = c->v.f[13] * c->v.f[26];
    c->v.s[1] = COND_GT ? c->v.s[7] : c->v.s[3];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[22] * c->v.f[5]);
    c->v.f[5] = c->v.f[9] * c->v.f[11];
    c->v.f[7] = c->v.f[24] * c->v.f[15];
    c->v.f[1] = c->v.f[1] * c->v.f[5];
    c->v.f[5] = c->v.f[9] * c->v.f[7];
    c->v.f[10] = c->v.f[10] * c->v.f[1];
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[5]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[5]);
    ST32(c->r[13] + 336u, c->v.s[10]);
    c->v.f[4] = c->v.f[12] + c->v.f[12];
    c->v.f[8] = c->v.f[10] + c->v.f[10];
    c->v.f[14] = c->v.f[6] + c->v.f[6];
    ST32(c->r[13] + 340u, c->v.s[12]);
    ST32(c->r[13] + 344u, c->v.s[6]);
    ST32(c->r[13] + 348u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[12] * c->v.f[4];
    c->v.f[1] = c->v.f[10] * c->v.f[8];
    c->v.f[6] = c->v.f[6] * c->v.f[14];
    c->v.f[5] = c->v.f[2] * c->v.f[4];
    c->v.f[7] = c->v.f[10] * c->v.f[14];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[12] = c->v.f[12] * c->v.f[14];
    c->v.f[2] = c->v.f[2] * c->v.f[14];
    c->v.f[4] = c->v.f[10] * c->v.f[4];
    { uint32_t ea = c->r[0] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[10] = c->v.f[1] + c->v.f[0];
    c->v.f[14] = c->v.f[1] + c->v.f[6];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[20] = c->v.f[12] - c->v.f[8];
    c->v.f[22] = c->v.f[7] + c->v.f[5];
    c->v.f[26] = c->v.f[12] + c->v.f[8];
    c->v.f[28] = c->v.f[4] - c->v.f[2];
    c->v.f[17] = c->v.f[7] - c->v.f[5];
    c->v.f[19] = c->v.f[4] + c->v.f[2];
    c->v.f[24] = c->v.f[3] - c->v.f[10];
    c->v.f[30] = c->v.f[3] - c->v.f[14];
    c->v.f[21] = c->v.f[3] - c->v.f[0];
    if (COND_EQ) { goto L_bd810c; }
    c->v.s[0] = LD32(c->r[4] + 20u);
    c->v.s[2] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd7e64; }
    c->r[14] = 0xbd7e60u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd7e64:;
    c->v.f[0] = c->v.f[21] * c->v.f[2];
    c->v.f[4] = c->v.f[19] * c->v.f[2];
    c->v.f[6] = c->v.f[17] * c->v.f[2];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    ST32(c->r[4] + 16u, c->v.s[0]);
    ST32(c->r[4] + 20u, c->v.s[4]);
    ST32(c->r[4] + 24u, c->v.s[6]);
    ST32(c->r[4] + 28u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[4] + 36u);
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd7ebc; }
    c->r[14] = 0xbd7eb8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd7ebc:;
    c->v.f[0] = c->v.f[28] * c->v.f[2];
    c->v.f[4] = c->v.f[30] * c->v.f[2];
    c->v.f[6] = c->v.f[26] * c->v.f[2];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    ST32(c->r[4] + 32u, c->v.s[0]);
    ST32(c->r[4] + 36u, c->v.s[4]);
    ST32(c->r[4] + 40u, c->v.s[6]);
    ST32(c->r[4] + 44u, c->v.s[2]);
    c->v.s[0] = LD32(c->r[4] + 52u);
    c->v.s[2] = LD32(c->r[4] + 48u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd7f14; }
    c->r[14] = 0xbd7f10u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd7f14:;
    c->v.f[0] = c->v.f[22] * c->v.f[2];
    c->v.f[4] = c->v.f[20] * c->v.f[2];
    c->v.f[6] = c->v.f[24] * c->v.f[2];
    c->v.f[2] = c->v.f[2] * c->v.f[18];
    c->r[1] = c->r[4] + 0x3cu;
    ST32(c->r[4] + 48u, c->v.s[0]);
    ST32(c->r[4] + 52u, c->v.s[4]);
    ST32(c->r[4] + 56u, c->v.s[6]);
    c->r[0] = c->v.s[2];
    goto L_bd8140;
L_bd7f40:;
    c->v.s[20] = LD32(c->r[1] + 68u);
    c->v.s[18] = 0x3f800000u;
    vfp_cmp_f(c, c->v.f[20], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_NE) { goto L_bd80d0; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[6] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xa0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[6] + 0xa4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[6] + 0xa8u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[6] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[6] + 0xb0u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[6] + 0xb4u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0xb8u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[6] + 0xbcu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[6] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd8c30;
L_bd7fe8:;
    { uint32_t ea = c->r[1] + 0xd56u; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_bd8000; }
    { uint32_t ea = c->r[1] + 0xb8cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_bd82b8; }
L_bd8000:;
    c->r[1] = c->r[1] + 0x70u;
L_bd8004:;
    c->r[0] = c->r[13] + 0x80u;
L_bd8008:;
    c->r[14] = 0xbd800cu; f_272ea8(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x190u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[2], 0x5u);
    if (COND_HI) { goto L_bd97d8; }
    { uint32_t ea = c->r[0] + 0x18cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[2] << 2);
    c->r[3] = 0xbd802cu + 0x4u;
    { uint32_t ea = c->r[2] + c->r[3]; uint32_t v = LD32(ea); c->r[2] = v; }
    c->pc = c->r[2] + c->r[3]; switch (c->pc) { case 0xbd8048u: goto L_bd8048; case 0xbd8ce4u: goto L_bd8ce4; case 0xbd8d38u: goto L_bd8d38; case 0xbd8d88u: goto L_bd8d88; case 0xbd8e24u: goto L_bd8e24; case 0xbd8eb8u: goto L_bd8eb8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd8048:;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_bd97d8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xbd8060u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbd80a4u: goto L_bd80a4; case 0xbd916cu: goto L_bd916c; case 0xbd9190u: goto L_bd9190; case 0xbd91d8u: goto L_bd91d8; case 0xbd97d8u: goto L_bd97d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd80a4:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    goto L_bd91c0;
L_bd80d0:;
    { uint32_t ea = c->r[4] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = (c->r[0] >> 8) & 0xffu;
    (void)f_subs(c, c->r[0], 0xffu);
    if (COND_NE) { goto L_bd8148; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xbd80f4u; rt_dispatch(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    goto L_bd8158;
L_bd810c:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[4] + 0x3cu;
    ST32(c->r[4] + 16u, c->v.s[21]);
    ST32(c->r[4] + 20u, c->v.s[19]);
    ST32(c->r[4] + 24u, c->v.s[17]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[28]);
    ST32(c->r[4] + 36u, c->v.s[30]);
    ST32(c->r[4] + 40u, c->v.s[26]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 48u, c->v.s[22]);
    ST32(c->r[4] + 52u, c->v.s[20]);
    ST32(c->r[4] + 56u, c->v.s[24]);
L_bd8140:;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    goto L_bd99f8;
L_bd8148:;
    { uint32_t ea = c->r[6] + 0x494u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[0] + (c->r[0] << 2);
    c->r[0] = c->r[2] + (c->r[0] << 5);
    c->r[0] = c->r[0] + 0x10u;
L_bd8158:;
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x10u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[9]); }
    c->v.s[23] = c->r[9];
    { uint32_t ea = c->r[0] + 0x14u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[10]); }
    c->v.s[25] = c->r[10];
    { uint32_t ea = c->r[0] + 0x18u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[14]); }
    c->v.s[21] = c->r[14];
    { uint32_t ea = c->r[0] + 0x1cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[0] + 0x20u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[12]); }
    c->v.s[30] = c->r[12];
    { uint32_t ea = c->r[0] + 0x24u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[0] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[2]); }
    c->v.s[28] = c->r[2];
    { uint32_t ea = c->r[0] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[0] + 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[3]); }
    c->v.s[24] = c->r[3];
    c->r[3] = c->r[8];
    { uint32_t ea = c->r[0] + 0x34u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[17] = c->r[3];
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[6]); }
    c->v.s[26] = c->r[6];
    { uint32_t ea = c->r[0] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[7]); }
    c->v.s[22] = c->r[7];
    { uint32_t ea = c->r[0] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[1] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd831c; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[6] = c->r[12];
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[10]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[31] = c->r[1];
    c->v.s[29] = c->r[2];
    c->v.s[19] = c->r[0];
    c->r[7] = c->r[0];
    c->v.f[2] = c->v.f[19] * c->v.f[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[31] * c->v.f[31]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd8294; }
    c->v.s[0] = c->v.s[2];
    c->r[10] = c->r[3];
    c->r[8] = c->r[2];
    c->r[14] = 0xbd8288u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[8];
    c->r[3] = c->r[10];
L_bd8294:;
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->r[12] = c->r[6];
    vfp_mrs_flags(c);
    c->v.s[27] = c->r[14];
    if (COND_PL) { goto L_bd8440; }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[19] = c->r[0];
    goto L_bd8468;
L_bd82b8:;
    { uint32_t ea = c->r[1] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd8fd0; }
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd82fc; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd82fcu; f_15efddc(c);
L_bd82fc:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd8fd8; }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9010;
L_bd831c:;
    c->r[2] = c->r[13] + 0x150u;
    c->v.f[4] = c->v.f[25] * c->v.f[26];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[23] * c->v.f[24]);
    c->r[14] = c->r[13] + 0x90u;
    c->r[7] = 0x0u;
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[21] * c->v.f[22]);
    c->v.s[0] = c->r[1];
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[7]); }
    c->r[1] = c->r[4] + 0x10u;
    c->v.s[6] = c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x90u;
    c->v.f[0] = c->v.f[0] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[17] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = c->v.s[4] ^ 0x80000000u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[22]);
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[7]); }
    c->r[0] = 0x3f800000u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 196u, c->v.s[4]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    c->r[14] = 0xbd83bcu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    goto L_bd88c4;
L_bd8440:;
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 336u);
    c->v.f[6] = c->v.f[0] * c->v.f[19];
    c->v.f[4] = c->v.f[0] * c->v.f[31];
    c->v.f[8] = c->v.f[0] * c->v.f[29];
    c->v.f[19] = c->v.f[0] * c->v.f[2];
    c->r[1] = c->v.s[4];
    c->r[7] = c->v.s[6];
    c->r[2] = c->v.s[8];
    c->r[0] = c->v.s[19];
L_bd8468:;
    c->v.f[2] = c->v.f[25] * c->v.f[25];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[2]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd84d0; }
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[9] = c->r[1];
    c->r[10] = c->r[3];
    c->r[6] = c->r[12];
    c->r[14] = 0xbd84b8u; f_15efddc(c);
    c->r[12] = c->r[6];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = c->r[10];
L_bd84d0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[29] = c->r[6];
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bd8508; }
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[21];
    c->v.f[4] = c->v.f[0] * c->v.f[25];
    c->v.f[6] = c->v.f[0] * c->v.f[23];
    c->v.f[0] = c->v.f[0] * c->v.f[27];
    c->r[0] = c->v.s[2];
    c->r[8] = c->v.s[4];
    c->r[9] = c->v.s[6];
    c->r[14] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
L_bd8508:;
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[14]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd8568; }
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[9]); }
    c->r[9] = c->r[1];
    c->r[10] = c->r[3];
    c->r[6] = c->r[12];
    c->r[14] = 0xbd8554u; f_15efddc(c);
    c->r[12] = c->r[6];
    c->r[1] = c->r[9];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[3] = c->r[10];
L_bd8568:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bd859c; }
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[28];
    c->v.f[4] = c->v.f[0] * c->v.f[17];
    c->v.f[6] = c->v.f[0] * c->v.f[30];
    c->v.f[0] = c->v.f[0] * c->v.f[29];
    c->r[0] = c->v.s[2];
    c->r[3] = c->v.s[4];
    c->r[12] = c->v.s[6];
    c->r[6] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
L_bd859c:;
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.s[0] = c->r[7];
    c->r[0] = 0x0u;
    c->r[14] = c->r[13] + 0x9cu;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[3]); }
    ST32(c->r[13] + 144u, c->v.s[19]);
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[12]); }
    c->v.s[2] = c->r[8];
    c->v.s[4] = c->r[3];
    c->v.s[6] = c->r[9];
    c->v.s[8] = c->r[1];
    c->v.s[10] = c->r[12];
    c->v.f[0] = c->v.f[0] * c->v.f[26];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[14]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[8]); }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[1]); }
    c->v.f[2] = c->v.f[2] * c->v.f[26];
    c->v.f[4] = c->v.f[4] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[24]);
    c->v.s[6] = c->r[2];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[6] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.s[12] = c->r[1];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[12] * c->v.f[22]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[6]); }
    c->v.s[30] = c->r[6];
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[7]); }
    c->v.s[17] = c->r[7];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->v.f[0] = sqrtf(c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[2]); }
    if (COND_VC) { goto L_bd8738; }
    c->v.s[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[10]); }
    c->r[8] = c->r[12];
    c->r[10] = c->r[14];
    c->r[9] = c->r[3];
    c->r[14] = 0xbd8720u; f_15efddc(c);
    c->r[3] = c->r[9];
    c->r[14] = c->r[10];
    c->r[12] = c->r[8];
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[9] = v; }
L_bd8738:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[22] = c->r[10];
    c->v.s[28] = c->r[9];
    c->v.s[26] = c->r[14];
    c->v.s[24] = c->r[3];
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd8760; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_bd878c;
L_bd8760:;
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.s[4] = LD32(c->r[13] + 276u);
    c->v.s[2] = LD32(c->r[13] + 272u);
    c->v.f[6] = c->v.f[0] * c->v.f[30];
    c->v.f[8] = c->v.f[0] * c->v.f[17];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->r[6] = c->v.s[6];
    c->r[7] = c->v.s[8];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[0];
L_bd878c:;
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[7]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd87dc; }
    c->v.s[0] = c->v.s[2];
    c->r[6] = c->r[12];
    c->r[7] = c->r[14];
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[3]); }
    c->r[14] = 0xbd87d0u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[14] = c->r[7];
    c->r[12] = c->r[6];
L_bd87dc:;
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[30] = c->r[8];
    c->v.s[17] = c->r[12];
    vfp_mrs_flags(c);
    c->v.s[21] = c->r[6];
    c->v.s[19] = c->r[7];
    if (COND_MI) { goto L_bd8824; }
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[28];
    c->v.f[4] = c->v.f[0] * c->v.f[26];
    c->v.f[6] = c->v.f[0] * c->v.f[24];
    c->v.f[0] = c->v.f[0] * c->v.f[22];
    c->r[9] = c->v.s[2];
    c->r[14] = c->v.s[4];
    c->r[3] = c->v.s[6];
    c->r[10] = c->v.s[0];
L_bd8824:;
    c->v.f[2] = c->v.f[19] * c->v.f[19];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[10]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd886c; }
    c->v.s[0] = c->v.s[2];
    c->r[9] = c->r[8];
    c->r[8] = c->r[12];
    c->r[14] = 0xbd8864u; f_15efddc(c);
    c->r[12] = c->r[8];
    c->r[8] = c->r[9];
L_bd886c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_bd889c; }
    c->v.f[0] = c->v.f[18] / c->v.f[0];
    c->v.f[2] = c->v.f[0] * c->v.f[21];
    c->v.f[4] = c->v.f[0] * c->v.f[19];
    c->v.f[6] = c->v.f[0] * c->v.f[17];
    c->v.f[0] = c->v.f[0] * c->v.f[30];
    c->r[6] = c->v.s[2];
    c->r[7] = c->v.s[4];
    c->r[12] = c->v.s[6];
    c->r[8] = c->v.s[0];
L_bd889c:;
    c->r[0] = c->r[13] + 0x110u;
    c->r[1] = c->r[13] + 0x90u;
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[8]); }
    c->r[14] = 0xbd88b8u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[6] = v; }
L_bd88c4:;
    c->v.s[24] = c->r[7];
    c->v.s[22] = c->r[8];
    c->v.s[26] = c->r[6];
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bd8948; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0x240u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_LT) { goto L_bd8948; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = 0x260u;
    { uint32_t r = c->r[0] * c->r[2] + c->r[1]; c->r[0] = r; }
    c->v.s[16] = LD32(c->r[0] + 388u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd8920; }
    c->r[14] = 0xbd891cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd8920:;
    c->v.f[0] = c->v.f[18] / c->v.f[2];
    c->v.f[2] = c->v.f[26] * c->v.f[0];
    c->v.f[4] = c->v.f[24] * c->v.f[0];
    c->v.f[0] = c->v.f[22] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[6] = c->v.s[2];
    c->r[7] = c->v.s[4];
    c->r[8] = c->v.s[0];
L_bd8948:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x90u;
    c->r[1] = c->r[0] + 0x90u;
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xbd895cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x100u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x104u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x108u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[14] = 0xbd89e8u; f_272ea8(c);
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[13] + 0xd0u;
    c->r[14] = 0xbd89f4u; f_272ea8(c);
    c->v.s[6] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 116u);
    c->v.s[12] = LD32(c->r[13] + 132u);
    c->v.s[14] = LD32(c->r[13] + 128u);
    c->v.s[8] = LD32(c->r[13] + 120u);
    c->v.s[1] = LD32(c->r[13] + 136u);
    c->v.s[2] = LD32(c->r[13] + 124u);
    c->v.s[10] = LD32(c->r[13] + 140u);
    c->v.s[3] = 0x0u;
    c->v.s[5] = 0xbf800000u;
    c->v.f[0] = c->v.f[12] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[2]);
    vfp_cmp_f(c, c->v.f[3], c->v.f[0]);
    c->v.s[7] = c->v.s[0] ^ 0x80000000u;
    c->v.s[3] = 0x3f7ffffeu;
    vfp_mrs_flags(c);
    c->v.s[0] = COND_GT ? c->v.s[7] : c->v.s[0];
    c->v.s[22] = COND_GT ? c->v.s[5] : c->v.s[18];
    vfp_cmp_f(c, c->v.f[0], c->v.f[3]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd8aa8; }
    c->r[14] = 0xbd8a54u; f_15efe24(c);
    c->v.s[16] = c->v.s[0];
    c->v.f[24] = c->v.f[18] - c->v.f[20];
    c->r[14] = 0xbd8a60u; f_15efde8(c);
    c->v.f[2] = c->v.f[24] * c->v.f[16];
    c->v.f[24] = c->v.f[18] / c->v.f[0];
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd8a70u; f_15efde8(c);
    c->v.f[2] = c->v.f[20] * c->v.f[16];
    c->v.f[16] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd8a80u; f_15efde8(c);
    c->v.s[6] = LD32(c->r[13] + 112u);
    c->v.s[4] = LD32(c->r[13] + 116u);
    c->v.s[8] = LD32(c->r[13] + 120u);
    c->v.s[2] = LD32(c->r[13] + 124u);
    c->v.s[14] = LD32(c->r[13] + 128u);
    c->v.s[12] = LD32(c->r[13] + 132u);
    c->v.s[1] = LD32(c->r[13] + 136u);
    c->v.s[10] = LD32(c->r[13] + 140u);
    c->v.f[20] = c->v.f[24] * c->v.f[0];
    goto L_bd8aac;
L_bd8aa8:;
    c->v.f[16] = c->v.f[18] - c->v.f[20];
L_bd8aac:;
    c->v.f[0] = c->v.f[22] * c->v.f[16];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0x150u;
    c->v.f[1] = c->v.f[1] * c->v.f[0];
    c->v.f[12] = c->v.f[12] * c->v.f[0];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[20]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[20]);
    c->v.f[14] = c->v.f[14] * c->v.f[0];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.f[0] = c->v.f[10] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[4] = c->v.f[1] + c->v.f[1];
    c->v.f[6] = c->v.f[12] + c->v.f[12];
    ST32(c->r[13] + 112u, c->v.s[14]);
    ST32(c->r[13] + 116u, c->v.s[12]);
    ST32(c->r[13] + 120u, c->v.s[1]);
    ST32(c->r[13] + 124u, c->v.s[0]);
    c->v.f[8] = c->v.f[1] * c->v.f[4];
    c->v.f[10] = c->v.f[12] * c->v.f[6];
    c->v.f[3] = c->v.f[14] * c->v.f[6];
    c->v.f[5] = c->v.f[14] * c->v.f[4];
    c->v.f[1] = c->v.f[0] * c->v.f[4];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[2] = c->v.f[10] + c->v.f[8];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[6];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[2] = c->v.f[18] - c->v.f[2];
    ST32(c->r[13] + 272u, c->v.s[2]);
    c->v.f[2] = c->v.f[14] + c->v.f[14];
    ST32(c->r[13] + 276u, c->v.s[7]);
    ST32(c->r[13] + 280u, c->v.s[9]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    ST32(c->r[13] + 288u, c->v.s[1]);
    c->v.f[14] = c->v.f[14] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    c->v.f[2] = c->v.f[12] * c->v.f[4];
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    c->v.f[4] = c->v.f[18] - c->v.f[8];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    ST32(c->r[13] + 292u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[6];
    c->v.f[6] = c->v.f[14] + c->v.f[10];
    ST32(c->r[13] + 296u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[18] - c->v.f[6];
    ST32(c->r[13] + 304u, c->v.s[4]);
    ST32(c->r[13] + 308u, c->v.s[0]);
    ST32(c->r[13] + 312u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x30u;
    c->r[14] = 0xbd8ba4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_bd8c30:;
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[14] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bda148; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[12];
    c->v.s[2] = c->r[7];
    c->v.s[4] = c->r[3];
    c->v.s[6] = c->r[2];
    c->v.s[8] = c->r[1];
    c->v.s[10] = c->r[9];
    c->v.s[12] = c->r[8];
    c->v.s[14] = c->r[10];
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[7] = c->r[0];
    { uint32_t ea = c->r[14] + 0x184u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x5u);
    if (COND_HI) { goto L_bd8f48; }
    c->r[1] = 0x1u;
    c->r[2] = 0x9u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bd8cc0; }
    c->r[2] = 0x12u;
    { uint32_t r = c->r[2] & shc_lsl(c, c->r[1], c->r[0]); c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_bd8cd4; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->v.s[9] = 0x3f800000u;
    c->v.s[11] = c->v.s[9];
    c->v.s[18] = LD32(c->r[0] + 424u);
    goto L_bd8f4c;
L_bd8cc0:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->v.s[9] = 0x3f800000u;
    c->v.s[18] = c->v.s[9];
    c->v.s[11] = LD32(c->r[0] + 424u);
    goto L_bd8f4c;
L_bd8cd4:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
    c->v.s[11] = c->v.s[18];
    c->v.s[9] = LD32(c->r[0] + 424u);
    goto L_bd8f4c;
L_bd8ce4:;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_bd97d8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xbd8cf8u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbd8d14u: goto L_bd8d14; case 0xbd921cu: goto L_bd921c; case 0xbd9240u: goto L_bd9240; case 0xbd9288u: goto L_bd9288; case 0xbd97d8u: goto L_bd97d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd8d14:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    goto L_bd9270;
L_bd8d38:;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_bd97d8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xbd8d4cu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbd8d64u: goto L_bd8d64; case 0xbd92d0u: goto L_bd92d0; case 0xbd92f4u: goto L_bd92f4; case 0xbd933cu: goto L_bd933c; case 0xbd97d8u: goto L_bd97d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd8d64:;
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    goto L_bd9324;
L_bd8d88:;
    c->r[1] = c->r[1] - 0x1u;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_bd97d8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xbd8da0u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbd8dbcu: goto L_bd8dbc; case 0xbd9380u: goto L_bd9380; case 0xbd93e4u: goto L_bd93e4; case 0xbd946cu: goto L_bd946c; case 0xbd97d8u: goto L_bd97d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd8dbc:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_bd9454;
L_bd8e24:;
    (void)f_subs(c, c->r[1], 0x5u);
    if (COND_HI) { goto L_bd97d8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xbd8e38u + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbd8e54u: goto L_bd8e54; case 0xbd94f4u: goto L_bd94f4; case 0xbd9558u: goto L_bd9558; case 0xbd95e0u: goto L_bd95e0; case 0xbd97d8u: goto L_bd97d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd8e54:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_bd95c8;
L_bd8eb8:;
    (void)f_subs(c, c->r[1], 0x4u);
    if (COND_HI) { goto L_bd97d8; }
    c->r[1] = (c->r[1] << 2);
    c->r[2] = 0xbd8eccu + 0x4u;
    { uint32_t ea = c->r[1] + c->r[2]; uint32_t v = LD32(ea); c->r[1] = v; }
    c->pc = c->r[1] + c->r[2]; switch (c->pc) { case 0xbd8ee4u: goto L_bd8ee4; case 0xbd9668u: goto L_bd9668; case 0xbd96ccu: goto L_bd96cc; case 0xbd9754u: goto L_bd9754; case 0xbd97d8u: goto L_bd97d8; default: break; } __attribute__((musttail)) return rt_dispatch(c);
L_bd8ee4:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_bd973c;
L_bd8f48:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[5] = ea; c->r[0] = v; }
L_bd8f4c:;
    c->v.s[13] = LD32(c->r[0] + 400u);
    c->v.f[11] = c->v.f[11] * c->v.f[13];
    c->v.f[7] = c->v.f[7] * c->v.f[11];
    c->v.f[5] = c->v.f[11] * c->v.f[5];
    c->v.f[3] = c->v.f[11] * c->v.f[3];
    c->v.f[1] = c->v.f[11] * c->v.f[1];
    ST32(c->r[4] + 16u, c->v.s[7]);
    ST32(c->r[4] + 20u, c->v.s[5]);
    ST32(c->r[4] + 24u, c->v.s[3]);
    ST32(c->r[4] + 28u, c->v.s[1]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[0] + 404u);
    c->v.f[1] = c->v.f[18] * c->v.f[1];
    c->v.f[14] = c->v.f[14] * c->v.f[1];
    c->v.f[12] = c->v.f[1] * c->v.f[12];
    c->v.f[10] = c->v.f[1] * c->v.f[10];
    c->v.f[8] = c->v.f[1] * c->v.f[8];
    ST32(c->r[4] + 32u, c->v.s[14]);
    ST32(c->r[4] + 36u, c->v.s[12]);
    ST32(c->r[4] + 40u, c->v.s[10]);
    ST32(c->r[4] + 44u, c->v.s[8]);
    { uint32_t ea = c->r[5]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0] + 408u);
    c->v.f[8] = c->v.f[9] * c->v.f[8];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[4] = c->v.f[8] * c->v.f[4];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    ST32(c->r[4] + 48u, c->v.s[6]);
    ST32(c->r[4] + 52u, c->v.s[4]);
    ST32(c->r[4] + 56u, c->v.s[2]);
    ST32(c->r[4] + 60u, c->v.s[0]);
    goto L_bda148;
L_bd8fd0:;
    c->r[1] = c->r[4] + 0x10u;
    goto L_bd8004;
L_bd8fd8:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4] + 16u);
    c->v.s[4] = LD32(c->r[4] + 20u);
    c->v.s[6] = LD32(c->r[4] + 24u);
    c->v.s[8] = LD32(c->r[4] + 28u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9010:;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9058; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9058u; f_15efddc(c);
L_bd9058:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9078; }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd90b0;
L_bd9078:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4] + 32u);
    c->v.s[4] = LD32(c->r[4] + 36u);
    c->v.s[6] = LD32(c->r[4] + 40u);
    c->v.s[8] = LD32(c->r[4] + 44u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd90b0:;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[4] + 52u);
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd90f8; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd90f8u; f_15efddc(c);
L_bd90f8:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9118; }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9150;
L_bd9118:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[4] + 48u);
    c->v.s[4] = LD32(c->r[4] + 52u);
    c->v.s[6] = LD32(c->r[4] + 56u);
    c->v.s[8] = LD32(c->r[4] + 60u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9150:;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[13] + 0x150u;
    goto L_bd8008;
L_bd916c:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    goto L_bd9208;
L_bd9190:;
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    ST32(c->r[13] + 284u, c->v.s[2]);
L_bd91c0:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x110u;
    c->r[14] = 0xbd91d4u; f_bf5f24(c);
    goto L_bd97d8;
L_bd91d8:;
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[2] = LD32(c->r[4] + 52u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    ST32(c->r[13] + 284u, c->v.s[2]);
L_bd9208:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x110u;
    goto L_bd94ec;
L_bd921c:;
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    goto L_bd92b8;
L_bd9240:;
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    ST32(c->r[13] + 284u, c->v.s[2]);
L_bd9270:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x110u;
    c->r[14] = 0xbd9284u; f_bf5c58(c);
    goto L_bd97d8;
L_bd9288:;
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[2] = LD32(c->r[4] + 52u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    ST32(c->r[13] + 284u, c->v.s[2]);
L_bd92b8:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x110u;
    c->r[14] = 0xbd92ccu; f_bf60a0(c);
    goto L_bd97d8;
L_bd92d0:;
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[1]); }
    goto L_bd936c;
L_bd92f4:;
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    ST32(c->r[13] + 284u, c->v.s[2]);
L_bd9324:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x110u;
    c->r[14] = 0xbd9338u; f_bf5adc(c);
    goto L_bd97d8;
L_bd933c:;
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 280u, c->v.s[0]);
    ST32(c->r[13] + 284u, c->v.s[2]);
L_bd936c:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[2] = c->r[13] + 0x110u;
    goto L_bd97d4;
L_bd9380:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_bd94dc;
L_bd93e4:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[0]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
L_bd9454:;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[14] = 0xbd9468u; f_bf5f24(c);
    goto L_bd97d8;
L_bd946c:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[2] = LD32(c->r[4] + 52u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[0]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
L_bd94dc:;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0xd0u;
L_bd94ec:;
    c->r[14] = 0xbd94f0u; f_bf5da8(c);
    goto L_bd97d8;
L_bd94f4:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_bd9650;
L_bd9558:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[0]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
L_bd95c8:;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[14] = 0xbd95dcu; f_bf5c58(c);
    goto L_bd97d8;
L_bd95e0:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 48u);
    c->v.s[2] = LD32(c->r[4] + 52u);
    c->v.s[4] = LD32(c->r[4] + 56u);
    c->v.s[6] = LD32(c->r[4] + 60u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[0]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
L_bd9650:;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[14] = 0xbd9664u; f_bf60a0(c);
    goto L_bd97d8;
L_bd9668:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    goto L_bd97c4;
L_bd96cc:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 16u);
    c->v.s[2] = LD32(c->r[4] + 20u);
    c->v.s[4] = LD32(c->r[4] + 24u);
    c->v.s[6] = LD32(c->r[4] + 28u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[0]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
L_bd973c:;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[14] = 0xbd9750u; f_bf5adc(c);
    goto L_bd97d8;
L_bd9754:;
    c->r[1] = c->r[0] + 0xb60u;
    c->r[2] = 0xb68u;
    c->v.s[0] = LD32(c->r[1]);
    c->r[1] = c->r[0] + c->r[2];
    c->r[2] = 0xb64u;
    c->r[0] = c->r[0] + c->r[2];
    c->v.s[4] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 276u, c->v.s[2]);
    ST32(c->r[13] + 280u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[4] + 32u);
    c->v.s[2] = LD32(c->r[4] + 36u);
    c->v.s[4] = LD32(c->r[4] + 40u);
    c->v.s[6] = LD32(c->r[4] + 44u);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[13] + 208u, c->v.s[0]);
    ST32(c->r[13] + 212u, c->v.s[2]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[2] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[13] + 216u, c->v.s[0]);
    ST32(c->r[13] + 220u, c->v.s[2]);
L_bd97c4:;
    c->r[3] = c->r[4] + 0x40u;
    c->r[0] = c->r[13] + 0x150u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0xd0u;
L_bd97d4:;
    c->r[14] = 0xbd97d8u; f_bf61f0(c);
L_bd97d8:;
    c->r[0] = c->r[13] + 0x70u;
    c->r[1] = c->r[13] + 0x150u;
    c->r[14] = 0xbd97e4u; f_272ea8(c);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0xb44u;
    c->v.s[4] = 0x3dcccccdu;
    c->r[1] = c->r[0] + c->r[1];
    c->v.s[0] = LD32(c->r[0] + 832u);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[8] = c->v.f[2] * c->v.f[0];
    vfp_cmp_f(c, c->v.f[8], c->v.f[4]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bd9894; }
    c->r[0] = c->r[0] + 0xb70u;
    c->v.s[1] = LD32(c->r[13] + 112u);
    c->v.s[3] = LD32(c->r[13] + 128u);
    c->v.s[14] = LD32(c->r[13] + 132u);
    c->v.s[6] = LD32(c->r[13] + 120u);
    c->v.s[12] = LD32(c->r[13] + 136u);
    c->v.s[2] = LD32(c->r[13] + 124u);
    c->v.s[4] = LD32(c->r[13] + 140u);
    c->v.s[18] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[8]);
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[8] : c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 116u);
    c->v.f[10] = c->v.f[8] - c->v.f[10];
    c->v.f[5] = c->v.f[14] * c->v.f[0];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[8] = c->v.f[10] / c->v.f[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[10] = c->v.f[18] - c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[1];
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    c->v.f[3] = c->v.f[10] * c->v.f[3];
    if (COND_PL) { goto L_bd98d4; }
    c->v.f[20] = c->v.f[10] * c->v.f[14];
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[22] = c->v.f[3] - c->v.f[1];
    c->v.f[24] = c->v.f[10] * c->v.f[12];
    c->v.f[26] = c->v.f[10] * c->v.f[4];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[8] * c->v.f[2]);
    goto L_bd98f0;
L_bd9894:;
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x1u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_bd9950; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[4] = c->r[0];
    c->v.s[0] = c->r[1];
    c->v.s[6] = c->r[2];
    c->v.s[2] = c->r[3];
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[3]); }
    goto L_bd9960;
L_bd98d4:;
    c->v.f[20] = c->v.f[8] * c->v.f[0];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[22] = c->v.f[3] + c->v.f[1];
    c->v.f[24] = c->v.f[8] * c->v.f[6];
    c->v.f[26] = c->v.f[8] * c->v.f[2];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[10] * c->v.f[4]);
L_bd98f0:;
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9918; }
    c->r[14] = 0xbd9914u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd9918:;
    c->v.f[4] = c->v.f[18] / c->v.f[2];
    c->v.f[2] = c->v.f[26] * c->v.f[4];
    c->v.f[6] = c->v.f[24] * c->v.f[4];
    c->v.f[0] = c->v.f[20] * c->v.f[4];
    c->v.f[4] = c->v.f[22] * c->v.f[4];
    ST32(c->r[13] + 112u, c->v.s[4]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    ST32(c->r[13] + 120u, c->v.s[6]);
    ST32(c->r[13] + 124u, c->v.s[2]);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xc4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[1] = c->r[1] | 0x8u;
    { uint32_t ea = c->r[0] + 0xc4u; ST32(ea, c->r[1]); }
    goto L_bd9960;
L_bd9950:;
    c->v.s[4] = LD32(c->r[13] + 112u);
    c->v.s[0] = LD32(c->r[13] + 116u);
    c->v.s[6] = LD32(c->r[13] + 120u);
    c->v.s[2] = LD32(c->r[13] + 124u);
L_bd9960:;
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->v.s[14] = 0x3f800000u;
    c->r[0] = 0x0u;
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[8];
    c->v.f[5] = c->v.f[4] * c->v.f[10];
    c->v.f[7] = c->v.f[4] * c->v.f[8];
    c->v.f[3] = c->v.f[8] * c->v.f[2];
    c->v.f[10] = c->v.f[10] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[12] + c->v.f[6];
    c->v.f[9] = c->v.f[5] + c->v.f[3];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[3] = c->v.f[5] - c->v.f[3];
    c->v.f[1] = c->v.f[14] - c->v.f[1];
    ST32(c->r[4] + 16u, c->v.s[1]);
    c->v.f[1] = c->v.f[4] + c->v.f[4];
    ST32(c->r[4] + 20u, c->v.s[9]);
    ST32(c->r[4] + 24u, c->v.s[11]);
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 32u, c->v.s[3]);
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[2] = c->v.f[1] * c->v.f[2];
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    c->v.f[4] = c->v.f[4] + c->v.f[12];
    c->v.f[8] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[6] = c->v.f[14] - c->v.f[6];
    c->v.f[2] = c->v.f[14] - c->v.f[4];
    ST32(c->r[4] + 36u, c->v.s[6]);
    c->v.f[6] = c->v.f[7] + c->v.f[10];
    ST32(c->r[4] + 40u, c->v.s[8]);
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    ST32(c->r[4] + 48u, c->v.s[6]);
    ST32(c->r[4] + 52u, c->v.s[0]);
    ST32(c->r[4] + 56u, c->v.s[2]);
L_bd99f8:;
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + 0xd5au; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bda148; }
    c->r[0] = c->r[4];
    c->r[14] = 0xbd9a10u; f_b4cf88(c);
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_bd9a20; }
    c->r[6] = c->r[0] + 0x10u;
    goto L_bd9a38;
L_bd9a20:;
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = ~0x0u;
    { uint32_t ea = c->r[0] + 0x54u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[0] = c->r[6];
    c->pc = c->r[2]; c->r[14] = 0xbd9a34u; rt_dispatch(c);
    c->r[6] = c->r[0];
L_bd9a38:;
    c->v.s[2] = LD32(c->r[6] + 4u);
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 8u);
    c->v.s[6] = LD32(c->r[6] + 12u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9a70; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9a70u; f_15efddc(c);
L_bd9a70:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9a90; }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0xcu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9ac8;
L_bd9a90:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6]);
    c->v.s[4] = LD32(c->r[6] + 4u);
    c->v.s[6] = LD32(c->r[6] + 8u);
    c->v.s[8] = LD32(c->r[6] + 12u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9ac8:;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x15cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[6] + 20u);
    c->v.s[0] = LD32(c->r[6] + 16u);
    c->v.s[4] = LD32(c->r[6] + 24u);
    c->v.s[6] = LD32(c->r[6] + 28u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9b10; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9b10u; f_15efddc(c);
L_bd9b10:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9b30; }
    { uint32_t ea = c->r[6] + 0x10u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9b68;
L_bd9b30:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6] + 16u);
    c->v.s[4] = LD32(c->r[6] + 20u);
    c->v.s[6] = LD32(c->r[6] + 24u);
    c->v.s[8] = LD32(c->r[6] + 28u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9b68:;
    { uint32_t ea = c->r[13] + 0x160u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x164u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x168u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x16cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[6] + 36u);
    c->v.s[0] = LD32(c->r[6] + 32u);
    c->v.s[4] = LD32(c->r[6] + 40u);
    c->v.s[6] = LD32(c->r[6] + 44u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9bb0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9bb0u; f_15efddc(c);
L_bd9bb0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9bd4; }
    { uint32_t ea = c->r[6] + 0x20u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[6] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[6] + 0x2cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9c0c;
L_bd9bd4:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[6] + 32u);
    c->v.s[4] = LD32(c->r[6] + 36u);
    c->v.s[6] = LD32(c->r[6] + 40u);
    c->v.s[8] = LD32(c->r[6] + 44u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9c0c:;
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[6] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x180u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x184u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x188u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6] + 0x3cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[0]); }
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[4] + 0x14u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    c->v.s[0] = c->r[1];
    { uint32_t ea = c->r[4] + 0x18u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[2]); }
    c->v.s[0] = c->r[2];
    { uint32_t ea = c->r[4] + 0x1cu; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[3]); }
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[4] + 0x20u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x24u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x28u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[0] = sqrtf(c->v.f[2]);
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x2cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x30u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x34u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x38u; uint32_t v = LD32(ea); c->r[7] = v; }
    vfp_mrs_flags(c);
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x3cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x40u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    if (COND_VC) { goto L_bd9cf4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9cf4u; f_15efddc(c);
L_bd9cf4:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9d14; }
    { uint32_t ea = c->r[13] + 0x110u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x114u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x118u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x11cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9d4c;
L_bd9d14:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 272u);
    c->v.s[4] = LD32(c->r[13] + 276u);
    c->v.s[6] = LD32(c->r[13] + 280u);
    c->v.s[8] = LD32(c->r[13] + 284u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9d4c:;
    { uint32_t ea = c->r[13] + 0x110u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x114u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x118u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x11cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[13] + 292u);
    c->v.s[0] = LD32(c->r[13] + 288u);
    c->v.s[4] = LD32(c->r[13] + 296u);
    c->v.s[6] = LD32(c->r[13] + 300u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9d94; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9d94u; f_15efddc(c);
L_bd9d94:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9db4; }
    { uint32_t ea = c->r[13] + 0x120u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x124u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x128u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x12cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9dec;
L_bd9db4:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 288u);
    c->v.s[4] = LD32(c->r[13] + 292u);
    c->v.s[6] = LD32(c->r[13] + 296u);
    c->v.s[8] = LD32(c->r[13] + 300u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9dec:;
    { uint32_t ea = c->r[13] + 0x120u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x124u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x128u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x12cu; ST32(ea, c->r[3]); }
    c->v.s[2] = LD32(c->r[13] + 308u);
    c->v.s[0] = LD32(c->r[13] + 304u);
    c->v.s[4] = LD32(c->r[13] + 312u);
    c->v.s[6] = LD32(c->r[13] + 316u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9e34; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xbd9e34u; f_15efddc(c);
L_bd9e34:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_bd9e54; }
    { uint32_t ea = c->r[13] + 0x130u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x134u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x138u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x13cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_bd9e8c;
L_bd9e54:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 304u);
    c->v.s[4] = LD32(c->r[13] + 308u);
    c->v.s[6] = LD32(c->r[13] + 312u);
    c->v.s[8] = LD32(c->r[13] + 316u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_bd9e8c:;
    { uint32_t ea = c->r[13] + 0x130u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x134u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[13] + 384u);
    c->v.s[4] = LD32(c->r[13] + 388u);
    { uint32_t ea = c->r[13] + 0x138u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x160u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x164u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[12] = v; }
    c->v.s[6] = LD32(c->r[13] + 392u);
    { uint32_t ea = c->r[13] + 0x168u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = c->r[1];
    c->v.s[10] = c->r[14];
    c->v.s[8] = c->r[7];
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[12] = c->r[0];
    c->v.s[14] = c->r[3];
    c->v.s[1] = c->r[12];
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0xf4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.s[10] = c->r[2];
    c->v.f[8] = c->v.f[8] * c->v.f[4];
    c->v.f[4] = c->v.f[12] * c->v.f[4];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[2]);
    c->v.s[12] = c->r[6];
    c->r[6] = 0x3f800000u;
    c->v.s[14] = c->r[1];
    { uint32_t ea = c->r[13] + 0xf8u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xd0u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.s[0] = c->v.s[0] ^ 0x80000000u;
    c->v.s[2] = c->v.s[8] ^ 0x80000000u;
    ST32(c->r[13] + 256u, c->v.s[0]);
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    ST32(c->r[13] + 260u, c->v.s[2]);
    ST32(c->r[13] + 264u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0x10cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xbd9f74u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x140u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x144u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = c->r[1];
    c->v.s[18] = c->r[2];
    c->v.s[22] = c->r[0];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[22]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_bda008; }
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[3] + 0x240u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[3], 0x1u);
    if (COND_LT) { goto L_bda008; }
    c->v.f[2] = sqrtf(c->v.f[0]);
    { uint32_t ea = c->r[5] + 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x260u;
    { uint32_t r = c->r[3] * c->r[1] + c->r[0]; c->r[0] = r; }
    c->v.s[16] = LD32(c->r[0] + 388u);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_bd9fdc; }
    c->r[14] = 0xbd9fd8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_bd9fdc:;
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    c->v.f[4] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[2];
    c->v.f[4] = c->v.f[16] * c->v.f[4];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[0] = c->v.s[2];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[0];
L_bda008:;
    { uint32_t ea = c->r[5] + 0x68u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = LD32(c->r[13] + 272u);
    c->v.s[2] = LD32(c->r[3] + 400u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 272u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 276u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 276u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 280u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 280u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 284u);
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[13] + 284u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 404u);
    c->v.s[2] = LD32(c->r[13] + 288u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 288u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 292u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 292u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 296u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 296u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 300u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 300u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[3] + 408u);
    c->v.s[2] = LD32(c->r[13] + 304u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 304u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 308u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 308u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 312u);
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 312u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 316u);
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    ST32(c->r[13] + 316u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x140u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x144u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0xd0u;
    c->r[1] = c->r[13] + 0x110u;
    c->r[2] = c->r[13] + 0x150u;
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xbda0c8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x10u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x14u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x18u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x1cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x20u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x24u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x28u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x2cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x38u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xfcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x3cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x100u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x40u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x104u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x44u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x108u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x48u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x10cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[4] + 0x4cu; ST32(ea, c->r[0]); }
L_bda148:;
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
