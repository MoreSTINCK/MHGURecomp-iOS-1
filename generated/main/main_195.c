#include "cpu.h"
#include "neon_rt.h"
void f_229d48(Cpu *c);
void f_a82674(Cpu *c);
void f_a8c0c8(Cpu *c);
void f_c57e4c(Cpu *c);
void f_c57f14(Cpu *c);
void f_c6cab8(Cpu *c);
void f_c74880(Cpu *c);
void f_c7491c(Cpu *c);
void f_ca0cdc(Cpu *c);
void f_ca130c(Cpu *c);
void f_cef1e4(Cpu *c);
void f_cef728(Cpu *c);
void f_cfcce8(Cpu *c);
void f_cfd42c(Cpu *c);
void f_dae520(Cpu *c);
void f_ea99ec(Cpu *c);
void f_15efddc(Cpu *c);
void f_ca8530(Cpu *restrict c) {
    FN_ENTER(0xca8530u);
L_ca8530:;
    { uint32_t ea = c->r[13] - 36u; ST32(ea + 0u, c->r[4]); ST32(ea + 4u, c->r[5]); ST32(ea + 8u, c->r[6]); ST32(ea + 12u, c->r[7]); ST32(ea + 16u, c->r[8]); ST32(ea + 20u, c->r[9]); ST32(ea + 24u, c->r[10]); ST32(ea + 28u, c->r[11]); ST32(ea + 32u, c->r[14]); c->r[13] = c->r[13] - 36u; }
    c->r[11] = c->r[13] + 0x1cu;
    c->r[13] = c->r[13] - 0x4u;
    { uint32_t ea = c->r[13] - 40u; ST64(ea + 0u, c->v.d[8]); ST64(ea + 8u, c->v.d[9]); ST64(ea + 16u, c->v.d[10]); ST64(ea + 24u, c->v.d[11]); ST64(ea + 32u, c->v.d[12]); c->r[13] = c->r[13] - 40u; }
    c->r[13] = c->r[13] - 0x3b0u;
    c->r[13] = c->r[13] & 0xfffffff0u;
    { uint32_t ea = c->r[13] + 0x48u; ST32(ea, c->r[2]); }
    c->r[7] = c->r[1];
    c->r[1] = c->r[13] + 0x280u;
    c->r[2] = 0x0u;
    c->r[9] = c->r[0];
    c->r[14] = 0xca8560u; f_cef728(c);
    (void)f_subs(c, c->r[0], 0x1u);
    if (COND_NE) { goto L_caa72c; }
    c->r[0] = 0xd94638u;
    { uint32_t ea = c->r[9] + 0x44u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0x8u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = 0xca857cu + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = (c->r[1] >> 8) & 0xffu;
    c->r[1] = c->r[7];
    c->r[14] = 0xca8588u; f_dae520(c);
    c->r[4] = c->r[0];
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[2] = c->r[4];
    c->r[14] = 0xca859cu; f_cef1e4(c);
    { uint32_t ea = c->r[13] + 0x40u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[1] = c->r[7];
    c->r[14] = 0xca85acu; f_c74880(c);
    c->r[5] = c->r[0];
    c->r[0] = c->r[9];
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x4cu; ST32(ea, c->r[4]); }
    c->r[14] = 0xca85c0u; f_c7491c(c);
    { uint32_t ea = c->r[9] + 0x9cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = 0xf0u;
    c->r[3] = 0xf00u;
    c->r[4] = 0xf000u;
    (void)f_subs(c, c->r[5], 0x0u);
    c->r[4] = (c->r[4] & 0xFFFFu) | 0xfffc0000u;
    { uint32_t ea = c->r[13] + 0x50u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x34u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[18] = LD32(c->r[9] + 152u);
    { uint32_t ea = c->r[0] + 0xcu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x3cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x60u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xf4u; uint32_t v = LD32(ea); c->r[8] = v; }
    { uint32_t ea = c->r[13] + 0x268u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x64u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x26cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x258u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x25cu; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1e8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x260u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1ecu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x264u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1a0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[6] = v; }
    c->r[2] = c->r[2] & (c->r[1] >> 12);
    c->r[3] = c->r[3] & (c->r[1] >> 16);
    c->r[6] = c->r[6] & c->r[4];
    c->r[4] = (c->r[1] >> 20) & 0xfu;
    c->r[6] = c->r[6] | c->r[4];
    c->r[2] = c->r[3] | c->r[2];
    c->r[3] = 0x10000u;
    c->r[3] = c->r[3] & (c->r[1] >> 12);
    c->r[3] = c->r[3] | c->r[6];
    c->r[6] = 0x20000u;
    c->r[1] = c->r[6] & (c->r[1] >> 12);
    c->r[1] = c->r[3] | c->r[1];
    c->r[1] = c->r[2] | c->r[1];
    { uint32_t ea = c->r[13] + 0x270u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x1b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x274u; ST32(ea, c->r[0]); }
    c->r[0] = 0xd90be0u;
    { uint32_t ea = 0xca8674u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0xb0u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x54u; ST32(ea, c->r[5]); }
    if (COND_EQ) { goto L_ca86b0; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_ca86ac; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] & 0x3u;
L_ca8694:;
    { uint32_t ea = c->r[10] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[0] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca86b0; }
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[10] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca8694; }
L_ca86ac:;
    c->r[10] = 0x0u;
L_ca86b0:;
    c->r[0] = 0x0u;
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x13cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x14cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x17cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x18cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1bcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1ccu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x1fcu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x20cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x100u;
    c->r[14] = 0xca86e0u; f_c57f14(c);
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca8898; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = LD32(c->r[13] + 256u);
    c->v.s[2] = LD32(c->r[13] + 260u);
    c->v.s[4] = LD32(c->r[13] + 264u);
    c->v.s[6] = LD32(c->r[0] + 48u);
    c->v.s[8] = LD32(c->r[0] + 52u);
    c->v.s[10] = LD32(c->r[0] + 56u);
    c->r[0] = 0x0u;
    c->v.f[6] = c->v.f[0] - c->v.f[6];
    c->v.f[2] = c->v.f[2] - c->v.f[8];
    c->v.f[4] = c->v.f[4] - c->v.f[10];
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 224u, c->v.s[6]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca8758; }
    c->r[14] = 0xca8754u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_ca8758:;
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca8788; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca8788u; f_15efddc(c);
L_ca8788:;
    c->v.s[2] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[2]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca87a8; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ca87d4;
L_ca87a8:;
    c->v.s[8] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.f[0] = c->v.f[8] / c->v.f[0];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca87d4:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x0u;
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[9] + 0x1b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca8854; }
    { uint32_t ea = c->r[9] + 0xecu; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[0] + 0x10u;
    c->v.s[2] = 0x3f800000u;
    c->v.f[2] = c->v.f[2] - c->v.f[18];
    c->r[1] = (c->r[1] >> 8) & 0x1u;
    c->r[2] = c->r[0] + (c->r[1] << 4);
    c->r[1] = c->r[1] ^ 0x1u;
    c->r[0] = c->r[0] + (c->r[1] << 4);
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[4] = LD32(c->r[0]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 688u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[4] = LD32(c->r[0] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 692u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[4]);
    ST32(c->r[13] + 696u, c->v.s[0]);
    goto L_ca8874;
L_ca8854:;
    c->r[0] = 0xd909f8u;
    { uint32_t ea = 0xca8860u + c->r[0]; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[0]; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2b0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2b4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x2b8u; ST32(ea, c->r[0]); }
L_ca8874:;
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->v.s[0] = c->v.s[16];
    c->r[0] = 0x0u;
    c->r[1] = c->r[13] + 0xe0u;
    c->r[2] = c->r[13] + 0x2b0u;
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x280u;
    c->r[14] = 0xca8894u; f_ea99ec(c);
    c->r[4] = c->r[0];
L_ca8898:;
    c->r[0] = c->r[8] & 0x80u;
    { uint32_t ea = c->r[13] + 0x44u; ST32(ea, c->r[9]); }
    { uint32_t ea = c->r[13] + 0x30u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca8918; }
    c->r[0] = c->r[13] + 0x80u;
    c->r[1] = c->r[7];
    c->r[14] = 0xca88bcu; f_c57e4c(c);
    c->v.s[2] = LD32(c->r[13] + 148u);
    c->v.s[0] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 152u);
    c->v.s[6] = LD32(c->r[13] + 156u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[6] * c->v.f[6]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca88f4; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca88f4u; f_15efddc(c);
L_ca88f4:;
    c->v.s[20] = 0x34000000u;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca9034; }
    { uint32_t ea = c->r[13] + 0x90u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x94u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x98u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x9cu; uint32_t v = LD32(ea); c->r[3] = v; }
    goto L_ca906c;
L_ca8918:;
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0xf00u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_caa080; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_caa72c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[2] = c->r[13] + 0x110u;
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[0] = c->r[0] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0x40u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0x80u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[2] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[0]); }
L_ca8984:;
    c->r[9] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[9] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca89d4; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca89c8; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
L_ca89a8:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca89c8; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca89a8; }
    c->r[10] = 0x0u;
    goto L_ca89d4;
L_ca89c8:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca89d4:;
    { uint32_t ea = c->r[9] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[9] + 0x20u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
    ST32(c->r[13] + 240u, c->v.s[0]);
    ST32(c->r[13] + 244u, c->v.s[2]);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 248u, c->v.s[4]);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 224u, c->v.s[6]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca8a80; }
    c->r[14] = 0xca8a7cu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_ca8a80:;
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[9] + 0x8u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca8bb0; }
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca8ac0; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca8ac0u; f_15efddc(c);
L_ca8ac0:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca8ae0; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ca8b08;
L_ca8ae0:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca8b08:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[6]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xe0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 688u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 692u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x280u;
    c->r[2] = c->r[13] + 0x2b0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 696u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xca8bacu; f_ea99ec(c);
    c->r[4] = c->r[0];
L_ca8bb0:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_ca9028; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[9] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca9028; }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca8cfc; }
    { uint32_t ea = c->r[4] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[7] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca8c98; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[4] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_ca8c9c;
L_ca8c98:;
    c->r[8] = 0x0u;
L_ca8c9c:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ca8cc0; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[14] = 0xca8cbcu; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca8cc0:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[4] = v; }
    if (COND_EQ) { goto L_ca8cfc; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[4] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[4] + 0xc4u; ST8(ea, c->r[0]); }
L_ca8cfc:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[10]); }
    c->r[7] = 0x10u;
    c->r[12] = 0x0u;
    c->r[2] = c->r[9] + 0x60u;
    c->r[6] = c->r[9] + 0x100u;
    c->r[8] = c->r[5];
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[12]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[9] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[12]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 208u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 212u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[9] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[5] = v; }
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0xd0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[3] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[12]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[5];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    c->r[14] = 0xca8e68u; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xf0u;
    c->r[3] = c->r[13] + 0x240u;
    c->r[6] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[9];
    c->r[2] = c->r[6];
    c->r[3] = c->r[13] + 0x210u;
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xca8f00u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_ca8ff0; }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_ca9028; }
    c->r[2] = c->r[6];
    { uint32_t ea = c->r[8] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x2b0u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[9] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca8fecu; f_a8c0c8(c);
    goto L_ca9024;
L_ca8ff0:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[9];
    c->r[3] = c->r[6];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    c->r[1] = c->r[4];
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[5];
    c->r[14] = 0xca9020u; f_ca130c(c);
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
L_ca9024:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_ca9028:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca8984; }
    goto L_caa72c;
L_ca9034:;
    c->v.s[10] = 0x3f800000u;
    c->v.s[2] = LD32(c->r[13] + 144u);
    c->v.s[4] = LD32(c->r[13] + 148u);
    c->v.s[6] = LD32(c->r[13] + 152u);
    c->v.s[8] = LD32(c->r[13] + 156u);
    c->v.f[0] = c->v.f[10] / c->v.f[0];
    c->v.f[6] = c->v.f[0] * c->v.f[6];
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[8];
    c->r[0] = c->v.s[6];
    c->r[1] = c->v.s[4];
    c->r[2] = c->v.s[2];
    c->r[3] = c->v.s[0];
L_ca906c:;
    { uint32_t ea = c->r[13] + 0xd0u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0xd4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xd8u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[3]); }
    c->r[1] = c->r[0] & 0xfu;
    c->r[0] = c->r[13] + 0x80u;
    c->r[14] = 0xca908cu; f_cfcce8(c);
    { uint32_t ea = c->r[13] + 0x271u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0xfu; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca98b4; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_caa72c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[7] = c->r[13] + 0x2b0u;
    c->v.f[24] = c->v.f[22] - c->v.f[18];
    c->r[0] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x80u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[7] + 0x40u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x110u;
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x18u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x14u; ST32(ea, c->r[0]); }
L_ca90f4:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca9144; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca9138; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[2] = v; }
L_ca9118:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca9138; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca9118; }
    c->r[10] = 0x0u;
    goto L_ca9144;
L_ca9138:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca9144:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[8] + 0x20u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[1] + 4u);
    c->v.s[4] = LD32(c->r[0] + 8u);
    c->v.s[10] = LD32(c->r[1] + 8u);
    c->r[0] = 0x0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
    ST32(c->r[13] + 240u, c->v.s[0]);
    ST32(c->r[13] + 244u, c->v.s[2]);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[2] = c->v.f[8] - c->v.f[2];
    ST32(c->r[13] + 248u, c->v.s[4]);
    c->v.f[4] = c->v.f[10] - c->v.f[4];
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[2] * c->v.f[2];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 224u, c->v.s[6]);
    ST32(c->r[13] + 228u, c->v.s[2]);
    ST32(c->r[13] + 232u, c->v.s[4]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[0]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca91f0; }
    c->r[14] = 0xca91ecu; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_ca91f0:;
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->r[5] = c->r[8] + 0x8u;
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca9318; }
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca9230; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca9230u; f_15efddc(c);
L_ca9230:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca924c; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ca9274;
L_ca924c:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca9274:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xe4u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0xe8u; ST32(ea, c->r[2]); }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = 0x0u;
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xccu; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[4]); }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t r = c->r[2] * c->r[1] + c->r[6]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xe0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 688u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 692u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x280u;
    c->r[2] = c->r[7];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 696u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xca9314u; f_ea99ec(c);
    c->r[4] = c->r[0];
L_ca9318:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_ca98a8; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[6] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[6] - c->r[3];
    { uint32_t r = c->r[1] * c->r[7]; c->r[1] = r; }
    c->r[6] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[6] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[6] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[6] - c->r[3];
    { uint32_t r = c->r[3] * c->r[7]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[7]; c->r[0] = r; }
    c->r[7] = c->r[13] + 0x2b0u;
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca98a8; }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[10]); }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca9478; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[4] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca9410; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ca9414;
L_ca9410:;
    c->r[9] = 0x0u;
L_ca9414:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ca9438; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xca9434u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca9438:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_ca9478; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ca9478:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[6] = 0x10u;
    c->r[4] = 0x0u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[4]); }
    c->r[1] = c->r[6] & (c->r[0] >> 21);
    c->r[3] = c->r[6] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[4]); }
    c->r[2] = c->r[6] & (c->r[1] >> 21);
    c->r[1] = c->r[6] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[5]); }
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[5] = c->r[8] + 0x100u;
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[6] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[5] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[5] + (c->r[2] << 4);
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[6]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[7];
    c->r[3] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[4]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->r[14] = 0xca95dcu; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca9684; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca96b4; }
    c->r[4] = c->r[13] + 0x210u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[13] + 0x80u;
    c->r[1] = c->r[4];
    goto L_ca96c4;
L_ca9684:;
    c->r[5] = c->r[13] + 0x80u;
    c->r[3] = c->r[0] & 0xfu;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[0] = c->r[5];
    c->r[14] = 0xca969cu; f_cfd42c(c);
    c->r[4] = c->r[13] + 0x210u;
    c->r[0] = c->r[7];
    c->r[2] = c->r[5];
    c->r[1] = c->r[4];
    goto L_ca96c4;
L_ca96b4:;
    c->r[4] = c->r[13] + 0x210u;
    c->r[0] = c->r[7];
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[4];
L_ca96c4:;
    c->r[14] = 0xca96c8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xf0u;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    c->r[3] = c->r[13] + 0x240u;
    c->r[5] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[8];
    c->r[2] = c->r[5];
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xca9784u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x274u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[0] = vcvt_u32_f64((double)c->v.f[16]);
    c->r[0] = c->r[0] - 0x1u;
    c->r[1] = c->v.s[0];
    (void)f_subs(c, c->r[0], c->r[1]);
    if (COND_CS) { goto L_ca9874; }
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[0] = v; }
    if (COND_CC) { goto L_ca98a8; }
    c->r[2] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[7] = c->r[13] + 0x2b0u;
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[7];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xca9870u; f_a8c0c8(c);
    goto L_ca98a4;
L_ca9874:;
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[8];
    c->r[3] = c->r[5];
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[0] = (c->r[0] >> 8) & 0xfu;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x8u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xca98a4u; f_ca130c(c);
L_ca98a4:;
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_ca98a8:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca90f4; }
    goto L_caa72c;
L_ca98b4:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_caa72c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[22] = 0x3f800000u;
    c->r[6] = 0x0u;
    c->v.f[24] = c->v.f[22] - c->v.f[18];
    c->r[5] = c->r[0] & 0x3u;
    c->r[0] = c->r[9] + 0xd0u;
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_ca9910:;
    c->r[8] = c->r[10];
    c->r[10] = 0x0u;
    { uint32_t ea = c->r[8] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca995c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_ca9950; }
L_ca9930:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[5] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca9950; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_ca9930; }
    c->r[10] = 0x0u;
    goto L_ca995c;
L_ca9950:;
    c->r[10] = c->r[0];
    /* pld */
    /* pld */
L_ca995c:;
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = 0x10u;
    c->r[2] = c->r[8] + 0x20u;
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    c->r[0] = c->r[8] + 0x8u;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[12]);
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    ST32(c->r[13] + 240u, c->v.s[0]);
    ST32(c->r[13] + 244u, c->v.s[4]);
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_ca9b30; }
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 224u, c->v.s[6]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca9a18; }
    c->r[14] = 0xca9a14u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_ca9a18:;
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->r[4] = c->r[13] + 0x2b0u;
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_ca9a4c; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xca9a4cu; f_15efddc(c);
L_ca9a4c:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[20]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_ca9a68; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_ca9a90;
L_ca9a68:;
    c->v.f[0] = c->v.f[22] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_ca9a90:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xe4u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[9] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[9] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[1] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[2] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[0] = c->r[0] & 0x1u;
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xe0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 688u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 692u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x280u;
    c->r[2] = c->r[4];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 696u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xca9b2cu; f_ea99ec(c);
    c->r[4] = c->r[0];
L_ca9b30:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_caa074; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[8] + 0xd0u;
    { uint32_t ea = c->r[1] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[6] = 0x0u;
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_caa074; }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_ca9c88; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_ca9c20; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[9] = v; }
    goto L_ca9c24;
L_ca9c20:;
    c->r[9] = 0x0u;
L_ca9c24:;
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[9] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_ca9c48; }
    c->r[0] = c->r[9];
    c->r[1] = 0x10u;
    c->r[14] = 0xca9c44u; f_a82674(c);
    { uint32_t ea = c->r[9] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_ca9c48:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[9] + 0x14u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[9] = v; }
    if (COND_EQ) { goto L_ca9c88; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_ca9c88:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->r[7] = 0x10u;
    c->r[2] = c->r[8] + 0x60u;
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[8] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 196u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 200u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x7cu; ST32(ea, c->r[6]); }
    c->r[6] = c->r[8] + 0x100u;
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 112u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 116u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[8] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[2]);
    ST32(c->r[13] + 120u, c->v.s[0]);
    { uint32_t ea = c->r[4] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[4] = c->r[13] + 0x2b0u;
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[6] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[6] + (c->r[2] << 4);
    c->r[6] = 0x0u;
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0x70u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[4];
    c->r[3] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x6cu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0x60u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[9];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[24] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[24] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[24] * c->v.f[8]);
    ST32(c->r[13] + 96u, c->v.s[0]);
    ST32(c->r[13] + 100u, c->v.s[2]);
    ST32(c->r[13] + 104u, c->v.s[4]);
    c->r[14] = 0xca9df0u; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x270u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x20000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca9e98; }
    { uint32_t sc = 0; uint32_t r = c->r[0] & 0x10000u; c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_NE) { goto L_ca9ec4; }
    c->r[0] = c->r[4];
    c->r[4] = c->r[13] + 0x210u;
    c->r[2] = c->r[13] + 0x80u;
    c->r[1] = c->r[4];
    goto L_ca9ed4;
L_ca9e98:;
    c->r[7] = c->r[13] + 0x80u;
    c->r[3] = c->r[0] & 0xfu;
    c->r[1] = c->r[13] + 0xf0u;
    c->r[2] = c->r[13] + 0xd0u;
    c->r[0] = c->r[7];
    c->r[14] = 0xca9eb0u; f_cfd42c(c);
    c->r[0] = c->r[4];
    c->r[4] = c->r[13] + 0x210u;
    c->r[2] = c->r[7];
    c->r[1] = c->r[4];
    goto L_ca9ed4;
L_ca9ec4:;
    c->r[0] = c->r[4];
    c->r[4] = c->r[13] + 0x210u;
    c->r[1] = c->r[13] + 0x80u;
    c->r[2] = c->r[4];
L_ca9ed4:;
    c->r[14] = 0xca9ed8u; f_229d48(c);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xf0u;
    c->r[3] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x240u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x244u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2e8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x248u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ecu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[8];
    c->r[2] = c->r[13] + 0x110u;
    c->r[3] = c->r[4];
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[9];
    c->r[14] = 0xca9f8cu; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_caa074; }
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0x110u;
    c->r[14] = c->r[10];
    c->r[10] = c->r[5];
    { uint32_t ea = c->r[0] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[1] = c->r[0];
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[8] + 0x18u;
    c->r[2] = 0x4u;
    c->r[5] = c->r[10];
    c->r[6] = 0x0u;
    c->r[10] = c->r[14];
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[13] + 0x2b0u;
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcaa070u; f_a8c0c8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_caa074:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_ca9910; }
    goto L_caa72c;
L_caa080:;
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_EQ) { goto L_caa72c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->v.s[20] = 0x3f800000u;
    c->v.s[24] = 0x34000000u;
    c->r[6] = 0x0u;
    c->v.f[22] = c->v.f[20] - c->v.f[18];
    c->r[2] = c->r[0] & 0x3u;
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x38u; ST32(ea, c->r[2]); }
    c->r[8] = c->r[0] + 0xd0u;
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[1] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x34u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x28u; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[13] + 0x2cu; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x40u;
    { uint32_t ea = c->r[13] + 0x24u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[0] + 0x80u;
    c->r[0] = c->r[0] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x20u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x1cu; ST32(ea, c->r[0]); }
L_caa0e4:;
    { uint32_t ea = c->r[10] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = 0x0u;
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_caa12c; }
    { uint32_t ea = c->r[13] + 0x54u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[1], 0x0u);
    if (COND_EQ) { goto L_caa120; }
L_caa100:;
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t r = c->r[2] & c->r[1]; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_caa120; }
    { uint32_t ea = c->r[0] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { goto L_caa100; }
    c->r[1] = 0x0u;
    goto L_caa12c;
L_caa120:;
    c->r[1] = c->r[0];
    /* pld */
    /* pld */
L_caa12c:;
    { uint32_t ea = c->r[13] + 0x58u; ST32(ea, c->r[1]); }
    c->r[3] = 0x10u;
    c->r[2] = c->r[10] + 0x20u;
    c->r[5] = c->r[10] + 0x8u;
    { uint32_t ea = c->r[10] + 0xcu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[1] = c->r[3] & (c->r[0] >> 21);
    c->r[0] = c->r[3] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[0] = c->r[2] + c->r[0];
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[0] + 4u);
    c->v.s[6] = LD32(c->r[0] + 8u);
    c->v.s[8] = LD32(c->r[1]);
    c->v.s[10] = LD32(c->r[1] + 4u);
    c->v.s[12] = LD32(c->r[1] + 8u);
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t r = c->r[0] & 0x4u; c->nf = r >> 31; c->zf = r == 0; }
    c->v.f[4] = c->v.f[18] * c->v.f[2];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[2] = c->v.f[18] * c->v.f[6];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[10]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[12]);
    ST32(c->r[13] + 240u, c->v.s[0]);
    ST32(c->r[13] + 244u, c->v.s[4]);
    ST32(c->r[13] + 248u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xfcu; ST32(ea, c->r[6]); }
    if (COND_EQ) { goto L_caa2f8; }
    c->v.s[6] = LD32(c->r[13] + 256u);
    c->v.s[8] = LD32(c->r[13] + 260u);
    c->v.s[10] = LD32(c->r[13] + 264u);
    c->v.f[6] = c->v.f[6] - c->v.f[0];
    c->v.f[4] = c->v.f[8] - c->v.f[4];
    c->v.f[2] = c->v.f[10] - c->v.f[2];
    c->v.f[0] = c->v.f[4] * c->v.f[4];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[6] * c->v.f[6]);
    ST32(c->r[13] + 224u, c->v.s[6]);
    ST32(c->r[13] + 228u, c->v.s[4]);
    ST32(c->r[13] + 232u, c->v.s[2]);
    { uint32_t ea = c->r[13] + 0xecu; ST32(ea, c->r[6]); }
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[2] * c->v.f[2]);
    c->v.f[16] = sqrtf(c->v.f[0]);
    vfp_cmp_f(c, c->v.f[16], c->v.f[16]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_caa1e8; }
    c->r[14] = 0xcaa1e4u; f_15efddc(c);
    c->v.s[16] = c->v.s[0];
L_caa1e8:;
    c->v.s[2] = LD32(c->r[13] + 228u);
    c->v.s[0] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 232u);
    c->v.f[2] = c->v.f[2] * c->v.f[2];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[0] * c->v.f[0]);
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[4] * c->v.f[4]);
    c->v.f[0] = sqrtf(c->v.f[2]);
    vfp_cmp_f(c, c->v.f[0], c->v.f[0]);
    vfp_mrs_flags(c);
    if (COND_VC) { goto L_caa218; }
    c->v.s[0] = c->v.s[2];
    c->r[14] = 0xcaa218u; f_15efddc(c);
L_caa218:;
    vfp_cmp_f(c, c->v.f[0], c->v.f[24]);
    vfp_mrs_flags(c);
    if (COND_PL) { goto L_caa234; }
    { uint32_t ea = c->r[13] + 0xe0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xe4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0xe8u; uint32_t v = LD32(ea); c->r[2] = v; }
    goto L_caa25c;
L_caa234:;
    c->v.f[0] = c->v.f[20] / c->v.f[0];
    c->v.s[2] = LD32(c->r[13] + 224u);
    c->v.s[4] = LD32(c->r[13] + 228u);
    c->v.s[6] = LD32(c->r[13] + 232u);
    c->v.f[4] = c->v.f[0] * c->v.f[4];
    c->v.f[2] = c->v.f[0] * c->v.f[2];
    c->v.f[0] = c->v.f[0] * c->v.f[6];
    c->r[0] = c->v.s[4];
    c->r[1] = c->v.s[2];
    c->r[2] = c->v.s[0];
L_caa25c:;
    { uint32_t ea = c->r[13] + 0xe0u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xe4u;
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[2]); ST32(ea + 8u, c->r[6]); }
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[7] = v; }
    { uint32_t ea = c->r[5]; uint32_t v = LD16(ea); c->r[1] = v; }
    { uint32_t ea = c->r[8] + 0xcu; uint32_t v = LD16(ea); c->r[2] = v; }
    { uint32_t ea = c->r[5] + 0x7u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[7] + 0x24u; uint32_t v = LD32(ea); c->r[3] = v; }
    { uint32_t ea = c->r[7] + 0xccu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[0] = c->r[0] & 0x1u;
    { uint32_t ea = c->r[13] + 0x2bcu; ST32(ea, c->r[6]); }
    { uint32_t r = c->r[2] * c->r[1] + c->r[7]; c->r[1] = r; }
    c->r[2] = c->r[0] ^ 0x1u;
    c->r[1] = c->r[3] + c->r[1];
    { uint32_t ea = c->r[13] + 0x48u; uint32_t v = LD32(ea); c->r[3] = v; }
    c->r[1] = c->r[1] + 0x10u;
    c->r[2] = c->r[1] + (c->r[2] << 4);
    c->r[0] = c->r[1] + (c->r[0] << 4);
    c->r[1] = c->r[13] + 0xe0u;
    c->v.s[0] = LD32(c->r[0]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 688u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 692u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[0] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[0] = c->r[13] + 0x280u;
    c->r[2] = c->r[13] + 0x2b0u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 696u, c->v.s[0]);
    c->v.s[0] = c->v.s[16];
    c->r[14] = 0xcaa2f4u; f_ea99ec(c);
    c->r[4] = c->r[0];
L_caa2f8:;
    (void)f_subs(c, c->r[4], 0x0u);
    if (COND_EQ) { goto L_caa71c; }
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[0] = c->r[10] + 0xd0u;
    c->r[2] = (c->r[1] >> 25) & 0x1u;
    { uint32_t ea = c->r[0] + (c->r[2] << 2); uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[1] = (c->r[1] >> 24) & 0x1u;
    { uint32_t ea = c->r[13] + 0x50u; uint32_t v = LD32(ea); c->r[6] = v; }
    { uint32_t ea = c->r[0] + (c->r[1] << 2); uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[3] = (uint32_t)(uint8_t)(c->r[2]);
    c->r[1] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[1] = c->r[1] - c->r[3];
    c->r[3] = (c->r[2] >> 8) & 0xffu;
    c->r[7] = (c->r[0] >> 8) & 0xffu;
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[1] * c->r[6]; c->r[1] = r; }
    c->r[7] = (c->r[2] >> 8);
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    c->r[1] = c->r[2] + (c->r[1] >> 8);
    c->r[3] = c->r[3] + (c->r[7] << 8);
    c->r[1] = (uint32_t)(uint8_t)(c->r[1]);
    c->r[3] = c->r[3] & 0xff00u;
    c->r[1] = c->r[3] | c->r[1];
    c->r[3] = (c->r[2] >> 16) & 0xffu;
    c->r[7] = (c->r[0] >> 16) & 0xffu;
    c->r[0] = (c->r[0] >> 24);
    c->r[0] = c->r[0] - (c->r[2] >> 24);
    c->r[3] = c->r[7] - c->r[3];
    { uint32_t r = c->r[3] * c->r[6]; c->r[3] = r; }
    { uint32_t r = c->r[0] * c->r[6]; c->r[0] = r; }
    c->r[6] = 0x0u;
    c->r[3] = (c->r[3] >> 8);
    c->r[0] = (c->r[0] >> 8);
    c->r[3] = c->r[3] + (c->r[2] >> 16);
    c->r[0] = c->r[0] + (c->r[2] >> 24);
    c->r[3] = (c->r[3] << 16);
    c->r[0] = (uint32_t)(uint8_t)(c->r[0]);
    c->r[3] = uxtb16(c->r[3]);
    { uint32_t r = c->r[0] * c->r[4]; c->r[0] = r; }
    c->r[1] = c->r[1] | c->r[3];
    c->r[2] = (uint32_t)((int32_t)c->r[0] >> 8);
    c->r[1] = c->r[1] | (c->r[2] << 24);
    { uint32_t ea = c->r[13] + 0x278u; ST32(ea, c->r[1]); }
    c->r[1] = 0xffu;
    { uint32_t sc = ((c->r[0] >> 7) & 1); uint32_t r = c->r[1] & (uint32_t)((int32_t)c->r[0] >> 8); c->cf = sc; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_caa71c; }
    { uint32_t ea = c->r[13] + 0x280u; uint32_t v = LD8(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; ST32(ea, c->r[4]); }
    { uint32_t r = c->r[0] & 0x2u; c->nf = r >> 31; c->zf = r == 0; }
    if (COND_EQ) { goto L_caa454; }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2acu; uint32_t v = LD32(ea); c->r[7] = v; }
    c->r[4] = c->r[8];
    { uint32_t ea = c->r[1] + 0x54u; uint32_t v = LD32(ea); c->r[0] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_EQ) { goto L_caa3ec; }
    c->r[0] = c->r[0] + (c->r[0] << 1);
    c->r[0] = c->r[1] + (c->r[0] << 2);
    { uint32_t ea = c->r[0] + 0x8u; uint32_t v = LD32(ea); c->r[8] = v; }
    goto L_caa3f0;
L_caa3ec:;
    c->r[8] = 0x0u;
L_caa3f0:;
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[8] + 0x18u; uint32_t v = LD32(ea); c->r[1] = v; }
    c->r[2] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[2], c->r[1]);
    if (COND_LS) { goto L_caa414; }
    c->r[0] = c->r[8];
    c->r[1] = 0x10u;
    c->r[14] = 0xcaa410u; f_a82674(c);
    { uint32_t ea = c->r[8] + 0x14u; uint32_t v = LD32(ea); c->r[0] = v; }
L_caa414:;
    c->r[1] = c->r[0] + 0x10u;
    (void)f_subs(c, c->r[0], 0x0u);
    { uint32_t ea = c->r[8] + 0x14u; ST32(ea, c->r[1]); }
    c->r[8] = c->r[4];
    if (COND_EQ) { goto L_caa454; }
    { uint32_t ea = c->r[13] + 0xf0u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x4u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0xf8u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0] + 0x8u; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[0] + 0xcu; ST32(ea, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[1] + 0xa4u; ST32(ea, c->r[0]); }
    c->r[0] = 0x1u;
    { uint32_t ea = c->r[1] + 0xc4u; ST8(ea, c->r[0]); }
L_caa454:;
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[7] = 0x10u;
    c->r[2] = c->r[10] + 0x60u;
    { uint32_t ea = c->r[13] + 0x8cu; ST32(ea, c->r[6]); }
    c->r[4] = c->r[10] + 0x100u;
    c->r[1] = c->r[7] & (c->r[0] >> 21);
    c->r[3] = c->r[7] & (c->r[0] >> 20);
    c->r[1] = c->r[2] + c->r[1];
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[10] + 0x80u;
    c->v.s[0] = LD32(c->r[2]);
    c->v.s[2] = LD32(c->r[1]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 128u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 4u);
    c->v.s[2] = LD32(c->r[1] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 132u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[2] + 8u);
    c->v.s[2] = LD32(c->r[1] + 8u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 136u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0xdcu; ST32(ea, c->r[6]); }
    c->r[2] = c->r[7] & (c->r[1] >> 21);
    c->r[1] = c->r[7] & (c->r[1] >> 20);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = c->r[3] + c->r[1];
    c->v.s[0] = LD32(c->r[1]);
    c->v.s[2] = LD32(c->r[2]);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 208u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 4u);
    c->v.s[2] = LD32(c->r[2] + 4u);
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 212u, c->v.s[0]);
    c->v.s[0] = LD32(c->r[1] + 8u);
    c->v.s[2] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[10] + 0x40u;
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[2]);
    ST32(c->r[13] + 216u, c->v.s[0]);
    { uint32_t ea = c->r[5] + 0x4u; uint32_t v = LD32(ea); c->r[2] = v; }
    c->r[3] = (c->r[2] >> 24) & 0x1u;
    c->r[2] = (c->r[2] >> 25) & 0x1u;
    c->r[7] = c->r[1] + (c->r[3] << 2);
    c->r[3] = c->r[4] + (c->r[3] << 4);
    c->r[1] = c->r[1] + (c->r[2] << 2);
    c->r[2] = c->r[4] + (c->r[2] << 4);
    { uint32_t ea = c->r[13] + 0x44u; uint32_t v = LD32(ea); c->r[4] = v; }
    c->v.s[14] = LD32(c->r[1]);
    c->v.s[8] = LD32(c->r[2]);
    c->v.s[0] = LD32(c->r[3]);
    c->v.s[6] = LD32(c->r[7]);
    c->v.s[2] = LD32(c->r[3] + 4u);
    c->v.s[4] = LD32(c->r[3] + 8u);
    c->v.s[10] = LD32(c->r[2] + 4u);
    c->v.s[12] = LD32(c->r[2] + 8u);
    c->r[1] = c->r[13] + 0xd0u;
    c->r[2] = (uint32_t)(uint16_t)(c->r[0]);
    c->r[0] = c->r[13] + 0x2b0u;
    c->r[3] = c->r[13] + 0x80u;
    { uint32_t ea = c->r[13] + 0xccu; ST32(ea, c->r[6]); }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    c->r[1] = c->r[13] + 0xc0u;
    { uint32_t ea = c->r[13] + 0x4u; ST32(ea, c->r[1]); }
    c->r[1] = c->r[4];
    c->v.f[0] = c->v.f[6] * c->v.f[0];
    c->v.f[8] = c->v.f[14] * c->v.f[8];
    c->v.f[2] = c->v.f[6] * c->v.f[2];
    c->v.f[4] = c->v.f[6] * c->v.f[4];
    c->v.f[6] = c->v.f[14] * c->v.f[10];
    c->v.f[0] = c->v.f[18] * c->v.f[0];
    c->v.f[0] = c->v.f[0] + (float)(c->v.f[22] * c->v.f[8]);
    c->v.f[8] = c->v.f[14] * c->v.f[12];
    c->v.f[2] = c->v.f[18] * c->v.f[2];
    c->v.f[4] = c->v.f[18] * c->v.f[4];
    c->v.f[2] = c->v.f[2] + (float)(c->v.f[22] * c->v.f[6]);
    c->v.f[4] = c->v.f[4] + (float)(c->v.f[22] * c->v.f[8]);
    ST32(c->r[13] + 192u, c->v.s[0]);
    ST32(c->r[13] + 196u, c->v.s[2]);
    ST32(c->r[13] + 200u, c->v.s[4]);
    c->r[14] = 0xcaa5b4u; f_c6cab8(c);
    { uint32_t ea = c->r[13] + 0x2b0u; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[2] = c->r[13] + 0xf0u;
    c->r[3] = c->r[13] + 0x240u;
    { uint32_t ea = c->r[13] + 0x210u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x214u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2b8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x218u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2bcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x21cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x220u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x224u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2c8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x228u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2ccu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x22cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d0u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x230u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d4u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x234u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2d8u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x238u; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[13] + 0x2dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x23cu; ST32(ea, c->r[0]); }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[1] = LD32(ea + 4u); c->r[2] = LD32(ea + 8u); }
    { uint32_t ea = c->r[3]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[1]); ST32(ea + 8u, c->r[2]); }
    c->r[0] = 0x3f800000u;
    c->r[1] = c->r[10];
    c->r[2] = c->r[13] + 0x110u;
    c->r[3] = c->r[13] + 0x210u;
    { uint32_t ea = c->r[13] + 0x24cu; ST32(ea, c->r[0]); }
    c->r[0] = c->r[13] + 0x258u;
    { uint32_t ea = c->r[13]; ST32(ea, c->r[0]); }
    c->r[0] = c->r[4];
    c->r[14] = 0xcaa648u; f_ca0cdc(c);
    { uint32_t ea = c->r[13] + 0x1dcu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
    (void)f_subs(c, c->r[0], 0x1000000u);
    if (COND_CC) { goto L_caa71c; }
    c->r[2] = c->r[13] + 0x110u;
    { uint32_t ea = c->r[5] + 0x6u; uint32_t v = LD8(ea); c->r[12] = v; }
    c->r[14] = c->r[13] + 0x2b0u;
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[2] = c->r[2] + 20u; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[2]; c->r[0] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[0]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x24u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x28u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x20u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x2cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[1] = c->r[1] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[0] = c->r[0] + 20u; }
    { uint32_t ea = c->r[1]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[0]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    { uint32_t ea = c->r[13] + 0x1cu; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13] + 0x34u; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[0] = c->r[0] + 20u; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[5] = LD32(ea + 8u); c->r[6] = LD32(ea + 12u); c->r[7] = LD32(ea + 16u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[5]); ST32(ea + 12u, c->r[6]); ST32(ea + 16u, c->r[7]); c->r[1] = c->r[1] + 20u; }
    { uint32_t ea = c->r[0]; c->r[2] = LD32(ea + 0u); c->r[3] = LD32(ea + 4u); c->r[4] = LD32(ea + 8u); c->r[5] = LD32(ea + 12u); c->r[6] = LD32(ea + 16u); c->r[7] = LD32(ea + 20u); }
    { uint32_t ea = c->r[1]; ST32(ea + 0u, c->r[2]); ST32(ea + 4u, c->r[3]); ST32(ea + 8u, c->r[4]); ST32(ea + 12u, c->r[5]); ST32(ea + 16u, c->r[6]); ST32(ea + 20u, c->r[7]); }
    c->r[3] = c->r[10] + 0x18u;
    c->r[2] = 0x4u;
    c->r[6] = 0x0u;
    { uint32_t ea = c->r[13] + 0x3cu; uint32_t v = LD32(ea); c->r[1] = v; }
    { uint32_t ea = c->r[13] + 0x30u; uint32_t v = LD32(ea); c->r[0] = v; }
    { uint32_t ea = c->r[13]; ST32(ea, c->r[1]); }
    { uint32_t ea = c->r[13] + 0x40u; uint32_t v = LD32(ea); c->r[1] = v; }
    (void)f_subs(c, c->r[0], 0x0u);
    if (COND_NE) { c->r[0] = 0x1u; }
    { uint32_t ea = c->r[13] + 4u; ST32(ea + 0u, c->r[1]); ST32(ea + 4u, c->r[12]); }
    { uint32_t ea = c->r[13] + 0xcu; ST32(ea, c->r[0]); }
    c->r[1] = c->r[14];
    { uint32_t ea = c->r[13] + 0x4cu; uint32_t v = LD32(ea); c->r[0] = v; }
    c->r[14] = 0xcaa718u; f_a8c0c8(c);
    { uint32_t ea = c->r[13] + 0x5cu; uint32_t v = LD32(ea); c->r[4] = v; }
L_caa71c:;
    { uint32_t ea = c->r[13] + 0x58u; uint32_t v = LD32(ea); c->r[10] = v; }
    { uint32_t ea = c->r[13] + 0x38u; uint32_t v = LD32(ea); c->r[2] = v; }
    (void)f_subs(c, c->r[10], 0x0u);
    if (COND_NE) { goto L_caa0e4; }
L_caa72c:;
    c->r[13] = c->r[11] - 0x48u;
    { uint32_t ea = c->r[13]; c->v.d[8] = LD64(ea + 0u); c->v.d[9] = LD64(ea + 8u); c->v.d[10] = LD64(ea + 16u); c->v.d[11] = LD64(ea + 24u); c->v.d[12] = LD64(ea + 32u); c->r[13] = c->r[13] + 40u; }
    c->r[13] = c->r[13] + 0x4u;
    { uint32_t ea = c->r[13]; c->r[13] = c->r[13] + 36u; c->r[4] = LD32(ea + 0u); c->r[5] = LD32(ea + 4u); c->r[6] = LD32(ea + 8u); c->r[7] = LD32(ea + 12u); c->r[8] = LD32(ea + 16u); c->r[9] = LD32(ea + 20u); c->r[10] = LD32(ea + 24u); c->r[11] = LD32(ea + 28u); c->pc = LD32(ea + 32u); } return;
}
