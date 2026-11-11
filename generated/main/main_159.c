#include "cpu.h"
#include "neon_rt.h"
void f_21ebe8(Cpu *c);
void f_229d48(Cpu *c);
void f_272ea8(Cpu *c);
void f_b0abd8(Cpu *c);
void f_15efddc(Cpu *c);
void f_afcac8(Cpu *restrict c) {
    FN_ENTER(0xafcac8u);
L_afcac8:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 64u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); ST64(ea + 40u, c->v.d[13]); ST64(ea + 48u, c->v.d[14]); ST64(ea + 56u, c->v.d[15]); c->r[13] = c->r[13] - 64u; }
    c->r[13] = c->r[13] - 0xa8u;
    c->r[13] = c->r[13] - 0x800u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    c->v.s[16] = 0x0u;
    c->r[6] = c->r[0];
    c->r[0] = 0x8820u;
    c->r[2] = 0x0u;
    c->v.s[17] = 0x3f800000u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[6];
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[2]); c->r[1] = ea; }
    c->r[0] = 0x77d4u;
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[6]); }
    c->r[0] = c->r[1] - c->r[0];
    { uint32_t ea = c->r[13] + 0x284u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x568u; ST32(ea, c->r[0]); }
L_afcb18:;
    c->r[4] = c->r[6] + c->r[5];
    c->r[8] = c->r[0] + c->r[5];
    c->r[1] = 0x1000u;
    { uint32_t ea = c->r[4] + 0xfe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x584u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x860u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x68u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x588u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x864u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x64u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x868u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x60u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x56cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x86cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[4] + 0xff0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x578u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x870u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x57cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x874u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x580u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x878u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x50u; uint32_t v = LD32(ea); c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x87cu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[4] + c->r[1]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x880u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] - 0x48u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x570u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x884u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x574u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x888u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[8] - 0x40u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x88cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[8] - 0x3cu; uint32_t v = LD32(ea); c->r[14] = v; }
    { uint32_t ea = c->r[13] + 0x890u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[8] - 0x38u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x894u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[8] - 0x34u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x898u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[8] - 0x30u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x89cu; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[8] + 0x78u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[7] = c->r[7] - 0xdu;
    (void)f_subs(c, c->r[7], 0x1du);
    if (COND_HI) { goto L_afccf8; }
    c->r[0] = c->r[4];
    c->r[4] = c->r[5];
    c->r[5] = 0x401u;
    c->r[6] = 0x1u;
    c->r[5] = (c->r[5] & 0xFFFFu) | 0x20080000u;
    { uint32_t r = c->r[5] & shc_lsl(c, c->r[6], c->r[7]); c->nf = r >> 31; c->zf = r == 0; }
    c->r[5] = c->r[4];
    c->r[4] = c->r[0];
    if (COND_EQ) { goto L_afccf8; }
    { uint32_t ea = c->r[13] + 0x56cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[11] = LD32(c->r[8] + 88u);
    c->v.s[5] = LD32(c->r[8] + 84u);
    c->v.s[2] = c->r[12];
    c->v.s[14] = LD32(c->r[8] + 92u);
    c->v.s[6] = c->r[2];
    c->v.s[20] = c->r[3];
    c->v.s[4] = c->r[1];
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[15] = c->v.s[11] ^ 0x80000000u;
    c->v.f[18] = -(float)(c->v.f[5] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[2] * c->v.f[11]);
    c->v.s[11] = c->v.s[5] ^ 0x80000000u;
    c->v.s[0] = c->r[14];
    c->v.s[2] = c->r[9];
    c->v.s[5] = c->v.s[16];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[6] * c->v.f[14]);
    c->v.s[6] = c->r[10];
    c->v.s[14] = c->v.s[14] ^ 0x80000000u;
    c->v.s[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x57cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = c->v.f[20] + c->v.f[18];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x580u; uint32_t v = LD32(ea); c->r[0] = v; }
    vfp_mrs_flags(c);
    c->v.s[13] = c->r[0];
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    if (COND_EQ) { goto L_afcc9c; }
    c->v.f[5] = c->v.f[17] / c->v.f[18];
L_afcc9c:;
    c->v.f[7] = c->v.f[7] * c->v.f[15];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[12] * c->v.f[11]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[9] = c->v.f[9] * c->v.f[15];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[3] * c->v.f[11]);
    c->r[0] = 0x3f800000u;
    c->v.f[12] = c->v.f[13] * c->v.f[15];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[11]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + c->v.f[7];
    c->v.f[2] = c->v.f[2] + c->v.f[9];
    c->v.f[4] = c->v.f[6] + c->v.f[12];
    c->v.f[0] = c->v.f[5] * c->v.f[0];
    c->v.f[2] = c->v.f[5] * c->v.f[2];
    ST32(c->r[14] + 144u, c->v.s[0]);
    c->v.f[0] = c->v.f[5] * c->v.f[4];
    c->r[14] = c->r[13] + 0x800u;
    ST32(c->r[14] + 148u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x800u;
    ST32(c->r[14] + 152u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x89cu; ST32(ea, c->r[0]); }
L_afccf8:;
    c->r[0] = c->r[13] + 0x850u;
    c->r[1] = c->r[13] + 0x860u;
    c->r[14] = 0xafcd04u; f_272ea8(c);
    c->r[1] = c->r[8] - 0x2cu;
    c->r[0] = c->r[13] + 0x840u;
    c->r[14] = 0xafcd10u; f_272ea8(c);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[8] - 120u);
    c->v.s[20] = LD32(c->r[8] + 4u);
    c->v.s[22] = LD32(c->r[8] + 8u);
    c->v.s[18] = LD32(c->r[8] + 12u);
    c->v.s[1] = LD32(c->r[14] + 80u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[0] = LD32(c->r[14] + 84u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 88u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[14] + 92u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[3] = LD32(c->r[14] + 64u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[10] = c->v.f[17] - c->v.f[6];
    c->v.s[14] = LD32(c->r[14] + 68u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[14] + 72u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[14] + 76u);
    c->v.f[5] = c->v.f[14] * c->v.f[0];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[3] = c->v.f[10] * c->v.f[3];
    vfp_cmp_f(c, c->v.f[5], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_afcdac; }
    c->v.f[24] = c->v.f[10] * c->v.f[14];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[26] = c->v.f[3] - c->v.f[1];
    c->v.f[28] = c->v.f[10] * c->v.f[12];
    c->v.f[30] = c->v.f[10] * c->v.f[4];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[6] * c->v.f[2]);
    goto L_afcdc8;
L_afcdac:;
    c->v.f[24] = c->v.f[6] * c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.f[26] = c->v.f[3] + c->v.f[1];
    c->v.f[28] = c->v.f[6] * c->v.f[8];
    c->v.f[30] = c->v.f[6] * c->v.f[2];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[10] * c->v.f[4]);
L_afcdc8:;
    c->v.f[0] = c->v.f[24] * c->v.f[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afcdf4; }
    c->r[14] = 0xafcdf0u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_afcdf4:;
    c->v.f[4] = c->v.f[17] / c->v.f[2];
    c->r[14] = c->r[13] + 0x800u;
    c->r[1] = 0x0u;
    c->r[0] = c->r[4] + 0x1040u;
    c->v.f[6] = c->v.f[28] * c->v.f[4];
    c->v.f[2] = c->v.f[24] * c->v.f[4];
    c->v.f[0] = c->v.f[30] * c->v.f[4];
    c->v.f[4] = c->v.f[26] * c->v.f[4];
    c->v.f[8] = c->v.f[6] + c->v.f[6];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    ST32(c->r[14] + 64u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x800u;
    ST32(c->r[14] + 68u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x800u;
    ST32(c->r[14] + 72u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x800u;
    ST32(c->r[14] + 76u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[14] = c->v.f[2] * c->v.f[10];
    c->v.f[12] = c->v.f[6] * c->v.f[8];
    c->v.f[3] = c->v.f[4] * c->v.f[10];
    c->v.f[5] = c->v.f[4] * c->v.f[8];
    c->v.f[1] = c->v.f[8] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[8];
    c->v.f[6] = c->v.f[14] + c->v.f[12];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[6] = c->v.f[17] - c->v.f[6];
    ST32(c->r[8] - 44u, c->v.s[6]);
    c->v.f[6] = c->v.f[4] + c->v.f[4];
    ST32(c->r[8] - 40u, c->v.s[7]);
    ST32(c->r[8] - 36u, c->v.s[9]);
    { uint32_t ea = c->r[8] - 0x20u; ST32(ea, c->r[1]); }
    ST32(c->r[8] - 28u, c->v.s[1]);
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[12] = c->v.f[4] + c->v.f[12];
    c->v.f[4] = c->v.f[4] + c->v.f[14];
    c->v.f[8] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[6] = c->v.f[17] - c->v.f[12];
    c->v.f[2] = c->v.f[17] - c->v.f[4];
    ST32(c->r[8] - 24u, c->v.s[6]);
    c->v.f[6] = c->v.f[5] + c->v.f[10];
    ST32(c->r[8] - 20u, c->v.s[8]);
    { uint32_t ea = c->r[8] - 0x10u; ST32(ea, c->r[1]); }
    ST32(c->r[0], c->v.s[6]);
    ST32(c->r[8] - 8u, c->v.s[0]);
    ST32(c->r[8] - 4u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x568u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0] + c->r[5]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[8] + 0xcu; ST32(ea, c->r[1]); }
    c->r[1] = 0x3f800000u;
    c->r[5] = c->r[5] + 0x100u;
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    (void)f_subs(c, c->r[5], 0x1b00u);
    c->v.s[0] = LD32(c->r[8] - 120u);
    c->v.s[4] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 152u);
    { uint32_t ea = c->r[8] + 0x10u; ST32(ea, c->r[1]); }
    c->v.f[2] = c->v.f[17] - c->v.f[0];
    c->v.f[10] = c->v.f[20] * c->v.f[2];
    c->v.f[12] = c->v.f[22] * c->v.f[2];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[8] + 4u, c->v.s[10]);
    ST32(c->r[8] + 8u, c->v.s[12]);
    ST32(c->r[8] + 12u, c->v.s[2]);
    if (COND_NE) { goto L_afcb18; }
    c->r[0] = 0x1c58u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[1] = 0x1398u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[6] + c->r[1];
    c->r[1] = 0x1298u;
    c->r[5] = c->r[6] + c->r[1];
    c->r[1] = 0x1390u;
    c->r[3] = c->r[6] + c->r[1];
    c->r[1] = 0x1290u;
    c->r[4] = c->r[6] + c->r[1];
    c->r[1] = 0x1394u;
    { uint32_t ea = c->r[13] + 0x4acu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1c54u;
    c->r[7] = c->r[6] + c->r[1];
    c->r[1] = 0x1294u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[6] + c->r[1];
    { uint32_t ea = c->r[13] + 0x4a4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1c50u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x4a8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1958u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x520u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1954u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x51cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1950u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x518u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1658u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x514u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1654u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x510u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1650u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x50cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1358u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x508u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1354u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x504u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1350u;
    { uint32_t ea = c->r[6] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x500u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2750u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2650u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 372u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2550u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 248u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2450u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 384u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2350u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 380u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2250u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 376u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2150u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 368u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x2050u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 364u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x1f50u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 356u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x1098u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 360u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[0]);
    c->r[0] = 0x1094u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[20] = LD32(c->r[0]);
    c->r[0] = 0x1090u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[22] = LD32(c->r[0]);
    c->r[0] = 0x1050u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = 0x1a58u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 240u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4b0u; ST32(ea, c->r[1]); }
    c->r[0] = 0x1a54u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 296u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0x498u; ST32(ea, c->r[7]); }
    c->v.s[6] = LD32(c->r[7]);
    { uint32_t ea = c->r[13] + 0x4b4u; ST32(ea, c->r[4]); }
    c->v.s[2] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x49cu; ST32(ea, c->r[3]); }
    c->v.s[21] = LD32(c->r[3]);
    { uint32_t ea = c->r[13] + 0x4fcu; ST32(ea, c->r[5]); }
    c->v.s[4] = LD32(c->r[5]);
    { uint32_t ea = c->r[13] + 0x4a0u; ST32(ea, c->r[2]); }
    c->v.s[26] = LD32(c->r[2]);
    ST32(c->r[14] + 224u, c->v.s[6]);
    c->v.f[0] = c->v.f[6] - c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[0]);
    c->r[0] = 0x1a50u;
    c->v.f[2] = c->v.f[21] - c->v.f[2];
    c->r[0] = c->r[6] + c->r[0];
    c->v.f[4] = c->v.f[26] - c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    ST32(c->r[14] + 208u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1758u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    ST32(c->r[14] + 232u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1754u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 292u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1750u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.f[16] = sqrtf(c->v.f[0]);
    ST32(c->r[14] + 204u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1458u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 228u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1454u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 244u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1450u;
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    c->r[0] = c->r[6] + c->r[0];
    vfp_mrs_flags(c);
    ST32(c->r[14] + 200u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1158u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 220u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[0]);
    c->r[0] = 0x1154u;
    c->r[0] = c->r[6] + c->r[0];
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1150u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 196u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = 0x1690u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x1694u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x584u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1698u;
    c->r[0] = c->r[6] + c->r[0];
    ST32(c->r[14] + 216u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x588u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1054u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1058u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f54u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x98u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1f58u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x9cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2054u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xa0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2058u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2154u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xacu; ST32(ea, c->r[0]); }
    c->r[0] = 0x2158u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0xb0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x2254u;
    c->r[14] = c->r[6] + c->r[0];
    c->r[0] = 0x2258u;
    c->r[12] = c->r[6] + c->r[0];
    c->r[0] = 0x2354u;
    c->r[10] = c->r[6] + c->r[0];
    c->r[0] = 0x2358u;
    c->r[9] = c->r[6] + c->r[0];
    c->r[0] = 0x2454u;
    c->r[8] = c->r[6] + c->r[0];
    c->r[0] = 0x2458u;
    c->r[2] = c->r[6] + c->r[0];
    c->r[0] = 0x2554u;
    c->r[1] = c->r[6] + c->r[0];
    c->r[0] = 0x2558u;
    c->r[7] = c->r[6] + c->r[0];
    c->r[0] = 0x2654u;
    c->r[4] = c->r[6] + c->r[0];
    c->r[0] = 0x2658u;
    c->r[5] = c->r[6] + c->r[0];
    c->r[0] = 0x2754u;
    c->r[3] = c->r[6] + c->r[0];
    c->r[0] = 0x2758u;
    c->r[0] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x80u; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x84u; ST32(ea, c->r[3]); }
    ST32(c->r[0] + 336u, c->v.s[2]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[3]);
    { uint32_t ea = c->r[13] + 0x78u; ST32(ea, c->r[5]); }
    ST32(c->r[0] + 308u, c->v.s[2]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[31] = LD32(c->r[5]);
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->v.s[2] = LD32(c->r[4]);
    { uint32_t ea = c->r[13] + 0x74u; ST32(ea, c->r[7]); }
    ST32(c->r[0] + 188u, c->v.s[2]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[7]);
    { uint32_t ea = c->r[13] + 0x70u; ST32(ea, c->r[1]); }
    ST32(c->r[0] + 352u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[1]);
    c->r[1] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[2]); }
    ST32(c->r[1] + 320u, c->v.s[2]);
    c->r[1] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[2]);
    { uint32_t ea = c->r[13] + 0x68u; ST32(ea, c->r[8]); }
    ST32(c->r[1] + 348u, c->v.s[2]);
    c->r[1] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[8]);
    { uint32_t ea = c->r[13] + 0x64u; ST32(ea, c->r[9]); }
    ST32(c->r[1] + 316u, c->v.s[2]);
    c->r[1] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[9]);
    { uint32_t ea = c->r[13] + 0x60u; ST32(ea, c->r[10]); }
    ST32(c->r[1] + 344u, c->v.s[2]);
    c->r[1] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[10]);
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[12]); }
    ST32(c->r[1] + 312u, c->v.s[2]);
    c->r[1] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[12]);
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[14]); }
    ST32(c->r[1] + 340u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[14]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 304u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 332u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 300u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 324u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 328u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[29] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 236u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 184u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 192u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0]);
    ST32(c->r[14] + 212u, c->v.s[2]);
    if (COND_VC) { goto L_afd45c; }
    c->r[14] = 0xafd458u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_afd45c:;
    c->r[0] = 0x1194u;
    c->r[8] = c->r[6] + c->r[0];
    c->r[0] = 0x1198u;
    c->r[9] = c->r[6] + c->r[0];
    c->r[0] = 0x1190u;
    c->v.s[0] = LD32(c->r[8]);
    c->r[10] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[10]);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[8] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[10];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd4c8; }
    c->r[14] = 0xafd4c4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_afd4c8:;
    c->r[0] = 0x13b8u;
    c->v.f[16] = c->v.f[16] + c->v.f[2];
    c->r[4] = c->r[6] + c->r[0];
    c->v.s[0] = LD32(c->r[4]);
    ST32(c->r[13] + 28u, c->v.s[18]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afd5c8; }
    { uint32_t ea = c->r[13] + 0x498u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[8] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x49cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[10] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[10] - c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[24] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[24], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd53c; }
    c->r[14] = 0xafd538u; f_15efddc(c);
    c->v.s[24] = c->v.s[0];
L_afd53c:;
    { uint32_t ea = c->r[13] + 0x504u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[9]);
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x500u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x508u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.s[4] = c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd590; }
    c->r[14] = 0xafd58cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_afd590:;
    c->v.s[0] = LD32(c->r[4]);
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[24];
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.s[0] = c->v.s[24];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_afd5cc; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[24] = c->v.s[16];
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[24] = c->v.s[0]; }
    goto L_afd5cc;
L_afd5c8:;
    c->v.s[24] = c->v.s[16];
L_afd5cc:;
    c->r[0] = 0x1594u;
    c->r[7] = c->r[6] + c->r[0];
    c->r[0] = 0x1598u;
    c->r[4] = c->r[6] + c->r[0];
    c->r[0] = 0x1590u;
    c->v.s[0] = LD32(c->r[7]);
    c->r[5] = c->r[6] + c->r[0];
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[5]);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[8] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[10];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd638; }
    c->r[14] = 0xafd634u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_afd638:;
    c->r[0] = 0x1494u;
    c->v.s[2] = LD32(c->r[7]);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[8] = LD32(c->r[4]);
    c->r[8] = c->r[6] + c->r[0];
    c->r[0] = 0x1498u;
    c->r[9] = c->r[6] + c->r[0];
    c->r[0] = 0x1490u;
    c->v.s[0] = LD32(c->r[8]);
    c->r[10] = c->r[6] + c->r[0];
    c->v.s[10] = LD32(c->r[9]);
    c->v.s[6] = LD32(c->r[10]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[4] - c->v.f[6];
    c->v.f[4] = c->v.f[8] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd698; }
    c->r[14] = 0xafd694u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_afd698:;
    c->r[0] = 0x16b8u;
    c->v.f[16] = c->v.f[18] + c->v.f[2];
    c->r[7] = c->r[6] + c->r[0];
    c->v.s[0] = LD32(c->r[7]);
    ST32(c->r[13] + 24u, c->v.s[20]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afd79c; }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[4] = LD32(c->r[10]);
    c->v.s[8] = LD32(c->r[9]);
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.s[10] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[10] - c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[18] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[18], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd70c; }
    c->r[14] = 0xafd708u; f_15efddc(c);
    c->v.s[18] = c->v.s[0];
L_afd70c:;
    { uint32_t ea = c->r[13] + 0x510u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[8]);
    c->v.s[2] = LD32(c->r[10]);
    c->v.s[6] = LD32(c->r[9]);
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x50cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x514u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.s[4] = c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd760; }
    c->r[14] = 0xafd75cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_afd760:;
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.s[0] = c->v.s[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[18]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_afd7a4; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[18] = c->v.s[16];
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[18] = c->v.s[0]; }
    goto L_afd7a4;
L_afd79c:;
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.s[18] = c->v.s[16];
L_afd7a4:;
    c->r[0] = 0x1998u;
    c->r[1] = c->r[10] + c->r[0];
    c->r[0] = 0x1898u;
    c->r[6] = c->r[10] + c->r[0];
    c->r[0] = 0x1990u;
    c->v.s[10] = LD32(c->r[1]);
    c->r[2] = c->r[10] + c->r[0];
    c->r[0] = 0x1890u;
    c->v.s[8] = LD32(c->r[6]);
    c->r[8] = c->r[10] + c->r[0];
    c->r[0] = 0x1994u;
    c->v.s[6] = LD32(c->r[2]);
    c->r[3] = c->r[10] + c->r[0];
    c->r[0] = 0x1894u;
    c->v.s[4] = LD32(c->r[8]);
    c->r[9] = c->r[10] + c->r[0];
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[9]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[4] = c->v.f[10] - c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[20] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd834; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[2];
    c->r[7] = c->r[3];
    c->r[14] = 0xafd824u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
    c->r[3] = c->r[7];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
L_afd834:;
    c->r[0] = 0x1794u;
    c->v.s[2] = LD32(c->r[9]);
    c->v.s[4] = LD32(c->r[8]);
    c->v.s[8] = LD32(c->r[6]);
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0x1798u;
    c->r[4] = c->r[10] + c->r[0];
    c->r[0] = 0x1790u;
    c->v.s[0] = LD32(c->r[7]);
    c->r[5] = c->r[10] + c->r[0];
    c->v.s[10] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[4] - c->v.f[6];
    c->v.f[4] = c->v.f[8] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd8ac; }
    c->r[8] = c->r[1];
    c->r[6] = c->r[2];
    c->r[9] = c->r[3];
    c->r[14] = 0xafd89cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[9];
    c->r[2] = c->r[6];
    c->r[1] = c->r[8];
L_afd8ac:;
    c->r[0] = 0x19b8u;
    c->v.f[16] = c->v.f[20] + c->v.f[2];
    c->r[6] = c->r[10] + c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    ST32(c->r[13] + 20u, c->v.s[22]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afd9a4; }
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[4]);
    c->v.s[10] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[4] = c->v.f[10] - c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[20] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[20], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd914; }
    c->r[14] = 0xafd910u; f_15efddc(c);
    c->v.s[20] = c->v.s[0];
L_afd914:;
    { uint32_t ea = c->r[13] + 0x51cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[4]);
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x518u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[4] - c->v.f[0];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x520u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    c->v.s[4] = c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[4] - c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afd968; }
    c->r[14] = 0xafd964u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_afd968:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[20];
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.s[0] = c->v.s[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_MI) { goto L_afd9ac; }
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    c->v.s[20] = c->v.s[16];
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[20] = c->v.s[0]; }
    goto L_afd9ac;
L_afd9a4:;
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->v.s[20] = c->v.s[16];
L_afd9ac:;
    c->r[0] = 0x1c98u;
    c->r[1] = c->r[10] + c->r[0];
    c->r[0] = 0x1b98u;
    c->r[6] = c->r[10] + c->r[0];
    c->r[0] = 0x1c90u;
    c->v.s[10] = LD32(c->r[1]);
    c->r[2] = c->r[10] + c->r[0];
    c->r[0] = 0x1b90u;
    c->v.s[8] = LD32(c->r[6]);
    c->r[8] = c->r[10] + c->r[0];
    c->r[0] = 0x1c94u;
    c->v.s[6] = LD32(c->r[2]);
    c->r[3] = c->r[10] + c->r[0];
    c->r[0] = 0x1b94u;
    c->v.s[4] = LD32(c->r[8]);
    c->r[9] = c->r[10] + c->r[0];
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[0] = LD32(c->r[9]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[4] = c->v.f[10] - c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[22] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afda3c; }
    c->r[4] = c->r[1];
    c->r[5] = c->r[2];
    c->r[7] = c->r[3];
    c->r[14] = 0xafda2cu; f_15efddc(c);
    c->v.s[22] = c->v.s[0];
    c->r[3] = c->r[7];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
L_afda3c:;
    c->r[0] = 0x1a94u;
    c->v.s[2] = LD32(c->r[9]);
    c->v.s[4] = LD32(c->r[8]);
    c->v.s[8] = LD32(c->r[6]);
    c->r[7] = c->r[10] + c->r[0];
    c->r[0] = 0x1a98u;
    c->r[4] = c->r[10] + c->r[0];
    c->r[0] = 0x1a90u;
    c->v.s[0] = LD32(c->r[7]);
    c->r[5] = c->r[10] + c->r[0];
    c->v.s[10] = LD32(c->r[4]);
    c->v.s[6] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[4] - c->v.f[6];
    c->v.f[4] = c->v.f[8] - c->v.f[10];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afdab4; }
    c->r[8] = c->r[1];
    c->r[6] = c->r[2];
    c->r[9] = c->r[3];
    c->r[14] = 0xafdaa4u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
    c->r[3] = c->r[9];
    c->r[2] = c->r[6];
    c->r[1] = c->r[8];
L_afdab4:;
    c->r[0] = 0x1cb8u;
    c->v.f[16] = c->v.f[22] + c->v.f[2];
    c->r[6] = c->r[10] + c->r[0];
    c->v.s[0] = LD32(c->r[6]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdbac; }
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3]);
    c->v.s[4] = LD32(c->r[5]);
    c->v.s[6] = LD32(c->r[2]);
    c->v.s[8] = LD32(c->r[4]);
    c->v.s[10] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    c->v.f[2] = c->v.f[6] - c->v.f[4];
    c->v.f[4] = c->v.f[10] - c->v.f[8];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[22] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afdb18; }
    c->r[14] = 0xafdb14u; f_15efddc(c);
    c->v.s[22] = c->v.s[0];
L_afdb18:;
    { uint32_t ea = c->r[13] + 0x4a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[5]);
    c->v.s[4] = LD32(c->r[4]);
    c->v.s[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[9] - c->v.f[0];
    c->v.s[19] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[19] - c->v.f[2];
    c->v.s[14] = c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_afdb7c; }
    c->v.s[25] = c->v.s[14];
    c->v.s[28] = c->v.s[9];
    c->r[14] = 0xafdb70u; f_15efddc(c);
    c->v.s[9] = c->v.s[28];
    c->v.s[14] = c->v.s[25];
    c->v.s[2] = c->v.s[0];
L_afdb7c:;
    c->v.s[0] = LD32(c->r[6]);
    c->v.s[4] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[22];
    c->v.f[4] = c->v.f[4] - c->v.f[0];
    c->v.s[0] = c->v.s[22];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_afdbd0; }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[16] = c->v.s[22];
    goto L_afdbe0;
L_afdbac:;
    { uint32_t ea = c->r[13] + 0x4acu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4a4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[19] = c->r[0];
    goto L_afdbe0;
L_afdbd0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[16]);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    if (COND_MI) { c->v.s[16] = c->v.s[0]; }
L_afdbe0:;
    c->r[0] = 0x6d60u;
    c->r[1] = c->r[4];
    c->r[2] = 0x6d68u;
    c->r[3] = 0x6d6cu;
    c->r[7] = 0x6d74u;
    c->r[6] = 0x6d78u;
    c->r[5] = 0x6d7cu;
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa8u; ST32(ea, c->r[1]); }
    c->r[1] = 0x6d64u;
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x800u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[0] + c->r[1]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[8] = v; }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x804u; ST32(ea, c->r[8]); }
    c->v.s[2] = c->r[8];
    { uint32_t ea = c->r[0] + c->r[2]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x808u; ST32(ea, c->r[9]); }
    c->v.s[10] = c->r[9];
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x80cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x6d70u;
    { uint32_t ea = c->r[0] + c->r[3]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[10] = v; }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x810u; ST32(ea, c->r[10]); }
    c->v.s[15] = c->r[10];
    { uint32_t ea = c->r[0] + c->r[7]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[14] = v; }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x814u; ST32(ea, c->r[14]); }
    c->v.s[4] = c->r[14];
    { uint32_t ea = c->r[0] + c->r[6]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x818u; ST32(ea, c->r[6]); }
    c->v.s[5] = c->r[6];
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    { uint32_t ea = c->r[13] + 0x81cu; ST32(ea, c->r[5]); }
    c->r[5] = 0x6d80u;
    { uint32_t ea = c->r[0] + c->r[5]; uint32_t v = LD32(ea); c->r[0] = ea; c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d84u;
    { uint32_t ea = c->r[13] + 0x820u; ST32(ea, c->r[5]); }
    c->v.s[11] = c->r[5];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[2] = v; }
    c->r[0] = 0x6d88u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x824u; ST32(ea, c->r[2]); }
    c->v.s[28] = c->r[2];
    { uint32_t ea = c->r[1] + c->r[0]; uint32_t v = LD32(ea); c->r[1] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = 0x6d8cu;
    { uint32_t ea = c->r[13] + 0x828u; ST32(ea, c->r[0]); }
    c->v.s[7] = c->r[0];
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[3]); }
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x82cu; ST32(ea, c->r[1]); }
    c->r[1] = 0x6d90u;
    { uint32_t ea = c->r[3] + c->r[1]; uint32_t v = LD32(ea); c->r[3] = ea; c->r[12] = v; }
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[3]); }
    c->r[3] = 0x6d94u;
    { uint32_t ea = c->r[13] + 0x830u; ST32(ea, c->r[12]); }
    c->v.s[8] = c->r[12];
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[1] = v; }
    c->r[3] = 0x6d98u;
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[7]); }
    c->r[7] = c->r[4];
    { uint32_t ea = c->r[13] + 0x834u; ST32(ea, c->r[1]); }
    c->v.s[6] = c->r[1];
    { uint32_t ea = c->r[7] + c->r[3]; uint32_t v = LD32(ea); c->r[7] = ea; c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[7]); }
    c->r[7] = 0x6d9cu;
    { uint32_t ea = c->r[13] + 0x838u; ST32(ea, c->r[3]); }
    c->v.s[0] = c->r[3];
    { uint32_t ea = c->r[4] + c->r[7]; uint32_t v = LD32(ea); c->r[4] = ea; c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x83cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[13] = c->r[7];
    { uint32_t ea = c->r[13] + 0x7c0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x7d0u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x7e0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x7c4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x7d4u; ST32(ea, c->r[14]); }
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x7e4u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x7c8u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x7d8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x7e8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    ST32(c->r[14] + 160u, c->v.s[2]);
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 152u, c->v.s[4]);
    c->v.f[4] = c->v.f[4] * c->v.f[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[15] * c->v.f[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[28] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[13] * c->v.f[8]);
    ST32(c->r[14] + 172u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 164u, c->v.s[28]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 168u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[0]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[5] * c->v.f[0]);
    ST32(c->r[14] + 396u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 176u, c->v.s[11]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 392u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 180u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[4] ^ 0x80000000u;
    c->v.s[8] = c->v.s[2] ^ 0x80000000u;
    ST32(c->r[14] + 1008u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[6] ^ 0x80000000u;
    ST32(c->r[14] + 388u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = 0x0u;
    ST32(c->r[14] + 1012u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 1016u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x7ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7ccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    c->v.s[8] = LD32(c->r[14] + 200u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x7fcu; ST32(ea, c->r[0]); }
    c->v.s[10] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 244u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afde68; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[8];
L_afde68:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    ST32(c->r[14] + 80u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 196u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 216u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdea8; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afdea8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[30] * c->v.f[6];
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[3] = v; }
    ST32(c->r[14] + 76u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    c->v.s[10] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 324u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdeec; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afdeec:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[29] * c->v.f[6];
    ST32(c->r[14] + 156u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    c->v.s[10] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 328u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdf2c; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afdf2c:;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 144u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    c->v.s[8] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 232u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 296u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdf74; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afdf74:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 204u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 228u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 292u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdfb4; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[8];
L_afdfb4:;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 64u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 236u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afdffc; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[8];
L_afdffc:;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 60u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 248u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[31] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe03c; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[8];
L_afe03c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = c->v.s[6];
    ST32(c->r[14] + 56u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 68u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 336u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe08c; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[5] = c->v.f[10] / c->v.f[8];
L_afe08c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = c->v.s[6];
    c->v.s[0] = LD32(c->r[14] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 332u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe0cc; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[7] = c->v.f[10] / c->v.f[8];
L_afe0cc:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    c->v.s[8] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 340u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe10c; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe10c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 344u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe14c; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[8];
L_afe14c:;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 128u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[14] + 348u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe194; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[10] = c->v.f[10] / c->v.f[8];
L_afe194:;
    c->r[0] = c->r[13] + 0x400u;
    c->r[12] = c->r[4] + 0xfcu;
    c->r[14] = c->r[4] + 0xf8u;
    c->r[8] = c->r[4] + 0xf4u;
    ST32(c->r[0] + 124u, c->v.s[10]);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 252u, c->v.s[0]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    c->v.s[8] = LD32(c->r[0] + 320u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 384u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[10] = LD32(c->r[0] + 352u);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe1f0; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe1f0:;
    c->r[0] = 0x2994u;
    c->r[2] = c->r[13] + 0x400u;
    c->r[1] = 0x2998u;
    ST32(c->r[2] + 112u, c->v.s[0]);
    c->r[0] = c->r[3] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[3] + c->r[1];
    c->r[1] = 0x2990u;
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[10] = LD32(c->r[1]);
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1012u, c->v.s[0]);
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    ST32(c->r[1] + 4u, c->v.s[10]);
    { uint32_t ea = c->r[8]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x334u; ST32(ea, c->r[0]); }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    { uint32_t ea = c->r[14]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x330u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[12]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    { uint32_t ea = c->r[13] + 0x32cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 32u, c->v.s[0]);
    c->v.s[0] = c->v.s[6];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe270; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe270:;
    c->r[0] = 0x2954u;
    c->r[2] = c->r[13] + 0x400u;
    c->r[1] = 0x2958u;
    ST32(c->r[2] + 52u, c->v.s[0]);
    c->r[0] = c->r[3] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[3] + c->r[1];
    c->r[1] = 0x2950u;
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[10] = LD32(c->r[1]);
    ST32(c->r[13] + 1004u, c->v.s[0]);
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    ST32(c->r[0], c->v.s[10]);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 20u, c->v.s[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[0] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe2d8; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe2d8:;
    { uint32_t ea = c->r[13] + 0x504u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 48u, c->v.s[0]);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x500u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    ST32(c->r[13] + 1000u, c->v.s[0]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x508u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    ST32(c->r[13] + 1020u, c->v.s[10]);
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 16u, c->v.s[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[0] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe330; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe330:;
    { uint32_t ea = c->r[13] + 0x510u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 44u, c->v.s[0]);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x50cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    ST32(c->r[13] + 996u, c->v.s[0]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x514u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    ST32(c->r[13] + 1016u, c->v.s[10]);
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 12u, c->v.s[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[0] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe388; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe388:;
    { uint32_t ea = c->r[13] + 0x51cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 40u, c->v.s[0]);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x518u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[0] * c->v.f[6];
    ST32(c->r[13] + 992u, c->v.s[0]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x520u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    ST32(c->r[13] + 1008u, c->v.s[10]);
    c->v.s[0] = c->r[0];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 8u, c->v.s[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.s[0] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe3e0; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe3e0:;
    c->v.f[8] = c->v.f[9] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[6]);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 36u, c->v.s[0]);
    c->v.s[0] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe410; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe410:;
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 28u, c->v.s[0]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[6];
    c->v.s[8] = LD32(c->r[0] + 224u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe448; }
    c->v.s[10] = 0x3f800000u;
    c->v.f[0] = c->v.f[10] / c->v.f[8];
L_afe448:;
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 24u, c->v.s[0]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[0] + 192u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 212u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[27] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + c->v.f[17];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe484; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[6] = c->v.f[0] / c->v.f[8];
L_afe484:;
    c->r[2] = 0xf3b6fcu;
    c->r[1] = 0x7214u;
    c->r[0] = 0x7210u;
    c->r[5] = 0x0u;
    c->r[1] = c->r[3] + c->r[1];
    c->r[0] = c->r[3] + c->r[0];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[0]);
    c->r[0] = 0x0u;
    { uint32_t ea = 0xafe4b0u + c->r[2]; uint32_t v = LD32(ea); c->r[2] = v; }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    { uint32_t ea = c->r[2]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[2] + 4u; c->r[1] = LD32(ea + 0u); c->r[10] = LD32(ea + 4u); }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[0]); }
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe4d8; }
    c->r[0] = 0x21bfu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[5] = v; }
    (void)f_subs(c, c->r[5], 0x0u);
    if (COND_NE) { c->r[5] = 0x1u; }
L_afe4d8:;
    c->r[2] = c->r[13] + 0x400u;
    c->r[0] = 0x7218u;
    ST32(c->r[13] + 608u, c->v.s[8]);
    ST32(c->r[13] + 520u, c->v.s[16]);
    ST32(c->r[13] + 524u, c->v.s[20]);
    ST32(c->r[13] + 400u, c->v.s[18]);
    ST32(c->r[13] + 528u, c->v.s[24]);
    ST32(c->r[13] + 556u, c->v.s[17]);
    ST32(c->r[2] + 72u, c->v.s[9]);
    c->r[2] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    ST32(c->r[2] + 84u, c->v.s[19]);
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 88u, c->v.s[14]);
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 92u, c->v.s[31]);
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 96u, c->v.s[27]);
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 100u, c->v.s[23]);
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 104u, c->v.s[21]);
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 108u, c->v.s[26]);
    c->v.s[8] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe55c; }
    c->r[0] = 0x22bfu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x288u; ST32(ea, c->r[0]); }
L_afe55c:;
    c->r[0] = c->r[13] + 0x400u;
    c->r[6] = c->r[13] + 0x400u;
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[0] + 276u, c->v.s[8]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[30];
    c->v.s[28] = LD32(c->r[6] + 304u);
    c->r[6] = c->r[13] + 0x400u;
    ST32(c->r[0] + 280u, c->v.s[0]);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 284u, c->v.s[7]);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 288u, c->v.s[5]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0] + 164u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[0] + 152u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[0] + 160u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[19] = LD32(c->r[0] + 308u);
    c->r[0] = 0x721cu;
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[15] = c->v.f[8] * c->v.f[0];
    c->v.f[21] = c->v.f[29] * c->v.f[0];
    c->v.f[20] = c->v.f[28] * c->v.f[0];
    c->v.f[30] = c->v.f[8] * c->v.f[1];
    c->v.f[23] = c->v.f[29] * c->v.f[1];
    c->v.f[3] = c->v.f[28] * c->v.f[1];
    c->v.f[17] = c->v.f[8] * c->v.f[12];
    c->v.s[8] = LD32(c->r[6] + 312u);
    c->r[6] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[29] * c->v.f[12];
    c->v.s[29] = LD32(c->r[2] + 300u);
    c->r[2] = 0x0u;
    c->v.f[26] = c->v.f[28] * c->v.f[12];
    c->v.s[10] = LD32(c->r[6] + 316u);
    c->r[6] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[2]); }
    c->v.f[27] = c->v.f[19] * c->v.f[0];
    c->v.f[31] = c->v.f[19] * c->v.f[1];
    c->v.f[5] = c->v.f[19] * c->v.f[12];
    c->v.s[9] = LD32(c->r[6] + 320u);
    c->v.f[16] = c->v.f[29] * c->v.f[0];
    c->v.f[28] = c->v.f[8] * c->v.f[0];
    c->v.f[19] = c->v.f[29] * c->v.f[1];
    c->v.f[18] = c->v.f[29] * c->v.f[12];
    c->v.f[29] = c->v.f[8] * c->v.f[1];
    c->v.f[24] = c->v.f[8] * c->v.f[12];
    c->v.f[13] = c->v.f[10] * c->v.f[0];
    c->v.f[8] = c->v.f[10] * c->v.f[1];
    c->v.f[10] = c->v.f[10] * c->v.f[12];
    c->v.f[14] = c->v.f[9] * c->v.f[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.f[7] = c->v.f[9] * c->v.f[1];
    c->v.f[9] = c->v.f[9] * c->v.f[12];
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    c->v.s[1] = c->v.s[0];
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe668; }
    c->r[0] = 0x23bfu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x28cu; ST32(ea, c->r[0]); }
L_afe668:;
    c->r[0] = c->r[13] + 0x400u;
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[0] + 316u, c->v.s[4]);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 320u, c->v.s[2]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[0] + 356u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0] + 176u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[0] + 168u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0] + 172u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[0] + 360u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[0] + 372u);
    c->r[0] = 0x7220u;
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 364u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 368u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 376u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 380u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 384u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x400u;
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    ST32(c->r[0] + 376u, c->v.s[0]);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe764; }
    c->r[0] = 0x24bfu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 0x290u; ST32(ea, c->r[0]); }
L_afe764:;
    c->r[0] = c->r[13] + 0x400u;
    c->r[2] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[0] + 324u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0] + 180u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[0] + 392u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[0] + 396u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[0] + 328u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[0] + 336u);
    c->r[0] = 0x7224u;
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 332u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 340u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 344u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 348u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[2] + 352u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[11] * c->v.f[0]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[11] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[11], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afe848; }
    c->r[0] = 0x25bfu;
    { uint32_t ea = c->r[3] + c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    goto L_afe84c;
L_afe848:;
    c->r[0] = 0x0u;
L_afe84c:;
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x400u;
    c->r[6] = c->r[13] + 0x400u;
    c->r[2] = c->r[3];
    c->v.s[2] = LD32(c->r[0] + 320u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[0] + 316u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0] + 388u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[17] - c->v.f[2];
    c->v.f[25] = c->v.f[25] - c->v.f[2];
    c->v.f[18] = c->v.f[18] - c->v.f[2];
    c->v.f[26] = c->v.f[26] - c->v.f[2];
    c->v.f[24] = c->v.f[24] - c->v.f[2];
    c->v.f[9] = c->v.f[9] - c->v.f[2];
    c->v.f[22] = c->v.f[8] - c->v.f[4];
    c->v.f[23] = c->v.f[23] - c->v.f[4];
    c->v.f[31] = c->v.f[31] - c->v.f[4];
    c->v.f[19] = c->v.f[19] - c->v.f[4];
    c->v.f[29] = c->v.f[29] - c->v.f[4];
    c->v.f[7] = c->v.f[7] - c->v.f[4];
    c->v.f[12] = c->v.f[15] - c->v.f[0];
    c->v.f[15] = c->v.f[13] - c->v.f[0];
    c->v.f[21] = c->v.f[21] - c->v.f[0];
    c->v.f[27] = c->v.f[27] - c->v.f[0];
    c->v.f[20] = c->v.f[20] - c->v.f[0];
    c->v.f[28] = c->v.f[28] - c->v.f[0];
    c->v.f[13] = c->v.f[10] - c->v.f[2];
    ST32(c->r[0] + 384u, c->v.s[12]);
    c->v.f[12] = c->v.f[30] - c->v.f[4];
    c->r[0] = 0x720cu;
    c->v.f[30] = c->v.f[16] - c->v.f[0];
    c->v.f[16] = c->v.f[14] - c->v.f[0];
    ST32(c->r[6] + 380u, c->v.s[12]);
    c->v.f[12] = c->v.f[5] - c->v.f[2];
    c->v.f[5] = c->v.f[3] - c->v.f[4];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD8(ea); c->r[2] = ea; c->r[0] = v; }
    c->v.s[8] = LD32(c->r[2] - 40u);
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[2]); }
    (void)f_subs(c, c->r[0], 0x0u);
    ST32(c->r[13] + 668u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[2] - 36u);
    ST32(c->r[13] + 664u, c->v.s[8]);
    if (COND_EQ) { goto L_afe9d8; }
    c->v.s[14] = LD32(c->r[13] + 608u);
    c->v.s[3] = 0x0u;
    c->r[2] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[2] + 368u, c->v.s[9]);
    c->r[2] = c->r[13] + 0x400u;
    c->v.s[9] = c->v.s[22];
    c->v.s[22] = c->v.s[12];
    ST32(c->r[2] + 372u, c->v.s[7]);
    c->r[2] = c->r[13] + 0x400u;
    c->v.s[7] = c->v.s[5];
    c->v.s[0] = LD32(c->r[2] + 280u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[2] + 276u);
    c->r[2] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[14] + c->v.f[3];
    vfp_cmp_f(c, c->v.f[14], 0.0f);
    c->v.s[12] = LD32(c->r[2] + 376u);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_EQ ? c->v.s[3] : c->v.s[8];
    (void)f_subs(c, c->r[5], 0x0u);
    c->v.f[10] = c->v.f[8] + c->v.f[0];
    c->v.s[8] = COND_EQ ? c->v.s[8] : c->v.s[10];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[8] + c->v.f[5];
    c->v.s[8] = COND_EQ ? c->v.s[8] : c->v.s[10];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[8] + c->v.f[1];
    c->v.s[8] = COND_EQ ? c->v.s[8] : c->v.s[10];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[8] + c->v.f[12];
    c->v.s[8] = COND_EQ ? c->v.s[8] : c->v.s[10];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[10] = c->v.f[8] + c->v.f[11];
    c->v.s[8] = COND_EQ ? c->v.s[8] : c->v.s[10];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_afea34; }
    c->v.f[10] = c->v.f[11] / c->v.f[8];
    ST32(c->r[13] + 348u, c->v.s[10]);
    c->v.f[10] = c->v.f[12] / c->v.f[8];
    ST32(c->r[13] + 352u, c->v.s[10]);
    c->v.f[10] = c->v.f[1] / c->v.f[8];
    ST32(c->r[13] + 356u, c->v.s[10]);
    c->v.f[10] = c->v.f[5] / c->v.f[8];
    ST32(c->r[13] + 360u, c->v.s[10]);
    c->v.f[10] = c->v.f[0] / c->v.f[8];
    c->v.f[8] = c->v.f[14] / c->v.f[8];
    ST32(c->r[13] + 364u, c->v.s[10]);
    ST32(c->r[13] + 532u, c->v.s[8]);
    goto L_afea50;
L_afe9d8:;
    c->v.s[8] = 0x0u;
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0] + 156u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 144u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[0] + 288u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[0] + 284u);
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[13] + 532u, c->v.s[8]);
    ST32(c->r[13] + 364u, c->v.s[8]);
    ST32(c->r[13] + 360u, c->v.s[8]);
    ST32(c->r[13] + 356u, c->v.s[8]);
    ST32(c->r[13] + 352u, c->v.s[8]);
    ST32(c->r[13] + 556u, c->v.s[8]);
    ST32(c->r[13] + 348u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[0] + 384u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[0] + 380u);
    goto L_afea9c;
L_afea34:;
    ST32(c->r[13] + 556u, c->v.s[8]);
    ST32(c->r[13] + 364u, c->v.s[3]);
    ST32(c->r[13] + 360u, c->v.s[3]);
    ST32(c->r[13] + 356u, c->v.s[3]);
    ST32(c->r[13] + 352u, c->v.s[3]);
    ST32(c->r[13] + 532u, c->v.s[3]);
    ST32(c->r[13] + 348u, c->v.s[3]);
L_afea50:;
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[5] = c->v.s[7];
    c->v.s[12] = c->v.s[22];
    c->v.s[22] = c->v.s[9];
    c->v.s[0] = LD32(c->r[0] + 156u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 144u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[0] + 288u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[0] + 284u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[0] + 384u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[0] + 380u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[0] + 372u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[0] + 368u);
L_afea9c:;
    c->v.f[8] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[10] * c->v.f[25];
    c->r[2] = c->r[13] + 0x400u;
    c->r[6] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[14] * c->v.f[31];
    ST32(c->r[0] + 136u, c->v.s[8]);
    c->v.f[8] = c->v.f[0] * c->v.f[1];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 288u, c->v.s[8]);
    c->v.f[8] = c->v.f[0] * c->v.f[17];
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[14] * c->v.f[27];
    ST32(c->r[0] + 132u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[21];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 148u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[23];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 140u, c->v.s[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[11] * c->v.f[19];
    ST32(c->r[0] + 344u, c->v.s[8]);
    c->v.f[8] = c->v.f[11] * c->v.f[30];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 156u, c->v.s[8]);
    c->v.f[8] = c->v.f[11] * c->v.f[18];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 116u, c->v.s[8]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 252u);
    c->r[0] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[10] * c->v.f[20];
    ST32(c->r[0] + 260u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[5];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 256u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[26];
    c->r[0] = c->r[13] + 0x400u;
    ST32(c->r[0] + 252u, c->v.s[8]);
    c->r[0] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 128u);
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d24u;
    c->v.f[8] = c->v.f[10] * c->v.f[28];
    ST32(c->r[2] + 272u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[29];
    c->r[2] = c->r[13] + 0x400u;
    ST32(c->r[2] + 268u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[24];
    c->r[2] = c->r[3];
    ST32(c->r[6] + 264u, c->v.s[8]);
    c->r[6] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[6] + 124u);
    c->r[6] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[10] * c->v.f[15];
    ST32(c->r[6] + 284u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[22];
    c->r[6] = c->r[13] + 0x400u;
    ST32(c->r[6] + 280u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[13];
    c->r[6] = c->r[13] + 0x400u;
    ST32(c->r[6] + 276u, c->v.s[8]);
    c->r[6] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[6] + 112u);
    c->r[6] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[10] * c->v.f[16];
    ST32(c->r[6] + 348u, c->v.s[8]);
    c->v.f[8] = c->v.f[10] * c->v.f[7];
    c->v.f[10] = c->v.f[10] * c->v.f[9];
    { uint32_t ea = c->r[2] + c->r[0]; uint32_t v = LD32(ea); c->r[2] = ea; c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[14]); }
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xbcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x10u; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x318u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x31cu; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[2]); }
    ST32(c->r[14] + 352u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    (void)f_subs(c, c->r[0], 0x0u);
    ST32(c->r[14] + 364u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 120u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 144u, c->v.s[3]);
    if (COND_EQ) { goto L_b066b8; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[13] + 992u);
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x370u; ST32(ea, c->r[9]); }
    c->r[6] = 0x0u;
    c->r[8] = c->r[1];
    c->r[5] = c->r[7];
    c->v.s[10] = LD32(c->r[14] + 152u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 112u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 72u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->r[0] - 0x24u;
    c->r[0] = c->r[0] - 0x28u;
    c->v.s[8] = LD32(c->r[14] + 200u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x158u; ST32(ea, c->r[2]); }
    c->r[2] = c->r[13] + 0x7a0u;
    { uint32_t ea = c->r[13] + 0x154u; ST32(ea, c->r[0]); }
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = c->v.s[10];
    c->v.f[15] = c->v.f[14] * c->v.f[10];
    c->r[0] = c->r[2] | 0xcu;
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x71f8u;
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[19] = c->v.f[0] * c->v.f[16];
    { uint32_t ea = c->r[13] + 0x94u; ST32(ea, c->r[0]); }
    c->r[0] = 0x71ecu;
    c->v.f[5] = c->v.f[8] * c->v.f[10];
    c->v.f[7] = c->v.f[8] * c->v.f[16];
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[29] = c->v.f[8] * c->v.f[3];
    c->v.s[8] = LD32(c->r[14] + 196u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x90u; ST32(ea, c->r[0]); }
    c->r[0] = 0x71f0u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[0]); }
    c->r[0] = 0x71f4u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x12d4u;
    c->v.f[9] = c->v.f[8] * c->v.f[3];
    c->v.f[22] = c->v.f[8] * c->v.f[20];
    c->v.f[24] = c->v.f[8] * c->v.f[16];
    c->v.s[8] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d30u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x178u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d40u;
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[11] = c->v.f[8] * c->v.f[3];
    c->v.f[13] = c->v.f[8] * c->v.f[20];
    c->v.f[28] = c->v.f[8] * c->v.f[16];
    c->v.s[8] = LD32(c->r[14] + 204u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x174u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d2cu;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x170u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7208u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x71fcu;
    c->v.f[10] = c->v.f[8] * c->v.f[3];
    c->v.f[30] = c->v.f[8] * c->v.f[20];
    c->v.f[8] = c->v.f[8] * c->v.f[16];
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x88u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7204u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0xc4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x15d4u;
    c->r[0] = c->r[3] + c->r[0];
    ST32(c->r[14] + 368u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x1b8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x18d4u;
    ST32(c->r[14] + 308u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    c->v.s[10] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x150u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d34u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x19cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d38u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x198u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1bd4u;
    c->v.f[8] = c->v.f[10] * c->v.f[3];
    c->v.f[18] = c->v.f[10] * c->v.f[20];
    c->v.f[10] = c->v.f[10] * c->v.f[16];
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d3cu;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xfd4u;
    c->r[0] = c->r[3] + c->r[0];
    ST32(c->r[14] + 312u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[13] + 1012u);
    { uint32_t ea = c->r[13] + 0x148u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d4cu;
    ST32(c->r[14] + 316u, c->v.s[18]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    ST32(c->r[14] + 320u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x1b4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d48u;
    c->v.s[10] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1b0u; ST32(ea, c->r[0]); }
    c->r[0] = 0x7228u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x1acu; ST32(ea, c->r[0]); }
    c->r[0] = 0x28d4u;
    c->r[0] = c->r[3] + c->r[0];
    c->v.f[26] = c->v.f[10] * c->v.f[20];
    c->v.f[18] = c->v.f[10] * c->v.f[3];
    c->v.f[10] = c->v.f[10] * c->v.f[16];
    { uint32_t ea = c->r[13] + 0x1a8u; ST32(ea, c->r[0]); }
    c->r[0] = 0x6d50u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x29bcu;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[0]); }
    c->r[0] = 0x10bcu;
    ST32(c->r[14] + 324u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    ST32(c->r[14] + 332u, c->v.s[10]);
    c->v.f[10] = c->v.f[3] * c->v.f[8];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x254u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1cbcu;
    ST32(c->r[14] + 304u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x250u; ST32(ea, c->r[0]); }
    c->r[0] = 0x19bcu;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[0] = 0x16bcu;
    ST32(c->r[14] + 336u, c->v.s[10]);
    c->v.f[10] = c->v.f[20] * c->v.f[8];
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    c->r[0] = 0x13bcu;
    c->r[0] = c->r[3] + c->r[0];
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[3] + 0x7200u;
    { uint32_t ea = c->r[13] + 0xc0u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] | 0x4u;
    ST32(c->r[14] + 124u, c->v.s[10]);
    c->v.f[10] = c->v.f[16] * c->v.f[8];
    c->v.s[8] = LD32(c->r[13] + 1004u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3acdcu;
    { uint32_t ea = 0xafeed0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[26] = c->v.f[3] * c->v.f[8];
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3acbcu;
    ST32(c->r[14] + 128u, c->v.s[26]);
    c->v.f[26] = c->v.f[20] * c->v.f[8];
    c->v.f[8] = c->v.f[16] * c->v.f[8];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = 0xafeef0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 1012u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[13] + 1000u);
    ST32(c->r[14] + 184u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3ac9cu;
    c->v.f[26] = c->v.f[8] * c->v.f[3];
    { uint32_t ea = 0xafef10u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xf0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3ac84u;
    ST32(c->r[14] + 356u, c->v.s[26]);
    c->v.f[26] = c->v.f[8] * c->v.f[20];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = 0xafef28u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 360u, c->v.s[26]);
    c->v.f[26] = c->v.f[8] * c->v.f[16];
    c->v.s[8] = LD32(c->r[13] + 996u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3ac64u;
    c->v.f[17] = c->v.f[8] * c->v.f[3];
    { uint32_t ea = 0xafef48u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 188u, c->v.s[17]);
    c->v.f[17] = c->v.f[8] * c->v.f[20];
    c->v.f[8] = c->v.f[8] * c->v.f[16];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3ac48u;
    { uint32_t ea = 0xafef64u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 196u, c->v.s[17]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[0] * c->v.f[3];
    ST32(c->r[14] + 200u, c->v.s[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[3];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3ac18u;
    ST32(c->r[14] + 204u, c->v.s[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[16];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = 0xafef94u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 208u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3abfcu;
    c->v.s[8] = LD32(c->r[14] + 224u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = 0xafefb0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[21] = c->v.f[8] * c->v.f[3];
    c->v.f[23] = c->v.f[8] * c->v.f[20];
    c->v.f[25] = c->v.f[8] * c->v.f[16];
    c->v.s[8] = LD32(c->r[14] + 192u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x1a0u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3abccu;
    c->v.f[0] = c->v.f[8] * c->v.f[16];
    c->v.s[16] = LD32(c->r[13] + 1008u);
    c->v.f[27] = c->v.f[8] * c->v.f[3];
    c->v.f[20] = c->v.f[8] * c->v.f[20];
    { uint32_t ea = 0xafefe0u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 224u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3abb0u;
    c->v.s[14] = LD32(c->r[14] + 168u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = 0xafeffcu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[16] * c->v.f[14]);
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    c->r[0] = 0xf3aba0u;
    { uint32_t ea = 0xaff00cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 300u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 84u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x364u;
    c->v.s[8] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 176u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[15] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[15] * c->v.f[0]);
    c->v.s[31] = c->v.s[12];
    ST32(c->r[14] + 192u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 172u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[15] * c->v.f[12]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 220u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 384u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[22]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = LD32(c->r[13] + 1012u);
    ST32(c->r[14] + 376u, c->v.s[24]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 232u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 372u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 216u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 228u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[8] * c->v.f[14]);
    ST32(c->r[14] + 368u, c->v.s[30]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 308u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[14] + 312u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    ST32(c->r[14] + 316u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 320u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 248u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[14] + 340u, c->v.s[18]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 324u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    ST32(c->r[14] + 324u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 332u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 4u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[8]);
    ST32(c->r[14] + 336u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 124u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 328u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 128u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[13] + 1020u);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 356u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.s[8] = LD32(c->r[13] + 1016u);
    ST32(c->r[14] + 360u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 160u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 196u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 200u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 204u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 152u, c->v.s[17]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[17] = c->v.s[24];
    ST32(c->r[14] + 164u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.s[19] = c->v.s[28];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[8] = LD32(c->r[14] + 104u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 240u, c->v.s[21]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[23]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 232u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[14] + 248u, c->v.s[27]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 176u, c->v.s[20]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 224u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 224u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 8u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[14]);
    ST32(c->r[14] + 300u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = LD32(c->r[14] + 88u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[26] * c->v.f[14]);
    ST32(c->r[14] + 212u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 244u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 180u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[14] + 172u, c->v.s[29]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[29] = LD32(c->r[14] + 192u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 396u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[20] * c->v.f[12]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 220u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 100u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[14] + 384u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[14]);
    ST32(c->r[14] + 380u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 376u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 296u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[0]);
    ST32(c->r[14] + 372u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.s[8] = LD32(c->r[14] + 292u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[14]);
    ST32(c->r[14] + 368u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[8] = LD32(c->r[14] + 236u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[8] = LD32(c->r[14] + 92u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] - c->v.f[2];
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] - c->v.f[2];
    ST32(c->r[14] + 340u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = LD32(c->r[14] + 324u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[8] = LD32(c->r[14] + 32u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[30] = c->v.f[30] - c->v.f[4];
    ST32(c->r[14] + 124u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[12] * c->v.f[8]);
    ST32(c->r[14] + 328u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 20u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[12] * c->v.f[8]);
    ST32(c->r[14] + 128u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 184u, c->v.s[18]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 16u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[8] = LD32(c->r[14] + 12u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[12]);
    ST32(c->r[14] + 188u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 196u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 200u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 204u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 208u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 152u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 108u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 228u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 232u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[26] * c->v.f[0]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[26] * c->v.f[12]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[8] = LD32(c->r[14] + 96u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 248u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 176u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 224u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[14] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[11] - c->v.f[2];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.f[8] = c->v.f[0] - c->v.f[4];
    c->v.s[0] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] - c->v.f[4];
    c->v.f[5] = c->v.f[5] - c->v.f[2];
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    ST32(c->r[14] + 336u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 388u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 172u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[17] - c->v.f[0];
    c->v.f[17] = c->v.f[25] - c->v.f[0];
    c->v.f[18] = c->v.f[18] - c->v.f[0];
    c->v.f[13] = c->v.f[13] - c->v.f[0];
    c->v.f[9] = c->v.f[9] - c->v.f[0];
    c->v.f[14] = c->v.f[12] - c->v.f[0];
    c->v.f[12] = c->v.f[29] - c->v.f[4];
    ST32(c->r[14] + 396u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - c->v.f[2];
    ST32(c->r[14] + 392u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    ST32(c->r[14] + 384u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - c->v.f[4];
    ST32(c->r[14] + 380u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[12] - c->v.f[2];
    c->v.s[12] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    ST32(c->r[14] + 376u, c->v.s[12]);
    c->v.f[12] = c->v.f[21] - c->v.f[4];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[23] - c->v.f[2];
    c->v.f[23] = c->v.f[27] - c->v.f[0];
    ST32(c->r[14] + 372u, c->v.s[12]);
    c->v.f[12] = c->v.f[19] - c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[31] - c->v.f[4];
    ST32(c->r[14] + 360u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - c->v.f[4];
    ST32(c->r[14] + 368u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - c->v.f[0];
    ST32(c->r[14] + 356u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 124u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[12] - c->v.f[4];
    c->v.s[12] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[12] - c->v.f[2];
    c->v.s[12] = LD32(c->r[14] + 128u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[29] = c->v.f[12] - c->v.f[0];
    c->v.s[12] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[12] - c->v.f[4];
    c->v.f[12] = c->v.f[22] - c->v.f[2];
    c->v.f[22] = c->v.f[16] - c->v.f[4];
    c->v.f[16] = c->v.f[15] - c->v.f[2];
    c->v.s[15] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] - c->v.f[0];
    ST32(c->r[14] + 324u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 196u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] - c->v.f[4];
    ST32(c->r[14] + 320u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 200u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] - c->v.f[2];
    ST32(c->r[14] + 316u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 204u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] - c->v.f[0];
    c->v.f[0] = c->v.f[3] - c->v.f[0];
    ST32(c->r[14] + 312u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] - c->v.f[2];
    ST32(c->r[14] + 308u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 300u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 296u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 388u, c->v.s[0]);
    c->v.f[0] = c->v.f[1] - c->v.f[4];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 248u, c->v.s[0]);
    c->v.f[0] = c->v.f[10] - c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 244u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 36u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 28u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[10] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 80u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 516u, c->v.s[8]);
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[13] + 512u, c->v.s[10]);
    ST32(c->r[14] + 328u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 396u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 332u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 336u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 76u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[0] * c->v.f[26];
    c->v.f[3] = c->v.f[0] * c->v.f[14];
    c->v.s[14] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[0] * c->v.f[14];
    c->v.s[0] = LD32(c->r[14] + 68u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 188u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 184u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 180u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 64u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[20];
    ST32(c->r[14] + 176u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 172u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] * c->v.f[28];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 168u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 60u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[17];
    ST32(c->r[13] + 508u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] * c->v.f[19];
    ST32(c->r[13] + 504u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] * c->v.f[24];
    c->v.s[0] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 500u, c->v.s[14]);
    c->v.s[14] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    ST32(c->r[14] + 340u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] * c->v.f[30];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = 0x0u;
    ST32(c->r[14] + 360u, c->v.s[14]);
    c->v.f[14] = c->v.f[0] * c->v.f[21];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 356u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 344u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[23] * c->v.f[0];
    ST32(c->r[13] + 720u, c->v.s[15]);
    ST32(c->r[13] + 896u, c->v.s[15]);
    ST32(c->r[13] + 904u, c->v.s[15]);
    ST32(c->r[13] + 964u, c->v.s[15]);
    ST32(c->r[13] + 496u, c->v.s[14]);
    c->v.f[14] = c->v.f[25] * c->v.f[0];
    ST32(c->r[13] + 492u, c->v.s[14]);
    c->v.f[14] = c->v.f[27] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = 0xbf800000u;
    ST32(c->r[13] + 488u, c->v.s[14]);
    c->v.f[14] = c->v.f[29] * c->v.f[0];
    c->v.f[12] = c->v.f[12] * c->v.f[0];
    ST32(c->r[13] + 484u, c->v.s[14]);
    c->v.f[14] = c->v.f[31] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 44u);
    ST32(c->r[13] + 476u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = c->v.s[5];
    ST32(c->r[13] + 920u, c->v.s[31]);
    ST32(c->r[13] + 952u, c->v.s[31]);
    ST32(c->r[13] + 956u, c->v.s[31]);
    c->v.s[20] = c->v.s[31];
    c->v.f[12] = c->v.f[0] * c->v.f[18];
    ST32(c->r[13] + 480u, c->v.s[14]);
    c->v.f[14] = c->v.f[8] + c->v.f[10];
    c->v.s[10] = LD32(c->r[13] + 352u);
    ST32(c->r[13] + 472u, c->v.s[12]);
    c->v.f[12] = c->v.f[0] * c->v.f[22];
    ST32(c->r[13] + 468u, c->v.s[12]);
    c->v.f[12] = c->v.f[0] * c->v.f[16];
    c->v.s[0] = LD32(c->r[14] + 40u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = 0x3f800000u;
    ST32(c->r[13] + 464u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[14] + 324u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[0] * c->v.f[12];
    ST32(c->r[13] + 548u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[0] * c->v.f[12];
    ST32(c->r[13] + 544u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[0] * c->v.f[12];
    c->v.s[0] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 540u, c->v.s[12]);
    c->v.f[12] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 460u, c->v.s[12]);
    c->v.f[12] = c->v.f[2] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 456u, c->v.s[12]);
    c->v.f[12] = c->v.f[4] * c->v.f[13];
    ST32(c->r[13] + 452u, c->v.s[12]);
    c->v.f[12] = c->v.f[4] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 24u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 296u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[0] * c->v.f[9];
    ST32(c->r[13] + 448u, c->v.s[12]);
    c->v.f[1] = c->v.f[0] * c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 292u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[9] - c->v.f[3];
    c->v.f[12] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = LD32(c->r[14] + 388u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = 0x3f000000u;
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    c->v.s[14] = LD32(c->r[13] + 348u);
    ST32(c->r[13] + 324u, c->v.s[8]);
    c->v.f[8] = c->v.f[1] - c->v.f[7];
    c->v.f[1] = c->v.f[16] - c->v.f[10];
    c->v.f[13] = c->v.f[6] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 248u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 404u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 556u);
    ST32(c->r[13] + 316u, c->v.s[8]);
    c->v.f[8] = c->v.f[12] - c->v.f[11];
    ST32(c->r[13] + 312u, c->v.s[1]);
    c->v.f[4] = c->v.f[6] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 244u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 316u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[16] - c->v.f[14];
    ST32(c->r[14] + 320u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = c->v.f[16] - c->v.f[2];
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    ST32(c->r[13] + 308u, c->v.s[8]);
    c->v.s[8] = LD32(c->r[13] + 356u);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.s[6] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 320u, c->v.s[3]);
    c->v.s[11] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 932u, c->v.s[2]);
    c->v.f[2] = c->v.f[14] * c->v.f[14];
    ST32(c->r[13] + 420u, c->v.s[5]);
    c->v.f[12] = c->v.f[16] - c->v.f[8];
    c->v.f[6] = c->v.f[13] - c->v.f[6];
    c->v.f[4] = c->v.f[4] - c->v.f[9];
    c->v.f[0] = c->v.f[0] - c->v.f[11];
    ST32(c->r[13] + 280u, c->v.s[2]);
    c->v.f[2] = c->v.f[10] * c->v.f[10];
    ST32(c->r[13] + 304u, c->v.s[12]);
    ST32(c->r[13] + 300u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 360u);
    ST32(c->r[13] + 292u, c->v.s[4]);
    c->v.s[4] = LD32(c->r[13] + 364u);
    ST32(c->r[13] + 284u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 532u);
    ST32(c->r[13] + 276u, c->v.s[2]);
    c->v.f[2] = c->v.f[8] * c->v.f[8];
    c->v.f[7] = c->v.f[16] - c->v.f[6];
    c->v.f[9] = c->v.f[16] - c->v.f[4];
    c->v.f[11] = c->v.f[16] - c->v.f[0];
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    ST32(c->r[13] + 272u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] * c->v.f[6];
    ST32(c->r[13] + 296u, c->v.s[7]);
    ST32(c->r[13] + 288u, c->v.s[9]);
    ST32(c->r[13] + 388u, c->v.s[0]);
    c->v.f[0] = c->v.f[5] * c->v.f[5];
    ST32(c->r[13] + 392u, c->v.s[11]);
    ST32(c->r[13] + 268u, c->v.s[2]);
    c->v.f[2] = c->v.f[4] * c->v.f[4];
    ST32(c->r[13] + 560u, c->v.s[0]);
    c->v.f[0] = c->v.f[3] * c->v.f[3];
    ST32(c->r[13] + 264u, c->v.s[2]);
    ST32(c->r[13] + 260u, c->v.s[0]);
    c->v.f[0] = c->v.f[1] * c->v.f[1];
    ST32(c->r[13] + 256u, c->v.s[0]);
    c->v.f[0] = c->v.f[12] * c->v.f[12];
    ST32(c->r[13] + 252u, c->v.s[0]);
    c->v.f[0] = c->v.f[7] * c->v.f[7];
    ST32(c->r[13] + 248u, c->v.s[0]);
    c->v.f[0] = c->v.f[9] * c->v.f[9];
    ST32(c->r[13] + 244u, c->v.s[0]);
    c->v.f[0] = c->v.f[11] * c->v.f[11];
    ST32(c->r[13] + 384u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 112u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 244u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 716u, c->v.s[0]);
    ST32(c->r[13] + 892u, c->v.s[0]);
    ST32(c->r[13] + 900u, c->v.s[0]);
    ST32(c->r[13] + 960u, c->v.s[0]);
    c->v.s[25] = c->v.s[0];
    c->v.s[19] = c->v.s[0];
    ST32(c->r[14] + 240u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 204u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 308u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 128u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 124u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 152u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 300u, c->v.s[15]);
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[10];
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x344u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x338u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2e8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2dcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2f4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2ecu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x300u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2fcu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2f8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x308u; ST32(ea, c->r[7]); }
    c->v.s[17] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x33cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x34cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x314u; ST32(ea, c->r[0]); }
    c->v.s[23] = LD32(c->r[14] + 132u);
    goto L_affc28;
L_affc28:;
    { uint32_t ea = c->r[13] + 0x328u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x244u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x324u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x340u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x320u; ST32(ea, c->r[3]); }
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 4u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); }
    { uint32_t ea = c->r[1] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    ST32(c->r[14] + 136u, c->v.s[17]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x2d8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x374u; ST32(ea, c->r[8]); }
    ST32(c->r[13] + 708u, c->v.s[25]);
    ST32(c->r[13] + 704u, c->v.s[20]);
    ST32(c->r[14] + 132u, c->v.s[23]);
    { uint32_t ea = c->r[13] + 0x578u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x570u; ST32(ea, c->r[4]); }
    c->v.s[22] = c->r[1];
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[13] + 0x574u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x584u; ST32(ea, c->r[1]); }
    if (COND_EQ) { goto L_affde8; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 464u);
    c->v.s[2] = LD32(c->r[13] + 468u);
    c->v.s[4] = LD32(c->r[13] + 472u);
    c->r[0] = 0x0u;
    c->v.s[26] = LD32(c->r[13] + 528u);
    c->r[9] = c->r[4];
    c->r[10] = c->r[5];
    c->r[8] = c->r[1];
    c->v.s[6] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[8] = c->v.f[8] - c->v.f[31];
    ST32(c->r[14] + 928u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    ST32(c->r[14] + 936u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[0]); }
    c->v.s[12] = LD32(c->r[14] + 344u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[12];
    ST32(c->r[14] + 944u, c->v.s[6]);
    c->v.f[6] = c->v.f[10] - c->v.f[19];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 948u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 952u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[13] + 668u);
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = c->r[7];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b00004; }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[8] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[0] = c->r[7];
    c->r[9] = c->r[4];
    c->r[10] = c->r[5];
    if (COND_NE) { goto L_b00004; }
    c->v.s[6] = LD32(c->r[13] + 308u);
    c->r[8] = c->r[13] + 0x400u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x750u;
    c->r[3] = c->r[13] + 0x710u;
    ST32(c->r[8] + 848u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 316u);
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 852u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 324u);
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 856u, c->v.s[6]);
    c->r[8] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    ST32(c->r[8] + 784u, c->v.s[0]);
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 788u, c->v.s[2]);
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 792u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0x71cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x154u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x790u;
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xaffdb4u; f_b0abd8(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 912u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 916u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 920u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 924u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_affe1c; }
    { uint32_t ea = c->r[13] + 0xc8u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_affe28;
L_affde8:;
    { uint32_t ea = c->r[13] + 0x45cu; ST32(ea, c->r[7]); }
    c->r[9] = c->r[4];
    c->r[10] = c->r[5];
    c->r[8] = c->r[1];
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4d4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x4d8u; ST32(ea, c->r[1]); }
    goto L_b00374;
L_affe1c:;
    c->v.s[8] = c->v.s[30];
    if (COND_PL) { goto L_affe2c; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[0] = v; }
L_affe28:;
    c->v.s[8] = LD32(c->r[0]);
L_affe2c:;
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    c->v.s[17] = c->v.s[31];
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_affe8c; }
    { uint32_t ea = c->r[13] + 0xccu; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_affe98;
L_affe8c:;
    c->v.s[10] = c->v.s[30];
    if (COND_PL) { goto L_affe9c; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[0] = v; }
L_affe98:;
    c->v.s[10] = LD32(c->r[0]);
L_affe9c:;
    c->v.f[14] = fabsf(c->v.f[4]);
    c->v.f[12] = fabsf(c->v.f[2]);
    c->v.s[31] = c->v.s[20];
    c->v.s[1] = c->v.s[30];
    c->v.s[28] = 0x3f800000u;
    c->v.f[14] = c->v.f[12] + c->v.f[14];
    vfp_cmp_f(c, c->v.f[14], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_affed0; }
    c->v.f[12] = c->v.f[12] / c->v.f[14];
    c->v.f[14] = c->v.f[28] - c->v.f[12];
    c->v.f[1] = c->v.f[10] * c->v.f[14];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[12]);
L_affed0:;
    { uint32_t ea = c->r[13] + 0xd4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[7] = 0xbc80625au;
    c->v.s[9] = 0x3bbfa681u;
    c->v.s[11] = 0xbc6bd4b8u;
    c->v.s[13] = 0xbd0dee73u;
    c->v.s[15] = 0x3d30f1f4u;
    c->v.s[18] = 0x3da2cff9u;
    c->v.s[24] = 0x3fc91658u;
    c->v.f[20] = c->v.f[28] - c->v.f[1];
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.s[14] = LD32(c->r[0] + 12u);
    c->v.f[3] = c->v.f[2] * c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[6] * c->v.f[14]);
    vfp_cmp_f(c, c->v.f[30], c->v.f[3]);
    c->v.s[5] = c->v.s[3] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[5] = COND_GT ? c->v.s[5] : c->v.s[3];
    vfp_cmp_f(c, c->v.f[30], c->v.f[3]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[9] = 0x3ddd0956u;
    vfp_mrs_flags(c);
    c->v.s[3] = COND_GT ? c->v.s[27] : c->v.s[28];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.s[11] = 0x3db056e5u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[5] * c->v.f[13]);
    c->v.s[13] = 0x3c687b9cu;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.s[7] = 0xbe31325eu;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[9] = 0xbe36a584u;
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[15]);
    c->v.s[15] = 0x3f183577u;
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.s[7] = 0x3f107581u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.s[11] = 0xbb8eacddu;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[9] = 0xbf256968u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[5] * c->v.f[13]);
    c->v.f[13] = c->v.f[1] * c->v.f[1];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[15]);
    c->v.s[15] = c->v.s[18];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[13] * c->v.f[11]);
    c->v.s[7] = c->v.s[9];
    c->v.f[5] = c->v.f[5] + c->v.f[28];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[13] * c->v.f[15]);
    c->v.f[5] = c->v.f[28] / c->v.f[5];
    c->v.f[15] = c->v.f[20] * c->v.f[20];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[15] * c->v.f[11]);
    c->v.s[11] = c->v.s[24];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[13] * c->v.f[7]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[15] * c->v.f[18]);
    c->v.f[1] = c->v.f[1] * c->v.f[11];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[15] * c->v.f[9]);
    c->v.f[1] = c->v.f[5] * c->v.f[1];
    c->v.f[7] = c->v.f[20] * c->v.f[24];
    c->v.s[20] = c->v.s[31];
    c->v.s[31] = c->v.s[17];
    c->v.f[1] = c->v.f[3] * c->v.f[1];
    c->v.f[3] = c->v.f[5] * c->v.f[7];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[3]);
    c->r[8] = c->v.s[6];
    c->r[10] = c->v.s[4];
    c->r[9] = c->v.s[2];
    c->r[0] = c->v.s[0];
L_b00004:;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x45cu; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_b00350; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 936u);
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0004c; }
    c->r[14] = 0xb00048u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b0004c:;
    c->v.f[18] = c->v.f[2] - c->v.f[26];
    vfp_cmp_f(c, c->v.f[18], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b00350; }
    c->v.f[0] = c->v.f[18] / c->v.f[26];
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[2] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x4c4u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x4c0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4c8u; ST32(ea, c->r[10]); }
    c->r[8] = c->r[4];
    c->r[9] = c->r[6];
    c->r[4] = c->r[13] + 0x750u;
    c->r[6] = c->r[13] + 0x7b0u;
    c->r[10] = c->r[13] + 0x7a0u;
    c->r[0] = c->r[4];
    c->r[2] = c->r[6];
    c->r[3] = c->r[10];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[26] = t0; c->v.f[27] = t1; }
    c->v.s[0] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb000a8u; f_b0abd8(c);
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[5]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[2] = c->r[6];
    c->r[3] = c->r[10];
    c->v.s[21] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[29] = LD32(c->r[14] + 860u);
    c->r[0] = c->r[4];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb000f4u; f_b0abd8(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->r[8];
    c->v.s[10] = c->r[7];
    c->v.s[12] = c->r[5];
    c->v.f[20] = c->v.f[22] * c->v.f[25];
    c->v.f[24] = c->v.f[22] * c->v.f[21];
    c->v.f[27] = c->v.f[22] * c->v.f[23];
    c->v.s[2] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[8] * c->v.f[29]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[10] * c->v.f[29]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[12] * c->v.f[29]);
    c->v.s[0] = LD32(c->r[14] + 860u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[29] = c->v.f[22] * c->v.f[29];
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[10] * c->v.f[21]);
    c->v.s[14] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[22] * c->v.f[2];
    c->v.s[3] = LD32(c->r[14] + 936u);
    c->v.f[30] = c->v.f[22] * c->v.f[6];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[23]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[12] * c->v.f[25]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[8] * c->v.f[21]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[8] * c->v.f[25]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[10] * c->v.f[25]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[12] * c->v.f[21]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[8] * c->v.f[23]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[12] * c->v.f[23]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[26] = c->v.f[22] * c->v.f[0];
    c->v.f[28] = c->v.f[22] * c->v.f[4];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[0] = c->v.f[1] * c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b001dc; }
    c->r[14] = 0xb001d8u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b001dc:;
    c->v.s[8] = 0x3f800000u;
    c->r[0] = c->v.s[29];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[6] = c->r[9];
    c->v.s[0] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    c->v.d[7] = c->v.d[4];
    { uint32_t ea = c->r[13] + 0x4d8u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[27];
    c->v.s[27] = 0xbf800000u;
    { uint32_t ea = c->r[13] + 0x4dcu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[20];
    { uint32_t ea = c->r[13] + 0x4d4u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[24];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[26];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[28];
    ST32(c->r[14] + 928u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x3b4u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[30];
    c->v.s[4] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[17];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[14] + 932u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 936u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[14] + 936u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x1u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 344u);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[16] * c->v.f[4]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4c8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x4c0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x4c4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[16] = c->v.s[31];
    c->v.s[1] = c->v.s[31];
    c->v.s[26] = c->v.s[31];
    c->v.s[29] = c->v.s[31];
    c->v.s[20] = c->v.s[19];
    c->v.s[12] = c->v.s[19];
    c->v.s[18] = c->v.s[19];
    c->v.s[23] = c->v.s[19];
    ST32(c->r[14] + 236u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = c->v.s[2];
    c->v.s[30] = c->v.s[2];
    c->v.s[10] = c->v.s[2];
    ST32(c->r[14] + 232u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 344u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 224u, c->v.s[19]);
    goto L_b00404;
L_b00350:;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x3b4u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4d4u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4dcu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x4d8u; ST32(ea, c->r[0]); }
L_b00374:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[13] + 964u);
    c->v.s[30] = LD32(c->r[13] + 904u);
    c->v.s[10] = LD32(c->r[13] + 896u);
    c->v.s[1] = LD32(c->r[13] + 956u);
    c->v.s[26] = LD32(c->r[13] + 952u);
    c->v.s[29] = LD32(c->r[13] + 920u);
    c->v.s[12] = LD32(c->r[13] + 900u);
    c->v.s[18] = LD32(c->r[13] + 892u);
    c->v.s[23] = LD32(c->r[13] + 716u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[0] = LD32(c->r[14] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 236u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 152u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 232u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 720u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 124u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 128u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[20]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[13] + 960u);
    c->v.s[0] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 224u, c->v.s[25]);
L_b00404:;
    { uint32_t ea = c->r[13] + 0x248u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b00534; }
    { uint32_t ea = c->r[13] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 664u);
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[2] = c->r[7];
    c->r[1] = c->r[4];
    c->v.s[14] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b00790; }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[3] = v; }
    (void)f_subs(c, c->r[6], 0x0u);
    c->r[2] = c->r[7];
    c->r[1] = c->r[4];
    c->r[0] = c->r[5];
    if (COND_NE) { goto L_b00790; }
    c->v.s[0] = LD32(c->r[13] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = 0x0u;
    c->r[2] = c->r[13] + 0x750u;
    c->r[3] = c->r[13] + 0x710u;
    c->v.s[28] = c->v.s[1];
    c->v.s[25] = c->v.s[10];
    ST32(c->r[14] + 324u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 848u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 292u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 540u);
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    c->v.s[2] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.s[2] = LD32(c->r[13] + 544u);
    ST32(c->r[14] + 784u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.s[0] = LD32(c->r[13] + 548u);
    c->v.s[4] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 788u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[4];
    ST32(c->r[14] + 792u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x71cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x158u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x790u;
    ST32(c->r[14] + 248u, c->v.s[14]);
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->r[14] = 0xb00500u; f_b0abd8(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 912u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 916u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 920u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 924u);
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b00550; }
    { uint32_t ea = c->r[13] + 0xc4u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b0055c;
L_b00534:;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x544u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4f8u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x410u; ST32(ea, c->r[5]); }
    c->v.s[25] = c->v.s[16];
    { uint32_t ea = c->r[13] + 0x458u; ST32(ea, c->r[0]); }
    goto L_b00bd4;
L_b00550:;
    c->v.s[8] = 0x0u;
    if (COND_LE) { goto L_b00560; }
    { uint32_t ea = c->r[13] + 0x8cu; uint32_t v = LD32(ea); c->r[0] = v; }
L_b0055c:;
    c->v.s[8] = LD32(c->r[0]);
L_b00560:;
    c->r[14] = c->r[13] + 0x400u;
    vfp_cmp_f(c, c->v.f[4], 0.0f);
    ST32(c->r[14] + 396u, c->v.s[28]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 392u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = c->v.s[16];
    ST32(c->r[14] + 304u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    vfp_mrs_flags(c);
    ST32(c->r[14] + 208u, c->v.s[20]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 164u, c->v.s[18]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 160u, c->v.s[23]);
    if (COND_PL) { goto L_b005c8; }
    { uint32_t ea = c->r[13] + 0xc0u; uint32_t v = LD32(ea); c->r[0] = v; }
    goto L_b005d4;
L_b005c8:;
    c->v.s[10] = 0x0u;
    if (COND_LE) { goto L_b005d8; }
    { uint32_t ea = c->r[13] + 0x88u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b005d4:;
    c->v.s[10] = LD32(c->r[0]);
L_b005d8:;
    c->v.f[14] = fabsf(c->v.f[4]);
    c->v.f[12] = fabsf(c->v.f[2]);
    c->v.s[1] = 0x0u;
    c->v.s[20] = c->v.s[29];
    c->v.s[18] = c->v.s[19];
    c->v.s[16] = 0x3f800000u;
    c->v.f[14] = c->v.f[12] + c->v.f[14];
    vfp_cmp_f(c, c->v.f[14], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b00610; }
    c->v.f[12] = c->v.f[12] / c->v.f[14];
    c->v.f[14] = c->v.f[16] - c->v.f[12];
    c->v.f[1] = c->v.f[10] * c->v.f[14];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[12]);
L_b00610:;
    { uint32_t ea = c->r[13] + 0xd8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = 0x0u;
    c->v.s[7] = 0xbc80625au;
    c->v.s[9] = 0x3bbfa681u;
    c->v.s[11] = 0xbc6bd4b8u;
    c->v.s[13] = 0xbd0dee73u;
    c->v.s[15] = 0x3d30f1f4u;
    c->v.s[29] = 0x3da2cff9u;
    c->v.s[23] = 0x3fc91658u;
    c->v.f[19] = c->v.f[16] - c->v.f[1];
    c->v.s[27] = 0xbf800000u;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[0] + 4u);
    c->v.s[8] = LD32(c->r[0]);
    c->v.s[12] = LD32(c->r[0] + 8u);
    c->v.s[14] = LD32(c->r[0] + 12u);
    c->v.f[3] = c->v.f[2] * c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[6] * c->v.f[14]);
    vfp_cmp_f(c, c->v.f[24], c->v.f[3]);
    c->v.s[5] = c->v.s[3] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[5] = COND_GT ? c->v.s[5] : c->v.s[3];
    vfp_cmp_f(c, c->v.f[24], c->v.f[3]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[9] = 0x3ddd0956u;
    vfp_mrs_flags(c);
    c->v.s[3] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.s[11] = 0x3db056e5u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[5] * c->v.f[13]);
    c->v.s[13] = 0x3c687b9cu;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.s[7] = 0xbe31325eu;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[9] = 0xbe36a584u;
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[15]);
    c->v.s[15] = 0x3f183577u;
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.s[7] = 0x3f107581u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[5] * c->v.f[11]);
    c->v.s[11] = 0xbb8eacddu;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[9]);
    c->v.s[9] = 0xbf256968u;
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[5] * c->v.f[13]);
    c->v.f[13] = c->v.f[1] * c->v.f[1];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[15]);
    c->v.s[15] = c->v.s[29];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[5] * c->v.f[7]);
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[13] * c->v.f[11]);
    c->v.s[7] = c->v.s[9];
    c->v.f[5] = c->v.f[5] + c->v.f[16];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[13] * c->v.f[15]);
    c->v.f[5] = c->v.f[16] / c->v.f[5];
    c->v.f[15] = c->v.f[19] * c->v.f[19];
    c->v.s[16] = c->v.s[26];
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[15] * c->v.f[11]);
    c->v.s[11] = c->v.s[23];
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[13] * c->v.f[7]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[15] * c->v.f[29]);
    c->v.s[29] = c->v.s[20];
    c->v.f[1] = c->v.f[1] * c->v.f[11];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[15] * c->v.f[9]);
    c->v.f[1] = c->v.f[5] * c->v.f[1];
    c->v.f[7] = c->v.f[19] * c->v.f[23];
    c->v.f[1] = c->v.f[3] * c->v.f[1];
    c->v.s[19] = c->v.s[18];
    c->v.f[3] = c->v.f[5] * c->v.f[7];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[4] = c->v.f[4] * c->v.f[1];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[1];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[3]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[3]);
    c->v.s[10] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 396u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 324u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 248u);
    c->r[3] = c->v.s[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_b00790:;
    (void)f_subs(c, c->r[6], 0x0u);
    { uint32_t ea = c->r[13] + 0x458u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x544u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x4f8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x410u; ST32(ea, c->r[0]); }
    if (COND_EQ) { goto L_b00bb4; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 544u);
    c->v.s[6] = LD32(c->r[13] + 548u);
    c->v.s[27] = c->v.s[20];
    c->v.s[20] = c->v.s[29];
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 540u);
    c->v.f[4] = c->v.f[0] - c->v.f[4];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    ST32(c->r[14] + 928u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.s[8] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[14] + 936u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[0]); }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b00858; }
    c->v.s[24] = c->v.s[18];
    c->v.s[18] = c->v.s[26];
    c->v.s[29] = c->v.s[10];
    c->v.s[28] = c->v.s[22];
    c->v.s[26] = c->v.s[12];
    c->v.s[25] = c->v.s[1];
    c->v.s[17] = c->v.s[14];
    c->r[14] = 0xb0083cu; f_15efddc(c);
    c->v.s[12] = c->v.s[26];
    c->v.s[26] = c->v.s[18];
    c->v.s[14] = c->v.s[17];
    c->v.s[1] = c->v.s[25];
    c->v.s[18] = c->v.s[24];
    c->v.s[10] = c->v.s[29];
    c->v.s[2] = c->v.s[0];
L_b00858:;
    c->v.s[4] = LD32(c->r[13] + 400u);
    c->v.f[29] = c->v.f[2] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[29], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b00bc0; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[13] + 720u);
    c->v.s[6] = LD32(c->r[13] + 920u);
    { uint32_t ea = c->r[13] + 0x170u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = 0x0u;
    c->r[4] = c->r[13] + 0x7b0u;
    c->r[7] = c->r[13] + 0x7a0u;
    c->v.s[28] = c->v.s[14];
    ST32(c->r[14] + 304u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = c->v.s[19];
    c->r[2] = c->r[4];
    c->r[3] = c->r[7];
    c->v.s[0] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 944u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.s[6] = LD32(c->r[13] + 716u);
    c->v.s[0] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 948u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    ST32(c->r[14] + 952u, c->v.s[0]);
    c->v.f[0] = c->v.f[29] / c->v.f[4];
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x750u;
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[2]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[3]))); c->v.f[18] = t0; c->v.f[19] = t1; }
    c->v.s[0] = LD32(c->r[5]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[14] * c->v.f[0];
    c->r[14] = 0xb00900u; f_b0abd8(c);
    { uint32_t ea = c->r[13] + 0x174u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[5]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->r[4];
    c->r[3] = c->r[7];
    c->v.s[24] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[17] = LD32(c->r[14] + 860u);
    c->r[0] = c->r[13] + 0x710u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->r[14] = 0xb00948u; f_b0abd8(c);
    { uint32_t ea = c->r[13] + 0x4d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 784u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 788u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 792u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[14] + 796u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 936u);
    c->v.f[20] = c->v.f[10] * c->v.f[26];
    c->v.f[18] = c->v.f[10] * c->v.f[17];
    c->v.f[27] = c->v.f[10] * c->v.f[24];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x528u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[21] = c->v.f[12] * c->v.f[6];
    c->v.f[23] = c->v.f[12] * c->v.f[4];
    c->v.f[16] = c->v.f[12] * c->v.f[2];
    c->v.f[25] = c->v.f[12] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[5] * c->v.f[5]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[14] * c->v.f[24]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[14] * c->v.f[17]);
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[1] * c->v.f[17]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[1] * c->v.f[30]);
    c->v.s[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[7] * c->v.f[2]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[7] * c->v.f[8]);
    c->v.s[9] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[9] * c->v.f[30]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[9] * c->v.f[24]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[9] * c->v.f[26]);
    c->v.s[11] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[14] * c->v.f[30]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[11] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[1] * c->v.f[26]);
    c->v.s[3] = c->r[0];
    c->v.f[30] = c->v.f[10] * c->v.f[30];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[9] * c->v.f[17]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[3] * c->v.f[2]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[14] * c->v.f[26]);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[7] * c->v.f[4]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[1] * c->v.f[24]);
    c->v.f[21] = c->v.f[21] - (float)(c->v.f[11] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b00a64; }
    c->r[14] = 0xb00a60u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b00a64:;
    c->v.s[8] = 0x3f800000u;
    c->r[0] = c->v.s[18];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x178u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[19] = c->v.s[31];
    c->v.s[0] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    c->v.d[7] = c->v.d[4];
    { uint32_t ea = c->r[13] + 0x4d8u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[20];
    { uint32_t ea = c->r[13] + 0x4dcu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[30];
    { uint32_t ea = c->r[13] + 0x4d4u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[27];
    c->v.s[27] = 0xbf800000u;
    c->v.f[2] = c->v.f[29] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[25];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x3acu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[23];
    ST32(c->r[14] + 928u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x3b4u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[21];
    c->v.s[4] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x3a8u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[16];
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    { uint32_t ea = c->r[13] + 0x3b0u; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 932u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 936u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[14] + 936u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[2]);
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x2u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.s[31] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 344u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[0]);
    c->v.s[20] = c->v.s[19];
    c->v.s[12] = c->v.s[19];
    c->v.s[18] = c->v.s[19];
    c->v.s[23] = c->v.s[19];
    c->v.s[25] = c->v.s[31];
    c->v.s[1] = c->v.s[31];
    c->v.s[26] = c->v.s[31];
    c->v.s[29] = c->v.s[31];
    ST32(c->r[14] + 236u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = c->v.s[2];
    c->v.s[30] = c->v.s[2];
    c->v.s[10] = c->v.s[2];
    ST32(c->r[14] + 232u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 344u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 224u, c->v.s[19]);
    goto L_b00bd4;
L_b00bb4:;
    c->v.s[14] = 0x3f800000u;
    c->v.s[25] = c->v.s[16];
    goto L_b00bd4;
L_b00bc0:;
    c->v.s[29] = c->v.s[20];
    c->v.s[20] = c->v.s[27];
    c->v.s[14] = 0x3f800000u;
    c->v.s[25] = c->v.s[16];
    c->v.s[27] = 0xbf800000u;
L_b00bd4:;
    { uint32_t ea = c->r[13] + 0x24cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2c8u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x4c8u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x4c0u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x4c4u; ST32(ea, c->r[8]); }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b00fc0; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 516u);
    c->v.s[6] = LD32(c->r[13] + 460u);
    c->r[0] = 0x0u;
    c->v.s[2] = LD32(c->r[14] + 172u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 168u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 456u);
    c->v.f[4] = c->v.f[0] - c->v.f[4];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    ST32(c->r[14] + 928u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.s[8] = LD32(c->r[14] + 176u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[14] + 936u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[0]); }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b00c94; }
    c->v.s[24] = c->v.s[26];
    c->v.s[26] = c->v.s[25];
    c->v.s[16] = c->v.s[10];
    c->v.s[28] = c->v.s[12];
    c->v.s[25] = c->v.s[1];
    c->r[14] = 0xb00c78u; f_15efddc(c);
    c->v.s[1] = c->v.s[25];
    c->v.s[25] = c->v.s[26];
    c->v.s[26] = c->v.s[24];
    c->v.s[12] = c->v.s[28];
    c->v.s[10] = c->v.s[16];
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b00c94:;
    c->v.s[4] = LD32(c->r[13] + 524u);
    c->v.f[28] = c->v.f[2] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b00fc0; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[13] + 896u);
    c->v.s[6] = LD32(c->r[13] + 952u);
    { uint32_t ea = c->r[13] + 0x150u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[10] = 0x0u;
    c->r[7] = c->r[13] + 0x7b0u;
    c->r[5] = c->r[13] + 0x7a0u;
    c->r[6] = c->r[13] + 0x750u;
    ST32(c->r[14] + 304u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->r[7];
    c->r[3] = c->r[5];
    ST32(c->r[14] + 112u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 168u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 172u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    ST32(c->r[14] + 944u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[8] + 176u);
    c->v.s[6] = LD32(c->r[13] + 892u);
    c->r[8] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    ST32(c->r[8] + 948u, c->v.s[2]);
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 952u, c->v.s[0]);
    c->v.f[0] = c->v.f[28] / c->v.f[4];
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[10]); }
    c->v.s[2] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[4]);
    c->r[0] = c->r[6];
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[14]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[15]))); c->v.f[18] = t0; c->v.f[19] = t1; }
    c->v.f[0] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb00d50u; f_b0abd8(c);
    c->v.s[0] = LD32(c->r[4]);
    c->r[8] = c->r[13] + 0x400u;
    c->r[2] = c->r[7];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[0] = c->r[6];
    c->v.s[17] = LD32(c->r[8] + 848u);
    c->r[8] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[8] + 852u);
    c->r[8] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[8] + 856u);
    c->r[8] = c->r[13] + 0x400u;
    c->v.s[31] = LD32(c->r[8] + 860u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb00d98u; f_b0abd8(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->r[7];
    c->v.s[10] = c->r[5];
    c->v.s[12] = c->r[4];
    c->v.f[24] = c->v.f[22] * c->v.f[31];
    c->v.f[25] = c->v.f[22] * c->v.f[17];
    c->v.f[27] = c->v.f[22] * c->v.f[23];
    c->v.f[29] = c->v.f[22] * c->v.f[21];
    c->v.s[2] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[8] * c->v.f[17]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[8] * c->v.f[31]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[12] * c->v.f[31]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[10] * c->v.f[31]);
    c->v.s[0] = LD32(c->r[14] + 860u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[22] * c->v.f[2];
    c->v.s[3] = LD32(c->r[14] + 936u);
    c->v.f[26] = c->v.f[22] * c->v.f[6];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[12] * c->v.f[23]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[10] * c->v.f[23]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[8] * c->v.f[21]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[12] * c->v.f[17]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[10] * c->v.f[21]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[8] * c->v.f[23]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[10] * c->v.f[17]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[12] * c->v.f[21]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.f[18] = c->v.f[22] * c->v.f[0];
    c->v.f[20] = c->v.f[22] * c->v.f[4];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[0] = c->v.f[1] * c->v.f[1];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[14]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b00e80; }
    c->r[14] = 0xb00e7cu; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b00e80:;
    c->v.s[8] = 0x3f800000u;
    c->r[0] = c->v.s[24];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->v.s[18];
    c->r[9] = c->v.s[30];
    c->v.s[0] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    c->v.d[7] = c->v.d[4];
    { uint32_t ea = c->r[13] + 0x400u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[29];
    { uint32_t ea = c->r[13] + 0x40cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[27];
    c->v.s[27] = 0xbf800000u;
    { uint32_t ea = c->r[13] + 0x408u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[25];
    c->v.f[2] = c->v.f[28] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x404u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[20];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x588u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[26];
    ST32(c->r[14] + 928u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    ST32(c->r[14] + 932u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 936u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[14] + 936u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[19] = LD32(c->r[14] + 112u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[31] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[0] | 0x4u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 344u);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[16] * c->v.f[4]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[25] = c->v.s[31];
    c->v.s[1] = c->v.s[31];
    c->v.s[26] = c->v.s[31];
    c->v.s[29] = c->v.s[31];
    c->v.s[20] = c->v.s[19];
    c->v.s[12] = c->v.s[19];
    c->v.s[18] = c->v.s[19];
    c->v.s[23] = c->v.s[19];
    ST32(c->r[14] + 236u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = c->v.s[2];
    c->v.s[30] = c->v.s[2];
    c->v.s[10] = c->v.s[2];
    ST32(c->r[14] + 232u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 344u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 224u, c->v.s[19]);
    goto L_b00fe4;
L_b00fc0:;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x404u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x408u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x40cu; ST32(ea, c->r[5]); }
    c->r[9] = c->r[7];
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x588u; ST32(ea, c->r[5]); }
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[13] + 0x400u; ST32(ea, c->r[8]); }
L_b00fe4:;
    { uint32_t ea = c->r[13] + 0x250u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x544u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b013e0; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 512u);
    c->v.s[6] = LD32(c->r[13] + 452u);
    c->v.s[2] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 180u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 448u);
    c->v.f[4] = c->v.f[0] - c->v.f[4];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    ST32(c->r[14] + 928u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.s[8] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[14] + 936u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[10]); }
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01094; }
    c->v.s[24] = c->v.s[26];
    c->v.s[26] = c->v.s[25];
    c->v.s[16] = c->v.s[10];
    c->v.s[28] = c->v.s[12];
    c->v.s[25] = c->v.s[1];
    c->r[14] = 0xb01078u; f_15efddc(c);
    c->v.s[1] = c->v.s[25];
    c->v.s[25] = c->v.s[26];
    c->v.s[26] = c->v.s[24];
    c->v.s[12] = c->v.s[28];
    c->v.s[10] = c->v.s[16];
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b01094:;
    c->v.s[4] = LD32(c->r[13] + 520u);
    c->v.f[28] = c->v.f[2] - c->v.f[4];
    vfp_cmp_f(c, c->v.f[28], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b013e0; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[13] + 904u);
    { uint32_t ea = c->r[13] + 0x14cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[13] + 956u);
    { uint32_t ea = c->r[13] + 0x198u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = c->r[13] + 0x7b0u;
    c->r[5] = c->r[13] + 0x7a0u;
    c->r[6] = c->r[13] + 0x750u;
    ST32(c->r[14] + 304u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = c->v.s[19];
    c->r[2] = c->r[7];
    c->r[3] = c->r[5];
    c->v.s[0] = LD32(c->r[14] + 180u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[0]);
    c->r[0] = c->r[6];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 944u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    c->v.s[6] = LD32(c->r[13] + 900u);
    c->v.s[0] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 948u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    ST32(c->r[14] + 952u, c->v.s[0]);
    c->v.f[0] = c->v.f[28] / c->v.f[4];
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[10]); }
    { float t0 = nftz(vmin_f(nftz(c->v.f[0]), nftz(c->v.f[14]))); float t1 = nftz(vmin_f(nftz(c->v.f[1]), nftz(c->v.f[15]))); c->v.f[18] = t0; c->v.f[19] = t1; }
    c->v.s[0] = LD32(c->r[4]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb0113cu; f_b0abd8(c);
    { uint32_t ea = c->r[13] + 0x19cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->r[7];
    c->r[3] = c->r[5];
    c->v.s[26] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[17] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[21] = LD32(c->r[14] + 860u);
    c->r[0] = c->r[6];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb01184u; f_b0abd8(c);
    { uint32_t ea = c->r[13] + 0x400u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = c->r[8];
    c->v.s[9] = c->r[9];
    c->v.s[2] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x404u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[14] + 860u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[5] * c->v.f[2];
    c->v.s[3] = LD32(c->r[14] + 936u);
    c->v.f[23] = c->v.f[5] * c->v.f[6];
    c->v.f[20] = c->v.f[10] * c->v.f[30];
    c->v.f[18] = c->v.f[10] * c->v.f[21];
    c->v.f[29] = c->v.f[10] * c->v.f[26];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x40cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[25] = c->v.f[5] * c->v.f[4];
    c->v.f[27] = c->v.f[5] * c->v.f[8];
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[9] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[9] * c->v.f[8]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[12] * c->v.f[26]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[12] * c->v.f[21]);
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[1] * c->v.f[1]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[14] * c->v.f[21]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[14] * c->v.f[17]);
    c->v.s[7] = c->r[0];
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[7] * c->v.f[26]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[7] * c->v.f[17]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[7] * c->v.f[30]);
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[1] * c->v.f[8]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[12] * c->v.f[17]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[14] * c->v.f[30]);
    c->v.s[11] = c->r[0];
    c->v.f[17] = c->v.f[10] * c->v.f[17];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[7] * c->v.f[21]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[11] * c->v.f[8]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[11] * c->v.f[6]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[11] * c->v.f[4]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[12] * c->v.f[30]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[9] * c->v.f[4]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[9] * c->v.f[6]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[14] * c->v.f[26]);
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01298; }
    c->r[14] = 0xb01294u; f_15efddc(c);
    c->v.s[2] = c->v.s[0];
L_b01298:;
    c->v.s[8] = 0x3f800000u;
    c->r[0] = c->v.s[18];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[19] = c->v.s[31];
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[8] = c->v.s[27];
    c->r[9] = c->v.s[24];
    c->v.s[27] = 0xbf800000u;
    c->v.s[0] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[8] / c->v.f[2];
    c->v.d[7] = c->v.d[4];
    { uint32_t ea = c->r[13] + 0x400u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[20];
    { uint32_t ea = c->r[13] + 0x40cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[17];
    { uint32_t ea = c->r[13] + 0x408u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[29];
    c->v.f[2] = c->v.f[28] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x404u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[25];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x588u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[23];
    ST32(c->r[14] + 928u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[2] * c->v.f[4];
    ST32(c->r[14] + 932u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 936u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    ST32(c->r[14] + 936u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[0]);
    c->v.s[31] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x8u;
    c->v.f[2] = c->v.f[2] * c->v.f[6];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 344u);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[16] * c->v.f[4]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x544u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.s[25] = c->v.s[31];
    c->v.s[1] = c->v.s[31];
    c->v.s[26] = c->v.s[31];
    c->v.s[29] = c->v.s[31];
    c->v.s[20] = c->v.s[19];
    c->v.s[12] = c->v.s[19];
    c->v.s[18] = c->v.s[19];
    c->v.s[23] = c->v.s[19];
    ST32(c->r[14] + 236u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = c->v.s[2];
    c->v.s[30] = c->v.s[2];
    c->v.s[10] = c->v.s[2];
    ST32(c->r[14] + 232u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 344u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 224u, c->v.s[19]);
L_b013e0:;
    { uint32_t ea = c->r[13] + 0x254u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b01550; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 504u);
    c->v.s[4] = LD32(c->r[13] + 964u);
    c->v.s[6] = LD32(c->r[13] + 508u);
    c->v.s[8] = LD32(c->r[13] + 960u);
    c->v.s[2] = LD32(c->r[14] + 124u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.f[2] = c->v.f[0] - c->v.f[2];
    c->v.s[0] = LD32(c->r[13] + 500u);
    c->v.f[4] = c->v.f[0] - c->v.f[4];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    ST32(c->r[14] + 928u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 936u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[10]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01484; }
    c->v.s[24] = c->v.s[26];
    c->v.s[26] = c->v.s[25];
    c->v.s[16] = c->v.s[10];
    c->v.s[28] = c->v.s[12];
    c->v.s[25] = c->v.s[1];
    c->r[14] = 0xb01468u; f_15efddc(c);
    c->v.s[1] = c->v.s[25];
    c->v.s[25] = c->v.s[26];
    c->v.s[26] = c->v.s[24];
    c->v.s[12] = c->v.s[28];
    c->v.s[10] = c->v.s[16];
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b01484:;
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_LE) { goto L_b01550; }
    { uint32_t ea = c->r[13] + 0x23cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 936u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x148u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 344u);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[8] * c->v.f[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[25] = c->v.s[31];
    ST32(c->r[13] + 956u, c->v.s[31]);
    ST32(c->r[13] + 952u, c->v.s[31]);
    ST32(c->r[13] + 920u, c->v.s[31]);
    ST32(c->r[13] + 960u, c->v.s[19]);
    ST32(c->r[13] + 900u, c->v.s[19]);
    ST32(c->r[13] + 892u, c->v.s[19]);
    ST32(c->r[13] + 716u, c->v.s[19]);
    ST32(c->r[14] + 236u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 964u, c->v.s[2]);
    ST32(c->r[13] + 904u, c->v.s[2]);
    ST32(c->r[13] + 896u, c->v.s[2]);
    ST32(c->r[13] + 720u, c->v.s[2]);
    ST32(c->r[14] + 232u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 344u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 124u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 228u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 224u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 112u, c->v.s[19]);
    goto L_b0159c;
L_b01550:;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 964u, c->v.s[21]);
    ST32(c->r[13] + 904u, c->v.s[30]);
    ST32(c->r[13] + 896u, c->v.s[10]);
    ST32(c->r[13] + 956u, c->v.s[1]);
    ST32(c->r[13] + 952u, c->v.s[26]);
    ST32(c->r[13] + 920u, c->v.s[29]);
    ST32(c->r[13] + 960u, c->v.s[20]);
    ST32(c->r[13] + 900u, c->v.s[12]);
    ST32(c->r[13] + 892u, c->v.s[18]);
    ST32(c->r[13] + 716u, c->v.s[23]);
    ST32(c->r[14] + 112u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 720u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 124u, c->v.s[0]);
L_b0159c:;
    { uint32_t ea = c->r[13] + 0x258u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[19] = LD32(c->r[13] + 608u);
    c->v.s[21] = 0x0u;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x468u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x464u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x46cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x460u; ST32(ea, c->r[10]); }
    (void)f_subs(c, c->r[0], 0x0u);
    c->r[0] = c->r[5];
    c->r[5] = c->r[7];
    c->r[7] = c->r[4];
    c->r[4] = c->r[0];
    if (COND_EQ) { goto L_b01b64; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[13] + 488u);
    { uint32_t ea = c->r[13] + 0x1a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = LD32(c->r[13] + 476u);
    c->r[1] = 0x0u;
    c->v.s[8] = LD32(c->r[14] + 300u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 128u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x1acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[0] - c->v.f[8];
    c->v.s[0] = LD32(c->r[13] + 492u);
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.s[8] = LD32(c->r[13] + 480u);
    ST32(c->r[14] + 944u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[0] - c->v.f[10];
    c->v.s[0] = LD32(c->r[13] + 496u);
    c->v.f[8] = c->v.f[8] - c->v.f[10];
    c->v.s[12] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 948u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[12];
    ST32(c->r[14] + 952u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[1]); }
    ST32(c->r[14] + 928u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 484u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[12];
    ST32(c->r[14] + 936u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b01a04; }
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 12u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 28u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 44u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[14] + 60u);
    c->v.f[8] = c->v.f[8] * c->v.f[4];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[0]);
    c->v.f[6] = c->v.f[12] + c->v.f[8];
    c->v.s[8] = c->v.s[21];
    vfp_cmp_f(c, c->v.f[6], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b016b8; }
    c->v.f[8] = c->v.f[14] / c->v.f[6];
L_b016b8:;
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 8u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[14] + 16u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[14] = LD32(c->r[14] + 24u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[12] = c->v.f[4] * c->v.f[12];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] * c->v.f[14];
    c->v.s[14] = LD32(c->r[14] + 32u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[1] = LD32(c->r[14] + 40u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[3] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 972u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.s[5] = LD32(c->r[14] + 988u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[0] * c->v.f[1]);
    c->v.s[7] = LD32(c->r[14] + 1004u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 1020u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 52u);
    c->v.f[0] = c->v.f[3] + c->v.f[12];
    c->v.f[12] = c->v.f[6] * c->v.f[5];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    c->v.f[4] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[8] * c->v.f[2];
    c->v.s[2] = c->v.s[21];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[7] * c->v.f[0]);
    c->v.f[8] = c->v.f[9] + c->v.f[12];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b01770; }
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] / c->v.f[8];
L_b01770:;
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->v.s[8] = LD32(c->r[14] + 960u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 964u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 968u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 976u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 980u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 984u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 992u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[14] + 996u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[6] * c->v.f[1];
    c->v.f[6] = c->v.f[6] * c->v.f[3];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.s[3] = LD32(c->r[14] + 1008u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 1000u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 1012u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[5]);
    c->v.s[4] = LD32(c->r[14] + 1016u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[8] = c->v.f[3] + c->v.f[14];
    c->v.f[0] = c->v.f[7] + c->v.f[1];
    c->v.f[4] = c->v.f[4] + c->v.f[6];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    ST32(c->r[14] + 944u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 948u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 952u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x7bcu; ST32(ea, c->r[1]); }
    c->v.s[4] = LD32(c->r[14] + 928u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 932u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 936u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[0] = LD32(c->r[14] + 12u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 28u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 44u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[14] + 60u);
    c->v.f[8] = c->v.f[8] * c->v.f[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[0] = c->v.f[12] + c->v.f[8];
    c->v.s[8] = c->v.s[21];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b0188c; }
    c->v.s[8] = 0x3f800000u;
    c->v.f[8] = c->v.f[8] / c->v.f[0];
L_b0188c:;
    c->r[14] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13] + 0x7acu; ST32(ea, c->r[1]); }
    c->v.s[10] = LD32(c->r[14]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[14] + 8u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[14] = LD32(c->r[14] + 16u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[1] = LD32(c->r[14] + 24u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[0] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[3] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[5] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[7] = LD32(c->r[14] + 40u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[14] = c->v.f[6] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[9] = LD32(c->r[14] + 32u);
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 972u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 988u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 1004u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.s[1] = LD32(c->r[14] + 1020u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[9]);
    c->v.f[10] = c->v.f[0] * c->v.f[10];
    c->v.f[2] = c->v.f[5] + c->v.f[14];
    c->v.f[14] = c->v.f[3] + c->v.f[6];
    c->v.f[6] = c->v.f[8] * c->v.f[2];
    c->v.f[2] = c->v.f[8] * c->v.f[14];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[4] * c->v.f[6]);
    c->v.s[4] = c->v.s[21];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[8] = c->v.f[1] + c->v.f[10];
    vfp_cmp_f(c, c->v.f[8], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b01948; }
    c->v.s[4] = 0x3f800000u;
    c->v.f[4] = c->v.f[4] / c->v.f[8];
L_b01948:;
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x18cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = LD32(c->r[14] + 960u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 964u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 968u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 976u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 980u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 984u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 992u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[0] * c->v.f[14];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[14] + 996u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[0] * c->v.f[1];
    c->v.f[0] = c->v.f[0] * c->v.f[3];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[12]);
    c->v.s[3] = LD32(c->r[14] + 1008u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 1000u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 1012u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.s[6] = LD32(c->r[14] + 1016u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[8] = c->v.f[3] + c->v.f[14];
    c->v.f[2] = c->v.f[7] + c->v.f[1];
    c->v.f[0] = c->v.f[6] + c->v.f[0];
    c->v.f[8] = c->v.f[4] * c->v.f[8];
    c->v.f[2] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[0];
    ST32(c->r[14] + 928u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 932u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 936u, c->v.s[0]);
    goto L_b01a10;
L_b01a04:;
    { uint32_t ea = c->r[13] + 0xd0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x7b4u; ST32(ea, c->r[1]); }
L_b01a10:;
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = c->r[13] + 0x7b0u;
    c->r[4] = c->r[13] + 0x7a0u;
    c->r[5] = c->r[13] + 0x750u;
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[5];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb01a3cu; f_b0abd8(c);
    { uint32_t ea = c->r[13] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[10] = c->r[13] + 0x400u;
    c->r[2] = c->r[6];
    c->r[3] = c->r[4];
    c->v.s[18] = LD32(c->r[10] + 848u);
    c->r[10] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[10] + 852u);
    c->r[10] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[10] + 856u);
    c->r[10] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[26] = LD32(c->r[10] + 860u);
    c->r[0] = c->r[5];
    c->v.f[0] = c->v.f[16] * c->v.f[0];
    c->r[14] = 0xb01a78u; f_b0abd8(c);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[7];
    c->v.f[3] = c->v.f[22] * c->v.f[24];
    c->v.f[10] = c->v.f[22] * c->v.f[26];
    c->v.f[14] = c->v.f[22] * c->v.f[20];
    c->v.f[5] = c->v.f[22] * c->v.f[18];
    { uint32_t ea = c->r[13] + 0x544u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[0] = LD32(c->r[14] + 848u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 852u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 856u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[26]);
    c->v.s[6] = LD32(c->r[14] + 860u);
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[13] = c->v.f[22] * c->v.f[0];
    c->v.f[11] = c->v.f[22] * c->v.f[2];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[26]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[20]);
    c->v.s[12] = c->r[0];
    c->v.f[9] = c->v.f[22] * c->v.f[4];
    c->v.f[7] = c->v.f[22] * c->v.f[6];
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[26]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[1] * c->v.f[24]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[12] * c->v.f[24]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[12] * c->v.f[18]);
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[1] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[1] * c->v.f[18]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[20]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[1] * c->v.f[20]);
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[11] = c->v.f[11] - (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[9] = c->v.f[9] - (float)(c->v.f[8] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[24]);
    c->r[7] = c->v.s[3];
    c->r[10] = c->v.s[10];
    c->r[5] = c->v.s[5];
    c->r[0] = c->v.s[7];
    c->r[4] = c->v.s[14];
    c->v.s[14] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x460u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[9];
    { uint32_t ea = c->r[13] + 0x46cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[11];
    { uint32_t ea = c->r[13] + 0x464u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[13];
    { uint32_t ea = c->r[13] + 0x468u; ST32(ea, c->r[0]); }
L_b01b64:;
    { uint32_t ea = c->r[13] + 0x25cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[0]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_GE) { goto L_b01b84; }
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 128u, c->v.s[25]);
    goto L_b01bd8;
L_b01b84:;
    c->v.s[2] = LD32(c->r[13] + 404u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 128u, c->v.s[25]);
    c->v.f[0] = c->v.f[2] + c->v.f[0];
    vfp_cmp_f(c, c->v.f[31], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_b01bd8; }
    { uint32_t ea = c->r[13] + 0x284u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[31] = c->v.s[0];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[1]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] | 0x10u;
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 124u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 956u, c->v.s[0]);
    ST32(c->r[13] + 952u, c->v.s[0]);
    ST32(c->r[13] + 920u, c->v.s[0]);
    ST32(c->r[14] + 128u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 292u, c->v.s[0]);
L_b01bd8:;
    c->v.s[0] = LD32(c->r[13] + 668u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 304u, c->v.s[31]);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b01d70; }
    { uint32_t ea = c->r[13] + 0x4c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = c->r[0];
    { uint32_t ea = c->r[13] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.s[16] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.s[26] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[17] = c->r[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01c3c; }
    c->r[14] = 0xb01c34u; f_15efddc(c);
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b01c3c:;
    c->v.f[2] = c->v.f[14] / c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[29] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[0] - c->v.f[29];
    c->v.s[0] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[0] - c->v.f[25];
    c->v.s[0] = LD32(c->r[14] + 312u);
    c->v.f[20] = c->v.f[18] * c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
    c->v.f[18] = c->v.f[26] * c->v.f[2];
    c->v.f[28] = c->v.f[0] - c->v.f[31];
    c->v.f[26] = c->v.f[17] * c->v.f[2];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01cc0; }
    c->r[14] = 0xb01cb4u; f_15efddc(c);
    { uint32_t ea = c->r[13] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b01cc0:;
    c->v.f[0] = c->v.f[14] / c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[6] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.s[8] = c->v.s[4];
    c->v.s[10] = c->v.s[6];
    c->v.s[12] = c->v.s[0];
    c->v.s[14] = c->v.s[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[30] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[2] = c->v.f[18] * c->v.f[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[4] = c->v.f[20] * c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[14]);
    c->v.f[0] = c->v.f[16] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[12]);
    c->v.f[2] = c->v.f[29] + c->v.f[2];
    ST32(c->r[14] + 316u, c->v.s[2]);
    c->v.f[2] = c->v.f[25] + c->v.f[4];
    c->v.f[0] = c->v.f[31] + c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 320u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    goto L_b01d78;
L_b01d70:;
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
L_b01d78:;
    c->v.s[6] = LD32(c->r[14] + 288u);
    c->v.s[0] = LD32(c->r[13] + 664u);
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b01f40; }
    c->v.s[18] = c->r[0];
    { uint32_t ea = c->r[13] + 0x410u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->r[6];
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.s[26] = c->r[0];
    { uint32_t ea = c->r[13] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[17] = c->r[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01dd4; }
    c->r[14] = 0xb01dc8u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = c->v.s[0];
    c->v.s[6] = LD32(c->r[14] + 288u);
L_b01dd4:;
    c->v.s[4] = 0x3f800000u;
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x4d4u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[29] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[4] / c->v.f[2];
    c->v.f[24] = c->v.f[0] - c->v.f[29];
    c->v.s[0] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = LD32(c->r[14] + 132u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[0] - c->v.f[6];
    c->v.s[0] = LD32(c->r[14] + 336u);
    c->v.f[28] = c->v.f[0] - c->v.f[31];
    c->v.f[20] = c->v.f[18] * c->v.f[2];
    c->v.f[16] = c->v.f[16] * c->v.f[2];
    c->v.f[18] = c->v.f[26] * c->v.f[2];
    c->v.f[26] = c->v.f[17] * c->v.f[2];
    c->v.s[17] = c->v.s[6];
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b01e54; }
    c->r[14] = 0xb01e4cu; f_15efddc(c);
    c->v.s[4] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b01e54:;
    c->v.f[0] = c->v.f[4] / c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[6] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.s[8] = c->v.s[4];
    c->v.s[10] = c->v.s[6];
    c->v.s[12] = c->v.s[0];
    c->v.s[14] = c->v.s[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[28] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[30] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[28] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.f[2] = c->v.f[18] * c->v.f[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[4] = c->v.f[20] * c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[26] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[20] * c->v.f[14]);
    c->v.f[0] = c->v.f[16] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[12]);
    c->v.f[2] = c->v.f[29] + c->v.f[2];
    ST32(c->r[14] + 328u, c->v.s[2]);
    c->v.f[2] = c->v.f[17] + c->v.f[4];
    c->v.f[0] = c->v.f[31] + c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 336u, c->v.s[0]);
    goto L_b01f44;
L_b01f40:;
    { uint32_t ea = c->r[13] + 0x4d4u; uint32_t v = LD32(ea); c->r[6] = v; }
L_b01f44:;
    { uint32_t ea = c->r[13] + 0x4dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[8];
    c->v.s[4] = c->r[6];
    c->v.s[3] = c->r[9];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[4] * c->v.f[0];
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x528u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[2] * c->v.f[0];
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[5] = c->v.f[6] * c->v.f[0];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[6] * c->v.f[3]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[3]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[3]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[2] * c->v.f[14]);
    c->v.s[8] = c->r[10];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[4] = c->r[7];
    c->v.s[6] = c->r[5];
    (void)f_subs(c, c->r[0], 0x0u);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[2] * c->v.f[3]);
    c->v.s[2] = c->r[4];
    c->v.f[24] = c->v.f[12] * c->v.f[8];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[26] = c->v.f[1] * c->v.f[8];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[18] = c->v.f[5] * c->v.f[8];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[5] * c->v.f[2]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[5] * c->v.f[4]);
    c->v.f[25] = c->v.f[0] * c->v.f[8];
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[5] * c->v.f[6]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[1] * c->v.f[2]);
    ST32(c->r[14] + 392u, c->v.s[24]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[12] * c->v.f[2]);
    ST32(c->r[14] + 380u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[18]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 396u, c->v.s[25]);
    if (COND_EQ) { goto L_b02a50; }
    vfp_cmp_f(c, c->v.f[19], 0.0f);
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->v.s[9] = LD32(c->r[13] + 532u);
    c->v.s[28] = 0x3bbfa681u;
    c->v.s[30] = 0xbc80625au;
    c->v.s[19] = 0xbc6bd4b8u;
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[4] = v; }
    vfp_mrs_flags(c);
    c->r[9] = c->r[6];
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[4]); }
    if (COND_EQ) { goto L_b021f0; }
    { uint32_t ea = c->r[13] + 0x17cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->v.s[30];
    c->v.s[1] = 0x3db056e5u;
    c->v.s[3] = 0xbd0dee73u;
    c->v.s[14] = 0x3ddd0956u;
    c->v.s[5] = 0x3d30f1f4u;
    c->v.s[11] = LD32(c->r[13] + 388u);
    c->v.s[7] = 0x3fc91658u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 12u);
    c->v.f[8] = c->v.f[26] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.s[10] = c->v.s[8] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[28]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3c687b9cu;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[19]);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0xbe31325eu;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbe36a584u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = 0x3f183577u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[1]);
    c->v.s[1] = 0xbb8eacddu;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3da2cff9u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0x3f107581u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbf256968u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = c->v.s[3];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[11] * c->v.f[1]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + c->v.f[16];
    c->v.s[12] = c->v.s[14];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[11] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[13] + 384u);
    c->v.f[10] = c->v.f[16] / c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[1] = c->v.s[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[11] * c->v.f[12]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[12] = c->v.f[9] * c->v.f[1];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[13] + 392u);
    c->v.f[12] = c->v.f[10] * c->v.f[12];
    c->v.f[14] = c->v.f[14] * c->v.f[7];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[12] = c->v.f[25] * c->v.f[8];
    c->v.f[14] = c->v.f[24] * c->v.f[8];
    c->v.f[1] = c->v.f[26] * c->v.f[8];
    c->v.f[8] = c->v.f[18] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[0] = c->r[7];
    c->v.s[10] = c->r[6];
    c->v.s[4] = c->r[5];
    c->v.f[2] = c->v.f[22] * c->v.f[12];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[6] = c->v.f[22] * c->v.f[14];
    c->v.f[3] = c->v.f[22] * c->v.f[1];
    c->v.f[5] = c->v.f[22] * c->v.f[8];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[1]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[0] * c->v.f[1]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[10] * c->v.f[14]);
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[5];
    c->r[10] = c->v.s[6];
    c->r[9] = c->v.s[3];
    { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[0]); }
L_b021f0:;
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x448u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x44cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x450u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x444u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[8], 0x1u);
    if (COND_NE) { goto L_b02394; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->v.s[30];
    c->v.s[1] = 0x3db056e5u;
    c->v.s[3] = 0xbd0dee73u;
    c->v.s[14] = 0x3ddd0956u;
    c->v.s[5] = 0x3d30f1f4u;
    c->v.s[9] = LD32(c->r[13] + 264u);
    c->v.s[7] = 0x3fc91658u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 12u);
    c->v.f[8] = c->v.f[26] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.s[10] = c->v.s[8] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[28]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3c687b9cu;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[19]);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0xbe31325eu;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbe36a584u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = 0x3f183577u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[1]);
    c->v.s[1] = 0xbb8eacddu;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3da2cff9u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0x3f107581u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbf256968u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = c->v.s[3];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + c->v.f[16];
    c->v.s[12] = c->v.s[14];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[13] + 244u);
    c->v.f[10] = c->v.f[16] / c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[1] = c->v.s[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[13] + 364u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[13] + 288u);
    c->v.f[12] = c->v.f[10] * c->v.f[12];
    c->v.f[14] = c->v.f[14] * c->v.f[7];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[12] = c->v.f[25] * c->v.f[8];
    c->v.f[14] = c->v.f[24] * c->v.f[8];
    c->v.f[1] = c->v.f[26] * c->v.f[8];
    c->v.f[8] = c->v.f[18] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[0] = c->r[7];
    c->v.s[10] = c->r[6];
    c->v.s[4] = c->r[5];
    c->v.f[2] = c->v.f[22] * c->v.f[12];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[6] = c->v.f[22] * c->v.f[14];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[3] = c->v.f[22] * c->v.f[1];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[0] * c->v.f[1]);
    c->r[0] = c->v.s[2];
    c->v.f[5] = c->v.f[22] * c->v.f[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x444u; ST32(ea, c->r[0]); }
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[8]);
    c->r[0] = c->v.s[6];
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[10] * c->v.f[14]);
    { uint32_t ea = c->r[13] + 0x450u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[3];
    { uint32_t ea = c->r[13] + 0x44cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[5];
    { uint32_t ea = c->r[13] + 0x448u; ST32(ea, c->r[0]); }
L_b02394:;
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x438u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x43cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x440u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x434u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b02570; }
    { uint32_t ea = c->r[13] + 0xecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->v.s[30];
    c->v.s[1] = 0x3db056e5u;
    c->v.s[3] = 0xbd0dee73u;
    c->v.s[14] = 0x3ddd0956u;
    c->v.s[5] = 0x3d30f1f4u;
    c->v.s[9] = LD32(c->r[13] + 268u);
    c->v.s[7] = 0x3fc91658u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 12u);
    c->v.f[8] = c->v.f[26] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.s[10] = c->v.s[8] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[28]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3c687b9cu;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[19]);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0xbe31325eu;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbe36a584u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = 0x3f183577u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[1]);
    c->v.s[1] = 0xbb8eacddu;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3da2cff9u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0x3f107581u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbf256968u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = c->v.s[3];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + c->v.f[16];
    c->v.s[12] = c->v.s[14];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[13] + 248u);
    c->v.f[10] = c->v.f[16] / c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[1] = c->v.s[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[13] + 360u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[13] + 296u);
    c->v.f[12] = c->v.f[10] * c->v.f[12];
    c->v.f[14] = c->v.f[14] * c->v.f[7];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[12] = c->v.f[25] * c->v.f[8];
    c->v.f[14] = c->v.f[24] * c->v.f[8];
    c->v.f[1] = c->v.f[26] * c->v.f[8];
    c->v.f[8] = c->v.f[18] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[0] = c->r[7];
    c->v.s[10] = c->r[6];
    c->v.s[4] = c->r[5];
    c->v.f[2] = c->v.f[22] * c->v.f[12];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[6] = c->v.f[22] * c->v.f[14];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[3] = c->v.f[22] * c->v.f[1];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[0] * c->v.f[1]);
    c->r[0] = c->v.s[2];
    c->v.f[5] = c->v.f[22] * c->v.f[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x434u; ST32(ea, c->r[0]); }
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[8]);
    c->r[0] = c->v.s[6];
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[10] * c->v.f[14]);
    { uint32_t ea = c->r[13] + 0x440u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[3];
    { uint32_t ea = c->r[13] + 0x43cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[5];
    { uint32_t ea = c->r[13] + 0x438u; ST32(ea, c->r[0]); }
    goto L_b02570;
L_b02570:;
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x428u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x42cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x430u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x424u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b02714; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->v.s[30];
    c->v.s[1] = 0x3db056e5u;
    c->v.s[3] = 0xbd0dee73u;
    c->v.s[14] = 0x3ddd0956u;
    c->v.s[5] = 0x3d30f1f4u;
    c->v.s[9] = LD32(c->r[13] + 272u);
    c->v.s[7] = 0x3fc91658u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 12u);
    c->v.f[8] = c->v.f[26] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.s[10] = c->v.s[8] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[28]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3c687b9cu;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[19]);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0xbe31325eu;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbe36a584u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = 0x3f183577u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[1]);
    c->v.s[1] = 0xbb8eacddu;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3da2cff9u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0x3f107581u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbf256968u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = c->v.s[3];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + c->v.f[16];
    c->v.s[12] = c->v.s[14];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[13] + 252u);
    c->v.f[10] = c->v.f[16] / c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[1] = c->v.s[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[13] + 356u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[13] + 304u);
    c->v.f[12] = c->v.f[10] * c->v.f[12];
    c->v.f[14] = c->v.f[14] * c->v.f[7];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[12] = c->v.f[25] * c->v.f[8];
    c->v.f[14] = c->v.f[24] * c->v.f[8];
    c->v.f[1] = c->v.f[26] * c->v.f[8];
    c->v.f[8] = c->v.f[18] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[0] = c->r[7];
    c->v.s[10] = c->r[6];
    c->v.s[4] = c->r[5];
    c->v.f[2] = c->v.f[22] * c->v.f[12];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[6] = c->v.f[22] * c->v.f[14];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[3] = c->v.f[22] * c->v.f[1];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[0] * c->v.f[1]);
    c->r[0] = c->v.s[2];
    c->v.f[5] = c->v.f[22] * c->v.f[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x424u; ST32(ea, c->r[0]); }
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[8]);
    c->r[0] = c->v.s[6];
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[10] * c->v.f[14]);
    { uint32_t ea = c->r[13] + 0x430u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[3];
    { uint32_t ea = c->r[13] + 0x42cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[5];
    { uint32_t ea = c->r[13] + 0x428u; ST32(ea, c->r[0]); }
L_b02714:;
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x418u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x41cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x420u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x414u; ST32(ea, c->r[4]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b028b8; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->v.s[30];
    c->v.s[1] = 0x3db056e5u;
    c->v.s[3] = 0xbd0dee73u;
    c->v.s[14] = 0x3ddd0956u;
    c->v.s[5] = 0x3d30f1f4u;
    c->v.s[9] = LD32(c->r[13] + 276u);
    c->v.s[7] = 0x3fc91658u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[6] = LD32(c->r[0] + 12u);
    c->v.f[8] = c->v.f[26] * c->v.f[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[6]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.s[10] = c->v.s[8] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[10] = COND_GT ? c->v.s[10] : c->v.s[8];
    vfp_cmp_f(c, c->v.f[21], c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[28]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3c687b9cu;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[19]);
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0xbe31325eu;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbe36a584u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = 0x3f183577u;
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[1]);
    c->v.s[1] = 0xbb8eacddu;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = 0x3da2cff9u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.s[12] = 0x3f107581u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[10] * c->v.f[14]);
    c->v.s[14] = 0xbf256968u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[5]);
    c->v.s[5] = c->v.s[3];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[9] * c->v.f[1]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + c->v.f[16];
    c->v.s[12] = c->v.s[14];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[9] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[13] + 256u);
    c->v.f[10] = c->v.f[16] / c->v.f[10];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[5] * c->v.f[1]);
    c->v.s[1] = c->v.s[7];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[9] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[13] + 352u);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[5] * c->v.f[3]);
    c->v.f[12] = c->v.f[12] * c->v.f[1];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[5] * c->v.f[14]);
    c->v.s[14] = LD32(c->r[13] + 312u);
    c->v.f[12] = c->v.f[10] * c->v.f[12];
    c->v.f[14] = c->v.f[14] * c->v.f[7];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[12] = c->v.f[25] * c->v.f[8];
    c->v.f[14] = c->v.f[24] * c->v.f[8];
    c->v.f[1] = c->v.f[26] * c->v.f[8];
    c->v.f[8] = c->v.f[18] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[6] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.s[0] = c->r[7];
    c->v.s[10] = c->r[6];
    c->v.s[4] = c->r[5];
    c->v.f[2] = c->v.f[22] * c->v.f[12];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[1]);
    c->v.f[6] = c->v.f[22] * c->v.f[14];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[3] = c->v.f[22] * c->v.f[1];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[10] * c->v.f[12]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[0] * c->v.f[1]);
    c->r[0] = c->v.s[2];
    c->v.f[5] = c->v.f[22] * c->v.f[8];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x414u; ST32(ea, c->r[0]); }
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[8]);
    c->r[0] = c->v.s[6];
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[10] * c->v.f[14]);
    { uint32_t ea = c->r[13] + 0x420u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[3];
    { uint32_t ea = c->r[13] + 0x41cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[5];
    { uint32_t ea = c->r[13] + 0x418u; ST32(ea, c->r[0]); }
L_b028b8:;
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_b037d4; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->v.s[30];
    c->v.s[14] = 0x3db056e5u;
    c->v.s[1] = 0xbd0dee73u;
    c->v.s[12] = 0x3ddd0956u;
    c->v.s[3] = 0x3d30f1f4u;
    c->v.s[7] = LD32(c->r[13] + 280u);
    c->v.s[5] = 0x3fc91658u;
    c->v.s[16] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[9] = LD32(c->r[0] + 12u);
    c->v.f[6] = c->v.f[26] * c->v.f[2];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[25] * c->v.f[9]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[6]);
    c->v.s[8] = c->v.s[6] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[8] = COND_GT ? c->v.s[8] : c->v.s[6];
    vfp_cmp_f(c, c->v.f[21], c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[28]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.s[1] = 0x3c687b9cu;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[19]);
    vfp_mrs_flags(c);
    c->v.s[6] = COND_GT ? c->v.s[27] : c->v.s[16];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.s[10] = 0xbe31325eu;
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[12] = 0xbe36a584u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[3]);
    c->v.s[3] = 0x3f183577u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[14]);
    c->v.s[14] = 0xbb8eacddu;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.s[1] = 0x3da2cff9u;
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.s[10] = 0x3f107581u;
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[12]);
    c->v.s[12] = 0xbf256968u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[8] * c->v.f[3]);
    c->v.s[3] = c->v.s[1];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[7] * c->v.f[14]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + c->v.f[16];
    c->v.s[10] = c->v.s[12];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[7] * c->v.f[3]);
    c->v.s[3] = LD32(c->r[13] + 260u);
    c->v.f[8] = c->v.f[16] / c->v.f[8];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[3] * c->v.f[14]);
    c->v.s[14] = c->v.s[5];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[7] * c->v.f[10]);
    c->v.s[10] = LD32(c->r[13] + 348u);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[1] = c->r[6];
    c->v.f[10] = c->v.f[10] * c->v.f[14];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[3] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[13] + 320u);
    c->v.f[10] = c->v.f[8] * c->v.f[10];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[12] = c->v.f[12] * c->v.f[5];
    c->v.f[10] = c->v.f[25] * c->v.f[6];
    c->v.f[14] = c->v.f[26] * c->v.f[6];
    c->v.f[8] = c->v.f[8] * c->v.f[12];
    c->v.f[12] = c->v.f[24] * c->v.f[6];
    c->v.f[6] = c->v.f[18] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[9] * c->v.f[8]);
    c->v.s[0] = c->r[7];
    c->v.s[4] = c->r[5];
    c->v.f[2] = c->v.f[22] * c->v.f[10];
    c->v.f[8] = c->v.f[22] * c->v.f[12];
    c->v.f[3] = c->v.f[22] * c->v.f[14];
    c->v.f[5] = c->v.f[22] * c->v.f[6];
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[0] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[4] * c->v.f[10]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[1] * c->v.f[10]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[1] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[6]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[12]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[0] * c->v.f[14]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[4] * c->v.f[12]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[6]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[1] * c->v.f[12]);
    c->v.d[7] = c->v.d[8];
    c->r[4] = c->v.s[2];
    c->r[5] = c->v.s[8];
    c->r[6] = c->v.s[3];
    c->r[7] = c->v.s[5];
    goto L_b037e0;
L_b02a50:;
    c->v.f[22] = c->v.f[26] * c->v.f[26];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b02a78; }
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xb02a78u; f_15efddc(c);
L_b02a78:;
    c->v.s[10] = 0x3f800000u;
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x374u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x31cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x318u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x338u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4c0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x410u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[30] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[10] / c->v.f[0];
    c->v.f[14] = c->v.f[26] * c->v.f[2];
    c->v.f[16] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[24] * c->v.f[2];
    c->v.f[18] = c->v.f[25] * c->v.f[2];
    c->v.f[0] = c->v.f[14] * c->v.f[14];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    ST32(c->r[14] + 308u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 300u, c->v.s[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b02af8; }
    c->r[14] = 0xb02ae8u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b02af8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[10] / c->v.f[2];
    c->v.s[0] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[16]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 296u, c->v.s[18]);
    c->v.f[28] = c->v.f[0] - c->v.f[30];
    c->v.f[0] = sqrtf(c->v.f[22]);
    c->v.f[21] = c->v.f[16] * c->v.f[20];
    c->v.f[18] = c->v.f[18] * c->v.f[20];
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b02b44; }
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xb02b38u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = 0x3f800000u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b02b44:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[29] = c->v.f[14] * c->v.f[20];
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.s[27] = c->v.s[18];
    c->v.s[2] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[28] * c->v.f[21]);
    c->v.f[8] = c->v.f[4] - c->v.f[2];
    c->v.s[4] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[6] - c->v.f[4];
    c->v.s[6] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = c->v.f[26] * c->v.f[0];
    c->v.f[3] = c->v.f[24] * c->v.f[0];
    c->v.f[26] = c->v.f[25] * c->v.f[0];
    c->v.f[31] = c->v.f[6] * c->v.f[20];
    c->v.s[20] = c->v.s[2];
    c->v.s[2] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[2] - c->v.f[20];
    c->v.s[2] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[2] - c->v.f[30];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[5] * c->v.f[5];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[1]);
    ST32(c->r[14] + 208u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 164u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 160u, c->v.s[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[3]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b02c4c; }
    c->v.s[0] = c->v.s[2];
    c->v.s[30] = c->v.s[12];
    c->v.s[17] = c->v.s[8];
    c->v.s[19] = c->v.s[4];
    c->v.s[23] = c->v.s[6];
    c->r[14] = 0xb02c18u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = c->v.s[23];
    c->v.s[4] = c->v.s[19];
    c->v.s[8] = c->v.s[17];
    c->v.s[12] = c->v.s[30];
    c->v.s[10] = 0x3f800000u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b02c4c:;
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = c->v.s[31];
    c->v.s[9] = c->v.s[29];
    c->v.s[13] = c->v.s[21];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[16] * c->v.f[29]);
    ST32(c->r[14] + 76u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 328u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = -c->v.f[7] + (float)(c->v.f[8] * c->v.f[18]);
    c->v.f[9] = -c->v.f[9] + (float)(c->v.f[16] * c->v.f[18]);
    c->v.f[13] = -c->v.f[13] + (float)(c->v.f[28] * c->v.f[18]);
    ST32(c->r[14] + 320u, c->v.s[6]);
    c->v.f[2] = c->v.f[26] * c->v.f[0];
    c->v.f[25] = c->v.f[1] * c->v.f[0];
    c->v.f[19] = c->v.f[3] * c->v.f[0];
    c->v.f[30] = c->v.f[5] * c->v.f[0];
    c->v.f[0] = sqrtf(c->v.f[22]);
    c->v.s[17] = c->v.s[2];
    c->v.s[23] = c->v.s[19];
    c->v.s[15] = c->v.s[30];
    c->v.s[26] = c->v.s[25];
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[4] * c->v.f[25]);
    c->v.f[23] = -c->v.f[23] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.f[15] = -c->v.f[15] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.f[26] = -c->v.f[26] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[6] * c->v.f[30]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b02d5c; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[22];
    c->v.s[24] = c->v.s[9];
    c->v.s[18] = c->v.s[15];
    ST32(c->r[14] + 84u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[21]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = c->v.s[8];
    ST32(c->r[14] + 80u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 336u, c->v.s[12]);
    c->r[14] = 0xb02cfcu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[21];
    c->v.s[15] = c->v.s[18];
    c->v.s[9] = c->v.s[24];
    c->v.s[10] = 0x3f800000u;
    c->v.s[6] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 80u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 84u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b02d5c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[4] * c->v.f[30]);
    c->v.f[9] = c->v.f[9] - (float)(c->v.f[8] * c->v.f[21]);
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[28] * c->v.f[29]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[19]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[8] * c->v.f[31]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[16] * c->v.f[31]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[12] * c->v.f[19]);
    c->v.f[15] = c->v.f[15] - (float)(c->v.f[12] * c->v.f[25]);
    ST32(c->r[14] + 212u, c->v.s[22]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = c->v.s[21];
    c->v.s[2] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[2] - c->v.f[20];
    c->v.s[2] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 316u, c->v.s[29]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[29] = c->v.s[8];
    ST32(c->r[14] + 332u, c->v.s[28]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] * c->v.f[0];
    c->v.f[8] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->v.f[2] = c->v.f[28] * c->v.f[28];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[14] + 220u, c->v.s[6]);
    c->v.f[18] = c->v.f[4] * c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 216u, c->v.s[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b02ec8; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[2];
    ST32(c->r[14] + 84u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 148u, c->v.s[23]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = c->v.s[9];
    ST32(c->r[14] + 80u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 72u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 336u, c->v.s[12]);
    c->r[14] = 0xb02e68u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = c->v.s[23];
    c->v.s[10] = 0x3f800000u;
    c->v.s[12] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 72u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 80u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 84u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b02ec8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[16] * c->v.f[22]);
    c->v.s[16] = c->v.s[6];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[12] * c->v.f[30]);
    c->v.s[30] = c->v.s[8];
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[27];
    ST32(c->r[14] + 336u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[2] * c->v.f[31]);
    c->v.f[2] = c->v.f[14] * c->v.f[27];
    c->v.f[4] = c->v.f[18] * c->v.f[0];
    ST32(c->r[14] + 332u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[29] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[2] * c->v.f[27];
    c->v.s[2] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[25]);
    c->v.s[2] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[3] * c->v.f[17];
    ST32(c->r[14] + 316u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[1] * c->v.f[17];
    ST32(c->r[14] + 144u, c->v.s[28]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[15] = c->v.f[15] + (float)(c->v.f[2] * c->v.f[19]);
    c->v.f[2] = c->v.f[6] * c->v.f[0];
    c->v.f[6] = c->v.f[8] * c->v.f[0];
    c->v.s[8] = c->v.s[4];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[19] = c->v.f[5] * c->v.f[17];
    c->v.s[31] = c->v.s[2];
    c->v.s[27] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[2]);
    c->v.s[29] = c->v.s[0];
    c->v.f[31] = -c->v.f[31] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[27] = -c->v.f[27] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.f[29] = -c->v.f[29] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[31] = c->v.f[31] - (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[24] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[24] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[14] + 212u);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[21] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[0]);
    c->v.f[4] = c->v.f[30] * c->v.f[8];
    c->v.f[28] = c->v.f[28] * c->v.f[8];
    c->v.f[24] = c->v.f[16] * c->v.f[8];
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b03028; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = c->v.s[28];
    c->v.s[16] = c->v.s[7];
    c->v.s[20] = c->v.s[9];
    c->v.s[17] = c->v.s[13];
    c->v.s[30] = c->v.s[15];
    c->v.s[28] = c->v.s[4];
    c->v.s[0] = LD32(c->r[14] + 212u);
    c->r[14] = 0xb02fecu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = c->v.s[28];
    c->v.s[28] = c->v.s[21];
    c->v.s[15] = c->v.s[30];
    c->v.s[13] = c->v.s[17];
    c->v.s[9] = c->v.s[20];
    c->v.s[7] = c->v.s[16];
    c->v.s[10] = 0x3f800000u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b03028:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[18] * c->v.f[27]);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[18] * c->v.f[29]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[18] * c->v.f[31]);
    c->v.s[2] = LD32(c->r[14] + 296u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 76u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[2] * c->v.f[13]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[9]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[6] * c->v.f[15]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[6] * c->v.f[23]);
    ST32(c->r[14] + 328u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 320u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = c->v.s[12];
    c->v.s[4] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 132u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.f[18] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 148u, c->v.s[23]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[21] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.s[4] = c->v.s[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b031c8; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[2];
    c->v.s[23] = c->v.s[6];
    ST32(c->r[14] + 84u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 296u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = c->v.s[9];
    ST32(c->r[14] + 80u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 288u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = c->v.s[28];
    c->v.s[28] = c->v.s[15];
    ST32(c->r[14] + 336u, c->v.s[4]);
    c->r[14] = 0xb03164u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = c->v.s[28];
    c->v.s[28] = c->v.s[26];
    c->v.s[6] = c->v.s[23];
    c->v.s[9] = c->v.s[25];
    c->v.s[10] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 80u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[14] + 296u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 84u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b031c8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[1] * c->v.f[15]);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[14] * c->v.f[7]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[5] * c->v.f[23]);
    { uint32_t ea = c->r[13] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = c->v.s[22];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[9]);
    c->v.s[22] = c->v.s[26];
    ST32(c->r[14] + 336u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[13]);
    ST32(c->r[14] + 332u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 296u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[18] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = c->v.s[6];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[3] * c->v.f[2]);
    ST32(c->r[14] + 328u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[29]);
    c->v.f[4] = c->v.f[21] * c->v.f[0];
    ST32(c->r[14] + 320u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[4];
    c->v.f[25] = -c->v.f[25] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[31]);
    c->v.s[2] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[2] * c->v.f[27]);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.s[26] = c->v.s[28];
    c->v.s[28] = c->v.s[0];
    c->v.s[23] = c->v.s[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[17] * c->v.f[0]);
    c->v.f[28] = -c->v.f[28] + (float)(c->v.f[30] * c->v.f[4]);
    c->v.f[23] = -c->v.f[23] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[30] * c->v.f[0]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[30] * c->v.f[2]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[30] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[17] * c->v.f[6]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[19] * c->v.f[0]);
    c->v.f[30] = c->v.f[18] * c->v.f[8];
    c->v.f[17] = c->v.f[20] * c->v.f[8];
    c->v.f[19] = c->v.f[16] * c->v.f[8];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[21] * c->v.f[25]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[21] * c->v.f[28]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[21] * c->v.f[23]);
    c->v.s[21] = c->r[0];
    { uint32_t ea = c->r[13] + 0x330u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[16] * c->v.f[28]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[18] * c->v.f[23]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[20] * c->v.f[25]);
    c->v.s[0] = c->r[0];
    ST32(c->r[14] + 140u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b033a4; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[2];
    ST32(c->r[14] + 84u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 288u, c->v.s[22]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = c->v.s[9];
    ST32(c->r[14] + 80u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 72u, c->v.s[15]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 212u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 136u, c->v.s[4]);
    c->r[14] = 0xb0334cu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = c->v.s[22];
    c->v.s[10] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = LD32(c->r[14] + 72u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 80u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 84u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 300u);
L_b033a4:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[18] * c->v.f[28]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[20] * c->v.f[23]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[3] * c->v.f[15]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[16] * c->v.f[25]);
    c->v.s[6] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[14] * c->v.f[13]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[7]);
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[2] * c->v.f[9]);
    c->v.s[2] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 296u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[5] * c->v.f[2]);
    c->v.s[5] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[1] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = c->v.s[22];
    c->v.s[3] = c->v.s[7];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[2] * c->v.f[31]);
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = c->v.s[12];
    c->v.s[12] = c->v.s[1];
    c->v.s[1] = c->v.s[5];
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[2] * c->v.f[27]);
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[2] * c->v.f[29]);
    c->v.s[2] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[21] - c->v.f[18];
    c->v.f[25] = c->v.f[4] - c->v.f[20];
    c->v.s[29] = c->v.s[26];
    c->v.f[23] = c->v.f[2] - c->v.f[27];
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[2] * c->v.f[0];
    c->v.f[22] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[21] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    c->v.s[4] = c->v.s[6];
    c->v.s[6] = c->v.s[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b03540; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[2];
    ST32(c->r[14] + 336u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 288u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 320u, c->v.s[14]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 328u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 296u, c->v.s[3]);
    c->r[14] = 0xb0350cu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = 0x3f800000u;
    c->v.s[3] = LD32(c->r[14] + 296u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 336u);
L_b03540:;
    c->v.f[2] = c->v.f[18] + c->v.f[4];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[13] + 0x418u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x41cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x420u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x414u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x428u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x42cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x430u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x424u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x438u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x43cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x440u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x434u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x448u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x44cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x450u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x444u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x454u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[3]); }
    ST32(c->r[14] + 320u, c->v.s[2]);
    c->v.f[2] = c->v.f[20] + c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[2]);
    c->v.f[2] = c->v.f[27] + c->v.f[31];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 164u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] + c->v.f[3];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[21] * c->v.f[0];
    c->v.f[6] = c->v.f[22] * c->v.f[0];
    ST32(c->r[14] + 160u, c->v.s[2]);
    c->v.f[2] = c->v.f[20] + c->v.f[1];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = c->v.s[20];
    c->v.s[10] = c->v.s[6];
    c->v.s[8] = c->v.s[4];
    ST32(c->r[14] + 136u, c->v.s[2]);
    c->v.f[2] = c->v.f[27] + c->v.f[12];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[28] * c->v.f[4]);
    ST32(c->r[14] + 132u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] + c->v.f[14];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 148u, c->v.s[2]);
    c->v.f[2] = c->v.f[20] + c->v.f[29];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 144u, c->v.s[2]);
    c->v.f[2] = c->v.f[27] + c->v.f[24];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1008u, c->v.s[2]);
    c->v.f[2] = c->v.f[18] + c->v.f[30];
    ST32(c->r[14] + 288u, c->v.s[2]);
    c->v.f[2] = c->v.f[20] + c->v.f[17];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 140u, c->v.s[2]);
    c->v.f[2] = c->v.f[27] + c->v.f[19];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1004u, c->v.s[2]);
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[2]);
    c->v.s[12] = c->v.s[0];
    c->v.s[14] = c->v.s[2];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[23] * c->v.f[0]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[28] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[25] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[28] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[23] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[28] * c->v.f[0]);
    c->v.f[2] = c->v.f[22] * c->v.f[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[4] = c->v.f[26] * c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[21] * c->v.f[12]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[26] * c->v.f[14]);
    c->v.f[0] = c->v.f[16] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[22] * c->v.f[12]);
    c->v.f[2] = c->v.f[18] + c->v.f[2];
    ST32(c->r[14] + 220u, c->v.s[2]);
    c->v.f[2] = c->v.f[1] + c->v.f[4];
    c->v.f[0] = c->v.f[27] + c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 216u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 212u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 336u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 352u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 348u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 328u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 276u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 316u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 280u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 308u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 208u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1016u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1012u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1000u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 992u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1020u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 988u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 724u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 120u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 696u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 156u);
    ST32(c->r[13] + 692u, c->v.s[0]);
    goto L_b059d8;
L_b037d4:;
    { uint32_t ea = c->r[13] + 0xdcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = 0x3f800000u;
    c->v.s[9] = LD32(c->r[0] + 12u);
L_b037e0:;
    { uint32_t ea = c->r[13] + 0x1a0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[13] + 932u);
    ST32(c->r[13] + 676u, c->v.s[9]);
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    { uint32_t ea = c->r[13] + 0x52cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = c->r[0];
    { uint32_t ea = c->r[13] + 0x528u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 640u, c->v.s[2]);
    c->v.f[2] = c->v.f[26] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[0]);
    ST32(c->r[13] + 660u, c->v.s[0]);
    c->v.s[18] = c->r[9];
    ST32(c->r[13] + 636u, c->v.s[4]);
    c->v.s[26] = c->r[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[4]);
    c->v.s[24] = c->r[10];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[9]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[2]);
    c->v.s[0] = c->v.s[2] ^ 0x80000000u;
    vfp_mrs_flags(c);
    c->v.s[16] = COND_GT ? c->v.s[0] : c->v.s[2];
    c->v.f[0] = c->v.f[18] * c->v.f[18];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[20] * c->v.f[20]);
    vfp_cmp_f(c, c->v.f[21], c->v.f[2]);
    vfp_mrs_flags(c);
    c->v.s[2] = COND_GT ? c->v.s[27] : c->v.s[14];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    ST32(c->r[13] + 988u, c->v.s[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0387c; }
    c->r[14] = 0xb03870u; f_15efddc(c);
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b0387c:;
    c->v.f[2] = c->v.f[14] / c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x454u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x584u; ST32(ea, c->r[4]); }
    c->v.f[6] = c->v.f[18] * c->v.f[2];
    c->v.f[27] = c->v.f[20] * c->v.f[2];
    c->v.f[4] = c->v.f[24] * c->v.f[2];
    c->v.f[29] = c->v.f[26] * c->v.f[2];
    c->v.f[0] = c->v.f[6] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    ST32(c->r[14] + 308u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 220u, c->v.s[6]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[22] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[22], c->v.f[22]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b038d8; }
    c->r[14] = 0xb038ccu; f_15efddc(c);
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[22] = c->v.s[0];
L_b038d8:;
    (void)f_subs(c, c->r[8], 0x1u);
    { uint32_t ea = c->r[13] + 0x52cu; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x454u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x528u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[10]); }
    if (COND_NE) { goto L_b03960; }
    { uint32_t ea = c->r[13] + 0x444u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x448u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[8] = c->v.f[24] * c->v.f[0];
    c->v.f[12] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[20] * c->v.f[0];
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x450u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[26] * c->v.f[6]);
    c->v.s[10] = c->r[0];
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[26] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[18] * c->v.f[10]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[20] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[24] * c->v.f[2]);
    c->r[4] = c->v.s[4];
    c->r[10] = c->v.s[8];
    c->r[9] = c->v.s[0];
    c->r[8] = c->v.s[12];
L_b03960:;
    c->v.s[20] = c->r[8];
    c->v.s[24] = c->r[9];
    c->v.s[26] = c->r[10];
    c->v.s[17] = c->v.s[30];
    c->v.s[21] = 0x3ddd0956u;
    c->v.f[0] = c->v.f[20] * c->v.f[20];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[16] * c->v.f[28]);
    c->v.s[28] = c->r[4];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[16] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[26] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b039b0; }
    c->r[14] = 0xb039a4u; f_15efddc(c);
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
L_b039b0:;
    c->v.s[18] = 0x3db056e5u;
    c->v.s[0] = 0xbd0dee73u;
    c->v.s[30] = 0x3c687b9cu;
    c->v.s[19] = 0xbe31325eu;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[16] * c->v.f[0]);
    c->v.f[0] = c->v.f[14] / c->v.f[2];
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[16] * c->v.f[17]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[16] * c->v.f[21]);
    c->v.f[17] = c->v.f[20] * c->v.f[0];
    c->v.f[6] = c->v.f[24] * c->v.f[0];
    c->v.f[4] = c->v.f[26] * c->v.f[0];
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[17] * c->v.f[17];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 1000u, c->v.s[0]);
    ST32(c->r[14] + 212u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 216u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b03a24; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xb03a1cu; f_15efddc(c);
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->v.s[14] = 0x3f800000u;
L_b03a24:;
    c->v.s[2] = 0xbe36a584u;
    c->v.s[4] = 0x3d30f1f4u;
    c->v.f[22] = c->v.f[14] / c->v.f[22];
    ST32(c->r[13] + 1012u, c->v.s[17]);
    c->v.s[17] = 0x3da2cff9u;
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.s[4] = 0x3f183577u;
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[16] * c->v.f[19]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[16] * c->v.f[18]);
    c->v.s[18] = 0xbb8eacddu;
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[16] * c->v.f[30]);
    if (COND_NE) { goto L_b03ad4; }
    { uint32_t ea = c->r[13] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x440u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[6] * c->v.f[28];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x43cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[8] * c->v.f[28];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[26]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x438u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[3] = c->v.f[10] * c->v.f[28];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[6] * c->v.f[20]);
    c->v.s[12] = c->r[0];
    c->v.f[5] = c->v.f[12] * c->v.f[28];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[24]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[12] * c->v.f[20]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[20]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[26]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[10] * c->v.f[24]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[12] * c->v.f[26]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[26]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[8] * c->v.f[20]);
    c->r[10] = c->v.s[1];
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->r[8] = c->v.s[3];
    c->r[4] = c->v.s[14];
    c->r[9] = c->v.s[5];
    c->v.s[14] = 0x3f800000u;
L_b03ad4:;
    c->v.s[30] = 0x3f107581u;
    c->v.s[20] = c->r[8];
    c->v.s[24] = c->r[9];
    c->v.s[21] = c->r[10];
    c->v.s[25] = c->r[4];
    c->v.f[28] = c->v.f[14] / c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 924u, c->v.s[29]);
    c->v.f[31] = c->v.f[29] * c->v.f[22];
    c->v.s[29] = 0xbf256968u;
    c->v.s[19] = c->v.s[17];
    c->v.f[8] = c->v.f[27] * c->v.f[22];
    c->v.s[26] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[1] * c->v.f[18]);
    ST32(c->r[14] + 208u, c->v.s[27]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 368u, c->v.s[17]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[16] * c->v.f[2]);
    c->v.f[2] = c->v.f[20] * c->v.f[20];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[3] = c->v.f[26] - c->v.f[6];
    c->v.s[6] = c->v.s[29];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    ST32(c->r[13] + 1008u, c->v.s[3]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b03b7c; }
    c->v.s[0] = c->v.s[2];
    c->v.s[23] = c->v.s[8];
    c->v.s[27] = c->v.s[6];
    c->r[14] = 0xb03b68u; f_15efddc(c);
    c->v.s[3] = LD32(c->r[13] + 1008u);
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->v.s[6] = c->v.s[27];
    c->v.s[8] = c->v.s[23];
    c->v.s[14] = 0x3f800000u;
L_b03b7c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    ST32(c->r[13] + 984u, c->v.s[6]);
    c->v.s[23] = c->v.s[31];
    ST32(c->r[13] + 1004u, c->v.s[8]);
    c->v.s[4] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = LD32(c->r[14] + 120u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[12] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[27] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 992u, c->v.s[12]);
    c->v.f[7] = c->v.f[24] * c->v.f[0];
    c->v.f[29] = c->v.f[2] * c->v.f[22];
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 908u, c->v.s[7]);
    c->v.f[5] = c->v.f[2] * c->v.f[22];
    c->v.s[2] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = c->v.s[6];
    c->v.f[6] = c->v.f[21] * c->v.f[0];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[1] * c->v.f[19]);
    ST32(c->r[13] + 1020u, c->v.s[6]);
    c->v.f[2] = c->v.f[2] - c->v.f[26];
    ST32(c->r[14] + 376u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 372u, c->v.s[5]);
    c->v.f[17] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = LD32(c->r[13] + 1000u);
    c->v.f[26] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = 0x3fc91658u;
    c->v.s[9] = c->v.s[2];
    c->v.f[2] = c->v.f[20] * c->v.f[0];
    c->v.f[0] = c->v.f[25] * c->v.f[0];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[16] * c->v.f[30]);
    ST32(c->r[13] + 1016u, c->v.s[2]);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[7] * c->v.f[7]);
    ST32(c->r[13] + 968u, c->v.s[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b03ca0; }
    goto L_b03c60;
L_b03c60:;
    c->v.s[0] = c->v.s[2];
    c->v.s[30] = c->v.s[9];
    ST32(c->r[13] + 980u, c->v.s[11]);
    c->r[14] = 0xb03c70u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[13] + 980u);
    c->v.s[12] = LD32(c->r[13] + 992u);
    c->v.s[8] = LD32(c->r[13] + 1004u);
    c->v.s[3] = LD32(c->r[13] + 1008u);
    c->v.s[7] = LD32(c->r[13] + 908u);
    c->v.s[1] = LD32(c->r[13] + 932u);
    c->v.s[9] = c->v.s[30];
    c->v.s[14] = 0x3f800000u;
    c->v.s[5] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 156u);
L_b03ca0:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = c->v.s[29];
    c->v.s[19] = c->v.s[8];
    c->v.s[6] = c->v.s[12];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[11] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[12] * c->v.f[31]);
    c->v.s[12] = c->v.s[5];
    c->v.f[19] = -c->v.f[19] + (float)(c->v.f[3] * c->v.f[31]);
    c->v.s[5] = LD32(c->r[13] + 560u);
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.f[30] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[11] * c->v.f[31]);
    c->v.s[4] = c->v.s[9];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[1] * c->v.f[22]);
    c->v.f[13] = c->v.f[2] - c->v.f[27];
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = LD32(c->r[13] + 1012u);
    c->v.f[27] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = LD32(c->r[14] + 376u);
    c->v.s[28] = c->v.s[26];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[2] * c->v.f[17]);
    c->v.s[2] = LD32(c->r[14] + 368u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[18]);
    c->v.f[18] = c->v.f[16] + c->v.f[14];
    c->v.f[16] = c->v.f[14] / c->v.f[0];
    if (COND_NE) { goto L_b03dc8; }
    { uint32_t ea = c->r[13] + 0x424u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[15] = c->v.s[16];
    c->v.s[16] = c->v.s[6];
    c->v.s[22] = c->v.s[8];
    ST32(c->r[13] + 972u, c->v.s[10]);
    ST32(c->r[13] + 996u, c->v.s[12]);
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x430u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[0] * c->v.f[25];
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x42cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[6] * c->v.f[25];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[0] * c->v.f[21]);
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x428u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[8] * c->v.f[25];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[0] * c->v.f[20]);
    c->v.s[10] = c->r[0];
    c->v.f[3] = c->v.f[10] * c->v.f[25];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[10] * c->v.f[24]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[0] * c->v.f[24]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[10] * c->v.f[20]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[8] * c->v.f[20]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[21]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[24]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[10] * c->v.f[21]);
    c->v.s[10] = LD32(c->r[13] + 972u);
    c->v.s[8] = c->v.s[22];
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[21]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[6] * c->v.f[20]);
    c->v.s[6] = c->v.s[16];
    c->v.s[16] = c->v.s[15];
    c->r[10] = c->v.s[14];
    c->r[8] = c->v.s[1];
    c->v.s[14] = 0x3f800000u;
    c->r[4] = c->v.s[12];
    c->r[9] = c->v.s[3];
    c->v.s[12] = LD32(c->r[13] + 996u);
    c->v.s[3] = LD32(c->r[13] + 1008u);
L_b03dc8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[13] * c->v.f[27]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[8]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[6] * c->v.f[29]);
    c->v.s[21] = LD32(c->r[13] + 984u);
    c->v.f[8] = c->v.f[7] * c->v.f[16];
    c->v.s[25] = c->r[8];
    c->v.s[1] = c->v.s[17];
    c->v.s[24] = c->r[4];
    c->v.f[18] = c->v.f[14] / c->v.f[18];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[11] * c->v.f[29]);
    c->v.s[0] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 368u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = -c->v.f[31] + (float)(c->v.f[30] * c->v.f[26]);
    ST32(c->r[14] + 164u, c->v.s[30]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = c->v.s[27];
    c->v.s[20] = c->v.s[1];
    ST32(c->r[14] + 160u, c->v.s[27]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = c->v.s[17];
    c->v.s[17] = c->r[10];
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[5] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[3] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = -c->v.f[30] + (float)(c->v.f[13] * c->v.f[26]);
    c->v.f[2] = c->v.f[25] * c->v.f[25];
    c->v.f[27] = -c->v.f[27] + (float)(c->v.f[0] * c->v.f[26]);
    c->v.s[0] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = c->v.s[16];
    c->v.s[6] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[0] - c->v.f[6];
    ST32(c->r[13] + 928u, c->v.s[18]);
    c->v.s[7] = c->v.s[0];
    c->v.s[0] = LD32(c->r[13] + 968u);
    c->v.f[22] = c->v.f[0] * c->v.f[16];
    c->v.s[16] = c->r[9];
    c->v.s[0] = LD32(c->r[13] + 556u);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[24]);
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[4] = LD32(c->r[14] + 208u);
    ST32(c->r[13] + 984u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b03efc; }
    c->v.s[0] = c->v.s[2];
    ST32(c->r[13] + 684u, c->v.s[20]);
    c->v.s[18] = c->v.s[10];
    ST32(c->r[13] + 996u, c->v.s[12]);
    ST32(c->r[13] + 724u, c->v.s[7]);
    ST32(c->r[13] + 976u, c->v.s[8]);
    c->v.s[20] = c->v.s[9];
    ST32(c->r[13] + 980u, c->v.s[11]);
    ST32(c->r[13] + 632u, c->v.s[13]);
    c->r[14] = 0xb03ec4u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = c->v.s[20];
    c->v.s[10] = c->v.s[18];
    c->v.s[13] = LD32(c->r[13] + 632u);
    c->v.s[11] = LD32(c->r[13] + 980u);
    c->v.s[3] = LD32(c->r[13] + 1008u);
    c->v.s[20] = LD32(c->r[13] + 684u);
    c->v.s[8] = LD32(c->r[13] + 976u);
    c->v.s[7] = LD32(c->r[13] + 724u);
    c->v.s[12] = LD32(c->r[13] + 996u);
    c->v.s[18] = LD32(c->r[13] + 928u);
    c->v.s[5] = LD32(c->r[13] + 560u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[14] + 208u);
L_b03efc:;
    c->v.s[2] = LD32(c->r[13] + 1004u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[29]);
    c->v.s[3] = LD32(c->r[13] + 992u);
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[5] * c->v.f[21]);
    ST32(c->r[13] + 696u, c->v.s[25]);
    ST32(c->r[13] + 672u, c->v.s[17]);
    ST32(c->r[13] + 692u, c->v.s[16]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[11] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = c->v.s[13];
    c->v.f[6] = c->v.f[2] * c->v.f[23];
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 972u, c->v.s[10]);
    c->v.f[1] = c->v.f[2] * c->v.f[23];
    c->v.s[2] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = c->v.f[17] * c->v.f[0];
    c->v.s[17] = c->v.s[24];
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[3] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[4] * c->v.f[23];
    c->v.s[29] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1008u, c->v.s[5]);
    c->v.f[31] = c->v.f[31] - (float)(c->v.f[29] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[4] * c->v.f[2]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[13] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[4] * c->v.f[20]);
    c->v.s[4] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[13] + 1020u);
    c->v.f[2] = c->v.f[2] * c->v.f[26];
    ST32(c->r[13] + 680u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 1016u);
    c->v.f[4] = c->v.f[2] * c->v.f[26];
    c->v.s[2] = LD32(c->r[13] + 984u);
    c->v.s[26] = c->v.s[22];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[7] * c->v.f[8]);
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[18] = c->v.f[16] * c->v.f[0];
    ST32(c->r[14] + 372u, c->v.s[2]);
    c->v.f[2] = c->v.f[25] * c->v.f[0];
    c->v.f[25] = c->v.f[24] * c->v.f[0];
    ST32(c->r[13] + 1004u, c->v.s[2]);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[5]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b04098; }
    c->v.s[0] = c->v.s[2];
    ST32(c->r[13] + 984u, c->v.s[27]);
    ST32(c->r[13] + 980u, c->v.s[30]);
    ST32(c->r[13] + 976u, c->v.s[31]);
    ST32(c->r[13] + 564u, c->v.s[23]);
    ST32(c->r[13] + 684u, c->v.s[20]);
    c->v.s[31] = c->v.s[12];
    ST32(c->r[13] + 632u, c->v.s[11]);
    c->v.s[21] = c->v.s[13];
    c->v.s[23] = c->v.s[6];
    ST32(c->r[13] + 992u, c->v.s[1]);
    c->v.s[30] = c->v.s[3];
    ST32(c->r[13] + 724u, c->v.s[7]);
    c->v.s[20] = c->v.s[8];
    c->v.s[27] = c->v.s[4];
    c->v.s[16] = c->v.s[9];
    c->r[14] = 0xb04054u; f_15efddc(c);
    c->v.s[4] = c->v.s[27];
    c->v.s[8] = c->v.s[20];
    c->v.s[3] = c->v.s[30];
    c->v.s[6] = c->v.s[23];
    c->v.s[12] = c->v.s[31];
    c->v.s[20] = LD32(c->r[13] + 684u);
    c->v.s[7] = LD32(c->r[13] + 724u);
    c->v.s[1] = LD32(c->r[13] + 992u);
    c->v.s[23] = LD32(c->r[13] + 564u);
    c->v.s[11] = LD32(c->r[13] + 632u);
    c->v.s[31] = LD32(c->r[13] + 976u);
    c->v.s[30] = LD32(c->r[13] + 980u);
    c->v.s[27] = LD32(c->r[13] + 984u);
    c->v.s[10] = LD32(c->r[13] + 972u);
    c->v.s[9] = c->v.s[16];
    c->v.s[13] = c->v.s[21];
    c->v.s[14] = 0x3f800000u;
L_b04098:;
    c->v.s[2] = LD32(c->r[13] + 924u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[11] * c->v.f[20]);
    c->v.s[16] = LD32(c->r[13] + 680u);
    c->v.s[24] = c->v.s[19];
    c->v.s[21] = c->v.s[7];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[13] + 632u, c->v.s[25]);
    ST32(c->r[13] + 684u, c->v.s[18]);
    (void)f_subs(c, c->r[0], 0x1u);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[19]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[19] = c->v.s[8];
    c->v.f[19] = -c->v.f[19] + (float)(c->v.f[21] * c->v.f[22]);
    c->v.f[11] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = LD32(c->r[14] + 368u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[29] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 1012u);
    c->v.s[29] = c->v.s[16];
    c->v.f[29] = -c->v.f[29] + (float)(c->v.f[13] * c->v.f[22]);
    c->v.f[20] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->v.s[5] = c->v.s[4];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[5] = -c->v.f[5] + (float)(c->v.f[23] * c->v.f[22]);
    c->v.s[22] = c->v.s[4];
    c->v.f[7] = c->v.f[2] * c->v.f[28];
    c->v.s[2] = LD32(c->r[14] + 276u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = c->v.s[23];
    c->v.f[23] = c->v.f[18] * c->v.f[0];
    c->v.s[18] = c->v.s[21];
    c->v.s[21] = c->v.s[16];
    c->v.s[4] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.s[4] = LD32(c->r[14] + 372u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 924u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 420u);
    c->v.f[2] = c->v.f[2] * c->v.f[9];
    c->v.s[9] = c->v.s[8];
    ST32(c->r[13] + 984u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 988u);
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[4] = c->v.f[25] * c->v.f[0];
    c->v.s[25] = LD32(c->r[14] + 396u);
    if (COND_NE) { goto L_b04270; }
    { uint32_t ea = c->r[13] + 0x414u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[16] = c->v.s[28];
    c->v.s[28] = c->v.s[6];
    ST32(c->r[13] + 996u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 992u, c->v.s[1]);
    ST32(c->r[13] + 724u, c->v.s[11]);
    c->v.s[11] = c->v.s[24];
    c->v.s[15] = c->v.s[9];
    c->v.s[9] = c->v.s[18];
    c->v.s[18] = c->v.s[4];
    c->v.s[24] = LD32(c->r[13] + 692u);
    c->v.s[4] = LD32(c->r[13] + 672u);
    ST32(c->r[14] + 376u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 160u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[6] * c->v.f[17];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x41cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[8] * c->v.f[17];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[4]);
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[3] = c->v.f[10] * c->v.f[17];
    c->v.s[12] = c->r[0];
    c->v.f[5] = c->v.f[12] * c->v.f[17];
    c->v.s[17] = LD32(c->r[13] + 696u);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[24]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[6] * c->v.f[17]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[10] * c->v.f[17]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[12] * c->v.f[17]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[10] * c->v.f[4]);
    c->v.s[6] = c->v.s[28];
    c->v.s[28] = c->v.s[16];
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[10] * c->v.f[24]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[8] * c->v.f[17]);
    c->v.s[24] = c->v.s[11];
    c->v.s[10] = LD32(c->r[13] + 972u);
    c->v.s[11] = LD32(c->r[13] + 724u);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.s[12] = LD32(c->r[13] + 996u);
    c->v.s[4] = c->v.s[18];
    c->v.s[18] = c->v.s[9];
    c->v.s[9] = c->v.s[15];
    c->r[4] = c->v.s[14];
    c->r[10] = c->v.s[1];
    c->v.s[1] = LD32(c->r[13] + 992u);
    c->r[9] = c->v.s[5];
    c->v.s[14] = 0x3f800000u;
    c->r[8] = c->v.s[3];
    c->v.s[3] = LD32(c->r[14] + 376u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
L_b04270:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[25] * c->v.f[2];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[13] * c->v.f[21]);
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[28] * c->v.f[21]);
    c->v.s[17] = c->v.s[21];
    c->v.s[21] = c->v.s[4];
    ST32(c->r[13] + 976u, c->v.s[31]);
    ST32(c->r[13] + 980u, c->v.s[30]);
    ST32(c->r[13] + 620u, c->v.s[22]);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[18] * c->v.f[22]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[13] * c->v.f[9]);
    { uint32_t ea = c->r[13] + 0x574u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x570u; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x578u; ST32(ea, c->r[5]); }
    c->v.s[16] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.s[22] = c->v.s[16];
    c->v.s[16] = c->r[10];
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.s[8] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 624u, c->v.s[16]);
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[8] * c->v.f[10]);
    ST32(c->r[13] + 696u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 1000u);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[6] * c->v.f[30]);
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[6] * c->v.f[27]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[6] * c->v.f[31]);
    ST32(c->r[14] + 164u, c->v.s[20]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 692u, c->v.s[7]);
    c->v.s[7] = LD32(c->r[13] + 984u);
    ST32(c->r[13] + 984u, c->v.s[27]);
    c->v.s[27] = c->v.s[9];
    c->v.s[6] = LD32(c->r[14] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    ST32(c->r[13] + 1000u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[14] + 280u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 396u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = c->v.s[4];
    c->v.s[20] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[8];
    c->v.s[8] = c->v.s[23];
    c->v.f[20] = c->v.f[20] * c->v.f[2];
    c->v.f[31] = c->v.f[31] * c->v.f[2];
    c->v.s[4] = c->v.s[8];
    c->v.s[8] = c->v.s[13];
    c->v.f[30] = c->v.f[30] * c->v.f[2];
    ST32(c->r[13] + 988u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 1008u);
    c->v.f[6] = c->v.f[6] * c->v.f[0];
    ST32(c->r[13] + 992u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 1004u);
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.s[6] = LD32(c->r[13] + 924u);
    ST32(c->r[13] + 996u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[13] + 928u);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[6] * c->v.f[23]);
    c->v.s[23] = c->v.s[28];
    c->v.f[28] = c->v.f[0] * c->v.f[7];
    c->v.s[0] = c->r[8];
    c->v.s[7] = c->r[9];
    c->v.f[2] = c->v.f[0] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[7] * c->v.f[7]);
    ST32(c->r[14] + 380u, c->v.s[0]);
    c->v.s[0] = c->r[4];
    ST32(c->r[13] + 928u, c->v.s[7]);
    c->v.s[7] = c->v.s[17];
    c->v.s[17] = c->v.s[18];
    ST32(c->r[13] + 628u, c->v.s[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0445c; }
    c->v.s[0] = c->v.s[2];
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[13] + 672u, c->v.s[29]);
    c->v.s[18] = c->v.s[12];
    ST32(c->r[13] + 568u, c->v.s[4]);
    ST32(c->r[13] + 564u, c->v.s[23]);
    c->v.s[29] = c->v.s[1];
    c->v.s[16] = c->v.s[3];
    ST32(c->r[13] + 724u, c->v.s[11]);
    ST32(c->r[4] + 384u, c->v.s[24]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 160u, c->v.s[5]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 392u, c->v.s[8]);
    c->r[14] = 0xb04418u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = c->v.s[29];
    c->v.s[11] = LD32(c->r[13] + 724u);
    c->v.s[6] = LD32(c->r[13] + 924u);
    c->v.s[23] = LD32(c->r[13] + 564u);
    c->v.s[7] = LD32(c->r[13] + 680u);
    c->v.s[4] = LD32(c->r[13] + 568u);
    c->v.s[29] = LD32(c->r[13] + 672u);
    c->v.s[10] = LD32(c->r[13] + 972u);
    c->v.s[3] = c->v.s[16];
    c->v.s[12] = c->v.s[18];
    c->v.s[14] = 0x3f800000u;
    c->v.s[8] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[14] + 384u);
L_b0445c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[13] + 696u);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[22] * c->v.f[10]);
    c->v.s[10] = LD32(c->r[13] + 980u);
    c->v.s[18] = LD32(c->r[13] + 1012u);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[23] * c->v.f[27]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[17] * c->v.f[7]);
    c->v.s[13] = c->v.s[4];
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.s[22] = LD32(c->r[13] + 996u);
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x374u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x31cu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x318u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x338u; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x4c0u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x410u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[2] * c->v.f[24]);
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[13] + 692u);
    c->v.s[23] = c->v.s[1];
    c->v.s[1] = LD32(c->r[13] + 1016u);
    ST32(c->r[13] + 672u, c->v.s[29]);
    c->v.s[29] = c->v.s[13];
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[29] = -c->v.f[29] + (float)(c->v.f[6] * c->v.f[25]);
    c->v.f[11] = c->v.f[11] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[10] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[13] + 984u);
    c->v.s[12] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 976u);
    c->v.s[12] = LD32(c->r[13] + 1020u);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[2] = c->v.f[12] * c->v.f[26];
    ST32(c->r[14] + 164u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[13] + 908u);
    ST32(c->r[14] + 308u, c->v.s[2]);
    c->v.f[2] = c->v.f[1] * c->v.f[26];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[10] * c->v.f[26];
    c->v.s[26] = LD32(c->r[13] + 992u);
    ST32(c->r[14] + 384u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 620u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[8] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 1000u);
    c->v.s[8] = LD32(c->r[13] + 988u);
    c->v.f[26] = -c->v.f[26] + (float)(c->v.f[2] * c->v.f[25]);
    c->v.s[2] = LD32(c->r[13] + 676u);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.f[22] = -c->v.f[22] + (float)(c->v.f[8] * c->v.f[25]);
    c->v.s[8] = LD32(c->r[13] + 624u);
    c->v.s[7] = c->v.s[19];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.s[2] = LD32(c->r[13] + 636u);
    c->v.f[8] = c->v.f[8] * c->v.f[0];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.s[2] = LD32(c->r[13] + 640u);
    ST32(c->r[14] + 396u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.s[2] = LD32(c->r[13] + 660u);
    ST32(c->r[14] + 392u, c->v.s[20]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.s[2] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = c->v.s[3];
    c->v.s[3] = LD32(c->r[13] + 628u);
    c->v.s[4] = LD32(c->r[14] + 276u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[3] * c->v.f[0];
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    ST32(c->r[13] + 660u, c->v.s[9]);
    ST32(c->r[13] + 676u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 928u);
    ST32(c->r[13] + 928u, c->v.s[8]);
    c->v.f[4] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[27] * c->v.f[27];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    ST32(c->r[14] + 208u, c->v.s[4]);
    c->v.s[4] = c->v.s[16];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[9] * c->v.f[9]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b04648; }
    c->v.s[0] = c->v.s[2];
    c->v.s[16] = c->v.s[23];
    c->v.s[23] = c->v.s[5];
    c->v.s[25] = c->v.s[7];
    ST32(c->r[13] + 696u, c->v.s[4]);
    ST32(c->r[13] + 724u, c->v.s[11]);
    ST32(c->r[13] + 568u, c->v.s[13]);
    c->r[14] = 0xb04614u; f_15efddc(c);
    c->v.s[13] = LD32(c->r[13] + 568u);
    c->v.s[11] = LD32(c->r[13] + 724u);
    c->v.s[6] = LD32(c->r[13] + 924u);
    c->v.s[9] = LD32(c->r[13] + 660u);
    c->v.s[4] = LD32(c->r[13] + 696u);
    c->v.s[8] = LD32(c->r[13] + 928u);
    c->v.s[1] = LD32(c->r[13] + 1016u);
    c->v.s[12] = LD32(c->r[13] + 1020u);
    c->v.s[10] = LD32(c->r[13] + 908u);
    c->v.s[5] = c->v.s[23];
    c->v.s[7] = c->v.s[25];
    c->v.s[23] = c->v.s[16];
    c->v.s[14] = 0x3f800000u;
L_b04648:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = c->v.s[1];
    c->v.s[1] = c->v.s[10];
    c->v.s[10] = c->v.s[12];
    c->v.s[12] = LD32(c->r[13] + 672u);
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    ST32(c->r[13] + 680u, c->v.s[27]);
    ST32(c->r[14] + 160u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[2] + c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[13] + 976u);
    c->v.f[23] = c->v.f[2] + c->v.f[23];
    c->v.s[2] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[28] = c->v.f[2] + c->v.f[28];
    c->v.s[2] = LD32(c->r[13] + 984u);
    c->v.f[11] = c->v.f[11] - (float)(c->v.f[18] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[9] * c->v.f[0];
    c->v.s[9] = c->v.s[12];
    c->v.s[19] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = c->v.s[18];
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[14] + 212u);
    c->v.s[2] = LD32(c->r[13] + 980u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[4] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 968u);
    c->v.s[4] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[2] * c->v.f[7]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[12] = c->v.s[10];
    c->v.s[10] = c->v.s[1];
    c->v.s[1] = c->v.s[20];
    ST32(c->r[14] + 308u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[13] + 992u);
    c->v.s[3] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[3] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.s[2] = LD32(c->r[13] + 996u);
    c->v.f[5] = c->v.f[31] * c->v.f[31];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 1000u);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[2] * c->v.f[4]);
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[2] * c->v.f[13]);
    c->v.s[2] = LD32(c->r[13] + 988u);
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[14] + 348u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[4] - c->v.f[2];
    ST32(c->r[13] + 1012u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[14] + 352u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 280u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[6];
    ST32(c->r[13] + 980u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] * c->v.f[0];
    c->v.f[2] = c->v.f[8] * c->v.f[0];
    c->v.f[0] = c->v.f[27] * c->v.f[0];
    c->v.s[27] = c->v.s[13];
    c->v.s[8] = c->v.s[24];
    c->v.s[13] = c->v.s[3];
    ST32(c->r[13] + 984u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 976u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 676u);
    ST32(c->r[13] + 972u, c->v.s[6]);
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[14] + 396u);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.s[6] = c->v.s[19];
    c->v.s[3] = c->v.s[2];
    c->v.f[5] = c->v.f[5] + (float)(c->v.f[0] * c->v.f[0]);
    ST32(c->r[13] + 968u, c->v.s[5]);
    c->v.f[0] = sqrtf(c->v.f[5]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0481c; }
    c->v.s[0] = c->v.s[5];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[19] = c->v.s[7];
    ST32(c->r[13] + 724u, c->v.s[11]);
    ST32(c->r[13] + 692u, c->v.s[8]);
    c->v.s[24] = c->v.s[13];
    c->v.s[20] = c->v.s[9];
    ST32(c->r[14] + 164u, c->v.s[6]);
    c->r[14] = 0xb047e0u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[13] + 676u);
    c->v.s[8] = LD32(c->r[13] + 692u);
    c->v.s[11] = LD32(c->r[13] + 724u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[1] = LD32(c->r[13] + 1016u);
    c->v.s[12] = LD32(c->r[13] + 1020u);
    c->v.s[10] = LD32(c->r[13] + 908u);
    c->v.s[9] = c->v.s[20];
    c->v.s[13] = c->v.s[24];
    c->v.s[7] = c->v.s[19];
    c->v.s[14] = 0x3f800000u;
    c->v.s[6] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 348u);
L_b0481c:;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 692u, c->v.s[25]);
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    ST32(c->r[13] + 696u, c->v.s[23]);
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[12] * c->v.f[7]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[1] * c->v.f[9]);
    ST32(c->r[13] + 724u, c->v.s[28]);
    c->v.s[2] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[25] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[11];
    ST32(c->r[14] + 164u, c->v.s[20]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 640u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[14] + 120u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[23] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[6];
    c->v.s[23] = LD32(c->r[13] + 972u);
    ST32(c->r[14] + 120u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 636u, c->v.s[11]);
    c->v.f[11] = c->v.f[31] * c->v.f[0];
    c->v.f[23] = -c->v.f[23] + (float)(c->v.f[3] * c->v.f[18]);
    c->v.s[2] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[28] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    c->v.f[8] = c->v.f[30] * c->v.f[0];
    c->v.s[28] = c->v.s[3];
    c->v.s[3] = c->v.s[9];
    ST32(c->r[14] + 212u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 628u, c->v.s[6]);
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[10] * c->v.f[6]);
    c->v.s[6] = LD32(c->r[13] + 924u);
    ST32(c->r[14] + 308u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 988u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[2] * c->v.f[27]);
    c->v.s[2] = LD32(c->r[13] + 1008u);
    c->v.f[27] = c->v.f[2] * c->v.f[21];
    c->v.s[2] = LD32(c->r[13] + 992u);
    ST32(c->r[14] + 156u, c->v.s[26]);
    c->v.s[26] = LD32(c->r[13] + 984u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 1004u);
    c->v.s[6] = LD32(c->r[13] + 996u);
    c->v.f[25] = c->v.f[2] * c->v.f[21];
    c->v.s[2] = LD32(c->r[13] + 1000u);
    c->v.f[29] = c->v.f[29] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.s[2] = LD32(c->r[13] + 684u);
    c->v.s[6] = LD32(c->r[13] + 980u);
    c->v.f[19] = c->v.f[2] * c->v.f[21];
    c->v.s[21] = LD32(c->r[13] + 976u);
    c->v.s[2] = LD32(c->r[13] + 1012u);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[6] * c->v.f[26]);
    c->v.f[26] = -c->v.f[26] + (float)(c->v.f[6] * c->v.f[18]);
    c->v.f[21] = -c->v.f[21] + (float)(c->v.f[2] * c->v.f[18]);
    c->v.s[2] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = c->v.s[7];
    c->v.s[6] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 380u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = c->v.s[22];
    c->v.f[24] = c->v.f[6] - c->v.f[2];
    c->v.s[6] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[11] * c->v.f[11];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[8]);
    c->v.f[7] = c->v.f[6] * c->v.f[0];
    c->v.s[6] = LD32(c->r[14] + 396u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 384u, c->v.s[30]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[7] * c->v.f[7]);
    ST32(c->r[14] + 220u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 216u, c->v.s[11]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[20] * c->v.f[20]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b049c8; }
    c->v.s[0] = c->v.s[2];
    c->v.s[22] = c->v.s[13];
    c->v.s[30] = c->v.s[3];
    c->r[14] = 0xb049a4u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[1] = LD32(c->r[13] + 1016u);
    c->v.s[12] = LD32(c->r[13] + 1020u);
    c->v.s[10] = LD32(c->r[13] + 908u);
    c->v.s[3] = c->v.s[30];
    c->v.s[13] = c->v.s[22];
    c->v.s[14] = 0x3f800000u;
    c->v.s[4] = LD32(c->r[14] + 348u);
L_b049c8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[13] + 640u);
    c->v.s[7] = LD32(c->r[13] + 628u);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[10] * c->v.f[3]);
    c->v.s[3] = c->v.s[28];
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    ST32(c->r[13] + 924u, c->v.s[20]);
    c->v.s[2] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[2] + c->v.f[6];
    c->v.s[6] = LD32(c->r[14] + 120u);
    c->v.s[2] = LD32(c->r[13] + 636u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1020u, c->v.s[6]);
    c->v.f[30] = c->v.f[7] + c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = c->v.s[31];
    c->v.s[10] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[22] - (float)(c->v.f[1] * c->v.f[18]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[12] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 632u);
    c->v.s[12] = LD32(c->r[13] + 972u);
    c->v.f[18] = c->v.f[20] * c->v.f[0];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[2] * c->v.f[31]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[2] * c->v.f[29]);
    c->v.s[2] = LD32(c->r[13] + 984u);
    c->v.s[10] = LD32(c->r[13] + 976u);
    c->v.s[31] = c->v.s[18];
    c->v.f[21] = c->v.f[21] - (float)(c->v.f[3] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 1012u);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[2] = LD32(c->r[13] + 980u);
    c->v.s[12] = c->v.s[3];
    c->v.f[23] = c->v.f[23] - (float)(c->v.f[2] * c->v.f[10]);
    c->v.s[2] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = LD32(c->r[14] + 352u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - c->v.f[28];
    ST32(c->r[14] + 212u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[24] * c->v.f[10]);
    ST32(c->r[14] + 164u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[2] * c->v.f[0];
    ST32(c->r[14] + 308u, c->v.s[0]);
    c->v.f[0] = sqrtf(c->v.f[5]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 160u, c->v.s[10]);
    c->v.s[10] = c->v.s[22];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 116u, c->v.s[1]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b04b4c; }
    c->v.s[0] = c->v.s[5];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 908u, c->v.s[24]);
    c->v.s[20] = c->v.s[8];
    c->v.s[22] = c->v.s[13];
    c->v.s[24] = c->v.s[10];
    ST32(c->r[14] + 320u, c->v.s[7]);
    c->r[14] = 0xb04b14u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = c->v.s[24];
    c->v.s[12] = LD32(c->r[13] + 676u);
    c->v.s[24] = LD32(c->r[13] + 908u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[6] = LD32(c->r[13] + 1020u);
    c->v.s[13] = c->v.s[22];
    c->v.s[8] = c->v.s[20];
    c->v.s[14] = 0x3f800000u;
    c->v.s[7] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 348u);
L_b04b4c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[13] + 684u);
    c->v.s[22] = LD32(c->r[13] + 1008u);
    ST32(c->r[13] + 988u, c->v.s[8]);
    ST32(c->r[13] + 992u, c->v.s[30]);
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[20] * c->v.f[7]);
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[22] * c->v.f[29]);
    c->v.f[8] = c->v.f[8] - c->v.f[2];
    c->v.f[10] = c->v.f[2] + c->v.f[10];
    c->v.s[2] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[6] - c->v.f[2];
    c->v.f[9] = c->v.f[2] + c->v.f[13];
    c->v.s[2] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[13] + 972u);
    ST32(c->r[14] + 120u, c->v.s[27]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 256u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[13] + 1004u);
    c->v.f[11] = c->v.f[30] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[17];
    c->v.s[17] = c->v.s[29];
    ST32(c->r[13] + 1016u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 980u);
    c->v.f[21] = c->v.f[21] + (float)(c->v.f[2] * c->v.f[6]);
    c->v.s[2] = LD32(c->r[13] + 928u);
    c->v.s[6] = LD32(c->r[13] + 984u);
    ST32(c->r[14] + 252u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[2] * c->v.f[16];
    c->v.s[2] = LD32(c->r[13] + 976u);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[12] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 680u);
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    ST32(c->r[14] + 320u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 1012u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[6]);
    ST32(c->r[14] + 260u, c->v.s[23]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[16];
    c->v.s[16] = c->v.s[21];
    c->v.s[21] = c->v.s[26];
    c->v.s[26] = c->v.s[7];
    c->v.s[7] = c->v.s[24];
    ST32(c->r[13] + 996u, c->v.s[16]);
    ST32(c->r[14] + 316u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[1] * c->v.f[18]);
    c->v.s[13] = c->v.s[2];
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = -c->v.f[27] + (float)(c->v.f[24] * c->v.f[18]);
    c->v.f[13] = -c->v.f[13] + (float)(c->v.f[6] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    ST32(c->r[14] + 328u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[2] - c->v.f[28];
    c->v.s[2] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[6] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[2] * c->v.f[0];
    c->v.f[29] = c->v.f[6] * c->v.f[0];
    c->v.s[6] = LD32(c->r[14] + 396u);
    c->v.f[2] = c->v.f[23] * c->v.f[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[1]);
    ST32(c->r[13] + 984u, c->v.s[1]);
    c->v.f[28] = c->v.f[6] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    ST32(c->r[13] + 980u, c->v.s[28]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[28] * c->v.f[28]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b04d64; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = c->v.s[12];
    c->v.s[28] = c->v.s[13];
    c->v.s[24] = c->v.s[7];
    ST32(c->r[13] + 1012u, c->v.s[3]);
    ST32(c->r[13] + 1000u, c->v.s[9]);
    ST32(c->r[13] + 976u, c->v.s[11]);
    ST32(c->r[14] + 336u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[10]);
    c->r[14] = 0xb04d20u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = c->v.s[28];
    c->v.s[12] = c->v.s[16];
    c->v.s[11] = LD32(c->r[13] + 976u);
    c->v.s[9] = LD32(c->r[13] + 1000u);
    c->v.s[3] = LD32(c->r[13] + 1012u);
    c->v.s[1] = LD32(c->r[13] + 984u);
    c->v.s[28] = LD32(c->r[13] + 980u);
    c->v.s[16] = LD32(c->r[13] + 996u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[7] = c->v.s[24];
    c->v.s[14] = 0x3f800000u;
    c->v.s[10] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 348u);
L_b04d64:;
    c->v.s[2] = LD32(c->r[13] + 1016u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.f[10] = c->v.f[8] + c->v.f[10];
    c->v.f[8] = c->v.f[3] + c->v.f[9];
    c->v.f[6] = c->v.f[11] + c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 120u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1012u, c->v.s[8]);
    ST32(c->r[13] + 1000u, c->v.s[10]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[25] * c->v.f[17]);
    ST32(c->r[13] + 1016u, c->v.s[6]);
    ST32(c->r[14] + 120u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[20] * c->v.f[2]);
    ST32(c->r[14] + 256u, c->v.s[24]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[22] * c->v.f[26]);
    c->v.f[26] = c->v.f[1] * c->v.f[0];
    c->v.f[22] = c->v.f[29] * c->v.f[0];
    ST32(c->r[14] + 252u, c->v.s[2]);
    c->v.s[2] = LD32(c->r[13] + 660u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[16] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[21]);
    c->v.s[25] = c->v.s[30];
    ST32(c->r[14] + 320u, c->v.s[16]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[20]);
    ST32(c->r[14] + 316u, c->v.s[16]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[7] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[20] * c->v.f[16]);
    c->v.f[13] = c->v.f[13] - (float)(c->v.f[20] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->v.f[20] = c->v.f[23] * c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[2] * c->v.f[16]);
    c->v.s[24] = c->v.s[20];
    c->v.f[2] = c->v.f[28] * c->v.f[0];
    c->v.s[0] = LD32(c->r[14] + 328u);
    c->v.s[28] = c->v.s[22];
    c->v.s[16] = c->v.s[26];
    c->v.s[17] = c->v.s[2];
    c->v.f[24] = -c->v.f[24] + (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[28] = -c->v.f[28] + (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[16] = -c->v.f[16] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[18] * c->v.f[26]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[0] * c->v.f[26]);
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[18] * c->v.f[20]);
    c->v.f[16] = c->v.f[16] - (float)(c->v.f[19] * c->v.f[22]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[19] * c->v.f[20]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[0] * c->v.f[22]);
    c->v.f[0] = sqrtf(c->v.f[5]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b04ee8; }
    c->v.s[0] = c->v.s[5];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1008u, c->v.s[12]);
    ST32(c->r[13] + 908u, c->v.s[7]);
    ST32(c->r[14] + 336u, c->v.s[25]);
    c->v.s[25] = c->v.s[13];
    c->r[14] = 0xb04eb4u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = c->v.s[25];
    c->v.s[7] = LD32(c->r[13] + 908u);
    c->v.s[1] = LD32(c->r[13] + 984u);
    c->v.s[12] = LD32(c->r[13] + 1008u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[10] = LD32(c->r[13] + 1000u);
    c->v.s[8] = LD32(c->r[13] + 1012u);
    c->v.s[6] = LD32(c->r[13] + 1016u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[25] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 348u);
L_b04ee8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = LD32(c->r[13] + 680u);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[19] * c->v.f[26]);
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    ST32(c->r[13] + 1008u, c->v.s[21]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[18] * c->v.f[22]);
    c->v.s[2] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[10] - c->v.f[2];
    c->v.s[10] = LD32(c->r[14] + 120u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[2] + c->v.f[10];
    c->v.s[2] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[8] - c->v.f[2];
    c->v.s[8] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + c->v.f[8];
    ST32(c->r[14] + 268u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - c->v.f[2];
    ST32(c->r[14] + 156u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + c->v.f[6];
    c->v.s[6] = LD32(c->r[13] + 928u);
    ST32(c->r[14] + 120u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[25] + (float)(c->v.f[2] * c->v.f[21]);
    c->v.s[2] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.s[8] = LD32(c->r[13] + 996u);
    ST32(c->r[14] + 320u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[30] * c->v.f[8]);
    ST32(c->r[14] + 316u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[2] * c->v.f[8]);
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[2] * c->v.f[31];
    c->v.s[2] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[13] = c->v.f[13] + (float)(c->v.f[7] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[31];
    ST32(c->r[14] + 252u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 272u, c->v.s[29]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[31] = c->v.f[2] * c->v.f[31];
    c->v.f[2] = c->v.f[29] * c->v.f[17];
    c->v.s[29] = c->v.s[25];
    ST32(c->r[14] + 336u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 160u, c->v.s[23]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[23] * c->v.f[17];
    c->v.s[2] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[16] = c->v.f[16] + (float)(c->v.f[2] * c->v.f[20]);
    c->v.f[2] = c->v.f[1] * c->v.f[17];
    ST32(c->r[14] + 332u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 352u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[2] * c->v.f[0];
    c->v.f[18] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->v.f[2] = c->v.f[26] * c->v.f[26];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 264u, c->v.s[27]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[22]);
    ST32(c->r[14] + 256u, c->v.s[18]);
    c->v.f[17] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[18] * c->v.f[18]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05140; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = c->v.s[12];
    c->v.s[20] = c->v.s[13];
    c->v.s[27] = c->v.s[8];
    ST32(c->r[14] + 328u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 308u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 148u, c->v.s[11]);
    c->r[14] = 0xb050fcu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[27];
    c->v.s[1] = LD32(c->r[13] + 984u);
    c->v.s[12] = c->v.s[18];
    c->v.s[6] = LD32(c->r[13] + 928u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[13] = c->v.s[20];
    c->v.s[14] = 0x3f800000u;
    c->v.s[11] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[27] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[14] + 256u);
L_b05140:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[3] + c->v.f[9];
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[11] = c->v.f[11] + c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 120u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[2] + c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[29] = c->v.f[29] - (float)(c->v.f[30] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 996u);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[4] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 1008u);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[6] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[13] + 924u);
    c->v.f[6] = c->v.f[18] * c->v.f[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[2] * c->v.f[12]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[2] * c->v.f[27]);
    c->v.s[27] = c->v.s[18];
    ST32(c->r[14] + 320u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 328u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[31] = c->v.s[6];
    c->v.s[4] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] + (float)(c->v.f[2] * c->v.f[13]);
    c->v.s[2] = LD32(c->r[13] + 980u);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[28]);
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[24]);
    ST32(c->r[14] + 336u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[2] * c->v.f[16]);
    c->v.f[2] = c->v.f[22] * c->v.f[0];
    ST32(c->r[14] + 332u, c->v.s[4]);
    c->v.f[4] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[26] * c->v.f[0];
    c->v.s[18] = c->v.s[2];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 268u, c->v.s[28]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 308u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[4];
    c->v.s[30] = c->v.s[0];
    c->v.f[18] = -c->v.f[18] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[31] = -c->v.f[31] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[30] = -c->v.f[30] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[2]);
    c->v.s[4] = c->v.s[20];
    c->v.s[20] = c->v.s[3];
    c->v.s[3] = c->v.s[26];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[25] * c->v.f[6]);
    c->v.f[31] = c->v.f[31] - (float)(c->v.f[21] * c->v.f[0]);
    ST32(c->r[14] + 212u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[0]);
    c->v.f[30] = c->v.f[30] - (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[19] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[5]);
    c->v.f[31] = c->v.f[31] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.s[25] = c->v.s[27];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[30] = c->v.f[30] + (float)(c->v.f[21] * c->v.f[6]);
    c->v.s[21] = c->v.s[24];
    ST32(c->r[14] + 164u, c->v.s[21]);
    c->v.f[28] = c->v.f[25] * c->v.f[8];
    c->v.f[24] = c->v.f[26] * c->v.f[8];
    c->v.f[27] = c->v.f[22] * c->v.f[8];
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[17] * c->v.f[31]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[17] * c->v.f[30]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[17] * c->v.f[18]);
    c->v.s[17] = c->v.s[23];
    c->v.s[23] = c->v.s[7];
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05318; }
    c->v.s[0] = c->v.s[5];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[19] = c->v.s[12];
    c->v.s[21] = c->v.s[13];
    c->v.s[25] = c->v.s[4];
    c->v.s[26] = c->v.s[9];
    ST32(c->r[14] + 260u, c->v.s[17]);
    c->v.s[17] = c->v.s[10];
    c->r[14] = 0xb052d0u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = c->v.s[25];
    c->v.s[13] = c->v.s[21];
    c->v.s[1] = LD32(c->r[13] + 984u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[10] = c->v.s[17];
    c->v.s[9] = c->v.s[26];
    c->v.s[12] = c->v.s[19];
    c->v.s[14] = 0x3f800000u;
    c->v.s[11] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[14] + 256u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[17] = LD32(c->r[14] + 260u);
L_b05318:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[25] * c->v.f[18]);
    c->v.f[28] = c->v.f[28] + (float)(c->v.f[22] * c->v.f[30]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[3] * c->v.f[31]);
    ST32(c->r[14] + 140u, c->v.s[22]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = c->v.s[1];
    c->v.s[2] = LD32(c->r[14] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 208u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[10] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[29];
    ST32(c->r[14] + 156u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 284u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 280u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[11] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[4];
    ST32(c->r[14] + 148u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 280u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 276u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 316u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[9] - c->v.f[2];
    c->v.f[2] = c->v.f[2] + c->v.f[20];
    ST32(c->r[14] + 144u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 276u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[2] * c->v.f[13]);
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->v.s[9];
    c->v.f[23] = c->v.f[23] + (float)(c->v.f[2] * c->v.f[11]);
    c->v.s[2] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[7] = c->v.s[23];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[12]);
    ST32(c->r[14] + 328u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[1] * c->v.f[21]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[2] * c->v.f[16]);
    ST32(c->r[14] + 260u, c->v.s[17]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[26] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 348u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 352u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[20] = c->v.f[2] - c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 132u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[25] = c->v.f[4] - c->v.f[2];
    c->v.s[2] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[21] = c->v.f[2] * c->v.f[0];
    c->v.s[2] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[2] * c->v.f[0];
    c->v.f[23] = c->v.f[4] * c->v.f[0];
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->v.f[2] = c->v.f[21] * c->v.f[21];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[29] = c->v.f[4] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[23] * c->v.f[23]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05528; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->v.s[2];
    ST32(c->r[13] + 1008u, c->v.s[12]);
    ST32(c->r[14] + 288u, c->v.s[13]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 320u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 336u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 252u, c->v.s[7]);
    c->r[14] = 0xb054ecu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[13] + 1008u);
    c->v.s[5] = LD32(c->r[13] + 968u);
    c->v.s[14] = 0x3f800000u;
    c->v.s[7] = LD32(c->r[14] + 252u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = LD32(c->r[14] + 288u);
L_b05528:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[14] / c->v.f[0];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[26] * c->v.f[16]);
    { uint32_t ea = c->r[13] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[14] + 156u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[3] = c->v.f[2] + c->v.f[1];
    c->v.s[2] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 280u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[1] = c->v.f[2] + c->v.f[1];
    c->v.s[2] = LD32(c->r[14] + 276u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[9] + c->v.f[2];
    ST32(c->r[14] + 336u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[2] * c->v.f[11]);
    c->v.s[2] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[2] * c->v.f[12]);
    c->v.s[11] = c->v.s[7];
    c->v.s[7] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 260u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[7] - (float)(c->v.f[2] * c->v.f[13]);
    c->v.s[2] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[13] = c->v.s[6];
    c->v.f[6] = c->v.f[23] * c->v.f[0];
    c->v.f[9] = c->v.f[9] - (float)(c->v.f[22] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[2] * c->v.f[4]);
    c->v.s[2] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[29] * c->v.f[0];
    c->v.f[28] = c->v.f[28] - (float)(c->v.f[2] * c->v.f[18]);
    c->v.s[2] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = c->v.s[10];
    c->v.s[10] = c->v.s[6];
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[2] * c->v.f[31]);
    c->v.s[2] = LD32(c->r[14] + 256u);
    c->v.s[31] = c->v.s[8];
    c->v.s[8] = c->v.s[4];
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[2] * c->v.f[30]);
    c->v.f[2] = c->v.f[19] * c->v.f[0];
    c->v.f[0] = c->v.f[21] * c->v.f[0];
    c->v.s[12] = c->v.s[0];
    c->v.s[14] = c->v.s[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[2]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[25] * c->v.f[0]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[20] * c->v.f[4]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.s[4] = c->v.s[7];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[20] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[20] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[17] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[20] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[25] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[17] * c->v.f[0]);
    c->v.f[0] = sqrtf(c->v.f[5]);
    c->v.s[25] = c->r[0];
    { uint32_t ea = c->r[13] + 0x330u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->v.s[28];
    c->v.f[18] = c->v.f[23] * c->v.f[8];
    c->v.f[20] = c->v.f[21] * c->v.f[8];
    c->v.f[17] = c->v.f[19] * c->v.f[8];
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[29] * c->v.f[10]);
    c->v.s[8] = c->v.s[9];
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[29] * c->v.f[12]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[29] * c->v.f[14]);
    c->v.s[29] = c->r[0];
    { uint32_t ea = c->r[13] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[18] = c->v.f[18] + (float)(c->v.f[19] * c->v.f[12]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[23] * c->v.f[14]);
    c->v.f[17] = c->v.f[17] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.s[16] = c->r[0];
    c->v.f[18] = c->v.f[18] - (float)(c->v.f[21] * c->v.f[14]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[19] * c->v.f[10]);
    c->v.f[17] = c->v.f[17] - (float)(c->v.f[23] * c->v.f[12]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    c->v.s[10] = c->v.s[11];
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b0570c; }
    c->v.s[0] = c->v.s[5];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[26] = c->v.s[1];
    c->v.s[28] = c->v.s[3];
    c->v.s[22] = c->v.s[4];
    c->v.s[30] = c->v.s[6];
    c->v.s[19] = c->v.s[8];
    c->v.s[21] = c->v.s[10];
    c->v.s[23] = c->v.s[13];
    ST32(c->r[14] + 320u, c->v.s[31]);
    c->v.s[31] = c->v.s[15];
    c->r[14] = 0xb056e4u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[15] = c->v.s[31];
    c->v.s[13] = c->v.s[23];
    c->v.s[10] = c->v.s[21];
    c->v.s[8] = c->v.s[19];
    c->v.s[6] = c->v.s[30];
    c->v.s[4] = c->v.s[22];
    c->v.s[3] = c->v.s[28];
    c->v.s[1] = c->v.s[26];
    c->v.s[31] = LD32(c->r[14] + 320u);
L_b0570c:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = LD32(c->r[14] + 348u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 328u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[23] = LD32(c->r[14] + 352u);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 332u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[22] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[30] = c->v.f[3] - c->v.f[28];
    c->v.f[13] = c->v.f[28] + c->v.f[13];
    c->v.f[25] = c->v.f[25] - c->v.f[28];
    c->v.f[18] = c->v.f[28] + c->v.f[18];
    c->v.f[26] = c->v.f[1] - c->v.f[23];
    c->v.f[1] = c->v.f[28] + c->v.f[31];
    c->v.f[31] = c->v.f[29] - c->v.f[23];
    c->v.f[3] = c->v.f[23] + c->v.f[10];
    c->v.f[11] = c->v.f[23] + c->v.f[8];
    c->v.f[24] = c->v.f[23] + c->v.f[24];
    c->v.f[4] = c->v.f[2] + c->v.f[4];
    c->v.f[21] = c->v.f[16] - c->v.f[2];
    c->v.f[16] = c->v.f[23] + c->v.f[20];
    c->v.s[20] = c->v.s[2];
    c->v.f[9] = c->v.f[2] + c->v.f[15];
    c->v.f[15] = c->v.f[2] + c->v.f[27];
    c->v.f[22] = c->v.f[22] - c->v.f[2];
    c->v.f[2] = c->v.f[20] + c->v.f[17];
    ST32(c->r[14] + 284u, c->v.s[4]);
    c->v.f[4] = c->v.f[28] + c->v.f[6];
    c->v.s[6] = 0x3f800000u;
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 320u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[2]);
    c->v.f[2] = c->v.f[6] / c->v.f[0];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[0] * c->v.f[2];
    c->v.s[0] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[27] = c->v.f[0] * c->v.f[2];
    c->v.f[17] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = LD32(c->r[14] + 396u);
    c->v.f[0] = c->v.f[19] * c->v.f[19];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[29] = c->v.f[4] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[29]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05884; }
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 276u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 272u, c->v.s[24]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = c->v.s[1];
    ST32(c->r[14] + 288u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 268u, c->v.s[18]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = c->v.s[20];
    c->v.s[20] = c->v.s[15];
    ST32(c->r[14] + 264u, c->v.s[16]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = c->v.s[11];
    ST32(c->r[14] + 280u, c->v.s[13]);
    c->r[14] = 0xb0583cu; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[11] = c->v.s[16];
    c->v.s[15] = c->v.s[20];
    c->v.s[20] = c->v.s[18];
    c->v.s[1] = c->v.s[24];
    c->v.s[6] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
    c->v.s[13] = LD32(c->r[14] + 280u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 264u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[18] = LD32(c->r[14] + 268u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[24] = LD32(c->r[14] + 272u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 276u);
L_b05884:;
    c->v.f[0] = c->v.f[6] / c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[27] * c->v.f[0];
    c->v.f[4] = c->v.f[29] * c->v.f[0];
    c->v.f[6] = c->v.f[17] * c->v.f[0];
    c->v.f[0] = c->v.f[19] * c->v.f[0];
    c->v.s[8] = c->v.s[4];
    c->v.s[12] = c->v.s[0];
    c->v.s[14] = c->v.s[2];
    c->v.s[10] = c->v.s[6];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[2]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[31] * c->v.f[4]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[25] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[31] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[25] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[31] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[25] * c->v.f[6]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[21] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[31] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[25] * c->v.f[0]);
    c->v.f[6] = c->v.f[30] + c->v.f[18];
    ST32(c->r[14] + 288u, c->v.s[6]);
    c->v.f[6] = c->v.f[26] + c->v.f[16];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[17] * c->v.f[8];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[29] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[27] * c->v.f[12]);
    ST32(c->r[14] + 140u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[19] * c->v.f[8];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[29] * c->v.f[12]);
    c->v.s[6] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[27] * c->v.f[8];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[29] * c->v.f[14]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[19] * c->v.f[14]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[17] * c->v.f[14]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[10]);
    c->v.f[4] = c->v.f[4] - (float)(c->v.f[27] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[17] * c->v.f[12]);
    c->v.f[6] = c->v.f[22] + c->v.f[6];
    c->v.f[2] = c->v.f[28] + c->v.f[2];
    c->v.f[4] = c->v.f[23] + c->v.f[4];
    ST32(c->r[13] + 1004u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[30] + c->v.f[2];
    c->v.f[0] = c->v.f[20] + c->v.f[0];
    c->v.f[6] = c->v.f[30] + c->v.f[6];
    c->v.f[0] = c->v.f[22] + c->v.f[0];
    ST32(c->r[14] + 148u, c->v.s[6]);
    c->v.f[6] = c->v.f[26] + c->v.f[24];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 144u, c->v.s[6]);
    c->v.f[6] = c->v.f[22] + c->v.f[15];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[13] + 1008u, c->v.s[6]);
    c->v.f[6] = c->v.f[30] + c->v.f[13];
    ST32(c->r[14] + 160u, c->v.s[6]);
    c->v.f[6] = c->v.f[26] + c->v.f[11];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 136u, c->v.s[6]);
    c->v.f[6] = c->v.f[22] + c->v.f[9];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 132u, c->v.s[6]);
    c->v.f[6] = c->v.f[30] + c->v.f[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 320u, c->v.s[6]);
    c->v.f[6] = c->v.f[26] + c->v.f[3];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 312u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 284u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[22] + c->v.f[6];
    ST32(c->r[14] + 164u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 220u, c->v.s[2]);
    c->v.f[2] = c->v.f[26] + c->v.f[4];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 216u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 212u, c->v.s[0]);
L_b059d8:;
    { uint32_t ea = c->r[13] + 0x3a8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x400u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[16] = LD32(c->r[14] + 204u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = c->r[1];
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3acu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[4] * c->v.f[0];
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x408u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[3] = c->v.f[6] * c->v.f[0];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x3b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[8]);
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x404u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[12] * c->v.f[0];
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x40cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[4] * c->v.f[14]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[6] * c->v.f[14]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[14]);
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x460u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[5]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[2] * c->v.f[5]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[2] * c->v.f[8]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[4] * c->v.f[5]);
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x464u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[8]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[3] = c->v.f[3] - (float)(c->v.f[12] * c->v.f[5]);
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x468u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[2] * c->v.f[14]);
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x46cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[20] = c->v.f[10] * c->v.f[6];
    c->v.f[26] = c->v.f[1] * c->v.f[6];
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[3] * c->v.f[2]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.s[8] = c->r[0];
    c->v.f[25] = c->v.f[3] * c->v.f[6];
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[20] = c->v.f[20] + (float)(c->v.f[1] * c->v.f[8]);
    c->v.f[26] = c->v.f[26] + (float)(c->v.f[0] * c->v.f[4]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[10] * c->v.f[4]);
    c->v.f[9] = c->v.f[0] * c->v.f[6];
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[20] = c->v.f[20] - (float)(c->v.f[0] * c->v.f[2]);
    c->v.f[26] = c->v.f[26] - (float)(c->v.f[10] * c->v.f[8]);
    c->v.f[25] = c->v.f[25] - (float)(c->v.f[0] * c->v.f[8]);
    c->v.f[9] = c->v.f[9] + (float)(c->v.f[10] * c->v.f[2]);
    c->v.f[9] = c->v.f[9] - (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[22] = c->v.f[20] * c->v.f[20];
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[26] * c->v.f[26]);
    ST32(c->r[14] + 364u, c->v.s[9]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[9] * c->v.f[9]);
    c->v.f[22] = c->v.f[22] + (float)(c->v.f[25] * c->v.f[25]);
    c->v.f[0] = sqrtf(c->v.f[22]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05af8; }
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xb05af0u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 364u);
L_b05af8:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = 0x3f800000u;
    c->v.s[3] = LD32(c->r[14] + 244u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14] + 176u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[19] = c->v.f[2] - c->v.f[3];
    c->v.s[2] = LD32(c->r[14] + 172u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[2] - c->v.f[5];
    c->v.s[2] = LD32(c->r[14] + 168u);
    c->v.f[18] = c->v.f[2] - c->v.f[16];
    c->v.f[2] = c->v.f[14] / c->v.f[0];
    c->v.f[17] = c->v.f[20] * c->v.f[2];
    c->v.f[16] = c->v.f[26] * c->v.f[2];
    c->v.f[30] = c->v.f[9] * c->v.f[2];
    c->v.f[21] = c->v.f[25] * c->v.f[2];
    c->v.f[0] = c->v.f[17] * c->v.f[17];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[16] * c->v.f[16]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[30] * c->v.f[30]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[21] * c->v.f[21]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05b88; }
    c->r[14] = 0xb05b68u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
    c->v.s[9] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 244u);
L_b05b88:;
    c->v.f[0] = c->v.f[14] / c->v.f[2];
    c->v.d[14] = c->v.d[7];
    c->v.f[2] = c->v.f[16] * c->v.f[0];
    c->v.f[4] = c->v.f[21] * c->v.f[0];
    c->v.f[6] = c->v.f[30] * c->v.f[0];
    c->v.f[0] = c->v.f[17] * c->v.f[0];
    c->v.s[8] = c->v.s[4];
    c->v.s[10] = c->v.s[6];
    c->v.s[12] = c->v.s[0];
    c->v.s[14] = c->v.s[2];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[19] * c->v.f[2]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[23] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[19] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[23] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[22]);
    c->v.f[27] = c->v.f[30] * c->v.f[8];
    c->v.f[24] = c->v.f[17] * c->v.f[8];
    c->v.f[19] = c->v.f[16] * c->v.f[8];
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[21] * c->v.f[12]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[21] * c->v.f[14]);
    c->v.f[27] = c->v.f[27] + (float)(c->v.f[16] * c->v.f[12]);
    c->v.f[24] = c->v.f[24] + (float)(c->v.f[30] * c->v.f[14]);
    c->v.f[19] = c->v.f[19] + (float)(c->v.f[17] * c->v.f[10]);
    c->v.f[27] = c->v.f[27] - (float)(c->v.f[17] * c->v.f[14]);
    c->v.f[24] = c->v.f[24] - (float)(c->v.f[16] * c->v.f[10]);
    c->v.f[19] = c->v.f[19] - (float)(c->v.f[30] * c->v.f[12]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05c40; }
    c->v.s[0] = c->v.s[22];
    c->r[14] = 0xb05c28u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[9] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 244u);
L_b05c40:;
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[22] = c->v.f[5] + c->v.f[24];
    c->v.f[30] = c->v.f[3] + c->v.f[27];
    c->v.s[2] = LD32(c->r[14] + 188u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[2] - c->v.f[3];
    c->v.s[2] = LD32(c->r[14] + 184u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[18] = c->v.f[2] - c->v.f[5];
    c->v.s[2] = LD32(c->r[14] + 180u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 204u);
    c->v.f[31] = c->v.f[2] - c->v.f[4];
    c->v.f[2] = c->v.f[28] / c->v.f[0];
    c->v.s[24] = c->v.s[4];
    c->v.f[16] = c->v.f[24] + c->v.f[19];
    c->v.f[21] = c->v.f[20] * c->v.f[2];
    c->v.f[17] = c->v.f[26] * c->v.f[2];
    c->v.f[19] = c->v.f[9] * c->v.f[2];
    c->v.f[27] = c->v.f[25] * c->v.f[2];
    c->v.f[0] = c->v.f[21] * c->v.f[21];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[17] * c->v.f[17]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[19] * c->v.f[19]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[27] * c->v.f[27]);
    c->v.f[2] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[2], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_b05cd4; }
    c->r[14] = 0xb05cb4u; f_15efddc(c);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = 0x3f800000u;
    c->v.s[2] = c->v.s[0];
    c->v.s[9] = LD32(c->r[14] + 364u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 244u);
L_b05cd4:;
    c->v.f[0] = c->v.f[28] / c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[7] = c->r[7];
    c->v.f[2] = c->v.f[17] * c->v.f[0];
    c->v.f[4] = c->v.f[27] * c->v.f[0];
    c->v.f[6] = c->v.f[19] * c->v.f[0];
    c->v.f[0] = c->v.f[21] * c->v.f[0];
    c->v.s[8] = c->v.s[4];
    c->v.s[14] = c->v.s[2];
    c->v.s[10] = c->v.s[6];
    c->v.s[12] = c->v.s[0];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[31] * c->v.f[2]);
    c->v.f[14] = -c->v.f[14] + (float)(c->v.f[31] * c->v.f[4]);
    c->v.f[10] = -c->v.f[10] + (float)(c->v.f[23] * c->v.f[4]);
    c->v.f[12] = -c->v.f[12] + (float)(c->v.f[18] * c->v.f[4]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[18] * c->v.f[0]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[18] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[31] * c->v.f[0]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[23] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[23] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[23] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[18] * c->v.f[2]);
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[31] * c->v.f[6]);
    c->v.s[0] = LD32(c->r[13] + 708u);
    c->v.s[2] = LD32(c->r[13] + 704u);
    c->v.f[1] = c->v.f[19] * c->v.f[8];
    c->v.f[6] = c->v.f[21] * c->v.f[8];
    c->v.f[8] = c->v.f[17] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[27] * c->v.f[14]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[27] * c->v.f[12]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[27] * c->v.f[10]);
    c->v.s[27] = 0xbf800000u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[19] * c->v.f[14]);
    c->v.f[1] = c->v.f[1] + (float)(c->v.f[17] * c->v.f[12]);
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[19] * c->v.f[12]);
    c->v.s[19] = LD32(c->r[14] + 112u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[17] * c->v.f[10]);
    c->v.f[1] = c->v.f[1] - (float)(c->v.f[21] * c->v.f[14]);
    c->v.s[31] = LD32(c->r[14] + 304u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 152u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = LD32(c->r[14] + 344u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 328u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[19] - c->v.f[0];
    c->v.f[2] = c->v.f[31] - c->v.f[2];
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    c->v.f[10] = c->v.f[3] + c->v.f[1];
    c->v.f[6] = c->v.f[5] + c->v.f[6];
    c->v.f[8] = c->v.f[24] + c->v.f[8];
    c->v.f[12] = c->v.f[0] + c->v.f[12];
    c->v.f[3] = c->v.f[3] + c->v.f[0];
    c->v.f[5] = c->v.f[5] + c->v.f[2];
    c->v.f[24] = c->v.f[24] + c->v.f[4];
    c->v.f[10] = c->v.f[0] + c->v.f[10];
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    ST32(c->r[14] + 348u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 332u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[2] + c->v.f[12];
    ST32(c->r[14] + 352u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 336u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[4] + c->v.f[12];
    ST32(c->r[14] + 364u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 208u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[0] + c->v.f[12];
    ST32(c->r[14] + 284u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 308u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[2] + c->v.f[12];
    ST32(c->r[14] + 280u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[12] = LD32(c->r[14] + 316u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[4] + c->v.f[12];
    ST32(c->r[14] + 276u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[13] + 1000u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[0] + c->v.f[12];
    ST32(c->r[14] + 272u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[13] + 1012u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[2] + c->v.f[12];
    ST32(c->r[14] + 268u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[13] + 1016u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[4] + c->v.f[12];
    ST32(c->r[14] + 264u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[13] + 988u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[0] + c->v.f[12];
    ST32(c->r[14] + 260u, c->v.s[12]);
    c->v.s[12] = LD32(c->r[13] + 1020u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[2] + c->v.f[12];
    ST32(c->r[14] + 256u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 188u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 184u, c->v.s[6]);
    c->v.f[6] = c->v.f[4] + c->v.f[8];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = c->r[5];
    ST32(c->r[14] + 180u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 992u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    ST32(c->r[14] + 252u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 692u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[0] + c->v.f[6];
    ST32(c->r[14] + 156u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 696u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    ST32(c->r[14] + 120u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 724u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    ST32(c->r[14] + 116u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 244u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 240u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 204u, c->v.s[24]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 340u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + c->v.f[0];
    ST32(c->r[14] + 340u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 360u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + c->v.f[2];
    ST32(c->r[14] + 360u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 356u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[6] + c->v.f[4];
    ST32(c->r[14] + 356u, c->v.s[6]);
    c->v.f[6] = c->v.f[0] + c->v.f[30];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = 0x0u;
    ST32(c->r[14] + 176u, c->v.s[6]);
    c->v.f[6] = c->v.f[2] + c->v.f[22];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 172u, c->v.s[6]);
    c->v.f[6] = c->v.f[4] + c->v.f[16];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 168u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 288u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[17] = c->v.f[0] + c->v.f[6];
    c->v.s[6] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    ST32(c->r[14] + 288u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 1004u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[23] = c->v.f[4] + c->v.f[6];
    c->v.s[6] = LD32(c->r[14] + 148u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[0] + c->v.f[6];
    ST32(c->r[14] + 148u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    ST32(c->r[14] + 140u, c->v.s[6]);
    c->v.s[6] = LD32(c->r[13] + 1008u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    ST32(c->r[14] + 144u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 160u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[0] + c->v.f[6];
    ST32(c->r[14] + 328u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    ST32(c->r[14] + 332u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 132u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    ST32(c->r[14] + 336u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 320u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[0] + c->v.f[6];
    ST32(c->r[14] + 316u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 312u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[2] + c->v.f[6];
    ST32(c->r[14] + 320u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 164u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[4] + c->v.f[6];
    ST32(c->r[14] + 312u, c->v.s[6]);
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[8] * c->v.f[6];
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x324u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x328u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[6];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x318u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[6];
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x31cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x414u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[3] * c->v.f[5]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[10]);
    c->r[7] = c->v.s[6];
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->v.s[14];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x418u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[8] * c->v.f[6];
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x308u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x41cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x420u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x314u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[6];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x310u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[12] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[6];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x314u; ST32(ea, c->r[0]); }
    c->v.f[6] = c->v.f[12] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[10]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[10]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[3] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    { uint32_t ea = c->r[13] + 0x30cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[6];
    { uint32_t ea = c->r[13] + 0x308u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x428u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x424u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x42cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x430u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x300u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x304u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x2fcu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[8];
    { uint32_t ea = c->r[13] + 0x2f8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x438u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x434u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x43cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x440u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x2f4u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->r[3] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x2f0u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[8];
    { uint32_t ea = c->r[13] + 0x2ecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x448u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x444u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x44cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x450u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x2e8u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x2e4u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.s[12] = c->r[4];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[5]);
    goto L_b06338;
L_b06338:;
    { uint32_t ea = c->r[13] + 0x2e0u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[8];
    { uint32_t ea = c->r[13] + 0x2dcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x52cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x378u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x528u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x454u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x338u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[5]);
    c->v.s[5] = c->r[6];
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[6] = c->r[6] + 0x1u;
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[8];
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x544u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x458u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x360u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x354u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x35cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x35cu; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[1] = c->r[9];
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    { uint32_t ea = c->r[13] + 0x354u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[8];
    { uint32_t ea = c->r[13] + 0x358u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x45cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x348u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[0];
    { uint32_t ea = c->r[13] + 0x350u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[12] * c->v.f[10];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[3] = c->r[0];
    { uint32_t ea = c->r[13] + 0x4c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[5] = c->r[0];
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.s[7] = c->r[0];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[5]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[7] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[5]);
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->r[0] = c->v.s[14];
    c->v.f[14] = c->v.f[3] * c->v.f[10];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x34cu; ST32(ea, c->r[0]); }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[8] = c->v.f[8] * c->v.f[10];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[7] * c->v.f[6]);
    c->v.s[12] = c->r[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[7] * c->v.f[1]);
    c->v.s[7] = LD32(c->r[14] + 396u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[3] * c->v.f[5]);
    c->v.s[5] = LD32(c->r[14] + 384u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->v.s[14];
    c->v.s[3] = LD32(c->r[14] + 380u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 392u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x344u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[8];
    c->v.s[8] = c->r[10];
    c->v.f[10] = c->v.f[8] * c->v.f[25];
    { uint32_t ea = c->r[13] + 0x348u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x340u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = c->r[0];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[6] * c->v.f[26]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[20]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[14] * c->v.f[9]);
    c->r[10] = c->v.s[10];
    c->v.f[10] = c->v.f[8] * c->v.f[9];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[14] * c->v.f[25]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[26]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[6] * c->v.f[20]);
    c->r[0] = c->v.s[10];
    c->v.f[10] = c->v.f[8] * c->v.f[20];
    c->v.f[8] = c->v.f[8] * c->v.f[26];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[6] * c->v.f[25]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[25]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[14] * c->v.f[20]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[9]);
    { uint32_t ea = c->r[13] + 0x33cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x368u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] - (float)(c->v.f[12] * c->v.f[9]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[14] * c->v.f[26]);
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x370u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->v.s[8];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x364u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[8] = c->v.s[10];
    c->v.f[10] = c->v.f[8] * c->v.f[7];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[6] * c->v.f[5]);
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x36cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = c->r[0];
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[12] * c->v.f[3]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[14] * c->v.f[1]);
    c->r[0] = c->v.s[10];
    c->v.f[10] = c->v.f[14] * c->v.f[7];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x370u; ST32(ea, c->r[0]); }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[5]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[6] * c->v.f[3]);
    c->r[0] = c->v.s[10];
    c->v.f[10] = c->v.f[12] * c->v.f[7];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[3]);
    { uint32_t ea = c->r[13] + 0x36cu; ST32(ea, c->r[0]); }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[6] * c->v.f[1]);
    c->v.f[6] = c->v.f[6] * c->v.f[7];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[8] * c->v.f[5]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[14] * c->v.f[5]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[14] * c->v.f[3]);
    c->r[0] = c->v.s[10];
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[12] * c->v.f[1]);
    { uint32_t ea = c->r[13] + 0x364u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[6];
    c->v.s[6] = LD32(c->r[14] + 212u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[26] = c->v.f[4] + c->v.f[6];
    c->v.s[4] = LD32(c->r[14] + 216u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x368u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[24] = c->v.f[2] + c->v.f[4];
    c->v.s[2] = LD32(c->r[14] + 220u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[25] = LD32(c->r[14] + 224u);
    c->r[14] = c->r[13] + 0x400u;
    (void)f_subs(c, c->r[6], c->r[0]);
    c->v.f[22] = c->v.f[0] + c->v.f[2];
    c->v.s[0] = LD32(c->r[14] + 228u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->v.s[22];
    ST32(c->r[14] + 308u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[20] = LD32(c->r[14] + 292u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 232u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x32cu; ST32(ea, c->r[2]); }
    c->r[2] = c->v.s[24];
    ST32(c->r[14] + 152u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[14] + 236u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x330u; ST32(ea, c->r[2]); }
    c->r[2] = c->v.s[26];
    ST32(c->r[14] + 300u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x334u; ST32(ea, c->r[2]); }
    if (COND_CC) { goto L_affc28; }
    goto L_b06768;
L_b066b8:;
    { uint32_t ea = c->r[13] + 0x32cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x308u; ST32(ea, c->r[7]); }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[19] = c->v.s[0];
    c->r[3] = c->r[10];
    c->r[5] = c->r[7];
    c->r[8] = c->r[1];
    c->v.s[22] = c->r[0];
    { uint32_t ea = c->r[13] + 0x330u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[24] = c->r[0];
    { uint32_t ea = c->r[13] + 0x334u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[26] = c->r[0];
    c->r[0] = c->r[13] + 0x30cu;
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[13] + 0x2fcu;
    { uint32_t ea = c->r[13] + 0x2f8u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[9]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[13] + 0x344u;
    { uint32_t ea = c->r[13] + 0x2ecu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2f0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2f4u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x2dcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x2e0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2e4u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x2e8u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x338u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[13] + 0x354u;
    { uint32_t ea = c->r[13] + 0x350u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[7]); ST32(ea + 8u, c->r[10]); }
    c->r[0] = c->r[10];
    { uint32_t ea = c->r[13] + 0x33cu; ST32(ea, c->r[10]); }
    c->r[10] = c->r[9];
    { uint32_t ea = c->r[13] + 0x360u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x368u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x364u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x370u; ST32(ea, c->r[9]); }
    c->v.s[17] = LD32(c->r[14] + 136u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x36cu; ST32(ea, c->r[0]); }
    c->v.s[23] = LD32(c->r[14] + 132u);
L_b06768:;
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[28] = 0x0u;
    { uint32_t ea = c->r[13] + 0x320u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x324u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x328u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x340u; ST32(ea, c->r[5]); }
    c->v.s[0] = LD32(c->r[14] + 12u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[14] + 28u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[14] + 44u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 60u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[14] + 344u);
    c->v.f[2] = c->v.f[31] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[0]);
    c->v.s[0] = c->v.s[28];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[4]);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b067cc; }
    c->v.s[0] = 0x3f800000u;
    c->v.f[0] = c->v.f[0] / c->v.f[2];
L_b067cc:;
    c->r[14] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[9] = v; }
    c->r[0] = 0x6e10u;
    c->v.s[20] = 0x3f800000u;
    c->r[6] = 0x3f800000u;
    c->r[5] = 0x0u;
    c->v.s[21] = c->v.s[23];
    c->v.s[2] = LD32(c->r[14]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[14] + 4u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 8u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 16u);
    c->r[14] = c->r[13] + 0x800u;
    c->r[1] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x344u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = c->r[9];
    c->v.s[10] = LD32(c->r[14] + 20u);
    c->r[14] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13] + 0x584u; ST32(ea, c->r[1]); }
    c->v.s[12] = LD32(c->r[14] + 24u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[14] = LD32(c->r[14] + 32u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[1] = LD32(c->r[14] + 36u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 344u);
    c->v.f[8] = c->v.f[31] * c->v.f[8];
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[5] * c->v.f[2]);
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[19] * c->v.f[14]);
    c->v.f[10] = c->v.f[31] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[5] * c->v.f[4]);
    c->v.s[4] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[2] = c->v.f[31] * c->v.f[12];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[5] * c->v.f[6]);
    c->v.s[12] = LD32(c->r[14] + 40u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[3] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[19] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[19] * c->v.f[12]);
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.f[8] = c->v.f[3] + c->v.f[10];
    c->v.s[10] = c->r[0];
    c->r[0] = 0x6e14u;
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[8] = c->v.f[10] + c->v.f[10];
    ST32(c->r[1], c->v.s[4]);
    c->r[1] = c->r[9] + c->r[0];
    c->v.f[0] = c->v.f[0] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x34cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x578u; ST32(ea, c->r[1]); }
    ST32(c->r[1], c->v.s[6]);
    c->v.f[6] = c->v.f[10] * c->v.f[8];
    c->v.s[4] = c->r[0];
    c->r[0] = 0x6e18u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x58cu; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x6e1cu;
    c->v.f[2] = c->v.f[4] + c->v.f[4];
    { uint32_t ea = c->r[13] + 0x350u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[0] = c->v.f[4] * c->v.f[2];
    c->v.s[4] = c->r[1];
    { uint32_t ea = c->r[13] + 0x348u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[7] + c->r[0]; ST32(ea, c->r[6]); c->r[7] = ea; }
    c->r[4] = c->r[7] + 0x84u;
    c->r[0] = c->r[4];
    c->v.f[1] = c->v.f[2] * c->v.f[4];
    c->v.s[12] = c->r[1];
    c->r[1] = c->r[13] + 0x750u;
    c->v.f[14] = c->v.f[6] + c->v.f[0];
    c->v.f[3] = c->v.f[12] * c->v.f[8];
    c->v.f[8] = c->v.f[8] * c->v.f[4];
    c->v.f[5] = c->v.f[20] - c->v.f[14];
    c->v.f[14] = c->v.f[12] * c->v.f[2];
    c->v.f[2] = c->v.f[10] * c->v.f[2];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    ST32(c->r[14] + 848u, c->v.s[5]);
    c->v.s[19] = c->v.s[5];
    c->v.f[5] = c->v.f[12] + c->v.f[12];
    c->v.f[9] = c->v.f[14] - c->v.f[8];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[14] + c->v.f[8];
    ST32(c->r[14] + 852u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[30] = c->v.s[7];
    c->v.s[25] = c->v.s[1];
    c->v.f[12] = c->v.f[12] * c->v.f[5];
    c->v.f[4] = c->v.f[5] * c->v.f[4];
    ST32(c->r[14] + 856u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[5]); }
    c->v.s[23] = c->v.s[9];
    c->v.s[31] = c->v.s[8];
    ST32(c->r[14] + 864u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[12] + c->v.f[0];
    c->v.f[10] = c->v.f[2] + c->v.f[4];
    c->v.f[2] = c->v.f[2] - c->v.f[4];
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    c->v.s[29] = c->v.s[10];
    c->v.s[16] = c->v.s[2];
    ST32(c->r[14] + 868u, c->v.s[0]);
    c->v.s[27] = c->v.s[0];
    c->v.f[0] = c->v.f[12] + c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[10]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[5]); }
    ST32(c->r[14] + 880u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[2]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    ST32(c->r[14] + 888u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[5]); }
    c->v.s[18] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xb069d8u; f_21ebe8(c);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[0] = LD32(c->r[14] + 12u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[14] + 28u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[14] + 44u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 60u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[5] = LD32(c->r[14] + 140u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[3] = LD32(c->r[14] + 144u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[1] = LD32(c->r[14] + 148u);
    c->v.f[2] = c->v.f[5] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[0]);
    c->v.s[0] = c->v.s[28];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[1] * c->v.f[4]);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[2], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b06a34; }
    c->v.f[0] = c->v.f[20] / c->v.f[2];
L_b06a34:;
    c->r[14] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13] + 0x35cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = 0x6ed0u;
    { uint32_t ea = c->r[13] + 0x580u; ST32(ea, c->r[4]); }
    c->r[4] = c->r[13] + 0x400u;
    c->v.s[2] = LD32(c->r[14]);
    c->r[14] = c->r[13] + 0x800u;
    c->r[0] = c->r[9] + c->r[0];
    c->v.s[4] = LD32(c->r[14] + 4u);
    c->r[14] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13] + 0x574u; ST32(ea, c->r[0]); }
    c->v.s[6] = LD32(c->r[14] + 8u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 16u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 20u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[14] + 32u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[14] = LD32(c->r[14] + 24u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[8] = c->v.f[5] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[3] * c->v.f[2]);
    c->v.s[2] = LD32(c->r[14] + 36u);
    c->v.f[10] = c->v.f[5] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[3] * c->v.f[4]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[1] * c->v.f[12]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[12] = c->v.f[5] * c->v.f[14];
    c->v.s[14] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.s[6] = c->r[1];
    { uint32_t ea = c->r[13] + 0x354u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[2] = LD32(c->r[14] + 40u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.f[4] = c->v.f[4] + c->v.f[8];
    c->v.s[8] = c->r[1];
    c->v.f[10] = c->v.f[14] + c->v.f[10];
    c->v.s[14] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[12] = c->v.f[12] + (float)(c->v.f[1] * c->v.f[2]);
    c->v.f[2] = c->v.f[6] + c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[1] = c->v.f[8] + c->v.f[8];
    c->v.f[10] = c->v.f[0] * c->v.f[10];
    ST32(c->r[0], c->v.s[4]);
    c->v.f[4] = c->v.f[14] + c->v.f[12];
    c->v.f[6] = c->v.f[6] * c->v.f[2];
    c->v.f[12] = c->v.f[8] * c->v.f[1];
    c->r[0] = 0x6ed4u;
    c->r[0] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x570u; ST32(ea, c->r[0]); }
    ST32(c->r[0], c->v.s[10]);
    c->r[0] = 0x6ed8u;
    c->r[1] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x360u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x568u; ST32(ea, c->r[1]); }
    c->v.f[14] = c->v.f[12] + c->v.f[6];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x358u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[5] = c->v.f[20] - c->v.f[14];
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = c->r[9];
    c->v.f[0] = c->v.f[2] * c->v.f[4];
    c->v.f[14] = c->v.f[1] * c->v.f[4];
    c->v.s[10] = c->r[0];
    c->r[0] = 0x6edcu;
    { uint32_t ea = c->r[1] + c->r[0]; ST32(ea, c->r[6]); c->r[1] = ea; }
    c->r[0] = c->r[1] + 0x4u;
    { uint32_t ea = c->r[13] + 0x564u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x750u;
    c->v.f[3] = c->v.f[10] * c->v.f[1];
    c->v.f[1] = c->v.f[10] * c->v.f[2];
    c->v.f[2] = c->v.f[8] * c->v.f[2];
    { uint32_t ea = c->r[13] + 0x57cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 248u, c->v.s[5]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 848u, c->v.s[5]);
    c->v.f[5] = c->v.f[10] + c->v.f[10];
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[3] + c->v.f[0];
    c->v.f[9] = c->v.f[1] - c->v.f[14];
    c->v.f[3] = c->v.f[3] - c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[5];
    c->v.f[0] = c->v.f[5] * c->v.f[4];
    ST32(c->r[14] + 244u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[6] = c->v.f[10] + c->v.f[6];
    ST32(c->r[14] + 240u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[5]); }
    ST32(c->r[14] + 236u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 864u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[20] - c->v.f[6];
    c->v.f[6] = c->v.f[2] + c->v.f[0];
    c->v.f[0] = c->v.f[2] - c->v.f[0];
    ST32(c->r[14] + 232u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 868u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[10] + c->v.f[12];
    ST32(c->r[14] + 292u, c->v.s[6]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[6]);
    c->v.f[6] = c->v.f[1] + c->v.f[14];
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[5]); }
    c->v.f[2] = c->v.f[20] - c->v.f[4];
    ST32(c->r[4] + 328u, c->v.s[6]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 880u, c->v.s[6]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 324u, c->v.s[0]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 884u, c->v.s[0]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 320u, c->v.s[2]);
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[4] + 888u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[6]); }
    c->r[14] = 0xb06c50u; f_21ebe8(c);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[0] = LD32(c->r[14] + 12u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[14] + 28u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[14] + 44u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[14] + 60u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[14] = LD32(c->r[14] + 288u);
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[21] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[17] * c->v.f[4]);
    c->v.f[0] = c->v.f[6] + c->v.f[2];
    vfp_cmp_f(c, c->v.f[0], 0.0f);
    vfp_mrs_flags(c);
    if (COND_EQ) { goto L_b06c98; }
    c->v.f[28] = c->v.f[20] / c->v.f[0];
L_b06c98:;
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[5] = c->r[13] + 0x800u;
    c->r[12] = 0x3f800000u;
    c->r[6] = c->r[9];
    c->r[14] = c->r[7] - 0x3cu;
    c->r[0] = c->r[0] + 0xc4u;
    { uint32_t ea = c->r[13] + 0x554u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x264u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[0] + 0xb8u;
    { uint32_t ea = c->r[13] + 0x530u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xb4u;
    { uint32_t ea = c->r[13] + 0x52cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0xb0u;
    c->r[0] = c->r[0] + 0x7cu;
    { uint32_t ea = c->r[13] + 0x528u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[13] + 0x54cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x800u;
    c->v.s[4] = LD32(c->r[1] + 8u);
    c->r[1] = c->r[13] + 0x800u;
    c->v.s[0] = LD32(c->r[0]);
    c->r[0] = c->r[13] + 0x800u;
    c->v.s[6] = LD32(c->r[1] + 16u);
    c->r[1] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->r[0] = 0x6f10u;
    c->v.s[8] = LD32(c->r[1] + 20u);
    c->r[1] = c->r[13] + 0x800u;
    c->r[4] = c->r[9] + c->r[0];
    { uint32_t ea = c->r[13] + 0x36cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[1] + 24u);
    c->r[1] = c->r[13] + 0x800u;
    c->v.s[12] = LD32(c->r[1] + 32u);
    c->r[1] = c->r[13] + 0x800u;
    c->v.f[6] = c->v.f[14] * c->v.f[6];
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[21] * c->v.f[0]);
    c->v.s[0] = LD32(c->r[1] + 36u);
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[21] * c->v.f[2]);
    c->r[1] = c->r[13] + 0x800u;
    c->v.s[2] = LD32(c->r[1] + 48u);
    c->r[1] = c->r[13] + 0x800u;
    c->v.f[10] = c->v.f[14] * c->v.f[10];
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[21] * c->v.f[4]);
    c->v.s[14] = LD32(c->r[1] + 40u);
    c->r[1] = c->r[13] + 0x800u;
    c->v.f[8] = c->v.f[8] + (float)(c->v.f[17] * c->v.f[0]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[17] * c->v.f[12]);
    c->v.s[12] = LD32(c->r[1] + 52u);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[17] * c->v.f[14]);
    c->v.f[0] = c->v.f[2] + c->v.f[6];
    c->v.s[2] = LD32(c->r[5] + 56u);
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x364u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[12] + c->v.f[8];
    c->r[5] = 0x0u;
    c->v.s[8] = c->r[0];
    c->r[0] = 0x6f14u;
    c->v.f[0] = c->v.f[28] * c->v.f[0];
    c->v.f[2] = c->v.f[2] + c->v.f[10];
    c->v.f[4] = c->v.f[28] * c->v.f[4];
    c->r[2] = c->r[9] + c->r[0];
    c->r[0] = 0x6f18u;
    c->r[3] = c->r[9] + c->r[0];
    c->r[0] = 0x6f1cu;
    c->v.f[10] = c->v.f[8] + c->v.f[8];
    ST32(c->r[4], c->v.s[0]);
    c->v.f[0] = c->v.f[6] + c->v.f[6];
    c->v.f[2] = c->v.f[28] * c->v.f[2];
    ST32(c->r[2], c->v.s[4]);
    c->v.f[4] = c->v.f[6] * c->v.f[0];
    c->v.f[6] = c->v.f[8] * c->v.f[10];
    ST32(c->r[3], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x370u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.f[14] = c->v.f[6] + c->v.f[4];
    c->v.s[2] = c->r[1];
    { uint32_t ea = c->r[13] + 0x368u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[6] + c->r[0]; ST32(ea, c->r[12]); c->r[6] = ea; }
    { uint32_t ea = c->r[13] + 0x268u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[1] = c->v.f[0] * c->v.f[2];
    c->v.s[12] = c->r[1];
    c->r[1] = c->r[13] + 0x400u;
    c->v.f[14] = c->v.f[20] - c->v.f[14];
    { uint32_t ea = c->r[0]; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x374u; ST32(ea, c->r[8]); }
    { uint32_t ea = c->r[13] + 0x588u; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x550u; ST32(ea, c->r[14]); }
    { uint32_t ea = c->r[13] + 0x53cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x538u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x534u; ST32(ea, c->r[3]); }
    { uint32_t ea = c->r[13] + 0x558u; ST32(ea, c->r[6]); }
    c->v.f[3] = c->v.f[12] * c->v.f[10];
    c->v.f[5] = c->v.f[12] * c->v.f[0];
    c->v.f[10] = c->v.f[10] * c->v.f[2];
    c->v.f[0] = c->v.f[8] * c->v.f[0];
    (void)f_subs(c, c->r[0], 0x0u);
    ST32(c->r[1] + 848u, c->v.s[14]);
    c->v.f[14] = c->v.f[12] + c->v.f[12];
    c->r[1] = c->r[13] + 0x400u;
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[10];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[12] = c->v.f[12] * c->v.f[14];
    c->v.f[2] = c->v.f[14] * c->v.f[2];
    ST32(c->r[1] + 852u, c->v.s[7]);
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 856u, c->v.s[9]);
    c->r[1] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[5]); }
    ST32(c->r[1] + 864u, c->v.s[1]);
    c->r[1] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[12] + c->v.f[4];
    c->v.f[6] = c->v.f[12] + c->v.f[6];
    c->v.f[8] = c->v.f[0] + c->v.f[2];
    c->v.f[0] = c->v.f[0] - c->v.f[2];
    c->v.f[4] = c->v.f[20] - c->v.f[4];
    c->v.f[2] = c->v.f[20] - c->v.f[6];
    ST32(c->r[1] + 868u, c->v.s[4]);
    c->v.f[4] = c->v.f[5] + c->v.f[10];
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 872u, c->v.s[8]);
    c->r[1] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[5]); }
    ST32(c->r[1] + 880u, c->v.s[4]);
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 884u, c->v.s[0]);
    c->r[1] = c->r[13] + 0x400u;
    ST32(c->r[1] + 888u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[12]); }
    if (COND_EQ) { goto L_b074cc; }
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2d8u; ST32(ea, c->r[10]); }
    c->r[10] = c->r[13] + 0x750u;
    c->r[6] = c->r[2];
    c->r[9] = c->r[3];
    c->r[1] = c->r[10];
    c->r[7] = c->r[0] + 0x100u;
    { uint32_t ea = c->r[13] + 0x554u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xb06ed4u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x580u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0xb06ee0u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x57cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[10];
    c->r[14] = 0xb06eecu; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x8u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x10u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = LD32(c->r[7]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[8] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[6] = c->v.f[26] - c->v.f[0];
    c->v.f[8] = c->v.f[24] - c->v.f[2];
    c->v.f[12] = c->v.f[22] - c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[4] = c->v.f[12] + c->v.f[4];
    ST32(c->r[2], c->v.s[0]);
    c->v.f[0] = c->v.f[20] - c->v.f[10];
    ST32(c->r[1], c->v.s[2]);
    ST32(c->r[0], c->v.s[4]);
    c->r[2] = c->r[13] + 0x7c0u;
    c->v.f[2] = c->v.f[0] + c->v.f[10];
    ST32(c->r[7], c->v.s[2]);
    c->r[7] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x568u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[12] + c->v.f[2];
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x564u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    c->v.f[2] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0], c->v.s[2]);
    c->v.s[2] = LD32(c->r[4]);
    c->v.f[2] = c->v.f[6] + c->v.f[2];
    ST32(c->r[4], c->v.s[2]);
    c->v.s[2] = LD32(c->r[6]);
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    ST32(c->r[6], c->v.s[2]);
    c->r[6] = c->r[13] + 0x6d0u;
    { uint32_t ea = c->r[13] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[9]);
    c->v.s[24] = c->r[0];
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[12] + c->v.f[2];
    c->v.s[22] = c->r[0];
    ST32(c->r[9], c->v.s[2]);
    c->v.f[2] = c->v.f[24] + c->v.f[24];
    c->v.f[4] = c->v.f[22] + c->v.f[22];
    { uint32_t ea = c->r[13] + 0x558u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x338u; uint32_t v = LD32(ea); c->r[9] = v; }
    { uint32_t ea = c->r[13] + 0x378u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[24] * c->v.f[2];
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[26] = c->r[0];
    c->v.s[28] = c->r[9];
    c->r[0] = 0x3f800000u;
    c->v.f[10] = c->v.f[22] * c->v.f[4];
    c->v.f[14] = c->v.f[26] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    c->v.f[6] = c->v.f[2] * c->v.f[28];
    c->v.f[12] = c->v.f[10] + c->v.f[8];
    ST32(c->r[1], c->v.s[0]);
    c->v.f[1] = c->v.f[14] + c->v.f[6];
    c->v.f[0] = c->v.f[4] * c->v.f[28];
    c->v.f[4] = c->v.f[26] * c->v.f[2];
    c->v.f[6] = c->v.f[14] - c->v.f[6];
    c->v.f[2] = c->v.f[22] * c->v.f[2];
    c->v.f[12] = c->v.f[20] - c->v.f[12];
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.f[3] = c->v.f[4] - c->v.f[0];
    c->v.f[0] = c->v.f[4] + c->v.f[0];
    c->r[1] = c->r[4];
    ST32(c->r[14] + 848u, c->v.s[12]);
    c->v.f[12] = c->v.f[26] + c->v.f[26];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[5]); }
    c->v.f[1] = c->v.f[26] * c->v.f[12];
    c->v.f[12] = c->v.f[12] * c->v.f[28];
    ST32(c->r[14] + 864u, c->v.s[6]);
    c->v.f[8] = c->v.f[1] + c->v.f[8];
    c->v.f[6] = c->v.f[2] + c->v.f[12];
    c->v.f[4] = c->v.f[1] + c->v.f[10];
    c->v.f[2] = c->v.f[2] - c->v.f[12];
    c->v.f[8] = c->v.f[20] - c->v.f[8];
    ST32(c->r[7] + 868u, c->v.s[8]);
    ST32(c->r[8] + 872u, c->v.s[6]);
    c->r[8] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[5]); }
    ST32(c->r[8] + 880u, c->v.s[0]);
    c->v.f[0] = c->v.f[20] - c->v.f[4];
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 884u, c->v.s[2]);
    c->r[8] = c->r[13] + 0x400u;
    ST32(c->r[8] + 888u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[5]); }
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xb070acu; f_229d48(c);
    c->r[7] = c->r[13] + 0x690u;
    c->r[1] = c->r[6];
    c->r[2] = c->r[10];
    c->r[0] = c->r[7];
    c->r[14] = 0xb070c0u; f_229d48(c);
    c->r[0] = c->r[13] + 0x710u;
    c->r[2] = c->r[13] + 0x800u;
    c->r[1] = c->r[7];
    c->r[14] = 0xb070d0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x800u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[14] = LD32(c->r[13] + 20u);
    c->v.s[4] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[1] = LD32(c->r[13] + 28u);
    c->v.s[6] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[8] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 60u);
    c->v.s[0] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] - c->v.f[14];
    c->v.s[14] = LD32(c->r[13] + 24u);
    c->v.s[12] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] - c->v.f[14];
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    c->v.s[4] = 0xbf800000u;
    c->v.s[14] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[12] = c->v.f[12] - c->v.f[1];
    c->v.f[2] = c->v.f[2] + c->v.f[6];
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[14] + c->v.f[4];
    c->v.f[4] = c->v.f[12] + c->v.f[8];
    ST32(c->r[0], c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + c->v.f[10];
    ST32(c->r[0], c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x218u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b07340; }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[4] * c->v.f[28];
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[6] * c->v.f[28];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[22]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[8] * c->v.f[24]);
    c->v.s[10] = c->r[0];
    c->v.f[12] = c->v.f[8] * c->v.f[28];
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[10] * c->v.f[22]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[26]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[10] * c->v.f[26]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[6] * c->v.f[26]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[10] * c->v.f[24]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[6] * c->v.f[22]);
    c->v.f[14] = c->v.f[10] * c->v.f[28];
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[8] * c->v.f[26]);
    c->v.f[12] = c->v.f[12] - (float)(c->v.f[4] * c->v.f[24]);
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[6] * c->v.f[24]);
    c->v.f[8] = c->v.f[0] + c->v.f[0];
    c->v.f[10] = c->v.f[2] + c->v.f[2];
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[4] * c->v.f[22]);
    c->r[9] = c->v.s[12];
    c->v.f[6] = c->v.f[0] * c->v.f[8];
    c->v.f[1] = c->v.f[2] * c->v.f[10];
    c->v.f[3] = c->v.f[12] * c->v.f[8];
    c->v.f[5] = c->v.f[14] * c->v.f[10];
    c->v.f[7] = c->v.f[14] * c->v.f[8];
    c->v.f[10] = c->v.f[12] * c->v.f[10];
    c->v.f[8] = c->v.f[2] * c->v.f[8];
    c->v.f[4] = c->v.f[1] + c->v.f[6];
    c->v.f[9] = c->v.f[5] + c->v.f[3];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[3] = c->v.f[5] - c->v.f[3];
    c->v.f[4] = c->v.f[20] - c->v.f[4];
    ST32(c->r[14] + 848u, c->v.s[4]);
    c->v.f[4] = c->v.f[14] + c->v.f[14];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 864u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[14] * c->v.f[4];
    c->v.f[4] = c->v.f[12] * c->v.f[4];
    c->v.f[6] = c->v.f[9] + c->v.f[6];
    c->v.f[3] = c->v.f[8] + c->v.f[4];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[6] = c->v.f[20] - c->v.f[6];
    ST32(c->r[14] + 868u, c->v.s[6]);
    c->v.f[6] = c->v.f[7] + c->v.f[10];
    c->v.f[10] = c->v.f[9] + c->v.f[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[3]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 880u, c->v.s[6]);
    c->v.f[6] = c->v.f[20] - c->v.f[10];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 888u, c->v.s[6]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[14];
    { uint32_t ea = c->r[13] + 0x378u; ST32(ea, c->r[0]); }
L_b07340:;
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[0] = 0x6fa0u;
    c->r[1] = c->r[13] + 0x750u;
    c->r[7] = c->r[4] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xb07358u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x288u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x520u; ST32(ea, c->r[7]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b07cf8; }
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[9];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2f4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    c->v.f[5] = c->v.f[6] * c->v.f[10];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2f0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[6] * c->v.f[8];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x320u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x378u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.s[1] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[3] = c->r[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[1]);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[1] = c->v.f[2] + c->v.f[2];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->r[9] = c->v.s[5];
    c->r[7] = c->v.s[6];
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->v.f[3] = c->v.f[2] * c->v.f[1];
    c->v.f[14] = c->v.f[6] * c->v.f[10];
    c->v.f[8] = c->v.f[1] * c->v.f[5];
    c->v.f[10] = c->v.f[10] * c->v.f[5];
    c->v.f[7] = c->v.f[1] * c->v.f[6];
    c->v.f[4] = c->v.f[3] + c->v.f[12];
    c->v.f[9] = c->v.f[14] + c->v.f[8];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[8] = c->v.f[14] - c->v.f[8];
    c->v.f[14] = c->v.f[0] * c->v.f[1];
    c->v.f[4] = c->v.f[20] - c->v.f[4];
    ST32(c->r[14] + 848u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] + c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 864u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[6] * c->v.f[4];
    c->v.f[4] = c->v.f[5] * c->v.f[4];
    c->v.f[3] = c->v.f[3] + c->v.f[9];
    c->v.f[8] = c->v.f[14] + c->v.f[4];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[1] = c->v.f[20] - c->v.f[3];
    ST32(c->r[14] + 868u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[8]);
    c->v.f[8] = c->v.f[7] + c->v.f[10];
    c->v.f[10] = c->v.f[12] + c->v.f[9];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 880u, c->v.s[8]);
    c->v.f[8] = c->v.f[20] - c->v.f[10];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 888u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    goto L_b07cfc;
L_b074cc:;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[5] = c->r[13] + 0x650u;
    c->r[2] = c->r[13] + 0x7c0u;
    c->r[0] = c->r[5];
    c->r[1] = c->r[4];
    c->r[14] = 0xb074e4u; f_229d48(c);
    c->r[6] = c->r[13] + 0x610u;
    c->r[2] = c->r[13] + 0x750u;
    c->r[1] = c->r[5];
    c->r[0] = c->r[6];
    c->r[14] = 0xb074f8u; f_229d48(c);
    c->r[0] = c->r[13] + 0x710u;
    c->r[2] = c->r[13] + 0x800u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb07508u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = c->r[13] + 0x400u;
    c->r[6] = c->r[13] + 0x800u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->v.s[0] = LD32(c->r[14] + 832u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[5] = v; }
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[1] = LD32(c->r[6] + 60u);
    c->v.s[2] = LD32(c->r[14] + 836u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 840u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 844u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 48u);
    c->v.s[8] = LD32(c->r[5]);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[3] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[14] = LD32(c->r[14] + 56u);
    c->v.s[5] = LD32(c->r[0]);
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[8] = c->v.f[8] - c->v.f[10];
    c->v.f[10] = c->v.f[3] - c->v.f[12];
    c->v.s[12] = LD32(c->r[7]);
    c->v.f[0] = c->v.f[8] + c->v.f[0];
    c->v.f[8] = c->v.f[5] - c->v.f[14];
    c->v.f[2] = c->v.f[10] + c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[12] - c->v.f[1];
    c->v.f[4] = c->v.f[8] + c->v.f[4];
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[2]);
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xbcu; uint32_t v = LD32(ea); c->r[0] = v; }
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x554u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb07640u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2820u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2824u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2828u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x282cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2830u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2834u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2838u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x283cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2840u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2844u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2848u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x284cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2850u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2854u;
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2858u;
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x285cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x580u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb07710u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1f20u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f24u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f28u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f2cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f30u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f34u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f38u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f3cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f40u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f44u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f48u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f4cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f50u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f5cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x57cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb077e0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2020u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2024u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2028u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x202cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2034u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2038u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x203cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2044u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2048u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x204cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2050u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x205cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6fa0u;
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb078b4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2120u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2124u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2128u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x212cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2130u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2134u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2138u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x213cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2140u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2144u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2148u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x214cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2150u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x215cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6fe0u;
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb07988u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2220u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2224u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2228u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x222cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2230u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2234u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2238u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x223cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2240u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2244u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2248u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x224cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2250u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x225cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7020u;
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb07a5cu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2320u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2324u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2328u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x232cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2330u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2334u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2338u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x233cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2340u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2344u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2348u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x234cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2350u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x235cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x7060u;
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb07b30u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2420u;
    c->r[2] = c->r[4];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2424u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2428u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x242cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2430u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2434u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2438u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x243cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2440u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2444u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2448u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x244cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2450u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x245cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x70a0u;
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb07c04u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2520u;
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2524u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2528u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x252cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2530u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2534u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2538u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x253cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2540u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2544u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2548u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x254cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2550u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x255cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->v.s[24] = LD32(c->r[14] + 248u);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x340u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[26] = LD32(c->r[14] + 244u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[17] = LD32(c->r[14] + 236u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[14] + 232u);
    goto L_b08994;
L_b07cf8:;
    { uint32_t ea = c->r[13] + 0x378u; uint32_t v = LD32(ea); c->r[7] = v; }
L_b07cfc:;
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = 0x6fe0u;
    { uint32_t ea = c->r[13] + 0x554u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[1] = c->r[13] + 0x750u;
    c->v.s[22] = LD32(c->r[14] + 116u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[6] = c->r[4] + c->r[0];
    c->v.s[24] = LD32(c->r[14] + 248u);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[6];
    c->v.s[26] = LD32(c->r[14] + 244u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[28] = LD32(c->r[14] + 240u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[17] = LD32(c->r[14] + 236u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[21] = LD32(c->r[14] + 232u);
    c->r[14] = 0xb07d44u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x28cu; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b07eac; }
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[9];
    c->v.s[1] = c->r[7];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x300u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    c->v.f[5] = c->v.f[6] * c->v.f[10];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2fcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[6] * c->v.f[8];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x304u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x2f8u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[1]);
    c->v.s[3] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[1] = c->v.f[2] + c->v.f[2];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->r[9] = c->v.s[5];
    c->r[7] = c->v.s[6];
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->v.f[3] = c->v.f[2] * c->v.f[1];
    c->v.f[14] = c->v.f[6] * c->v.f[10];
    c->v.f[8] = c->v.f[1] * c->v.f[5];
    c->v.f[10] = c->v.f[10] * c->v.f[5];
    c->v.f[7] = c->v.f[1] * c->v.f[6];
    c->v.f[4] = c->v.f[3] + c->v.f[12];
    c->v.f[9] = c->v.f[14] + c->v.f[8];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[8] = c->v.f[14] - c->v.f[8];
    c->v.f[14] = c->v.f[0] * c->v.f[1];
    c->v.f[4] = c->v.f[20] - c->v.f[4];
    ST32(c->r[14] + 848u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] + c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 864u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[6] * c->v.f[4];
    c->v.f[4] = c->v.f[5] * c->v.f[4];
    c->v.f[3] = c->v.f[3] + c->v.f[9];
    c->v.f[8] = c->v.f[14] + c->v.f[4];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[1] = c->v.f[20] - c->v.f[3];
    ST32(c->r[14] + 868u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[8]);
    c->v.f[8] = c->v.f[7] + c->v.f[10];
    c->v.f[10] = c->v.f[12] + c->v.f[9];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 880u, c->v.s[8]);
    c->v.f[8] = c->v.f[20] - c->v.f[10];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 888u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
L_b07eac:;
    c->r[0] = 0x7020u;
    c->r[1] = c->r[13] + 0x750u;
    c->r[0] = c->r[4] + c->r[0];
    { uint32_t ea = c->r[13] + 0x4f8u; ST32(ea, c->r[0]); }
    c->r[14] = 0xb07ec0u; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x290u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x554u; ST32(ea, c->r[6]); }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b08030; }
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[10] = c->r[9];
    c->v.s[1] = c->r[7];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x310u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[0];
    { uint32_t ea = c->r[13] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[6] * c->v.f[4];
    c->v.f[5] = c->v.f[6] * c->v.f[10];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x30cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[6] * c->v.f[8];
    c->v.f[6] = c->v.f[6] * c->v.f[1];
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x314u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[12] * c->v.f[10]);
    c->v.s[14] = c->r[0];
    { uint32_t ea = c->r[13] + 0x308u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[14] * c->v.f[10]);
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[14] * c->v.f[1]);
    c->v.s[3] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[0] = c->v.f[0] - (float)(c->v.f[3] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[3] * c->v.f[10]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[6] = c->v.f[6] + (float)(c->v.f[12] * c->v.f[8]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[14] * c->v.f[8]);
    c->v.f[6] = c->v.f[6] - (float)(c->v.f[14] * c->v.f[4]);
    c->v.f[1] = c->v.f[2] + c->v.f[2];
    c->v.f[10] = c->v.f[0] + c->v.f[0];
    c->r[5] = c->v.s[5];
    c->r[7] = c->v.s[6];
    c->v.f[12] = c->v.f[0] * c->v.f[10];
    c->v.f[3] = c->v.f[2] * c->v.f[1];
    c->v.f[14] = c->v.f[6] * c->v.f[10];
    c->v.f[8] = c->v.f[1] * c->v.f[5];
    c->v.f[10] = c->v.f[10] * c->v.f[5];
    c->v.f[7] = c->v.f[1] * c->v.f[6];
    c->v.f[4] = c->v.f[3] + c->v.f[12];
    c->v.f[9] = c->v.f[14] + c->v.f[8];
    c->v.f[11] = c->v.f[7] - c->v.f[10];
    c->v.f[8] = c->v.f[14] - c->v.f[8];
    c->v.f[14] = c->v.f[0] * c->v.f[1];
    c->v.f[4] = c->v.f[20] - c->v.f[4];
    ST32(c->r[14] + 848u, c->v.s[4]);
    c->v.f[4] = c->v.f[6] + c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[11]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 864u, c->v.s[8]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[9] = c->v.f[6] * c->v.f[4];
    c->v.f[4] = c->v.f[5] * c->v.f[4];
    c->v.f[3] = c->v.f[3] + c->v.f[9];
    c->v.f[8] = c->v.f[14] + c->v.f[4];
    c->v.f[4] = c->v.f[14] - c->v.f[4];
    c->v.f[1] = c->v.f[20] - c->v.f[3];
    ST32(c->r[14] + 868u, c->v.s[1]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[8]);
    c->v.f[8] = c->v.f[7] + c->v.f[10];
    c->v.f[10] = c->v.f[12] + c->v.f[9];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 880u, c->v.s[8]);
    c->v.f[8] = c->v.f[20] - c->v.f[10];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 888u, c->v.s[8]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[2];
    { uint32_t ea = c->r[13] + 0x394u; ST32(ea, c->r[0]); }
    c->r[0] = c->v.s[0];
    { uint32_t ea = c->r[13] + 0x390u; ST32(ea, c->r[0]); }
    goto L_b08034;
L_b08030:;
    c->r[5] = c->r[9];
L_b08034:;
    c->r[0] = 0x7060u;
    c->r[9] = c->r[4];
    c->r[1] = c->r[13] + 0x750u;
    c->r[6] = c->r[9] + c->r[0];
    c->r[0] = c->r[6];
    c->r[14] = 0xb0804cu; f_21ebe8(c);
    { uint32_t ea = c->r[13] + 0x228u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_b0819c; }
    { uint32_t ea = c->r[13] + 0x390u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[6] = c->r[5];
    c->v.s[1] = c->r[7];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x318u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[2] = c->r[0];
    { uint32_t ea = c->r[13] + 0x394u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[2] * c->v.f[0];
    c->v.f[5] = c->v.f[2] * c->v.f[6];
    c->v.s[4] = c->r[0];
    { uint32_t ea = c->r[13] + 0x328u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[2] * c->v.f[4];
    c->v.f[2] = c->v.f[2] * c->v.f[1];
    c->v.s[8] = c->r[0];
    { uint32_t ea = c->r[13] + 0x31cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[8] * c->v.f[6]);
    c->v.s[12] = c->r[0];
    { uint32_t ea = c->r[13] + 0x324u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[12] * c->v.f[6]);
    c->v.f[10] = c->v.f[10] + (float)(c->v.f[12] * c->v.f[1]);
    c->v.s[3] = c->r[0];
    c->r[0] = 0x0u;
    c->v.f[14] = c->v.f[14] + (float)(c->v.f[3] * c->v.f[0]);
    c->v.f[10] = c->v.f[10] - (float)(c->v.f[3] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[3] * c->v.f[6]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[3] * c->v.f[1]);
    c->v.f[14] = c->v.f[14] - (float)(c->v.f[8] * c->v.f[1]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[8] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[8] * c->v.f[4]);
    c->v.f[5] = c->v.f[5] - (float)(c->v.f[12] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] - (float)(c->v.f[12] * c->v.f[0]);
    c->v.f[1] = c->v.f[14] + c->v.f[14];
    c->v.f[6] = c->v.f[10] + c->v.f[10];
    c->v.f[8] = c->v.f[10] * c->v.f[6];
    c->v.f[14] = c->v.f[14] * c->v.f[1];
    c->v.f[12] = c->v.f[2] * c->v.f[6];
    c->v.f[4] = c->v.f[1] * c->v.f[5];
    c->v.f[6] = c->v.f[6] * c->v.f[5];
    c->v.f[3] = c->v.f[1] * c->v.f[2];
    c->v.f[10] = c->v.f[10] * c->v.f[1];
    c->v.f[0] = c->v.f[14] + c->v.f[8];
    c->v.f[7] = c->v.f[12] + c->v.f[4];
    c->v.f[9] = c->v.f[3] - c->v.f[6];
    c->v.f[4] = c->v.f[12] - c->v.f[4];
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    ST32(c->r[14] + 848u, c->v.s[0]);
    c->v.f[0] = c->v.f[2] + c->v.f[2];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 864u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[2] = c->v.f[2] * c->v.f[0];
    c->v.f[0] = c->v.f[5] * c->v.f[0];
    c->v.f[14] = c->v.f[14] + c->v.f[2];
    c->v.f[4] = c->v.f[10] + c->v.f[0];
    c->v.f[2] = c->v.f[8] + c->v.f[2];
    c->v.f[0] = c->v.f[10] - c->v.f[0];
    c->v.f[12] = c->v.f[20] - c->v.f[14];
    c->v.f[2] = c->v.f[20] - c->v.f[2];
    ST32(c->r[14] + 868u, c->v.s[12]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[4]);
    c->v.f[4] = c->v.f[3] + c->v.f[6];
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 880u, c->v.s[4]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[0]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 888u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[0]); }
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
L_b0819c:;
    c->r[0] = 0x70a0u;
    c->r[1] = c->r[13] + 0x750u;
    c->r[7] = c->r[9] + c->r[0];
    c->r[0] = c->r[7];
    c->r[14] = 0xb081b0u; f_21ebe8(c);
    c->r[0] = 0x6fd0u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[1] = 0x6fdcu;
    c->r[4] = c->r[13] + 0x400u;
    c->r[5] = c->r[13] + 0x800u;
    c->r[0] = c->r[9] + c->r[0];
    c->r[2] = c->r[5];
    ST32(c->r[0], c->v.s[22]);
    c->r[0] = 0x6fd4u;
    c->v.s[0] = LD32(c->r[14] + 120u);
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x6fd8u;
    c->v.s[0] = LD32(c->r[14] + 156u);
    c->r[0] = c->r[9] + c->r[0];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[0], c->v.s[0]);
    c->r[0] = 0x3f800000u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7010u;
    c->v.s[0] = LD32(c->r[14] + 252u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x7014u;
    c->v.s[0] = LD32(c->r[14] + 256u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x7018u;
    c->v.s[0] = LD32(c->r[14] + 260u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x701cu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7050u;
    c->v.s[0] = LD32(c->r[14] + 264u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x7054u;
    c->v.s[0] = LD32(c->r[14] + 268u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x7058u;
    c->v.s[0] = LD32(c->r[14] + 272u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x705cu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x7090u;
    c->v.s[0] = LD32(c->r[14] + 276u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x7094u;
    c->v.s[0] = LD32(c->r[14] + 280u);
    c->r[1] = c->r[9] + c->r[1];
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x7098u;
    c->v.s[0] = LD32(c->r[4] + 284u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x709cu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x70d0u;
    c->v.s[0] = LD32(c->r[4] + 364u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x70d4u;
    c->v.s[0] = LD32(c->r[4] + 352u);
    c->r[1] = c->r[9] + c->r[1];
    c->r[4] = c->r[13] + 0x400u;
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x70d8u;
    c->v.s[0] = LD32(c->r[4] + 348u);
    c->r[1] = c->r[9] + c->r[1];
    ST32(c->r[1], c->v.s[0]);
    c->r[1] = 0x70dcu;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    c->r[1] = c->r[10];
    c->r[14] = 0xb08314u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2820u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2824u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2828u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x282cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2830u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2834u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2838u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x283cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2840u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2844u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2848u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x284cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2850u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2854u;
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2858u;
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x285cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x580u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb083e4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x1f20u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f24u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f28u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f2cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f30u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f34u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f38u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f3cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f40u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f44u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f48u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f4cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f50u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1f5cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x57cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb084b4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2020u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2024u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2028u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x202cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2030u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2034u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2038u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x203cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2040u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2044u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2048u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x204cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2050u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xa4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x205cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x520u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb08584u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2120u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2124u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2128u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x212cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2130u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2134u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2138u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x213cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2140u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2144u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2148u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x214cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2150u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xacu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x215cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x554u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb08654u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2220u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2224u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2228u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x222cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2230u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2234u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2238u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x223cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2240u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2244u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2248u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x224cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2250u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x225cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    { uint32_t ea = c->r[13] + 0x4f8u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[14] = 0xb08724u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2320u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2324u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2328u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x232cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2330u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2334u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2338u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x233cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2340u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2344u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2348u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x234cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2350u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x235cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    c->r[1] = c->r[6];
    c->r[14] = 0xb087f4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2420u;
    c->r[2] = c->r[5];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2424u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2428u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x242cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2430u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2434u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2438u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x243cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2440u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2444u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2448u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x244cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2450u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x68u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x6cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x245cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x710u;
    c->r[1] = c->r[7];
    c->r[14] = 0xb088c4u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2520u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2524u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2528u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x252cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2530u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2534u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2538u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x253cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2540u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2544u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2548u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x254cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2550u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x70u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x74u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x255cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x33cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x340u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[5] = v; }
L_b08994:;
    c->v.s[0] = c->r[0];
    { uint32_t ea = c->r[13] + 0x374u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[12] = c->r[1];
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[10] = c->r[10];
    c->r[4] = 0x0u;
    c->r[7] = c->r[13] + 0x400u;
    c->r[10] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x54cu; uint32_t v = LD32(ea); c->r[8] = v; }
    c->r[6] = c->r[13] + 0x5d0u;
    c->r[2] = c->r[13] + 0x7c0u;
    c->v.s[22] = LD32(c->r[14] + 292u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[4] = c->v.f[0] + c->v.f[0];
    c->v.s[2] = c->r[0];
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[8];
    c->v.f[6] = c->v.f[2] + c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[4];
    c->v.f[5] = c->v.f[12] * c->v.f[4];
    c->v.f[1] = c->v.f[4] * c->v.f[10];
    c->v.f[8] = c->v.f[2] * c->v.f[6];
    c->v.f[3] = c->v.f[12] * c->v.f[6];
    c->v.f[6] = c->v.f[6] * c->v.f[10];
    c->v.f[2] = c->v.f[2] * c->v.f[4];
    c->v.f[14] = c->v.f[8] + c->v.f[0];
    c->v.f[7] = c->v.f[3] + c->v.f[1];
    c->v.f[9] = c->v.f[5] - c->v.f[6];
    c->v.f[1] = c->v.f[3] - c->v.f[1];
    c->v.f[14] = c->v.f[20] - c->v.f[14];
    ST32(c->r[14] + 848u, c->v.s[14]);
    c->v.f[14] = c->v.f[12] + c->v.f[12];
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 852u, c->v.s[7]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[9]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[4]); }
    ST32(c->r[14] + 864u, c->v.s[1]);
    c->v.f[12] = c->v.f[12] * c->v.f[14];
    c->v.f[10] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[12] + c->v.f[0];
    c->v.f[4] = c->v.f[2] + c->v.f[10];
    c->v.f[2] = c->v.f[2] - c->v.f[10];
    c->v.f[0] = c->v.f[20] - c->v.f[0];
    ST32(c->r[7] + 868u, c->v.s[0]);
    ST32(c->r[10] + 872u, c->v.s[4]);
    c->v.f[0] = c->v.f[5] + c->v.f[6];
    c->v.f[4] = c->v.f[12] + c->v.f[8];
    c->r[10] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[4]); }
    ST32(c->r[10] + 880u, c->v.s[0]);
    c->v.f[0] = c->v.f[20] - c->v.f[4];
    c->r[10] = c->r[13] + 0x400u;
    ST32(c->r[10] + 884u, c->v.s[2]);
    c->r[10] = c->r[13] + 0x400u;
    ST32(c->r[10] + 888u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[6];
    c->r[14] = 0xb08a94u; f_229d48(c);
    c->r[7] = c->r[13] + 0x590u;
    c->r[10] = c->r[13] + 0x750u;
    c->r[1] = c->r[6];
    c->r[0] = c->r[7];
    c->r[2] = c->r[10];
    c->r[14] = 0xb08aacu; f_229d48(c);
    c->r[0] = c->r[13] + 0x710u;
    c->r[2] = c->r[13] + 0x800u;
    c->r[1] = c->r[7];
    c->r[14] = 0xb08abcu; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6da4u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[8]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6da8u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6dacu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6db0u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6db4u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6db8u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6dbcu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6dc0u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6dc4u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6dc8u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6dccu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6dd0u;
    c->v.s[0] = LD32(c->r[14] + 832u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[8] = LD32(c->r[5]);
    { uint32_t ea = c->r[13] + 0x578u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + c->r[0];
    c->r[5] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[14] + 836u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[4] = LD32(c->r[14] + 840u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.s[6] = LD32(c->r[14] + 844u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[10] = LD32(c->r[14] + 48u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[5] = LD32(c->r[6]);
    c->v.s[12] = LD32(c->r[14] + 52u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[14] = LD32(c->r[14] + 56u);
    c->r[14] = c->r[13] + 0x800u;
    c->v.s[1] = LD32(c->r[14] + 60u);
    c->r[14] = c->r[13] + 0x400u;
    c->v.f[8] = c->v.f[8] - c->v.f[10];
    c->v.s[10] = LD32(c->r[1]);
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->v.s[3] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[8] + c->v.f[0];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[5] - c->v.f[12];
    { uint32_t ea = c->r[13] + 0x528u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + c->v.f[2];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[3] - c->v.f[14];
    { uint32_t ea = c->r[13] + 0x52cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + c->v.f[4];
    ST32(c->r[0], c->v.s[0]);
    c->v.f[0] = c->v.f[10] - c->v.f[1];
    { uint32_t ea = c->r[13] + 0x530u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.f[0] = c->v.f[0] + c->v.f[6];
    ST32(c->r[0], c->v.s[0]);
    ST32(c->r[14] + 848u, c->v.s[19]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[13] + 0x710u;
    ST32(c->r[14] + 852u, c->v.s[30]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x580u; uint32_t v = LD32(ea); c->r[7] = v; }
    ST32(c->r[14] + 856u, c->v.s[23]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[4]); }
    ST32(c->r[14] + 864u, c->v.s[25]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 868u, c->v.s[27]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 872u, c->v.s[29]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[7];
    ST32(c->r[14] + 880u, c->v.s[31]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 884u, c->v.s[16]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 888u, c->v.s[18]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[5]); }
    c->r[14] = 0xb08c64u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6ea4u;
    c->r[14] = c->r[13] + 0x400u;
    c->r[2] = c->r[10];
    { uint32_t ea = c->r[7]; ST32(ea, c->r[0]); }
    c->r[7] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ea8u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eacu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eb0u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eb4u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eb8u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ebcu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ec0u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ec4u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ec8u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eccu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x574u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x570u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x568u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x564u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    ST32(c->r[14] + 848u, c->v.s[24]);
    c->r[14] = c->r[13] + 0x400u;
    c->r[0] = c->r[13] + 0x710u;
    ST32(c->r[14] + 852u, c->v.s[26]);
    c->r[14] = c->r[13] + 0x400u;
    ST32(c->r[14] + 856u, c->v.s[28]);
    c->r[14] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x75cu; ST32(ea, c->r[4]); }
    ST32(c->r[14] + 864u, c->v.s[17]);
    ST32(c->r[7] + 868u, c->v.s[21]);
    c->r[7] = c->r[13] + 0x400u;
    ST32(c->r[7] + 872u, c->v.s[22]);
    c->r[7] = c->r[13] + 0x400u;
    { uint32_t ea = c->r[13] + 0x76cu; ST32(ea, c->r[4]); }
    c->v.s[0] = LD32(c->r[7] + 328u);
    c->r[7] = c->r[13] + 0x400u;
    ST32(c->r[7] + 880u, c->v.s[0]);
    c->r[7] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[7] + 324u);
    c->r[7] = c->r[13] + 0x400u;
    ST32(c->r[7] + 884u, c->v.s[0]);
    c->r[7] = c->r[13] + 0x400u;
    c->v.s[0] = LD32(c->r[7] + 320u);
    c->r[7] = c->r[13] + 0x400u;
    ST32(c->r[7] + 888u, c->v.s[0]);
    { uint32_t ea = c->r[13] + 0x77cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x780u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x784u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x788u; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x57cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[13] + 0x78cu; ST32(ea, c->r[5]); }
    c->r[1] = c->r[4];
    c->r[14] = 0xb08db0u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x6ee4u;
    { uint32_t ea = c->r[4]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ee8u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6eecu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ef0u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ef4u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6ef8u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6efcu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f00u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f04u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f08u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x6f0cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x53cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x538u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x534u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x558u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6f20u;
    { uint32_t ea = c->r[13] + 0xa8u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb08e80u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2620u;
    c->r[2] = c->r[8];
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2624u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2628u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x262cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2630u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2634u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2638u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x263cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2640u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2644u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2648u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x264cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2650u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x78u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x265cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6f60u;
    c->r[1] = c->r[9] + c->r[0];
    c->r[0] = c->r[13] + 0x710u;
    c->r[14] = 0xb08f54u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x710u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x2720u;
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2724u;
    { uint32_t ea = c->r[13] + 0x714u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2728u;
    { uint32_t ea = c->r[13] + 0x718u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x272cu;
    { uint32_t ea = c->r[13] + 0x71cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2730u;
    { uint32_t ea = c->r[13] + 0x720u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2734u;
    { uint32_t ea = c->r[13] + 0x724u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2738u;
    { uint32_t ea = c->r[13] + 0x728u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x273cu;
    { uint32_t ea = c->r[13] + 0x72cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2740u;
    { uint32_t ea = c->r[13] + 0x730u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2744u;
    { uint32_t ea = c->r[13] + 0x734u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2748u;
    { uint32_t ea = c->r[13] + 0x738u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x274cu;
    { uint32_t ea = c->r[13] + 0x73cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x2750u;
    { uint32_t ea = c->r[13] + 0x740u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x744u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x84u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x748u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x80u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x275cu;
    { uint32_t ea = c->r[13] + 0x74cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1020u;
    { uint32_t ea = c->r[13] + 0x550u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6de4u;
    c->r[1] = 0x1024u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6de8u;
    c->r[1] = 0x1028u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6decu;
    c->r[1] = 0x102cu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6df0u;
    c->r[1] = 0x1030u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6df4u;
    c->r[1] = 0x1034u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6df8u;
    c->r[1] = 0x1038u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6dfcu;
    c->r[1] = 0x103cu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6e00u;
    c->r[1] = 0x1040u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6e04u;
    c->r[1] = 0x1044u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6e08u;
    c->r[1] = 0x1048u;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[0] = 0x6e0cu;
    c->r[1] = 0x104cu;
    { uint32_t ea = c->r[9] + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x1050u;
    { uint32_t ea = c->r[13] + 0x584u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[6]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x58cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xb4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; ST32(ea, c->r[0]); }
    c->r[1] = 0x105cu;
    { uint32_t ea = c->r[13] + 0x588u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + c->r[1]; ST32(ea, c->r[0]); }
    c->r[13] = c->r[11] - 0x60u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->v.d[13] = LD64(ea + 40u); c->v.d[14] = LD64(ea + 48u); c->v.d[15] = LD64(ea + 56u); c->r[13] = c->r[13] + 64u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
